static void Switch_SetBattlerAiData(u32 battler, struct AiLogicData *aiData)
{
    u32 ability, holdEffect;

    ability = aiData->abilities[battler] = AI_DecideKnownAbilityForTurn(battler);
    aiData->items[battler] = gBattleMons[battler].item;
    holdEffect = aiData->holdEffects[battler] = AI_DecideHoldEffectForTurn(battler);
    aiData->holdEffectParams[battler] = GetBattlerHoldEffectParam(battler);
    aiData->hpPercents[battler] = GetHealthPercentage(battler);
    aiData->speedStats[battler] = GetBattlerTotalSpeedStatArgs(battler, ability, holdEffect);
    aiData->lastUsedMove[battler] = MOVE_NONE;
}

u32 Switch_NoOfHitsToFaintBattler(u32 battlerAtk, u32 battlerDef, struct BattlePokemon switchinCandidate, bool32 isPartyMonAttacker)
{
    u8 effectiveness;
    u32 indexMoveNoOfHits;
    u32 leastNumberOfHits = UNKNOWN_NO_OF_HITS;
    u16 *moves = GetMovesArray(battlerAtk);
    struct BattlePokemon *savedBattleMons = AllocSaveBattleMons();

    if (isPartyMonAttacker)
    {
        gBattleMons[battlerAtk] = switchinCandidate;
        Switch_SetBattlerAiData(battlerAtk, AI_DATA);
    }
    else
    {
        gBattleMons[battlerDef] = switchinCandidate;
        Switch_SetBattlerAiData(battlerDef, AI_DATA);
    }

    for (u32 moveIndex = 0; moveIndex < MAX_MON_MOVES; moveIndex++)
    {
        struct SimulatedDamage dmg = AI_CalcDamage(moves[moveIndex], battlerAtk, battlerDef, &effectiveness, FALSE, AI_GetWeather(AI_DATA), FALSE);
        indexMoveNoOfHits = GetNoOfHitsToKOBattlerDmg(dmg.expected, battlerDef);
        if (indexMoveNoOfHits == 1 && CanEndureHit(battlerAtk, battlerDef, moves[moveIndex]))
            indexMoveNoOfHits++;

        if (indexMoveNoOfHits < leastNumberOfHits)
            leastNumberOfHits = indexMoveNoOfHits;
    }

    FreeRestoreBattleMons(savedBattleMons);
    if (isPartyMonAttacker)
        Switch_SetBattlerAiData(battlerAtk, AI_DATA);
    else
        Switch_SetBattlerAiData(battlerDef, AI_DATA);

    return leastNumberOfHits;
}

static u32 Switch_AiIsFaster(u32 battlerAtk, u32 battlerDef, struct BattlePokemon switchinCandidate)
{
    struct BattlePokemon *savedBattleMons = AllocSaveBattleMons();
    gBattleMons[battlerAtk] = switchinCandidate;

    Switch_SetBattlerAiData(battlerAtk, AI_DATA);
    u32 aiMonFaster = AI_WhoStrikesFirst(battlerAtk, battlerDef) == AI_IS_FASTER;
    FreeRestoreBattleMons(savedBattleMons);
    Switch_SetBattlerAiData(battlerAtk, AI_DATA);

    return aiMonFaster;
}

static u32 GetBestMonCustom(struct Pokemon *party, u32 firstId, u32 lastId, u32 battlerAI, u32 opposingBattler, u32 battlerIn1, u32 battlerIn2)
{
    u32 monId;
    u32 aiMonFaster;
    u32 aiMonSpecies;
    u32 bestMonId = PARTY_SIZE;
    u32 switchInScores[PARTY_SIZE] = {INVALID_MON};
    u32 hitsToFaintPlayer = UNKNOWN_NO_OF_HITS;
    u32 hitsToFaintAI = UNKNOWN_NO_OF_HITS;
    u32 storeCurrBattlerPartyIndex = gBattlerPartyIndexes[battlerAI];
    gBattleStruct->switchInCalcsInProgress = TRUE;
    gBattleStruct->aiCalcInProgress = TRUE;

    for (monId = firstId; monId < lastId; monId++)
    {
        if (!IsValidForBattle(&party[monId])
         || gBattlerPartyIndexes[battlerIn1] == monId
         || gBattlerPartyIndexes[battlerIn2] == monId
         || gBattleStruct->monToSwitchIntoId[battlerIn1] == monId
         || gBattleStruct->monToSwitchIntoId[battlerIn2] == monId)
            continue;

        gBattlerPartyIndexes[battlerAI] = monId;
        InitializeSwitchinCandidate(&party[monId]);
        aiMonSpecies = AI_DATA->switchinCandidate.battleMon.species;
        aiMonFaster = Switch_AiIsFaster(battlerAI, opposingBattler, AI_DATA->switchinCandidate.battleMon);
        hitsToFaintPlayer = Switch_NoOfHitsToFaintBattler(battlerAI, opposingBattler, AI_DATA->switchinCandidate.battleMon, TRUE);
        hitsToFaintAI = Switch_NoOfHitsToFaintBattler(opposingBattler, battlerAI, AI_DATA->switchinCandidate.battleMon, FALSE);
        gBattlerPartyIndexes[battlerAI] = storeCurrBattlerPartyIndex;

        if (aiMonFaster && aiMonSpecies == SPECIES_PALAFIN_ZERO)
            switchInScores[monId] = 8;
        else if (aiMonFaster && hitsToFaintPlayer == 1)
            switchInScores[monId] = 7;
        else if (hitsToFaintPlayer == 1 && hitsToFaintAI > 1)
            switchInScores[monId] = 6;
        else if (aiMonFaster && hitsToFaintAI >= hitsToFaintPlayer)
            switchInScores[monId] = 5;
        else if (!aiMonFaster && hitsToFaintAI > hitsToFaintPlayer)
            switchInScores[monId] = 4;
        else if (aiMonFaster)
            switchInScores[monId] = 3;
        else if (!aiMonFaster && hitsToFaintAI == 1)
            switchInScores[monId] = 1;
        else
            switchInScores[monId] = 2;
    }

    u32 bestSwitchInScore = 0;
    for (monId = firstId; monId < lastId; monId++)
    {
        if (switchInScores[monId] == INVALID_MON)
            continue;

        if (switchInScores[monId] > bestSwitchInScore)
        {
            bestSwitchInScore = switchInScores[monId];
            bestMonId = monId;
        }
    }

    gBattleStruct->switchInCalcsInProgress = FALSE;
    gBattleStruct->aiCalcInProgress = FALSE;
    return bestMonId;
}

static bool32 FindMonToSwitchInto(u32 battlerAI)
{
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;

    u32 aiMonFaster;
    u32 bestMonId = PARTY_SIZE;
    u32 hitsToFaintPlayer, hitsToFaintAI;
    u32 switchInScores[PARTY_SIZE] = {INVALID_MON};
    u32 storeCurrBattlerPartyIndex = gBattlerPartyIndexes[battlerAI];
    gBattleStruct->switchInCalcsInProgress = TRUE;
    gBattleStruct->aiCalcInProgress = TRUE;

    u32 opposingBattler = BATTLE_OPPOSITE(battlerAI);
    GetAIPartyIndexes(battlerAI, &firstId, &lastId);
    party = GetBattlerParty(battlerAI);

    for (u32 battler = firstId; battler < lastId; battler++)
    {
        if (!IsValidForBattle(&party[battler]) || battler == gBattlerPartyIndexes[battlerAI])
            continue;

        gBattlerPartyIndexes[battlerAI] = battler;
        InitializeSwitchinCandidate(&party[battler]);
        aiMonFaster = Switch_AiIsFaster(battlerAI, opposingBattler, AI_DATA->switchinCandidate.battleMon);
        hitsToFaintPlayer = Switch_NoOfHitsToFaintBattler(battlerAI, opposingBattler, AI_DATA->switchinCandidate.battleMon, TRUE);
        hitsToFaintAI = Switch_NoOfHitsToFaintBattler(opposingBattler, battlerAI, AI_DATA->switchinCandidate.battleMon, FALSE);
        gBattlerPartyIndexes[battlerAI] = storeCurrBattlerPartyIndex;

        if (hitsToFaintAI <= 2)
            switchInScores[battler] = 1;
        else if (aiMonFaster && hitsToFaintPlayer == 1)
            switchInScores[battler] = 5;
        else if (aiMonFaster && hitsToFaintAI >= hitsToFaintPlayer)
            switchInScores[battler] = 4;
        else if (!aiMonFaster && hitsToFaintAI > hitsToFaintPlayer)
            switchInScores[battler] = 3;
        else if (aiMonFaster)
            switchInScores[battler] = 2;
        else
            switchInScores[battler] = 1;
    }

    u32 bestSwitchInScore = 0;
    for (u32 monId = firstId; monId < lastId; monId++)
    {
        if (switchInScores[monId] == INVALID_MON)
            continue;

        if (switchInScores[monId] > bestSwitchInScore)
        {
            bestSwitchInScore = switchInScores[monId];
            bestMonId = monId;
        }
    }

    gBattleStruct->switchInCalcsInProgress = FALSE;
    gBattleStruct->aiCalcInProgress = FALSE;

    if (bestSwitchInScore == 1)
        return FALSE;

    if (bestSwitchInScore == 0 || gBattleMons[battlerAI].hp < (gBattleMons[battlerAI].maxHP / 2))
        return FALSE;

    gBattleStruct->AI_monToSwitchIntoId[battlerAI] = bestMonId;
    return TRUE;
}

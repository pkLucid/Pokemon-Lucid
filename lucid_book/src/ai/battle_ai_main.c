#include "global.h"
#include "main.h"
#include "malloc.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_ai_util.h"
#include "battle_ai_main.h"
#include "battle_controllers.h"
#include "battle_factory.h"
#include "battle_setup.h"
#include "battle_z_move.h"
#include "battle_terastal.h"
#include "data.h"
#include "debug.h"
#include "event_data.h"
#include "item.h"
#include "pokemon.h"
#include "random.h"
#include "recorded_battle.h"
#include "util.h"
#include "script.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/moves.h"
#include "constants/items.h"
#include "constants/trainers.h"

#define AI_ACTION_DONE          (1 << 0)
#define AI_ACTION_FLEE          (1 << 1)
#define AI_ACTION_WATCH         (1 << 2)
#define AI_ACTION_DO_NOT_ATTACK (1 << 3)

static u32 ChooseMoveOrAction_Singles(u32 battlerAi);
static u32 ChooseMoveOrAction_Doubles(u32 battlerAi);
static inline void BattleAI_DoAIProcessing(struct AI_ThinkingStruct *aiThink, u32 battlerAi, u32 battlerDef);
static bool32 IsPinchBerryItemEffect(u32 holdEffect);

// ewram
EWRAM_DATA const u8 *gAIScriptPtr = NULL;   // Still used in contests
EWRAM_DATA u8 sBattler_AI = 0;
EWRAM_DATA AiScoreFunc sDynamicAiFunc = NULL;

// const rom data
static s32 AI_CheckBadMove(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_CheckViability(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_Roaming(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_Safari(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);
static s32 AI_FirstBattle(u32 battlerAtk, u32 battlerDef, u32 move, s32 score);

static s32 (*const sBattleAiFuncTable[])(u32, u32, u32, s32) =
{
    [0] = AI_CheckBadMove,           // AI_FLAG_CHECK_BAD_MOVE
    [1] = AI_CheckViability,         // AI_FLAG_CHECK_VIABILITY
    [2] = NULL,                      // Unused
    [3] = NULL,                      // Unused
    [4] = NULL,                      // Unused
    [5] = NULL,                      // Unused
    [6] = NULL,                      // Unused
    [7] = NULL,                      // Unused
    [8] = NULL,                      // Unused
    [9] = NULL,                      // Unused
    [10] = NULL,                     // Unused
    [11] = NULL,                     // Unused
    [12] = NULL,                     // Unused
    [13] = NULL,                     // Unused
    [14] = NULL,                     // Unused
    [15] = NULL,                     // Unused
    [16] = NULL,                     // Unused
    [17] = NULL,                     // Unused
    [18] = NULL,                     // Unused
    [19] = NULL,                     // Unused
    [20] = NULL,                     // Unused
    [21] = NULL,                     // Unused
    [22] = NULL,                     // Unused
    [23] = NULL,                     // Unused
    [24] = NULL,                     // Unused
    [25] = NULL,                     // Unused
    [26] = NULL,                     // Unused
    [27] = NULL,                     // Unused
    [28] = NULL,                     // Unused
    [29] = AI_Roaming,              // AI_FLAG_ROAMING
    [30] = AI_Safari,               // AI_FLAG_SAFARI
    [31] = AI_FirstBattle,          // AI_FLAG_FIRST_BATTLE
};

// Functions
void BattleAI_SetupItems(void)
{
    s32 i;
    u8 *data = (u8 *)BATTLE_HISTORY;
    const u16 *items = GetTrainerItemsFromId(gTrainerBattleOpponent_A);

    for (i = 0; i < sizeof(struct BattleHistory); i++)
        data[i] = 0;

    // Items are allowed to use in ONLY trainer battles.
    if ((gBattleTypeFlags & BATTLE_TYPE_TRAINER)
        && !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_SAFARI | BATTLE_TYPE_BATTLE_TOWER
                               | BATTLE_TYPE_EREADER_TRAINER | BATTLE_TYPE_SECRET_BASE | BATTLE_TYPE_FRONTIER
                               | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_RECORDED_LINK)
            )
       )
    {
        for (i = 0; i < MAX_TRAINER_ITEMS; i++)
        {
            if (items[i] != ITEM_NONE)
            {
                BATTLE_HISTORY->trainerItems[BATTLE_HISTORY->itemsNo] = items[i];
                BATTLE_HISTORY->itemsNo++;
            }
        }
    }
}

static u32 GetWildAiFlags(void)
{
    u32 avgLevel = GetMonData(&gEnemyParty[0], MON_DATA_LEVEL);
    u32 flags = 0;

    if (IsDoubleBattle())
        avgLevel = (GetMonData(&gEnemyParty[0], MON_DATA_LEVEL) + GetMonData(&gEnemyParty[1], MON_DATA_LEVEL)) / 2;

    flags |= AI_FLAG_CHECK_BAD_MOVE;
    if (avgLevel >= 20)
        flags |= AI_FLAG_CHECK_VIABILITY;
    if (avgLevel >= 60)

    if (B_VAR_WILD_AI_FLAGS != 0 && VarGet(B_VAR_WILD_AI_FLAGS) != 0)
        flags |= VarGet(B_VAR_WILD_AI_FLAGS);

    return flags;
}

static u32 GetAiFlags(u16 trainerId)
{
    u32 flags = 0;

    if (!(gBattleTypeFlags & BATTLE_TYPE_HAS_AI) && !IsWildMonSmart())
        return 0;
    if (trainerId == 0xFFFF)
    {
        flags = GetWildAiFlags();
    }
    else
    {
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            flags = GetAiScriptsInRecordedBattle();
        else if (gBattleTypeFlags & BATTLE_TYPE_SAFARI)
            flags = AI_FLAG_SAFARI;
        else if (gBattleTypeFlags & BATTLE_TYPE_ROAMER)
            flags = AI_FLAG_ROAMING;
        else if (gBattleTypeFlags & BATTLE_TYPE_FIRST_BATTLE)
            flags = AI_FLAG_FIRST_BATTLE;
        else if (gBattleTypeFlags & BATTLE_TYPE_FACTORY)
            flags = GetAiScriptsInBattleFactory();
        else if (gBattleTypeFlags & (BATTLE_TYPE_FRONTIER | BATTLE_TYPE_EREADER_TRAINER | BATTLE_TYPE_TRAINER_HILL | BATTLE_TYPE_SECRET_BASE))
            flags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY;
        else
            flags = GetTrainerAIFlagsFromId(trainerId);
    }

    // Automatically includes AI_FLAG_SMART_MON_CHOICES to improve smart switching
    if (flags & AI_FLAG_SMART_SWITCHING)
        flags |= AI_FLAG_SMART_MON_CHOICES;

    if (sDynamicAiFunc != NULL)
        flags |= AI_FLAG_DYNAMIC_FUNC;

    return flags;
}

void BattleAI_SetupFlags(void)
{
    if (IsAiVsAiBattle())
        AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_LEFT] = GetAiFlags(gPartnerTrainerId);
    else
        AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_LEFT] = 0; // player has no AI

#if DEBUG_OVERWORLD_MENU == TRUE
    if (gIsDebugBattle)
    {
        AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT] = gDebugAIFlags;
        AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] = gDebugAIFlags;
        return;
    }
#endif

    if (IsWildMonSmart() && !(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_TRAINER)))
    {
        // smart wild AI
        AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT] = GetAiFlags(0xFFFF);
        AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] = GetAiFlags(0xFFFF);
    }
    else
    {
        AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT] = GetAiFlags(gTrainerBattleOpponent_A);
        if (gTrainerBattleOpponent_B != 0)
            AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] = GetAiFlags(gTrainerBattleOpponent_B);
        else
            AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] = AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT];
    }

    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
    {
        AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_RIGHT] = GetAiFlags(gPartnerTrainerId - TRAINER_PARTNER(PARTNER_NONE));
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE && IsAiVsAiBattle())
    {
        AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_RIGHT] = AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_LEFT];
    }
    else
    {
        AI_THINKING_STRUCT->aiFlags[B_POSITION_PLAYER_RIGHT] = 0; // player
    }
}

// sBattler_AI set in ComputeBattleAiScores
void BattleAI_SetupAIData(u8 defaultScoreMoves, u32 battler)
{
    s32 i;
    u8 moveLimitations;
    u32 flags[MAX_BATTLERS_COUNT];

    // Clear AI data but preserve the flags.
    memcpy(&flags[0], &AI_THINKING_STRUCT->aiFlags[0], sizeof(u32) * MAX_BATTLERS_COUNT);
    memset(AI_THINKING_STRUCT, 0, sizeof(struct AI_ThinkingStruct));
    memcpy(&AI_THINKING_STRUCT->aiFlags[0], &flags[0], sizeof(u32) * MAX_BATTLERS_COUNT);

    // Conditional score reset, unlike Ruby.
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (defaultScoreMoves & 1)
            SET_SCORE(battler, i, AI_SCORE_DEFAULT);
        else
            SET_SCORE(battler, i, 0);

        defaultScoreMoves >>= 1;
    }

    moveLimitations = AI_DATA->moveLimitations[battler];

    // Ignore moves that aren't possible to use.
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (gBitTable[i] & moveLimitations)
            SET_SCORE(battler, i, 0);
    }

    //sBattler_AI = battler;
    gBattlerTarget = SetRandomTarget(sBattler_AI);
    gBattleStruct->aiChosenTarget[sBattler_AI] = gBattlerTarget;
}

u32 BattleAI_ChooseMoveOrAction(void)
{
    u32 ret;

    if (!(gBattleTypeFlags & BATTLE_TYPE_DOUBLE))
        ret = ChooseMoveOrAction_Singles(sBattler_AI);
    else
        ret = ChooseMoveOrAction_Doubles(sBattler_AI);

    // Clear protect structures, some flags may be set during AI calcs
    // e.g. pranksterElevated from GetMovePriority
    memset(&gProtectStructs, 0, MAX_BATTLERS_COUNT * sizeof(struct ProtectStruct));
    #if TESTING
    TestRunner_Battle_CheckAiMoveScores(sBattler_AI);
    #endif // TESTING
    return ret;
}

// damages/other info computed in GetAIDataAndCalcDmg
u32 ComputeBattleAiScores(u32 battler)
{
    sBattler_AI = battler;
    BattleAI_SetupAIData(0xF, sBattler_AI);
    return BattleAI_ChooseMoveOrAction();
}

static void CopyBattlerDataToAIParty(u32 bPosition, u32 side)
{
    u32 battler = GetBattlerAtPosition(bPosition);
    struct AiPartyMon *aiMon = &AI_PARTY->mons[side][gBattlerPartyIndexes[battler]];
    struct BattlePokemon *bMon = &gBattleMons[battler];

    aiMon->species = bMon->species;
    aiMon->level = bMon->level;
    aiMon->status = bMon->status1;
    aiMon->gender = GetBattlerGender(battler);
    aiMon->isFainted = FALSE;
    aiMon->wasSentInBattle = TRUE;
    aiMon->switchInCount++;
}

void Ai_InitPartyStruct(void)
{
    u32 i;
    bool32 isOmniscient = (AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT] & AI_FLAG_OMNISCIENT) || (AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] & AI_FLAG_OMNISCIENT);
    struct Pokemon *mon;

    AI_PARTY->count[B_SIDE_PLAYER] = gPlayerPartyCount;
    AI_PARTY->count[B_SIDE_OPPONENT] = gEnemyPartyCount;

    // Save first 2 or 4(in doubles) mons
    CopyBattlerDataToAIParty(B_POSITION_PLAYER_LEFT, B_SIDE_PLAYER);
    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
        CopyBattlerDataToAIParty(B_POSITION_PLAYER_RIGHT, B_SIDE_PLAYER);

    // If player's partner is AI, save opponent mons
    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
    {
        CopyBattlerDataToAIParty(B_POSITION_OPPONENT_LEFT, B_SIDE_OPPONENT);
        CopyBattlerDataToAIParty(B_POSITION_OPPONENT_RIGHT, B_SIDE_OPPONENT);
    }

    for (i = 0; i < AI_PARTY->count[B_SIDE_PLAYER]; i++)
    {
        // Find fainted mons
        if (GetMonData(&gPlayerParty[i], MON_DATA_HP) == 0)
            AI_PARTY->mons[B_SIDE_PLAYER][i].isFainted = TRUE;

        if (isOmniscient)
        {
            u32 j;
            mon = &gPlayerParty[i];
            AI_PARTY->mons[B_SIDE_PLAYER][i].item = GetMonData(mon, MON_DATA_HELD_ITEM);
            AI_PARTY->mons[B_SIDE_PLAYER][i].heldEffect = ItemId_GetHoldEffect(AI_PARTY->mons[B_SIDE_PLAYER][i].item);
            AI_PARTY->mons[B_SIDE_PLAYER][i].ability = GetMonAbility(mon);
            for (j = 0; j < MAX_MON_MOVES; j++)
                AI_PARTY->mons[B_SIDE_PLAYER][i].moves[j] = GetMonData(mon, MON_DATA_MOVE1 + j);
        }
    }
}

void Ai_UpdateSwitchInData(u32 battler)
{
    u32 i;
    u32 side = GetBattlerSide(battler);
    struct AiPartyMon *aiMon = &AI_PARTY->mons[side][gBattlerPartyIndexes[battler]];

    // See if the switched-in mon has been already in battle
    if (aiMon->wasSentInBattle)
    {
        if (aiMon->ability)
            BATTLE_HISTORY->abilities[battler] = aiMon->ability;
        if (aiMon->heldEffect)
            BATTLE_HISTORY->itemEffects[battler] = aiMon->heldEffect;
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (aiMon->moves[i])
                BATTLE_HISTORY->usedMoves[battler][i] = aiMon->moves[i];
        }
        aiMon->switchInCount++;
        aiMon->status = gBattleMons[battler].status1; // Copy status, because it could've been changed in battle.
    }
    else // If not, copy the newly switched-in mon in battle and clear battle history.
    {
        ClearBattlerMoveHistory(battler);
        ClearBattlerAbilityHistory(battler);
        ClearBattlerItemEffectHistory(battler);
        CopyBattlerDataToAIParty(GetBattlerPosition(battler), side);
    }
}

void Ai_UpdateFaintData(u32 battler)
{
    struct AiPartyMon *aiMon = &AI_PARTY->mons[GetBattlerSide(battler)][gBattlerPartyIndexes[battler]];
    ClearBattlerMoveHistory(battler);
    ClearBattlerAbilityHistory(battler);
    ClearBattlerItemEffectHistory(battler);
    aiMon->isFainted = TRUE;
}

void SetBattlerAiData(u32 battler, struct AiLogicData *aiData)
{
    u32 ability, holdEffect;

    ability = aiData->abilities[battler] = AI_DecideKnownAbilityForTurn(battler);
    aiData->items[battler] = gBattleMons[battler].item;
    holdEffect = aiData->holdEffects[battler] = AI_DecideHoldEffectForTurn(battler);
    aiData->holdEffectParams[battler] = GetBattlerHoldEffectParam(battler);
    aiData->predictedMoves[battler] = gLastMoves[battler];
    aiData->hpPercents[battler] = GetHealthPercentage(battler);
    aiData->moveLimitations[battler] = CheckMoveLimitations(battler, 0, MOVE_LIMITATIONS_ALL);
    aiData->speedStats[battler] = GetBattlerTotalSpeedStatArgs(battler, ability, holdEffect);
}

static u32 Ai_SetMoveAccuracy(struct AiLogicData *aiData, u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 accuracy;
    u32 abilityAtk = aiData->abilities[battlerAtk];
    u32 abilityDef = aiData->abilities[battlerDef];
    if (abilityAtk == ABILITY_NO_GUARD || abilityDef == ABILITY_NO_GUARD || gMovesInfo[move].accuracy == 0) // Moves with accuracy 0 or no guard ability always hit.
        accuracy = 100;
    else
        accuracy = GetTotalAccuracy(battlerAtk, battlerDef, move, abilityAtk, abilityDef, aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef]);

    return accuracy;
}

static void SetBattlerAiMovesData(struct AiLogicData *aiData, u32 battlerAtk, u32 battlersCount)
{
    u32 battlerDef, i, weather;
    u16 *moves;

    SaveBattlerData(battlerAtk);
    moves = GetMovesArray(battlerAtk);
    weather = AI_GetWeather(aiData);

    SetBattlerData(battlerAtk);

    // Simulate dmg for both ai controlled mons and for player controlled mons.
    for (battlerDef = 0; battlerDef < battlersCount; battlerDef++)
    {
        if (battlerAtk == battlerDef || !IsBattlerAlive(battlerDef))
            continue;

        SaveBattlerData(battlerDef);
        SetBattlerData(battlerDef);
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            struct SimulatedDamage dmg = {0};
            u8 effectiveness = AI_EFFECTIVENESS_x0;
            u32 move = moves[i];

            if (move != 0
             && move != 0xFFFF
             //&& gMovesInfo[move].power != 0  /* we want to get effectiveness and accuracy of status moves */
             && !(aiData->moveLimitations[battlerAtk] & gBitTable[i]))
            {
                if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_RISKY)
                    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, &effectiveness, TRUE, weather, DMG_ROLL_HIGHEST);
                else if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_CONSERVATIVE)
                    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, &effectiveness, TRUE, weather, DMG_ROLL_LOWEST);
                else
                    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, &effectiveness, TRUE, weather, DMG_ROLL_DEFAULT);
                aiData->moveAccuracy[battlerAtk][battlerDef][i] = Ai_SetMoveAccuracy(aiData, battlerAtk, battlerDef, move);
            }
            aiData->simulatedDmg[battlerAtk][battlerDef][i] = dmg;
            aiData->effectiveness[battlerAtk][battlerDef][i] = effectiveness;
        }
        RestoreBattlerData(battlerDef);
    }
    RestoreBattlerData(battlerAtk);
}

void SetAiLogicDataForTurn(struct AiLogicData *aiData)
{
    u32 battlerAtk, battlersCount;

    memset(aiData, 0, sizeof(struct AiLogicData));
    if (!(gBattleTypeFlags & BATTLE_TYPE_HAS_AI) && !IsWildMonSmart())
        return;

    // Set delay timer to count how long it takes for AI to choose action/move
    gBattleStruct->aiDelayTimer = gMain.vblankCounter1;

    aiData->weatherHasEffect = WEATHER_HAS_EFFECT;
    // get/assume all battler data and simulate AI damage
    battlersCount = gBattlersCount;

    for (battlerAtk = 0; battlerAtk < battlersCount; battlerAtk++)
    {
        if (!IsBattlerAlive(battlerAtk))
            continue;

        SetBattlerAiData(battlerAtk, aiData);
    }

    for (battlerAtk = 0; battlerAtk < battlersCount; battlerAtk++)
    {
        if (!IsBattlerAlive(battlerAtk))
            continue;

        SetBattlerAiMovesData(aiData, battlerAtk, battlersCount);
    }
    // Prevent double target
    if (IsDoubleBattle()
     && IsBattlerAlive(B_POSITION_OPPONENT_RIGHT)
     && IsBattlerAlive(B_POSITION_OPPONENT_LEFT)
     && IsBattlerAlive(B_POSITION_PLAYER_RIGHT)
     && IsBattlerAlive(B_POSITION_PLAYER_LEFT))
    {
        u32 opponentRightCanKillPlayerLeft = CanBattlerFaintTarget(B_POSITION_OPPONENT_RIGHT, B_POSITION_PLAYER_LEFT);
        u32 opponentRightCanKillPlayerRight = CanBattlerFaintTarget(B_POSITION_OPPONENT_RIGHT, B_POSITION_PLAYER_RIGHT);

        u32 opponentLeftCanKillPlayerLeft = CanBattlerFaintTarget(B_POSITION_OPPONENT_LEFT, B_POSITION_PLAYER_LEFT);
        u32 opponentLeftCanKillPlayerRight = CanBattlerFaintTarget(B_POSITION_OPPONENT_LEFT, B_POSITION_PLAYER_RIGHT);

        if  (opponentRightCanKillPlayerLeft && opponentRightCanKillPlayerRight && !opponentLeftCanKillPlayerLeft)
        {
            if (opponentLeftCanKillPlayerRight)
            {
                gDisableStructs[B_POSITION_OPPONENT_RIGHT].targetTrackerLeft = TRUE;
                gDisableStructs[B_POSITION_OPPONENT_LEFT].targetTrackerRight = TRUE;
            }
            else
            {
                gDisableStructs[B_POSITION_OPPONENT_RIGHT].targetTrackerRight = TRUE;
                gDisableStructs[B_POSITION_OPPONENT_LEFT].targetTrackerLeft = TRUE;
            }
        }
        else if  (opponentLeftCanKillPlayerLeft && opponentLeftCanKillPlayerRight && !opponentRightCanKillPlayerRight)
        {
            if (opponentRightCanKillPlayerLeft)
            {
                gDisableStructs[B_POSITION_OPPONENT_LEFT].targetTrackerRight = TRUE;
                gDisableStructs[B_POSITION_OPPONENT_RIGHT].targetTrackerLeft = TRUE;
            }
            else
            {
                gDisableStructs[B_POSITION_OPPONENT_LEFT].targetTrackerLeft = TRUE;
                gDisableStructs[B_POSITION_OPPONENT_RIGHT].targetTrackerRight = TRUE;
            }
        }
        else if (opponentLeftCanKillPlayerLeft || opponentRightCanKillPlayerRight)
        {
            gDisableStructs[B_POSITION_OPPONENT_RIGHT].targetTrackerRight = TRUE;
            gDisableStructs[B_POSITION_OPPONENT_LEFT].targetTrackerLeft = TRUE;
        }
        else if (opponentLeftCanKillPlayerRight || opponentRightCanKillPlayerLeft)
        {
            gDisableStructs[B_POSITION_OPPONENT_RIGHT].targetTrackerLeft = TRUE;
            gDisableStructs[B_POSITION_OPPONENT_LEFT].targetTrackerRight = TRUE;
        }
    }
}

static u32 ChooseMoveOrAction_Singles(u32 battlerAi)
{
    u8 currentMoveArray[MAX_MON_MOVES];
    u8 consideredMoveArray[MAX_MON_MOVES];
    u32 numOfBestMoves;
    s32 i;
    u32 flags = AI_THINKING_STRUCT->aiFlags[battlerAi];

    AI_DATA->partnerMove = 0;   // no ally
    while (flags != 0)
    {
        if (flags & 1)
        {
            BattleAI_DoAIProcessing(AI_THINKING_STRUCT, battlerAi, gBattlerTarget);
        }
        flags >>= 1;
        AI_THINKING_STRUCT->aiLogicId++;
    }

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        gBattleStruct->aiFinalScore[battlerAi][gBattlerTarget][i] = AI_THINKING_STRUCT->score[i];
    }

    // Check special AI actions.
    if (AI_THINKING_STRUCT->aiAction & AI_ACTION_FLEE)
        return AI_CHOICE_FLEE;
    if (AI_THINKING_STRUCT->aiAction & AI_ACTION_WATCH)
        return AI_CHOICE_WATCH;

    numOfBestMoves = 1;
    currentMoveArray[0] = AI_THINKING_STRUCT->score[0];
    consideredMoveArray[0] = 0;

    for (i = 1; i < MAX_MON_MOVES; i++)
    {
        if (gBattleMons[battlerAi].moves[i] != MOVE_NONE)
        {
            // In ruby, the order of these if statements is reversed.
            if (currentMoveArray[0] == AI_THINKING_STRUCT->score[i])
            {
                currentMoveArray[numOfBestMoves] = AI_THINKING_STRUCT->score[i];
                consideredMoveArray[numOfBestMoves++] = i;
            }
            if (currentMoveArray[0] < AI_THINKING_STRUCT->score[i])
            {
                numOfBestMoves = 1;
                currentMoveArray[0] = AI_THINKING_STRUCT->score[i];
                consideredMoveArray[0] = i;
            }
        }
    }
    return consideredMoveArray[Random() % numOfBestMoves];
}

static u32 ChooseMoveOrAction_Doubles(u32 battlerAi)
{
    s32 i, j;
    u32 flags;
    s32 bestMovePointsForTarget[MAX_BATTLERS_COUNT];
    u8 mostViableTargetsArray[MAX_BATTLERS_COUNT];
    u8 actionOrMoveIndex[MAX_BATTLERS_COUNT];
    s32 mostViableMovesScores[MAX_MON_MOVES];
    u8 mostViableMovesIndices[MAX_MON_MOVES];
    u32 mostViableTargetsNo;
    u32 mostViableMovesNo;
    s32 mostMovePoints;

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        if (i == battlerAi || gBattleMons[i].hp == 0)
        {
            actionOrMoveIndex[i] = 0xFF;
            bestMovePointsForTarget[i] = -1;
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_PALACE)
                BattleAI_SetupAIData(gBattleStruct->palaceFlags >> 4, battlerAi);
            else
                BattleAI_SetupAIData(0xF, battlerAi);

            gBattlerTarget = i;

            AI_DATA->partnerMove = GetAllyChosenMove(battlerAi);
            AI_THINKING_STRUCT->aiLogicId = 0;
            AI_THINKING_STRUCT->movesetIndex = 0;
            flags = AI_THINKING_STRUCT->aiFlags[sBattler_AI];

            while (flags != 0)
            {
                if (flags & 1)
                {
                    BattleAI_DoAIProcessing(AI_THINKING_STRUCT, battlerAi, gBattlerTarget);
                }
                flags >>= 1;
                AI_THINKING_STRUCT->aiLogicId++;
            }

            if (AI_THINKING_STRUCT->aiAction & AI_ACTION_FLEE)
            {
                actionOrMoveIndex[i] = AI_CHOICE_FLEE;
            }
            else if (AI_THINKING_STRUCT->aiAction & AI_ACTION_WATCH)
            {
                actionOrMoveIndex[i] = AI_CHOICE_WATCH;
            }
            else
            {
                // Prevent double target
                for (j = 0; j < MAX_MON_MOVES; j++)
                {
                    if (sBattler_AI == B_POSITION_OPPONENT_LEFT)
                    {
                        if (gDisableStructs[B_POSITION_OPPONENT_LEFT].targetTrackerRight == TRUE && i == B_POSITION_PLAYER_LEFT)
                            AI_THINKING_STRUCT->score[j] = 0;
                        else if (gDisableStructs[B_POSITION_OPPONENT_LEFT].targetTrackerLeft == TRUE && i == B_POSITION_PLAYER_RIGHT)
                            AI_THINKING_STRUCT->score[j] = 10;
                    }
                    else if (sBattler_AI == B_POSITION_OPPONENT_RIGHT)
                    {
                        if (gDisableStructs[B_POSITION_OPPONENT_RIGHT].targetTrackerRight == TRUE && i == B_POSITION_PLAYER_LEFT)
                            AI_THINKING_STRUCT->score[j] = 20;
                        else if (gDisableStructs[B_POSITION_OPPONENT_RIGHT].targetTrackerLeft == TRUE && i == B_POSITION_PLAYER_RIGHT)
                            AI_THINKING_STRUCT->score[j] = 30;
                    }
                }

                mostViableMovesScores[0] = AI_THINKING_STRUCT->score[0];
                mostViableMovesIndices[0] = 0;
                mostViableMovesNo = 1;
                for (j = 1; j < MAX_MON_MOVES; j++)
                {
                    if (gBattleMons[battlerAi].moves[j] != 0)
                    {
                        if (!CanTargetBattler(battlerAi, i, gBattleMons[battlerAi].moves[j]))
                            continue;

                        if (mostViableMovesScores[0] == AI_THINKING_STRUCT->score[j])
                        {
                            mostViableMovesScores[mostViableMovesNo] = AI_THINKING_STRUCT->score[j];
                            mostViableMovesIndices[mostViableMovesNo] = j;
                            mostViableMovesNo++;
                        }
                        if (mostViableMovesScores[0] < AI_THINKING_STRUCT->score[j])
                        {
                            mostViableMovesScores[0] = AI_THINKING_STRUCT->score[j];
                            mostViableMovesIndices[0] = j;
                            mostViableMovesNo = 1;
                        }
                    }
                }
                actionOrMoveIndex[i] = mostViableMovesIndices[Random() % mostViableMovesNo];
                bestMovePointsForTarget[i] = mostViableMovesScores[0];

                // Don't use a move against ally if it has less than 100 points.
                if (i == BATTLE_PARTNER(battlerAi) && bestMovePointsForTarget[i] < AI_SCORE_DEFAULT)
                {
                    bestMovePointsForTarget[i] = -1;
                }
            }

            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                gBattleStruct->aiFinalScore[battlerAi][gBattlerTarget][j] = AI_THINKING_STRUCT->score[j];
            }
        }
    }

    mostMovePoints = bestMovePointsForTarget[0];
    mostViableTargetsArray[0] = 0;
    mostViableTargetsNo = 1;

    for (i = 1; i < MAX_BATTLERS_COUNT; i++)
    {
        if (mostMovePoints == bestMovePointsForTarget[i])
        {
            mostViableTargetsArray[mostViableTargetsNo] = i;
            mostViableTargetsNo++;
        }
        if (mostMovePoints < bestMovePointsForTarget[i])
        {
            mostMovePoints = bestMovePointsForTarget[i];
            mostViableTargetsArray[0] = i;
            mostViableTargetsNo = 1;
        }
    }

    gBattlerTarget = mostViableTargetsArray[Random() % mostViableTargetsNo];
    gBattleStruct->aiChosenTarget[battlerAi] = gBattlerTarget;
    return actionOrMoveIndex[gBattlerTarget];
}

static inline bool32 ShouldConsiderMoveForBattler(u32 battlerAi, u32 battlerDef, u32 move)
{
    if (battlerAi == BATTLE_PARTNER(battlerDef))
    {
        if (gMovesInfo[move].target == MOVE_TARGET_BOTH || gMovesInfo[move].target == MOVE_TARGET_OPPONENTS_FIELD)
            return FALSE;
    }
    return TRUE;
}

static inline void BattleAI_DoAIProcessing(struct AI_ThinkingStruct *aiThink, u32 battlerAi, u32 battlerDef)
{
    do
    {
        if (gBattleMons[battlerAi].pp[aiThink->movesetIndex] == 0)
            aiThink->moveConsidered = MOVE_NONE;
        else
            aiThink->moveConsidered = gBattleMons[battlerAi].moves[aiThink->movesetIndex];

        // There is no point in calculating scores for all 3 battlers(2 opponents + 1 ally) with certain moves.
        if (aiThink->moveConsidered != MOVE_NONE
          && aiThink->score[aiThink->movesetIndex] > 0
          && ShouldConsiderMoveForBattler(battlerAi, battlerDef, aiThink->moveConsidered))
        {
            if (aiThink->aiLogicId < ARRAY_COUNT(sBattleAiFuncTable)
              && sBattleAiFuncTable[aiThink->aiLogicId] != NULL)
            {
                // Call AI function
                aiThink->score[aiThink->movesetIndex] =
                    sBattleAiFuncTable[aiThink->aiLogicId](battlerAi,
                      battlerDef,
                      aiThink->moveConsidered,
                      aiThink->score[aiThink->movesetIndex]);
            }
        }
        else
        {
            aiThink->score[aiThink->movesetIndex] = 0;
        }
        aiThink->movesetIndex++;
    } while (aiThink->movesetIndex < MAX_MON_MOVES && !(aiThink->aiAction & AI_ACTION_DO_NOT_ATTACK));

    aiThink->movesetIndex = 0;
}

static s32 AI_CheckBadMove(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    struct AiLogicData *aiData = AI_DATA;
    s8 atkPriority = GetMovePriority(battlerAtk, move);
    u32 moveEffect = gMovesInfo[move].effect;
    s32 moveType;
    u32 moveTarget = AI_GetBattlerMoveTargetType(battlerAtk, move);
    bool32 isDoubleBattle = IsValidDoubleBattle(battlerAtk);
    u32 i;
    u32 weather;
    u32 predictedMove = aiData->predictedMoves[battlerDef];

    if (IsTargetingPartner(battlerAtk, battlerDef))
        return score;

    SetTypeBeforeUsingMove(move, battlerAtk);
    GET_MOVE_TYPE(move, moveType);

    if (aiData->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0)
        RETURN_SCORE_MINUS(20);

    if (gMovesInfo[move].powderMove && !IsAffectedByPowder(battlerDef, aiData->abilities[battlerDef], aiData->holdEffects[battlerDef]))
        RETURN_SCORE(FAILS_OR_BAD);

    if (!(moveTarget & MOVE_TARGET_USER) && !DoesBattlerIgnoreAbilityChecks(aiData->abilities[battlerAtk], move))
    {
        switch (aiData->abilities[battlerDef])
        {
        case ABILITY_GOOD_AS_GOLD:
            if (gMovesInfo[move].category == DAMAGE_CATEGORY_STATUS)
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_MAGIC_GUARD:
            switch (moveEffect)
            {
            case EFFECT_POISON:
            case EFFECT_WILL_O_WISP:
            case EFFECT_TOXIC:
                RETURN_SCORE(FAILS_OR_BAD);
            case EFFECT_CURSE:
                if (IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GHOST)) // Don't use Curse if you're a ghost type vs a Magic Guard user, they'll take no damage.
                    RETURN_SCORE(FAILS_OR_BAD);
            }
            break;
        // case ABILITY_JUSTIFIED:
        //     if (moveType == TYPE_DARK && !IS_MOVE_STATUS(move))
        //         RETURN_SCORE(FAILS_OR_BAD);
        // case ABILITY_RATTLED:
        //     if (!IS_MOVE_STATUS(move) && (moveType == TYPE_DARK || moveType == TYPE_GHOST || moveType == TYPE_BUG))
        //         RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_DAZZLING:
        case ABILITY_QUEENLY_MAJESTY:
        case ABILITY_ARMOR_TAIL:
            if (atkPriority > 0)
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_AROMA_VEIL:
            if (IsAromaVeilProtectedMove(move))
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_FLOWER_VEIL:
            if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GRASS) && (IsNonVolatileStatusMoveEffect(moveEffect) || IsStatLoweringEffect(moveEffect)))
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_MAGIC_BOUNCE:
            if (gMovesInfo[move].magicCoatAffected)
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_CLEAR_BODY:
        case ABILITY_FULL_METAL_BODY:
        case ABILITY_WHITE_SMOKE:
            if (IsStatLoweringEffect(moveEffect))
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_HYPER_CUTTER:
            if ((moveEffect == EFFECT_ATTACK_DOWN ||  moveEffect == EFFECT_ATTACK_DOWN_2))
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_ILLUMINATE:
            if (B_ILLUMINATE_EFFECT < GEN_9)
                break;
            // fallthrough
        case ABILITY_KEEN_EYE:
        case ABILITY_MINDS_EYE:
            if (moveEffect == EFFECT_ACCURACY_DOWN || moveEffect == EFFECT_ACCURACY_DOWN_2)
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_BIG_PECKS:
            if (moveEffect == EFFECT_DEFENSE_DOWN || moveEffect == EFFECT_DEFENSE_DOWN_2)
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_DEFIANT:
        case ABILITY_COMPETITIVE:
            if (IsStatLoweringEffect(moveEffect) && !IsTargetingPartner(battlerAtk, battlerDef))
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_COMATOSE:
            if (IsNonVolatileStatusMoveEffect(moveEffect))
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_SHIELDS_DOWN:
            if (IsShieldsDownProtected(battlerAtk) && IsNonVolatileStatusMoveEffect(moveEffect))
                RETURN_SCORE(FAILS_OR_BAD);
        case ABILITY_LEAF_GUARD:
            if ((AI_GetWeather(aiData) & B_WEATHER_SUN)
             && aiData->holdEffects[battlerDef] != HOLD_EFFECT_UTILITY_UMBRELLA
             && IsNonVolatileStatusMoveEffect(moveEffect))
                RETURN_SCORE(FAILS_OR_BAD);
        }

        if (B_PRANKSTER_DARK_TYPES >= GEN_7 && IS_BATTLER_OF_TYPE(battlerDef, TYPE_DARK)
          && aiData->abilities[battlerAtk] == ABILITY_PRANKSTER && IS_MOVE_STATUS(move)
          && !(moveTarget & (MOVE_TARGET_OPPONENTS_FIELD | MOVE_TARGET_USER)))
            RETURN_SCORE(FAILS_OR_BAD);

        if (AI_IsTerrainAffected(battlerDef, STATUS_FIELD_ELECTRIC_TERRAIN))
        {
            if (moveEffect == EFFECT_SLEEP || moveEffect == EFFECT_YAWN)
                RETURN_SCORE(FAILS_OR_BAD);
        }

        if (AI_IsTerrainAffected(battlerDef, STATUS_FIELD_MISTY_TERRAIN))
        {
            if (IsNonVolatileStatusMoveEffect(moveEffect) || IsConfusionMoveEffect(moveEffect))
                RETURN_SCORE(FAILS_OR_BAD);
        }

        if (AI_IsTerrainAffected(battlerAtk, STATUS_FIELD_PSYCHIC_TERRAIN) && atkPriority > 0)
        {
            RETURN_SCORE(FAILS_OR_BAD);
        }
    }

    if (gDisableStructs[battlerAtk].throatChopTimer && gMovesInfo[move].soundMove)
        return 0;
    if (gStatuses3[battlerAtk] & STATUS3_HEAL_BLOCK && IsHealBlockPreventingMove(battlerAtk, move))
        return 0;


    weather = AI_GetWeather(aiData);
    if (weather & B_WEATHER_PRIMAL_ANY)
    {
        switch (move)
        {
            case MOVE_SUNNY_DAY:
            case MOVE_RAIN_DANCE:
            case MOVE_HAIL:
            case MOVE_SANDSTORM:
                RETURN_SCORE(FAILS_OR_BAD);
        }

        if (!IS_MOVE_STATUS(move))
        {
            if (weather & B_WEATHER_SUN_PRIMAL && moveType == TYPE_WATER)
                RETURN_SCORE(FAILS_OR_BAD);
            if (weather & B_WEATHER_RAIN_PRIMAL && moveType == TYPE_FIRE)
                RETURN_SCORE(FAILS_OR_BAD);
        }
    }

    switch (moveEffect)
    {
        default:
            break;
        case EFFECT_DO_NOTHING:
            ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ATTACK_UP:
        case EFFECT_ATTACK_UP_2:
        case EFFECT_ATTACK_UP_USER_ALLY:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_STUFF_CHEEKS:
            if (ItemId_GetPocket(gBattleMons[battlerAtk].item) != POCKET_BERRIES)
                return 0;
            //fallthrough
        case EFFECT_DEFENSE_UP:
        case EFFECT_DEFENSE_UP_2:
        case EFFECT_DEFENSE_UP_3:
        case EFFECT_DEFENSE_CURL:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SPECIAL_ATTACK_UP:
        case EFFECT_SPECIAL_ATTACK_UP_2:
        case EFFECT_SPECIAL_ATTACK_UP_3:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SPECIAL_DEFENSE_UP:
        case EFFECT_SPECIAL_DEFENSE_UP_2:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ACCURACY_UP:
        case EFFECT_ACCURACY_UP_2:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ACC))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_EVASION_UP:
        case EFFECT_EVASION_UP_2:
        case EFFECT_MINIMIZE:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_EVASION))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_COSMIC_POWER:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_BULK_UP:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_CALM_MIND:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_DRAGON_DANCE:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_COIL:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ACC))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ATTACK_ACCURACY_UP:
            if (aiData->abilities[battlerAtk] != ABILITY_CONTRARY)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerAtk].statStages[STAT_ATK] >= MAX_STAT_STAGE && gBattleMons[battlerAtk].statStages[STAT_ACC] >= MAX_STAT_STAGE)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_CHARGE:
            if (gStatuses3[battlerAtk] & STATUS3_CHARGED_UP)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!HasMoveWithType(battlerAtk, TYPE_ELECTRIC))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (B_CHARGE_SPDEF_RAISE >= GEN_5
              && !BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_QUIVER_DANCE:
        case EFFECT_GEOMANCY:
            if (gBattleMons[battlerAtk].statStages[STAT_SPATK] >= MAX_STAT_STAGE || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_VICTORY_DANCE:
            if (gBattleMons[battlerAtk].statStages[STAT_ATK] >= MAX_STAT_STAGE || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SHIFT_GEAR:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPEED))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_GROWTH:
        case EFFECT_ATTACK_SPATK_UP:
            if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) && !BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ROTOTILLER:
            if (isDoubleBattle)
            {
                if (!(IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GRASS)
                  && AI_IsBattlerGrounded(battlerAtk)
                  && (BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK)))
                  && !(IS_BATTLER_OF_TYPE(BATTLE_PARTNER(battlerAtk), TYPE_GRASS)
                  && AI_IsBattlerGrounded(BATTLE_PARTNER(battlerAtk))
                  && aiData->abilities[BATTLE_PARTNER(battlerAtk)] != ABILITY_CONTRARY
                  && (BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_ATK)
                   || BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_SPATK))))
                {
                    ADJUST_SCORE(FAILS_OR_BAD);
                }
            }
            else if (!(IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GRASS)
              && AI_IsBattlerGrounded(battlerAtk)
              && (BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK))))
            {
                ADJUST_SCORE(FAILS_OR_BAD);
            }
            break;
        case EFFECT_GEAR_UP:
            if (aiData->abilities[battlerAtk] == ABILITY_PLUS || aiData->abilities[battlerAtk] == ABILITY_MINUS)
            {
                // same as growth, work up
                if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                    ADJUST_SCORE(FAILS_OR_BAD);
                else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL))
                    ADJUST_SCORE(FAILS_OR_BAD);
                break;
            }
            else if (!isDoubleBattle)
            {
                ADJUST_SCORE(FAILS_OR_BAD);    // no partner and our stats wont rise, so don't use
            }

            if (isDoubleBattle)
            {
                if (aiData->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_PLUS || aiData->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_MINUS)
                {
                    if ((!BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                      && (!BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_SPATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL)))
                        ADJUST_SCORE(FAILS_OR_BAD);
                }
                else if (aiData->abilities[battlerAtk] != ABILITY_PLUS && aiData->abilities[battlerAtk] != ABILITY_MINUS)
                {
                    ADJUST_SCORE(FAILS_OR_BAD);    // nor our or our partner's ability is plus/minus
                }
            }
            break;
        case EFFECT_ACUPRESSURE:
            if (DoesSubstituteBlockMove(battlerAtk, battlerDef, move) || AreBattlersStatsMaxed(battlerDef))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_MAGNETIC_FLUX:
            if (aiData->abilities[battlerAtk] == ABILITY_PLUS || aiData->abilities[battlerAtk] == ABILITY_MINUS)
            {
                if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
                    ADJUST_SCORE(FAILS_OR_BAD);
                else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
                    ADJUST_SCORE(FAILS_OR_BAD);
            }
            else if (!isDoubleBattle)
            {
                ADJUST_SCORE(FAILS_OR_BAD);    // our stats wont rise from this move
            }

            if (isDoubleBattle)
            {
                if (aiData->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_PLUS || aiData->abilities[BATTLE_PARTNER(battlerAtk)] == ABILITY_MINUS)
                {
                    if (!BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_DEF))
                        ADJUST_SCORE(FAILS_OR_BAD);
                    else if (!BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_SPDEF))
                        ADJUST_SCORE(FAILS_OR_BAD);
                }
                else if (aiData->abilities[battlerAtk] != ABILITY_PLUS && aiData->abilities[battlerAtk] != ABILITY_MINUS)
                {
                    ADJUST_SCORE(FAILS_OR_BAD);
                }
            }
            break;
        case EFFECT_ATTACK_DOWN:
        case EFFECT_ATTACK_DOWN_2:
            if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK)) //|| !HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (aiData->abilities[battlerDef] == ABILITY_HYPER_CUTTER)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_DEFENSE_DOWN:
        case EFFECT_DEFENSE_DOWN_2:
            if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_DEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SPEED_DOWN:
        case EFFECT_SPEED_DOWN_2:
            if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPEED))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (aiData->abilities[battlerDef] == ABILITY_SPEED_BOOST)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SPECIAL_ATTACK_DOWN:
        case EFFECT_SPECIAL_ATTACK_DOWN_2:
            if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPATK)) //|| !HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SPECIAL_DEFENSE_DOWN:
        case EFFECT_SPECIAL_DEFENSE_DOWN_2:
            if (!ShouldLowerSpecialDefense(battlerAtk, battlerDef))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ACCURACY_DOWN:
        case EFFECT_ACCURACY_DOWN_2:
            if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ACC))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (aiData->abilities[battlerDef] == ABILITY_KEEN_EYE || aiData->abilities[battlerDef] == ABILITY_MINDS_EYE
                        || (B_ILLUMINATE_EFFECT >= GEN_9 && aiData->abilities[battlerDef] == ABILITY_ILLUMINATE))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_EVASION_DOWN:
        case EFFECT_EVASION_DOWN_2:
        case EFFECT_TICKLE:
            if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_DEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_VENOM_DRENCH:
            if (!(gBattleMons[battlerDef].status1 & STATUS1_PSN_ANY))
            {
                ADJUST_SCORE(FAILS_OR_BAD);
            }
            else
            {
                if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPEED))
                    ADJUST_SCORE(FAILS_OR_BAD);
                else if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPATK))
                    ADJUST_SCORE(FAILS_OR_BAD);
                else if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK))
                    ADJUST_SCORE(FAILS_OR_BAD);
            }
            break;
        case EFFECT_NOBLE_ROAR:
            if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPATK))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_CAPTIVATE:
            if (!AreBattlersOfOppositeGender(battlerAtk, battlerDef))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_HAZE:
            if (PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (AnyStatIsRaised(BATTLE_PARTNER(battlerAtk)))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ROAR:
            if (CountUsablePartyMons(battlerDef) == 0)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (aiData->abilities[battlerDef] == ABILITY_SUCTION_CUPS)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gMovesInfo[move].soundMove && aiData->abilities[battlerDef] == ABILITY_SOUNDPROOF)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_TOXIC_THREAD:
            if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_SPEED))
                ADJUST_SCORE(FAILS_OR_BAD);
            //fallthrough
        case EFFECT_POISON:
        case EFFECT_TOXIC:
            if (!AI_CanPoison(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_LIGHT_SCREEN:
            if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_LIGHTSCREEN
              || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_REFLECT:
            if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_REFLECT
              || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_AURORA_VEIL:
            if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_AURORA_VEIL
              || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove)
              || !(weather & (B_WEATHER_HAIL | B_WEATHER_SNOW)))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_OHKO:
            if (B_SHEER_COLD_IMMUNITY >= GEN_7 && move == MOVE_SHEER_COLD && IS_BATTLER_OF_TYPE(battlerDef, TYPE_ICE))
                ADJUST_SCORE(FAILS_OR_BAD);
            if (!ShouldTryOHKO(battlerAtk, battlerDef, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], move))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_MIST:
            if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_MIST
              || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_FOCUS_ENERGY:
            if (gBattleMons[battlerAtk].status2 & STATUS2_FOCUS_ENERGY_ANY)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SWAGGER:
            if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL) && aiData->abilities[battlerDef] != ABILITY_CONTRARY)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_FLATTER:
            if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL) && aiData->abilities[battlerDef] != ABILITY_CONTRARY)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_CONFUSE:
            if (!AI_CanConfuse(battlerAtk, battlerDef, aiData->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_PARALYZE:
            if (!AI_CanParalyze(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SHED_TAIL:
        case EFFECT_SUBSTITUTE:
            if (!AI_CanSubstitute(battlerAtk, battlerDef, move))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_DISABLE:
            ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SNORE:
        case EFFECT_SLEEP_TALK:
            if (IsWakeupTurn(battlerAtk) || !AI_IsBattlerAsleepOrComatose(battlerAtk))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_MEAN_LOOK:
            if (IsBattlerTrapped(battlerAtk, battlerDef) || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_NIGHTMARE:
            if (gBattleMons[battlerDef].status2 & STATUS2_NIGHTMARE)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!AI_IsBattlerAsleepOrComatose(battlerDef))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_CURSE:
            if (IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GHOST))
            {
                if (gBattleMons[battlerDef].status2 & STATUS2_CURSED
                  || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                    ADJUST_SCORE(FAILS_OR_BAD);
                else if (aiData->hpPercents[battlerAtk] <= 50)
                    ADJUST_SCORE(FAILS_OR_BAD);
            }
            else // regular curse
            {
                if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_ATK) || !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                    ADJUST_SCORE(FAILS_OR_BAD);
                else if (!BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_DEF))
                    ADJUST_SCORE(FAILS_OR_BAD);
            }
            break;
        case EFFECT_SPIKES:
            if (gSideTimers[GetBattlerSide(battlerDef)].spikesAmount >= 3)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove) && gSideTimers[GetBattlerSide(battlerDef)].spikesAmount == 2)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_STEALTH_ROCK:
            if (gSideTimers[GetBattlerSide(battlerDef)].stealthRockAmount > 0)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_TOXIC_SPIKES:
            if (gSideTimers[GetBattlerSide(battlerDef)].toxicSpikesAmount >= 2
             || (aiData->abilities[battlerAtk] == ABILITY_TOXIC_DEBRIS && gSideTimers[GetBattlerSide(battlerDef)].toxicSpikesAmount >= 1))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove) && gSideTimers[GetBattlerSide(battlerDef)].toxicSpikesAmount == 1)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_STICKY_WEB:
            if (gSideTimers[GetBattlerSide(battlerDef)].stickyWebAmount)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove) && gSideTimers[GetBattlerSide(battlerDef)].stickyWebAmount)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_FORESIGHT:
            if (gBattleMons[battlerDef].status2 & STATUS2_FORESIGHT)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerDef].statStages[STAT_EVASION] <= 4 || !IS_BATTLER_OF_TYPE(battlerDef, TYPE_GHOST))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SANDSTORM:
            if (IsMoveEffectWeather(aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SUNNY_DAY:
            if (IsMoveEffectWeather(aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_RAIN_DANCE:
            if (IsMoveEffectWeather(aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_HAIL:
            if (IsMoveEffectWeather(aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (weather & B_WEATHER_SNOW)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SNOWSCAPE:
            if (IsMoveEffectWeather(aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (weather & B_WEATHER_HAIL)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ATTRACT:
            if (!AI_CanBeInfatuated(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SAFEGUARD:
            if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_SAFEGUARD)
                ADJUST_SCORE(FAILS_OR_BAD);
            if (PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_PARTING_SHOT:
            if (CountUsablePartyMons(battlerAtk) == 0)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_BATON_PASS:
            if (CountUsablePartyMons(battlerAtk) == 0)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_BELLY_DRUM:
        case EFFECT_FILLET_AWAY:
            if (aiData->abilities[battlerAtk] == ABILITY_CONTRARY)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (aiData->hpPercents[battlerAtk] <= 60)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_TELEPORT:
            ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_STOCKPILE:
            if (gDisableStructs[battlerAtk].stockpileCounter >= 3)
                ADJUST_SCORE(FAILS_OR_BAD);
            if (aiData->abilities[battlerAtk] == ABILITY_CONTRARY)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SWALLOW:
            if (gDisableStructs[battlerAtk].stockpileCounter == 0)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_TORMENT:
            if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerDef].status2 & STATUS2_TORMENT || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            if (B_MENTAL_HERB >= GEN_5 && aiData->holdEffects[battlerDef] == HOLD_EFFECT_MENTAL_HERB)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_WILL_O_WISP:
            if (!AI_CanBurn(battlerAtk, battlerDef, aiData->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_LEECH_SEED:
            if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GRASS) || gStatuses3[battlerDef] & STATUS3_LEECHSEED)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (aiData->abilities[battlerDef] == ABILITY_LIQUID_OOZE || aiData->abilities[battlerDef] == ABILITY_MAGIC_GUARD)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), EFFECT_LEECH_SEED, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_MEMENTO:
            if (CountUsablePartyMons(battlerAtk) == 0 || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerDef].statStages[STAT_ATK] == MIN_STAT_STAGE && gBattleMons[battlerDef].statStages[STAT_SPATK] == MIN_STAT_STAGE)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_DESTINY_BOND:
            if (gBattleMons[battlerDef].status2 & STATUS2_DESTINY_BOND)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_FUTURE_SIGHT:
            if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_FUTUREATTACK)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_FOLLOW_ME:
        case EFFECT_HELPING_HAND:
            if (!isDoubleBattle || !IsBattlerAlive(BATTLE_PARTNER(battlerAtk)))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (aiData->partnerMove != MOVE_NONE && IS_MOVE_STATUS(aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (*(gBattleStruct->monToSwitchIntoId + BATTLE_PARTNER(battlerAtk)) != PARTY_SIZE) // Partner is switching out
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_TRICK:
        case EFFECT_KNOCK_OFF:
            if (aiData->abilities[battlerDef] == ABILITY_STICKY_HOLD)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_INGRAIN:
            if (gStatuses3[battlerAtk] & STATUS3_ROOTED)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_AQUA_RING:
            if (gStatuses3[battlerAtk] & STATUS3_AQUA_RING)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_RECYCLE:
            if (GetUsedHeldItem(battlerAtk) == 0 || gBattleMons[battlerAtk].item != 0)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_IMPRISON:
            if (gStatuses3[battlerAtk] & STATUS3_IMPRISONED_OTHERS)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_REFRESH:
            if (!(gBattleMons[battlerDef].status1 & (STATUS1_PSN_ANY | STATUS1_BURN | STATUS1_PARALYSIS | STATUS1_FROSTBITE)))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_PSYCHO_SHIFT:
            if (gBattleMons[battlerAtk].status1 & STATUS1_PSN_ANY && !AI_CanPoison(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerAtk].status1 & STATUS1_BURN && !AI_CanBurn(battlerAtk, battlerDef,
              aiData->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerAtk].status1 & STATUS1_FROSTBITE && !AI_CanGiveFrostbite(battlerAtk, battlerDef,
              aiData->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerAtk].status1 & STATUS1_PARALYSIS && !AI_CanParalyze(battlerAtk, battlerDef, aiData->abilities[battlerDef], move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_MUD_SPORT:
            if (gFieldStatuses & STATUS_FIELD_MUDSPORT || gStatuses4[battlerAtk] & STATUS4_MUD_SPORT)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_WATER_SPORT:
            if (gFieldStatuses & STATUS_FIELD_WATERSPORT || gStatuses4[battlerAtk] & STATUS4_WATER_SPORT)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_STRENGTH_SAP:
            if (aiData->abilities[battlerDef] == ABILITY_CONTRARY)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (!ShouldLowerStat(battlerDef, aiData->abilities[battlerDef], STAT_ATK))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_COPYCAT:
        case EFFECT_MIRROR_MOVE:
            return AI_CheckBadMove(battlerAtk, battlerDef, predictedMove, score);
        case EFFECT_FLOWER_SHIELD:
            if (!IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GRASS)
              && !(isDoubleBattle && IS_BATTLER_OF_TYPE(BATTLE_PARTNER(battlerAtk), TYPE_GRASS)))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_AROMATIC_MIST:
            if (!isDoubleBattle || IsBattlerAlive(BATTLE_PARTNER(battlerAtk)) || !BattlerStatCanRise(BATTLE_PARTNER(battlerAtk), aiData->abilities[BATTLE_PARTNER(battlerAtk)], STAT_SPDEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_BIDE:
            if (!HasDamagingMove(battlerDef)
             || aiData->hpPercents[battlerAtk] < 30
             || gBattleMons[battlerDef].status1 & (STATUS1_SLEEP | STATUS1_FREEZE))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_RESTORE_HP:
        case EFFECT_SOFTBOILED:
        case EFFECT_ROOST:
        case EFFECT_MORNING_SUN:
        case EFFECT_SYNTHESIS:
        case EFFECT_MOONLIGHT:
            if (aiData->hpPercents[battlerAtk] >= 90)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_PURIFY:
            if (!(gBattleMons[battlerDef].status1 & STATUS1_ANY))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (battlerDef == BATTLE_PARTNER(battlerAtk))
                break;
            else if (aiData->hpPercents[battlerAtk] >= 90)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_TRANSFORM:
            if (gBattleMons[battlerAtk].status2 & STATUS2_TRANSFORMED || (gBattleMons[battlerDef].status2 & (STATUS2_TRANSFORMED | STATUS2_SUBSTITUTE)))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SPITE:
        case EFFECT_MIMIC:
            if (AI_IsFaster(battlerAtk, battlerDef, move))
            {
                if (gLastMoves[battlerDef] == MOVE_NONE || gLastMoves[battlerDef] == 0xFFFF)
                    ADJUST_SCORE(FAILS_OR_BAD);
            }
            break;
        case EFFECT_METRONOME:
            break;
        case EFFECT_REST:
        if (!CanBeSlept(battlerAtk, aiData->abilities[battlerAtk]) || aiData->hpPercents[battlerAtk] >= 80)
            ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SLEEP:
        case EFFECT_YAWN:
            if (!CanBeSlept(battlerDef, aiData->abilities[battlerDef])
             || gStatuses3[battlerDef] & STATUS3_YAWN
             || aiData->abilities[battlerDef] == ABILITY_SWEET_VEIL
             || aiData->abilities[BATTLE_PARTNER(battlerDef)] == ABILITY_SWEET_VEIL
             || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
             || PartnerMoveEffectIsStatusSameTarget(BATTLE_PARTNER(battlerAtk), battlerDef, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_CONVERSION_2:
            //TODO
            break;
        case EFFECT_LOCK_ON:
            if (gStatuses3[battlerDef] & STATUS3_ALWAYS_HITS
              || aiData->abilities[battlerAtk] == ABILITY_NO_GUARD
              || aiData->abilities[battlerDef] == ABILITY_NO_GUARD
              || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_LASER_FOCUS:
            if (gStatuses3[battlerAtk] & STATUS3_LASER_FOCUS)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (aiData->abilities[battlerDef] == ABILITY_SHELL_ARMOR || aiData->abilities[battlerDef] == ABILITY_BATTLE_ARMOR || aiData->abilities[battlerDef] == ABILITY_MAGMA_ARMOR)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SKETCH:
            if (gLastMoves[battlerDef] == MOVE_NONE)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_HEAL_BELL:
            if (!AnyPartyMemberStatused(battlerAtk, gMovesInfo[move].soundMove) || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ENDURE:
            if (gMovesInfo[gBattleStruct->lastUsedMoveByBattler[battlerAtk]].effect == EFFECT_ENDURE || GetBattlerSecondaryDamage(battlerAtk))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_MIRACLE_EYE:
            if (gStatuses3[battlerDef] & STATUS3_MIRACLE_EYED)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerDef].statStages[STAT_EVASION] <= 4
                 || !(IS_BATTLER_OF_TYPE(battlerDef, TYPE_DARK))
                 || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_DEFOG:
            if (gSideStatuses[GetBattlerSide(battlerDef)]
             & (SIDE_STATUS_REFLECT | SIDE_STATUS_LIGHTSCREEN | SIDE_STATUS_AURORA_VEIL | SIDE_STATUS_SAFEGUARD | SIDE_STATUS_MIST)
             || gSideTimers[GetBattlerSide(battlerDef)].auroraVeilTimer != 0
             || gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_HAZARDS_ANY)
            {
                if (PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                {
                    ADJUST_SCORE(FAILS_OR_BAD); //Only need one hazards removal
                    break;
                }
            }

            if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_HAZARDS_ANY)
            {
                ADJUST_SCORE(FAILS_OR_BAD); //Don't blow away opposing hazards
                break;
            }

            if (isDoubleBattle)
            {
                if (IsHazardMoveEffect(gMovesInfo[aiData->partnerMove].effect) // partner is going to set up hazards
                  && AI_IsFaster(BATTLE_PARTNER(battlerAtk), battlerAtk, aiData->partnerMove)) // partner is going to set up before the potential Defog
                {
                    ADJUST_SCORE(FAILS_OR_BAD);
                    break; // Don't use Defog if partner is going to set up hazards
                }
            }

            // evasion check
            if (gBattleMons[battlerDef].statStages[STAT_EVASION] == MIN_STAT_STAGE
              || ((aiData->abilities[battlerDef] == ABILITY_CONTRARY) && !IsTargetingPartner(battlerAtk, battlerDef))) // don't want to raise target stats unless its your partner
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_PSYCH_UP:   // haze stats check
            {
                for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
                {
                    if (gBattleMons[battlerAtk].statStages[i] > DEFAULT_STAT_STAGE || gBattleMons[BATTLE_PARTNER(battlerAtk)].statStages[i] > DEFAULT_STAT_STAGE)
                        ADJUST_SCORE(FAILS_OR_BAD);  // Don't want to reset our boosted stats
                }
                for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
                {
                    if (gBattleMons[battlerDef].statStages[i] < DEFAULT_STAT_STAGE || gBattleMons[BATTLE_PARTNER(battlerDef)].statStages[i] < DEFAULT_STAT_STAGE)
                        ADJUST_SCORE(FAILS_OR_BAD); //Don't want to copy enemy lowered stats
                }
            }
            break;
        case EFFECT_HEALING_WISH:   //healing wish, lunar dance
            if (CountUsablePartyMons(battlerAtk) == 0 || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (IsPartyFullyHealedExceptBattler(battlerAtk))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_FINAL_GAMBIT:
            if (CountUsablePartyMons(battlerAtk) == 0 || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_NATURE_POWER:
            return AI_CheckBadMove(battlerAtk, battlerDef, GetNaturePowerMove(battlerAtk), score);
        case EFFECT_TAUNT:
            if (gDisableStructs[battlerDef].tauntTimer > 0
              || DoesPartnerHaveSameMoveEffect(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_BESTOW:
            if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_NONE
              || !CanBattlerGetOrLoseItem(battlerAtk, gBattleMons[battlerAtk].item))    // AI knows its own item
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ROLE_PLAY:
            if (aiData->abilities[battlerAtk] == aiData->abilities[battlerDef]
              || aiData->abilities[battlerDef] == ABILITY_NONE
              || gAbilitiesInfo[aiData->abilities[battlerAtk]].cantBeSuppressed
              || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeCopied)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (IsAbilityOfRating(aiData->abilities[battlerAtk], 5))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_WISH:
            if (gWishFutureKnock.wishCounter[battlerAtk] != 0)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ASSIST:
            if (CountUsablePartyMons(battlerAtk) == 0)
                ADJUST_SCORE(FAILS_OR_BAD);    // no teammates to assist from
            break;
        case EFFECT_MAGIC_COAT:
            if (!HasMagicCoatAffectedMove(battlerDef))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SKILL_SWAP:
            if (aiData->abilities[battlerAtk] == ABILITY_NONE || aiData->abilities[battlerDef] == ABILITY_NONE
              || gAbilitiesInfo[aiData->abilities[battlerAtk]].cantBeSwapped
              || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeSwapped
              || aiData->holdEffects[battlerDef] == HOLD_EFFECT_ABILITY_SHIELD
              || GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_WORRY_SEED:
            if (aiData->abilities[battlerDef] == ABILITY_INSOMNIA
              || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeOverwritten
              || aiData->holdEffects[battlerDef] == HOLD_EFFECT_ABILITY_SHIELD)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_GASTRO_ACID:
            if (gStatuses3[battlerDef] & STATUS3_GASTRO_ACID
              || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeSuppressed)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ENTRAINMENT:
            if (aiData->abilities[battlerAtk] == ABILITY_NONE
              || gAbilitiesInfo[aiData->abilities[battlerAtk]].cantBeCopied
              || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeOverwritten
              || aiData->holdEffects[battlerAtk] == HOLD_EFFECT_ABILITY_SHIELD)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SIMPLE_BEAM:
            if (aiData->abilities[battlerDef] == ABILITY_SIMPLE
              || gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeOverwritten
              || aiData->holdEffects[battlerDef] == HOLD_EFFECT_ABILITY_SHIELD)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SNATCH:
            if (!HasSnatchAffectedMove(battlerDef)
              || PartnerHasSameMoveEffectWithoutTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_POWER_TRICK:
            if (IsTargetingPartner(battlerAtk, battlerDef))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerAtk].defense >= gBattleMons[battlerAtk].attack && !HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_POWER_SWAP: // Don't use if attacker's stat stages are higher than opponents
            if (IsTargetingPartner(battlerAtk, battlerDef))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerAtk].statStages[STAT_ATK] >= gBattleMons[battlerDef].statStages[STAT_ATK]
              && gBattleMons[battlerAtk].statStages[STAT_SPATK] >= gBattleMons[battlerDef].statStages[STAT_SPATK])
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_GUARD_SWAP: // Don't use if attacker's stat stages are higher than opponents
            if (IsTargetingPartner(battlerAtk, battlerDef))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (gBattleMons[battlerAtk].statStages[STAT_DEF] >= gBattleMons[battlerDef].statStages[STAT_DEF]
              && gBattleMons[battlerAtk].statStages[STAT_SPDEF] >= gBattleMons[battlerDef].statStages[STAT_SPDEF])
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SPEED_SWAP:
            if (IsTargetingPartner(battlerAtk, battlerDef))
            {
                ADJUST_SCORE(FAILS_OR_BAD);
            }
            else
            {
                if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM)
                    ADJUST_SCORE(FAILS_OR_BAD);
            }
            break;
        case EFFECT_HEART_SWAP:
            if (IsTargetingPartner(battlerAtk, battlerDef))
            {
                ADJUST_SCORE(FAILS_OR_BAD);
            }
            else
            {
                u32 atkPositiveStages = CountPositiveStatStages(battlerAtk);
                u32 atkNegativeStages = CountNegativeStatStages(battlerAtk);
                u32 defPositiveStages = CountPositiveStatStages(battlerDef);
                u32 defNegativeStages = CountNegativeStatStages(battlerDef);

                if (atkPositiveStages >= defPositiveStages && atkNegativeStages <= defNegativeStages)
                    ADJUST_SCORE(FAILS_OR_BAD);
                break;
            }
            break;
        case EFFECT_POWER_SPLIT:
            if (IsTargetingPartner(battlerAtk, battlerDef))
            {
                ADJUST_SCORE(FAILS_OR_BAD);
            }
            else
            {
                u32 atkAttack = gBattleMons[battlerAtk].attack;
                u32 defAttack = gBattleMons[battlerDef].attack;
                u32 atkSpAttack = gBattleMons[battlerAtk].spAttack;
                u32 defSpAttack = gBattleMons[battlerDef].spAttack;

                if (atkAttack + atkSpAttack >= defAttack + defSpAttack) // Combined attacker stats are > than combined target stats
                    ADJUST_SCORE(FAILS_OR_BAD);
                break;
            }
            break;
        case EFFECT_GUARD_SPLIT:
            if (IsTargetingPartner(battlerAtk, battlerDef))
            {
                ADJUST_SCORE(FAILS_OR_BAD);
            }
            else
            {
                u32 atkDefense = gBattleMons[battlerAtk].defense;
                u32 defDefense = gBattleMons[battlerDef].defense;
                u32 atkSpDefense = gBattleMons[battlerAtk].spDefense;
                u32 defSpDefense = gBattleMons[battlerDef].spDefense;

                if (atkDefense + atkSpDefense >= defDefense + defSpDefense) //Combined attacker stats are > than combined target stats
                    ADJUST_SCORE(FAILS_OR_BAD);
                break;
            }
            break;
        case EFFECT_ME_FIRST:
            if (predictedMove != MOVE_NONE)
            {
                if (AI_IsSlower(battlerAtk, battlerDef, move))
                    ADJUST_SCORE(FAILS_OR_BAD);    // Target is predicted to go first, Me First will fail
                else
                    return AI_CheckBadMove(battlerAtk, battlerDef, predictedMove, score);
            }
            else
            {
                ADJUST_SCORE(FAILS_OR_BAD); //Target is predicted to switch most likely
            }
            break;
        case EFFECT_NATURAL_GIFT:
            if (aiData->abilities[battlerAtk] == ABILITY_KLUTZ
              || gFieldStatuses & STATUS_FIELD_MAGIC_ROOM
              || GetPocketByItemId(gBattleMons[battlerAtk].item) != POCKET_BERRIES)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_GRASSY_TERRAIN:
            if (PartnerMoveEffectIsTerrain(BATTLE_PARTNER(battlerAtk), aiData->partnerMove) || gFieldStatuses & STATUS_FIELD_GRASSY_TERRAIN)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ELECTRIC_TERRAIN:
            if (PartnerMoveEffectIsTerrain(BATTLE_PARTNER(battlerAtk), aiData->partnerMove) || gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_PSYCHIC_TERRAIN:
            if (PartnerMoveEffectIsTerrain(BATTLE_PARTNER(battlerAtk), aiData->partnerMove) || gFieldStatuses & STATUS_FIELD_PSYCHIC_TERRAIN)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_MISTY_TERRAIN:
            if (PartnerMoveEffectIsTerrain(BATTLE_PARTNER(battlerAtk), aiData->partnerMove) || gFieldStatuses & STATUS_FIELD_MISTY_TERRAIN)
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_PLEDGE:
            if (isDoubleBattle && gBattleMons[BATTLE_PARTNER(battlerAtk)].hp > 0)
            {
                if (aiData->partnerMove != MOVE_NONE
                  && gMovesInfo[aiData->partnerMove].effect == EFFECT_PLEDGE
                  && move != aiData->partnerMove) // Different pledge moves
                {
                    if (gBattleMons[BATTLE_PARTNER(battlerAtk)].status1 & (STATUS1_SLEEP | STATUS1_FREEZE))
                    // && gBattleMons[BATTLE_PARTNER(battlerAtk)].status1 != 1) // Will wake up this turn - how would AI know
                        ADJUST_SCORE(FAILS_OR_BAD); // Don't use combo move if your partner will cause failure
                }
            }
            break;
        case EFFECT_TRICK_ROOM:
            if (PartnerMoveIs(BATTLE_PARTNER(battlerAtk), aiData->partnerMove, MOVE_TRICK_ROOM))
            {
                ADJUST_SCORE(FAILS_OR_BAD);
            }
            else if (!(AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_POWERFUL_STATUS))
            {
                if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM) // Trick Room Up
                {
                    if (GetBattlerSideSpeedAverage(battlerAtk) < GetBattlerSideSpeedAverage(battlerDef)) // Attacker side slower than target side
                        ADJUST_SCORE(FAILS_OR_BAD); // Keep the Trick Room up
                }
                else
                {
                    if (GetBattlerSideSpeedAverage(battlerAtk) >= GetBattlerSideSpeedAverage(battlerDef)) // Attacker side faster than target side
                        ADJUST_SCORE(FAILS_OR_BAD); // Keep the Trick Room down
                }
            }
            break;
        case EFFECT_MAGIC_ROOM:
            if (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM || PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_WONDER_ROOM:
            if (gFieldStatuses & STATUS_FIELD_WONDER_ROOM || PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_GRAVITY:
            if ((gFieldStatuses & STATUS_FIELD_GRAVITY
              && !IS_BATTLER_OF_TYPE(battlerAtk, TYPE_FLYING)
              && aiData->holdEffects[battlerAtk] != HOLD_EFFECT_AIR_BALLOON) // Should revert Gravity in this case
              || PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_ION_DELUGE:
            if (gFieldStatuses & STATUS_FIELD_ION_DELUGE
              || PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_EMBARGO:
            if (aiData->abilities[battlerDef] == ABILITY_KLUTZ
              || gFieldStatuses & STATUS_FIELD_MAGIC_ROOM
              || gDisableStructs[battlerDef].embargoTimer != 0
              || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_POWDER:
            if (!HasMoveWithType(battlerDef, TYPE_FIRE)
              || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_TELEKINESIS:
            if (gStatuses3[battlerDef] & (STATUS3_TELEKINESIS | STATUS3_ROOTED | STATUS3_SMACKED_DOWN)
              || gFieldStatuses & STATUS_FIELD_GRAVITY
              || aiData->holdEffects[battlerDef] == HOLD_EFFECT_IRON_BALL
              || IsTelekinesisBannedSpecies(gBattleMons[battlerDef].species)
              || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_HEAL_BLOCK:
            if (gDisableStructs[battlerDef].healBlockTimer != 0
              || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SOAK:
            if (PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove)
              || (GetBattlerType(battlerDef, 0, FALSE) == TYPE_WATER
              && GetBattlerType(battlerDef, 1, FALSE) == TYPE_WATER
              && GetBattlerType(battlerDef, 2, FALSE) == TYPE_MYSTERY))
                ADJUST_SCORE(FAILS_OR_BAD);    // target is already water-only
            break;
        case EFFECT_THIRD_TYPE:
            switch (move)
            {
            case MOVE_TRICK_OR_TREAT:
                if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GHOST) || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove) || GetActiveGimmick(battlerDef) == GIMMICK_TERA)
                    ADJUST_SCORE(FAILS_OR_BAD);
                break;
            case MOVE_FORESTS_CURSE:
                if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GRASS) || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove) || GetActiveGimmick(battlerDef) == GIMMICK_TERA)
                    ADJUST_SCORE(FAILS_OR_BAD);
                break;
            }
            break;
        case EFFECT_HEAL_PULSE: // and floral healing
            if (!IsTargetingPartner(battlerAtk, battlerDef)) // Don't heal enemies
            {
                ADJUST_SCORE(FAILS_OR_BAD);
                break;
            }
            // fallthrough
        case EFFECT_HIT_ENEMY_HEAL_ALLY:    // pollen puff
            if (IsTargetingPartner(battlerAtk, battlerDef))
            {
                if (gStatuses3[battlerDef] & STATUS3_HEAL_BLOCK)
                    return 0;
                if (AtMaxHp(battlerDef))
                    ADJUST_SCORE(FAILS_OR_BAD);
                else if (gBattleMons[battlerDef].hp > gBattleMons[battlerDef].maxHP / 2)
                    ADJUST_SCORE(FAILS_OR_BAD);
            }
            break;
        case EFFECT_ELECTRIFY:
            if (AI_IsSlower(battlerAtk, battlerDef, move)
              //|| GetMoveTypeSpecial(battlerDef, predictedMove) == TYPE_ELECTRIC // Move will already be electric type
              || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_TOPSY_TURVY:
            if (!IsTargetingPartner(battlerAtk, battlerDef))
            {
                u32 targetPositiveStages = CountPositiveStatStages(battlerDef);
                u32 targetNegativeStages = CountNegativeStatStages(battlerDef);

                if (targetPositiveStages == 0 //No good stat changes to make bad
                  || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                    ADJUST_SCORE(FAILS_OR_BAD);

                else if (targetNegativeStages < targetPositiveStages)
                    ADJUST_SCORE(FAILS_OR_BAD); //More stages would be made positive than negative
            }
            break;
        case EFFECT_FAIRY_LOCK:
            if ((gFieldStatuses & STATUS_FIELD_FAIRY_LOCK) || PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_INSTRUCT:
            {
                u16 instructedMove;
                if (AI_IsSlower(battlerAtk, battlerDef, move))
                    instructedMove = predictedMove;
                else
                    instructedMove = gLastMoves[battlerDef];

                if (instructedMove == MOVE_NONE
                  || gMovesInfo[instructedMove].instructBanned
                  || MoveHasAdditionalEffectSelf(instructedMove, MOVE_EFFECT_RECHARGE)
                  || IsZMove(instructedMove)
                  || (gLockedMoves[battlerDef] != 0 && gLockedMoves[battlerDef] != 0xFFFF)
                  || gBattleMons[battlerDef].status2 & STATUS2_MULTIPLETURNS
                  || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                {
                    ADJUST_SCORE(FAILS_OR_BAD);
                }
                else if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
                    ADJUST_SCORE(FAILS_OR_BAD);
                else if (isDoubleBattle)
                {
                    if (!IsTargetingPartner(battlerAtk, battlerDef))
                        ADJUST_SCORE(FAILS_OR_BAD);
                }
                else
                {
                    if (AI_GetBattlerMoveTargetType(battlerDef, instructedMove) & (MOVE_TARGET_SELECTED
                                                             | MOVE_TARGET_DEPENDS
                                                             | MOVE_TARGET_RANDOM
                                                             | MOVE_TARGET_BOTH
                                                             | MOVE_TARGET_FOES_AND_ALLY
                                                             | MOVE_TARGET_OPPONENTS_FIELD)
                      && instructedMove != MOVE_MIND_BLOWN && instructedMove != MOVE_STEEL_BEAM)
                        ADJUST_SCORE(FAILS_OR_BAD); //Don't force the enemy to attack you again unless it can kill itself with Mind Blown
                    else if (instructedMove != MOVE_MIND_BLOWN)
                        ADJUST_SCORE(FAILS_OR_BAD); //Do something better
                }
            }
            break;
        case EFFECT_QUASH:
            if (!isDoubleBattle
            || AI_IsSlower(battlerAtk, battlerDef, move)
            || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_AFTER_YOU:
            if (!IsTargetingPartner(battlerAtk, battlerDef)
              || !isDoubleBattle
              || AI_IsSlower(battlerAtk, battlerDef, move)
              || PartnerMoveIsSameAsAttacker(BATTLE_PARTNER(battlerAtk), battlerDef, move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_TAILWIND:
            if (gSideTimers[GetBattlerSide(battlerAtk)].tailwindTimer != 0
              || PartnerMoveIs(BATTLE_PARTNER(battlerAtk), aiData->partnerMove, MOVE_TAILWIND)
              || (gFieldStatuses & STATUS_FIELD_TRICK_ROOM && gFieldTimers.trickRoomTimer > 1)) // Trick Room active and not ending this turn
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_LUCKY_CHANT:
            if (gSideTimers[GetBattlerSide(battlerAtk)].luckyChantTimer != 0
              || PartnerMoveIsSameNoTarget(BATTLE_PARTNER(battlerAtk), move, aiData->partnerMove))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_MAGNET_RISE:
            if (gFieldStatuses & STATUS_FIELD_GRAVITY
              ||  gDisableStructs[battlerAtk].magnetRiseTimer != 0
              || aiData->holdEffects[battlerAtk] == HOLD_EFFECT_IRON_BALL
              || gStatuses3[battlerAtk] & (STATUS3_ROOTED | STATUS3_MAGNET_RISE | STATUS3_SMACKED_DOWN)
              || !IsBattlerGrounded(battlerAtk))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_CAMOUFLAGE:
            if (!CanCamouflage(battlerAtk))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SYNCHRONOISE:
            //Check holding ring target or is of same type
            if (aiData->holdEffects[battlerDef] == HOLD_EFFECT_RING_TARGET
              || DoBattlersShareType(battlerAtk, battlerDef))
                break;
            else
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SKY_DROP:
            if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_FLYING))
                ADJUST_SCORE(FAILS_OR_BAD);
            if (BattlerWillFaintFromWeather(battlerAtk, aiData->abilities[battlerAtk])
            ||  DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
            ||  GetBattlerWeight(battlerDef) >= 2000) //200.0 kg
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_REVIVAL_BLESSING:
            if (GetFirstFaintedPartyIndex(battlerAtk) == PARTY_SIZE)
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (CanBattlerFaintTarget(battlerAtk, battlerDef))
                ADJUST_SCORE(FAILS_OR_BAD);
            else if (CanBattlerFaintTarget(battlerDef, battlerAtk)
             && AI_IsSlower(battlerAtk, battlerDef, move))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_JUNGLE_HEALING:
           if (AtMaxHp(battlerAtk)
            && AtMaxHp(BATTLE_PARTNER(battlerAtk))
            && !(gBattleMons[battlerAtk].status1 & STATUS1_ANY)
            && !(gBattleMons[BATTLE_PARTNER(battlerAtk)].status1 & STATUS1_ANY))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_TAKE_HEART:
            if ((!(gBattleMons[battlerAtk].status1 & STATUS1_ANY)
             || PartnerMoveIs(BATTLE_PARTNER(battlerAtk), aiData->partnerMove, MOVE_JUNGLE_HEALING)
             || PartnerMoveIs(BATTLE_PARTNER(battlerAtk), aiData->partnerMove, MOVE_HEAL_BELL)
             || PartnerMoveIs(BATTLE_PARTNER(battlerAtk), aiData->partnerMove, MOVE_AROMATHERAPY))
             && !BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK)
             && !BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_SPICY_EXTRACT:
            if (battlerAtk != BATTLE_PARTNER(battlerDef)
             && (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL)
              || aiData->abilities[battlerDef] == ABILITY_CLEAR_BODY
              || aiData->holdEffects[battlerDef] == HOLD_EFFECT_CLEAR_AMULET))
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_UPPER_HAND:
            if (predictedMove == MOVE_NONE || IS_MOVE_STATUS(predictedMove) || AI_IsSlower(battlerAtk, battlerDef, move) || GetMovePriority(battlerDef, predictedMove) < 1 || GetMovePriority(battlerDef, predictedMove) > 3) // Opponent going first or not using priority move
                ADJUST_SCORE(FAILS_OR_BAD);
            break;
        case EFFECT_PLACEHOLDER:
            return 0;   // cannot even select
    } // move effect checks

    // Choice items
    if (HOLD_EFFECT_CHOICE(aiData->holdEffects[battlerAtk]) && gBattleMons[battlerAtk].ability != ABILITY_KLUTZ)
    {
        // Don't use user-target moves ie. Swords Dance, with exceptions
        if ((moveTarget & MOVE_TARGET_USER)
        && moveEffect != EFFECT_DESTINY_BOND && moveEffect != EFFECT_WISH && moveEffect != EFFECT_HEALING_WISH
        && !(moveEffect == EFFECT_AURORA_VEIL && (AI_GetWeather(aiData) & (B_WEATHER_SNOW | B_WEATHER_HAIL))))
            ADJUST_SCORE(-30);
        // Don't use a status move if the mon is the last one in the party, has no good switchin, or is trapped
        else if (GetBattleMoveCategory(move) == DAMAGE_CATEGORY_STATUS
            && (CountUsablePartyMons(battlerAtk) < 1
            || AI_DATA->monToSwitchId[battlerAtk] == PARTY_SIZE
            || IsBattlerTrapped(battlerAtk, TRUE)))
            ADJUST_SCORE(-30);
    }

    if (score < 0)
        score = 0;

    return score;
}

static s32 AI_CalcPartnerScore(u32 battler, u32 battlerPartner, u32 move)
{
    struct AiLogicData *aiData = AI_DATA;
    u32 moveType = gMovesInfo[move].type;
    u32 ability = aiData->abilities[battler];
    u32 partnerAbility = aiData->abilities[battlerPartner];
    u32 partnerHoldEffect = aiData->holdEffects[battlerPartner];
    bool32 partnerProtecting = (gMovesInfo[aiData->partnerMove].effect == EFFECT_PROTECT);
    u32 effectiveness = aiData->effectiveness[battler][battlerPartner][AI_THINKING_STRUCT->movesetIndex];

    SetTypeBeforeUsingMove(move, battler);
    GET_MOVE_TYPE(move, moveType);

    if (partnerProtecting)
        return FALSE;

    if (partnerHoldEffect == HOLD_EFFECT_WEAKNESS_POLICY
     && effectiveness >= AI_EFFECTIVENESS_x2
     && IsBattlerOrPartnerFirstTurn(battler, battlerPartner)
     && AI_IsFaster(battler, battlerPartner, move)
     && GetNoOfHitsToKOBattler(battler, battlerPartner, AI_THINKING_STRUCT->movesetIndex) >= 4)
        return TRUE;

    switch (gMovesInfo[move].effect)
    {
    case EFFECT_SKILL_SWAP:
        if (partnerAbility == ABILITY_TRUANT)
            return TRUE;
        if (ability == ABILITY_SAP_SIPPER
         && (IS_BATTLER_OF_TYPE(battlerPartner, TYPE_GROUND)
          || IS_BATTLER_OF_TYPE(battlerPartner, TYPE_WATER)
          || IS_BATTLER_OF_TYPE(battlerPartner, TYPE_ROCK)))
            return TRUE;
        break;
    case EFFECT_BEAT_UP:
        if (HasMoveEffect(battlerPartner, EFFECT_RAGE_FIST)
         && gBattleStruct->timesGotHit[GetBattlerSide(battlerPartner)][gBattlerPartyIndexes[battlerPartner]] < 6
         && IsBattlerOrPartnerFirstTurn(battler, battlerPartner))
            return TRUE;
        break;
    case EFFECT_DECORATE:
        if (gDisableStructs[battler].isFirstTurn || RandomPercentage(RNG_NONE, 30))
            return TRUE;
        break;
    }

    switch (partnerAbility)
    {
    case ABILITY_JUSTIFIED:
        if (moveType != TYPE_DARK || IS_MOVE_STATUS(move))
            return FALSE;
        if (IsBattlerOrPartnerFirstTurn(battler, battlerPartner) && BattlerStatCanRise(battlerPartner, partnerAbility, STAT_ATK))
            return TRUE;
        break;
    }

    return FALSE;
}

static bool32 IsPinchBerryItemEffect(u32 holdEffect)
{
    switch (holdEffect)
    {
    case HOLD_EFFECT_ATTACK_UP:
    case HOLD_EFFECT_DEFENSE_UP:
    case HOLD_EFFECT_SPEED_UP:
    case HOLD_EFFECT_SP_ATTACK_UP:
    case HOLD_EFFECT_SP_DEFENSE_UP:
    case HOLD_EFFECT_CRITICAL_UP:
    case HOLD_EFFECT_RANDOM_STAT_UP:
    case HOLD_EFFECT_CUSTAP_BERRY:
    case HOLD_EFFECT_MICLE_BERRY:
        return TRUE;
    }

    return FALSE;
}

static s32 UNUSED CompareMoveAccuracies(u32 battlerAtk, u32 battlerDef, u32 moveSlot1, u32 moveSlot2)
{
    u32 acc1 = AI_DATA->moveAccuracy[battlerAtk][battlerDef][moveSlot1];
    u32 acc2 = AI_DATA->moveAccuracy[battlerAtk][battlerDef][moveSlot2];

    if (acc1 > acc2)
        return 1;
    else if (acc2 > acc1)
        return -1;
    return 0;
}

static inline bool32 UNUSED ShouldUseSpreadDamageMove(u32 battlerAtk, u32 move, u32 moveIndex, u32 hitsToFaintOpposingBattler)
{
    u32 partnerBattler;
    u32 noOfHitsToFaintPartner;

    if (gMovesInfo[move].target != MOVE_TARGET_FOES_AND_ALLY || !IsDoubleBattle())
        return FALSE;

    partnerBattler = BATTLE_PARTNER(battlerAtk);
    noOfHitsToFaintPartner = GetNoOfHitsToKOBattler(battlerAtk, partnerBattler, moveIndex);
    return (IsBattlerAlive(partnerBattler)
         && noOfHitsToFaintPartner != NO_DAMAGE // Immunity check
         && !(noOfHitsToFaintPartner < 4 && hitsToFaintOpposingBattler == 1)
         && noOfHitsToFaintPartner < 7);
}

static s32 AI_CompareDamagingMoves(u32 battlerAtk, u32 battlerDef, u32 currId)
{
    u32 i;
    bool32 multipleBestMoves = FALSE;
    s32 viableMoveScores[MAX_MON_MOVES];
    s32 bestViableMoveScore;
    s32 noOfHits[MAX_MON_MOVES];
    s32 score = 0;
    s32 leastHits = 1000;
    u16 *moves = GetMovesArray(battlerAtk);
    bool32 isMoveEffectInMinus[MAX_MON_MOVES];
    bool32 isDoubleTargetMove[MAX_MON_MOVES];

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && gMovesInfo[moves[i]].power)
        {
            noOfHits[i] = GetNoOfHitsToKOBattler(battlerAtk, battlerDef, i);
            if (noOfHits[i] < leastHits && noOfHits[i] != NO_DAMAGE)
                leastHits = noOfHits[i];

            viableMoveScores[i] = AI_SCORE_DEFAULT;
            isMoveEffectInMinus[i] = AI_IsMoveEffectInMinus(battlerAtk, battlerDef, moves[i]);
            isDoubleTargetMove[i] = AI_GetBattlerMoveTargetType(battlerAtk, moves[i]) == MOVE_TARGET_BOTH;
        }
        else
        {
            noOfHits[i] = -1;
            viableMoveScores[i] = 0;
            isMoveEffectInMinus[i] = FALSE;
        }
    }

    if (leastHits == noOfHits[currId])
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (i == currId || noOfHits[currId] != noOfHits[i])
                continue;

            if (leastHits == 1)
            {
                multipleBestMoves = TRUE;

                switch (AI_WhichMoveBetter(moves[currId], moves[i], battlerAtk, battlerDef))
                {
                case 1:
                    viableMoveScores[i] -= 1;
                    break;
                case -1:
                    viableMoveScores[currId] -= 1;
                    break;
                }
            }
            else if (IsDoubleBattle() && (isDoubleTargetMove[i] || isDoubleTargetMove[currId]))
            {
                multipleBestMoves = TRUE;

                if (isDoubleTargetMove[i] && !isDoubleTargetMove[currId])
                    viableMoveScores[i] += 1;
                else if (!isDoubleTargetMove[i] && isDoubleTargetMove[currId])
                    viableMoveScores[currId] += 1;
            }
            else if (isMoveEffectInMinus[i] || isMoveEffectInMinus[currId])
            {
                multipleBestMoves = TRUE;

                if (isMoveEffectInMinus[i] && !isMoveEffectInMinus[currId])
                    viableMoveScores[i] -= 1;
                else if (!isMoveEffectInMinus[i] && isMoveEffectInMinus[currId])
                    viableMoveScores[currId] -= 1;
            }
        }

        if (!multipleBestMoves && GetBestDmgMoveFromBattler(battlerAtk, battlerDef) == moves[currId])
        {
            ADJUST_SCORE(BEST_DAMAGE_MOVE);
        }
        else if (multipleBestMoves)
        {
            bestViableMoveScore = 0;
            for (i = 0; i < MAX_MON_MOVES; i++)
            {
                if (viableMoveScores[i] > bestViableMoveScore)
                    bestViableMoveScore = viableMoveScores[i];
            }

            if (viableMoveScores[currId] == bestViableMoveScore)
                ADJUST_SCORE(BEST_DAMAGE_MOVE);
        }
    }

    return score;
}

static s32 AI_PowerfulStatus(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 moveEffect = gMovesInfo[move].effect;

    if (gMovesInfo[move].category != DAMAGE_CATEGORY_STATUS || gMovesInfo[AI_DATA->partnerMove].effect == moveEffect)
        return FALSE;

    switch (moveEffect)
    {
    case EFFECT_TAILWIND:
        return (!gSideTimers[GetBattlerSide(battlerAtk)].tailwindTimer && !(gFieldStatuses & STATUS_FIELD_TRICK_ROOM && gFieldTimers.trickRoomTimer > 1));
    case EFFECT_TRICK_ROOM:
        return (!(gFieldStatuses & STATUS_FIELD_TRICK_ROOM) && !HasMoveEffect(battlerDef, EFFECT_TRICK_ROOM));
    case EFFECT_MAGIC_ROOM:
        return (!(gFieldStatuses & STATUS_FIELD_MAGIC_ROOM) && !HasMoveEffect(battlerDef, EFFECT_MAGIC_ROOM));
    case EFFECT_WONDER_ROOM:
        return (!(gFieldStatuses & STATUS_FIELD_WONDER_ROOM) && !HasMoveEffect(battlerDef, EFFECT_WONDER_ROOM));
    case EFFECT_GRAVITY:
        return (!(gFieldStatuses & STATUS_FIELD_GRAVITY));
    case EFFECT_SAFEGUARD:
        return (!(gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_SAFEGUARD));
    case EFFECT_MIST:
        return (!(gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_MIST));
    case EFFECT_LIGHT_SCREEN:
    case EFFECT_REFLECT:
    case EFFECT_AURORA_VEIL:
        return (ShouldSetScreen(battlerAtk, battlerDef, moveEffect));
    case EFFECT_SPIKES:
    case EFFECT_STEALTH_ROCK:
    case EFFECT_STICKY_WEB:
    case EFFECT_TOXIC_SPIKES:
        return AI_ShouldSetUpHazards(battlerAtk, battlerDef, moveEffect);
    case EFFECT_GRASSY_TERRAIN:
        return !(gFieldStatuses & STATUS_FIELD_GRASSY_TERRAIN);
    case EFFECT_ELECTRIC_TERRAIN:
        return !(gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN);
    case EFFECT_PSYCHIC_TERRAIN:
        return !(gFieldStatuses & STATUS_FIELD_PSYCHIC_TERRAIN);
    case EFFECT_MISTY_TERRAIN:
        return !(gFieldStatuses & STATUS_FIELD_MISTY_TERRAIN);
    case EFFECT_SANDSTORM:
        return !(AI_GetWeather(AI_DATA) & (B_WEATHER_SANDSTORM | B_WEATHER_PRIMAL_ANY));
    case EFFECT_SUNNY_DAY:
        return !(AI_GetWeather(AI_DATA) & (B_WEATHER_SUN | B_WEATHER_PRIMAL_ANY));
    case EFFECT_RAIN_DANCE:
        return !(AI_GetWeather(AI_DATA) & (B_WEATHER_RAIN | B_WEATHER_PRIMAL_ANY));
    case EFFECT_HAIL:
        return !(AI_GetWeather(AI_DATA) & (B_WEATHER_HAIL | B_WEATHER_PRIMAL_ANY));
    case EFFECT_SNOWSCAPE:
        return !(AI_GetWeather(AI_DATA) & (B_WEATHER_SNOW | B_WEATHER_PRIMAL_ANY));
    }

    return FALSE;
}

static u32 AI_CalcEffectScore(u32 battlerAtk, u32 battlerDef, u32 move)
{
    struct AiLogicData *aiData = AI_DATA;

    u32 i;
    s32 score = 0;
    u32 moveEffect = gMovesInfo[move].effect;
    u32 predictedMove = aiData->predictedMoves[battlerDef];
    bool32 isDoubleBattle = IsValidDoubleBattle(battlerAtk);

    // The AI should understand that while Dynamaxed, status moves function like Protect.
    if (GetActiveGimmick(battlerAtk) == GIMMICK_DYNAMAX && gMovesInfo[move].category == DAMAGE_CATEGORY_STATUS)
        moveEffect = EFFECT_PROTECT;

    // check thawing moves
    if ((gBattleMons[battlerAtk].status1 & (STATUS1_FREEZE | STATUS1_FROSTBITE)) && gMovesInfo[move].thawsUser)
        ADJUST_SCORE(BEST_EFFECT);

    switch (moveEffect)
    {
    case EFFECT_FUTURE_SIGHT:
        if (AI_IsFaster(battlerAtk, battlerDef, move) && CanBattlerFaintTarget(battlerDef, battlerAtk))
            ADJUST_SCORE(BEST_EFFECT);
        else if (AI_IsSlower(battlerAtk, battlerDef, move) && NoOfHitsToFaintBattler(battlerDef, battlerAtk) <= 2)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_DESTINY_BOND:
        if (CanBattlerFaintTarget(battlerDef, battlerAtk)
         && (AI_IsFaster(battlerAtk, battlerDef, move) || AI_DATA->holdEffects[battlerAtk] == HOLD_EFFECT_QUICK_CLAW))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_SLEEP:
    case EFFECT_YAWN:
        if (AI_ShouldSleep(battlerAtk, battlerDef, move))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_TOXIC_THREAD:
        if (AI_ShouldPoison(battlerAtk, battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        score += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
        score = (score > BEST_EFFECT) ? BEST_EFFECT : score;
        break;
    case EFFECT_TOXIC:
    case EFFECT_POISON:
        if (AI_ShouldPoison(battlerAtk, battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_WILL_O_WISP:
        if (AI_ShouldBurn(battlerAtk, battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_SWAGGER:
    case EFFECT_FLATTER:
        if (aiData->abilities[battlerDef] == ABILITY_CONTRARY)
            ADJUST_SCORE(WEAK_EFFECT);
    case EFFECT_CONFUSE:
        if (AI_ShouldConfuse(battlerAtk, battlerDef))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_PARALYZE:
        if (AI_ShouldParalyze(battlerAtk, battlerDef, move))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_LEECH_SEED:
        if (AI_ShouldLeechSeed(battlerAtk, battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_SHED_TAIL:
        if (AI_IsFaster(battlerAtk, battlerDef, move) || NoOfHitsToFaintBattler(battlerDef, battlerAtk) >= 3)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_SUBSTITUTE:
        if (IsBattlerFirstTurnOrRandom(battlerAtk))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_FOLLOW_ME:
        if (CanBattlerFaintTarget(battlerDef, BATTLE_PARTNER(battlerAtk)))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_HELPING_HAND:
        if (!CanBattlerFaintTarget(BATTLE_PARTNER(battlerAtk), battlerDef) && CanBattlerFaintTargetWithHelpingHand(BATTLE_PARTNER(battlerAtk), battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_MIRROR_MOVE:
        if (predictedMove != MOVE_NONE)
            return AI_CheckViability(battlerAtk, battlerDef, gLastMoves[battlerDef], score);
        break;
    case EFFECT_ATTACK_DOWN:
    case EFFECT_ATTACK_DOWN_2:
    case EFFECT_DEFENSE_DOWN:
    case EFFECT_DEFENSE_DOWN_2:
        break;
    case EFFECT_SPEED_DOWN:
    case EFFECT_SPEED_DOWN_2:
        if (AI_IsSlower(battlerAtk, battlerDef, move)
         && ShouldLowerSpeed(battlerAtk, battlerDef, move)
         && gBattleMons[battlerDef].statStages[STAT_SPEED] > DEFAULT_STAT_STAGE - 2)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    // TODO
    case EFFECT_SPECIAL_DEFENSE_DOWN:
    case EFFECT_SPECIAL_DEFENSE_DOWN_2:
        if (!ShouldLowerSpecialDefense(battlerAtk, battlerDef))
            break;
        else if (NoOfHitsToFaintBattler(battlerDef, battlerAtk) > 3)
            ADJUST_SCORE(BEST_EFFECT);
        else if (NoOfHitsToFaintBattler(battlerDef, battlerAtk) > 2)
            ADJUST_SCORE(WEAK_EFFECT);
        break;
    case EFFECT_SPECIAL_ATTACK_DOWN:
    case EFFECT_SPECIAL_ATTACK_DOWN_2:
    case EFFECT_ACCURACY_DOWN:
    case EFFECT_ACCURACY_DOWN_2:
    case EFFECT_EVASION_DOWN:
    case EFFECT_EVASION_DOWN_2:
    case EFFECT_SPICY_EXTRACT:
        // TODO: Make IncreaseStatDownScore function, just like IncreaseStatUpScore
        break;
    case EFFECT_HAZE:
        score += AI_TryToClearStats(battlerAtk, battlerDef, isDoubleBattle);
        break;
    case EFFECT_ROAR:
        score += AI_TryToClearStats(battlerAtk, battlerDef, isDoubleBattle);
        break;
    case EFFECT_CONVERSION:
        if (!IS_BATTLER_OF_TYPE(battlerAtk, gMovesInfo[gBattleMons[battlerAtk].moves[0]].type))
            ADJUST_SCORE(WEAK_EFFECT);
        break;
    case EFFECT_SWALLOW:
        u32 healPercent = 0;
        switch (gDisableStructs[battlerAtk].stockpileCounter)
        {
        case 1: healPercent = 25;  break;
        case 2: healPercent = 50;  break;
        case 3: healPercent = 100; break;
        default: break;
        }
        if (ShouldRecover(battlerAtk, battlerDef, move, healPercent))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_REST:
        if (ShouldRecover(battlerAtk, battlerDef, move, 100))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_RESTORE_HP:
    case EFFECT_SOFTBOILED:
    case EFFECT_ROOST:
    case EFFECT_MORNING_SUN:
    case EFFECT_SYNTHESIS:
    case EFFECT_MOONLIGHT:
        // TODO: Account for weather
        if (ShouldRecover(battlerAtk, battlerDef, move, 50))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_LIGHT_SCREEN:
    case EFFECT_REFLECT:
    case EFFECT_AURORA_VEIL:
        if (ShouldSetScreen(battlerAtk, battlerDef, moveEffect))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_OHKO:
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            break;
        else if (gStatuses3[battlerAtk] & STATUS3_ALWAYS_HITS)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_MEAN_LOOK:
        if (ShouldTrap(battlerAtk, battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_FOCUS_ENERGY:
    case EFFECT_LASER_FOCUS:
        if (AI_ShouldIncreaseCritRate(battlerAtk, battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_MIMIC:
        if (AI_IsFaster(battlerAtk, battlerDef, move))
        {
            if (gLastMoves[battlerDef] != MOVE_NONE && gLastMoves[battlerDef] != 0xFFFF)
                return AI_CheckViability(battlerAtk, battlerDef, gLastMoves[battlerDef], score);
        }
        break;
    case EFFECT_PARTING_SHOT:
    case EFFECT_HIT_ESCAPE:
        if (CountUsablePartyMons(battlerAtk) < 1)
            break;
        else if (gBattleMons[battlerAtk].species == SPECIES_PALAFIN_ZERO)
            RETURN_SCORE(ALWAYS_CHOSEN);
        break;
    case EFFECT_BATON_PASS:
        if (AI_EffectBatonPass(battlerAtk, battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_DISABLE:
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            break;
        else if (gDisableStructs[battlerDef].disableTimer == 0
        && (gLastMoves[battlerDef] != MOVE_NONE)
        && (gLastMoves[battlerDef] != 0xFFFF)
        && (B_MENTAL_HERB < GEN_5 || aiData->holdEffects[battlerDef] != HOLD_EFFECT_MENTAL_HERB)
        && (AI_IsFaster(battlerAtk, battlerDef, move)))
        {
            if (CanTargetMoveFaintAi(gLastMoves[battlerDef], battlerDef, battlerAtk, 1))
                ADJUST_SCORE(BEST_EFFECT); // Disable move that can kill attacker
        }
        break;
    case EFFECT_ENCORE:
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            break;
        else if (gDisableStructs[battlerDef].encoreTimer == 0
        && (B_MENTAL_HERB < GEN_5 || aiData->holdEffects[battlerDef] != HOLD_EFFECT_MENTAL_HERB)
        && (gBattleMoveEffects[gMovesInfo[gLastMoves[battlerDef]].effect].encourageEncore))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_SLEEP_TALK:
    case EFFECT_SNORE:
        if (!IsWakeupTurn(battlerAtk) && gBattleMons[battlerAtk].status1 & STATUS1_SLEEP)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_LOCK_ON:
        if (HasMoveEffect(battlerAtk, EFFECT_OHKO))
            ADJUST_SCORE(BEST_EFFECT);
        else if (HasMoveWithLowAccuracy(battlerAtk, battlerDef, 85, TRUE, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef]))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_WISH:
    case EFFECT_HEAL_BELL:
        if (ShouldUseWishAromatherapy(battlerAtk, battlerDef, move))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_CURSE:
        if (IS_BATTLER_OF_TYPE(battlerAtk, TYPE_GHOST))
        {
            if (IsBattlerTrapped(battlerAtk, battlerDef))
                ADJUST_SCORE(BEST_EFFECT);
            else
                ADJUST_SCORE(GOOD_EFFECT);
        }
        else
        {
            score += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
            score += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
            score = (score > BEST_EFFECT) ? BEST_EFFECT : score;
        }
        break;
    case EFFECT_PROTECT:
        if (gMovesInfo[gBattleStruct->lastUsedMoveByBattler[battlerAtk]].effect == EFFECT_PROTECT)
        {
            ADJUST_SCORE(FAILS_OR_BAD);
            break;
        }
        switch (move)
        {
        case MOVE_QUICK_GUARD:
            if (predictedMove != MOVE_NONE && gMovesInfo[predictedMove].priority > 0)
                ShouldUseProtect(battlerAtk, battlerDef, move, &score);
            break;
        case MOVE_WIDE_GUARD:
            if (predictedMove != MOVE_NONE && AI_GetBattlerMoveTargetType(battlerDef, predictedMove) & (MOVE_TARGET_FOES_AND_ALLY | MOVE_TARGET_BOTH))
            {
                ShouldUseProtect(battlerAtk, battlerDef, move, &score);
            }
            else if (isDoubleBattle && AI_GetBattlerMoveTargetType(BATTLE_PARTNER(battlerAtk), aiData->partnerMove) & MOVE_TARGET_FOES_AND_ALLY)
            {
                if (aiData->abilities[battlerAtk] != ABILITY_TELEPATHY)
                  ShouldUseProtect(battlerAtk, battlerDef, move, &score);
            }
            break;
        case MOVE_CRAFTY_SHIELD:
            if (predictedMove != MOVE_NONE && IS_MOVE_STATUS(predictedMove) && !(AI_GetBattlerMoveTargetType(battlerDef, predictedMove) & MOVE_TARGET_USER))
                ShouldUseProtect(battlerAtk, battlerDef, move, &score);
            break;

        case MOVE_MAT_BLOCK:
            if (gDisableStructs[battlerAtk].isFirstTurn && predictedMove != MOVE_NONE
              && !IS_MOVE_STATUS(predictedMove) && !(AI_GetBattlerMoveTargetType(battlerDef, predictedMove) & MOVE_TARGET_USER))
                ShouldUseProtect(battlerAtk, battlerDef, move, &score);
            break;
        case MOVE_KINGS_SHIELD:
            if (aiData->abilities[battlerAtk] == ABILITY_STANCE_CHANGE //Special logic for Aegislash
             && gBattleMons[battlerAtk].species == SPECIES_AEGISLASH_BLADE
             && !IsBattlerIncapacitated(battlerDef, aiData->abilities[battlerDef]))
            {
                ADJUST_SCORE(BEST_EFFECT);
                break;
            }
            //fallthrough
        default: // protect
            ShouldUseProtect(battlerAtk, battlerDef, move, &score);
            break;
        }
        break;
    case EFFECT_ENDURE:
        if (CanBattlerFaintTarget(battlerDef, battlerAtk))
        {
            if (gBattleMons[battlerAtk].hp > gBattleMons[battlerAtk].maxHP / 4 // Pinch berry couldn't have activated yet
             && IsPinchBerryItemEffect(aiData->holdEffects[battlerAtk]))
                ADJUST_SCORE(BEST_EFFECT);
            else if ((gBattleMons[battlerAtk].hp > 1) // Only spam endure for Flail/Reversal if you're not at Min Health
             && (HasMoveEffect(battlerAtk, EFFECT_FLAIL) || HasMoveEffect(battlerAtk, EFFECT_ENDEAVOR)))
                ADJUST_SCORE(BEST_EFFECT);
        }
        break;
    case EFFECT_SPIKES:
    case EFFECT_STEALTH_ROCK:
    case EFFECT_STICKY_WEB:
    case EFFECT_TOXIC_SPIKES:
        if (AI_ShouldSetUpHazards(battlerAtk, battlerDef, moveEffect))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_FORESIGHT:
        if (aiData->abilities[battlerAtk] == ABILITY_SCRAPPY || aiData->abilities[battlerAtk] == ABILITY_MINDS_EYE)
            break;
        else if (gBattleMons[battlerDef].statStages[STAT_EVASION] > DEFAULT_STAT_STAGE
         || (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GHOST)
         && (HasMoveWithType(battlerAtk, TYPE_NORMAL)
         || HasMoveWithType(battlerAtk, TYPE_FIGHTING))))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_MIRACLE_EYE:
        if (gBattleMons[battlerDef].statStages[STAT_EVASION] > DEFAULT_STAT_STAGE
          || (IS_BATTLER_OF_TYPE(battlerDef, TYPE_DARK) && (HasMoveWithType(battlerAtk, TYPE_PSYCHIC))))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_PERISH_SONG:
        if (IsBattlerTrapped(battlerAtk, battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_SANDSTORM:
        if (ShouldSetSandstorm(battlerAtk, aiData->abilities[battlerAtk], aiData->holdEffects[battlerAtk]))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_HAIL:
    case EFFECT_SNOWSCAPE:
        if (ShouldSetSnow(battlerAtk, aiData->abilities[battlerAtk], aiData->holdEffects[battlerAtk]))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_RAIN_DANCE:
        if (ShouldSetRain(battlerAtk, aiData->abilities[battlerAtk], aiData->holdEffects[battlerAtk]))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_SUNNY_DAY:
        if (ShouldSetSun(battlerAtk, aiData->abilities[battlerAtk], aiData->holdEffects[battlerAtk]))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_BELLY_DRUM:
        if (!CanBattlerFaintTarget(battlerDef, battlerAtk)
        && gBattleMons[battlerAtk].statStages[STAT_ATK] < MAX_STAT_STAGE - 2
        && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL)
        && aiData->abilities[battlerAtk] != ABILITY_CONTRARY)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_PSYCH_UP:
        score += AI_ShouldCopyStatChanges(battlerAtk, battlerDef);
        break;
    case EFFECT_FIRST_TURN_ONLY:
        if (ShouldFakeOut(battlerAtk, battlerDef, move) && MoveHasAdditionalEffectWithChance(move, MOVE_EFFECT_FLINCH, 100))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_STOCKPILE:
        if (HasMoveEffect(battlerAtk, EFFECT_SWALLOW) || HasMoveEffect(battlerAtk, EFFECT_SPIT_UP))
            ADJUST_SCORE(GOOD_EFFECT);
        score += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        score += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
        score = (score > BEST_EFFECT) ? BEST_EFFECT : score;
        break;
    case EFFECT_ATTRACT:
        if ((NoOfHitsToFaintBattler(battlerAtk, battlerDef) <= 2) && AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE))
            break;
        if (IsBattlerFirstTurnOrRandom(battlerAtk));
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_DEFOG:
        if ((gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerAtk) != 0)
            || (gSideStatuses[GetBattlerSide(battlerDef)] & (SIDE_STATUS_SCREEN_ANY | SIDE_STATUS_SAFEGUARD | SIDE_STATUS_MIST)))
        {
            ADJUST_SCORE(BEST_EFFECT);
        }
        else if (!(gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SPIKES)) //Don't blow away hazards if you set them up
        {
            if (isDoubleBattle)
            {
                if (IsHazardMoveEffect(gMovesInfo[aiData->partnerMove].effect) // Partner is going to set up hazards
                    && AI_IsSlower(battlerAtk, BATTLE_PARTNER(battlerAtk), move)) // Partner going first
                    break; // Don't use Defog if partner is going to set up hazards
            }
            if (ShouldLowerEvasion(battlerAtk, battlerDef, aiData->abilities[battlerDef]))
                ADJUST_SCORE(GOOD_EFFECT);
        }
        break;
    case EFFECT_CHARGE:
        if (HasDamagingMoveOfType(battlerAtk, TYPE_ELECTRIC))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_TAUNT:
        if (IS_MOVE_STATUS(predictedMove))
            ADJUST_SCORE(BEST_EFFECT);
        else if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_STATUS))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_ROLE_PLAY:
        if (!gAbilitiesInfo[aiData->abilities[battlerAtk]].cantBeSuppressed
          && !gAbilitiesInfo[aiData->abilities[battlerDef]].cantBeCopied
          && !IsAbilityOfRating(aiData->abilities[battlerAtk], 5)
          && IsAbilityOfRating(aiData->abilities[battlerDef], 5))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_INGRAIN:
        ADJUST_SCORE(GOOD_EFFECT);
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_BIG_ROOT)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_MAGIC_COAT:
        if (IS_MOVE_STATUS(predictedMove) && AI_GetBattlerMoveTargetType(battlerDef, predictedMove) & (MOVE_TARGET_SELECTED | MOVE_TARGET_OPPONENTS_FIELD | MOVE_TARGET_BOTH))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_BRICK_BREAK:
    case EFFECT_RAGING_BULL:
        if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_REFLECT)
            ADJUST_SCORE(GOOD_EFFECT);
        else if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_LIGHTSCREEN && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL))
            ADJUST_SCORE(GOOD_EFFECT);
        else if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_AURORA_VEIL)
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_WORRY_SEED:
    case EFFECT_GASTRO_ACID:
    case EFFECT_SIMPLE_BEAM:
        if (IsAbilityOfRating(aiData->abilities[battlerDef], 5))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_ENTRAINMENT:
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            break;
        else if ((IsAbilityOfRating(aiData->abilities[battlerDef], 5) || gAbilitiesInfo[aiData->abilities[battlerAtk]].aiRating <= 0)
        && (aiData->abilities[battlerDef] != aiData->abilities[battlerAtk] && !(gStatuses3[battlerDef] & STATUS3_GASTRO_ACID)))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_IMPRISON:
        if (predictedMove != MOVE_NONE && HasMove(battlerAtk, predictedMove))
            ADJUST_SCORE(GOOD_EFFECT);
        else if (gDisableStructs[battlerAtk].isFirstTurn == 0)
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_REFRESH:
        if (gBattleMons[battlerAtk].status1 & STATUS1_ANY)
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_TAKE_HEART:
        if (gBattleMons[battlerAtk].status1 & STATUS1_ANY
         || BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPATK)
         || BattlerStatCanRise(battlerAtk, aiData->abilities[battlerAtk], STAT_SPDEF))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_GRUDGE:
        break;
    case EFFECT_SNATCH:
        if (predictedMove != MOVE_NONE && gMovesInfo[predictedMove].snatchAffected)
            ADJUST_SCORE(BEST_EFFECT); // Steal move
        break;
    case EFFECT_MUD_SPORT:
        if (!HasMoveWithType(battlerAtk, TYPE_ELECTRIC) && HasMoveWithType(battlerDef, TYPE_ELECTRIC))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_WATER_SPORT:
        if (!HasMoveWithType(battlerAtk, TYPE_FIRE) && (HasMoveWithType(battlerDef, TYPE_FIRE)))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_TICKLE:
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL))
            ADJUST_SCORE(WEAK_EFFECT);
        break;
    case EFFECT_GUARD_SWAP:
        if (gBattleMons[battlerDef].statStages[STAT_DEF] > gBattleMons[battlerAtk].statStages[STAT_DEF]
          && gBattleMons[battlerDef].statStages[STAT_SPDEF] >= gBattleMons[battlerAtk].statStages[STAT_SPDEF])
            ADJUST_SCORE(GOOD_EFFECT);
        else if (gBattleMons[battlerDef].statStages[STAT_SPDEF] > gBattleMons[battlerAtk].statStages[STAT_SPDEF]
          && gBattleMons[battlerDef].statStages[STAT_DEF] >= gBattleMons[battlerAtk].statStages[STAT_DEF])
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_POWER_SWAP:
        if (gBattleMons[battlerDef].statStages[STAT_ATK] > gBattleMons[battlerAtk].statStages[STAT_ATK]
          && gBattleMons[battlerDef].statStages[STAT_SPATK] >= gBattleMons[battlerAtk].statStages[STAT_SPATK])
            ADJUST_SCORE(GOOD_EFFECT);
        else if (gBattleMons[battlerDef].statStages[STAT_SPATK] > gBattleMons[battlerAtk].statStages[STAT_SPATK]
          && gBattleMons[battlerDef].statStages[STAT_ATK] >= gBattleMons[battlerAtk].statStages[STAT_ATK])
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_POWER_TRICK:
        if (!(gStatuses3[battlerAtk] & STATUS3_POWER_TRICK)
        && gBattleMons[battlerAtk].defense > gBattleMons[battlerAtk].attack
        && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_HEART_SWAP:
        {
            bool32 hasHigherStat = FALSE;
            //Only use if all target stats are >= attacker stats to prevent infinite loop
            for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
            {
                if (gBattleMons[battlerDef].statStages[i] < gBattleMons[battlerAtk].statStages[i])
                    break;
                if (gBattleMons[battlerDef].statStages[i] > gBattleMons[battlerAtk].statStages[i])
                    hasHigherStat = TRUE;
            }
            if (hasHigherStat && i == NUM_BATTLE_STATS)
                ADJUST_SCORE(GOOD_EFFECT);
        }
        break;
    case EFFECT_SPEED_SWAP:
        if (gBattleMons[battlerDef].speed > gBattleMons[battlerAtk].speed)
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_GUARD_SPLIT:
        {
            u32 newDefense = (gBattleMons[battlerAtk].defense + gBattleMons[battlerDef].defense) / 2;
            u32 newSpDef = (gBattleMons[battlerAtk].spDefense + gBattleMons[battlerDef].spDefense) / 2;

            if ((newDefense > gBattleMons[battlerAtk].defense && newSpDef >= gBattleMons[battlerAtk].spDefense)
            || (newSpDef > gBattleMons[battlerAtk].spDefense && newDefense >= gBattleMons[battlerAtk].defense))
                ADJUST_SCORE(GOOD_EFFECT);
        }
        break;
    case EFFECT_POWER_SPLIT:
        {
            u32 newAttack = (gBattleMons[battlerAtk].attack + gBattleMons[battlerDef].attack) / 2;
            u32 newSpAtk = (gBattleMons[battlerAtk].spAttack + gBattleMons[battlerDef].spAttack) / 2;

            if ((newAttack > gBattleMons[battlerAtk].attack && newSpAtk >= gBattleMons[battlerAtk].spAttack)
            || (newSpAtk > gBattleMons[battlerAtk].spAttack && newAttack >= gBattleMons[battlerAtk].attack))
                ADJUST_SCORE(GOOD_EFFECT);
        }
        break;
    case EFFECT_ELECTRIC_TERRAIN:
    case EFFECT_MISTY_TERRAIN:
        if (gStatuses3[battlerAtk] & STATUS3_YAWN && IsBattlerGrounded(battlerAtk))
            ADJUST_SCORE(BEST_EFFECT);
    case EFFECT_GRASSY_TERRAIN:
    case EFFECT_PSYCHIC_TERRAIN:
        ADJUST_SCORE(BEST_EFFECT);
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_TERRAIN_EXTENDER)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_PLEDGE:
        if (isDoubleBattle && HasMoveEffect(BATTLE_PARTNER(battlerAtk), EFFECT_PLEDGE))
            ADJUST_SCORE(BEST_EFFECT); // Partner might use pledge move
        break;
    case EFFECT_TRICK_ROOM:
        if (!(AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_POWERFUL_STATUS))
        {
            if (!(gFieldStatuses & STATUS_FIELD_TRICK_ROOM) && GetBattlerSideSpeedAverage(battlerAtk) < GetBattlerSideSpeedAverage(battlerDef))
                ADJUST_SCORE(BEST_EFFECT);
            else if ((gFieldStatuses & STATUS_FIELD_TRICK_ROOM) && GetBattlerSideSpeedAverage(battlerAtk) >= GetBattlerSideSpeedAverage(battlerDef))
                ADJUST_SCORE(BEST_EFFECT);
        }
        break;
    case EFFECT_MAGIC_ROOM:
        ADJUST_SCORE(GOOD_EFFECT);
        if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_NONE && aiData->holdEffects[battlerDef] != HOLD_EFFECT_NONE)
            ADJUST_SCORE(GOOD_EFFECT);
        if (isDoubleBattle && aiData->holdEffects[BATTLE_PARTNER(battlerAtk)] == HOLD_EFFECT_NONE && aiData->holdEffects[BATTLE_PARTNER(battlerDef)] != HOLD_EFFECT_NONE)
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_WONDER_ROOM:
        if ((HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL) && gBattleMons[battlerAtk].defense < gBattleMons[battlerAtk].spDefense)
          || (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL) && gBattleMons[battlerAtk].spDefense < gBattleMons[battlerAtk].defense))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_GRAVITY:
        if (!(gFieldStatuses & STATUS_FIELD_GRAVITY))
        {
            if (HasSleepMoveWithLowAccuracy(battlerAtk, battlerDef)) // Has Gravity for a move like Hypnosis
                AI_ShouldSleep(battlerAtk, battlerDef, move);
            if (HasMoveWithLowAccuracy(battlerAtk, battlerDef, 90, FALSE, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef]))
                ADJUST_SCORE(GOOD_EFFECT);
        }
        break;
    case EFFECT_ION_DELUGE:
        if ((aiData->abilities[battlerAtk] == ABILITY_VOLT_ABSORB
          || aiData->abilities[battlerAtk] == ABILITY_MOTOR_DRIVE
          || (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5 && aiData->abilities[battlerAtk] == ABILITY_LIGHTNING_ROD))
          && gMovesInfo[predictedMove].type == TYPE_NORMAL)
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_EMBARGO:
        if (aiData->holdEffects[battlerDef] != HOLD_EFFECT_NONE)
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_POWDER:
        if (predictedMove != MOVE_NONE && !IS_MOVE_STATUS(predictedMove) && gMovesInfo[predictedMove].type == TYPE_FIRE)
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_TELEKINESIS:
        if (HasMoveWithLowAccuracy(battlerAtk, battlerDef, 90, FALSE, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef])
          || !IsBattlerGrounded(battlerDef))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_HEAL_BLOCK:
        if (AI_IsFaster(battlerAtk, battlerDef, move) && predictedMove != MOVE_NONE && IsHealingMove(predictedMove))
            ADJUST_SCORE(GOOD_EFFECT); // Try to cancel healing move
        else if (HasHealingEffect(battlerDef) || aiData->holdEffects[battlerDef] == HOLD_EFFECT_LEFTOVERS
          || (aiData->holdEffects[battlerDef] == HOLD_EFFECT_BLACK_SLUDGE && IS_BATTLER_OF_TYPE(battlerDef, TYPE_POISON)))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_SOAK:
        if (HasMoveWithType(battlerAtk, TYPE_ELECTRIC) || HasMoveWithType(battlerAtk, TYPE_GRASS) || (HasMoveEffect(battlerAtk, EFFECT_SUPER_EFFECTIVE_ON_ARG) && gMovesInfo[move].argument == TYPE_WATER) )
            ADJUST_SCORE(GOOD_EFFECT); // Get some super effective moves
        break;
    case EFFECT_THIRD_TYPE:
        if (aiData->abilities[battlerDef] == ABILITY_WONDER_GUARD)
            ADJUST_SCORE(GOOD_EFFECT); // Give target more weaknesses
        break;
    case EFFECT_ELECTRIFY:
        if (predictedMove != MOVE_NONE
         && (aiData->abilities[battlerAtk] == ABILITY_VOLT_ABSORB
          || aiData->abilities[battlerAtk] == ABILITY_MOTOR_DRIVE
          || (B_REDIRECT_ABILITY_IMMUNITY >= GEN_5 && aiData->abilities[battlerAtk] == ABILITY_LIGHTNING_ROD)))
        {
            ADJUST_SCORE(GOOD_EFFECT);
        }
        break;
    case EFFECT_TOPSY_TURVY:
        if (CountPositiveStatStages(battlerDef) > CountNegativeStatStages(battlerDef))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_FAIRY_LOCK:
        if (ShouldTrap(battlerAtk, battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_QUASH:
        if (isDoubleBattle && AI_IsSlower(BATTLE_PARTNER(battlerAtk), battlerDef, aiData->partnerMove))
            ADJUST_SCORE(GOOD_EFFECT); // Attacker partner wouldn't go before target
        break;
    case EFFECT_TAILWIND:
        if (GetBattlerSideSpeedAverage(battlerAtk) < GetBattlerSideSpeedAverage(battlerDef))
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_LUCKY_CHANT:
        if (!isDoubleBattle && CountUsablePartyMons(battlerDef) > 0)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_MAGNET_RISE:
        if (IsBattlerGrounded(battlerAtk) && HasDamagingMoveOfType(battlerDef, TYPE_ELECTRIC)
          && !(AI_GetTypeEffectiveness(MOVE_EARTHQUAKE, battlerDef, battlerAtk) == AI_EFFECTIVENESS_x0)) // Doesn't resist ground move
        {
            if (AI_IsFaster(battlerAtk, battlerDef, move))
            {
                if (HasDamagingMoveOfType(battlerDef, TYPE_GROUND) && (Random() & 1))
                    ADJUST_SCORE(BEST_EFFECT); // Cause the enemy's move to fail
                break;
            }
        }
        break;
    case EFFECT_CAMOUFLAGE:
        if (predictedMove != MOVE_NONE && AI_IsFaster(battlerAtk, battlerDef, move)
         && !IS_MOVE_STATUS(move) && AI_GetTypeEffectiveness(predictedMove, battlerDef, battlerAtk) != AI_EFFECTIVENESS_x0)
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_COUNTER:
    case EFFECT_MIRROR_COAT:
        if (AI_ShouldMirrorCoatOrCounter(battlerAtk, battlerDef, moveEffect))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_SHORE_UP:
        if ((AI_GetWeather(aiData) & B_WEATHER_SANDSTORM) && ShouldRecover(battlerAtk, battlerDef, move, 67))
            ADJUST_SCORE(GOOD_EFFECT);
        else if (ShouldRecover(battlerAtk, battlerDef, move, 50))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_REVIVAL_BLESSING:
        if (GetFirstFaintedPartyIndex(battlerAtk) != PARTY_SIZE)
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    case EFFECT_JUNGLE_HEALING:
        if (ShouldRecover(battlerAtk, battlerDef, move, 25)
         || ShouldRecover(BATTLE_PARTNER(battlerAtk), battlerDef, move, 25)
         || gBattleMons[battlerAtk].status1 & STATUS1_ANY
         || gBattleMons[BATTLE_PARTNER(battlerAtk)].status1 & STATUS1_ANY)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_SALT_CURE:
        if (IS_BATTLER_OF_TYPE(battlerDef, TYPE_WATER) || IS_BATTLER_OF_TYPE(battlerDef, TYPE_STEEL))
            ADJUST_SCORE(GOOD_EFFECT);
        break;
    }

    if (AI_IsSecondaryMoveEffectBeneficial(battlerAtk, battlerDef, move, aiData))
        ADJUST_SCORE(GOOD_EFFECT);

    return score;
}

static u32 AI_CalcFaintScore(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 faintScore = FAINTS_TARGET;

    if (IsDoubleBattle())
    {
        if (gMovesInfo[move].target == MOVE_TARGET_BOTH)
            faintScore += BEST_DAMAGE_MOVE;
    }
    else
    {
        if (AI_IsFaster(battlerAtk, battlerDef, move))
            faintScore += GOOD_EFFECT;

        if (gMovesInfo[move].effect == EFFECT_HIT_ESCAPE && CountUsablePartyMons(battlerAtk) > 0 && RandomPercentage(RNG_NONE, 50))
            faintScore += GOOD_EFFECT;
    }

    if (gMovesInfo[move].effect == EFFECT_HIT_SWITCH_TARGET)
        faintScore += BEST_DAMAGE_MOVE;

    return faintScore;
}

static s32 AI_CalcSetUpEffectScore(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 tempScore = NO_INCREASE;
    u32 noOfHitsToKOPlayer = NoOfHitsToFaintBattler(battlerAtk, battlerDef);

    if (gBattleStruct->usedSetUpMoveBefore & gBitTable[battlerAtk]
     && (noOfHitsToKOPlayer <= 2 && noOfHitsToKOPlayer != UNKNOWN_NO_OF_HITS)
     && AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE))
        return NO_INCREASE;

    switch (gMovesInfo[move].effect)
    {
    default:
        break;
    case EFFECT_COSMIC_POWER:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
        break;
    case EFFECT_BULK_UP:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        break;
    case EFFECT_CALM_MIND:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
        break;
    case EFFECT_GEOMANCY:
        if (AI_DATA->holdEffects[battlerAtk] != HOLD_EFFECT_POWER_HERB)
            break;
    case EFFECT_QUIVER_DANCE:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
        break;
    case EFFECT_VICTORY_DANCE:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        break;
    case EFFECT_SHELL_SMASH:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        break;
    case EFFECT_TIDY_UP:
        tempScore += IncreaseTidyUpScore(battlerAtk, battlerDef);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
        break;
    case EFFECT_DRAGON_DANCE:
    case EFFECT_SHIFT_GEAR:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPEED);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        break;
    case EFFECT_ATTACK_UP:
    case EFFECT_ATTACK_UP_USER_ALLY:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        break;
    case EFFECT_ATTACK_UP_2:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK_2);
        break;
    case EFFECT_DEFENSE_UP:
    case EFFECT_DEFENSE_UP_3:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        break;
    case EFFECT_DEFENSE_UP_2:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF_2);
        break;
    case EFFECT_SPEED_UP:
        if (ShouldIncreaseSpeed(battlerAtk, battlerDef, move, 1))
            tempScore += BEST_EFFECT;
        break;
    case EFFECT_SPEED_UP_2:
        if (ShouldIncreaseSpeed(battlerAtk, battlerDef, move, 2))
            tempScore += BEST_EFFECT;
        break;
    case EFFECT_SPECIAL_ATTACK_UP:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
        break;
    case EFFECT_SPECIAL_ATTACK_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP_3:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK_2);
        break;
    case EFFECT_SPECIAL_DEFENSE_UP:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF);
        break;
    case EFFECT_SPECIAL_DEFENSE_UP_2:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPDEF_2);
        break;
    case EFFECT_ACCURACY_UP:
    case EFFECT_ACCURACY_UP_2:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ACC);
        break;
    case EFFECT_EVASION_UP:
    case EFFECT_EVASION_UP_2:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_EVASION);
        break;
    case EFFECT_ATTACK_ACCURACY_UP:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ACC);
        break;
    case EFFECT_GROWTH:
    case EFFECT_ATTACK_SPATK_UP:
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_ATK);
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_SPATK);
        break;
    case EFFECT_DEFENSE_CURL:
        if (HasMoveEffect(battlerAtk, EFFECT_ROLLOUT) && !(gBattleMons[battlerAtk].status2 & STATUS2_DEFENSE_CURL))
            tempScore =+ WEAK_EFFECT;
        tempScore += IncreaseStatUpScore(battlerAtk, battlerDef, STAT_CHANGE_DEF);
        break;
    }

    if (tempScore > NO_INCREASE)
    {
        gBattleStruct->usedSetUpMoveBefore |= gBitTable[battlerAtk];
        return (tempScore > BEST_EFFECT) ? BEST_EFFECT : tempScore;
    }

    return NO_INCREASE;
}

static s32 AI_CheckViability(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    if (IsTargetingPartner(battlerAtk, battlerDef))
    {
        if (AI_CalcPartnerScore(battlerAtk, battlerDef, move))
            ADJUST_SCORE(TARGET_PARTNER);
        else
            score = NO_INCREASE;

        return score;
    }

    if (gMovesInfo[move].power)
    {
        u32 moveIndex = AI_THINKING_STRUCT->movesetIndex;
        u32 noOfHitsToKOPlayer = GetNoOfHitsToKOBattler(battlerAtk, battlerDef, moveIndex);

        if (noOfHitsToKOPlayer == NO_DAMAGE && gMovesInfo[move].effect != EFFECT_FUTURE_SIGHT)
            score += FAILS_OR_BAD;
        else
            score += AI_CompareDamagingMoves(battlerAtk, battlerDef, moveIndex);

        if (noOfHitsToKOPlayer == 1)
            score += AI_CalcFaintScore(battlerAtk, battlerDef, move);

        if (score >= AI_SCORE_DEFAULT + FAINTS_TARGET)
            return score;

        if (noOfHitsToKOPlayer != NO_DAMAGE
         && !IsDoubleBattle()
         && AI_IsSlower(battlerAtk, battlerDef, MOVE_NONE)
         && CanBattlerFaintTarget(battlerDef, battlerAtk)
         && GetMovePriority(battlerAtk, move) > 0)
        {
            return score += ALWAYS_CHOSEN;
        }
    }

    if (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_POWERFUL_STATUS && AI_PowerfulStatus(battlerAtk, battlerDef, move))
    {
        ADJUST_SCORE(POWERFUL_STATUS);
        return score;
    }

    u32 setUpScore = AI_CalcSetUpEffectScore(battlerAtk, battlerDef, move);
    if (setUpScore > 0)
    {
        ADJUST_SCORE(setUpScore);
        return score;
    }

    score += AI_CalcEffectScore(battlerAtk, battlerDef, move);
    return score;
}

static void AI_Flee(void)
{
    AI_THINKING_STRUCT->aiAction |= (AI_ACTION_DONE | AI_ACTION_FLEE | AI_ACTION_DO_NOT_ATTACK);
}

static void AI_Watch(void)
{
    AI_THINKING_STRUCT->aiAction |= (AI_ACTION_DONE | AI_ACTION_WATCH | AI_ACTION_DO_NOT_ATTACK);
}

// Roaming pokemon logic
static s32 AI_Roaming(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    if (IsBattlerTrapped(battlerAtk, battlerDef))
        return score;

    AI_Flee();
    return score;
}

// Safari pokemon logic
static s32 AI_Safari(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    u32 safariFleeRate = gBattleStruct->safariEscapeFactor * 5; // Safari flee rate, from 0-20.

    if ((Random() % 100) < safariFleeRate)
        AI_Flee();
    else
        AI_Watch();

    return score;
}

// First battle logic
static s32 AI_FirstBattle(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    if (AI_DATA->hpPercents[battlerDef] <= 20)
        AI_Flee();

    return score;
}


// Dynamic AI Functions
// For specific battle scenarios

// Example - prefer attacking opposite foe in a tag battle
s32 AI_TagBattlePreferFoe(u32 battlerAtk, u32 battlerDef, u32 move, s32 score)
{
    if (!(gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER))
    {
        /* not a partner battle */
        return score;
    }
    else if (!IsBattlerAlive(BATTLE_OPPOSITE(battlerAtk)) || !IsBattlerAlive(BATTLE_PARTNER(BATTLE_OPPOSITE(battlerAtk))))
    {
        /* partner is defeated so attack normally */
        return score;
    }
    else if (battlerDef == BATTLE_OPPOSITE(battlerAtk))
    {
        /* attacking along the diagonal */
        ADJUST_SCORE(-20);
    }

    return score;
}

void ScriptSetDynamicAiFunc(struct ScriptContext *ctx)
{
    AiScoreFunc func = (AiScoreFunc)ScriptReadWord(ctx);
    sDynamicAiFunc = func;
}

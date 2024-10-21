#include "global.h"
#include "battle_z_move.h"
#include "malloc.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_ai_util.h"
#include "battle_ai_main.h"
#include "battle_ai_switch_items.h"
#include "battle_factory.h"
#include "battle_setup.h"
#include "event_data.h"
#include "data.h"
#include "item.h"
#include "pokemon.h"
#include "random.h"
#include "recorded_battle.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/moves.h"
#include "constants/items.h"

#define CHECK_MOVE_FLAG(flag)                                                                                   \
    s32 i;                                                                                                      \
    u16 *moves = GetMovesArray(battler);                                                                        \
    for (i = 0; i < MAX_MON_MOVES; i++)                                                                         \
    {                                                                                                           \
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].flag)                 \
            return TRUE;                                                                                        \
    }                                                                                                           \
    return FALSE

bool32 IsStatBoostingMove(u32 battler, u32 move)
{
    u32 moveEffect = gMovesInfo[move].effect;

    switch (moveEffect)
    {
    default:
        return FALSE;
    case EFFECT_HIT:
        switch (move)
        {
        default:
            return FALSE;
        case MOVE_OVERHEAT:
        case MOVE_DRACO_METEOR:
        case MOVE_LEAF_STORM:
        case MOVE_FLEUR_CANNON:
        case MOVE_SUPERPOWER:
            return AI_DATA->abilities[battler] == ABILITY_CONTRARY;
        }
    case EFFECT_COSMIC_POWER:
    case EFFECT_BULK_UP:
    case EFFECT_CALM_MIND:
    case EFFECT_GEOMANCY:
    case EFFECT_VICTORY_DANCE:
    case EFFECT_SHELL_SMASH:
    case EFFECT_TIDY_UP:
    case EFFECT_DRAGON_DANCE:
    case EFFECT_SHIFT_GEAR:
    case EFFECT_ATTACK_UP:
    case EFFECT_ATTACK_UP_USER_ALLY:
    case EFFECT_ATTACK_UP_2:
    case EFFECT_DEFENSE_UP:
    case EFFECT_DEFENSE_UP_3:
    case EFFECT_DEFENSE_UP_2:
    case EFFECT_SPEED_UP:
    case EFFECT_SPEED_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP:
    case EFFECT_SPECIAL_ATTACK_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP_3:
    case EFFECT_SPECIAL_DEFENSE_UP:
    case EFFECT_SPECIAL_DEFENSE_UP_2:
    case EFFECT_ACCURACY_UP:
    case EFFECT_ACCURACY_UP_2:
    case EFFECT_EVASION_UP:
    case EFFECT_EVASION_UP_2:
    case EFFECT_ATTACK_ACCURACY_UP:
    case EFFECT_GROWTH:
    case EFFECT_ATTACK_SPATK_UP:
    case EFFECT_DEFENSE_CURL:
        return TRUE;
    }

    return FALSE;
}

static u32 AI_GetEffectiveness(uq4_12_t multiplier);
static bool32 AI_IsTwoTurnMove(u32 battler, u32 move);
u32 AI_GetBattlerAbility(u32);

bool32 AI_IsFaster(u32 battlerAi, u32 battlerDef, u32 move)
{
    return AI_WhoStrikesFirst(battlerAi, battlerDef, move) == AI_IS_FASTER;
}

bool32 AI_IsSlower(u32 battlerAi, u32 battlerDef, u32 move)
{
    return AI_WhoStrikesFirst(battlerAi, battlerDef, move) == AI_IS_SLOWER;
}

bool32 AI_FaintsTargetFaster(u32 battlerAtk, u32 battlerDef)
{
    return NoOfHitsToFaintBattler(battlerAtk, battlerDef) < NoOfHitsToFaintBattler(battlerDef, battlerAtk);
}

bool32 IsBattlerFirstTurnOrRandom(u32 battler)
{
    return (gDisableStructs[battler].isFirstTurn || Random() & 1);
}

bool32 IsTargetingPartner(u32 battlerAtk, u32 battlerDef)
{
    return ((battlerAtk) == (battlerDef ^ BIT_FLANK));
}

bool32 IsBattlerOrPartnerFirstTurn(u32 battler, u32 battlerPartner)
{
    return (gDisableStructs[battler].isFirstTurn || gDisableStructs[battlerPartner].isFirstTurn);
}

bool32 CanPlayerFaintPartner(u32 battler, u32 battlerPartner)
{
    return (CanBattlerFaintTarget(BATTLE_OPPOSITE(battler), battlerPartner) || CanBattlerFaintTarget(BATTLE_OPPOSITE(battlerPartner), battlerPartner));
}

u32 GetAIChosenMove(u32 battlerId)
{
    return (gBattleMons[battlerId].moves[gBattleStruct->aiMoveOrAction[battlerId]]);
}

bool32 AI_RandLessThan(u32 val)
{
    if ((Random() % 0xFF) < val)
        return TRUE;
    return FALSE;
}

bool32 IsAiVsAiBattle(void)
{
    return (B_FLAG_AI_VS_AI_BATTLE && FlagGet(B_FLAG_AI_VS_AI_BATTLE));
}

bool32 BattlerHasAi(u32 battlerId)
{
    switch (GetBattlerPosition(battlerId))
    {
    case B_POSITION_PLAYER_LEFT:
        if (IsAiVsAiBattle())
            return TRUE;
    default:
        return FALSE;
    case B_POSITION_OPPONENT_LEFT:
        return TRUE;
    case B_POSITION_PLAYER_RIGHT:
        if ((gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER) || IsAiVsAiBattle())
            return TRUE;
        else
            return FALSE;
    case B_POSITION_OPPONENT_RIGHT:
        return TRUE;
    }
}

bool32 IsAiBattlerAware(u32 battlerId)
{
    if (AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_LEFT] & AI_FLAG_OMNISCIENT
     || AI_THINKING_STRUCT->aiFlags[B_POSITION_OPPONENT_RIGHT] & AI_FLAG_OMNISCIENT)
        return TRUE;

    return BattlerHasAi(battlerId);
}

void ClearBattlerMoveHistory(u32 battlerId)
{
    memset(BATTLE_HISTORY->usedMoves[battlerId], 0, sizeof(BATTLE_HISTORY->usedMoves[battlerId]));
    memset(BATTLE_HISTORY->moveHistory[battlerId], 0, sizeof(BATTLE_HISTORY->moveHistory[battlerId]));
    BATTLE_HISTORY->moveHistoryIndex[battlerId] = 0;
}

void RecordLastUsedMoveBy(u32 battlerId, u32 move)
{
    u8 *index = &BATTLE_HISTORY->moveHistoryIndex[battlerId];

    if (++(*index) >= AI_MOVE_HISTORY_COUNT)
        *index = 0;
    BATTLE_HISTORY->moveHistory[battlerId][*index] = move;
}

void RecordKnownMove(u32 battlerId, u32 move)
{
    s32 i;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        // BATTLE_HISTORY->usedMoves[battlerId][i] = moves[i];
        if (BATTLE_HISTORY->usedMoves[battlerId][i] == move)
            break;
        if (BATTLE_HISTORY->usedMoves[battlerId][i] == MOVE_NONE)
        {
            BATTLE_HISTORY->usedMoves[battlerId][i] = move;
            AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].moves[i] = move;
            break;
        }
    }
}

void RecordAllMoves(u32 battler)
{
    memcpy(AI_PARTY->mons[GetBattlerSide(battler)][gBattlerPartyIndexes[battler]].moves, gBattleMons[battler].moves, MAX_MON_MOVES * sizeof(u16));
}

void RecordAbilityBattle(u32 battlerId, u32 abilityId)
{
    BATTLE_HISTORY->abilities[battlerId] = abilityId;
    AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].ability = abilityId;
}

void ClearBattlerAbilityHistory(u32 battlerId)
{
    BATTLE_HISTORY->abilities[battlerId] = ABILITY_NONE;
}

void RecordItemEffectBattle(u32 battlerId, u32 itemEffect)
{
    BATTLE_HISTORY->itemEffects[battlerId] = itemEffect;
    AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].heldEffect = itemEffect;
}

void ClearBattlerItemEffectHistory(u32 battlerId)
{
    BATTLE_HISTORY->itemEffects[battlerId] = 0;
}

void SaveBattlerData(u32 battlerId)
{
    if (!BattlerHasAi(battlerId) && !AI_THINKING_STRUCT->saved[battlerId].saved)
    {
        u32 i;

        AI_THINKING_STRUCT->saved[battlerId].saved = TRUE;
        AI_THINKING_STRUCT->saved[battlerId].ability = gBattleMons[battlerId].ability;
        AI_THINKING_STRUCT->saved[battlerId].heldItem = gBattleMons[battlerId].item;
        AI_THINKING_STRUCT->saved[battlerId].species = gBattleMons[battlerId].species;
        for (i = 0; i < 4; i++)
            AI_THINKING_STRUCT->saved[battlerId].moves[i] = gBattleMons[battlerId].moves[i];
    }
    // Save and restore types even for AI controlled battlers in case it gets changed during move evaluation process.
    AI_THINKING_STRUCT->saved[battlerId].types[0] = gBattleMons[battlerId].types[0];
    AI_THINKING_STRUCT->saved[battlerId].types[1] = gBattleMons[battlerId].types[1];
}

static bool32 ShouldFailForIllusion(u32 illusionSpecies, u32 battlerId)
{
    u32 i, j;
    const struct LevelUpMove *learnset;

    if (BATTLE_HISTORY->abilities[battlerId] == ABILITY_ILLUSION)
        return FALSE;

    // Don't fall for Illusion if the mon used a move it cannot know.
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        u32 move = BATTLE_HISTORY->usedMoves[battlerId][i];
        if (move == MOVE_NONE)
            continue;

        learnset = GetSpeciesLevelUpLearnset(illusionSpecies);
        for (j = 0; learnset[j].move != MOVE_UNAVAILABLE; j++)
        {
            if (learnset[j].move == move)
                break;
        }
        // The used move is in the learnsets of the fake species.
        if (learnset[j].move != MOVE_UNAVAILABLE)
            continue;

        // The used move can be learned from Tm/Hm or Move Tutors.
        if (CanLearnTeachableMove(illusionSpecies, move))
            continue;

        // 'Illegal move', AI won't fail for the illusion.
        return FALSE;
    }

    return TRUE;
}

void SetBattlerData(u32 battlerId)
{
    if (!BattlerHasAi(battlerId) && AI_THINKING_STRUCT->saved[battlerId].saved)
    {
        u32 i, species, illusionSpecies, side;
        side = GetBattlerSide(battlerId);

        // Simulate Illusion
        species = gBattleMons[battlerId].species;
        illusionSpecies = GetIllusionMonSpecies(battlerId);
        if (illusionSpecies != SPECIES_NONE && ShouldFailForIllusion(illusionSpecies, battlerId))
        {
            // If the battler's type has not been changed, AI assumes the types of the illusion mon.
            if (gBattleMons[battlerId].types[0] == gSpeciesInfo[species].types[0]
                && gBattleMons[battlerId].types[1] == gSpeciesInfo[species].types[1])
            {
                gBattleMons[battlerId].types[0] = gSpeciesInfo[illusionSpecies].types[0];
                gBattleMons[battlerId].types[1] = gSpeciesInfo[illusionSpecies].types[1];
            }
            species = illusionSpecies;
        }

        // Use the known battler's ability.
        if (AI_PARTY->mons[side][gBattlerPartyIndexes[battlerId]].ability != ABILITY_NONE)
            gBattleMons[battlerId].ability = AI_PARTY->mons[side][gBattlerPartyIndexes[battlerId]].ability;
        // Check if mon can only have one ability.
        else if (gSpeciesInfo[species].abilities[1] == ABILITY_NONE
                || gSpeciesInfo[species].abilities[1] == gSpeciesInfo[species].abilities[0])
            gBattleMons[battlerId].ability = gSpeciesInfo[species].abilities[0];
        // The ability is unknown.
        else if (IsAiBattlerAware(battlerId))
            gBattleMons[battlerId].ability = AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].ability;
        else
            gBattleMons[battlerId].ability = ABILITY_NONE;

        if (AI_PARTY->mons[side][gBattlerPartyIndexes[battlerId]].heldEffect == 0)
            gBattleMons[battlerId].item = 0;

        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (AI_PARTY->mons[side][gBattlerPartyIndexes[battlerId]].moves[i] == 0)
                gBattleMons[battlerId].moves[i] = 0;
        }
    }
}

void RestoreBattlerData(u32 battlerId)
{
    if (!BattlerHasAi(battlerId) && AI_THINKING_STRUCT->saved[battlerId].saved)
    {
        u32 i;

        AI_THINKING_STRUCT->saved[battlerId].saved = FALSE;
        gBattleMons[battlerId].ability = AI_THINKING_STRUCT->saved[battlerId].ability;
        gBattleMons[battlerId].item = AI_THINKING_STRUCT->saved[battlerId].heldItem;
        gBattleMons[battlerId].species = AI_THINKING_STRUCT->saved[battlerId].species;
        for (i = 0; i < 4; i++)
            gBattleMons[battlerId].moves[i] = AI_THINKING_STRUCT->saved[battlerId].moves[i];
    }
    gBattleMons[battlerId].types[0] = AI_THINKING_STRUCT->saved[battlerId].types[0];
    gBattleMons[battlerId].types[1] = AI_THINKING_STRUCT->saved[battlerId].types[1];
}

u32 GetHealthPercentage(u32 battlerId)
{
    return (u32)((100 * gBattleMons[battlerId].hp) / gBattleMons[battlerId].maxHP);
}

bool32 AtMaxHp(u32 battlerId)
{
    if (AI_DATA->hpPercents[battlerId] == 100)
        return TRUE;
    return FALSE;
}

bool32 IsBattlerTrapped(u32 battlerAtk, u32 battlerDef)
{
    u32 holdEffect = AI_DATA->holdEffects[battlerDef];
    u32 abilityAtk = AI_DATA->abilities[battlerAtk];

    return (IS_BATTLER_OF_TYPE(battlerDef, TYPE_GHOST));
    return (holdEffect == HOLD_EFFECT_SHED_SHELL);
    return (AI_DATA->abilities[battlerDef] == ABILITY_RUN_AWAY);
    return (holdEffect == HOLD_EFFECT_CAN_ALWAYS_RUN);
    return (gBattleMons[battlerDef].status2 & (STATUS2_ESCAPE_PREVENTION | STATUS2_WRAPPED));
    return (gStatuses3[battlerDef] & (STATUS3_ROOTED | STATUS3_SKY_DROPPED));
    return (gFieldStatuses & STATUS_FIELD_FAIRY_LOCK);
    return (abilityAtk == ABILITY_SHADOW_TAG && GetBattlerAbility(battlerDef) != ABILITY_SHADOW_TAG);
    return (abilityAtk == ABILITY_ARENA_TRAP && IsBattlerGrounded(battlerDef));
    return (abilityAtk == ABILITY_MAGNET_PULL && IS_BATTLER_OF_TYPE(battlerDef, TYPE_STEEL));

    return FALSE;
}

u32 GetTotalBaseStat(u32 species)
{
    return gSpeciesInfo[species].baseHP
        + gSpeciesInfo[species].baseAttack
        + gSpeciesInfo[species].baseDefense
        + gSpeciesInfo[species].baseSpeed
        + gSpeciesInfo[species].baseSpAttack
        + gSpeciesInfo[species].baseSpDefense;
}

bool32 IsTruantMonVulnerable(u32 battlerAI, u32 opposingBattler)
{
    int i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        u32 move = gBattleResources->battleHistory->usedMoves[opposingBattler][i];
        if (gMovesInfo[move].effect == EFFECT_PROTECT && move != MOVE_ENDURE)
            return TRUE;
        if (gMovesInfo[move].effect == EFFECT_SEMI_INVULNERABLE && AI_IsSlower(battlerAI, opposingBattler, GetAIChosenMove(battlerAI)))
            return TRUE;
    }
    return FALSE;
}

// move checks
bool32 IsAffectedByPowder(u32 battler, u32 ability, u32 holdEffect)
{
    if (ability == ABILITY_OVERCOAT
        || (B_POWDER_GRASS >= GEN_6 && IS_BATTLER_OF_TYPE(battler, TYPE_GRASS))
        || holdEffect == HOLD_EFFECT_SAFETY_GOGGLES)
        return FALSE;
    return TRUE;
}

// This function checks if all physical/special moves are either unusable or unreasonable to use.
// Consider a pokemon boosting their attack against a ghost pokemon having only normal-type physical attacks.
bool32 MovesWithCategoryUnusable(u32 attacker, u32 target, u32 category)
{
    s32 i, moveType;
    u32 usable = 0;
    u32 unusable = AI_DATA->moveLimitations[attacker];
    u16 *moves = GetMovesArray(attacker);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE
            && moves[i] != MOVE_UNAVAILABLE
            && GetBattleMoveCategory(moves[i]) == category
            && !(unusable & (1u << i)))
        {
            SetTypeBeforeUsingMove(moves[i], attacker);
            moveType = GetMoveType(moves[i]);
            if (CalcTypeEffectivenessMultiplier(moves[i], moveType, attacker, target, AI_DATA->abilities[target], FALSE) != 0)
                usable |= 1u << i;
        }
    }

    return (usable == 0);
}

bool32 AI_CanUseLastResort(u32 battlerAtk, u32 move)
{
    u32 i;
    u32 usedMovesCount = 0;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        // Increment used move count for all moves except current Last Resort
        if ((i != move && gDisableStructs[battlerAtk].usedMoves & (1u << i))
          || gBattleMons[battlerAtk].moves[i] == MOVE_NONE)
            usedMovesCount++;
    }

    return (usedMovesCount >= 3);
}
// To save computation time this function has 2 variants. One saves, sets and restores battlers, while the other doesn't.
struct SimulatedDamage AI_CalcDamageSaveBattlers(u32 move, u32 battlerAtk, u32 battlerDef, u8 *typeEffectiveness, bool32 considerZPower, enum DamageRollType rollType)
{
    struct SimulatedDamage dmg;
    SaveBattlerData(battlerAtk);
    SaveBattlerData(battlerDef);
    SetBattlerData(battlerAtk);
    SetBattlerData(battlerDef);
    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, typeEffectiveness, considerZPower, AI_GetWeather(AI_DATA), rollType);
    RestoreBattlerData(battlerAtk);
    RestoreBattlerData(battlerDef);
    return dmg;
}

static inline s32 LowestRollDmg(s32 dmg)
{
    dmg *= MIN_ROLL_PERCENTAGE;
    dmg /= 100;
    return dmg;
}

static inline s32 HighestRollDmg(s32 dmg)
{
    dmg *= MAX_ROLL_PERCENTAGE;
    dmg /= 100;
    return dmg;
}

static inline s32 DmgRoll(s32 dmg)
{
    dmg *= DMG_ROLL_PERCENTAGE;
    dmg /= 100;
    return dmg;
}

bool32 IsDamageMoveUnusable(u32 move, u32 battlerAtk, u32 battlerDef, u32 effectiveness)
{
    u32 battlerDefAbility;
    u32 partnerDefAbility;
    u32 moveType = GetMoveType(move);
    struct AiLogicData *aiData = AI_DATA;

    if (effectiveness == AI_EFFECTIVENESS_x0)
        return TRUE;
    if (gDisableStructs[battlerAtk].throatChopTimer && gMovesInfo[move].soundMove)
        return TRUE;
    if (gStatuses3[battlerAtk] & STATUS3_HEAL_BLOCK && gMovesInfo[move].healingMove)
        return TRUE;
    if (gMovesInfo[move].cantUseTwice && move == gLastResultingMoves[battlerAtk])
        return TRUE;

    if (DoesBattlerIgnoreAbilityChecks(aiData->abilities[battlerAtk], move))
    {
        battlerDefAbility = ABILITY_NONE;
        partnerDefAbility = ABILITY_NONE;
    }
    else
    {
        battlerDefAbility = aiData->abilities[battlerDef];
        partnerDefAbility = aiData->abilities[BATTLE_PARTNER(battlerDef)];
    }

    if (battlerDef == BATTLE_PARTNER(battlerAtk))
        battlerDefAbility = aiData->abilities[battlerDef];

    if (gBattleStruct->commandingDondozo & (1u << battlerDef))
        return TRUE;

    switch (battlerDefAbility)
    {
    case ABILITY_DAMP:
        if (gMovesInfo[move].effect == EFFECT_EXPLOSION || gMovesInfo[move].effect == EFFECT_EXPLOSION)
            return TRUE;
    case ABILITY_LIGHTNING_ROD:
        if (B_REDIRECT_ABILITY_IMMUNITY < GEN_5)
            break;
        // Fallthrough
    case ABILITY_VOLT_ABSORB:
    case ABILITY_MOTOR_DRIVE:
        if (moveType == TYPE_ELECTRIC)
            return TRUE;
        break;
    case ABILITY_STORM_DRAIN:
        if (B_REDIRECT_ABILITY_IMMUNITY < GEN_5)
            break;
        // Fallthrough
    case ABILITY_WATER_ABSORB:
    case ABILITY_DRY_SKIN:
        if (moveType == TYPE_WATER)
            return TRUE;
        break;
    case ABILITY_FLASH_FIRE:
        if (moveType == TYPE_FIRE)
            return TRUE;
        break;
    case ABILITY_SOUNDPROOF:
        if (gMovesInfo[move].soundMove)
            return TRUE;
        break;
    case ABILITY_BULLETPROOF:
        if (gMovesInfo[move].ballisticMove)
            return TRUE;
        break;
    case ABILITY_SAP_SIPPER:
        if (moveType == TYPE_GRASS)
            return TRUE;
        break;
    case ABILITY_EARTH_EATER:
        if (moveType == TYPE_GROUND)
            return TRUE;
        break;
    case ABILITY_DAZZLING:
    case ABILITY_QUEENLY_MAJESTY:
    case ABILITY_ARMOR_TAIL:
        if (GetMovePriority(battlerAtk, move) > 0)
            return TRUE;
        break;
    case ABILITY_WIND_RIDER:
        if (gMovesInfo[move].windMove && !(GetBattlerMoveTargetType(battlerAtk, move) & MOVE_TARGET_USER))
            return TRUE;
        break;
    }

    switch(partnerDefAbility)
    {
    case ABILITY_DAMP:
        if (gMovesInfo[move].effect == EFFECT_EXPLOSION || gMovesInfo[move].effect == EFFECT_EXPLOSION)
            return TRUE;
    case ABILITY_LIGHTNING_ROD:
        if (moveType == TYPE_ELECTRIC)
            return TRUE;
        break;
    case ABILITY_STORM_DRAIN:
        if (moveType == TYPE_WATER)
            return TRUE;
        break;
    case ABILITY_DAZZLING:
    case ABILITY_QUEENLY_MAJESTY:
    case ABILITY_ARMOR_TAIL:
        if (GetMovePriority(battlerAtk, move) > 0)
            return TRUE;
        break;
    }

    switch (gMovesInfo[move].effect)
    {
    case EFFECT_DREAM_EATER:
        if (!AI_IsBattlerAsleepOrComatose(battlerDef))
            return TRUE;
        break;
    case EFFECT_BELCH:
        if (IsBelchPreventingMove(battlerAtk, move) && !gBattleStruct->switchInCalcsInProgress)
            return TRUE;
        break;
    case EFFECT_LAST_RESORT:
        if (!AI_CanUseLastResort(battlerAtk, move) && !gBattleStruct->switchInCalcsInProgress)
            return TRUE;
        break;
    case EFFECT_LOW_KICK:
    case EFFECT_HEAT_CRASH:
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            return TRUE;
        break;
    case EFFECT_FAIL_IF_NOT_ARG_TYPE:
        if (!IS_BATTLER_OF_TYPE(battlerAtk, gMovesInfo[move].argument))
            return TRUE;
        break;
    case EFFECT_HIT_SET_REMOVE_TERRAIN:
        if (!(gFieldStatuses & STATUS_FIELD_TERRAIN_ANY) && gMovesInfo[move].argument == ARG_TRY_REMOVE_TERRAIN_FAIL)
            return TRUE;
        break;
    case EFFECT_POLTERGEIST:
        if (aiData->items[battlerDef] == ITEM_NONE || gFieldStatuses & STATUS_FIELD_MAGIC_ROOM || battlerDefAbility == ABILITY_KLUTZ)
            return TRUE;
        break;
    case EFFECT_FIRST_TURN_ONLY:
        if (!gDisableStructs[battlerAtk].isFirstTurn)
            return TRUE;
        break;
    case EFFECT_FUTURE_SIGHT:
            return TRUE;
        break;
    case EFFECT_SUCKER_PUNCH:
        if (gBattleStruct->randomSuckerPunch & (1u << battlerAtk) && Random() & 1)
            return TRUE;
        break;
    case EFFECT_SOLAR_BEAM:
    case EFFECT_TWO_TURNS_ATTACK:
        if (AI_IsTwoTurnMove(battlerAtk, move))
            return TRUE;
        break;
    }

    return FALSE;
}

static inline s32 GetDamageByRollType(s32 dmg, enum DamageRollType rollType)
{
    if (rollType == DMG_ROLL_LOWEST)
        return LowestRollDmg(dmg);
    else if (rollType == DMG_ROLL_HIGHEST)
        return HighestRollDmg(dmg);
    else
        return DmgRoll(dmg);
}

#define APPLY_CRIT_DAMAGE(modifier, dmg) (uq4_12_multiply_by_int_half_down(modifier, dmg))
struct SimulatedDamage AI_CalcDamage(u32 move, u32 battlerAtk, u32 battlerDef, u8 *typeEffectiveness, bool32 considerZPower, u32 weather, enum DamageRollType rollType)
{
    struct SimulatedDamage simDamage;
    s32 moveType;
    uq4_12_t effectivenessMultiplier;
    bool32 isDamageMoveUnusable = FALSE;
    bool32 toggledGimmick = FALSE;
    struct AiLogicData *aiData = AI_DATA;
    gBattleStruct->aiCalcInProgress = TRUE;

    // After Sucker Punch was used by battler the first time it's damage calc is skipped 50% of the time
    if (!(gBattleStruct->randomSuckerPunch & (1u << battlerAtk)) && gMovesInfo[gBattleResults.lastUsedMoveOpponent].effect == EFFECT_SUCKER_PUNCH)
        gBattleStruct->randomSuckerPunch |= (1u << battlerAtk);

    struct Pokemon* mon = 0;
    u32 side = GetBattlerSide(battlerAtk);
    switch (side)
    {
    case B_SIDE_OPPONENT:
        mon = GetPartyBattlerData(battlerAtk);
        if (GetActiveGimmick(battlerAtk) == GIMMICK_NONE && GetMonData(mon, MON_DATA_TERA_TYPE) != TYPE_MYSTERY)
        {
            toggledGimmick |= (1u << battlerAtk);
            SetActiveGimmick(battlerAtk, GIMMICK_TERA);
        }
        break;
    case B_SIDE_PLAYER:
        mon = GetPartyBattlerData(battlerDef);
        if (GetActiveGimmick(battlerDef) == GIMMICK_NONE && GetMonData(mon, MON_DATA_TERA_TYPE) != TYPE_MYSTERY)
        {
            toggledGimmick |= (1u << battlerDef);
            SetActiveGimmick(battlerDef, GIMMICK_TERA);
        }
        break;
    }

    switch (gMovesInfo[move].effect)
    {
    case EFFECT_NATURE_POWER:
        move = GetNaturePowerMove(battlerAtk);
        break;
    case EFFECT_PHOTON_GEYSER:
        gBattleStruct->swapDamageCategory = (GetCategoryBasedOnStats(battlerAtk) == DAMAGE_CATEGORY_PHYSICAL);
        break;
    case EFFECT_SHELL_SIDE_ARM:
        if (gBattleStruct->shellSideArmCategory[battlerAtk][battlerDef] == DAMAGE_CATEGORY_PHYSICAL)
            gBattleStruct->swapDamageCategory = TRUE;
        break;
    case EFFECT_TERA_BLAST:
        if (GetActiveGimmick(battlerAtk) == GIMMICK_TERA)
            gBattleStruct->swapDamageCategory = GetCategoryBasedOnStats(battlerAtk) == DAMAGE_CATEGORY_PHYSICAL;
        break;
    case EFFECT_TERA_STARSTORM:
        if (GetActiveGimmick(battlerAtk) == GIMMICK_TERA && GET_BASE_SPECIES_ID(GetMonData(GetPartyBattlerData(battlerAtk), MON_DATA_SPECIES)) == SPECIES_TERAPAGOS)
            gBattleStruct->swapDamageCategory = GetCategoryBasedOnStats(battlerAtk) == DAMAGE_CATEGORY_PHYSICAL;
        break;
    }

    gBattleStruct->dynamicMoveType = 0;
    SetTypeBeforeUsingMove(move, battlerAtk);
    moveType = GetMoveType(move);
    effectivenessMultiplier = CalcTypeEffectivenessMultiplier(move, moveType, battlerAtk, battlerDef, aiData->abilities[battlerDef], FALSE);

    if (gMovesInfo[move].power)
        isDamageMoveUnusable = IsDamageMoveUnusable(move, battlerAtk, battlerDef, effectivenessMultiplier);

    if (gMovesInfo[move].power && !isDamageMoveUnusable)
    {
        s32 nonCritDmg = 0, critChance = 0;
        s32 fixedBasePower, n;

        ProteanTryChangeType(battlerAtk, aiData->abilities[battlerAtk], move, moveType);

        // Certain moves like Rollout calculate damage based on values which change during the move execution, but before calling dmg calc.
        switch (gMovesInfo[move].effect)
        {
        case EFFECT_ROLLOUT:
            n = gDisableStructs[battlerAtk].rolloutTimer - 1;
            fixedBasePower = CalcRolloutBasePower(battlerAtk, gMovesInfo[move].power, n < 0 ? 5 : n);
            break;
        case EFFECT_FURY_CUTTER:
            fixedBasePower = CalcFuryCutterBasePower(gMovesInfo[move].power, min(gDisableStructs[battlerAtk].furyCutterCounter + 1, 5));
            break;
        default:
            fixedBasePower = 0;
            break;
        }

        critChance = CalcCritChanceStageArgs(battlerAtk, battlerDef, move, FALSE, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], aiData->holdEffects[battlerAtk]);
        if (gMovesInfo[move].effect == EFFECT_TRIPLE_KICK)
        {
            for (gMultiHitCounter = 3; gMultiHitCounter > 0; gMultiHitCounter--)
            {
                nonCritDmg += CalculateMoveDamageVars(move, battlerAtk, battlerDef, moveType, fixedBasePower,
                                                      effectivenessMultiplier, weather, FALSE,
                                                      aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef],
                                                      aiData->abilities[battlerAtk], aiData->abilities[battlerDef]);
            }
        }
        else
        {
            nonCritDmg = CalculateMoveDamageVars(move, battlerAtk, battlerDef, moveType, fixedBasePower,
                                                 effectivenessMultiplier, weather, FALSE,
                                                 aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef],
                                                 aiData->abilities[battlerAtk], aiData->abilities[battlerDef]);

        }

        simDamage.expected = nonCritDmg; // 8th roll
        simDamage.minimum = nonCritDmg;

        if (critChance >= 3 || critChance == -2)
        {
            simDamage.expected = simDamage.minimum = CalculateMoveDamageVars(move, battlerAtk, battlerDef, moveType, fixedBasePower,
                                                                             effectivenessMultiplier, weather, TRUE,
                                                                             aiData->holdEffects[battlerAtk], aiData->holdEffects[battlerDef],
                                                                             aiData->abilities[battlerAtk], aiData->abilities[battlerDef]);

        }

        if (GetActiveGimmick(battlerAtk) != GIMMICK_Z_MOVE)
        {
            // Handle dynamic move damage
            switch (gMovesInfo[move].effect)
            {
            case EFFECT_LEVEL_DAMAGE:
                simDamage.expected = simDamage.minimum = gBattleMons[battlerAtk].level * (aiData->abilities[battlerAtk] == ABILITY_PARENTAL_BOND ? 2 : 1);
                break;
            case EFFECT_PSYWAVE:
                simDamage.expected = gBattleMons[battlerAtk].level * (aiData->abilities[battlerAtk] == ABILITY_PARENTAL_BOND ? 2 : 1);
                simDamage.minimum = simDamage.expected / 2;
                break;
            case EFFECT_FIXED_DAMAGE_ARG:
                simDamage.expected = simDamage.minimum = gMovesInfo[move].argument * (aiData->abilities[battlerAtk] == ABILITY_PARENTAL_BOND ? 2 : 1);
                break;
            case EFFECT_MULTI_HIT:
                if (move == MOVE_WATER_SHURIKEN && gBattleMons[battlerAtk].species == SPECIES_GRENINJA_ASH)
                {
                    simDamage.expected *= 3;
                    simDamage.minimum *= 3;
                }
                else if (aiData->abilities[battlerAtk] == ABILITY_SKILL_LINK)
                {
                    simDamage.expected *= 5;
                    simDamage.minimum *= 5;
                }
                else if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_LOADED_DICE)
                {
                    simDamage.expected *= 4;
                    simDamage.minimum *= 4;
                }
                else
                {
                    simDamage.expected *= 3;
                    simDamage.minimum *= 2;
                }
                break;
            case EFFECT_ENDEAVOR:
                // If target has less HP than user, Endeavor does no damage
                simDamage.expected = simDamage.minimum = max(0, gBattleMons[battlerDef].hp - gBattleMons[battlerAtk].hp);
                break;
            case EFFECT_SUPER_FANG:
                simDamage.expected = simDamage.minimum = (aiData->abilities[battlerAtk] == ABILITY_PARENTAL_BOND
                    ? max(2, gBattleMons[battlerDef].hp * 3 / 4)
                    : max(1, gBattleMons[battlerDef].hp / 2));
                break;
            case EFFECT_FINAL_GAMBIT:
                simDamage.expected = simDamage.minimum = gBattleMons[battlerAtk].hp;
                break;
            case EFFECT_BEAT_UP:
                if (B_BEAT_UP >= GEN_5)
                {
                    u32 partyCount = CalculatePartyCount(GetBattlerParty(battlerAtk));
                    u32 i;
                    gBattleStruct->beatUpSlot = 0;
                    simDamage.expected = 0;
                    for (i = 0; i < partyCount; i++)
                    {
                        simDamage.expected += CalculateMoveDamage(move, battlerAtk, battlerDef, moveType, 0, FALSE, FALSE, FALSE);
                    }
                    simDamage.minimum = simDamage.expected;
                    gBattleStruct->beatUpSlot = 0;
                }
                break;
            }

            // Handle other multi-strike moves
            if (gMovesInfo[move].strikeCount > 1 && gMovesInfo[move].effect != EFFECT_TRIPLE_KICK)
            {
                simDamage.expected *= gMovesInfo[move].strikeCount;
                simDamage.minimum *= gMovesInfo[move].strikeCount;
            }

            if (simDamage.expected == 0)
                simDamage.expected = 1;
            if (simDamage.minimum == 0)
                simDamage.minimum = 1;
        }
    }
    else
    {
        simDamage.expected = 0;
        simDamage.minimum = 0;
    }

    // convert multiper to AI_EFFECTIVENESS_xX
    *typeEffectiveness = AI_GetEffectiveness(effectivenessMultiplier);

    // Undo temporary settings
    gBattleStruct->aiCalcInProgress = FALSE;
    gBattleStruct->swapDamageCategory = FALSE;
    gBattleStruct->zmove.baseMoves[battlerAtk] = MOVE_NONE;

    if (toggledGimmick & (1u << battlerAtk))
    {
        SetActiveGimmick(battlerAtk, GIMMICK_NONE);
    }
    else if (toggledGimmick & (1u << battlerDef))
    {
        SetActiveGimmick(battlerDef, GIMMICK_NONE);
    }
    toggledGimmick = 0;

    // if (move == MOVE_HYPER_VOICE)
    //     DebugPrintf("MOVE_HYPER_VOICE dmg: %d", simDamage.expected);
    // if (move == MOVE_FLAMETHROWER)
    //     DebugPrintf("MOVE_FLAMETHROWER dmg: %d", simDamage.expected);
    // if (move == MOVE_SEED_BOMB)
    //     DebugPrintf("MOVE_SEED_BOMB dmg: %d", simDamage.expected);
    // if (move == MOVE_EARTHQUAKE)
    //     DebugPrintf("EQ dmg: %d", simDamage.expected);

    return simDamage;
}
#undef APPLY_CRIT_DAMAGE

bool32 AI_IsDamagedByRecoil(u32 battler, u32 move)
{
    u32 ability = AI_DATA->abilities[battler];

    switch(gMovesInfo[move].effect)
    {
    case EFFECT_MAX_HP_50_RECOIL:
    case EFFECT_MIND_BLOWN:
        if (ability == ABILITY_MAGIC_GUARD)
            return FALSE;
    default:
        break;
    }

    if (ability == ABILITY_MAGIC_GUARD || ability == ABILITY_ROCK_HEAD || ability == ABILITY_FIERY_CHARGE)
        return FALSE;

    return TRUE;
}

static bool32 AI_IsTwoTurnMove(u32 battler, u32 move)
{
    if (gMovesInfo[move].effect != EFFECT_TWO_TURNS_ATTACK && gMovesInfo[move].effect != EFFECT_SOLAR_BEAM)
        return FALSE;

    if (gBattleMons[battler].status2 & STATUS2_MULTIPLETURNS)
        return FALSE;

    if ((AI_DATA->holdEffects[battler] == HOLD_EFFECT_POWER_HERB)
     || (AI_GetWeather(AI_DATA) & B_WEATHER_SUN && gMovesInfo[move].effect == EFFECT_SOLAR_BEAM)
     || (AI_GetWeather(AI_DATA) & B_WEATHER_RAIN && move == MOVE_ELECTRO_SHOT))
        return FALSE;

    return TRUE;
}

bool32 OpposingSideHasWideGuard(u32 battler)
{
    return HasMove(battler, MOVE_WIDE_GUARD) || HasMove(BATTLE_PARTNER(battler), MOVE_WIDE_GUARD);
}

static bool32 AI_IsMoveEffectInPlus(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 abilityAtk = AI_DATA->abilities[battlerAtk];

    if (IsDoubleBattle()) // && !OpposingSideHasWideGuard(battlerDef))
    {
        u32 targetType = GetBattlerMoveTargetType(battlerAtk, move);
        if (targetType == MOVE_TARGET_BOTH)
            return TRUE;

        if (targetType == MOVE_TARGET_FOES_AND_ALLY && !IsBattlerAlive(BATTLE_PARTNER(battlerAtk)))
            return TRUE;
    }

    if (AI_DATA->holdEffects[battlerAtk] == HOLD_EFFECT_THROAT_SPRAY && gMovesInfo[move].soundMove)
        return TRUE;

    if (gMovesInfo[move].criticalHitStage > 0)
        return TRUE;

    if (IsTrappingMove(move))
        return TRUE;

    switch (gMovesInfo[move].effect)
    {
    case EFFECT_RAGING_BULL:
    case EFFECT_BRICK_BREAK:
        return gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_SCREEN_ANY;
    case EFFECT_ABSORB:
        return AI_DATA->abilities[battlerAtk] != ABILITY_LIQUID_OOZE;
    case EFFECT_FELL_STINGER:
        return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ATK);
    case EFFECT_PURSUIT:
    case EFFECT_HIT_SWITCH_TARGET:
    case EFFECT_KNOCK_OFF:
        return TRUE;
    default:
        break;
    }

    for (u32 i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
    {
        if (!MoveEffectIsGuaranteed(battlerAtk, AI_DATA->abilities[battlerAtk], &gMovesInfo[move].additionalEffects[i]))
            continue;
        if (AI_IsTwoTurnMove(battlerAtk, move))
            continue;

        if (gMovesInfo[move].additionalEffects[i].self)
        {
            if (AI_DATA->abilities[battlerAtk] != ABILITY_CONTRARY)
            {
                switch (gMovesInfo[move].additionalEffects[i].moveEffect)
                {
                case MOVE_EFFECT_ATK_PLUS_1:
                case MOVE_EFFECT_ATK_PLUS_2:
                    return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ATK);
                case MOVE_EFFECT_DEF_PLUS_1:
                case MOVE_EFFECT_DEF_PLUS_2:
                    return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_DEF);
                case MOVE_EFFECT_SPD_PLUS_1:
                case MOVE_EFFECT_SPD_PLUS_2:
                    return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPEED) && !(gFieldStatuses & STATUS_FIELD_TRICK_ROOM);
                case MOVE_EFFECT_SP_ATK_PLUS_1:
                case MOVE_EFFECT_SP_ATK_PLUS_2:
                    return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPATK);
                case MOVE_EFFECT_SP_DEF_PLUS_1:
                case MOVE_EFFECT_SP_DEF_PLUS_2:
                    return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPDEF);
                }
            }
            else
            {
                switch (gMovesInfo[move].additionalEffects[i].moveEffect)
                {
                case MOVE_EFFECT_ATK_MINUS_1:
                case MOVE_EFFECT_ATK_MINUS_2:
                    return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ATK);
                case MOVE_EFFECT_DEF_MINUS_1:
                case MOVE_EFFECT_DEF_MINUS_2:
                    return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_DEF);
                case MOVE_EFFECT_SPD_MINUS_1:
                case MOVE_EFFECT_SPD_MINUS_2:
                    return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPEED) && !(gFieldStatuses & STATUS_FIELD_TRICK_ROOM);
                case MOVE_EFFECT_SP_ATK_MINUS_1:
                case MOVE_EFFECT_SP_ATK_MINUS_2:
                    return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPATK);
                case MOVE_EFFECT_SP_DEF_MINUS_1:
                case MOVE_EFFECT_SP_DEF_MINUS_2:
                    return BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPDEF);
                }
            }
        }
        else
        {
            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
            case MOVE_EFFECT_SPD_MINUS_1:
            case MOVE_EFFECT_SPD_MINUS_2:
                return !(gFieldStatuses & STATUS_FIELD_TRICK_ROOM);
            case MOVE_EFFECT_SPIKES:
            case MOVE_EFFECT_STEALTH_ROCK:
                return TRUE;
            default:
                break;
            }
        }
    }

    return FALSE;
}

bool32 AI_IsMoveEffectInMinus(u32 battlerAtk, u32 battlerDef, u32 move)
{
    if (gMovesInfo[move].recoil > 0 && AI_IsDamagedByRecoil(battlerAtk, move))
        return TRUE;

    // if (IsDoubleBattle() && OpposingSideHasWideGuard(battlerDef))
    // {
    //     u32 targetType = GetBattlerMoveTargetType(battlerAtk, move);
    //     if (targetType == MOVE_TARGET_BOTH)
    //         return TRUE;

    //     if (targetType == MOVE_TARGET_FOES_AND_ALLY && IsBattlerAlive(BATTLE_PARTNER(battlerAtk)))
    //         return TRUE;
    // }

    switch (gMovesInfo[move].effect)
    {
    case EFFECT_SOLAR_BEAM:
    case EFFECT_TWO_TURNS_ATTACK:
        return AI_IsTwoTurnMove(battlerAtk, move);
    case EFFECT_MAX_HP_50_RECOIL:
    case EFFECT_MIND_BLOWN:
        return AI_IsDamagedByRecoil(battlerAtk, move);
    case EFFECT_EXPLOSION:
    case EFFECT_FINAL_GAMBIT:
        return TRUE;
    case EFFECT_RECOIL_IF_MISS:
        return AI_IsDamagedByRecoil(battlerAtk, move);
    default:
        break;
    }

    if (AI_DATA->holdEffects[battlerAtk] == HOLD_EFFECT_RESTORE_STATS)
        return FALSE;

    for (u32 i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
    {
        if (!gMovesInfo[move].additionalEffects[i].self)
            continue;

        switch (gMovesInfo[move].additionalEffects[i].moveEffect)
        {
        case MOVE_EFFECT_SPD_MINUS_1:
        case MOVE_EFFECT_SPD_MINUS_2:
            return !(gFieldStatuses & STATUS_FIELD_TRICK_ROOM);
        case MOVE_EFFECT_ATK_MINUS_1:
        case MOVE_EFFECT_ATK_MINUS_2:
        case MOVE_EFFECT_DEF_MINUS_1:
        case MOVE_EFFECT_DEF_MINUS_2:
        case MOVE_EFFECT_SP_ATK_MINUS_1:
        case MOVE_EFFECT_SP_ATK_MINUS_2:
        case MOVE_EFFECT_SP_DEF_MINUS_1:
        case MOVE_EFFECT_SP_DEF_MINUS_2:
        case MOVE_EFFECT_DEF_SPDEF_DOWN:
        case MOVE_EFFECT_ATK_DEF_DOWN:
        case MOVE_EFFECT_V_CREATE:
            return (AI_DATA->abilities[battlerAtk] != ABILITY_CONTRARY);
        case MOVE_EFFECT_RECHARGE:
            return TRUE;
        }
    }

    return FALSE;
}

s32 AI_WhichMoveBetter(u32 move1, u32 move2, u32 battlerAtk, u32 battlerDef)
{
    bool32 effect1, effect2;

    effect1 = AI_IsMoveEffectInMinus(battlerAtk, battlerDef, move1);
    effect2 = AI_IsMoveEffectInMinus(battlerAtk, battlerDef, move2);
    if (effect2 && !effect1)
        return 1;
    if (effect1 && !effect2)
        return -1;

    effect1 = AI_IsMoveEffectInPlus(battlerAtk, battlerDef, move1);
    effect2 = AI_IsMoveEffectInPlus(battlerAtk, battlerDef, move2);
    if (effect2 && !effect1)
        return -1;
    if (effect1 && !effect2)
        return 1;

    return 0;
}

u32 GetNoOfHitsToKO(u32 dmg, s32 hp)
{
    if (dmg == 0)
        return UINT32_MAX;
    if (hp % dmg == 0)
        return hp / (dmg + 1) + 1;
    else
        return (hp / dmg) + 1;
}

u32 GetNoOfHitsToKOBattlerDmg(u32 dmg, u32 battlerDef)
{
    return GetNoOfHitsToKO(dmg, gBattleMons[battlerDef].hp);
}

u32 GetNoOfHitsToKOBattler(u32 battlerAtk, u32 battlerDef, u32 moveIndex)
{
    u32 noOfHitsToKOPlayer = GetNoOfHitsToKOBattlerDmg(AI_DATA->simulatedDmg[battlerAtk][battlerDef][moveIndex].expected, battlerDef);

    if (noOfHitsToKOPlayer == 1)
    {
        u16 *moves = GetMovesArray(battlerAtk);
        if (CanEndureHit(battlerAtk, battlerDef, moves[moveIndex]))
            noOfHitsToKOPlayer++;
    }

    return noOfHitsToKOPlayer;
}

u32 GetCurrDamageHpPercent(u32 battlerAtk, u32 battlerDef)
{
    int bestDmg = AI_DATA->simulatedDmg[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex].expected;
    return (bestDmg * 100) / gBattleMons[battlerDef].maxHP;
}

uq4_12_t AI_GetTypeEffectiveness(u32 move, u32 battlerAtk, u32 battlerDef)
{
    uq4_12_t typeEffectiveness;
    u32 moveType;

    SaveBattlerData(battlerAtk);
    SaveBattlerData(battlerDef);

    SetBattlerData(battlerAtk);
    SetBattlerData(battlerDef);

    gBattleStruct->dynamicMoveType = 0;
    SetTypeBeforeUsingMove(move, battlerAtk);
    moveType = GetMoveType(move);
    typeEffectiveness = CalcTypeEffectivenessMultiplier(move, moveType, battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], FALSE);

    RestoreBattlerData(battlerAtk);
    RestoreBattlerData(battlerDef);

    return typeEffectiveness;
}

u32 AI_GetMoveEffectiveness(u32 move, u32 battlerAtk, u32 battlerDef)
{
    gMoveResultFlags = 0;
    return AI_GetEffectiveness(AI_GetTypeEffectiveness(move, battlerAtk, battlerDef));
}

static u32 AI_GetEffectiveness(uq4_12_t multiplier)
{
    switch (multiplier)
    {
    case UQ_4_12(0.0):
        return AI_EFFECTIVENESS_x0;
    case UQ_4_12(0.125):
        return AI_EFFECTIVENESS_x0_125;
    case UQ_4_12(0.25):
        return AI_EFFECTIVENESS_x0_25;
    case UQ_4_12(0.5):
        return AI_EFFECTIVENESS_x0_5;
    case UQ_4_12(1.0):
    default:
        return AI_EFFECTIVENESS_x1;
    case UQ_4_12(2.0):
        return AI_EFFECTIVENESS_x2;
    case UQ_4_12(4.0):
        return AI_EFFECTIVENESS_x4;
    case UQ_4_12(8.0):
        return AI_EFFECTIVENESS_x8;
    }
}

bool32 CanEndureHit(u32 battlerDef, u32 battlerAtk, u32 move)
{
    if (!BATTLER_MAX_HP(battlerAtk) || gMovesInfo[move].effect == EFFECT_MULTI_HIT)
        return FALSE;

    if (gMovesInfo[move].strikeCount > 1 && !(gMovesInfo[move].effect == EFFECT_DRAGON_DARTS && IsValidDoubleBattle(battlerAtk)))
        return FALSE;
    if (gBattleMons[battlerAtk].item == ITEM_FOCUS_SASH)
        return TRUE;

    if (!DoesBattlerIgnoreAbilityChecks(AI_DATA->abilities[battlerDef], move))
    {
        if (gBattleMons[battlerAtk].ability == ABILITY_STURDY)
            return TRUE;
        if (gBattleMons[battlerAtk].species == SPECIES_MIMIKYU_DISGUISED)
            return TRUE;
    }

    return FALSE;
}

bool32 CanBattlerFaintTarget(u32 battler, u32 battlerTarget)
{
    return CanBattlerFaintTargetWithMod(battler, battlerTarget, FALSE);
}

bool32 CanBattlerFaintTargetWithHelpingHand(u32 battler, u32 battlerTarget)
{
    return CanBattlerFaintTargetWithMod(battler, battlerTarget, TRUE);
}

#define COMMANDER_ACTIVE (gBattleStruct->commandingDondozo & (1u << battlerTarget) || gBattleStruct->commandingDondozo & (1u << BATTLE_PARTNER(battlerTarget)))
bool32 CanBattlerFaintTargetWithMod(u32 battler, u32 battlerTarget, bool32 helpingHandBoost)
{
    u32 dmg;
    u32 unusable = AI_DATA->moveLimitations[battler];
    u16 *moves = GetMovesArray(battler);

    if (GetBattlerSide(battlerTarget) == B_SIDE_PLAYER && COMMANDER_ACTIVE)
        return FALSE;

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] == MOVE_NONE || moves[i] == MOVE_UNAVAILABLE || unusable & (1u << i))
            continue;

        dmg = AI_DATA->simulatedDmg[battler][battlerTarget][i].expected;
        if (helpingHandBoost)
            dmg = dmg + (dmg / 2);

        if (dmg >= gBattleMons[battlerTarget].hp && !CanEndureHit(battler, battlerTarget, moves[i]))
            return TRUE;
    }

    return FALSE;
}
#undef COMMANDER_ACTIVE

bool32 CanBattlerFaintTargetWithIndexMoveAndBestDamageMove(u32 battler, u32 battlerTarget)
{
    u32 dmg;
    u32 unusable = AI_DATA->moveLimitations[battler];
    u16 *moves = GetMovesArray(battler);

    u32 indexMoveDmg = AI_DATA->simulatedDmg[battler][battlerTarget][AI_THINKING_STRUCT->movesetIndex].expected;
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        dmg = AI_DATA->simulatedDmg[battler][battlerTarget][i].expected;
        dmg = dmg + indexMoveDmg;

        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && !(unusable & (1u << i))
         && dmg >= gBattleMons[battlerTarget].hp)
            return TRUE;
    }

    return FALSE;
}

u32 NoOfHitsToFaintBattler(u32 battler, u32 battlerTarget)
{
    u32 i;
    u32 indexMoveNoOfHits;
    u32 leastNumberOfHits = UNKNOWN_NO_OF_HITS;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        indexMoveNoOfHits = GetNoOfHitsToKOBattler(battler, battlerTarget, i);
        if (indexMoveNoOfHits < leastNumberOfHits)
            leastNumberOfHits = indexMoveNoOfHits;
    }
    return leastNumberOfHits;
}

u32 GetBestDmgMoveFromBattler(u32 battler, u32 battlerTarget)
{
    u32 i;
    u32 move = 0;
    u32 bestDmg = 0;
    u32 unusable = AI_DATA->moveLimitations[battler];
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && !(unusable & (1u << i))
         && bestDmg < AI_DATA->simulatedDmg[battler][battlerTarget][i].expected)
        {
            bestDmg = AI_DATA->simulatedDmg[battler][battlerTarget][i].expected;
            move = moves[i];
        }
    }

    return move;
}

u32 GetBestDmgFromBattler(u32 battler, u32 battlerTarget)
{
    u32 i;
    u32 bestDmg = 0;
    u32 unusable = AI_DATA->moveLimitations[battler];
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE
         && moves[i] != MOVE_UNAVAILABLE
         && !(unusable & (1u << i))
         && bestDmg < AI_DATA->simulatedDmg[battler][battlerTarget][i].expected)
        {
            bestDmg = AI_DATA->simulatedDmg[battler][battlerTarget][i].expected;
        }
    }

    return bestDmg;
}

bool32 CanTargetMoveFaintAi(u32 move, u32 battlerDef, u32 battlerAtk, u32 nHits)
{
    u32 indexSlot = GetMoveSlot(GetMovesArray(battlerDef), move);
    if (indexSlot < MAX_MON_MOVES)
    {
        if (GetNoOfHitsToKO(AI_DATA->simulatedDmg[battlerDef][battlerAtk][indexSlot].expected, gBattleMons[battlerAtk].hp) <= nHits)
            return TRUE;
    }
    return FALSE;
}

bool32 AI_IsAbilityOnSide(u32 battlerId, u32 ability)
{
    if (IsBattlerAlive(battlerId) && AI_DATA->abilities[battlerId] == ability)
        return TRUE;
    else if (IsBattlerAlive(BATTLE_PARTNER(battlerId)) && AI_DATA->abilities[BATTLE_PARTNER(battlerId)] == ability)
        return TRUE;
    else
        return FALSE;
}

u32 AI_GetBattlerAbility(u32 battler)
{
    if (gAbilitiesInfo[gBattleMons[battler].ability].cantBeSuppressed)
    {
        if (gAbilitiesInfo[gBattleMons[battler].ability].breakable)
        return gBattleMons[battler].ability;
    }

    if (gStatuses3[battler] & STATUS3_GASTRO_ACID)
        return ABILITY_NONE;

    if (IsNeutralizingGasOnField()
     && gBattleMons[battler].ability != ABILITY_NEUTRALIZING_GAS
     && GetBattlerHoldEffectIgnoreAbility(battler, TRUE) != HOLD_EFFECT_ABILITY_SHIELD)
        return ABILITY_NONE;

    return gBattleMons[battler].ability;
}

// does NOT include ability suppression checks
s32 AI_DecideKnownAbilityForTurn(u32 battlerId)
{
    u32 validAbilities[NUM_ABILITY_SLOTS];
    u8 i, numValidAbilities = 0;
    u32 knownAbility = AI_GetBattlerAbility(battlerId);

    // We've had ability overwritten by e.g. Worry Seed. It is not part of AI_PARTY in case of switching
    if (gBattleStruct->overwrittenAbilities[battlerId])
        return gBattleStruct->overwrittenAbilities[battlerId];

    // The AI knows its own ability.
    if (IsAiBattlerAware(battlerId))
        return knownAbility;

    // Check neutralizing gas, gastro acid
    if (knownAbility == ABILITY_NONE)
        return knownAbility;

    if (AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].ability != ABILITY_NONE)
        return AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].ability;

    // Abilities that prevent fleeing - treat as always known
    if (knownAbility == ABILITY_SHADOW_TAG || knownAbility == ABILITY_MAGNET_PULL || knownAbility == ABILITY_ARENA_TRAP)
        return knownAbility;

    for (i = 0; i < NUM_ABILITY_SLOTS; i++)
    {
        if (gSpeciesInfo[gBattleMons[battlerId].species].abilities[i] != ABILITY_NONE)
            validAbilities[numValidAbilities++] = gSpeciesInfo[gBattleMons[battlerId].species].abilities[i];
    }

    if (numValidAbilities > 0)
        return validAbilities[RandomUniform(RNG_AI_ABILITY, 0, numValidAbilities - 1)];

    return ABILITY_NONE; // Unknown.
}

u32 AI_DecideHoldEffectForTurn(u32 battlerId)
{
    u32 holdEffect;

    if (!IsAiBattlerAware(battlerId))
        holdEffect = AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].heldEffect;
    else
        holdEffect = GetBattlerHoldEffect(battlerId, FALSE);

    if (gStatuses3[battlerId] & STATUS3_EMBARGO)
        return HOLD_EFFECT_NONE;
    if (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM)
        return HOLD_EFFECT_NONE;
    if (AI_DATA->abilities[battlerId] == ABILITY_KLUTZ && !(gStatuses3[battlerId] & STATUS3_GASTRO_ACID))
        return HOLD_EFFECT_NONE;

    return holdEffect;
}

bool32 AI_IsTerrainAffected(u32 battlerId, u32 flags)
{
    if (gStatuses3[battlerId] & STATUS3_SEMI_INVULNERABLE)
        return FALSE;
    else if (!(gFieldStatuses & flags))
        return FALSE;
    return AI_IsBattlerGrounded(battlerId);
}

// different from IsBattlerGrounded in that we don't always know battler's hold effect or ability
bool32 AI_IsBattlerGrounded(u32 battlerId)
{
    u32 holdEffect = AI_DATA->holdEffects[battlerId];

    if (holdEffect == HOLD_EFFECT_IRON_BALL)
        return TRUE;
    else if (gFieldStatuses & STATUS_FIELD_GRAVITY)
        return TRUE;
    else if (gStatuses3[battlerId] & STATUS3_ROOTED)
        return TRUE;
    else if (gStatuses3[battlerId] & STATUS3_SMACKED_DOWN)
        return TRUE;
    else if (gStatuses3[battlerId] & STATUS3_TELEKINESIS)
        return FALSE;
    else if (gStatuses3[battlerId] & STATUS3_MAGNET_RISE)
        return FALSE;
    else if (holdEffect == HOLD_EFFECT_AIR_BALLOON)
        return FALSE;
    else if (AI_DATA->abilities[battlerId] == ABILITY_LEVITATE)
        return FALSE;
    else if (IS_BATTLER_OF_TYPE(battlerId, TYPE_FLYING))
        return FALSE;
    else
        return TRUE;
}

bool32 DoesBattlerIgnoreAbilityChecks(u32 ability, u32 move)
{
    return (ability == ABILITY_MOLD_BREAKER
         || ability == ABILITY_TERAVOLT
         || ability == ABILITY_TURBOBLAZE
         || gMovesInfo[move].ignoresTargetAbility
         || (ability == ABILITY_MYCELIUM_MIGHT && IS_MOVE_STATUS(move)));
}

static inline bool32 AI_WeatherHasEffect(struct AiLogicData *aiData)
{
    return aiData->weatherHasEffect;  // weather damping abilities are announced
}

u32 AI_GetWeather(struct AiLogicData *aiData)
{
    if (gBattleWeather == B_WEATHER_NONE)
        return B_WEATHER_NONE;
    if (!AI_WeatherHasEffect(aiData))
        return B_WEATHER_NONE;
    return gBattleWeather;
}

bool32 IsAromaVeilProtectedMove(u32 move)
{
    switch (move)
    {
    case MOVE_DISABLE:
    case MOVE_ATTRACT:
    case MOVE_ENCORE:
    case MOVE_TORMENT:
    case MOVE_TAUNT:
    case MOVE_HEAL_BLOCK:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsNonVolatileStatusMoveEffect(u32 moveEffect)
{
    switch (moveEffect)
    {
    case EFFECT_SLEEP:
    case EFFECT_TOXIC:
    case EFFECT_POISON:
    case EFFECT_PARALYZE:
    case EFFECT_WILL_O_WISP:
    case EFFECT_YAWN:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsConfusionMoveEffect(u32 moveEffect)
{
    switch (moveEffect)
    {
    case EFFECT_CONFUSE:
    case EFFECT_SWAGGER:
    case EFFECT_FLATTER:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsHazardMoveEffect(u32 moveEffect)
{
    switch (moveEffect)
    {
    case EFFECT_SPIKES:
    case EFFECT_TOXIC_SPIKES:
    case EFFECT_STICKY_WEB:
    case EFFECT_STEALTH_ROCK:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsMoveRedirectionPrevented(u32 move, u32 atkAbility)
{
    if (move == MOVE_SKY_DROP
      || move == MOVE_SNIPE_SHOT
      || atkAbility == ABILITY_PROPELLER_TAIL
      || atkAbility == ABILITY_STALWART)
        return TRUE;
    return FALSE;
}

bool32 IsSemiInvulnerable(u32 battlerDef, u32 move)
{
    if (gStatuses3[battlerDef] & STATUS3_PHANTOM_FORCE)
        return TRUE;
    else if (gBattleStruct->commandingDondozo & (1u << battlerDef))
        return TRUE;
    else if (!gMovesInfo[move].damagesAirborne && gStatuses3[battlerDef] & STATUS3_ON_AIR)
        return TRUE;
    else if (!gMovesInfo[move].damagesUnderwater && gStatuses3[battlerDef] & STATUS3_UNDERWATER)
        return TRUE;
    else if (!gMovesInfo[move].damagesUnderground && gStatuses3[battlerDef] & STATUS3_UNDERGROUND)
        return TRUE;
    else
        return FALSE;
}

bool32 ShouldTryOHKO(u32 battlerAtk, u32 battlerDef, u32 atkAbility, u32 defAbility, u32 move)
{
    u32 holdEffect = AI_DATA->holdEffects[battlerDef];
    u32 accuracy = AI_DATA->moveAccuracy[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex];

    gPotentialItemEffectBattler = battlerDef;
    if (holdEffect == HOLD_EFFECT_FOCUS_BAND && (Random() % 100) < AI_DATA->holdEffectParams[battlerDef])
        return FALSE;   //probabilistically speaking, focus band should activate so dont OHKO
    else if (holdEffect == HOLD_EFFECT_FOCUS_SASH && AtMaxHp(battlerDef))
        return FALSE;

    if (!DoesBattlerIgnoreAbilityChecks(atkAbility, move) && defAbility == ABILITY_STURDY)
        return FALSE;

    if ((((gStatuses3[battlerDef] & STATUS3_ALWAYS_HITS)
        && gDisableStructs[battlerDef].battlerWithSureHit == battlerAtk)
        || atkAbility == ABILITY_NO_GUARD || defAbility == ABILITY_NO_GUARD)
        && gBattleMons[battlerAtk].level >= gBattleMons[battlerDef].level)
    {
        return TRUE;
    }
    else    // test the odds
    {
        u32 odds = accuracy + (gBattleMons[battlerAtk].level - gBattleMons[battlerDef].level);
        if (B_SHEER_COLD_ACC >= GEN_7 && move == MOVE_SHEER_COLD && !IS_BATTLER_OF_TYPE(battlerAtk, TYPE_ICE))
            odds -= 10;
        if (Random() % 100 + 1 < odds && gBattleMons[battlerAtk].level >= gBattleMons[battlerDef].level)
            return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetSandstorm(u32 battler, u32 ability, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & B_WEATHER_SANDSTORM)
        return FALSE;

    if (ability == ABILITY_SAND_VEIL
      || ability == ABILITY_SAND_RUSH
      || ability == ABILITY_SAND_FORCE
      || ability == ABILITY_OVERCOAT
      || ability == ABILITY_MAGIC_GUARD
      || holdEffect == HOLD_EFFECT_SAFETY_GOGGLES
      || IS_BATTLER_OF_TYPE(battler, TYPE_ROCK)
      || IS_BATTLER_OF_TYPE(battler, TYPE_STEEL)
      || IS_BATTLER_OF_TYPE(battler, TYPE_GROUND)
      || HasMoveEffect(battler, EFFECT_SHORE_UP)
      || HasMoveEffect(battler, EFFECT_WEATHER_BALL))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetHail(u32 battler, u32 ability, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & (B_WEATHER_HAIL | B_WEATHER_SNOW))
        return FALSE;

    if (ability == ABILITY_SNOW_CLOAK
      || ability == ABILITY_ICE_BODY
      || ability == ABILITY_FORECAST
      || ability == ABILITY_SLUSH_RUSH
      || ability == ABILITY_MAGIC_GUARD
      || ability == ABILITY_OVERCOAT
      || holdEffect == HOLD_EFFECT_SAFETY_GOGGLES
      || IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
      || HasMoveEffect(battler, EFFECT_BLIZZARD)
      || HasMoveEffect(battler, EFFECT_AURORA_VEIL)
      || HasMoveEffect(battler, EFFECT_WEATHER_BALL))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetRain(u32 battlerAtk, u32 atkAbility, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & B_WEATHER_RAIN)
        return FALSE;

    if (holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA
     && (atkAbility == ABILITY_SWIFT_SWIM
      || atkAbility == ABILITY_FORECAST
      || atkAbility == ABILITY_HYDRATION
      || atkAbility == ABILITY_RAIN_DISH
      || atkAbility == ABILITY_DRY_SKIN
      || HasMoveEffect(battlerAtk, EFFECT_THUNDER)
      || HasMoveEffect(battlerAtk, EFFECT_WEATHER_BALL)
      || HasMoveWithType(battlerAtk, TYPE_WATER)))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetSun(u32 battlerAtk, u32 atkAbility, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & B_WEATHER_SUN)
        return FALSE;

    if (holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA
     && (atkAbility == ABILITY_CHLOROPHYLL
      || atkAbility == ABILITY_FLOWER_GIFT
      || atkAbility == ABILITY_FORECAST
      || atkAbility == ABILITY_LEAF_GUARD
      || atkAbility == ABILITY_SOLAR_POWER
      || atkAbility == ABILITY_HARVEST
      || HasMoveEffect(battlerAtk, EFFECT_SOLAR_BEAM)
      || HasMoveEffect(battlerAtk, EFFECT_MORNING_SUN)
      || HasMoveEffect(battlerAtk, EFFECT_SYNTHESIS)
      || HasMoveEffect(battlerAtk, EFFECT_MOONLIGHT)
      || HasMoveEffect(battlerAtk, EFFECT_WEATHER_BALL)
      || HasMoveEffect(battlerAtk, EFFECT_GROWTH)
      || HasMoveWithType(battlerAtk, TYPE_FIRE)))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetSnow(u32 battler, u32 ability, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & (B_WEATHER_SNOW | B_WEATHER_HAIL))
        return FALSE;

    if (ability == ABILITY_SNOW_CLOAK
      || ability == ABILITY_ICE_BODY
      || ability == ABILITY_FORECAST
      || ability == ABILITY_SLUSH_RUSH
      || IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
      || HasMoveEffect(battler, EFFECT_BLIZZARD)
      || HasMoveEffect(battler, EFFECT_AURORA_VEIL)
      || HasMoveEffect(battler, EFFECT_WEATHER_BALL))
    {
        return TRUE;
    }
    return FALSE;
}

void ShouldUseProtect(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (gMovesInfo[gLastUsedMove].effect == gMovesInfo[move].effect)
        ADJUST_SCORE_PTR(FAILS_OR_BAD);

    if (HasMoveEffect(battlerDef, EFFECT_ENCORE) || HasMoveEffect(BATTLE_PARTNER(battlerDef), EFFECT_ENCORE))
        return;
    if (AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE) && AI_IsFaster(battlerAtk, BATTLE_PARTNER(battlerDef), MOVE_NONE))
        return;

    if (CanBattlerFaintTarget(battlerDef, battlerAtk) && IsBattlerFirstTurnOrRandom(battlerAtk))
        ADJUST_SCORE_PTR(POWERFUL_STATUS);
}

// stat stages
bool32 ShouldLowerStat(u32 battler, u32 battlerAbility, u32 stat)
{
    if (gBattleMons[battler].statStages[stat] == MIN_STAT_STAGE)
        return FALSE;

    if (AI_DATA->holdEffects[battler] == HOLD_EFFECT_CLEAR_AMULET
        || battlerAbility == ABILITY_CONTRARY
        || battlerAbility == ABILITY_CLEAR_BODY
        || battlerAbility == ABILITY_WHITE_SMOKE
        || battlerAbility == ABILITY_FULL_METAL_BODY)
        return FALSE;

    switch (stat)
    {
        case STAT_ATK:
            return !(battlerAbility == ABILITY_HYPER_CUTTER);
        case STAT_DEF:
            return !(battlerAbility == ABILITY_BIG_PECKS);
        case STAT_SPEED:
            // If AI is faster and doesn't have any mons left, lowering speed doesn't give any
            return !(AI_IsFaster(sBattler_AI, battler, AI_THINKING_STRUCT->moveConsidered)
                && CountUsablePartyMons(sBattler_AI) == 0
                && !HasMoveEffect(sBattler_AI, EFFECT_ELECTRO_BALL));
        case STAT_ACC:
            return !(battlerAbility == ABILITY_KEEN_EYE || (B_ILLUMINATE_EFFECT >= GEN_9 && battlerAbility == ABILITY_ILLUMINATE));
    }

    return TRUE;
}

bool32 BattlerStatCanRise(u32 battler, u32 battlerAbility, u32 stat)
{
    if ((gBattleMons[battler].statStages[stat] < MAX_STAT_STAGE && battlerAbility != ABILITY_CONTRARY)
      || (battlerAbility == ABILITY_CONTRARY && gBattleMons[battler].statStages[stat] > MIN_STAT_STAGE))
        return TRUE;
    return FALSE;
}

bool32 AreBattlersStatsMaxed(u32 battlerId)
{
    u32 i;
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] < MAX_STAT_STAGE)
            return FALSE;
    }
    return TRUE;
}

bool32 AnyStatIsRaised(u32 battlerId)
{
    u32 i;

    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] > DEFAULT_STAT_STAGE)
            return TRUE;
    }
    return FALSE;
}

u32 CountPositiveStatStages(u32 battlerId)
{
    u32 count = 0;
    u32 i;
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] > DEFAULT_STAT_STAGE)
            count = gBattleMons[battlerId].statStages[i] - DEFAULT_STAT_STAGE;
    }
    return count;
}

u32 CountNegativeStatStages(u32 battlerId)
{
    u32 count = 0;
    u32 i;
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] < DEFAULT_STAT_STAGE)
            count++;
    }
    return count;
}

bool32 ShouldLowerAttack(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (gBattleMons[battlerDef].statStages[STAT_ATK] > 4
      && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_HYPER_CUTTER
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerDefense(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (gBattleMons[battlerDef].statStages[STAT_DEF] > 4
      && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_BIG_PECKS
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

static u32 AI_GetBattlerTotalSpeedStatArgs(u32 battler, u32 ability, u32 holdEffect, u32 speedDrop)
{
    u32 speed = gBattleMons[battler].speed;

    // weather abilities
    if (WEATHER_HAS_EFFECT)
    {
        if (ability == ABILITY_SWIFT_SWIM       && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA && gBattleWeather & B_WEATHER_RAIN)
            speed *= 2;
        else if (ability == ABILITY_CHLOROPHYLL && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA && gBattleWeather & B_WEATHER_SUN)
            speed *= 2;
        else if (ability == ABILITY_SAND_RUSH   && gBattleWeather & B_WEATHER_SANDSTORM)
            speed *= 2;
        else if (ability == ABILITY_SLUSH_RUSH  && (gBattleWeather & (B_WEATHER_HAIL | B_WEATHER_SNOW)))
            speed *= 2;
    }

    // other abilities
    if (ability == ABILITY_QUICK_FEET && gBattleMons[battler].status1 & STATUS1_ANY)
        speed = (speed * 150) / 100;
    else if (ability == ABILITY_SURGE_SURFER && gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN)
        speed *= 2;
    else if (ability == ABILITY_SLOW_START && gDisableStructs[battler].slowStartTimer != 0)
        speed /= 2;
    else if (GetHighestStatId(battler) == STAT_SPEED)
    {
        if (AI_DATA->holdEffects[battler] == HOLD_EFFECT_BOOSTER_ENERGY && (ability == ABILITY_PROTOSYNTHESIS || ability == ABILITY_QUARK_DRIVE))
            speed = (speed * 150) / 100;
        else if (ability == ABILITY_PROTOSYNTHESIS && (gBattleWeather & B_WEATHER_SUN || gBattleStruct->boosterEnergyActivates & (1u << battler)))
            speed = (speed * 150) / 100;
        else if (ability == ABILITY_QUARK_DRIVE && (gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN || gBattleStruct->boosterEnergyActivates & (1u << battler)))
            speed = (speed * 150) / 100;
    }

    // stat stages
    speed *= gStatStageRatios[gBattleMons[battler].statStages[STAT_SPEED] - speedDrop][0];
    speed /= gStatStageRatios[gBattleMons[battler].statStages[STAT_SPEED] - speedDrop][1];

    // player's badge boost
    if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK | BATTLE_TYPE_FRONTIER))
        && ShouldGetStatBadgeBoost(FLAG_BADGE03_GET, battler)
        && GetBattlerSide(battler) == B_SIDE_PLAYER)
    {
        speed = (speed * 110) / 100;
    }

    // item effects
    if (holdEffect == HOLD_EFFECT_MACHO_BRACE || holdEffect == HOLD_EFFECT_POWER_ITEM)
        speed /= 2;
    else if (holdEffect == HOLD_EFFECT_IRON_BALL)
        speed /= 2;
    else if (holdEffect == HOLD_EFFECT_CHOICE_SCARF && GetActiveGimmick(battler) != GIMMICK_DYNAMAX)
        speed = (speed * 150) / 100;
    else if (holdEffect == HOLD_EFFECT_QUICK_POWDER && gBattleMons[battler].species == SPECIES_DITTO && !(gBattleMons[battler].status2 & STATUS2_TRANSFORMED))
        speed *= 2;

    // various effects
    if (gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_TAILWIND)
        speed *= 2;
    if (gBattleResources->flags->flags[battler] & RESOURCE_FLAG_UNBURDEN)
        speed *= 2;

    // paralysis drop
    if (gBattleMons[battler].status1 & STATUS1_PARALYSIS && ability != ABILITY_QUICK_FEET)
        speed /= B_PARALYSIS_SPEED >= GEN_7 ? 2 : 4;

    if (gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_SWAMP)
        speed /= 4;

    return speed;
}

s32 AI_WhoStrikesFirst(u32 battlerAI, u32 battler, u32 moveConsidered)
{
    s32 prioAI = 0, prioBattler = 0;
    prioAI = GetMovePriority(battlerAI, moveConsidered);

    if (prioAI > prioBattler)
        return AI_IS_FASTER;

    u32 speedBattlerAI = AI_GetBattlerTotalSpeedStatArgs(battlerAI, AI_DATA->abilities[battlerAI], AI_DATA->holdEffects[battlerAI], 0);
    u32 speedBattler   = AI_GetBattlerTotalSpeedStatArgs(battler, AI_DATA->abilities[battler], AI_DATA->holdEffects[battler], 0);

    if (AI_DATA->holdEffects[battlerAI] == HOLD_EFFECT_LAGGING_TAIL
     && AI_DATA->holdEffects[battler] != HOLD_EFFECT_LAGGING_TAIL)
        return AI_IS_SLOWER;

    if (AI_DATA->holdEffects[battlerAI] != HOLD_EFFECT_LAGGING_TAIL
     && AI_DATA->holdEffects[battler] == HOLD_EFFECT_LAGGING_TAIL)
        return AI_IS_FASTER;

    if (speedBattlerAI == speedBattler
     || AI_DATA->holdEffects[battlerAI] == HOLD_EFFECT_QUICK_CLAW
     || AI_DATA->abilities[battlerAI] == ABILITY_QUICK_DRAW)
    {
        return AI_IS_FASTER;
    }

    if (speedBattlerAI > speedBattler)
    {
        if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM)
            return AI_IS_SLOWER;
        else
            return AI_IS_FASTER;
    }
    else if (speedBattlerAI == speedBattler)
    {
        return AI_IS_FASTER;
    }
    else
    {
        if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM)
            return AI_IS_FASTER;
        else
            return AI_IS_SLOWER;
    }

    return AI_IS_SLOWER;
}

bool32 ShouldLowerSpeed(u32 battlerAtk, u32 battlerDef, u32 move)
{
    switch (AI_DATA->abilities[battlerDef])
    {
    case ABILITY_CONTRARY:
    case ABILITY_CLEAR_BODY:
    case ABILITY_FULL_METAL_BODY:
    case ABILITY_WHITE_SMOKE:
        return FALSE;
    default:
        break;
    }

    if (AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE))
        return FALSE;

    // Target still faster after speed Drop
    u32 speedBattlerAtk = AI_GetBattlerTotalSpeedStatArgs(battlerAtk, AI_DATA->abilities[battlerAtk], AI_DATA->holdEffects[battlerAtk], 0);
    u32 speedBattlerDef = AI_GetBattlerTotalSpeedStatArgs(battlerDef, AI_DATA->abilities[battlerDef], AI_DATA->holdEffects[battlerDef], 1);
    if (speedBattlerDef > speedBattlerAtk)
        return FALSE;

    if (CanBattlerFaintTargetWithIndexMoveAndBestDamageMove(battlerAtk, battlerDef))
        return TRUE;

    if (AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] < AI_EFFECTIVENESS_x1)
        return FALSE;


    return TRUE;
}

bool32 ShouldIncreaseSpeed(u32 battlerAtk, u32 battlerDef, u32 move, u32 statIncreaseBy)
{
    // Target still faster after speed Drop
    u32 speedBattlerAtk = AI_GetBattlerTotalSpeedStatArgs(battlerAtk, AI_DATA->abilities[battlerAtk], AI_DATA->holdEffects[battlerAtk], 0);
    u32 speedBattlerDef = AI_GetBattlerTotalSpeedStatArgs(battlerDef, AI_DATA->abilities[battlerDef], AI_DATA->holdEffects[battlerDef], statIncreaseBy);
    if (speedBattlerDef > speedBattlerAtk)
        return FALSE;

    if (AI_FaintsTargetFaster(battlerAtk, battlerDef) && AI_IsSlower(battlerAtk, battlerDef, MOVE_NONE))
        return TRUE;

    return FALSE;
}

bool32 ShouldLowerSpAtk(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (gBattleMons[battlerDef].statStages[STAT_SPATK] > 4
      && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerSpecialDefense(u32 battlerAtk, u32 battlerDef)
{
    if (AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0)
        return FALSE;

    if (gBattleMons[battlerDef].statStages[STAT_SPDEF] <= DEFAULT_STAT_STAGE - 2)
        return FALSE;

    switch(AI_DATA->abilities[battlerDef])
    {
    case ABILITY_CONTRARY:
    case ABILITY_CLEAR_BODY:
    case ABILITY_FULL_METAL_BODY:
    case ABILITY_WHITE_SMOKE:
        return FALSE;
    }

    return TRUE;
}

bool32 ShouldLowerAccuracy(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_KEEN_EYE
      && defAbility != ABILITY_MINDS_EYE
      && (B_ILLUMINATE_EFFECT >= GEN_9 && defAbility != ABILITY_ILLUMINATE)
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerEvasion(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (gBattleMons[battlerDef].statStages[STAT_EVASION] > DEFAULT_STAT_STAGE
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 CanIndexMoveFaintTarget(u32 battlerAtk, u32 battlerDef, u32 index)
{
    return gBattleMons[battlerDef].hp <= AI_DATA->simulatedDmg[battlerAtk][battlerDef][index].expected;
}

bool32 CanIndexMoveFaintTargetWithCrit(u32 battlerAtk, u32 battlerDef, u32 index)
{
    s32 dmg = AI_DATA->simulatedDmg[battlerAtk][battlerDef][index].expected;
    s32 critDmg = dmg + (dmg / 2);
    u32 abilityAtk = AI_DATA->abilities[battlerAtk];
    u32 abilityDef = AI_DATA->abilities[battlerDef];
    u32 isBattleArmorAbility = (HasBattlerCritProtectingAbility(abilityDef));
    u32 isMoldBreakerAbility = (abilityAtk == ABILITY_MOLD_BREAKER || abilityAtk == ABILITY_TERAVOLT || abilityAtk == ABILITY_TURBOBLAZE);

    if (isBattleArmorAbility && !isMoldBreakerAbility)
        return FALSE;

    if (abilityAtk == ABILITY_SNIPER)
        critDmg = critDmg + (critDmg / 2);

    if (gBattleMons[battlerDef].hp <= critDmg)
        return TRUE;

    return FALSE;
}

u16 *GetMovesArray(u32 battler)
{
    if (IsAiBattlerAware(battler) || IsAiBattlerAware(BATTLE_PARTNER(battler)))
        return gBattleMons[battler].moves;
    else
        return gBattleResources->battleHistory->usedMoves[battler];
}

bool32 HasOnlyMovesWithCategory(u32 battlerId, u32 category, bool32 onlyOffensive)
{
    u32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (onlyOffensive && IS_MOVE_STATUS(moves[i]))
            continue;
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && GetBattleMoveCategory(moves[i]) != category)
            return FALSE;
    }

    return TRUE;
}

bool32 HasMoveWithCategory(u32 battler, u32 category)
{
    u32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && GetBattleMoveCategory(moves[i]) == category)
            return TRUE;
    }
    return FALSE;
}

bool32 HasMoveWithType(u32 battler, u32 type)
{
    s32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].type == type)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveEffect(u32 battlerId, u32 effect)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].effect == effect)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveEffectANDArg(u32 battlerId, u32 effect, u32 argument)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].effect == effect
            && (gMovesInfo[moves[i]].argument & argument))
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithAdditionalEffect(u32 battlerId, u32 moveEffect)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && MoveHasAdditionalEffect(moves[i], moveEffect))
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithCriticalHitChance(u32 battlerId)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].criticalHitStage > 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithAdditionalEffectSelf(u32 battlerId, u32 moveEffect)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && MoveHasAdditionalEffectSelf(moves[i], moveEffect))
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithMoveEffectExcept(u32 battlerId, u32 moveEffect, u32 exception)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].effect != exception
            && MoveHasAdditionalEffect(moves[i], moveEffect))
            return TRUE;
    }

    return FALSE;
}

bool32 HasMove(u32 battlerId, u32 move)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && moves[i] == move)
            return TRUE;
    }

    return FALSE;
}

bool32 HasAnyKnownMove(u32 battlerId)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithLowAccuracy(u32 battlerAtk, u32 battlerDef, u32 accCheck, bool32 ignoreStatus, u32 atkAbility, u32 defAbility, u32 atkHoldEffect, u32 defHoldEffect)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerAtk);
    u32 moveLimitations = AI_DATA->moveLimitations[battlerAtk];

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] == MOVE_NONE || moves[i] == MOVE_UNAVAILABLE)
            continue;

        if (!((1u << i) & moveLimitations))
        {
            if (ignoreStatus && IS_MOVE_STATUS(moves[i]))
                continue;
            else if ((!IS_MOVE_STATUS(moves[i]) && gMovesInfo[moves[i]].accuracy == 0)
                  || GetBattlerMoveTargetType(battlerAtk, moves[i]) & (MOVE_TARGET_USER | MOVE_TARGET_OPPONENTS_FIELD))
                continue;

            if (AI_DATA->moveAccuracy[battlerAtk][battlerDef][i] <= accCheck)
                return TRUE;
        }
    }

    return FALSE;
}

bool32 HasSleepMoveWithLowAccuracy(u32 battlerAtk, u32 battlerDef)
{
    u32 moveLimitations = AI_DATA->moveLimitations[battlerAtk];
    u32 i;
    u16 *moves = GetMovesArray(battlerAtk);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] == MOVE_NONE)
            break;
        if (!((1u << i) & moveLimitations))
        {
            if (gMovesInfo[moves[i]].effect == EFFECT_SLEEP
              && AI_DATA->moveAccuracy[battlerAtk][battlerDef][i] < 85)
                return TRUE;
        }
    }
    return FALSE;
}

bool32 IsHealingMove(u32 move)
{
    return gMovesInfo[move].healingMove;
}

bool32 HasHealingEffect(u32 battlerId)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && IsHealingMove(moves[i]))
            return TRUE;
    }

    return FALSE;
}

bool32 IsTrappingMove(u32 move)
{
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_MEAN_LOOK:
    case EFFECT_FAIRY_LOCK:
    //case EFFECT_NO_RETREAT:   // TODO
        return TRUE;
    default:
        return MoveHasAdditionalEffect(move, MOVE_EFFECT_PREVENT_ESCAPE)
            || MoveHasAdditionalEffect(move, MOVE_EFFECT_WRAP);
    }
}

bool32 HasTrappingMoveEffect(u32 battler)
{
    s32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && IsTrappingMove(moves[i]))
            return TRUE;
    }

    return FALSE;
}

bool32 HasThawingMove(u32 battler)
{
    CHECK_MOVE_FLAG(thawsUser);
}

bool32 IsStatRaisingEffect(u32 effect)
{
    switch (effect)
    {
    case EFFECT_ATTACK_UP:
    case EFFECT_ATTACK_UP_2:
    case EFFECT_DEFENSE_UP:
    case EFFECT_DEFENSE_UP_2:
    case EFFECT_DEFENSE_UP_3:
    case EFFECT_SPEED_UP:
    case EFFECT_SPEED_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP:
    case EFFECT_SPECIAL_ATTACK_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP_3:
    case EFFECT_SPECIAL_DEFENSE_UP:
    case EFFECT_SPECIAL_DEFENSE_UP_2:
    case EFFECT_ACCURACY_UP:
    case EFFECT_ACCURACY_UP_2:
    case EFFECT_EVASION_UP:
    case EFFECT_EVASION_UP_2:
    case EFFECT_MINIMIZE:
    case EFFECT_DEFENSE_CURL:
    case EFFECT_CALM_MIND:
    case EFFECT_COSMIC_POWER:
    case EFFECT_DRAGON_DANCE:
    case EFFECT_ACUPRESSURE:
    case EFFECT_SHELL_SMASH:
    case EFFECT_SHIFT_GEAR:
    case EFFECT_ATTACK_ACCURACY_UP:
    case EFFECT_ATTACK_SPATK_UP:
    case EFFECT_GROWTH:
    case EFFECT_COIL:
    case EFFECT_QUIVER_DANCE:
    case EFFECT_BULK_UP:
    case EFFECT_GEOMANCY:
    case EFFECT_STOCKPILE:
    case EFFECT_VICTORY_DANCE:
        return TRUE;
    case EFFECT_CHARGE:
        return B_CHARGE_SPDEF_RAISE >= GEN_5;
    default:
        return FALSE;
    }
}

bool32 IsStatLoweringEffect(u32 effect)
{
    // ignore other potentially-beneficial effects like defog, gravity
    switch (effect)
    {
    case EFFECT_ATTACK_DOWN:
    case EFFECT_DEFENSE_DOWN:
    case EFFECT_SPEED_DOWN:
    case EFFECT_SPECIAL_ATTACK_DOWN:
    case EFFECT_SPECIAL_DEFENSE_DOWN:
    case EFFECT_ACCURACY_DOWN:
    case EFFECT_EVASION_DOWN:
    case EFFECT_ATTACK_DOWN_2:
    case EFFECT_DEFENSE_DOWN_2:
    case EFFECT_SPEED_DOWN_2:
    case EFFECT_SPECIAL_ATTACK_DOWN_2:
    case EFFECT_SPECIAL_DEFENSE_DOWN_2:
    case EFFECT_ACCURACY_DOWN_2:
    case EFFECT_EVASION_DOWN_2:
    case EFFECT_TICKLE:
    case EFFECT_CAPTIVATE:
    case EFFECT_NOBLE_ROAR:
    case EFFECT_MEMENTO:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 HasDamagingMove(u32 battlerId)
{
    u32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].power != 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasDamagingMoveOfType(u32 battlerId, u32 type)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
          && gMovesInfo[moves[i]].type == type && gMovesInfo[moves[i]].power != 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasSubstituteIgnoringMove(u32 battler)
{
    u16 *moves = GetMovesArray(battler);
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        u32 move = moves[i];

        if (IS_MOVE_STATUS(move))
            continue;

        if (move != MOVE_NONE && move != MOVE_UNAVAILABLE && gMovesInfo[move].ignoresSubstitute)
            return TRUE;
    }
    return FALSE;
}

bool32 AI_ShouldIncreaseCritRate(u32 battler, u32 battlerTarget)
{
    u16 *moves = GetMovesArray(battler);

    if (NoOfHitsToFaintBattler(battlerTarget, battler) < 3 || NoOfHitsToFaintBattler(BATTLE_PARTNER(battlerTarget), battler) < 3)
        return FALSE;
    if (AI_DATA->abilities[battler] == ABILITY_SUPER_LUCK || AI_DATA->abilities[battler] == ABILITY_SNIPER)
        return TRUE;
    if (AI_DATA->holdEffects[battler] == HOLD_EFFECT_SCOPE_LENS)
        return TRUE;

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].criticalHitStage > 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMagicCoatAffectedMove(u32 battler)
{
    CHECK_MOVE_FLAG(magicCoatAffected);
}

bool32 HasSnatchAffectedMove(u32 battler)
{
    CHECK_MOVE_FLAG(snatchAffected);
}

static u32 GetLeechSeedDamage(u32 battlerId)
{
    u32 damage = 0;
    if ((gStatuses3[battlerId] & STATUS3_LEECHSEED)
     && gBattleMons[gStatuses3[battlerId] & STATUS3_LEECHSEED_BATTLER].hp != 0)
     {
        damage = GetNonDynamaxMaxHP(battlerId) / 8;
        if (damage == 0)
            damage = 1;
     }
     return damage;
}

static u32 GetNightmareDamage(u32 battlerId)
{
    u32 damage = 0;
    if ((gBattleMons[battlerId].status2 & STATUS2_NIGHTMARE) && gBattleMons[battlerId].status1 & STATUS1_SLEEP)
    {
        damage = GetNonDynamaxMaxHP(battlerId) / 4;
        if (damage == 0)
            damage = 1;
    }
    return damage;
}

static u32 GetCurseDamage(u32 battlerId)
{
    u32 damage = 0;
    if (gBattleMons[battlerId].status2 & STATUS2_CURSED)
    {
        damage = GetNonDynamaxMaxHP(battlerId) / 4;
        if (damage == 0)
            damage = 1;
    }
    return damage;
}

static u32 GetTrapDamage(u32 battlerId)
{
    // ai has no knowledge about turns remaining
    u32 damage = 0;
    u32 holdEffect = AI_DATA->holdEffects[gBattleStruct->wrappedBy[battlerId]];
    if (gBattleMons[battlerId].status2 & STATUS2_WRAPPED)
    {
        if (holdEffect == HOLD_EFFECT_BINDING_BAND)
            damage = GetNonDynamaxMaxHP(battlerId) / (B_BINDING_DAMAGE >= GEN_6 ? 6 : 8);
        else
            damage = GetNonDynamaxMaxHP(battlerId) / (B_BINDING_DAMAGE >= GEN_6 ? 8 : 16);

        if (damage == 0)
            damage = 1;
    }
    return damage;
}

static u32 GetPoisonDamage(u32 battlerId)
{
    u32 damage = 0;

    if (AI_DATA->abilities[battlerId] == ABILITY_POISON_HEAL)
        return damage;

    if (gBattleMons[battlerId].status1 & STATUS1_POISON)
    {
        damage = gBattleMons[battlerId].maxHP / 8;
        if (damage == 0)
            damage = 1;
    }
    else if (gBattleMons[battlerId].status1 & STATUS1_TOXIC_POISON)
    {
        damage = gBattleMons[battlerId].maxHP / 16;
        if (damage == 0)
            damage = 1;
        if ((gBattleMons[battlerId].status1 & STATUS1_TOXIC_COUNTER) != STATUS1_TOXIC_TURN(15)) // not 16 turns
            gBattleMons[battlerId].status1 += STATUS1_TOXIC_TURN(1);
        damage *= (gBattleMons[battlerId].status1 & STATUS1_TOXIC_COUNTER) >> 8;
    }
    return damage;
}

static bool32 BattlerAffectedBySandstorm(u32 battlerId, u32 ability)
{
    if (!IS_BATTLER_OF_TYPE(battlerId, TYPE_ROCK)
      && !IS_BATTLER_OF_TYPE(battlerId, TYPE_GROUND)
      && !IS_BATTLER_OF_TYPE(battlerId, TYPE_STEEL)
      && ability != ABILITY_SAND_VEIL
      && ability != ABILITY_SAND_FORCE
      && ability != ABILITY_SAND_RUSH
      && ability != ABILITY_OVERCOAT)
        return TRUE;
    return FALSE;
}

static bool32 BattlerAffectedByHail(u32 battlerId, u32 ability)
{
    if (!IS_BATTLER_OF_TYPE(battlerId, TYPE_ICE)
      && ability != ABILITY_SNOW_CLOAK
      && ability != ABILITY_OVERCOAT
      && ability != ABILITY_ICE_BODY)
        return TRUE;
    return FALSE;
}

static u32 GetWeatherDamage(u32 battlerId)
{
    u32 ability = AI_DATA->abilities[battlerId];
    u32 holdEffect = AI_DATA->holdEffects[battlerId];
    u32 damage = 0;
    u32 weather = AI_GetWeather(AI_DATA);
    if (!weather)
        return 0;

    if (weather & B_WEATHER_SANDSTORM)
    {
        if (BattlerAffectedBySandstorm(battlerId, ability)
          && !(gStatuses3[battlerId] & (STATUS3_UNDERGROUND | STATUS3_UNDERWATER))
          && holdEffect != HOLD_EFFECT_SAFETY_GOGGLES)
        {
            damage = GetNonDynamaxMaxHP(battlerId) / 16;
            if (damage == 0)
                damage = 1;
        }
    }
    if ((weather & B_WEATHER_HAIL) && ability != ABILITY_ICE_BODY)
    {
        if (BattlerAffectedByHail(battlerId, ability)
          && !(gStatuses3[battlerId] & (STATUS3_UNDERGROUND | STATUS3_UNDERWATER))
          && holdEffect != HOLD_EFFECT_SAFETY_GOGGLES)
        {
            damage = GetNonDynamaxMaxHP(battlerId) / 16;
            if (damage == 0)
                damage = 1;
        }
    }
    return damage;
}

u32 GetBattlerSecondaryDamage(u32 battlerId)
{
    u32 secondaryDamage;

    if (AI_DATA->abilities[battlerId] == ABILITY_MAGIC_GUARD)
        return FALSE;

    secondaryDamage = GetLeechSeedDamage(battlerId)
     + GetNightmareDamage(battlerId)
     + GetCurseDamage(battlerId)
     + GetTrapDamage(battlerId)
     + GetPoisonDamage(battlerId)
     + GetWeatherDamage(battlerId);

    return secondaryDamage;
}

bool32 BattlerWillFaintFromWeather(u32 battler, u32 ability)
{
    if ((BattlerAffectedBySandstorm(battler, ability) || BattlerAffectedByHail(battler, ability))
      && gBattleMons[battler].hp <= max(1, gBattleMons[battler].maxHP / 16))
        return TRUE;

    return FALSE;
}

bool32 BattlerWillFaintFromSecondaryDamage(u32 battler, u32 ability)
{
    if (GetBattlerSecondaryDamage(battler) != 0
      && gBattleMons[battler].hp <= max(1, gBattleMons[battler].maxHP / 16))
        return TRUE;
    return FALSE;
}

struct Pokemon *GetPartyBattlerPartyData(u32 battlerId, u32 switchBattler)
{
    struct Pokemon *mon;
    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        mon = &gPlayerParty[switchBattler];
    else
        mon = &gEnemyParty[switchBattler];
    return mon;
}

// status checks
bool32 IsBattlerIncapacitated(u32 battler, u32 ability)
{
    if ((gBattleMons[battler].status1 & STATUS1_FREEZE) && !HasThawingMove(battler))
        return TRUE;    // if battler has thawing move we assume they will definitely use it, and thus being frozen should be neglected

    if (gBattleMons[battler].status1 & STATUS1_SLEEP)
        return TRUE;

    if (gBattleMons[battler].status2 & STATUS2_RECHARGE || (ability == ABILITY_TRUANT && gDisableStructs[battler].truantCounter != 0))
        return TRUE;

    return FALSE;
}

bool32 ShouldPoisonSelf(u32 battler, u32 ability)
{
    if (CanBePoisoned(battler, battler, GetBattlerAbility(battler)) && (
     ability == ABILITY_MARVEL_SCALE
      || ability == ABILITY_POISON_HEAL
      || ability == ABILITY_QUICK_FEET
      || ability == ABILITY_MAGIC_GUARD
      || (ability == ABILITY_TOXIC_BOOST && HasMoveWithCategory(battler, DAMAGE_CATEGORY_PHYSICAL))
      || (ability == ABILITY_GUTS && HasMoveWithCategory(battler, DAMAGE_CATEGORY_PHYSICAL))
      || HasMoveEffect(battler, EFFECT_FACADE)
      || HasMoveEffect(battler, EFFECT_PSYCHO_SHIFT)))
        return TRUE;    // battler can be poisoned and has move/ability that synergizes with being poisoned
    return FALSE;
}

bool32 AI_CanPoison(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove)
{
    if (!CanBePoisoned(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef])
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(BATTLE_PARTNER(battlerAtk), battlerDef, partnerMove))
        return FALSE;
    else if (defAbility != ABILITY_CORROSION && (IS_BATTLER_OF_TYPE(battlerDef, TYPE_POISON) || IS_BATTLER_OF_TYPE(battlerDef, TYPE_STEEL)))
        return FALSE;
    else if (IsValidDoubleBattle(battlerAtk) && AI_DATA->abilities[BATTLE_PARTNER(battlerDef)] == ABILITY_PASTEL_VEIL)
        return FALSE;

    return TRUE;
}

bool32 AI_ShouldPoison(u32 battlerAtk, u32 battlerDef)
{
    if (AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_PSN || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_STATUS)
        return FALSE;

    if ((NoOfHitsToFaintBattler(battlerAtk, battlerDef) <= 2) && AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE))
        return FALSE;

    if (NoOfHitsToFaintBattler(battlerDef, battlerAtk) >= 3)
        return TRUE;

    if (HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_PSN_ANY)
     || HasMoveEffectANDArg(BATTLE_PARTNER(battlerAtk), EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_PSN_ANY)
     || HasMoveEffect(battlerAtk, EFFECT_VENOM_DRENCH)
     || AI_DATA->abilities[battlerAtk] == ABILITY_MERCILESS)
        return TRUE;

    return IsBattlerFirstTurnOrRandom(battlerAtk);
}

bool32 AI_CanParalyze(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove)
{
    if (!CanBeParalyzed(battlerDef, defAbility)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0
      || gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SAFEGUARD
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(BATTLE_PARTNER(battlerAtk), battlerDef, partnerMove))
        return FALSE;
    return TRUE;
}

bool32 AI_ShouldParalyze(u32 battlerAtk, u32 battlerDef, u32 move)
{
    if (AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_PAR || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_STATUS)
        return FALSE;

    if (AI_IsSlower(battlerAtk, battlerDef, MOVE_NONE) || NoOfHitsToFaintBattler(battlerDef, battlerAtk) >= 3)
        return TRUE;

    return FALSE;
}

bool32 AI_CanBeConfused(u32 battlerAtk, u32 battlerDef, u32 move, u32 ability)
{
    if ((gBattleMons[battlerDef].status2 & STATUS2_CONFUSION)
     || (ability == ABILITY_OWN_TEMPO && !DoesBattlerIgnoreAbilityChecks(AI_DATA->abilities[battlerAtk], move))
     || (IsBattlerGrounded(battlerDef) && (gFieldStatuses & STATUS_FIELD_MISTY_TERRAIN))
     || gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SAFEGUARD
     || DoesSubstituteBlockMove(battlerAtk, battlerDef, move))
        return FALSE;
    return TRUE;
}

bool32 AI_CanConfuse(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (gMovesInfo[move].target == MOVE_TARGET_FOES_AND_ALLY
     && AI_CanBeConfused(battlerAtk, battlerDef, move, defAbility)
     && !AI_CanBeConfused(battlerAtk, BATTLE_PARTNER(battlerDef), move, AI_DATA->abilities[BATTLE_PARTNER(battlerDef)]))
        return FALSE;

    if (!AI_CanBeConfused(battlerAtk, battlerDef, move, defAbility)
     || DoesPartnerHaveSameMoveEffect(battlerAtkPartner, battlerDef, move, partnerMove))
        return FALSE;

    return TRUE;
}

bool32 AI_CanGetFrostbite(u32 battler, u32 ability)
{
    if (ability == ABILITY_MAGMA_ARMOR
      || ability == ABILITY_COMATOSE
      || IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
      || gBattleMons[battler].status1 & STATUS1_ANY
      || IsAbilityStatusProtected(battler)
      || gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_SAFEGUARD)
        return FALSE;
    return TRUE;
}

bool32 ShouldBurnSelf(u32 battler, u32 ability)
{
    if (CanBeBurned(battler, ability)
    && (ability == ABILITY_QUICK_FEET
     || ability == ABILITY_HEATPROOF
     || ability == ABILITY_MAGIC_GUARD
     || (ability == ABILITY_FLARE_BOOST && HasMoveWithCategory(battler, DAMAGE_CATEGORY_SPECIAL))
     || (ability == ABILITY_GUTS && HasMoveWithCategory(battler, DAMAGE_CATEGORY_PHYSICAL))
     || HasMoveEffect(battler, EFFECT_FACADE)
     || HasMoveEffect(battler, EFFECT_PSYCHO_SHIFT)))
        return TRUE;
    return FALSE;
}

bool32 AI_CanBurn(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!CanBeBurned(battlerDef, defAbility)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(battlerAtkPartner, battlerDef, partnerMove))
        return FALSE;
    return TRUE;
}

bool32 AI_ShouldBurn(u32 battlerAtk, u32 battlerDef)
{
    if (!HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL)
     || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_BRN
     || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_STATUS)
        return FALSE;

    if (!CanBeBurned(battlerDef, AI_DATA->abilities[battlerDef]))
        return FALSE;

    if (gMovesInfo[GetBestDmgMoveFromBattler(battlerDef, battlerAtk)].category == DAMAGE_CATEGORY_PHYSICAL
     && AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE))
        return TRUE;

    if (HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_BURN)
     || HasMoveEffectANDArg(BATTLE_PARTNER(battlerAtk), EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_BURN))
        return TRUE;

    return IsBattlerFirstTurnOrRandom(battlerAtk);
}

bool32 AI_CanGiveFrostbite(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!AI_CanGetFrostbite(battlerDef, defAbility)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(battlerAtkPartner, battlerDef, partnerMove))
    {
        return FALSE;
    }
    return TRUE;
}

bool32 AI_CanBeInfatuated(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if ((gBattleMons[battlerDef].status2 & STATUS2_INFATUATION)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0
      || defAbility == ABILITY_OBLIVIOUS
      || !AreBattlersOfOppositeGender(battlerAtk, battlerDef)
      || AI_IsAbilityOnSide(battlerDef, ABILITY_AROMA_VEIL))
        return FALSE;
    return TRUE;
}

bool32 AI_ShouldSubstitute(u32 battlerAtk, u32 battlerDef, u32 move)
{
    if (gBattleMons[battlerAtk].status2 & STATUS2_SUBSTITUTE
     || AI_DATA->abilities[battlerDef] == ABILITY_INFILTRATOR
     || HasSubstituteIgnoringMove(battlerDef))
        return FALSE;

    s32 battlerDefBestDmg = GetBestDmgFromBattler(battlerDef, battlerAtk);
    u32 aiFaster = AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE);

    switch (gMovesInfo[move].effect)
    {
    case EFFECT_SUBSTITUTE:
        if (!aiFaster && (gBattleMons[battlerAtk].hp - battlerDefBestDmg) <= (gBattleMons[battlerAtk].hp / 4))
            return FALSE;
        if (AI_DATA->hpPercents[battlerAtk] <= 25)
            return FALSE;
        if (RandomPercentage(RNG_NONE, 50))
            return FALSE;
        break;
    case EFFECT_SHED_TAIL:
        if (CountUsablePartyMons(battlerAtk) == 0)
            return FALSE;
        if (AI_DATA->hpPercents[battlerAtk] <= 50)
            return FALSE;
        if (aiFaster)
            return TRUE;
        if (!aiFaster && (gBattleMons[battlerAtk].hp - battlerDefBestDmg) <= (gBattleMons[battlerAtk].hp / 2))
            return FALSE;
        break;
    }

    return TRUE;
}

/*

    case EFFECT_SHED_TAIL:
        if (AI_IsFaster(battlerAtk, battlerDef, move) || NoOfHitsToFaintBattler(battlerDef, battlerAtk) >= 3)
            ADJUST_SCORE(BEST_EFFECT);
        break;
    case EFFECT_SUBSTITUTE:
        if (IsBattlerFirstTurnOrRandom(battlerAtk))
            ADJUST_SCORE(BEST_EFFECT);
        break;

*/

bool32 ShouldTryToFlinch(u32 battlerAtk, u32 battlerDef, u32 atkAbility, u32 defAbility, u32 move)
{
    if (((!DoesBattlerIgnoreAbilityChecks(AI_DATA->abilities[battlerAtk], move) && (defAbility == ABILITY_SHIELD_DUST || defAbility == ABILITY_INNER_FOCUS))
     || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_COVERT_CLOAK
     || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
     || AI_IsSlower(battlerAtk, battlerDef, move)))
        return FALSE;

    if ((atkAbility == ABILITY_SERENE_GRACE
     || gBattleMons[battlerDef].status1 & STATUS1_PARALYSIS
     || gBattleMons[battlerDef].status2 & STATUS2_INFATUATION
     || gBattleMons[battlerDef].status2 & STATUS2_CONFUSION)
     || ((AI_IsFaster(battlerAtk, battlerDef, move)) && CanBattlerFaintTarget(battlerDef, battlerAtk)))
        return TRUE;

    return FALSE;
}

bool32 ShouldTrap(u32 battlerAtk, u32 battlerDef)
{
    if (IsBattlerTrapped(battlerAtk, battlerDef))
        return FALSE;

    if (BattlerWillFaintFromSecondaryDamage(battlerDef, AI_DATA->abilities[battlerDef]))
        return FALSE;

    if (NoOfHitsToFaintBattler(battlerDef, battlerAtk) < 4)
        return FALSE;

    return TRUE;
}

bool32 ShouldFakeOut(u32 battlerAtk, u32 battlerDef, u32 move)
{
    if ((!gDisableStructs[battlerAtk].isFirstTurn && MoveHasAdditionalEffectWithChance(move, MOVE_EFFECT_FLINCH, 100))
    || AI_DATA->abilities[battlerAtk] == ABILITY_GORILLA_TACTICS
    || AI_DATA->holdEffects[battlerAtk] == HOLD_EFFECT_CHOICE_BAND
    || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_COVERT_CLOAK
    || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
    || (!DoesBattlerIgnoreAbilityChecks(AI_DATA->abilities[battlerAtk], move)
     && (AI_DATA->abilities[battlerDef] == ABILITY_SHIELD_DUST || AI_DATA->abilities[battlerDef] == ABILITY_INNER_FOCUS)))
        return FALSE;

    return TRUE;
}

static u32 FindMoveUsedXTurnsAgo(u32 battlerId, u32 x)
{
    s32 i, index = BATTLE_HISTORY->moveHistoryIndex[battlerId];
    for (i = 0; i < x; i++)
    {
        if (--index < 0)
            index = AI_MOVE_HISTORY_COUNT - 1;
    }
    return BATTLE_HISTORY->moveHistory[battlerId][index];
}

bool32 IsWakeupTurn(u32 battler)
{
    // Check if rest was used 2 turns ago
    if ((gBattleMons[battler].status1 & STATUS1_SLEEP) == 1 && FindMoveUsedXTurnsAgo(battler, 2) == MOVE_REST)
        return TRUE;
    else // no way to know
        return FALSE;
}

bool32 AnyPartyMemberStatused(u32 battlerId, bool32 checkSoundproof)
{
    struct Pokemon *party;
    u32 i, battlerOnField1, battlerOnField2;

    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    if (IsDoubleBattle())
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battlerId)))];
        // Check partner's status
        if ((B_HEAL_BELL_SOUNDPROOF == GEN_5 || AI_DATA->abilities[BATTLE_PARTNER(battlerId)] != ABILITY_SOUNDPROOF || !checkSoundproof)
         && GetMonData(&party[battlerOnField2], MON_DATA_STATUS) != STATUS1_NONE)
            return TRUE;
    }
    else // In singles there's only one battlerId by side.
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[battlerId];
    }

    // Check attacker's status
    if ((B_HEAL_BELL_SOUNDPROOF == GEN_5 || B_HEAL_BELL_SOUNDPROOF >= GEN_8
      || AI_DATA->abilities[battlerId] != ABILITY_SOUNDPROOF || !checkSoundproof)
     && GetMonData(&party[battlerOnField1], MON_DATA_STATUS) != STATUS1_NONE)
        return TRUE;

    // Check inactive party mons' status
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (i == battlerOnField1 || i == battlerOnField2)
            continue;
        if (B_HEAL_BELL_SOUNDPROOF < GEN_5 && checkSoundproof && GetMonAbility(&party[i]) == ABILITY_SOUNDPROOF)
            continue;
        if (GetMonData(&party[i], MON_DATA_STATUS) != STATUS1_NONE)
            return TRUE;
    }

    return FALSE;
}

u32 GetBattlerSideSpeedAverage(u32 battler)
{
    u32 speed1 = 0;
    u32 speed2 = 0;
    u32 numBattlersAlive = 0;

    if (IsBattlerAlive(battler))
    {
        speed1 = AI_DATA->speedStats[battler];
        numBattlersAlive++;
    }

    if (IsDoubleBattle() && IsBattlerAlive(BATTLE_PARTNER(battler)))
    {
        speed2 = AI_DATA->speedStats[BATTLE_PARTNER(battler)];
        numBattlersAlive++;
    }

    return (speed1 + speed2) / numBattlersAlive;
}

bool32 ShouldRecover(u32 battlerAtk, u32 battlerDef, u32 move, u32 healPercent)
{
    if (gStatuses3[battlerAtk] & STATUS3_HEAL_BLOCK)
        return FALSE;

    u32 currentHp = gBattleMons[battlerAtk].hp;
    u32 maxHP = GetNonDynamaxMaxHP(battlerAtk);
    s32 damage = GetBestDmgFromBattler(battlerDef, battlerAtk);
    s32 healAmount = (maxHP  * healPercent) / 100;

    if (damage <= (currentHp / 2))
        return FALSE;

    if (damage >= maxHP)
        return FALSE;

    if (maxHP == currentHp)
        return FALSE;

    if (AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE) && RandomPercentage(RNG_NONE, 30))
        return FALSE;

    return (currentHp + healAmount > damage && damage >= currentHp);
}

bool32 ShouldSetScreen(u32 battlerAtk, u32 battlerDef, u32 moveEffect)
{
    u32 atkSide = GetBattlerSide(battlerAtk);
    bool32 shouldTrySetUp = TRUE;

    if (HasMoveEffect(battlerDef, EFFECT_BRICK_BREAK)
     || HasMoveEffect(battlerDef, EFFECT_RAGING_BULL)
     || HasMoveEffect(battlerDef, EFFECT_DEFOG))
    {
        if (AI_FaintsTargetFaster(battlerAtk, battlerDef))
            return FALSE;

        shouldTrySetUp = RandomPercentage(RNG_NONE, 30);
    }

    if (!shouldTrySetUp)
        return FALSE;

    switch (moveEffect)
    {
    case EFFECT_AURORA_VEIL:
        return (AI_GetWeather(AI_DATA) & (B_WEATHER_HAIL | B_WEATHER_SNOW)) && !(gSideStatuses[atkSide] & (SIDE_STATUS_REFLECT | SIDE_STATUS_LIGHTSCREEN | SIDE_STATUS_AURORA_VEIL));
    case EFFECT_REFLECT:
        return HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL) && !(gSideStatuses[atkSide] & SIDE_STATUS_REFLECT);
    case EFFECT_LIGHT_SCREEN:
        return HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL) && !(gSideStatuses[atkSide] & SIDE_STATUS_LIGHTSCREEN);
    }

    return FALSE;
}

// Partner Logic
bool32 IsValidDoubleBattle(u32 battlerAtk)
{
    if (IsDoubleBattle()
      && ((IsBattlerAlive(BATTLE_OPPOSITE(battlerAtk)) && IsBattlerAlive(BATTLE_PARTNER(BATTLE_OPPOSITE(battlerAtk)))) || IsBattlerAlive(BATTLE_PARTNER(battlerAtk))))
        return TRUE;
    return FALSE;
}

u32 GetAllyChosenMove(u32 battlerId)
{
    u32 partnerBattler = BATTLE_PARTNER(battlerId);

    if (!IsBattlerAlive(partnerBattler) || !IsAiBattlerAware(partnerBattler))
        return MOVE_NONE;
    else if (partnerBattler > battlerId) // Battler with the lower id chooses the move first.
        return gLastMoves[partnerBattler];
    else
        return gBattleMons[partnerBattler].moves[gBattleStruct->chosenMovePositions[partnerBattler]];
}

//PARTNER_MOVE_EFFECT_IS_SAME
bool32 DoesPartnerHaveSameMoveEffect(u32 battlerAtkPartner, u32 battlerDef, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (gMovesInfo[move].effect == gMovesInfo[partnerMove].effect
      && partnerMove != MOVE_NONE
      && gBattleStruct->moveTarget[battlerAtkPartner] == battlerDef)
    {
        return TRUE;
    }
    return FALSE;
}

//PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET
bool32 PartnerHasSameMoveEffectWithoutTarget(u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (gMovesInfo[move].effect == gMovesInfo[partnerMove].effect && partnerMove != MOVE_NONE)
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_EFFECT_IS_STATUS_SAME_TARGET
bool32 PartnerMoveEffectIsStatusSameTarget(u32 battlerAtkPartner, u32 battlerDef, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE
     && gBattleStruct->moveTarget[battlerAtkPartner] == battlerDef
     && (gMovesInfo[partnerMove].effect == EFFECT_SLEEP
       || gMovesInfo[partnerMove].effect == EFFECT_POISON
       || gMovesInfo[partnerMove].effect == EFFECT_TOXIC
       || gMovesInfo[partnerMove].effect == EFFECT_PARALYZE
       || gMovesInfo[partnerMove].effect == EFFECT_WILL_O_WISP
       || gMovesInfo[partnerMove].effect == EFFECT_YAWN))
        return TRUE;
    return FALSE;
}

bool32 IsMoveEffectWeather(u32 move)
{
    if (move != MOVE_NONE
     && (gMovesInfo[move].effect == EFFECT_SUNNY_DAY
      || gMovesInfo[move].effect == EFFECT_RAIN_DANCE
      || gMovesInfo[move].effect == EFFECT_SANDSTORM
      || gMovesInfo[move].effect == EFFECT_HAIL
      || gMovesInfo[move].effect == EFFECT_SNOWSCAPE
      || gMovesInfo[move].effect == EFFECT_CHILLY_RECEPTION))
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_EFFECT_IS_TERRAIN
bool32 PartnerMoveEffectIsTerrain(u32 battlerAtkPartner, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE
     && (gMovesInfo[partnerMove].effect == EFFECT_GRASSY_TERRAIN
      || gMovesInfo[partnerMove].effect == EFFECT_MISTY_TERRAIN
      || gMovesInfo[partnerMove].effect == EFFECT_ELECTRIC_TERRAIN
      || gMovesInfo[partnerMove].effect == EFFECT_PSYCHIC_TERRAIN))
        return TRUE;

    return FALSE;
}

//PARTNER_MOVE_IS_TAILWIND_TRICKROOM
bool32 PartnerMoveIs(u32 battlerAtkPartner, u32 partnerMove, u32 moveCheck)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE && partnerMove == moveCheck)
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_IS_SAME
bool32 PartnerMoveIsSameAsAttacker(u32 battlerAtkPartner, u32 battlerDef, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE && move == partnerMove && gBattleStruct->moveTarget[battlerAtkPartner] == battlerDef)
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_IS_SAME_NO_TARGET
bool32 PartnerMoveIsSameNoTarget(u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;
    if (partnerMove != MOVE_NONE && move == partnerMove)
        return TRUE;
    return FALSE;
}

bool32 ShouldUseWishAromatherapy(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 i;
    s32 firstId, lastId;
    struct Pokemon* party;
    bool32 hasStatus = AnyPartyMemberStatused(battlerAtk, gMovesInfo[move].soundMove);
    bool32 needHealing = FALSE;

    GetAIPartyIndexes(battlerAtk, &firstId, &lastId);

    if (GetBattlerSide(battlerAtk) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    if (CountUsablePartyMons(battlerAtk) == 0
      && (CanBattlerFaintTarget(battlerDef, battlerAtk) || BattlerWillFaintFromSecondaryDamage(battlerAtk, AI_DATA->abilities[battlerAtk])))
        return FALSE; // Don't heal if last mon and will faint

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u32 currHp = GetMonData(&party[i], MON_DATA_HP);
        u32 maxHp = GetMonData(&party[i], MON_DATA_MAX_HP);

        if (!GetMonData(&party[i], MON_DATA_IS_EGG, NULL) && currHp > 0)
        {
            if ((currHp * 100) / maxHp < 65 // Less than 65% health remaining
              && i >= firstId && i < lastId) // Can only switch to mon on your team
            {
                needHealing = TRUE;
            }
        }
    }

    if (!IsDoubleBattle())
    {
        switch (gMovesInfo[move].effect)
        {
        case EFFECT_WISH:
            if (needHealing)
                return TRUE;
            break;
        case EFFECT_HEAL_BELL:
            if (hasStatus)
                return TRUE;
        }
    }
    else
    {
        switch (gMovesInfo[move].effect)
        {
        case EFFECT_WISH:
            return ShouldRecover(battlerAtk, battlerDef, move, 50); // Switch recovery isn't good idea in doubles
        case EFFECT_HEAL_BELL:
            if (hasStatus)
                return TRUE;
        }
    }

    return FALSE;
}

#define SIZE_G_BATTLE_MONS (sizeof(struct BattlePokemon) * MAX_BATTLERS_COUNT)

struct BattlePokemon *AllocSaveBattleMons(void)
{
    struct BattlePokemon *savedBattleMons = Alloc(SIZE_G_BATTLE_MONS);
    memcpy(savedBattleMons, gBattleMons, SIZE_G_BATTLE_MONS);
    return savedBattleMons;
}

void FreeRestoreBattleMons(struct BattlePokemon *savedBattleMons)
{
    memcpy(gBattleMons, savedBattleMons, SIZE_G_BATTLE_MONS);
    Free(savedBattleMons);
}

// party logic
s32 AI_CalcPartyMonDamage(u32 move, u32 battlerAtk, u32 battlerDef, struct BattlePokemon switchinCandidate, bool32 isPartyMonAttacker, enum DamageRollType rollType)
{
    struct SimulatedDamage dmg;
    u8 effectiveness;
    struct BattlePokemon *savedBattleMons = AllocSaveBattleMons();

    if (isPartyMonAttacker)
    {
        gBattleMons[battlerAtk] = switchinCandidate;
        AI_THINKING_STRUCT->saved[battlerDef].saved = TRUE;
        SetBattlerAiData(battlerDef, AI_DATA); // set known opposing battler data
        AI_THINKING_STRUCT->saved[battlerDef].saved = FALSE;
    }
    else
    {
        gBattleMons[battlerDef] = switchinCandidate;
        AI_THINKING_STRUCT->saved[battlerAtk].saved = TRUE;
        SetBattlerAiData(battlerAtk, AI_DATA); // set known opposing battler data
        AI_THINKING_STRUCT->saved[battlerAtk].saved = FALSE;
    }

    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, &effectiveness, FALSE, AI_GetWeather(AI_DATA), rollType);
    // restores original gBattleMon struct
    FreeRestoreBattleMons(savedBattleMons);
    return dmg.expected;
}

u32 AI_WhoStrikesFirstPartyMon(u32 battlerAtk, u32 battlerDef, struct BattlePokemon switchinCandidate, u32 moveConsidered)
{
    struct BattlePokemon *savedBattleMons = AllocSaveBattleMons();
    gBattleMons[battlerAtk] = switchinCandidate;

    SetBattlerAiData(battlerAtk, AI_DATA);
    u32 aiMonFaster = AI_IsFaster(battlerAtk, battlerDef, moveConsidered);
    FreeRestoreBattleMons(savedBattleMons);

    return aiMonFaster;
}

s32 CountUsablePartyMons(u32 battlerId)
{
    s32 battlerOnField1, battlerOnField2, i, ret;
    struct Pokemon *party;

    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    if (IsDoubleBattle())
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battlerId)))];
    }
    else // In singles there's only one battlerId by side.
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[battlerId];
    }

    ret = 0;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (i != battlerOnField1 && i != battlerOnField2
         && GetMonData(&party[i], MON_DATA_HP) != 0
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_NONE
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_EGG)
        {
            ret++;
        }
    }

    return ret;
}

bool32 IsPartyFullyHealedExceptBattler(u32 battlerId)
{
    struct Pokemon *party;
    u32 i;

    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (i != gBattlerPartyIndexes[battlerId]
         && GetMonData(&party[i], MON_DATA_HP) != 0
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_NONE
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_EGG
         && GetMonData(&party[i], MON_DATA_HP) < GetMonData(&party[i], MON_DATA_MAX_HP))
            return FALSE;
    }
    return TRUE;
}

bool32 PartyHasMoveCategory(u32 battlerId, u32 category)
{
    struct Pokemon *party = GetBattlerParty(battlerId);
    u32 i, j;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&party[i], MON_DATA_HP, NULL) == 0)
            continue;

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            u32 move = GetMonData(&party[i], MON_DATA_MOVE1 + j, NULL);
            u32 pp = GetMonData(&party[i], MON_DATA_PP1 + j, NULL);

            if (pp > 0 && move != MOVE_NONE)
            {
                //TODO - handle photon geyser, light that burns the sky
                if (gMovesInfo[move].category == category)
                    return TRUE;
            }
        }
    }

    return FALSE;
}

bool32 SideHasMoveCategory(u32 battlerId, u32 category)
{
    if (IsDoubleBattle())
    {
        if (HasMoveWithCategory(battlerId, category) || HasMoveWithCategory(BATTLE_PARTNER(battlerId), category))
            return TRUE;
    }
    else
    {
        if (HasMoveWithCategory(battlerId, category))
            return TRUE;
    }
    return FALSE;
}

bool32 IsAbilityOfRating(u32 ability, s8 rating)
{
    if (gAbilitiesInfo[ability].aiRating >= rating)
        return TRUE;
    return FALSE;
}

static const u16 sRecycleEncouragedItems[] =
{
    ITEM_CHESTO_BERRY,
    ITEM_LUM_BERRY,
    ITEM_STARF_BERRY,
    ITEM_SITRUS_BERRY,
    ITEM_MICLE_BERRY,
    ITEM_CUSTAP_BERRY,
    ITEM_MENTAL_HERB,
    ITEM_FOCUS_SASH,
    // TODO expand this
};

// Its assumed that the berry is strategically given, so no need to check benefits of the berry
bool32 IsStatBoostingBerry(u32 item)
{
    switch (item)
    {
    case ITEM_LIECHI_BERRY:
    case ITEM_GANLON_BERRY:
    case ITEM_SALAC_BERRY:
    case ITEM_PETAYA_BERRY:
    case ITEM_APICOT_BERRY:
    //case ITEM_LANSAT_BERRY:
    case ITEM_STARF_BERRY:
    case ITEM_MICLE_BERRY:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 ShouldRestoreHpBerry(u32 battlerAtk, u32 item)
{
    switch (item)
    {
    case ITEM_ORAN_BERRY:
        if (gBattleMons[battlerAtk].maxHP <= 50)
            return TRUE;    // Only worth it in the early game
        return FALSE;
    case ITEM_SITRUS_BERRY:
    case ITEM_FIGY_BERRY:
    case ITEM_WIKI_BERRY:
    case ITEM_MAGO_BERRY:
    case ITEM_AGUAV_BERRY:
    case ITEM_IAPAPA_BERRY:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsRecycleEncouragedItem(u32 item)
{
    u32 i;
    for (i = 0; i < ARRAY_COUNT(sRecycleEncouragedItems); i++)
    {
        if (item == sRecycleEncouragedItems[i])
            return TRUE;
    }
    return FALSE;
}

u32 IncreaseStatUpScore(u32 battlerAtk, u32 battlerDef, u32 statId, bool32 contrary)
{
    u32 tempScore = 0;
    u32 noOfHitsToFaint = NoOfHitsToFaintBattler(battlerDef, battlerAtk);
    u32 aiIsFaster = AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE);
    u32 shouldSetUp = ((noOfHitsToFaint >= 2 && aiIsFaster) || (noOfHitsToFaint >= 3 && !aiIsFaster) || noOfHitsToFaint == UNKNOWN_NO_OF_HITS);

    if (AI_DATA->abilities[battlerAtk] == ABILITY_CONTRARY && !contrary)
        return NO_INCREASE;

    if (GetBattlerSecondaryDamage(battlerAtk) >= gBattleMons[battlerAtk].hp)
        return NO_INCREASE;

    if (AI_DATA->abilities[battlerDef] == ABILITY_OPPORTUNIST || AI_DATA->abilities[battlerDef] == ABILITY_UNAWARE)
        return NO_INCREASE;

    switch (statId)
    {
    case STAT_CHANGE_ATK:
        if (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL) && shouldSetUp)
            tempScore += GOOD_EFFECT;
        break;
    case STAT_CHANGE_DEF:
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL) || !HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL))
            tempScore += WEAK_EFFECT;
        break;
    case STAT_CHANGE_SPEED:
        if ((noOfHitsToFaint >= 3 && !aiIsFaster) || noOfHitsToFaint == UNKNOWN_NO_OF_HITS)
            tempScore += GOOD_EFFECT;
        break;
    case STAT_CHANGE_SPATK:
        if (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL) && shouldSetUp)
            tempScore += GOOD_EFFECT;
        break;
    case STAT_CHANGE_SPDEF:
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL) || !HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL))
            tempScore += WEAK_EFFECT;
        break;
    case STAT_CHANGE_ATK_2:
        if (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL) && shouldSetUp)
            tempScore += BEST_EFFECT;
        break;
    case STAT_CHANGE_DEF_2:
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL) || !HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL))
            tempScore += GOOD_EFFECT;
        break;
    case STAT_CHANGE_SPEED_2:
        if ((noOfHitsToFaint >= 3 && !aiIsFaster) || noOfHitsToFaint == UNKNOWN_NO_OF_HITS)
            tempScore += BEST_EFFECT;
        break;
    case STAT_CHANGE_SPATK_2:
        if (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL) && shouldSetUp)
            tempScore += BEST_EFFECT;
        break;
    case STAT_CHANGE_SPDEF_2:
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL) || !HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL))
            tempScore += GOOD_EFFECT;
        break;
    case STAT_CHANGE_ACC:
        if (gBattleMons[battlerAtk].statStages[STAT_ACC] <= 3) // Increase only if necessary
            tempScore += GOOD_EFFECT;
        break;
    case STAT_CHANGE_EVASION:
        if (noOfHitsToFaint > 3 || noOfHitsToFaint == UNKNOWN_NO_OF_HITS)
            tempScore += BEST_EFFECT;
        else
            tempScore += GOOD_EFFECT;
        break;
    }
    if (tempScore > BEST_EFFECT)
        return BEST_EFFECT;

    return (tempScore == 1) ? 0 : tempScore;
}

bool32 AI_ShouldSleep(u32 battlerAtk, u32 battlerDef, u32 move)
{
    struct AiLogicData *aiData = AI_DATA;

    if (!CanBeSlept(battlerDef, aiData->abilities[battlerDef])
     || gStatuses3[battlerDef] & STATUS3_YAWN
     || aiData->abilities[battlerDef] == ABILITY_SWEET_VEIL
     || aiData->abilities[BATTLE_PARTNER(battlerDef)] == ABILITY_SWEET_VEIL
     || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
     || PartnerMoveEffectIsStatusSameTarget(BATTLE_PARTNER(battlerAtk), battlerDef, aiData->partnerMove))
        return FALSE;

    if (aiData->holdEffects[battlerDef] == HOLD_EFFECT_CURE_SLP
     || aiData->holdEffects[battlerDef] == HOLD_EFFECT_CURE_STATUS
     || HasMoveEffect(battlerDef, EFFECT_SNORE)
     || HasMoveEffect(battlerDef, EFFECT_SLEEP_TALK))
        return FALSE;

    if (IsBattlerFirstTurnOrRandom(battlerAtk)
     || HasMoveEffect(battlerAtk, EFFECT_DREAM_EATER)
     || HasMoveEffect(battlerAtk, EFFECT_NIGHTMARE)
     || HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_SLEEP)
     || HasMoveEffectANDArg(BATTLE_PARTNER(battlerAtk), EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_SLEEP))
        return TRUE;

    return FALSE;
}

bool32 AI_ShouldConfuse(u32 battlerAtk, u32 battlerDef)
{
    if ((NoOfHitsToFaintBattler(battlerAtk, battlerDef) <= 2) && AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE))
        return FALSE;

    if (AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_CONFUSION
     || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CURE_STATUS
     || AI_DATA->abilities[battlerDef] == ABILITY_OWN_TEMPO)
        return FALSE;

    if (gBattleMons[battlerDef].status1 & STATUS1_PARALYSIS
     || gBattleMons[battlerDef].status2 & STATUS2_INFATUATION)
        return TRUE;

    return IsBattlerFirstTurnOrRandom(battlerAtk);
}

bool32 AI_ShouldLeechSeed(u32 battlerAtk, u32 battlerDef)
{
    if ((NoOfHitsToFaintBattler(battlerAtk, battlerDef) <= 2) && AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE))
        return FALSE;

    if (HasMoveWithAdditionalEffect(battlerDef, MOVE_EFFECT_RAPID_SPIN) & Random() & 1)
        return FALSE;

    return IsBattlerFirstTurnOrRandom(battlerAtk);
}

bool32 AI_MoveMakesContact(u32 ability, u32 holdEffect, u32 move)
{
    return (gMovesInfo[move].makesContact
         && ability != ABILITY_LONG_REACH
         && holdEffect != HOLD_EFFECT_PROTECTIVE_PADS);
}

//TODO - this could use some more sophisticated logic
bool32 ShouldUseZMove(u32 battlerAtk, u32 battlerDef, u32 chosenMove)
{
    // simple logic. just upgrades chosen move to z move if possible, unless regular move would kill opponent
    if ((IsDoubleBattle()) && battlerDef == BATTLE_PARTNER(battlerAtk))
        return FALSE;   // don't use z move on partner
    if (HasTrainerUsedGimmick(battlerAtk, GIMMICK_Z_MOVE))
        return FALSE;   // can't use z move twice

    if (IsViableZMove(battlerAtk, chosenMove))
    {
        u8 effectiveness;
        u32 zMove = GetUsableZMove(battlerAtk, chosenMove);
        struct SimulatedDamage dmg;

        if (gBattleMons[battlerDef].ability == ABILITY_DISGUISE
            && !gMovesInfo[zMove].ignoresTargetAbility
            && (gBattleMons[battlerDef].species == SPECIES_MIMIKYU_DISGUISED || gBattleMons[battlerDef].species == SPECIES_MIMIKYU_TOTEM_DISGUISED))
            return FALSE; // Don't waste a Z-Move busting disguise
        if (gBattleMons[battlerDef].ability == ABILITY_ICE_FACE
            && !gMovesInfo[zMove].ignoresTargetAbility
            && gBattleMons[battlerDef].species == SPECIES_EISCUE_ICE && IS_MOVE_PHYSICAL(chosenMove))
            return FALSE; // Don't waste a Z-Move busting Ice Face

        if (IS_MOVE_STATUS(chosenMove) && !IS_MOVE_STATUS(zMove))
            return FALSE;
        else if (!IS_MOVE_STATUS(chosenMove) && IS_MOVE_STATUS(zMove))
            return FALSE;

        dmg = AI_CalcDamageSaveBattlers(chosenMove, battlerAtk, battlerDef, &effectiveness, FALSE, DMG_ROLL_DEFAULT);

        if (!IS_MOVE_STATUS(chosenMove) && dmg.minimum >= gBattleMons[battlerDef].hp)
            return FALSE;   // don't waste damaging z move if can otherwise faint target

        return TRUE;
    }

    return FALSE;
}

bool32 AI_IsBattlerAsleepOrComatose(u32 battlerId)
{
    return gBattleMons[battlerId].status1 & STATUS1_SLEEP || AI_DATA->abilities[battlerId] == ABILITY_COMATOSE;
}

s32 AI_TryToClearStats(u32 battlerAtk, u32 battlerDef, bool32 isDoubleBattle)
{
    u32 tempScore;
    if (isDoubleBattle)
        tempScore = CountPositiveStatStages(battlerDef) + CountPositiveStatStages(BATTLE_PARTNER(battlerDef));
    else
        tempScore = CountPositiveStatStages(battlerDef);

    return (tempScore > WEAK_EFFECT) ? GOOD_EFFECT : NO_INCREASE;
}

bool32 AI_ShouldCopyStatChanges(u32 battlerAtk, u32 battlerDef)
{
    u8 i;
    // Want to copy positive stat changes
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerDef].statStages[i] > gBattleMons[battlerAtk].statStages[i])
        {
            switch (i)
            {
            case STAT_ATK:
                return (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL));
            case STAT_SPATK:
                return (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL));
            case STAT_ACC:
            case STAT_EVASION:
            case STAT_SPEED:
                return TRUE;
            }
        }
    }

    return FALSE;
}

bool32 AI_ShouldSetUpHazards(u32 battlerAtk, u32 battlerDef, u32 moveEffect)
{
    if (AI_DATA->abilities[battlerDef] == ABILITY_MAGIC_BOUNCE
     || CountUsablePartyMons(battlerAtk) < 3
     || CountUsablePartyMons(battlerDef) < 3)
        return FALSE;

    switch (moveEffect)
    {
    case EFFECT_STICKY_WEB:
        if (gSideTimers[battlerDef].stickyWebAmount > 0)
            return FALSE;
        break;
    case EFFECT_TOXIC_SPIKES:
        if (gSideTimers[battlerDef].toxicSpikesAmount > 0)
            return FALSE;
        break;
    case EFFECT_SPIKES:
        if (gSideTimers[battlerDef].spikesAmount > 0)
            return FALSE;
        break;
    case EFFECT_STEALTH_ROCK:
        if (gSideTimers[battlerDef].stealthRockAmount > 0)
            return FALSE;
        break;
    default:
        break;
    }

    if (HasMoveWithAdditionalEffectSelf(battlerDef, MOVE_EFFECT_RAPID_SPIN) || HasMoveEffect(battlerDef, EFFECT_DEFOG))
    {
        if (AI_FaintsTargetFaster(battlerAtk, battlerDef))
            return FALSE;
        if (RandomPercentage(RNG_NONE, 70))
            return FALSE;
    }

    return TRUE;
}

s32 IncreaseTidyUpScore(u32 battlerAtk, u32 battlerDef)
{
    s32 tempScore = 0;

    if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerAtk) != 0)
        tempScore += GOOD_EFFECT;
    if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerDef) != 0)
        tempScore -= GOOD_EFFECT;

    if (gBattleMons[battlerAtk].status2 & STATUS2_SUBSTITUTE && AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE))
        tempScore -= 10;
    if (gBattleMons[battlerDef].status2 & STATUS2_SUBSTITUTE)
        tempScore += GOOD_EFFECT;

    if (gStatuses3[battlerAtk] & STATUS3_LEECHSEED)
        tempScore += GOOD_EFFECT;
    if (gStatuses3[battlerDef] & STATUS3_LEECHSEED)
        tempScore -= GOOD_EFFECT;

    return (tempScore > BEST_EFFECT) ? BEST_EFFECT : 0;
}

bool32 AI_ShouldSpicyExtract(u32 battlerAtk, u32 battlerAtkPartner, u32 move, struct AiLogicData *aiData)
{
    u32 preventsStatLoss;
    u32 partnerAbility;
    u32 partnerHoldEffect = aiData->holdEffects[battlerAtkPartner];

    if (DoesBattlerIgnoreAbilityChecks(aiData->abilities[battlerAtk], move))
        partnerAbility = ABILITY_NONE;
    else
        partnerAbility = aiData->abilities[battlerAtkPartner];

    if (gBattleMons[battlerAtkPartner].statStages[STAT_ATK] == MAX_STAT_STAGE
     || partnerAbility == ABILITY_CONTRARY
     || partnerAbility == ABILITY_GOOD_AS_GOLD
     || HasMoveEffect(BATTLE_OPPOSITE(battlerAtk), EFFECT_FOUL_PLAY)
     || HasMoveEffect(BATTLE_OPPOSITE(battlerAtkPartner), EFFECT_FOUL_PLAY))
        return FALSE;

    preventsStatLoss = (partnerAbility == ABILITY_CLEAR_BODY
                     || partnerAbility == ABILITY_FULL_METAL_BODY
                     || partnerAbility == ABILITY_WHITE_SMOKE
                     || partnerHoldEffect == HOLD_EFFECT_CLEAR_AMULET);

    switch (gMovesInfo[aiData->partnerMove].effect)
    {
    case EFFECT_DEFENSE_UP:
    case EFFECT_DEFENSE_UP_2:
    case EFFECT_DEFENSE_UP_3:
    case EFFECT_BULK_UP:
    case EFFECT_STOCKPILE:
        if (!preventsStatLoss)
            return FALSE;
    }

    return (preventsStatLoss
         && AI_IsFaster(battlerAtk, battlerAtkPartner, TRUE)
         && HasMoveWithCategory(battlerAtkPartner, DAMAGE_CATEGORY_PHYSICAL));
}

static inline bool32 BattlerPreventsSecondaryEffect(u32 battler)
{
    u32 holdEffect = AI_DATA->holdEffects[battler];
    return AI_DATA->abilities[battler] == ABILITY_SHIELD_DUST
        || holdEffect == HOLD_EFFECT_CLEAR_AMULET
        || holdEffect == HOLD_EFFECT_COVERT_CLOAK;
}

bool32 AI_IsSecondaryMoveEffectBeneficial(u32 battlerAtk, u32 battlerDef, u32 move, struct AiLogicData *aiData)
{
    // check move additional effects that are likely to happen
    for (u32 i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
    {
        // Only consider effects with a guaranteed chance to happen
        if (!MoveEffectIsGuaranteed(battlerAtk, aiData->abilities[battlerAtk], &gMovesInfo[move].additionalEffects[i]))
            continue;

        // Consider move effects that target self
        if (gMovesInfo[move].additionalEffects[i].self)
        {
            if (aiData->abilities[battlerAtk] != ABILITY_CONTRARY)
            {
                switch (gMovesInfo[move].additionalEffects[i].moveEffect)
                {
                default: break;
                case MOVE_EFFECT_SPD_PLUS_1: return ShouldIncreaseSpeed(battlerAtk, battlerDef, move, 1);
                case MOVE_EFFECT_SPD_PLUS_2: return ShouldIncreaseSpeed(battlerAtk, battlerDef, move, 2);
                }
            }
            else
            {
                switch (gMovesInfo[move].additionalEffects[i].moveEffect)
                {
                default: break;
                case MOVE_EFFECT_SPD_MINUS_1: return ShouldIncreaseSpeed(battlerAtk, battlerDef, move, 1);
                case MOVE_EFFECT_SPD_MINUS_2: return ShouldIncreaseSpeed(battlerAtk, battlerDef, move, 2);
                }
            }
        }
        else // consider move effects that hinder the target
        {
            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
            default: break;
            case MOVE_EFFECT_SPD_MINUS_1:
            case MOVE_EFFECT_SPD_MINUS_2:
                return ShouldLowerSpeed(battlerAtk, battlerDef, move) && !BattlerPreventsSecondaryEffect(battlerDef);

            case MOVE_EFFECT_PARALYSIS:    return AI_ShouldParalyze(battlerAtk, battlerDef, move) && !BattlerPreventsSecondaryEffect(battlerDef);
            case MOVE_EFFECT_POISON:       return AI_ShouldPoison(battlerAtk, battlerDef) && !BattlerPreventsSecondaryEffect(battlerDef);
            case MOVE_EFFECT_STEALTH_ROCK: return AI_ShouldSetUpHazards(battlerAtk, battlerDef, EFFECT_STEALTH_ROCK);
            case MOVE_EFFECT_SPIKES:       return AI_ShouldSetUpHazards(battlerAtk, battlerDef, EFFECT_SPIKES);
            case MOVE_EFFECT_THROAT_CHOP:  return (gMovesInfo[GetBestDmgMoveFromBattler(battlerDef, battlerAtk)].soundMove && AI_IsFaster(battlerAtk, battlerDef, MOVE_NONE));
            case MOVE_EFFECT_WRAP:         return (!HasMoveWithAdditionalEffectSelf(battlerDef, MOVE_EFFECT_RAPID_SPIN) && NoOfHitsToFaintBattler(battlerDef, battlerAtk) >= 3 && ShouldTrap(battlerAtk, battlerDef));
            case MOVE_EFFECT_FLINCH:       return ShouldTryToFlinch(battlerAtk, battlerDef, aiData->abilities[battlerAtk], aiData->abilities[battlerDef], move) && gMovesInfo[move].effect != EFFECT_FIRST_TURN_ONLY;
            }
        }
    }
    return FALSE;
}

bool32 AI_ShouldMirrorCoatOrCounter(u32 battlerAtk, u32 battlerDef, u32 moveEffect)
{
    if (NoOfHitsToFaintBattler(battlerDef, battlerAtk) == 1)
        return FALSE;

    if (moveEffect == EFFECT_COUNTER && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL))
        return FALSE;

    if (moveEffect == EFFECT_MIRROR_COAT && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL))
        return FALSE;

    return RandomPercentage(RNG_NONE, 50);
}

bool32 AI_EffectBatonPass(u32 battlerAtk, u32 battlerDef)
{
    u32 side = GetBattlerSide(battlerDef);

    if (gBattleMons[battlerAtk].status2 & STATUS2_SUBSTITUTE)
        return TRUE;

    if (gSideStatuses[side] & (SIDE_STATUS_STICKY_WEB | SIDE_STATUS_SCREEN_ANY))
        return TRUE;

    if (gStatuses3[battlerAtk] & (STATUS3_ROOTED | STATUS3_AQUA_RING | STATUS3_MAGNET_RISE | STATUS3_POWER_TRICK))
        return TRUE;

    return AnyStatIsRaised(battlerAtk);
}

bool32 AI_ShouldUsePledgeMove(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 partner = BATTLE_PARTNER(battlerAtk);
    u32 partnerMove = gBattleMons[partner].moves[gBattleStruct->aiMoveOrAction[partner]];

    if (partnerMove == move)
        return FALSE;
    if (gBattleStruct->aiComboAttackState == COMBO_SECOND_BATTLER_NO_SCORE_INCREASE)
        return FALSE;

    if (battlerAtk < partner || gMovesInfo[partnerMove].effect == EFFECT_PLEDGE)
    {
        switch (move)
        {
        case MOVE_GRASS_PLEDGE:
            if (HasMove(partner, MOVE_FIRE_PLEDGE))
                return !(gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SEA_OF_FIRE);
            if (HasMove(partner, MOVE_WATER_PLEDGE))
                return !(gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SWAMP);
            break;
        case MOVE_FIRE_PLEDGE:
            if (HasMove(partner, MOVE_WATER_PLEDGE))
                return !(gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_RAINBOW);
            if (HasMove(partner, MOVE_GRASS_PLEDGE))
                return !(gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SEA_OF_FIRE);
            break;
        case MOVE_WATER_PLEDGE:
            if (HasMove(partner, MOVE_GRASS_PLEDGE))
                return !(gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SWAMP);
            if (HasMove(partner, MOVE_FIRE_PLEDGE))
                return !(gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_RAINBOW);
            break;
        default: break;
        }
    }

    return FALSE;
}

bool32 AI_ShouldUseRound(u32 battler)
{
    u32 partner = BATTLE_PARTNER(battler);
    u32 partnerMove = gBattleMons[partner].moves[gBattleStruct->aiMoveOrAction[partner]];

    if (gBattleStruct->aiComboAttackState == COMBO_SECOND_BATTLER_NO_SCORE_INCREASE)
        return FALSE;

    if (battler < partner || gMovesInfo[partnerMove].effect == EFFECT_ROUND)
        return HasMove(partner, MOVE_ROUND);

    return FALSE;

}

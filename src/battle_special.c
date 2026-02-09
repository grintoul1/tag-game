#include "global.h"
#include "main.h"
#include "battle_special.h"
#include "battle.h"
#include "battle_controllers.h"
#include "battle_frontier.h"
#include "battle_main.h"
#include "battle_partner.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_transition.h"
#include "event_data.h"
#include "frontier_util.h"
#include "new_game.h"
#include "overworld.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "constants/battle_frontier.h"
#include "constants/battle_special.h"
#include "constants/battle_setup.h"

static void HandleSpecialTrainerBattleEnd(void);
static void Task_StartBattleAfterTransition(u8 taskId);
static void UNUSED FillEReaderTrainerWithPlayerData(void);
static void CopyEReaderTrainerFarewellMessage(void);
static void FillCustomParty(void);

#if FREE_BATTLE_TOWER_E_READER == FALSE
static void SetEReaderTrainerChecksum(struct BattleTowerEReaderTrainer *ereaderTrainer);
#endif //FREE_BATTLE_TOWER_E_READER

static void HandleSpecialTrainerBattleEnd(void)
{
    s32 i;

    RecordedBattle_SaveBattleOutcome();
    switch (gBattleScripting.specialTrainerBattleType)
    {
    case SPECIAL_BATTLE_SECRET_BASE:
        for (i = 0; i < PARTY_SIZE; i++)
        {
            u16 itemBefore = GetMonData(&gSaveBlock1Ptr->playerParty[i], MON_DATA_HELD_ITEM);
            SetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM, &itemBefore);
        }
        break;
    case SPECIAL_BATTLE_EREADER:
        CopyEReaderTrainerFarewellMessage();
        break;
    case SPECIAL_BATTLE_MULTI:
        for (i = 0; i < 3; i++)
        {
            if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES))
                gSaveBlock1Ptr->playerParty[i] = gPlayerParty[i];
        }
        break;
    case SPECIAL_BATTLE_CUSTOM:
        // TO DO - how to retain exp by using gSelectedOrderFromParty or similar?
        for (i = 0; i < PARTY_SIZE; i++)
        {
            gPlayerParty[i] = gSaveBlock1Ptr->playerParty[i];
        }
        break;
    }

    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

static void Task_StartBattleAfterTransition(u8 taskId)
{
    if (IsBattleTransitionDone() == TRUE)
    {
        gMain.savedCallback = HandleSpecialTrainerBattleEnd;
        SetMainCallback2(CB2_InitBattle);
        DestroyTask(taskId);
    }
}

u16 GetCustomBattleTrainerId(enum BattlerPosition position)
{
    switch (position)
    {
    case B_POSITION_PLAYER_LEFT:
        return CUSTOM_BATTLE_PARAM.battler0Id;
    case B_POSITION_OPPONENT_LEFT:
    default:
        return CUSTOM_BATTLE_PARAM.battler1Id;
    case B_POSITION_PLAYER_RIGHT:
        return CUSTOM_BATTLE_PARAM.battler2Id;
    case B_POSITION_OPPONENT_RIGHT:
        return CUSTOM_BATTLE_PARAM.battler3Id;
    }
}

static void FillCustomParty(void)
{
    u32 i;
    enum BattlerPosition position = GetPlayerBattlePosition();

    // If player has ally trainer in LEFT position, moves party to indexes 3-5 before FillPartnerParty fills indexes 0-2
    if ((position & BIT_FLANK) == B_FLANK_LEFT)
    {
        DebugPrintf("(position & BIT_FLANK) == B_FLANK_LEFT");
        if (GetCustomBattleTrainerId(BATTLE_PARTNER(position)) != TRAINER_NONE && GetCustomBattleTrainerId(BATTLE_PARTNER(position)) != 0xFFFF)
            FillPartnerParty((position & BIT_SIDE) == B_SIDE_PLAYER ? CUSTOM_BATTLE_PARAM.battler2Id : CUSTOM_BATTLE_PARAM.battler3Id);
    }
    else
    {
        DebugPrintf("(position & BIT_FLANK) != B_FLANK_LEFT");
        for (i = 0; i < MULTI_PARTY_SIZE; i++)
            CopyMon(&gPlayerParty[i + 3], &gPlayerParty[i], sizeof(gPlayerParty[i]));

        FillPartnerParty((position & BIT_SIDE) == B_SIDE_PLAYER ? CUSTOM_BATTLE_PARAM.battler0Id : CUSTOM_BATTLE_PARAM.battler1Id);
    }
    for (i = 0; i < PARTY_SIZE; i++)
    {
        DebugPrintf("FIRST player %d %S", i, GetSpeciesName(GetMonData(&gPlayerParty[i],MON_DATA_SPECIES)));
        DebugPrintf("FIRST enemy %d %S", i, GetSpeciesName(GetMonData(&gEnemyParty[i],MON_DATA_SPECIES)));
    }

    // Copies party to opposite side then fills player side party
    if ((position & BIT_SIDE) == B_SIDE_OPPONENT)
    {
        for (i = 0; i < PARTY_SIZE; i++)
            CopyMon(&gEnemyParty[i], &gPlayerParty[i], sizeof(gPlayerParty[i]));

        ZeroPlayerPartyMons();
        
        CreateNPCTrainerParty(&gPlayerParty[0], CUSTOM_BATTLE_PARAM.battler0Id, TRUE);

        if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
            CreateNPCTrainerParty(&gPlayerParty[MULTI_PARTY_SIZE], CUSTOM_BATTLE_PARAM.battler2Id, FALSE);
    }
    else // On player is on player side
    {
        CreateNPCTrainerParty(&gEnemyParty[0], CUSTOM_BATTLE_PARAM.battler1Id, TRUE);

        if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
            CreateNPCTrainerParty(&gEnemyParty[MULTI_PARTY_SIZE], CUSTOM_BATTLE_PARAM.battler3Id, FALSE);
    }
    for (i = 0; i < PARTY_SIZE; i++)
    {
        DebugPrintf("END player %d %S", i, GetSpeciesName(GetMonData(&gPlayerParty[i],MON_DATA_SPECIES)));
        DebugPrintf("END enemy %d %S", i, GetSpeciesName(GetMonData(&gEnemyParty[i],MON_DATA_SPECIES)));
    }
}

void DoSpecialTrainerBattle(void)
{
    s32 i;

    gBattleScripting.specialTrainerBattleType = gSpecialVar_0x8004;
    switch (gSpecialVar_0x8004)
    {
    case SPECIAL_BATTLE_SECRET_BASE:
        for (i = 0; i < PARTY_SIZE; i++)
        {
            u16 itemBefore = GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM);
            SetMonData(&gSaveBlock1Ptr->playerParty[i], MON_DATA_HELD_ITEM, &itemBefore);
        }
        CreateTask(Task_StartBattleAfterTransition, 1);
        PlayMapChosenOrBattleBGM(0);
        BattleTransition_StartOnField(GetSpecialBattleTransition(B_TRANSITION_GROUP_SECRET_BASE));
        break;
    case SPECIAL_BATTLE_EREADER:
    #if FREE_BATTLE_TOWER_E_READER == FALSE
        ZeroEnemyPartyMons();
        for (i = 0; i < (int)ARRAY_COUNT(gSaveBlock2Ptr->frontier.ereaderTrainer.party); i++)
            CreateBattleTowerMon(&gEnemyParty[i], &gSaveBlock2Ptr->frontier.ereaderTrainer.party[i]);
        gBattleTypeFlags = BATTLE_TYPE_TRAINER | BATTLE_TYPE_EREADER_TRAINER;
        TRAINER_BATTLE_PARAM.opponentA = 0;
        CreateTask(Task_StartBattleAfterTransition, 1);
        PlayMapChosenOrBattleBGM(0);
        BattleTransition_StartOnField(GetSpecialBattleTransition(B_TRANSITION_GROUP_E_READER));
    #endif //FREE_BATTLE_TOWER_E_READER
        break;
    case SPECIAL_BATTLE_MULTI:
        if (gSpecialVar_0x8005 & MULTI_BATTLE_2_VS_WILD) // Player + AI against wild mon
        {
            gBattleTypeFlags = BATTLE_TYPE_DOUBLE | BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER;
        }
        else if (gSpecialVar_0x8005 & MULTI_BATTLE_2_VS_1) // Player + AI against one trainer
        {
            TRAINER_BATTLE_PARAM.opponentB = 0xFFFF;
            gBattleTypeFlags = BATTLE_TYPE_TRAINER | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER;
        }
        else // MULTI_BATTLE_2_VS_2
        {
            gBattleTypeFlags = BATTLE_TYPE_TRAINER | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER;
        }

        FillPartnerParty(gPartnerTrainerId);
        CreateTask(Task_StartBattleAfterTransition, 1);
        PlayMapChosenOrBattleBGM(0);
        if (gSpecialVar_0x8005 & MULTI_BATTLE_2_VS_WILD)
            BattleTransition_StartOnField(GetWildBattleTransition());
        else
            BattleTransition_StartOnField(GetTrainerBattleTransition());

        if (gSpecialVar_0x8005 & MULTI_BATTLE_CHOOSE_MONS) // Skip mons restoring(done in the script)
            gBattleScripting.specialTrainerBattleType = 0xFF;
        break;
    case SPECIAL_BATTLE_CUSTOM:
        // Used for custom battles set up in scripts
        switch (gSpecialVar_0x8005)
        {
        case TRAINER_BATTLE_SINGLE:
        case TRAINER_BATTLE_CONTINUE_SCRIPT:
        case TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC:
            gBattleTypeFlags = BATTLE_TYPE_IS_MASTER | BATTLE_TYPE_TRAINER | BATTLE_TYPE_CUSTOM;
            break;
        case TRAINER_BATTLE_DOUBLE:
        case TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE:
        case TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC:
            gBattleTypeFlags = BATTLE_TYPE_IS_MASTER | BATTLE_TYPE_TRAINER | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_CUSTOM;
            break;
        case TRAINER_BATTLE_TWO_TRAINERS_NO_INTRO:
            gBattleTypeFlags = BATTLE_TYPE_IS_MASTER | BATTLE_TYPE_TRAINER | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_CUSTOM;
            break;
        case TRAINER_BATTLE_MULTI_2_VS_2:
            gBattleTypeFlags = BATTLE_TYPE_IS_MASTER | BATTLE_TYPE_TRAINER | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_CUSTOM;
            break;
        case TRAINER_BATTLE_MULTI_2_VS_1:
            gBattleTypeFlags = BATTLE_TYPE_IS_MASTER | BATTLE_TYPE_TRAINER | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_CUSTOM;
            break;
        }

        FillCustomParty();

        gBattleScripting.specialTrainerBattleType = SPECIAL_BATTLE_CUSTOM;
        CreateTask(Task_StartBattleAfterTransition, 1);

        // Play music based on chosen battler as TRAINER_BATTLE_PARAM.opponentA can technically be player
        u16 tempTrainerId = TRAINER_BATTLE_PARAM.opponentA;
        TRAINER_BATTLE_PARAM.opponentA = gSpecialVar_0x8007;
        PlayMapChosenOrBattleBGM(0);
        TRAINER_BATTLE_PARAM.opponentA = tempTrainerId;
        
        BattleTransition_StartOnField(GetTrainerBattleTransition());
        break;
    }
}

void SetEReaderTrainerGfxId(void)
{
    SetBattleFacilityTrainerGfxId(TRAINER_EREADER, 0);
}

// This is a leftover debugging function that is used to populate the E-Reader
// trainer with the player's current data.
static void UNUSED FillEReaderTrainerWithPlayerData(void)
{
#if FREE_BATTLE_TOWER_E_READER == FALSE
    struct BattleTowerEReaderTrainer *ereaderTrainer = &gSaveBlock2Ptr->frontier.ereaderTrainer;
    s32 i, j;

    if (gSaveBlock2Ptr->playerGender != MALE)
    {
        ereaderTrainer->facilityClass = gTowerFemaleFacilityClasses[(gSaveBlock2Ptr->playerTrainerId[0] + gSaveBlock2Ptr->playerTrainerId[1]
                                                        + gSaveBlock2Ptr->playerTrainerId[2] + gSaveBlock2Ptr->playerTrainerId[3]) % ARRAY_COUNT(gTowerFemaleFacilityClasses)];
    }
    else
    {
        ereaderTrainer->facilityClass = gTowerMaleFacilityClasses[(gSaveBlock2Ptr->playerTrainerId[0] + gSaveBlock2Ptr->playerTrainerId[1]
                                                        + gSaveBlock2Ptr->playerTrainerId[2] + gSaveBlock2Ptr->playerTrainerId[3]) % ARRAY_COUNT(gTowerMaleFacilityClasses)];
    }

    CopyTrainerId(ereaderTrainer->trainerId, gSaveBlock2Ptr->playerTrainerId);
    StringCopy_PlayerName(ereaderTrainer->name, gSaveBlock2Ptr->playerName);

    ereaderTrainer->winStreak = 1;

    j = 7;
    for (i = 0; i < EASY_CHAT_BATTLE_WORDS_COUNT; i++)
    {
        ereaderTrainer->greeting[i] = gSaveBlock1Ptr->easyChatBattleStart[i];
        ereaderTrainer->farewellPlayerLost[i] = j;
        ereaderTrainer->farewellPlayerWon[i] = j + 6;
        j++;
    }

    for (i = 0; i < (int)ARRAY_COUNT(ereaderTrainer->party); i++)
        ConvertPokemonToBattleTowerPokemon(&gPlayerParty[i], &ereaderTrainer->party[i]);

    SetEReaderTrainerChecksum(ereaderTrainer);
#endif //FREE_BATTLE_TOWER_E_READER
}

u8 GetEreaderTrainerFrontSpriteId(void)
{
#if FREE_BATTLE_TOWER_E_READER == FALSE
    return gFacilityClassToPicIndex[gSaveBlock2Ptr->frontier.ereaderTrainer.facilityClass];
#else
    return 0;
#endif //FREE_BATTLE_TOWER_E_READER
}

enum TrainerClassID GetEreaderTrainerClassId(void)
{
#if FREE_BATTLE_TOWER_E_READER == FALSE
    return gFacilityClassToTrainerClass[gSaveBlock2Ptr->frontier.ereaderTrainer.facilityClass];
#else
    return 0;
#endif //FREE_BATTLE_TOWER_E_READER
}

void GetEreaderTrainerName(u8 *dst)
{
#if FREE_BATTLE_TOWER_E_READER == FALSE
    s32 i;

    for (i = 0; i < 5; i++)
        dst[i] = gSaveBlock2Ptr->frontier.ereaderTrainer.name[i];

    dst[i] = EOS;
#else
    dst[0] = EOS;
#endif //FREE_BATTLE_TOWER_E_READER
}

// Checks if the saved E-Reader trainer is valid.
void ValidateEReaderTrainer(void)
{
#if FREE_BATTLE_TOWER_E_READER == FALSE
    u32 i;
    u32 checksum;
    struct BattleTowerEReaderTrainer *ereaderTrainer;

    gSpecialVar_Result = FALSE;
    ereaderTrainer = &gSaveBlock2Ptr->frontier.ereaderTrainer;

    checksum = 0;
    for (i = 0; i < (sizeof(struct BattleTowerEReaderTrainer) - 4) / 4; i++) // - 4, because of the last field being the checksum itself.
        checksum |= ((u32 *)ereaderTrainer)[i];

    if (checksum == 0)
    {
        gSpecialVar_Result = TRUE;
        return;
    }

    checksum = 0;
    for (i = 0; i < (sizeof(struct BattleTowerEReaderTrainer) - 4) / 4; i++) // - 4, because of the last field being the checksum itself.
        checksum += ((u32 *)ereaderTrainer)[i];

    if (gSaveBlock2Ptr->frontier.ereaderTrainer.checksum != checksum)
    {
        ClearEReaderTrainer(&gSaveBlock2Ptr->frontier.ereaderTrainer);
        gSpecialVar_Result = TRUE;
    }
#else
    gSpecialVar_Result = FALSE;
#endif //FREE_BATTLE_TOWER_E_READER
}

#if FREE_BATTLE_TOWER_E_READER == FALSE
static void SetEReaderTrainerChecksum(struct BattleTowerEReaderTrainer *ereaderTrainer)
{
    s32 i;

    ereaderTrainer->checksum = 0;
    for (i = 0; i < (sizeof(struct BattleTowerEReaderTrainer) - 4) / 4; i++) // - 4, because of the last field being the checksum itself.
        ereaderTrainer->checksum += ((u32 *)ereaderTrainer)[i];
}
#endif //FREE_BATTLE_TOWER_E_READER

void ClearEReaderTrainer(struct BattleTowerEReaderTrainer *ereaderTrainer)
{
#if FREE_BATTLE_TOWER_E_READER == FALSE
    u32 i;

    for (i = 0; i < (sizeof(struct BattleTowerEReaderTrainer)) / 4; i++)
        ((u32 *)ereaderTrainer)[i] = 0;
#endif //FREE_BATTLE_TOWER_E_READER
}

void CopyEReaderTrainerGreeting(void)
{
#if FREE_BATTLE_TOWER_E_READER == FALSE
    FrontierSpeechToString(gSaveBlock2Ptr->frontier.ereaderTrainer.greeting);
#endif //FREE_BATTLE_TOWER_E_READER
}

static void CopyEReaderTrainerFarewellMessage(void)
{
#if FREE_BATTLE_TOWER_E_READER == FALSE
    if (gBattleOutcome == B_OUTCOME_DREW)
        gStringVar4[0] = EOS;
    else if (gBattleOutcome == B_OUTCOME_WON)
        FrontierSpeechToString(gSaveBlock2Ptr->frontier.ereaderTrainer.farewellPlayerWon);
    else
        FrontierSpeechToString(gSaveBlock2Ptr->frontier.ereaderTrainer.farewellPlayerLost);
#endif //FREE_BATTLE_TOWER_E_READER
}

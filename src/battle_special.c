#include "global.h"
#include "main.h"
#include "battle_special.h"
#include "battle.h"
#include "battle_frontier.h"
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

static void HandleSpecialTrainerBattleEnd(void);
static void Task_StartBattleAfterTransition(u8 taskId);
static void UNUSED FillEReaderTrainerWithPlayerData(void);
static void CopyEReaderTrainerFarewellMessage(void);

extern void CopyMon(void *dest, void *src, size_t size);
extern void FillTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount);

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
            enum Item itemBefore = GetMonData(&gSaveBlock1Ptr->playerParty[i], MON_DATA_HELD_ITEM);
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

void DoSpecialTrainerBattle(void)
{
    s32 i;

    gBattleScripting.specialTrainerBattleType = gSpecialVar_0x8004;
    switch (gSpecialVar_0x8004)
    {
    case SPECIAL_BATTLE_SECRET_BASE:
        for (i = 0; i < PARTY_SIZE; i++)
        {
            enum Item itemBefore = GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM);
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
    case SPECIAL_BATTLE_EMMIE:
        s32 j;
        if (FlagGet(FLAG_EMMIE_BATTLE_1) == TRUE)
        {
            (TRAINER_BATTLE_PARAM.opponentA = TRAINER_EMMIE_1);
        }
        else if (FlagGet(FLAG_EMMIE_BATTLE_2) == TRUE)
        {
            (TRAINER_BATTLE_PARAM.opponentA = TRAINER_EMMIE_2);
        }
        else if (FlagGet(FLAG_EMMIE_BATTLE_3) == TRUE)
        {
            (TRAINER_BATTLE_PARAM.opponentA = TRAINER_EMMIE_3);
        }

        FillTrainerParty(TRAINER_BATTLE_PARAM.opponentA, 0, 6);
        if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_EMMIE_1)
        {
            for (i = 0; i < 6; i++)
            {
                CopyMon(&gEnemyParty[i], &gPlayerParty[i], sizeof(*&gPlayerParty[i]));
                j = gExperienceTables[gSpeciesInfo[GetMonData(&gEnemyParty[i], MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)];
                if((j > GetMonData(&gEnemyParty[i], MON_DATA_EXP, NULL)))
                {
                    SetMonData(&gEnemyParty[i], MON_DATA_EXP, &j);
                    CalculateMonStats(&gEnemyParty[i]);
                }
                gBattleTypeFlags = (BATTLE_TYPE_TRAINER | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_BATTLE_TOWER);
            }
        }
        if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_EMMIE_2)
        {
            for (i = 3; i < 6; i++)
            {
                CopyMon(&gEnemyParty[i], &gPlayerParty[i], sizeof(*&gPlayerParty[i]));
                j = gExperienceTables[gSpeciesInfo[GetMonData(&gEnemyParty[i], MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)];
                if((j > GetMonData(&gEnemyParty[i], MON_DATA_EXP, NULL)))
                {
                    SetMonData(&gEnemyParty[i], MON_DATA_EXP, &j);
                    CalculateMonStats(&gEnemyParty[i]);
                }
                gBattleTypeFlags = (BATTLE_TYPE_TRAINER | BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_DOUBLE);
                (TRAINER_BATTLE_PARAM.opponentA = TRAINER_EMMIE_2);
                gPartnerTrainerId = TRAINER_PARTNER(PARTNER_SHELLY_JAGGED_PASS);
                FillPartnerParty(gPartnerTrainerId);
            }
        }
        if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_EMMIE_3)
        {
            for (i = 0; i < 6; i++)
            {
                CopyMon(&gEnemyParty[i], &gPlayerParty[i], sizeof(*&gPlayerParty[i]));
                j = gExperienceTables[gSpeciesInfo[GetMonData(&gEnemyParty[i], MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)];
                if((j > GetMonData(&gEnemyParty[i], MON_DATA_EXP, NULL)))
                {
                    SetMonData(&gEnemyParty[i], MON_DATA_EXP, &j);
                    CalculateMonStats(&gEnemyParty[i]);
                }
                gBattleTypeFlags = (BATTLE_TYPE_TRAINER | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_BATTLE_TOWER);
            }
        }
        if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_EMMIE_1)
        {
            for (i = 0; i < 6; i++)
            {
                j = GetMonData(&gEnemyParty[i], MON_DATA_MAX_HP, NULL);
                SetMonData(&gEnemyParty[i], MON_DATA_HP, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE1, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP1, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE2, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP2, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE3, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP3, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE4, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP4, &j);
                j = STATUS1_NONE;
                SetMonData(&gEnemyParty[i], MON_DATA_STATUS, &j);
            }
            
            j = NATURE_RELAXED;
            SetMonData(&gEnemyParty[0], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_SERIOUS;
            SetMonData(&gEnemyParty[1], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_BRAVE;
            SetMonData(&gEnemyParty[2], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_SASSY;
            SetMonData(&gEnemyParty[3], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_BASHFUL;
            SetMonData(&gEnemyParty[4], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_QUIET;
            SetMonData(&gEnemyParty[5], MON_DATA_HIDDEN_NATURE, &j);

            j = ITEM_FOCUS_SASH;
            SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, &j);
            j = ITEM_IRON_BALL;
            SetMonData(&gEnemyParty[1], MON_DATA_HELD_ITEM, &j);
            j = ITEM_EJECT_BUTTON;
            SetMonData(&gEnemyParty[2], MON_DATA_HELD_ITEM, &j);
            j = ITEM_LAGGING_TAIL;
            SetMonData(&gEnemyParty[3], MON_DATA_HELD_ITEM, &j);
            j = ITEM_SITRUS_BERRY;
            SetMonData(&gEnemyParty[4], MON_DATA_HELD_ITEM, &j);
            j = ITEM_STICKY_BARB;
            SetMonData(&gEnemyParty[5], MON_DATA_HELD_ITEM, &j);
        }
        else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_EMMIE_2)
        {
            j = SPECIES_TORNADUS;
                SetMonData(&gEnemyParty[0], MON_DATA_SPECIES, &j);
            j = SPECIES_THUNDURUS;
                SetMonData(&gEnemyParty[1], MON_DATA_SPECIES, &j);
            j = SPECIES_LANDORUS;
                SetMonData(&gEnemyParty[2], MON_DATA_SPECIES, &j);
            j = 0;
                SetMonData(&gEnemyParty[0], MON_DATA_ABILITY_NUM, &j);
            j = 0;
                SetMonData(&gEnemyParty[1], MON_DATA_ABILITY_NUM, &j);
            j = 0;
                SetMonData(&gEnemyParty[2], MON_DATA_ABILITY_NUM, &j);
            j = NATURE_SERIOUS;
                SetMonData(&gEnemyParty[0], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_TIMID;
                SetMonData(&gEnemyParty[1], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_BRAVE;
                SetMonData(&gEnemyParty[2], MON_DATA_HIDDEN_NATURE, &j);
            j = MOVE_TAILWIND;
                SetMonData(&gEnemyParty[0], MON_DATA_MOVE1, &j);
            j = MOVE_TAUNT;
                SetMonData(&gEnemyParty[1], MON_DATA_MOVE1, &j);
            j = MOVE_U_TURN;
                SetMonData(&gEnemyParty[2], MON_DATA_MOVE1, &j);

            for (i = 0; i < 6; i++)
            {
                j = GetMonData(&gEnemyParty[i], MON_DATA_MAX_HP, NULL);
                SetMonData(&gEnemyParty[i], MON_DATA_HP, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE1, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP1, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE2, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP2, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE3, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP3, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE4, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP4, &j);
                j = STATUS1_NONE;
                SetMonData(&gEnemyParty[i], MON_DATA_STATUS, &j);
            }
            j = NATURE_SASSY;
            SetMonData(&gEnemyParty[3], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_BASHFUL;
            SetMonData(&gEnemyParty[4], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_QUIET;
            SetMonData(&gEnemyParty[5], MON_DATA_HIDDEN_NATURE, &j);

            j = ITEM_LAGGING_TAIL;
            SetMonData(&gEnemyParty[3], MON_DATA_HELD_ITEM, &j);
            j = ITEM_SITRUS_BERRY;
            SetMonData(&gEnemyParty[4], MON_DATA_HELD_ITEM, &j);
            j = ITEM_STICKY_BARB;
            SetMonData(&gEnemyParty[5], MON_DATA_HELD_ITEM, &j);
        }
        else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_EMMIE_3)
        {
            for (i = 0; i < 6; i++)
            {
                j = GetMonData(&gEnemyParty[i], MON_DATA_MAX_HP, NULL);
                SetMonData(&gEnemyParty[i], MON_DATA_HP, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE1, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP1, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE2, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP2, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE3, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP3, &j);
                j = gMovesInfo[GetMonData(&gEnemyParty[i], MON_DATA_MOVE4, NULL)].pp;
                SetMonData(&gEnemyParty[i], MON_DATA_PP4, &j);
                j = STATUS1_NONE;
                SetMonData(&gEnemyParty[i], MON_DATA_STATUS, &j);
            }
            j = NATURE_TIMID;
            SetMonData(&gEnemyParty[0], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_LONELY;
            SetMonData(&gEnemyParty[1], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_NAIVE;
            SetMonData(&gEnemyParty[2], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_RASH;
            SetMonData(&gEnemyParty[3], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_BASHFUL;
            SetMonData(&gEnemyParty[4], MON_DATA_HIDDEN_NATURE, &j);
            j = NATURE_JOLLY;
            SetMonData(&gEnemyParty[5], MON_DATA_HIDDEN_NATURE, &j);

            j = ITEM_FOCUS_SASH;
            SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, &j);
            j = ITEM_NORMAL_GEM;
            SetMonData(&gEnemyParty[1], MON_DATA_HELD_ITEM, &j);
            j = ITEM_EJECT_PACK;
            SetMonData(&gEnemyParty[2], MON_DATA_HELD_ITEM, &j);
            j = ITEM_WEAKNESS_POLICY;
            SetMonData(&gEnemyParty[3], MON_DATA_HELD_ITEM, &j);
            j = ITEM_CHOICE_SPECS;
            SetMonData(&gEnemyParty[4], MON_DATA_HELD_ITEM, &j);
            j = ITEM_NORMAL_GEM;
            SetMonData(&gEnemyParty[5], MON_DATA_HELD_ITEM, &j);
        }
        
        CreateTask(Task_StartBattleAfterTransition, 1);
        if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_EMMIE_1)
        {
            PlayMapChosenOrBattleBGM(481);
        }
        if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_EMMIE_2)
        {
            PlayMapChosenOrBattleBGM(471);
        }
        if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_EMMIE_3)
        {
            PlayMapChosenOrBattleBGM(610);
        }
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

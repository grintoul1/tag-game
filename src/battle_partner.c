#include "global.h"
#include "main.h"
#include "battle.h"
#include "battle_partner.h"
#include "battle_frontier.h"
#include "party_menu.h"
#include "data.h"
#include "frontier_util.h"
#include "difficulty.h"
#include "malloc.h"
#include "string_util.h"
#include "trainer_util.h"
#include "text.h"

#include "constants/abilities.h"
#include "constants/battle_ai.h"

#if !TESTING
const struct Trainer gBattlePartners[DIFFICULTY_COUNT][PARTNER_COUNT] =
{
#include "data/battle_partners.h"
};
#endif

#define STEVEN_OTID     61226
#define SHELLY_OTID     61227
#define TABITHA_OTID    61228
#define EMMIE_OTID      61229

extern void CopyMon(void *dest, void *src, size_t size);
extern u16 VarGet(u16 id);

void FillPartnerParty(u16 trainerId)
{
    s32 i, j;
    u32 ivs, level;
    u16 monId;

    u8 trainerName[(PLAYER_NAME_LENGTH * 3) + 1];
    s32 monThreeLevel = 0, monFourLevel = 0, monFiveLevel = 0;
    enum DifficultyLevel difficulty = GetBattlePartnerDifficultyLevel(trainerId);
    u8 nickname[POKEMON_NAME_LENGTH * 2];
    SetFacilityPtrsGetLevel();
    ZeroPartyMons(gParties[B_TRAINER_PARTNER]);

    if (trainerId == TRAINER_PARTNER(PARTNER_EMMIE)
    || trainerId == TRAINER_PARTNER(PARTNER_SHELLY_MHO)
    || trainerId == TRAINER_PARTNER(PARTNER_SHELLY_MHO_BOSS)
    || trainerId == TRAINER_PARTNER(PARTNER_TABITHA)
    || trainerId == TRAINER_PARTNER(PARTNER_TABITHA_AHO_BOSS))
    {
        if (!IsStoryMulti())
        {
            for (i = 0; i < 3 && i < gBattlePartners[difficulty][trainerId - TRAINER_PARTNER(PARTNER_NONE)].partySize; i++)
            {
                if (GetMonData(&gParties[B_TRAINER_PLAYER][i+3], MON_DATA_SPECIES, NULL) != SPECIES_NONE)
                {
                    const struct TrainerMon *partyData = gBattlePartners[difficulty][trainerId - TRAINER_PARTNER(PARTNER_NONE)].party;

                    u32 personality = Random32();
                    if (partyData[i].gender == TRAINER_MON_MALE)
                        personality = (personality & 0xFFFFFF00) | GeneratePersonalityForGender(MON_MALE, partyData[i].species);
                    else if (partyData[i].gender == TRAINER_MON_FEMALE)
                        personality = (personality & 0xFFFFFF00) | GeneratePersonalityForGender(MON_FEMALE, partyData[i].species);
                    ModifyPersonalityForNature(&personality, GetMonData(&gParties[B_TRAINER_PLAYER][i+3], MON_DATA_HIDDEN_NATURE, NULL));
                    CopyMon(&gParties[B_TRAINER_PARTNER][i], &gParties[B_TRAINER_PLAYER][i+3], sizeof(gParties[B_TRAINER_PLAYER][i+3]));
                    
                    j = GetMonData(&gParties[B_TRAINER_PLAYER][i+3], MON_DATA_MAX_HP, NULL);
                    SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_HP, &j);
                    j = gMovesInfo[GetMonData(&gParties[B_TRAINER_PLAYER][i+3], MON_DATA_MOVE1, NULL)].pp;
                    SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_PP1, &j);
                    j = gMovesInfo[GetMonData(&gParties[B_TRAINER_PLAYER][i+3], MON_DATA_MOVE2, NULL)].pp;
                    SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_PP2, &j);
                    j = gMovesInfo[GetMonData(&gParties[B_TRAINER_PLAYER][i+3], MON_DATA_MOVE3, NULL)].pp;
                    SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_PP3, &j);
                    j = gMovesInfo[GetMonData(&gParties[B_TRAINER_PLAYER][i+3], MON_DATA_MOVE4, NULL)].pp;
                    SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_PP4, &j);
                    
                    // Currently included just to get rid of "variable not used" error...
                    if (GetMonData(&gParties[B_TRAINER_PLAYER][i+3], MON_DATA_NICKNAME, nickname) != SPECIES_NONE)
                    {
                        GetMonData(&gParties[B_TRAINER_PLAYER][i+3], MON_DATA_NICKNAME, nickname);
                        SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_NICKNAME, nickname);
                    }
                }
            }
            if((GetMonData(&gParties[B_TRAINER_PLAYER][3], MON_DATA_SPECIES, NULL) != SPECIES_NONE))
            {
                monThreeLevel = GetMonData(&gParties[B_TRAINER_PLAYER][3], MON_DATA_EXP, NULL);
                if((monThreeLevel < gExperienceTables[gSpeciesInfo[GetMonData(&gParties[B_TRAINER_PLAYER][3], MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)]))
                {
                    j = gExperienceTables[gSpeciesInfo[GetMonData(&gParties[B_TRAINER_PLAYER][3], MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)];
                    SetMonData(&gParties[B_TRAINER_PARTNER][0], MON_DATA_EXP, &j);
                    CalculateMonStats(&gParties[B_TRAINER_PARTNER][0]);
                }
            }
            if((GetMonData(&gParties[B_TRAINER_PLAYER][4], MON_DATA_SPECIES, NULL) != SPECIES_NONE))
            {
                monFourLevel = GetMonData(&gParties[B_TRAINER_PLAYER][4], MON_DATA_EXP, NULL);
                if((monFourLevel < gExperienceTables[gSpeciesInfo[GetMonData(&gParties[B_TRAINER_PLAYER][4], MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)]))
                {
                    j = gExperienceTables[gSpeciesInfo[GetMonData(&gParties[B_TRAINER_PLAYER][4], MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)];
                    SetMonData(&gParties[B_TRAINER_PARTNER][1], MON_DATA_EXP, &j);
                    CalculateMonStats(&gParties[B_TRAINER_PARTNER][1]);
                }
            }
            if((GetMonData(&gParties[B_TRAINER_PLAYER][5], MON_DATA_SPECIES, NULL) != SPECIES_NONE))
            {
                monFiveLevel = GetMonData(&gParties[B_TRAINER_PLAYER][5], MON_DATA_EXP, NULL);
                if((monFiveLevel < gExperienceTables[gSpeciesInfo[GetMonData(&gParties[B_TRAINER_PLAYER][5], MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)]))
                {
                    j = gExperienceTables[gSpeciesInfo[GetMonData(&gParties[B_TRAINER_PLAYER][5], MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)];
                    SetMonData(&gParties[B_TRAINER_PARTNER][2], MON_DATA_EXP, &j);
                    CalculateMonStats(&gParties[B_TRAINER_PARTNER][2]);
                }
            }
        }
        else
        {
            CpuFill32(0, gParties[B_TRAINER_PARTNER], sizeof gParties[B_TRAINER_PARTNER]);
            // copy the selected Pokémon according to the order.
            for (i = 0; i < PARTY_SIZE; i++)
            {
                if (gSelectedOrderFromParty[i]) // as long as the order keeps going (did the player select 1 mon? 2? 3?), do not stop
                    CopyMon(&gParties[B_TRAINER_PARTNER][i], &gEliteFourPool[gSelectedOrderFromParty[i] - 1], sizeof(*&gEliteFourPool[gSelectedOrderFromParty[i] - 1]));
            }
        }
    }
    else if (trainerId > TRAINER_PARTNER(PARTNER_NONE))
    {
        s32 lastIndex = AreMultiPartiesFullTeams() ? PARTY_SIZE : MULTI_PARTY_SIZE;

        const struct Trainer *partner = GetTrainerStructFromId(trainerId);
        struct TrainerGenerator partnerGen;
        MakePartnerGenerator(&partnerGen, partner);
        switch (trainerId)
        {
        case PARTNER_STEVEN:
        case PARTNER_STEVEN_TWELVE:
        case PARTNER_STEVEN_B2B:
            partnerGen.otID = OTID_STRUCT_PRESET(STEVEN_OTID);
            break;
        }
        for (i = 0; i < lastIndex && i < partner->partySize; i++)
        {
            GenerateMonFromTrainerMon(&gParties[B_TRAINER_PARTNER][i], &partner->party[i], &partnerGen);
        }
    }
    else if (trainerId == TRAINER_EREADER)
    {
        // Scrapped, lol.
        trainerName[0] = gGameLanguage;
    }
    else if (trainerId < FRONTIER_TRAINERS_COUNT)
    {
        level = SetFacilityPtrsGetLevel();
        ivs = GetFrontierTrainerFixedIvs(trainerId);
        u32 otID = Random32();
        for (i = 0; i < FRONTIER_MULTI_PARTY_SIZE; i++)
        {
            monId = gSaveBlock2Ptr->frontier.trainerIds[i + 18];
            CreateFacilityMon(&gFacilityTrainerMons[monId], level, ivs, otID, 0, &gParties[B_TRAINER_PARTNER][i]);
            for (j = 0; j < PLAYER_NAME_LENGTH + 1; j++)
                trainerName[j] = gFacilityTrainers[trainerId].trainerName[j];
            SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_OT_NAME, &trainerName);
            j = IsFrontierTrainerFemale(trainerId);
            SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_OT_GENDER, &j);
        }
    }
    else if (trainerId < TRAINER_RECORD_MIXING_APPRENTICE)
    {
        trainerId -= TRAINER_RECORD_MIXING_FRIEND;
        for (i = 0; i < FRONTIER_MULTI_PARTY_SIZE; i++)
        {
            struct EmeraldBattleTowerRecord *record = &gSaveBlock2Ptr->frontier.towerRecords[trainerId];
            struct BattleTowerPokemon monData = record->party[gSaveBlock2Ptr->frontier.trainerIds[18 + i]];
            StringCopy(trainerName, record->name);
            if (record->language == LANGUAGE_JAPANESE)
            {
                if (monData.nickname[0] != EXT_CTRL_CODE_BEGIN || monData.nickname[1] != EXT_CTRL_CODE_JPN)
                {
                    monData.nickname[5] = EOS;
                    ConvertInternationalString(monData.nickname, LANGUAGE_JAPANESE);
                }
            }
            else
            {
                if (monData.nickname[0] == EXT_CTRL_CODE_BEGIN && monData.nickname[1] == EXT_CTRL_CODE_JPN)
                    trainerName[5] = EOS;
            }
            CreateBattleTowerMon_HandleLevel(&gParties[B_TRAINER_PARTNER][i], &monData, TRUE);
            SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_OT_NAME, trainerName);
            j = IsFrontierTrainerFemale(trainerId + TRAINER_RECORD_MIXING_FRIEND);
            SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_OT_GENDER, &j);
        }
    }
    else
    {
        trainerId -= TRAINER_RECORD_MIXING_APPRENTICE;
        for (i = 0; i < FRONTIER_MULTI_PARTY_SIZE; i++)
        {
            CreateApprenticeMon(&gParties[B_TRAINER_PARTNER][i], &gSaveBlock2Ptr->apprentices[trainerId], gSaveBlock2Ptr->frontier.trainerIds[18 + i]);
            j = IsFrontierTrainerFemale(trainerId + TRAINER_RECORD_MIXING_APPRENTICE);
            SetMonData(&gParties[B_TRAINER_PARTNER][i], MON_DATA_OT_GENDER, &j);
        }
    }
}

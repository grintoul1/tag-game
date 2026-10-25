#include "global.h"
#include "main.h"
#include "battle.h"
#include "battle_partner.h"
#include "battle_frontier.h"
#include "party_menu.h"
#include "battle_tower.h"
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
extern bool8 FlagGet(u16 id);
extern u16 VarGet(u16 id);
static void GetThreeMonsForEmmie(void);

void FillPartnerParty(u16 trainerId)
{
    s32 i, j, hp;

    u8 trainerName[(PLAYER_NAME_LENGTH * 3) + 1];
    s32 monLevel = 0;
    enum DifficultyLevel difficulty = GetBattlePartnerDifficultyLevel(trainerId);
    u8 nickname[POKEMON_NAME_LENGTH * 2];
    SetFacilityPtrsGetLevel();
    ZeroPartyMons(gParties[B_TRAINER_PARTNER]);

    if (FlagGet(FLAG_GAUNTLET))
    {
        GetThreeMonsForEmmie();

        for (i = 0; i < MULTI_PARTY_SIZE; i++)
        {
            struct Pokemon *playerMon = &gParties[B_TRAINER_PLAYER][gSelectedOrderFromParty[i + MULTI_PARTY_SIZE] - 1];
            struct Pokemon *partnerMon = &gParties[B_TRAINER_PARTNER][i];

            if (GetMonData(playerMon, MON_DATA_SPECIES) != SPECIES_NONE)
            {
                CopyMon(partnerMon, playerMon, sizeof(*playerMon));
                
                j = GetMonData(playerMon, MON_DATA_MAX_HP);
                hp = GetMonData(playerMon, MON_DATA_HP);

                // Don't revive a fainted player mon that is in the partner's party
                if (hp)
                    SetMonData(partnerMon, MON_DATA_HP, &j);

                j = gMovesInfo[GetMonData(playerMon, MON_DATA_MOVE1)].pp;
                SetMonData(partnerMon, MON_DATA_PP1, &j);
                j = gMovesInfo[GetMonData(playerMon, MON_DATA_MOVE2)].pp;
                SetMonData(partnerMon, MON_DATA_PP2, &j);
                j = gMovesInfo[GetMonData(playerMon, MON_DATA_MOVE3)].pp;
                SetMonData(partnerMon, MON_DATA_PP3, &j);
                j = gMovesInfo[GetMonData(playerMon, MON_DATA_MOVE4)].pp;
                SetMonData(partnerMon, MON_DATA_PP4, &j);
                
                // Currently included just to get rid of "variable not used" error...
                if (GetMonData(playerMon, MON_DATA_NICKNAME, nickname) != SPECIES_NONE)
                {
                    GetMonData(playerMon, MON_DATA_NICKNAME, nickname);
                    SetMonData(partnerMon, MON_DATA_NICKNAME, nickname);
                }

                monLevel = GetMonData(playerMon, MON_DATA_EXP);

                if(monLevel < gExperienceTables[gSpeciesInfo[GetMonData(playerMon, MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)])
                {
                    j = gExperienceTables[gSpeciesInfo[GetMonData(playerMon, MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)];
                    SetMonData(partnerMon, MON_DATA_EXP, &j);
                    CalculateMonStats(partnerMon);
                }
            }
        }
    }
    else
    {
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
                    struct Pokemon *playerMon = &gParties[B_TRAINER_PLAYER][i+3];
                    struct Pokemon *partnerMon = &gParties[B_TRAINER_PARTNER][i];

                    if (GetMonData(playerMon, MON_DATA_SPECIES) != SPECIES_NONE)
                    {
                        CopyMon(partnerMon, playerMon, sizeof(*playerMon));
                        
                        j = GetMonData(partnerMon, MON_DATA_MAX_HP);
                        SetMonData(partnerMon, MON_DATA_HP, &j);
                        j = gMovesInfo[GetMonData(playerMon, MON_DATA_MOVE1)].pp;
                        SetMonData(partnerMon, MON_DATA_PP1, &j);
                        j = gMovesInfo[GetMonData(playerMon, MON_DATA_MOVE2)].pp;
                        SetMonData(partnerMon, MON_DATA_PP2, &j);
                        j = gMovesInfo[GetMonData(playerMon, MON_DATA_MOVE3)].pp;
                        SetMonData(partnerMon, MON_DATA_PP3, &j);
                        j = gMovesInfo[GetMonData(playerMon, MON_DATA_MOVE4)].pp;
                        SetMonData(partnerMon, MON_DATA_PP4, &j);
                        
                        // Currently included just to get rid of "variable not used" error...
                        if (GetMonData(playerMon, MON_DATA_NICKNAME, nickname) != SPECIES_NONE)
                        {
                            GetMonData(playerMon, MON_DATA_NICKNAME, nickname);
                            SetMonData(partnerMon, MON_DATA_NICKNAME, nickname);
                        }

                        monLevel = GetMonData(playerMon, MON_DATA_EXP);

                        if(monLevel < gExperienceTables[gSpeciesInfo[GetMonData(playerMon, MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)])
                        {
                            j = gExperienceTables[gSpeciesInfo[GetMonData(playerMon, MON_DATA_SPECIES)].growthRate][VarGet(VAR_LEVEL_CAP)];
                            SetMonData(partnerMon, MON_DATA_EXP, &j);
                            CalculateMonStats(partnerMon);
                        }
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
            struct FacilityMonGenerator generator = GetFacilityMonGenerator(trainerId);
            generator.partySize = FRONTIER_MULTI_PARTY_SIZE;
            for (i = 0; i < FRONTIER_MULTI_PARTY_SIZE; i++)
            {
                CreateFacilityMon(&gParties[B_TRAINER_PARTNER][i], &generator, gSaveBlock2Ptr->frontier.trainerIds[i + 18]);
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
}

static void GetThreeMonsForEmmie(void)
{
    u32 i, firstEligible, hp = 1, count = 0;

    ClearSelectedPartyOrder();

    for (firstEligible = MULTI_PARTY_SIZE; firstEligible < PARTY_SIZE; firstEligible++)
    {
        if (GetMonData(&gParties[B_TRAINER_PLAYER][firstEligible], MON_DATA_HP) != 0
         && GetMonData(&gParties[B_TRAINER_PLAYER][firstEligible], MON_DATA_IS_EGG) == FALSE
         && GetMonData(&gParties[B_TRAINER_PLAYER][firstEligible], MON_DATA_SPECIES) != SPECIES_NONE)
        {
            gSelectedOrderFromParty[MULTI_PARTY_SIZE] = (firstEligible + 1);
            count++;
            DebugPrintf("partner firstEligible %d count %d", firstEligible, count);
            break;
        }
    }

    // If player slots have no valid mons...
    assertf(count, "No valid mons for partner")
    {
        SetMonData(&gParties[B_TRAINER_PLAYER][MULTI_PARTY_SIZE], MON_DATA_HP, &hp);

        for (i = MULTI_PARTY_SIZE; i < PARTY_SIZE; i++)
        {
            gSelectedOrderFromParty[count + MULTI_PARTY_SIZE] = (i + 1);
            count++;
        }

        return;
    }

    DebugPrintf("found eligible for partner");

    for (i = MULTI_PARTY_SIZE; i < PARTY_SIZE; i++)
    {
        if (i == firstEligible)
            {DebugPrintf("skipping firstEligible %d", firstEligible); continue; }

        gSelectedOrderFromParty[count + MULTI_PARTY_SIZE] = (i + 1);
        count++;
        DebugPrintf("setting %d count %d", i, count);

        if (count == 3)
            break;
    }
}

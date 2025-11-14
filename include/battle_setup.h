#ifndef GUARD_BATTLE_SETUP_H
#define GUARD_BATTLE_SETUP_H

#include "battle_transition.h"
#include "gym_leader_rematch.h"

#define REMATCHES_COUNT 5

struct RematchTrainer
{
    u16 trainerIds[REMATCHES_COUNT];
    u16 mapGroup;
    u16 mapNum;
};

/*
the layout of the first byte can be confusing here
isDoubleBattle is the least lsb. msb is in the mode.
*/
typedef union PACKED TrainerBattleParameter
{
    struct PACKED _TrainerBattleParameter
    {
        u8 isDoubleBattle:1;
        u8 isRematch:1;
        u8 playMusicBattler1:1;
        u8 playMusicBattler3:1;
        u8 mode:4;
        u8 objEventLocalIdBattler1;
        u16 battler1;
        u8 *introTextBattler1;
        u8 *defeatTextBattler1;
        u8 *battleScriptRetAddrBattler1;
        u8 objEventLocalIdBattler3;
        u16 battler3;
        u8 *introTextBattler3;
        u8 *defeatTextBattler3;
        u8 *battleScriptRetAddrBattler3;
        u8 *victoryText;
        u8 *cannotBattleText;
        u16 battler0;
        u8 *defeatTextBattler0;
        u16 battler2;
        u8 *defeatTextBattler2;
    } params;
    u8 data[sizeof(struct _TrainerBattleParameter)];
} TrainerBattleParameter;


extern const struct RematchTrainer gRematchTable[REMATCH_TABLE_ENTRIES];

extern TrainerBattleParameter gTrainerBattleParameter;
extern u16 gPartnerTrainerId;

#define TRAINER_BATTLE_PARAM gTrainerBattleParameter.params

void BattleSetup_StartWildBattle(void);
void BattleSetup_StartDoubleWildBattle(void);
void BattleSetup_StartBattlePikeWildBattle(void);
void BattleSetup_StartRoamerBattle(void);
void StartWallyTutorialBattle(void);
void BattleSetup_StartScriptedWildBattle(void);
void BattleSetup_StartScriptedDoubleWildBattle(void);
void BattleSetup_StartLatiBattle(void);
void BattleSetup_StartLegendaryBattle(void);
void StartGroudonKyogreBattle(void);
void StartRegiBattle(void);
enum BattleEnvironments BattleSetup_GetEnvironmentId(void);
enum BattleTransition GetWildBattleTransition(void);
enum BattleTransition GetTrainerBattleTransition(void);
enum BattleTransition GetSpecialBattleTransition(enum BattleTransitionGroup id);
void ChooseStarter(void);
void ResetTrainerOpponentIds(void);
void SetMapVarsToTrainerA(void);
void SetMapVarsToTrainerB(void);
const u8 *BattleSetup_ConfigureTrainerBattle(const u8 *data);
void ConfigureAndSetUpOneTrainerBattle(u8 trainerObjEventId, const u8 *trainerScript);
void ConfigureTwoTrainersBattle(u8 trainerObjEventId, const u8 *trainerScript);
void SetUpTwoTrainersBattle(void);
bool32 GetTrainerFlagFromScriptPointer(const u8 *data);
bool32 GetRematchFromScriptPointer(const u8 *data);
void SetTrainerFacingDirection(void);
u8 GetTrainerBattleMode(void);
bool8 GetTrainerFlag(void);
bool8 HasTrainerBeenFought(u16 trainerId);
void SetTrainerFlag(u16 trainerId);
void ClearTrainerFlag(u16 trainerId);
void BattleSetup_StartTrainerBattle(void);
void BattleSetup_StartRematchBattle(void);
void ShowTrainerIntroSpeech(void);
const u8 *BattleSetup_GetScriptAddrAfterBattle(void);
const u8 *BattleSetup_GetTrainerPostBattleScript(void);
void ShowTrainerCantBattleSpeech(void);
void PlayTrainerEncounterMusic(void);
const u8 *GetTrainerALoseText(void);
const u8 *GetTrainerBLoseText(void);
const u8 *GetTrainerWonSpeech(void);
void UpdateRematchIfDefeated(s32 rematchTableId);
void ClearCurrentTrainerWantRematchVsSeeker(void);
void IncrementRematchStepCounter(void);
void TryUpdateRandomTrainerRematches(u16 mapGroup, u16 mapNum);
bool32 DoesSomeoneWantRematchIn(u16 mapGroup, u16 mapNum);
bool32 IsRematchTrainerIn(u16 mapGroup, u16 mapNum);
u16 GetLastBeatenRematchTrainerId(u16 trainerId);
bool8 ShouldTryRematchBattle(void);
bool8 ShouldTryRematchBattleForTrainerId(u16 trainerId);
bool8 IsTrainerReadyForRematch(void);
void ShouldTryGetTrainerScript(void);
u16 CountBattledRematchTeams(u16 trainerId);
void TrainerBattleLoadArgs(const u8 *data);
void CustomTrainerBattleLoadArgs(const u8 *data);
void TrainerBattleLoadArgsBattler1(const u8 *data);
void TrainerBattleLoadArgsBattler3(const u8 *data);
void TrainerBattleLoadArgsSecondTrainer(const u8 *data);

void DoStandardWildBattle_Debug(void);
void BattleSetup_StartTrainerBattle_Debug(void);
s32 TrainerIdToRematchTableId(const struct RematchTrainer *table, u16 trainerId);
s32 FirstBattleTrainerIdToRematchTableId(const struct RematchTrainer *table, u16 trainerId);
u16 GetRematchTrainerIdFromTable(const struct RematchTrainer *table, u16 firstBattleTrainerId);

#endif // GUARD_BATTLE_SETUP_H

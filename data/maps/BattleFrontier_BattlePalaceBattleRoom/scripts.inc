# 1 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
.set LOCALID_OPPONENT, 2
# 3 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
.set LOCALID_ATTENDANT, 3
# 4 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
.set LOCALID_DUSCLOPS, 4
# 5 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
.set LOCALID_AZURILL, 5
# 6 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 7 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_MapScripts::
# 8 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePalaceBattleRoom_OnTransition
# 9 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceBattleRoom_OnFrame
# 10 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceBattleRoom_OnWarp
# 11 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 13 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	@ On this map the player (OBJ_EVENT_ID_PLAYER) is hidden
# 14 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	@ The player is represented instead by LOCALID_PLAYER, which has the gfx id VAR_OBJ_GFX_ID_0
# 15 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	@ The opponent is represented by LOCALID_OPPONENT, which has the gfx id VAR_OBJ_GFX_ID_1
# 16 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 17 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_OnTransition:
# 18 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_settrainers
# 19 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx
# 20 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 21 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 22 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx::
# 23 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	checkplayergender
# 24 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxMale
# 25 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxFemale
# 26 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 27 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 28 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
@ The opponent's gfx are set to the players by default
# 29 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxMale::
# 30 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 31 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 32 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 33 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 34 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxFemale::
# 35 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 36 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 37 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 38 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 39 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_OnFrame:
# 40 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom
# 41 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.2byte 0
# 42 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 43 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom::
# 44 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 45 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 46 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_BeginChallenge
# 47 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerReturnToChallenge
# 48 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 49 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 50 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 51 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 52 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 53 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 54 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BeginChallenge::
# 55 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerEnterRoom
# 56 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 57 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_NextOpponentEnter::
# 58 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	tower_setopponent
# 59 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addobject LOCALID_OPPONENT
# 60 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentEnter
# 61 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 62 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_getopponentintro
# 63 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 65 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 66 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent
# 68 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost::
# 69 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 70 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby
# 71 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 72 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent::
# 73 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 74 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 75 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 76 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 77 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 78 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 79 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentExit
# 80 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 81 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	removeobject LOCALID_OPPONENT
# 82 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 83 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 84 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 85 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons, MSGBOX_DEFAULT
# 86 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special LoadPlayerParty
# 87 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special SavePlayerParty
# 88 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 89 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 90 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 91 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 92 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent::
# 93 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 94 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 95 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext
# 96 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 97 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor2ndOpponent
# 98 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor3rdOpponent
# 99 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 3, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor4thOpponent
# 100 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 4, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor5thOpponent
# 101 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 5, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor6thOpponent
# 102 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 6, BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor7thOpponent
# 103 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 104 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord
# 105 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 106 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge
# 108 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle
# 109 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 110 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 111 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 112 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 113 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord::
# 114 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 115 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge
# 117 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 118 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 119 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 120 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 121 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle::
# 122 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_RecordLastMatch
# 123 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 124 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 125 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 126 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 127 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_RecordBattle
# 128 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 129 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 130 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_RecordBattle::
# 131 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 132 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 133 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 134 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge::
# 135 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 136 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 137 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 138 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattlePalaceBattleRoom_EventScript_PauseChallenge
# 139 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 140 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 141 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge::
# 142 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge
# 143 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 144 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 145 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 147 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
# 148 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 149 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 150 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge::
# 151 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 152 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 153 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 154 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_NextOpponentEnter
# 155 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 156 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon::
# 157 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 158 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby
# 159 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 160 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_PauseChallenge::
# 161 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SavingData
# 162 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 163 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_save CHALLENGE_STATUS_PAUSED
# 164 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playse SE_SAVE
# 165 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitse
# 166 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 167 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_reset
# 168 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 169 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 170 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext::
# 171 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
# 172 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_ChallengingPalaceMaven, MSGBOX_DEFAULT
# 173 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 174 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven::
# 175 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_ReadyForPalaceMaven
# 176 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 177 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 178 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord
# 179 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 180 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser
# 182 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle
# 183 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 184 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 185 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
# 186 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 187 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord::
# 188 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 189 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser
# 191 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 192 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 193 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
# 194 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 195 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser::
# 196 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 197 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_AnnounceArrivalOfSpenser, MSGBOX_DEFAULT
# 198 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 199 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 200 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 201 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_OPPONENT, 15, 1
# 202 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addobject LOCALID_OPPONENT
# 203 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	hideobjectat LOCALID_OPPONENT, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 204 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxy LOCALID_OPPONENT, 13, 1
# 205 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_OPPONENT, 13, 1
# 206 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_DUSCLOPS, BattleFrontier_BattlePalaceBattleRoom_Movement_DusclopsEnter
# 207 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_AZURILL, BattleFrontier_BattlePalaceBattleRoom_Movement_AzurillEnter
# 208 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_SpenserEnter
# 209 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 210 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 211 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold
# 212 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver
# 213 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold
# 214 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 215 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver
# 216 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserFirstIntro, MSGBOX_DEFAULT
# 217 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 218 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver::
# 219 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_ProveYourBondWithMons, MSGBOX_DEFAULT
# 220 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 221 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver
# 222 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
# 223 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 224 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver::
# 225 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_incrementstreak
# 226 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getsymbols
# 227 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 228 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserPostSilverBattle, MSGBOX_DEFAULT
# 229 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 230 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 231 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetsSeeFrontierPass, MSGBOX_DEFAULT
# 232 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 233 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_ReceivedSpiritsSymbol
# 234 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 235 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 236 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_givesymbol
# 237 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, Common_Movement_WalkInPlaceLeft
# 238 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 239 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 240 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, Common_Movement_WalkInPlaceFasterRight
# 241 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 242 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserAwaitNextTime, MSGBOX_DEFAULT
# 243 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 244 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 245 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold::
# 246 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 247 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold
# 248 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserThisTimeWontHoldBack, MSGBOX_DEFAULT
# 249 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 250 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold::
# 251 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_Kaaah, MSGBOX_DEFAULT
# 252 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 253 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold
# 254 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
# 255 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 256 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold::
# 257 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_incrementstreak
# 258 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getsymbols
# 259 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 260 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserYourTeamIsAdmirable, MSGBOX_DEFAULT
# 261 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 262 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 263 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_HurryWithFrontierPass, MSGBOX_DEFAULT
# 264 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 265 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SpiritsSymbolTookGoldenShine
# 266 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 267 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 268 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_givesymbol
# 269 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, Common_Movement_WalkInPlaceLeft
# 270 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 271 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 272 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, Common_Movement_WalkInPlaceFasterRight
# 273 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 274 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserComeSeeMeAgain, MSGBOX_DEFAULT
# 275 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 276 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 277 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle::
# 278 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 279 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 280 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 281 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 282 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PALACE
# 283 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 284 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special DoSpecialTrainerBattle
# 285 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
# 286 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_restorehelditems
# 287 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 288 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_resetsketch
# 289 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 290 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 291 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_OnWarp:
# 292 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_SetUpRoomObjects
# 293 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.2byte 0
# 294 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 295 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetUpRoomObjects::
# 296 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 297 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx
# 298 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 299 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 300 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	removeobject LOCALID_OPPONENT
# 301 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_DUSCLOPS, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 302 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_AZURILL, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 303 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 304 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 305 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor2ndOpponent::
# 306 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent
# 307 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 308 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 309 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 310 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor3rdOpponent::
# 311 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent
# 312 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 313 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 314 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 315 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor4thOpponent::
# 316 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor4thOpponent
# 317 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 318 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 319 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 320 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor5thOpponent::
# 321 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor5thOpponent
# 322 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 323 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 324 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 325 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor6thOpponent::
# 326 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor6thOpponent
# 327 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 328 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 329 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 330 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor7thOpponent::
# 331 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor7thOpponent
# 332 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 333 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 334 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 335 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible:
# 336 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_invisible
# 337 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 338 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 339 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerEnterRoom:
# 340 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 341 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 342 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 343 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 344 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 345 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight:
# 346 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_right
# 347 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 348 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 349 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp:
# 350 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_up
# 351 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 352 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerReturnToChallenge:
# 354 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 355 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 356 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 357 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 358 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 359 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 360 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 361 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentEnter:
# 362 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 363 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 364 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 365 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 366 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 367 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 368 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 369 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentExit:
# 370 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 371 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 372 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 373 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 374 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 375 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 376 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown:
# 377 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_down
# 378 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 379 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 380 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter1:
# 381 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 382 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 383 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 384 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 385 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 386 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 387 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter2:
# 388 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 389 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 390 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 391 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 392 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter3:
# 393 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 394 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 395 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 396 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 397 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 398 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 399 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby::
# 400 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 401 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyDoubles
# 402 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 5, 7
# 403 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
# 404 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 405 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 406 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyDoubles::
# 407 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 19, 7
# 408 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
# 409 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 410 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 411 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_DusclopsEnter:
# 412 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 413 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 414 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 415 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 416 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_right
# 417 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 418 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 419 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 420 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 421 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_AzurillEnter:
# 422 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 423 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 424 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_right
# 425 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 426 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 427 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 428 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 429 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 430 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 431 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 432 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 433 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 434 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_SpenserEnter:
# 435 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 436 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 437 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 438 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 439 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 440 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 441 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 442 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 443 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 444 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 445 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 446 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 447 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 448 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 449 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 450 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons:
# 451 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Excellent…\n"
# 452 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Let me restore your POKéMON.$"
# 453 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 454 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent:
# 455 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 2nd opponent is next.\n"
# 456 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 457 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 458 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent:
# 459 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 3rd opponent is next.\n"
# 460 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 461 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 462 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor4thOpponent:
# 463 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 4th opponent is next.\n"
# 464 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 465 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 466 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor5thOpponent:
# 467 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 5th opponent is next.\n"
# 468 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 469 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 470 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor6thOpponent:
# 471 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 6th opponent is next.\n"
# 472 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 473 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 474 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor7thOpponent:
# 475 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 7th opponent is next.\n"
# 476 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 477 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 478 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame:
# 479 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Would you like to save and quit\n"
# 480 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "the game?$"
# 481 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 482 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge:
# 483 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you wish to quit your challenge?$"
# 484 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SavingData:
# 486 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Saving the data.\n"
# 487 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Have patience…$"
# 488 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 489 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_RecordLastMatch:
# 490 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you wish to record your latest\n"
# 491 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "match on your FRONTIER PASS?$"
# 492 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 493 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ChallengingPalaceMaven:
# 494 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "And now…\p"
# 495 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "By winning consistently, you have\n"
# 496 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "earned the privilege of challenging\l"
# 497 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "our master, the PALACE MAVEN…$"
# 498 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 499 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ReadyForPalaceMaven:
# 500 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "I shall send for the PALACE MAVEN.\n"
# 501 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 502 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 503 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_AnnounceArrivalOfSpenser:
# 504 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Let great fanfare announce the arrival\n"
# 505 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "of the PALACE MAVEN, SPENSER!$"
# 506 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 507 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserFirstIntro:
# 508 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: My physical being is with\n"
# 509 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "POKéMON always!\p"
# 510 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My heart beats as one with\n"
# 511 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "POKéMON always!\p"
# 512 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Young one of a TRAINER!\n"
# 513 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you believe in your POKéMON?\p"
# 514 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Can you believe them through\n"
# 515 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "and through?\p"
# 516 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "If your bonds of trust are frail,\n"
# 517 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "you will never beat my brethren!$"
# 518 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 519 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ProveYourBondWithMons:
# 520 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The bond you share with your POKéMON!\n"
# 521 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Prove it to me here!$"
# 522 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 523 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserPostSilverBattle:
# 524 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\p"
# 525 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Hah, you never fell for my bluster!\n"
# 526 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Sorry for trying that stunt!\p"
# 527 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Here!\n"
# 528 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Bring me the thing!$"
# 529 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 530 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_LetsSeeFrontierPass:
# 531 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My, my, if only you could maintain that\n"
# 532 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "facade of distinguished authority…\p"
# 533 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Here!\n"
# 534 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Let's see your FRONTIER PASS!$"
# 535 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 536 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ReceivedSpiritsSymbol:
# 537 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The Spirits Symbol was embossed on\n"
# 538 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "the FRONTIER PASS!$"
# 539 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 540 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserAwaitNextTime:
# 541 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Your POKéMON's eyes are \n"
# 542 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "truly clear and unclouded.\p"
# 543 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "I will eagerly await the next\n"
# 544 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "opportunity to see you.$"
# 545 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 546 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserThisTimeWontHoldBack:
# 547 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\n"
# 548 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "You've battled your way up again?\p"
# 549 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "You must have developed a truly\n"
# 550 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "formidable bond with your POKéMON.\p"
# 551 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "So be it!\p"
# 552 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "This time, I won't bluster or hold back.\n"
# 553 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "This time, there's no fooling around.\p"
# 554 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Ready now?\n"
# 555 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Prepare to lose!$"
# 556 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 557 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_Kaaah:
# 558 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "… … …Kaaah!$"
# 559 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 560 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserYourTeamIsAdmirable:
# 561 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Well, that was some display!\n"
# 562 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Even fully unleashed, my brethren\l"
# 563 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "could not overpower you.\p"
# 564 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Your team spirit is truly admirable!\p"
# 565 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Here!\n"
# 566 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Bring me that thing, will you?$"
# 567 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 568 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_HurryWithFrontierPass:
# 569 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My, my, if only you could maintain\n"
# 570 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "a certain level of decorum…\p"
# 571 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Gaaah, here!\n"
# 572 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Hurry with that FRONTIER PASS, you!$"
# 573 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 574 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpiritsSymbolTookGoldenShine:
# 575 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The Spirits Symbol took on\n"
# 576 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 577 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 578 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserComeSeeMeAgain:
# 579 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\p"
# 580 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Come see me time and again!\n"
# 581 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My brethren and I will be waiting!$"

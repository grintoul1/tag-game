# 1 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
.set LOCALID_BLACK_BELT_1, 1
# 3 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
.set LOCALID_BLACK_BELT_2, 2
# 4 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
.set LOCALID_BLACK_BELT_3, 3
# 5 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
.set LOCALID_BLACK_BELT_4, 4
# 6 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
.set LOCALID_ATTENDANT, 5
# 7 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
.set LOCALID_OPPONENT, 7
# 8 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
.set LOCALID_ANNOUNCER, 9
# 9 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 10 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_MapScripts::
# 11 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleArenaBattleRoom_OnTransition
# 12 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaBattleRoom_OnFrame
# 13 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaBattleRoom_OnWarp
# 14 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleArenaBattleRoom_OnResume
# 15 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.byte 0
# 16 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 17 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	@ On this map the player (OBJ_EVENT_ID_PLAYER) is hidden
# 18 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	@ The player is represented instead by LOCALID_PLAYER, which has the gfx id VAR_OBJ_GFX_ID_1
# 19 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 20 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnResume:
# 21 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special OffsetCameraForBattle
# 22 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 23 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnTransition:
# 25 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_settrainers
# 26 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx
# 27 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 28 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 29 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx::
# 30 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	checkplayergender
# 31 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxMale
# 32 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxFemale
# 33 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 34 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 35 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxMale::
# 36 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 37 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 38 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 39 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxFemale::
# 40 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 41 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 42 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 43 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnFrame:
# 44 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom
# 45 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.2byte 0
# 46 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 47 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom::
# 48 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	lockall
# 49 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM
# 50 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerEnter
# 51 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 52 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 53 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers
# 54 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceDown
# 55 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceLeft
# 56 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 57 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 58 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 59 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 60 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers::
# 61 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	tower_setopponent
# 62 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	addobject LOCALID_OPPONENT
# 63 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentEnter
# 64 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 65 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 66 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 67 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 68 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 69 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 71 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForward
# 72 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 73 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 74 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 75 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 76 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 77 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	arena_gettrainername
# 78 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 80 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward
# 81 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 82 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 83 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 84 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 85 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 86 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin, MSGBOX_DEFAULT
# 87 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 88 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForward
# 89 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward
# 90 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 91 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	palace_getopponentintro
# 92 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 93 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 94 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle
# 95 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedOpponent
# 97 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DeclareOpponentWinner::
# 98 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 99 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_BLACK_BELT_1, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 100 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_BLACK_BELT_2, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 101 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_BLACK_BELT_3, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 102 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_BLACK_BELT_4, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 103 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_SNORE
# 104 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 105 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 106 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	arena_gettrainername
# 107 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent, MSGBOX_DEFAULT
# 108 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_WarpToLobbyLost::
# 109 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 110 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_LOBBY, 7, 8
# 111 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 112 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 113 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedOpponent::
# 114 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner
# 115 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 116 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 117 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 118 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 120 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerWalkBackToLine
# 121 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentExit
# 122 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 123 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	removeobject LOCALID_OPPONENT
# 124 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceDown
# 125 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceLeft
# 126 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 127 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special LoadPlayerParty
# 129 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special SavePlayerParty
# 130 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 131 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 132 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitfanfare
# 133 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special HealPlayerParty
# 134 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent::
# 135 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 136 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 137 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext
# 138 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 139 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor2ndOpponent
# 140 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor3rdOpponent
# 141 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 3, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor4thOpponent
# 142 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 4, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor5thOpponent
# 143 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 5, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor6thOpponent
# 144 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 6, BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor7thOpponent
# 145 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 146 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord
# 147 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 148 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 149 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_ContinueChallenge
# 150 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle
# 151 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 152 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 153 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 154 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 155 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord::
# 156 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 157 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 158 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_ContinueChallenge
# 159 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 160 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 161 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 162 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 163 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle::
# 164 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle
# 165 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 166 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 167 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 168 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 169 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_RecordBattle
# 170 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 171 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 172 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_RecordBattle::
# 173 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 174 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 175 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 176 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge::
# 177 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown, MSGBOX_YESNO
# 178 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 180 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattleArenaBattleRoom_EventScript_PauseChallenge
# 181 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 182 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 183 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge::
# 184 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge
# 185 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 186 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 187 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 189 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_WarpToLobbyLost
# 190 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 191 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 192 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ContinueChallenge::
# 193 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 194 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 195 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 196 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 197 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers
# 198 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 199 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon::
# 200 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay 60
# 201 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 202 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_LOBBY, 7, 8
# 203 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 204 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 205 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor2ndOpponent::
# 206 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent
# 207 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 208 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 209 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 210 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor3rdOpponent::
# 211 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent
# 212 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 213 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 214 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 215 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor4thOpponent::
# 216 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent
# 217 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 218 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 219 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 220 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor5thOpponent::
# 221 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor5thOpponent
# 222 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 223 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 224 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 225 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor6thOpponent::
# 226 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor6thOpponent
# 227 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 228 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 229 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 230 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor7thOpponent::
# 231 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent
# 232 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 233 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 234 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 235 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_PauseChallenge::
# 236 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait
# 237 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 238 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	arena_save CHALLENGE_STATUS_PAUSED
# 239 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_SAVE
# 240 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 241 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 242 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_reset
# 243 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 244 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 245 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext::
# 246 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon
# 247 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_NowFaceTycoon, MSGBOX_DEFAULT
# 248 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 249 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon::
# 250 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_PreparedForTycoon
# 251 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 252 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 253 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord
# 254 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 255 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 256 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta
# 257 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle
# 258 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 259 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 260 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon
# 261 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 262 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord::
# 263 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 264 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_RESULT
# 265 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta
# 266 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 267 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 268 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon
# 269 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 270 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta::
# 271 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 272 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 273 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 274 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 275 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 276 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 277 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 278 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 279 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward, MSGBOX_DEFAULT
# 280 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 281 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForwardLong
# 282 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 283 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 284 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 285 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 286 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 287 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta, MSGBOX_DEFAULT
# 288 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 289 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	addobject LOCALID_OPPONENT
# 290 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaEnter
# 291 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 292 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward
# 293 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 294 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 295 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold
# 296 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver
# 297 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold
# 298 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 299 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver
# 300 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger, MSGBOX_DEFAULT
# 301 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 302 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 303 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaLookAroundPlayer
# 304 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 305 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight, MSGBOX_DEFAULT
# 306 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 307 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaWalkBackToCenter
# 308 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 309 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_YouLookWeakTakeThingsEasy, MSGBOX_DEFAULT
# 310 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver::
# 311 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_IgniteMyPassionForBattle, MSGBOX_DEFAULT
# 312 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_StartArenaBattle
# 313 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver
# 314 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DeclareOpponentWinner
# 315 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 316 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver::
# 317 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner
# 318 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_getsymbols
# 319 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 320 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForwardLong
# 321 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 322 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll, MSGBOX_DEFAULT
# 323 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 324 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol
# 325 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 326 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitfanfare
# 327 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_givesymbol
# 328 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime, MSGBOX_DEFAULT
# 329 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 330 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 331 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold::
# 332 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 333 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold
# 334 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain, MSGBOX_DEFAULT
# 335 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 336 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 337 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaLookAroundPlayer
# 338 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 339 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady, MSGBOX_DEFAULT
# 340 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 341 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaWalkBackToCenter
# 342 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 343 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WontAllowHalfheartedEffort, MSGBOX_DEFAULT
# 344 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold::
# 345 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_LetsGetThisStarted, MSGBOX_DEFAULT
# 346 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_StartArenaBattle
# 347 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold
# 348 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DeclareOpponentWinner
# 349 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 350 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold::
# 351 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner
# 352 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_getsymbols
# 353 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 354 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForwardLong
# 355 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 356 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaBlownAway, MSGBOX_DEFAULT
# 357 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 358 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine
# 359 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 360 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitfanfare
# 361 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_givesymbol
# 362 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose, MSGBOX_DEFAULT
# 363 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 364 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 365 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_StartArenaBattle::
# 366 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin, MSGBOX_DEFAULT
# 367 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle
# 368 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 369 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 370 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle::
# 371 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 372 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 373 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 374 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special HealPlayerParty
# 375 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_ARENA
# 376 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 377 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special DoSpecialTrainerBattle
# 378 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 379 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_restorehelditems
# 380 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special HealPlayerParty
# 381 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_resetsketch
# 382 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 383 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner::
# 385 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 386 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_BLACK_BELT_1, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 387 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_BLACK_BELT_2, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 388 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_BLACK_BELT_3, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 389 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_BLACK_BELT_4, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 390 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_BANG
# 391 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 392 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 393 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer, MSGBOX_DEFAULT
# 394 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 395 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 396 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 397 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 398 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerEnter:
# 399 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 400 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 401 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForwardLong:
# 402 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 403 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForward:
# 404 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 405 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 406 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 407 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerWalkBackToLine:
# 408 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 409 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 410 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 411 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 412 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 413 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceLeft:
# 414 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_up
# 415 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 416 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 417 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight:
# 418 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 419 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 420 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 421 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentEnter:
# 422 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 423 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 424 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForwardLong:
# 425 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 426 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward:
# 427 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 428 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 429 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 430 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_GretaEnter:
# 431 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 432 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 433 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 434 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 435 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 436 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 437 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 438 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentExit:
# 439 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 440 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 441 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 442 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 443 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 444 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 445 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 446 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 447 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 448 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown:
# 449 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 450 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	jump_in_place_down
# 451 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 452 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 453 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp:
# 454 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 455 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	jump_in_place_up
# 456 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 457 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 458 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceDown:
# 459 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 460 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 461 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 462 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
@ Unused, redundant
# 463 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight2:
# 464 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 465 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 466 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 467 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnWarp:
# 468 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaBattleRoom_EventScript_SetUpRoomObjects
# 469 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.2byte 0
# 470 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetUpRoomObjects::
# 472 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM
# 473 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	removeobject LOCALID_OPPONENT
# 474 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
# 475 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible
# 476 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 477 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 478 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 479 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_GretaLookAroundPlayer:
# 480 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_down
# 481 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 482 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 483 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 484 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 485 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 486 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_up
# 487 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_up
# 488 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 489 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 490 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 491 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_GretaWalkBackToCenter:
# 492 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_down
# 493 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 494 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 495 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 496 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward:
# 497 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: TRAINER {PLAYER}!\n"
# 498 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Step forward, please!$"
# 499 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 500 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward:
# 501 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: TRAINER {STR_VAR_1}!\n"
# 502 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Step forward, please!$"
# 503 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 504 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin:
# 505 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: Set KO Tourney!\n"
# 506 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Begin!$"
# 507 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 508 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer:
# 509 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: The winner is {PLAYER}!$"
# 510 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 511 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent:
# 512 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: The winner is {STR_VAR_1}!$"
# 513 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 514 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored:
# 515 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Your POKéMON will be restored to\n"
# 516 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "full health.$"
# 517 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 518 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent:
# 519 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your second opponent!\n"
# 520 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 521 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 522 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent:
# 523 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your third opponent!\n"
# 524 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 525 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 526 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent:
# 527 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your fourth opponent!\n"
# 528 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 529 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 530 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor5thOpponent:
# 531 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your fifth opponent!\n"
# 532 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 533 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 534 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor6thOpponent:
# 535 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your sixth opponent!\n"
# 536 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 537 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 538 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent:
# 539 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your seventh opponent!\n"
# 540 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 541 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 542 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown:
# 543 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Would you like to save the game and\n"
# 544 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "shut down now?$"
# 545 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 546 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge:
# 547 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Would you like to retire from your\n"
# 548 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Set KO Tourney challenge?$"
# 549 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 550 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait:
# 551 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I am saving your game data.\n"
# 552 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Please wait.$"
# 553 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 554 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle:
# 555 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Would you like to record your last\n"
# 556 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "battle on your FRONTIER PASS?$"
# 557 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 558 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_NowFaceTycoon:
# 559 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "My dear challenger!\p"
# 560 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Your skill level is truly astounding!\p"
# 561 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "We now would like you to face our\n"
# 562 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "leader, the ARENA TYCOON!$"
# 563 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 564 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_PreparedForTycoon:
# 565 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "A battle with the ARENA TYCOON!\n"
# 566 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 567 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 568 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta:
# 569 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: The ARENA TYCOON!\n"
# 570 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Make way for GRETA!$"
# 571 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 572 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger:
# 573 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Hey!\n"
# 574 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Howdy!\p"
# 575 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "…Wait, are you the challenger?$"
# 576 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 577 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight:
# 578 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Is that right? Hmm…\n"
# 579 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Hmhm…$"
# 580 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 581 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_YouLookWeakTakeThingsEasy:
# 582 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I don't know how to say it, but…\n"
# 583 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "To put it bluntly, you look pretty weak.\l"
# 584 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you sure you're up for me?\p"
# 585 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Hmm…\p"
# 586 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Well, all right!\n"
# 587 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "We'll take things easy to start with!$"
# 588 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 589 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_IgniteMyPassionForBattle:
# 590 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Okay! Let's see you ignite my passion\n"
# 591 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "for battle!$"
# 592 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 593 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll:
# 594 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Ow, wait a second!\n"
# 595 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "You are tough after all!\p"
# 596 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I like you!\n"
# 597 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Let's see your FRONTIER PASS.$"
# 598 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 599 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol:
# 600 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "The Guts Symbol was embossed on\n"
# 601 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "the FRONTIER PASS!$"
# 602 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 603 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime:
# 604 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Hmm…\p"
# 605 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "It's going to be fun the next time!\n"
# 606 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I'm looking forward to it!$"
# 607 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 608 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain:
# 609 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Hey! Howdy!\n"
# 610 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "You finally won your way up to me!\p"
# 611 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I was getting worried waiting for you!\n"
# 612 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I was really looking forward to seeing\l"
# 613 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "you again!$"
# 614 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 615 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady:
# 616 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "… … …\n"
# 617 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "So, are you ready?$"
# 618 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 619 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_WontAllowHalfheartedEffort:
# 620 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I won't allow a halfhearted effort!\n"
# 621 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Be ready for a thrashing!$"
# 622 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 623 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_LetsGetThisStarted:
# 624 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Come on, REFEREE!\n"
# 625 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Let's get this started!$"
# 626 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 627 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaBlownAway:
# 628 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Gaaah! Blown away!\n"
# 629 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Let's see your FRONTIER PASS!$"
# 630 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 631 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine:
# 632 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "The Guts Symbol took on\n"
# 633 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 634 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 635 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose:
# 636 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Arrrgh!\n"
# 637 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "This is so infuriating!\p"
# 638 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "If we ever battle again, I won't lose!\n"
# 639 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Don't you forget it! Bye-bye!$"

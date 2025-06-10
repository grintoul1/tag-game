# 1 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 2 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
.set LOCALID_ATTENDANT, 2
# 3 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
.set LOCALID_OPPONENT, 3
# 4 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 5 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_MapScripts::
# 6 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_BattleTentBattleRoom_OnTransition
# 7 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentBattleRoom_OnFrame
# 8 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FallarborTown_BattleTentBattleRoom_OnWarp
# 9 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	.byte 0
# 10 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 11 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	@ On this map the player (OBJ_EVENT_ID_PLAYER) is hidden
# 12 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	@ The player is represented instead by object event 1, which has the gfx id VAR_OBJ_GFX_ID_1
# 13 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	@ The opponent is represented by object event 3, which has the gfx id VAR_OBJ_GFX_ID_0
# 14 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 15 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_OnTransition:
# 16 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx
# 17 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	end
# 18 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 19 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx::
# 20 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	checkplayergender
# 21 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxMale
# 22 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale
# 23 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 24 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 25 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxMale::
# 26 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 27 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 28 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 29 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 30 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale::
# 31 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 32 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 33 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 34 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 35 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_OnFrame:
# 36 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, FallarborTown_BattleTentBattleRoom_EventScript_EnterRoom
# 37 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	.2byte 0
# 38 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 39 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_EnterRoom::
# 40 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	lockall
# 41 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 42 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerEnter
# 43 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 44 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 45 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, FallarborTown_BattleTentBattleRoom_EventScript_ResumeChallenge
# 46 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter::
# 47 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	tower_setopponent
# 48 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addobject LOCALID_OPPONENT
# 49 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, FallarborTown_BattleTentBattleRoom_Movement_OpponentEnter
# 50 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 51 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantJump
# 52 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 53 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 54 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 55 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin, MSGBOX_DEFAULT
# 56 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 57 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 58 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 59 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle
# 60 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_DefeatedOpponent
# 62 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantJump
# 63 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_M_SNORE
# 64 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 65 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 66 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fallarbortent_getopponentname
# 67 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent, MSGBOX_DEFAULT
# 68 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost::
# 69 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 70 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 71 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 72 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
# 73 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 74 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_DefeatedOpponent::
# 75 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantJump
# 76 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_BANG
# 77 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 78 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 79 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer, MSGBOX_DEFAULT
# 80 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	closemessage
# 81 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum::
# 82 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 83 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 84 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 85 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 3, FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon
# 87 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, FallarborTown_BattleTentBattleRoom_Movement_OpponentExit
# 88 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 89 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_OPPONENT
# 90 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantApproachPlayer
# 91 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 92 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceAttendant
# 93 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored, MSGBOX_DEFAULT
# 95 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 96 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special SavePlayerParty
# 97 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 98 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 99 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitfanfare
# 100 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 101 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge::
# 102 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 103 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 1, FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor2ndOpponent
# 104 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, 2, FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor3rdOpponent
# 105 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 106 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 0, FallarborTown_BattleTentBattleRoom_EventScript_ContinueChallenge
# 108 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge
# 109 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 2, FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge
# 110 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 111 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge::
# 112 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown, MSGBOX_YESNO
# 113 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case NO, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 115 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case YES, FallarborTown_BattleTentBattleRoom_EventScript_PauseChallenge
# 116 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 117 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 118 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge::
# 119 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge
# 120 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 121 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 122 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 123 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 124 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 0, FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost
# 125 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 126 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 127 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_ContinueChallenge::
# 128 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	closemessage
# 129 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantReturnToPos
# 130 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 131 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceBattle
# 132 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 133 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter
# 134 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
# 135 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 136 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon::
# 137 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	delay 60
# 138 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 139 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 140 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 141 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
# 142 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 143 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
@ Unreachable code block? The flow into the next block also doesnt make sense
# 144 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	arena_get ARENA_DATA_WIN_STREAK
# 145 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MAX_STREAK, FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum
# 146 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 147 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, VAR_RESULT
# 148 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
@ See above
# 149 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 150 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor2ndOpponent::
# 151 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent
# 152 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 153 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 154 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 155 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor3rdOpponent::
# 156 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent
# 157 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 158 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 159 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 160 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_PauseChallenge::
# 161 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait
# 162 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 163 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fallarbortent_save CHALLENGE_STATUS_PAUSED
# 164 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_SAVE
# 165 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 166 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 167 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_reset
# 168 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	end
# 169 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 170 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_ResumeChallenge::
# 171 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantApproachPlayer
# 172 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 173 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceAttendant
# 174 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 175 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 176 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	end
# 177 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 178 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_PlayerEnter:
# 179 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 180 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 181 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 182 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 183 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 184 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 185 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceBattle:
# 186 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 187 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 188 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 189 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceAttendant:
# 190 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 191 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 192 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 193 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_OpponentEnter:
# 194 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 195 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 196 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 197 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 198 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 199 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 200 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 201 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
@ Unused
# 202 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_OpponentStepForward:
# 203 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_left
# 204 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 205 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 206 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_OpponentExit:
# 207 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 208 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 209 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 210 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 211 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 212 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 213 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_AttendantJump:
# 214 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 215 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	jump_in_place_down
# 216 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 217 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 218 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_AttendantApproachPlayer:
# 219 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 220 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 221 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 222 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 223 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 224 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 225 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_AttendantReturnToPos:
# 226 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 227 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 228 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 229 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 230 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 231 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 232 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_OnWarp:
# 233 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, FallarborTown_BattleTentBattleRoom_EventScript_SetUpObjects
# 234 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	.2byte 0
# 235 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 236 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetUpObjects::
# 237 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 238 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 239 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_OPPONENT
# 240 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 241 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	end

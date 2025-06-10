# 1 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
.set LOCALID_OPPONENT_1, 1
# 3 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
.set LOCALID_ATTENDANT_1, 2
# 4 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
.set LOCALID_ATTENDANT_2, 3
# 5 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
.set LOCALID_OPPONENT_2, 4
# 6 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
.set LOCALID_PARTNER, 6
# 7 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 8 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_MapScripts::
# 9 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiBattleRoom_OnTransition
# 10 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiBattleRoom_OnWarp
# 11 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiBattleRoom_OnFrame
# 12 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.byte 0
# 13 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 14 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	@ On this map the player (OBJ_EVENT_ID_PLAYER) is hidden
# 15 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	@ The player is represented instead by LOCALID_PLAYER, which has the gfx id VAR_OBJ_GFX_ID_F
# 16 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	@ The multi partner is represented by LOCALID_PARTNER, which has the gfx id VAR_OBJ_GFX_ID_E
# 17 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 18 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnTransition:
# 19 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx
# 20 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetLinkPlayerGfx
# 21 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 23 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx::
# 24 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_setpartnergfx
# 25 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	checkplayergender
# 26 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetPlayerGfxFemale
# 27 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 28 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 29 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 30 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetPlayerGfxFemale::
# 31 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_MAY_NORMAL
# 32 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 33 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 34 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetLinkPlayerGfx::
# 35 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special SetBattleTowerLinkPlayerGfx
# 36 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 37 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 38 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnWarp:
# 39 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_HidePlayerObj
# 40 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.2byte 0
# 41 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 42 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_HidePlayerObj::
# 43 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM
# 44 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 46 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnFrame:
# 47 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom
# 48 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.2byte 0
# 49 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 50 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom::
# 51 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 52 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_PlayerEnterRoom
# 53 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_PartnerEnterRoom
# 54 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 55 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 56 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter
# 57 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 58 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 59 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 60 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 61 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 62 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 63 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 64 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 65 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 66 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter::
# 67 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_setopponent
# 68 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	addobject LOCALID_OPPONENT_1
# 69 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	addobject LOCALID_OPPONENT_2
# 70 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Enter
# 71 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Enter
# 72 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 73 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoOpponentIntrosLink
# 74 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 75 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 15
# 76 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 77 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 78 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 80 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 1
# 81 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 82 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 83 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 84 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 85 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoTowerBattle
# 86 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 87 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoOpponentIntrosLink::
# 88 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 89 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 15
# 90 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 91 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 92 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	messageautoscroll gStringVar4
# 93 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 94 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 95 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 1
# 96 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 97 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 98 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	messageautoscroll gStringVar4
# 99 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 100 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 101 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoTowerBattle::
# 102 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle
# 103 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case B_OUTCOME_WON, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents
# 105 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost::
# 106 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 107 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_set TOWER_DATA_LVL_MODE
# 108 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
# 109 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 110 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby
# 111 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 112 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents::
# 113 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 114 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_setbattlewon
# 115 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyWon
# 117 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Exit
# 118 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Exit
# 119 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 120 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	removeobject LOCALID_OPPONENT_1
# 121 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	removeobject LOCALID_OPPONENT_2
# 122 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 123 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 124 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 125 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 126 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 127 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 128 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetorePartyMsgLink
# 129 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth, MSGBOX_DEFAULT
# 130 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty
# 131 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 132 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetorePartyMsgLink::
# 133 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	messageautoscroll BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth
# 134 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 135 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 136 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty::
# 137 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special LoadPlayerParty
# 138 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_MULTI_PARTY_SIZE
# 139 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReconnectLink
# 140 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 141 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitfanfare
# 142 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special HealPlayerParty
# 143 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents::
# 144 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 145 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet
# 146 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge
# 147 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 148 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord
# 149 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 150 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge
# 152 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle
# 153 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge
# 154 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge
# 155 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 156 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 157 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord::
# 158 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 159 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge
# 161 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge
# 162 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge
# 163 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 164 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 165 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle::
# 166 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_RecordYourBattle
# 167 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 168 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 169 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 170 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 171 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RecordBattle
# 172 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 173 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 174 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RecordBattle::
# 175 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 176 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 177 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 178 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge::
# 179 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 180 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 182 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_PauseChallenge
# 183 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 184 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 185 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge::
# 186 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
# 187 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 188 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 189 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 191 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost
# 192 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 193 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 194 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge::
# 195 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	closemessage
# 196 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 197 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceBattle
# 198 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceBattle
# 199 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 200 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantReturnToPos
# 201 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantReturnToPos
# 202 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 203 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter
# 204 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 205 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 206 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyWon::
# 207 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 208 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_set TOWER_DATA_LVL_MODE
# 209 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
# 210 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 211 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby
# 212 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 213 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_PauseChallenge::
# 214 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait
# 215 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 216 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_save CHALLENGE_STATUS_PAUSED
# 217 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	playse SE_SAVE
# 218 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitse
# 219 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	fadescreen 1
# 220 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_reset
# 221 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 222 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 223 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet::
# 224 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink
# 225 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 226 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 227 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSet
# 228 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSet
# 229 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSet
# 230 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSet
# 231 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSet
# 232 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 6, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSet
# 233 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 234 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSet::
# 235 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor2ndOpponentSet
# 236 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 237 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 238 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 239 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSet::
# 240 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor3rdOpponentSet
# 241 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 242 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 243 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 244 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSet::
# 245 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor4thOpponentSet
# 246 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 247 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 248 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 249 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSet::
# 250 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor5thOpponentSet
# 251 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 252 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 253 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 254 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSet::
# 255 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor6thOpponentSet
# 256 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 257 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 258 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 259 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSet::
# 260 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor7thOpponentSet
# 261 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 262 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 263 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 264 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink::
# 265 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 266 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 267 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSetLink
# 268 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSetLink
# 269 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSetLink
# 270 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSetLink
# 271 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSetLink
# 272 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 6, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSetLink
# 273 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 274 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSetLink::
# 275 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor2ndOpponentSet
# 276 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 277 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 278 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 279 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 280 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSetLink::
# 281 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor3rdOpponentSet
# 282 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 283 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 284 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 285 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 286 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSetLink::
# 287 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor4thOpponentSet
# 288 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 289 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 290 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 291 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 292 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSetLink::
# 293 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor5thOpponentSet
# 294 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 295 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 296 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 297 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 298 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSetLink::
# 299 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor6thOpponentSet
# 300 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 301 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 302 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 303 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 304 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSetLink::
# 305 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor7thOpponentSet
# 306 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 307 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 308 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 309 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 310 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_LinkDelayForMsg::
# 311 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 312 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 313 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 314 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 315 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink::
# 316 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord
# 317 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 19, 6, MULTI_GO_ON_RECORD_RETIRE, TRUE
# 318 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 319 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink
# 320 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink
# 321 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 322 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 323 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 324 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 325 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord::
# 326 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 20, 8, MULTI_GO_ON_RETIRE, TRUE
# 327 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 328 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink
# 329 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 330 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 331 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 332 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 333 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink::
# 334 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, BATTLE_TOWER_LINK_CONTINUE
# 335 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 336 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message gText_LinkStandby3
# 337 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 338 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special LinkRetireStatusWithBattleTowerPartner
# 339 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitstate
# 340 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, BATTLE_TOWER_LINKSTAT_CONTINUE, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost
# 341 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_LinkDelayForMsg
# 342 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 343 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 344 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink::
# 345 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_RecordYourBattle
# 346 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 347 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 348 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 349 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 350 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 351 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 352 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 353 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 354 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 355 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 356 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink::
# 357 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
# 358 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 359 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 360 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetireChallengeLink
# 361 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 362 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 363 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 364 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetireChallengeLink::
# 365 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, BATTLE_TOWER_LINK_RETIRE
# 366 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 367 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message gText_LinkStandby3
# 368 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 369 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special LinkRetireStatusWithBattleTowerPartner
# 370 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitstate
# 371 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost
# 372 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 373 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 374 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReconnectLink::
# 375 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special BattleTowerReconnectLink
# 376 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 377 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 378 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_PlayerEnterRoom:
# 379 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 380 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 381 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 382 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 383 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_right
# 384 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 385 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 386 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_PartnerEnterRoom:
# 387 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_left
# 388 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 389 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 390 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 391 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_right
# 392 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 393 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 394 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant:
# 395 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_left
# 396 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 397 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 398 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceBattle:
# 399 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 400 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 401 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 402 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Enter:
# 403 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 404 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 405 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 406 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 407 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_left
# 408 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 409 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 410 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Enter:
# 411 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_right
# 412 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 413 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 414 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 415 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_left
# 416 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 417 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 418 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Exit:
# 419 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 420 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 421 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 422 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	set_invisible
# 423 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 424 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 425 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Exit:
# 426 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 427 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 428 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 429 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 430 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 431 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 432 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer:
# 433 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_right
# 434 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_right
# 435 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 436 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 437 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantReturnToPos:
# 438 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_left
# 439 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_left
# 440 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 441 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 442 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 443 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft:
# 444 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_in_place_left
# 445 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 446 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 447 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor2ndOpponentSet:
# 448 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 2nd set of opponents is next.\n"
# 449 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 450 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 451 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor3rdOpponentSet:
# 452 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 3rd set of opponents is next.\n"
# 453 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 454 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 455 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor4thOpponentSet:
# 456 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 4th set of opponents is next.\n"
# 457 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 458 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 459 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor5thOpponentSet:
# 460 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 5th set of opponents is next.\n"
# 461 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 462 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 463 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor6thOpponentSet:
# 464 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 6th set of opponents is next.\n"
# 465 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 466 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 467 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor7thOpponentSet:
# 468 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 7th set of opponents is next.\n"
# 469 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 470 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 472 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_2ndOpponentSetNext:
# 473 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 2nd set of opponents is next.\n"
# 474 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 475 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 476 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 477 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_3rdOpponentSetNext:
# 478 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 3rd set of opponents is next.\n"
# 479 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 480 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 481 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 482 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_4thOpponentSetNext:
# 483 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 4th set of opponents is next.\n"
# 484 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 485 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 486 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 487 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_5thOpponentSetNext:
# 488 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 5th set of opponents is next.\n"
# 489 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 490 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 491 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 492 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_6thOpponentSetNext:
# 493 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 6th set of opponents is next.\n"
# 494 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 495 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 496 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
@ Unused
# 497 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_7thOpponentSetNext:
# 498 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 7th set of opponents is next.\n"
# 499 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 500 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 501 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
gText_LinkStandby3::
# 502 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Link standby…$"
# 503 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 504 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
gText_YourPartnerHasRetired::
# 505 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Your partner has retired.\p"
# 506 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Your BATTLE ROOM challenge\n"
# 507 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "will be canceled.$"

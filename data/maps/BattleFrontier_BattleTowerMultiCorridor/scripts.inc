# 1 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
.set LOCALID_ATTENDANT_1, 2
# 3 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
.set LOCALID_ATTENDANT_2, 3
# 4 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
.set LOCALID_PARTNER, 4
# 5 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 6 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_MapScripts::
# 7 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiCorridor_OnTransition
# 8 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiCorridor_OnWarp
# 9 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiCorridor_OnFrame
# 10 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	.byte 0
# 11 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 12 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	@ On this map the player (OBJ_EVENT_ID_PLAYER) is hidden
# 13 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	@ The player is represented instead by LOCALID_PLAYER, and has the gfx id VAR_OBJ_GFX_ID_F
# 14 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	@ The multi partner is represented by LOCALID_PARTNER, and has the gfx id VAR_OBJ_GFX_ID_E
# 15 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnTransition:
# 17 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerMultiCorridor_EventScript_SetObjGfx
# 18 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiCorridor_EventScript_SetLinkPlayerGfx
# 19 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	end
# 20 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 21 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetObjGfx::
# 22 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	tower_setpartnergfx
# 23 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	checkplayergender
# 24 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattleTowerMultiCorridor_EventScript_SetPlayerGfxFemale
# 25 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 26 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 27 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetPlayerGfxFemale::
# 29 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_MAY_NORMAL
# 30 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 31 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetLinkPlayerGfx::
# 33 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	special SetBattleTowerLinkPlayerGfx
# 34 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 35 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 36 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnWarp:
# 37 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiCorridor_EventScript_SetUpObjects
# 38 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	.2byte 0
# 39 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 40 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetUpObjects::
# 41 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 42 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 43 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	hideobjectat LOCALID_PARTNER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 44 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	special OffsetCameraForBattle
# 45 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	end
# 46 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 47 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnFrame:
# 48 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor
# 49 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	.2byte 0
# 50 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 51 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor::
# 52 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	lockall
# 53 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8004, 14  @ x coord of far door, used by DrawDoor
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8005, 1   @ y coord of far door, used by DrawDoor
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	opendoor 1, 1
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 58 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	clearflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 59 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 60 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	showobjectat LOCALID_PARTNER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 61 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiCorridor_Movement_ExitElevator
# 62 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_PARTNER, BattleFrontier_BattleTowerMultiCorridor_Movement_ExitElevator
# 63 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 64 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 65 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8004, 14  @ x coord of far door, used by DrawDoor
# 66 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8005, 1   @ y coord of far door, used by DrawDoor
# 67 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	closedoor 1, 1
# 68 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 69 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	clearflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 70 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerWalkToDoor
# 71 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_PARTNER, BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerWalkToDoor
# 72 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerAttendantWalkToDoor
# 73 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerAttendantWalkToDoor
# 74 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 75 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay 40
# 76 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, Common_Movement_WalkInPlaceFasterUp
# 77 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, Common_Movement_WalkInPlaceFasterUp
# 78 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 79 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	opendoor 7, 1
# 80 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 81 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, BattleFrontier_BattleTowerMultiCorridor_Movement_AttendantEnterDoor
# 82 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, BattleFrontier_BattleTowerMultiCorridor_Movement_AttendantEnterDoor
# 83 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiCorridor_Movement_TrainerEnterDoor
# 84 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_PARTNER, BattleFrontier_BattleTowerMultiCorridor_Movement_TrainerEnterDoor
# 85 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 86 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	closedoor 7, 1
# 87 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 88 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay 30
# 89 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 90 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom
# 91 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	releaseall
# 92 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 94 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom::
# 95 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToNormalBattleRoom
# 96 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToNormalBattleRoom
# 97 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToMultiBattleRoom
# 98 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToLinkMultiBattleRoom
# 99 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 100 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 101 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToNormalBattleRoom::
# 102 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM, 4, 8
# 103 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitstate
# 104 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 105 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 106 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToMultiBattleRoom::
# 107 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM, 4, 5
# 108 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitstate
# 109 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 110 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 111 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
@ Unnecessary duplicate of the above
# 112 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToLinkMultiBattleRoom::
# 113 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM, 4, 5
# 114 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitstate
# 115 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 116 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 117 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerWalkToDoor:
# 118 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 119 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 120 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 121 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 122 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 123 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 124 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 125 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 126 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 127 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerWalkToDoor:
# 128 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 129 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 130 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 131 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 132 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 133 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 134 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 135 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 136 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 137 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerAttendantWalkToDoor:
# 138 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 139 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 140 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 141 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 142 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 143 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 144 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 145 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_in_place_faster_right
# 146 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 147 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 148 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerAttendantWalkToDoor:
# 149 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 150 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 151 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 152 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 153 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 154 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 155 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 156 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_in_place_faster_left
# 157 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 158 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 159 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_TrainerEnterDoor:
# 160 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay_16
# 161 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 162 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 163 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	set_invisible
# 164 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 165 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 166 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_AttendantEnterDoor:
# 167 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 168 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	set_invisible
# 169 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 170 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 171 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_ExitElevator:
# 172 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 173 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end

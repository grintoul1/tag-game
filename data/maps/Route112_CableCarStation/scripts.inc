# 1 "data/maps/Route112_CableCarStation/scripts.pory"

# 2 "data/maps/Route112_CableCarStation/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/Route112_CableCarStation/scripts.pory"

# 4 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_MapScripts::
# 5 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_CableCarStation_OnTransition
# 6 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route112_CableCarStation_OnWarp
# 7 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route112_CableCarStation_OnFrame
# 8 "data/maps/Route112_CableCarStation/scripts.pory"
	.byte 0
# 9 "data/maps/Route112_CableCarStation/scripts.pory"

# 10 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnTransition:
# 11 "data/maps/Route112_CableCarStation/scripts.pory"
	setescapewarp MAP_ROUTE112, 28, 28
# 12 "data/maps/Route112_CableCarStation/scripts.pory"
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_MoveAttendantAside
# 13 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 14 "data/maps/Route112_CableCarStation/scripts.pory"

# 15 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnWarp:
# 16 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_EmmiePos
# 17 "data/maps/Route112_CableCarStation/scripts.pory"
	.2byte 0
# 18 "data/maps/Route112_CableCarStation/scripts.pory"

# 19 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_EmmiePos::
# 20 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 5, 4
# 21 "data/maps/Route112_CableCarStation/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_ROUTE112_CABLE_CAR_STATION
# 22 "data/maps/Route112_CableCarStation/scripts.pory"
	return
# 23 "data/maps/Route112_CableCarStation/scripts.pory"

# 24 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_MoveAttendantAside::
# 25 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 7, 4
# 26 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_LEFT
# 27 "data/maps/Route112_CableCarStation/scripts.pory"
	return
# 28 "data/maps/Route112_CableCarStation/scripts.pory"

# 29 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnFrame:
# 30 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_ExitCableCar
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
	.2byte 0
# 32 "data/maps/Route112_CableCarStation/scripts.pory"

# 33 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_ExitCableCar::
# 34 "data/maps/Route112_CableCarStation/scripts.pory"
	lockall
# 35 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_ExitCableCar
# 36 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route112_CableCarStation_Movement_EmmieExitCableCar
# 37 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 38 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 40 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 6, 7
# 41 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 42 "data/maps/Route112_CableCarStation/scripts.pory"
	releaseall
# 43 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 44 "data/maps/Route112_CableCarStation/scripts.pory"

# 45 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant::
# 46 "data/maps/Route112_CableCarStation/scripts.pory"
	lock
# 47 "data/maps/Route112_CableCarStation/scripts.pory"
	faceplayer
# 48 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 49 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route112_CableCarStation_EventScript_RideCableCar
# 50 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route112_CableCarStation_EventScript_DeclineRide
# 51 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 52 "data/maps/Route112_CableCarStation/scripts.pory"

# 53 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_RideCableCar::
# 54 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 55 "data/maps/Route112_CableCarStation/scripts.pory"
	closemessage
# 56 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, Route112_CableCarStation_Movement_LeadPlayerToCableCar
# 57 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route112_CableCarStation_Movement_EmmieBoardCableCar
# 58 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_CableCarStation_Movement_BoardCableCar
# 59 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_0x8004, FALSE  @ Going up
# 61 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 1
# 62 "data/maps/Route112_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 63 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCarWarp
# 64 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCar
# 65 "data/maps/Route112_CableCarStation/scripts.pory"
	waitstate
# 66 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 67 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 68 "data/maps/Route112_CableCarStation/scripts.pory"

# 69 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_DeclineRide::
# 70 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
# 71 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 72 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 73 "data/maps/Route112_CableCarStation/scripts.pory"

# 74 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_LeadPlayerToCableCar:
# 75 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 76 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_right
# 77 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_in_place_faster_left
# 78 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 79 "data/maps/Route112_CableCarStation/scripts.pory"

# 80 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 81 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 82 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 83 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_left
# 84 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 85 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 86 "data/maps/Route112_CableCarStation/scripts.pory"

# 87 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_BoardCableCar:
# 88 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 89 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 90 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 91 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 92 "data/maps/Route112_CableCarStation/scripts.pory"

# 93 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_EmmieBoardCableCar:
# 94 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 95 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 96 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 97 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 98 "data/maps/Route112_CableCarStation/scripts.pory"

# 99 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_EmmieExitCableCar:
# 100 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_right
# 101 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 102 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 103 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 104 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 105 "data/maps/Route112_CableCarStation/scripts.pory"

# 106 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_ExitCableCar:
# 107 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 108 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 109 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 110 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 111 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 112 "data/maps/Route112_CableCarStation/scripts.pory"

# 113 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_CableCarReadyGetOn:
# 114 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go up.\n"
# 115 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Would you like to be on it?$"
# 116 "data/maps/Route112_CableCarStation/scripts.pory"

# 117 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_StepThisWay:
# 118 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please step this way.$"
# 119 "data/maps/Route112_CableCarStation/scripts.pory"

# 120 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_RideAnotherTime:
# 121 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"

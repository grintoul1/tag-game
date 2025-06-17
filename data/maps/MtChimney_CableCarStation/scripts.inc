# 1 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 2 "data/maps/MtChimney_CableCarStation/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 4 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_MapScripts::
# 5 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_CableCarStation_OnTransition
# 6 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MtChimney_CableCarStation_OnWarp
# 7 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtChimney_CableCarStation_OnFrame
# 8 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.byte 0
# 9 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 10 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_OnTransition:
# 11 "data/maps/MtChimney_CableCarStation/scripts.pory"
	call_if_eq VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_EventScript_MoveAttendantAside
# 12 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 14 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_OnWarp:
# 15 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_EventScript_EmmiePos
# 16 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.2byte 0
# 17 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 18 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_EmmiePos::
# 19 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 7, 4
# 20 "data/maps/MtChimney_CableCarStation/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_MT_CHIMNEY_CABLE_CAR_STATION
# 21 "data/maps/MtChimney_CableCarStation/scripts.pory"
	return
# 22 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 23 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_MoveAttendantAside::
# 24 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 5, 4
# 25 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data/maps/MtChimney_CableCarStation/scripts.pory"
	return
# 27 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 28 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_OnFrame:
# 29 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_EventScript_ExitCableCar
# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 26, MtChimney_CableCarStation_EventScript_ProgressEmmieState
# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.2byte 0
# 32 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 33 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_ProgressEmmieState::
# 34 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 27
# 35 "data/maps/MtChimney_CableCarStation/scripts.pory"
	return
# 36 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 37 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_ExitCableCar::
# 38 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lockall
# 39 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_CableCarStation_Movement_ExitCableCar
# 40 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_CableCarStation_Movement_EmmieExitCableCar
# 41 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, MtChimney_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 42 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 43 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 44 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 6, 7
# 45 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 46 "data/maps/MtChimney_CableCarStation/scripts.pory"
	releaseall
# 47 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 48 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 49 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_Attendant::
# 50 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lock
# 51 "data/maps/MtChimney_CableCarStation/scripts.pory"
	faceplayer
# 52 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 53 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MtChimney_CableCarStation_EventScript_RideCableCar
# 54 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_CableCarStation_EventScript_DeclineRide
# 55 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 56 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 57 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_RideCableCar::
# 58 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 59 "data/maps/MtChimney_CableCarStation/scripts.pory"
	closemessage
# 60 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_ATTENDANT, MtChimney_CableCarStation_Movement_LeadPlayerToCableCar
# 61 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_CableCarStation_Movement_EmmieBoardCableCar
# 62 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_CableCarStation_Movement_BoardCableCar
# 63 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 64 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_0x8004, TRUE  @ Going down
# 65 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 2
# 66 "data/maps/MtChimney_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 67 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCarWarp
# 68 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCar
# 69 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitstate
# 70 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
# 71 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 72 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 73 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_DeclineRide::
# 74 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
# 75 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
# 76 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 77 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 78 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_LeadPlayerToCableCar:
# 79 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 80 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_left
# 81 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_in_place_faster_right
# 82 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 83 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 84 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 85 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 86 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_right
# 87 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 88 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 89 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 90 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_BoardCableCar:
# 91 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 92 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 93 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 94 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 95 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 96 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_EmmieBoardCableCar:
# 97 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 98 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 99 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 100 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 101 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 102 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_EmmieExitCableCar:
# 103 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_left
# 104 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 105 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 106 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 107 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 108 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 109 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_ExitCableCar:
# 110 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 111 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 112 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 113 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 114 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 115 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 116 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_CableCarReadyGetOn:
# 117 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go down.\n"
# 118 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Would you like to be on it?$"
# 119 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 120 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_StepThisWay:
# 121 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please step this way.$"
# 122 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 123 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_RideAnotherTime:
# 124 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"

# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_SHELLY, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 31
# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 10 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 12 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtChimney_OnFrame
# 13 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 14 "data/maps/MtChimney/scripts.pory"

# 15 "data/maps/MtChimney/scripts.pory"
MtChimney_OnFrame:
# 16 "data/maps/MtChimney/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 25, MtChimney_EventScript_ProgressEmmieState
# 17 "data/maps/MtChimney/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 27, MtChimney_EventScript_ProgressEmmieState
# 18 "data/maps/MtChimney/scripts.pory"
	.2byte 0
# 19 "data/maps/MtChimney/scripts.pory"

# 20 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ProgressEmmieState::
# 21 "data/maps/MtChimney/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 26
# 22 "data/maps/MtChimney/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 23 "data/maps/MtChimney/scripts.pory"
	return
# 24 "data/maps/MtChimney/scripts.pory"

# 25 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 26 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 27 "data/maps/MtChimney/scripts.pory"
	end
# 28 "data/maps/MtChimney/scripts.pory"

# 29 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 30 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 31 "data/maps/MtChimney/scripts.pory"
	end
# 32 "data/maps/MtChimney/scripts.pory"

# 33 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelly::
# 34 "data/maps/MtChimney/scripts.pory"
	lock
# 35 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 36 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ShellyGoStopTeamMagma
# 37 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ShellyBusyFighting
# 38 "data/maps/MtChimney/scripts.pory"
	closemessage
# 39 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceOriginalDirection
# 40 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 41 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 42 "data/maps/MtChimney/scripts.pory"
	release
# 43 "data/maps/MtChimney/scripts.pory"
	end
# 44 "data/maps/MtChimney/scripts.pory"

# 45 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ShellyGoStopTeamMagma::
# 46 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShellyGoStopTeamMagma, MSGBOX_DEFAULT
# 47 "data/maps/MtChimney/scripts.pory"
	return
# 48 "data/maps/MtChimney/scripts.pory"

# 49 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ShellyBusyFighting::
# 50 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShellyIHaveMyHandsFull, MSGBOX_DEFAULT
# 51 "data/maps/MtChimney/scripts.pory"
	return
# 52 "data/maps/MtChimney/scripts.pory"

# 53 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieMaxieFight::
# 54 "data/maps/MtChimney/scripts.pory"
	lockall
# 55 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 56 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 57 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 58 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 59 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieDontDoThis, MSGBOX_DEFAULT
# 60 "data/maps/MtChimney/scripts.pory"
	closemessage
# 61 "data/maps/MtChimney/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 62 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieKnockback
# 63 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 64 "data/maps/MtChimney/scripts.pory"
	msgbox Mtchimney_Text_MaxieCannotStopMe, MSGBOX_DEFAULT
# 65 "data/maps/MtChimney/scripts.pory"
	closemessage
# 66 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 67 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 68 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 69 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 70 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 71 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 72 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 73 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchiePleaseStopMaxie, MSGBOX_DEFAULT
# 74 "data/maps/MtChimney/scripts.pory"
	closemessage
# 75 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 76 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 77 "data/maps/MtChimney/scripts.pory"
	addvar VAR_MTCHIMNEY_STATE, 1
# 78 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 6
# 79 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_DOWN
# 80 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_MAXIE, MOVEMENT_TYPE_FACE_RIGHT
# 81 "data/maps/MtChimney/scripts.pory"
	releaseall
# 82 "data/maps/MtChimney/scripts.pory"
	end
# 83 "data/maps/MtChimney/scripts.pory"

# 84 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 85 "data/maps/MtChimney/scripts.pory"
	lockall
# 86 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchiePleaseStopMaxie, MSGBOX_DEFAULT
# 87 "data/maps/MtChimney/scripts.pory"
	closemessage
# 88 "data/maps/MtChimney/scripts.pory"
	releaseall
# 89 "data/maps/MtChimney/scripts.pory"
	end
# 90 "data/maps/MtChimney/scripts.pory"

# 91 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightNorth::
# 92 "data/maps/MtChimney/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 93 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 12, MtChimney_EventScript_EmmiePositionForMaxieFightNorth1
# 94 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 14, MtChimney_EventScript_EmmiePositionForMaxieFightNorth2
# 95 "data/maps/MtChimney/scripts.pory"
	return
# 96 "data/maps/MtChimney/scripts.pory"

# 97 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightNorth1:
# 98 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightNorth1
# 99 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 100 "data/maps/MtChimney/scripts.pory"
	return
# 101 "data/maps/MtChimney/scripts.pory"

# 102 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightNorth2:
# 103 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightNorth2
# 104 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerPositionForMaxieFightNorth2
# 105 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 106 "data/maps/MtChimney/scripts.pory"
	return
# 107 "data/maps/MtChimney/scripts.pory"
	
# 108 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightNorth1:
# 109 "data/maps/MtChimney/scripts.pory"
	walk_up
# 110 "data/maps/MtChimney/scripts.pory"
	face_right
# 111 "data/maps/MtChimney/scripts.pory"
	step_end
# 112 "data/maps/MtChimney/scripts.pory"

# 113 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightNorth2:
# 114 "data/maps/MtChimney/scripts.pory"
	walk_left
# 115 "data/maps/MtChimney/scripts.pory"
	face_up
# 116 "data/maps/MtChimney/scripts.pory"
	step_end
# 117 "data/maps/MtChimney/scripts.pory"

# 118 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerPositionForMaxieFightNorth2:
# 119 "data/maps/MtChimney/scripts.pory"
	walk_left
# 120 "data/maps/MtChimney/scripts.pory"
	walk_up
# 121 "data/maps/MtChimney/scripts.pory"
	face_right
# 122 "data/maps/MtChimney/scripts.pory"
	step_end
# 123 "data/maps/MtChimney/scripts.pory"

# 124 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightEast::
# 125 "data/maps/MtChimney/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 126 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 12, MtChimney_EventScript_EmmiePositionForMaxieFightEast1
# 127 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 11, MtChimney_EventScript_EmmiePositionForMaxieFightEast2
# 128 "data/maps/MtChimney/scripts.pory"
	return
# 129 "data/maps/MtChimney/scripts.pory"

# 130 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightEast1::
# 131 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightEast1
# 132 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 133 "data/maps/MtChimney/scripts.pory"
	return
# 134 "data/maps/MtChimney/scripts.pory"

# 135 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightEast1:
# 136 "data/maps/MtChimney/scripts.pory"
	walk_right
# 137 "data/maps/MtChimney/scripts.pory"
	face_up
# 138 "data/maps/MtChimney/scripts.pory"
	step_end
# 139 "data/maps/MtChimney/scripts.pory"

# 140 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightEast2::
# 141 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightEast2
# 142 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 143 "data/maps/MtChimney/scripts.pory"
	return
# 144 "data/maps/MtChimney/scripts.pory"

# 145 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightEast2:
# 146 "data/maps/MtChimney/scripts.pory"
	walk_down
# 147 "data/maps/MtChimney/scripts.pory"
	walk_right
# 148 "data/maps/MtChimney/scripts.pory"
	walk_right
# 149 "data/maps/MtChimney/scripts.pory"
	face_up
# 150 "data/maps/MtChimney/scripts.pory"
	step_end
# 151 "data/maps/MtChimney/scripts.pory"

# 152 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 153 "data/maps/MtChimney/scripts.pory"
	lockall
# 154 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 155 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_EmmiePositionForMaxieFightEast
# 156 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_EmmiePositionForMaxieFightNorth
# 157 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 158 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 159 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 160 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 161 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 162 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 163 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 164 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 165 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 166 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MaxieDoMultiBattle
# 167 "data/maps/MtChimney/scripts.pory"
	releaseall
# 168 "data/maps/MtChimney/scripts.pory"
	end
# 169 "data/maps/MtChimney/scripts.pory"

# 170 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieDoMultiBattle::
# 171 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 172 "data/maps/MtChimney/scripts.pory"
	multi_2p_vs_1 TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat, PARTNER_EMMIE
# 173 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 174 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_MaxieVictory
# 175 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 176 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 177 "data/maps/MtChimney/scripts.pory"
	waitstate
# 178 "data/maps/MtChimney/scripts.pory"

# 179 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieVictory::
# 180 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 181 "data/maps/MtChimney/scripts.pory"
	closemessage
# 182 "data/maps/MtChimney/scripts.pory"
	delay 30
# 183 "data/maps/MtChimney/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 184 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 12, MtChimney_EventScript_EmmieMoveForMaxie
# 185 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 13, MtChimney_EventScript_PlayerMoveForMaxie
# 186 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 187 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 188 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 189 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 190 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 191 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 192 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 12, MtChimney_EventScript_ArchieApproachPlayerEast
# 193 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 13, MtChimney_EventScript_ArchieApproachPlayerNorth
# 194 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 195 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 196 "data/maps/MtChimney/scripts.pory"
	closemessage
# 197 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_HM_SURF
# 198 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 200 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 201 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_AQUA_2
# 202 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 203 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 204 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 205 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 206 "data/maps/MtChimney/scripts.pory"
	setvar VAR_LEVEL_CAP, 58
# 207 "data/maps/MtChimney/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 28
# 208 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 209 "data/maps/MtChimney/scripts.pory"
	releaseall
# 210 "data/maps/MtChimney/scripts.pory"
	end
# 211 "data/maps/MtChimney/scripts.pory"

# 212 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmieMoveForMaxie::
# 213 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_MoveForMaxie
# 214 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_MoveForMaxieOtherFaceLeft
# 215 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 216 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaExit
# 217 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 218 "data/maps/MtChimney/scripts.pory"
	return
# 219 "data/maps/MtChimney/scripts.pory"

# 220 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_PlayerMoveForMaxie::
# 221 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_MoveForMaxie
# 222 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_MoveForMaxieOtherFaceLeft
# 223 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 224 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaExit
# 225 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 226 "data/maps/MtChimney/scripts.pory"
	return
# 227 "data/maps/MtChimney/scripts.pory"

# 228 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieExit:
# 229 "data/maps/MtChimney/scripts.pory"
	walk_down
# 230 "data/maps/MtChimney/scripts.pory"
	walk_left
# 231 "data/maps/MtChimney/scripts.pory"
	walk_left
# 232 "data/maps/MtChimney/scripts.pory"
	walk_left
# 233 "data/maps/MtChimney/scripts.pory"
	walk_down
# 234 "data/maps/MtChimney/scripts.pory"
	walk_left
# 235 "data/maps/MtChimney/scripts.pory"
	walk_down
# 236 "data/maps/MtChimney/scripts.pory"
	walk_down
# 237 "data/maps/MtChimney/scripts.pory"
	walk_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_down
# 242 "data/maps/MtChimney/scripts.pory"
	step_end
# 243 "data/maps/MtChimney/scripts.pory"

# 244 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MoveForMaxieOtherFaceLeft:
# 245 "data/maps/MtChimney/scripts.pory"
	delay_16
# 246 "data/maps/MtChimney/scripts.pory"
	delay_16
# 247 "data/maps/MtChimney/scripts.pory"
	delay_16
# 248 "data/maps/MtChimney/scripts.pory"
	face_left
# 249 "data/maps/MtChimney/scripts.pory"
	step_end
# 250 "data/maps/MtChimney/scripts.pory"

# 251 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_TabithaExit:
# 252 "data/maps/MtChimney/scripts.pory"
	delay_16
# 253 "data/maps/MtChimney/scripts.pory"
	delay_16
# 254 "data/maps/MtChimney/scripts.pory"
	delay_16
# 255 "data/maps/MtChimney/scripts.pory"
	delay_16
# 256 "data/maps/MtChimney/scripts.pory"
	delay_16
# 257 "data/maps/MtChimney/scripts.pory"
	delay_16
# 258 "data/maps/MtChimney/scripts.pory"
	delay_16
# 259 "data/maps/MtChimney/scripts.pory"
	walk_right
# 260 "data/maps/MtChimney/scripts.pory"
	walk_down
# 261 "data/maps/MtChimney/scripts.pory"
	walk_down
# 262 "data/maps/MtChimney/scripts.pory"
	walk_down
# 263 "data/maps/MtChimney/scripts.pory"
	walk_down
# 264 "data/maps/MtChimney/scripts.pory"
	walk_down
# 265 "data/maps/MtChimney/scripts.pory"
	step_end
# 266 "data/maps/MtChimney/scripts.pory"

# 267 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MoveForMaxie:
# 268 "data/maps/MtChimney/scripts.pory"
	face_left
# 269 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 270 "data/maps/MtChimney/scripts.pory"
	walk_right
# 271 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 272 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 273 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 274 "data/maps/MtChimney/scripts.pory"
	step_end
# 275 "data/maps/MtChimney/scripts.pory"

# 276 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 277 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 278 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 279 "data/maps/MtChimney/scripts.pory"
	return
# 280 "data/maps/MtChimney/scripts.pory"

# 281 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 282 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 283 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 284 "data/maps/MtChimney/scripts.pory"
	return
# 285 "data/maps/MtChimney/scripts.pory"

# 286 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 287 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 288 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 289 "data/maps/MtChimney/scripts.pory"
	return
# 290 "data/maps/MtChimney/scripts.pory"

# 291 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 292 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 293 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 294 "data/maps/MtChimney/scripts.pory"
	return
# 295 "data/maps/MtChimney/scripts.pory"

# 296 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 297 "data/maps/MtChimney/scripts.pory"
	lock
# 298 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 299 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 300 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 301 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 302 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 303 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 304 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 305 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 306 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 307 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 308 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 309 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 310 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 311 "data/maps/MtChimney/scripts.pory"
	release
# 312 "data/maps/MtChimney/scripts.pory"
	end
# 313 "data/maps/MtChimney/scripts.pory"

# 314 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 315 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 316 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 317 "data/maps/MtChimney/scripts.pory"
	release
# 318 "data/maps/MtChimney/scripts.pory"
	end
# 319 "data/maps/MtChimney/scripts.pory"
.else
# 320 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 321 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 322 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 323 "data/maps/MtChimney/scripts.pory"
	release
# 324 "data/maps/MtChimney/scripts.pory"
	end
# 325 "data/maps/MtChimney/scripts.pory"

# 326 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 327 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 328 "data/maps/MtChimney/scripts.pory"
	release
# 329 "data/maps/MtChimney/scripts.pory"
	end
# 330 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 331 "data/maps/MtChimney/scripts.pory"

# 332 "data/maps/MtChimney/scripts.pory"

# 333 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 334 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 335 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 336 "data/maps/MtChimney/scripts.pory"
	return
# 337 "data/maps/MtChimney/scripts.pory"

# 338 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 339 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 340 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 341 "data/maps/MtChimney/scripts.pory"
	release
# 342 "data/maps/MtChimney/scripts.pory"
	end
# 343 "data/maps/MtChimney/scripts.pory"

# 344 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 345 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 346 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 347 "data/maps/MtChimney/scripts.pory"
	release
# 348 "data/maps/MtChimney/scripts.pory"
	end
# 349 "data/maps/MtChimney/scripts.pory"

# 350 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieKnockback:
# 351 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 352 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 353 "data/maps/MtChimney/scripts.pory"
	delay_16
# 354 "data/maps/MtChimney/scripts.pory"
	delay_16
# 355 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 356 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 357 "data/maps/MtChimney/scripts.pory"
	step_end
# 358 "data/maps/MtChimney/scripts.pory"

# 359 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 360 "data/maps/MtChimney/scripts.pory"
	walk_right
# 361 "data/maps/MtChimney/scripts.pory"
	step_end
# 362 "data/maps/MtChimney/scripts.pory"

# 363 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 364 "data/maps/MtChimney/scripts.pory"
	walk_left
# 365 "data/maps/MtChimney/scripts.pory"
	walk_left
# 366 "data/maps/MtChimney/scripts.pory"
	walk_left
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	walk_down
# 369 "data/maps/MtChimney/scripts.pory"
	walk_down
# 370 "data/maps/MtChimney/scripts.pory"
	walk_down
# 371 "data/maps/MtChimney/scripts.pory"
	walk_down
# 372 "data/maps/MtChimney/scripts.pory"
	walk_down
# 373 "data/maps/MtChimney/scripts.pory"
	step_end
# 374 "data/maps/MtChimney/scripts.pory"

# 375 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 376 "data/maps/MtChimney/scripts.pory"
	walk_down
# 377 "data/maps/MtChimney/scripts.pory"
	walk_right
# 378 "data/maps/MtChimney/scripts.pory"
	step_end
# 379 "data/maps/MtChimney/scripts.pory"

# 380 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 381 "data/maps/MtChimney/scripts.pory"
	walk_left
# 382 "data/maps/MtChimney/scripts.pory"
	walk_left
# 383 "data/maps/MtChimney/scripts.pory"
	walk_left
# 384 "data/maps/MtChimney/scripts.pory"
	walk_down
# 385 "data/maps/MtChimney/scripts.pory"
	walk_down
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	walk_down
# 388 "data/maps/MtChimney/scripts.pory"
	walk_down
# 389 "data/maps/MtChimney/scripts.pory"
	walk_down
# 390 "data/maps/MtChimney/scripts.pory"
	walk_down
# 391 "data/maps/MtChimney/scripts.pory"
	walk_down
# 392 "data/maps/MtChimney/scripts.pory"
	step_end
# 393 "data/maps/MtChimney/scripts.pory"

# 394 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 395 "data/maps/MtChimney/scripts.pory"
	walk_down
# 396 "data/maps/MtChimney/scripts.pory"
	walk_down
# 397 "data/maps/MtChimney/scripts.pory"
	walk_down
# 398 "data/maps/MtChimney/scripts.pory"
	walk_down
# 399 "data/maps/MtChimney/scripts.pory"
	walk_down
# 400 "data/maps/MtChimney/scripts.pory"
	walk_left
# 401 "data/maps/MtChimney/scripts.pory"
	walk_left
# 402 "data/maps/MtChimney/scripts.pory"
	walk_down
# 403 "data/maps/MtChimney/scripts.pory"
	walk_down
# 404 "data/maps/MtChimney/scripts.pory"
	walk_down
# 405 "data/maps/MtChimney/scripts.pory"
	walk_down
# 406 "data/maps/MtChimney/scripts.pory"
	walk_left
# 407 "data/maps/MtChimney/scripts.pory"
	walk_left
# 408 "data/maps/MtChimney/scripts.pory"
	walk_left
# 409 "data/maps/MtChimney/scripts.pory"
	walk_left
# 410 "data/maps/MtChimney/scripts.pory"
	walk_left
# 411 "data/maps/MtChimney/scripts.pory"
	walk_down
# 412 "data/maps/MtChimney/scripts.pory"
	step_end
# 413 "data/maps/MtChimney/scripts.pory"

# 414 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 415 "data/maps/MtChimney/scripts.pory"
	walk_down
# 416 "data/maps/MtChimney/scripts.pory"
	walk_down
# 417 "data/maps/MtChimney/scripts.pory"
	walk_down
# 418 "data/maps/MtChimney/scripts.pory"
	walk_down
# 419 "data/maps/MtChimney/scripts.pory"
	walk_left
# 420 "data/maps/MtChimney/scripts.pory"
	walk_left
# 421 "data/maps/MtChimney/scripts.pory"
	walk_left
# 422 "data/maps/MtChimney/scripts.pory"
	walk_down
# 423 "data/maps/MtChimney/scripts.pory"
	step_end
# 424 "data/maps/MtChimney/scripts.pory"

# 425 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 426 "data/maps/MtChimney/scripts.pory"
	walk_right
# 427 "data/maps/MtChimney/scripts.pory"
	walk_down
# 428 "data/maps/MtChimney/scripts.pory"
	walk_down
# 429 "data/maps/MtChimney/scripts.pory"
	walk_down
# 430 "data/maps/MtChimney/scripts.pory"
	walk_down
# 431 "data/maps/MtChimney/scripts.pory"
	walk_left
# 432 "data/maps/MtChimney/scripts.pory"
	walk_left
# 433 "data/maps/MtChimney/scripts.pory"
	walk_left
# 434 "data/maps/MtChimney/scripts.pory"
	walk_left
# 435 "data/maps/MtChimney/scripts.pory"
	walk_left
# 436 "data/maps/MtChimney/scripts.pory"
	walk_down
# 437 "data/maps/MtChimney/scripts.pory"
	walk_down
# 438 "data/maps/MtChimney/scripts.pory"
	walk_down
# 439 "data/maps/MtChimney/scripts.pory"
	walk_down
# 440 "data/maps/MtChimney/scripts.pory"
	step_end
# 441 "data/maps/MtChimney/scripts.pory"

# 442 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 443 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 444 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 445 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 446 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 447 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 448 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 449 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 450 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 451 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 452 "data/maps/MtChimney/scripts.pory"
	walk_left
# 453 "data/maps/MtChimney/scripts.pory"
	walk_left
# 454 "data/maps/MtChimney/scripts.pory"
	walk_down
# 455 "data/maps/MtChimney/scripts.pory"
	walk_down
# 456 "data/maps/MtChimney/scripts.pory"
	walk_down
# 457 "data/maps/MtChimney/scripts.pory"
	walk_left
# 458 "data/maps/MtChimney/scripts.pory"
	walk_left
# 459 "data/maps/MtChimney/scripts.pory"
	walk_down
# 460 "data/maps/MtChimney/scripts.pory"
	walk_down
# 461 "data/maps/MtChimney/scripts.pory"
	walk_left
# 462 "data/maps/MtChimney/scripts.pory"
	walk_left
# 463 "data/maps/MtChimney/scripts.pory"
	walk_left
# 464 "data/maps/MtChimney/scripts.pory"
	walk_left
# 465 "data/maps/MtChimney/scripts.pory"
	walk_left
# 466 "data/maps/MtChimney/scripts.pory"
	walk_down
# 467 "data/maps/MtChimney/scripts.pory"
	step_end
# 468 "data/maps/MtChimney/scripts.pory"

# 469 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 470 "data/maps/MtChimney/scripts.pory"
	delay_16
# 471 "data/maps/MtChimney/scripts.pory"
	delay_16
# 472 "data/maps/MtChimney/scripts.pory"
	delay_16
# 473 "data/maps/MtChimney/scripts.pory"
	walk_down
# 474 "data/maps/MtChimney/scripts.pory"
	walk_down
# 475 "data/maps/MtChimney/scripts.pory"
	walk_down
# 476 "data/maps/MtChimney/scripts.pory"
	walk_left
# 477 "data/maps/MtChimney/scripts.pory"
	walk_left
# 478 "data/maps/MtChimney/scripts.pory"
	walk_left
# 479 "data/maps/MtChimney/scripts.pory"
	walk_down
# 480 "data/maps/MtChimney/scripts.pory"
	step_end
# 481 "data/maps/MtChimney/scripts.pory"

# 482 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 483 "data/maps/MtChimney/scripts.pory"
	delay_16
# 484 "data/maps/MtChimney/scripts.pory"
	walk_left
# 485 "data/maps/MtChimney/scripts.pory"
	walk_down
# 486 "data/maps/MtChimney/scripts.pory"
	walk_down
# 487 "data/maps/MtChimney/scripts.pory"
	walk_down
# 488 "data/maps/MtChimney/scripts.pory"
	walk_down
# 489 "data/maps/MtChimney/scripts.pory"
	walk_left
# 490 "data/maps/MtChimney/scripts.pory"
	walk_left
# 491 "data/maps/MtChimney/scripts.pory"
	walk_left
# 492 "data/maps/MtChimney/scripts.pory"
	walk_left
# 493 "data/maps/MtChimney/scripts.pory"
	walk_left
# 494 "data/maps/MtChimney/scripts.pory"
	walk_down
# 495 "data/maps/MtChimney/scripts.pory"
	walk_down
# 496 "data/maps/MtChimney/scripts.pory"
	walk_down
# 497 "data/maps/MtChimney/scripts.pory"
	walk_down
# 498 "data/maps/MtChimney/scripts.pory"
	step_end
# 499 "data/maps/MtChimney/scripts.pory"

# 500 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 501 "data/maps/MtChimney/scripts.pory"
	delay_16
# 502 "data/maps/MtChimney/scripts.pory"
	walk_left
# 503 "data/maps/MtChimney/scripts.pory"
	walk_left
# 504 "data/maps/MtChimney/scripts.pory"
	walk_down
# 505 "data/maps/MtChimney/scripts.pory"
	walk_down
# 506 "data/maps/MtChimney/scripts.pory"
	walk_down
# 507 "data/maps/MtChimney/scripts.pory"
	walk_left
# 508 "data/maps/MtChimney/scripts.pory"
	walk_left
# 509 "data/maps/MtChimney/scripts.pory"
	walk_down
# 510 "data/maps/MtChimney/scripts.pory"
	walk_down
# 511 "data/maps/MtChimney/scripts.pory"
	walk_left
# 512 "data/maps/MtChimney/scripts.pory"
	walk_left
# 513 "data/maps/MtChimney/scripts.pory"
	walk_left
# 514 "data/maps/MtChimney/scripts.pory"
	walk_left
# 515 "data/maps/MtChimney/scripts.pory"
	walk_left
# 516 "data/maps/MtChimney/scripts.pory"
	walk_down
# 517 "data/maps/MtChimney/scripts.pory"
	step_end
# 518 "data/maps/MtChimney/scripts.pory"

# 519 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 520 "data/maps/MtChimney/scripts.pory"
	delay_16
# 521 "data/maps/MtChimney/scripts.pory"
	walk_down
# 522 "data/maps/MtChimney/scripts.pory"
	walk_left
# 523 "data/maps/MtChimney/scripts.pory"
	walk_left
# 524 "data/maps/MtChimney/scripts.pory"
	walk_left
# 525 "data/maps/MtChimney/scripts.pory"
	walk_left
# 526 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 527 "data/maps/MtChimney/scripts.pory"
	step_end
# 528 "data/maps/MtChimney/scripts.pory"

# 529 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 530 "data/maps/MtChimney/scripts.pory"
	walk_down
# 531 "data/maps/MtChimney/scripts.pory"
	walk_down
# 532 "data/maps/MtChimney/scripts.pory"
	walk_down
# 533 "data/maps/MtChimney/scripts.pory"
	walk_down
# 534 "data/maps/MtChimney/scripts.pory"
	walk_left
# 535 "data/maps/MtChimney/scripts.pory"
	walk_left
# 536 "data/maps/MtChimney/scripts.pory"
	walk_left
# 537 "data/maps/MtChimney/scripts.pory"
	walk_left
# 538 "data/maps/MtChimney/scripts.pory"
	walk_left
# 539 "data/maps/MtChimney/scripts.pory"
	walk_down
# 540 "data/maps/MtChimney/scripts.pory"
	walk_down
# 541 "data/maps/MtChimney/scripts.pory"
	walk_down
# 542 "data/maps/MtChimney/scripts.pory"
	walk_down
# 543 "data/maps/MtChimney/scripts.pory"
	step_end
# 544 "data/maps/MtChimney/scripts.pory"

# 545 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 546 "data/maps/MtChimney/scripts.pory"
	walk_down
# 547 "data/maps/MtChimney/scripts.pory"
	step_end
# 548 "data/maps/MtChimney/scripts.pory"

# 549 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 550 "data/maps/MtChimney/scripts.pory"
	walk_down
# 551 "data/maps/MtChimney/scripts.pory"
	walk_down
# 552 "data/maps/MtChimney/scripts.pory"
	walk_down
# 553 "data/maps/MtChimney/scripts.pory"
	walk_down
# 554 "data/maps/MtChimney/scripts.pory"
	walk_down
# 555 "data/maps/MtChimney/scripts.pory"
	walk_down
# 556 "data/maps/MtChimney/scripts.pory"
	walk_down
# 557 "data/maps/MtChimney/scripts.pory"
	step_end
# 558 "data/maps/MtChimney/scripts.pory"

# 559 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 560 "data/maps/MtChimney/scripts.pory"
	delay_16
# 561 "data/maps/MtChimney/scripts.pory"
	delay_16
# 562 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 563 "data/maps/MtChimney/scripts.pory"
	delay_16
# 564 "data/maps/MtChimney/scripts.pory"
	walk_down
# 565 "data/maps/MtChimney/scripts.pory"
	walk_down
# 566 "data/maps/MtChimney/scripts.pory"
	walk_down
# 567 "data/maps/MtChimney/scripts.pory"
	walk_down
# 568 "data/maps/MtChimney/scripts.pory"
	walk_down
# 569 "data/maps/MtChimney/scripts.pory"
	step_end
# 570 "data/maps/MtChimney/scripts.pory"

# 571 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 572 "data/maps/MtChimney/scripts.pory"
	delay_16
# 573 "data/maps/MtChimney/scripts.pory"
	delay_16
# 574 "data/maps/MtChimney/scripts.pory"
	delay_16
# 575 "data/maps/MtChimney/scripts.pory"
	delay_16
# 576 "data/maps/MtChimney/scripts.pory"
	delay_16
# 577 "data/maps/MtChimney/scripts.pory"
	delay_16
# 578 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 579 "data/maps/MtChimney/scripts.pory"
	delay_16
# 580 "data/maps/MtChimney/scripts.pory"
	walk_down
# 581 "data/maps/MtChimney/scripts.pory"
	walk_down
# 582 "data/maps/MtChimney/scripts.pory"
	step_end
# 583 "data/maps/MtChimney/scripts.pory"

# 584 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 585 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 586 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 587 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 588 "data/maps/MtChimney/scripts.pory"
	face_right
# 589 "data/maps/MtChimney/scripts.pory"
	step_end
# 590 "data/maps/MtChimney/scripts.pory"

# 591 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 592 "data/maps/MtChimney/scripts.pory"
	walk_left
# 593 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 594 "data/maps/MtChimney/scripts.pory"
	delay_16
# 595 "data/maps/MtChimney/scripts.pory"
	step_end
# 596 "data/maps/MtChimney/scripts.pory"

# 597 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 598 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 599 "data/maps/MtChimney/scripts.pory"
	end
# 600 "data/maps/MtChimney/scripts.pory"

# 601 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 602 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 603 "data/maps/MtChimney/scripts.pory"
	end
# 604 "data/maps/MtChimney/scripts.pory"

# 605 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 606 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 607 "data/maps/MtChimney/scripts.pory"
	end
# 608 "data/maps/MtChimney/scripts.pory"

# 609 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 610 "data/maps/MtChimney/scripts.pory"
lockall
# 611 "data/maps/MtChimney/scripts.pory"
applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 612 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 613 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 614 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 615 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 616 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaIntro, MSGBOX_AUTOCLOSE
# 617 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_TabithaDoMultiBattle
# 618 "data/maps/MtChimney/scripts.pory"
releaseall
# 619 "data/maps/MtChimney/scripts.pory"
end
# 620 "data/maps/MtChimney/scripts.pory"

# 621 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaDoMultiBattle::
# 622 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 623 "data/maps/MtChimney/scripts.pory"
	multi_2p_vs_1 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, PARTNER_EMMIE
# 624 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 625 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_TabithaVictory
# 626 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 627 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 628 "data/maps/MtChimney/scripts.pory"
	waitstate
# 629 "data/maps/MtChimney/scripts.pory"

# 630 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaVictory::
# 631 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 632 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 633 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 634 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 635 "data/maps/MtChimney/scripts.pory"
end
# 636 "data/maps/MtChimney/scripts.pory"

# 637 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha2::
# 638 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 639 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 640 "data/maps/MtChimney/scripts.pory"
	end
# 641 "data/maps/MtChimney/scripts.pory"

# 642 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2::
# 643 "data/maps/MtChimney/scripts.pory"
lockall
# 644 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_1
# 645 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 646 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 647 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 648 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 649 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 650 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 651 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 652 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_2
# 653 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 654 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 655 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 656 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 657 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 658 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 659 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2Intro, MSGBOX_AUTOCLOSE
# 660 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_Grunt1Grunt2DoMultiBattle
# 661 "data/maps/MtChimney/scripts.pory"
releaseall
# 662 "data/maps/MtChimney/scripts.pory"
end
# 663 "data/maps/MtChimney/scripts.pory"

# 664 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2DoMultiBattle::
# 665 "data/maps/MtChimney/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 666 "data/maps/MtChimney/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Defeat,TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Defeat, PARTNER_EMMIE
# 667 "data/maps/MtChimney/scripts.pory"
switch VAR_RESULT
# 668 "data/maps/MtChimney/scripts.pory"
case 1, MtChimney_EventScript_Grunt1Grunt2Victory
# 669 "data/maps/MtChimney/scripts.pory"
fadescreen FADE_TO_BLACK
# 670 "data/maps/MtChimney/scripts.pory"
special SetCB2WhiteOut
# 671 "data/maps/MtChimney/scripts.pory"
waitstate
# 672 "data/maps/MtChimney/scripts.pory"

# 673 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2Victory::
# 674 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 675 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 676 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 677 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 678 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 679 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 680 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 681 "data/maps/MtChimney/scripts.pory"
end
# 682 "data/maps/MtChimney/scripts.pory"

# 683 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 684 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 685 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 686 "data/maps/MtChimney/scripts.pory"
	end
# 687 "data/maps/MtChimney/scripts.pory"

# 688 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 689 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 690 "data/maps/MtChimney/scripts.pory"
	end
# 691 "data/maps/MtChimney/scripts.pory"

# 692 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 693 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 694 "data/maps/MtChimney/scripts.pory"
	end
# 695 "data/maps/MtChimney/scripts.pory"

# 696 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 697 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 698 "data/maps/MtChimney/scripts.pory"
	end
# 699 "data/maps/MtChimney/scripts.pory"

# 700 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 701 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 702 "data/maps/MtChimney/scripts.pory"
	end
# 703 "data/maps/MtChimney/scripts.pory"

# 704 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 705 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 706 "data/maps/MtChimney/scripts.pory"
	end
# 707 "data/maps/MtChimney/scripts.pory"

# 708 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 709 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 710 "data/maps/MtChimney/scripts.pory"
	end
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 713 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 714 "data/maps/MtChimney/scripts.pory"
	end
# 715 "data/maps/MtChimney/scripts.pory"

# 716 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 717 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 718 "data/maps/MtChimney/scripts.pory"
	end
# 719 "data/maps/MtChimney/scripts.pory"

# 720 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 721 "data/maps/MtChimney/scripts.pory"
	lockall
# 722 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 723 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 724 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 725 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 726 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 727 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 728 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 729 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 730 "data/maps/MtChimney/scripts.pory"
	releaseall
# 731 "data/maps/MtChimney/scripts.pory"
	end
# 732 "data/maps/MtChimney/scripts.pory"

# 733 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 734 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 735 "data/maps/MtChimney/scripts.pory"
	releaseall
# 736 "data/maps/MtChimney/scripts.pory"
	end
# 737 "data/maps/MtChimney/scripts.pory"

# 738 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 739 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 740 "data/maps/MtChimney/scripts.pory"
	releaseall
# 741 "data/maps/MtChimney/scripts.pory"
	end
# 742 "data/maps/MtChimney/scripts.pory"

# 743 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 744 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 745 "data/maps/MtChimney/scripts.pory"
	releaseall
# 746 "data/maps/MtChimney/scripts.pory"
	end
# 747 "data/maps/MtChimney/scripts.pory"

# 748 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 749 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 750 "data/maps/MtChimney/scripts.pory"
	end
# 751 "data/maps/MtChimney/scripts.pory"

# 752 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 753 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 754 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 755 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 756 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 757 "data/maps/MtChimney/scripts.pory"
	release
# 758 "data/maps/MtChimney/scripts.pory"
	end
# 759 "data/maps/MtChimney/scripts.pory"

# 760 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 761 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 762 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 763 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 764 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 765 "data/maps/MtChimney/scripts.pory"
	release
# 766 "data/maps/MtChimney/scripts.pory"
	end
# 767 "data/maps/MtChimney/scripts.pory"

# 768 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 769 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 770 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 771 "data/maps/MtChimney/scripts.pory"
	end
# 772 "data/maps/MtChimney/scripts.pory"

# 773 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 774 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 775 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 776 "data/maps/MtChimney/scripts.pory"
	end
# 777 "data/maps/MtChimney/scripts.pory"

# 778 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 779 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 780 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 781 "data/maps/MtChimney/scripts.pory"
	end
# 782 "data/maps/MtChimney/scripts.pory"

# 783 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 784 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 785 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 786 "data/maps/MtChimney/scripts.pory"
	end
# 787 "data/maps/MtChimney/scripts.pory"

# 788 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 789 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 790 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 791 "data/maps/MtChimney/scripts.pory"
	end
# 792 "data/maps/MtChimney/scripts.pory"

# 793 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 794 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 795 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 796 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 797 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 798 "data/maps/MtChimney/scripts.pory"
	release
# 799 "data/maps/MtChimney/scripts.pory"
	end
# 800 "data/maps/MtChimney/scripts.pory"

# 801 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 802 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 803 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 804 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 805 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 806 "data/maps/MtChimney/scripts.pory"
	release
# 807 "data/maps/MtChimney/scripts.pory"
	end
# 808 "data/maps/MtChimney/scripts.pory"

# 809 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 810 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 811 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 812 "data/maps/MtChimney/scripts.pory"
	end
# 813 "data/maps/MtChimney/scripts.pory"

# 814 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 815 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 822 "data/maps/MtChimney/scripts.pory"

# 823 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 824 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 826 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 829 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 831 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 832 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 835 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 836 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 839 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 840 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 841 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 843 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 844 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 845 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 847 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 848 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 849 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 850 "data/maps/MtChimney/scripts.pory"

# 851 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 852 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 853 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 854 "data/maps/MtChimney/scripts.pory"

# 855 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 856 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 857 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 858 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 861 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 862 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 863 "data/maps/MtChimney/scripts.pory"

# 864 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 865 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 866 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 867 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 868 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 869 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 870 "data/maps/MtChimney/scripts.pory"

# 871 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 872 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 873 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 874 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 875 "data/maps/MtChimney/scripts.pory"

# 876 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 877 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 878 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 879 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 880 "data/maps/MtChimney/scripts.pory"

# 881 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 882 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 883 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 884 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 885 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 886 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 887 "data/maps/MtChimney/scripts.pory"

# 888 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 889 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 890 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 891 "data/maps/MtChimney/scripts.pory"

# 892 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 893 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 894 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 895 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 896 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 897 "data/maps/MtChimney/scripts.pory"

# 898 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 899 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 900 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 901 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 902 "data/maps/MtChimney/scripts.pory"

# 903 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 904 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 905 "data/maps/MtChimney/scripts.pory"

# 906 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 907 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 908 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 909 "data/maps/MtChimney/scripts.pory"

# 910 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 911 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 912 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 913 "data/maps/MtChimney/scripts.pory"

# 914 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 915 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 916 "data/maps/MtChimney/scripts.pory"

# 917 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 918 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 919 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 920 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 921 "data/maps/MtChimney/scripts.pory"

# 922 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 923 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 924 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 925 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 926 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 927 "data/maps/MtChimney/scripts.pory"

# 928 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 929 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 930 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 931 "data/maps/MtChimney/scripts.pory"

# 932 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 933 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 934 "data/maps/MtChimney/scripts.pory"

# 935 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 936 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 937 "data/maps/MtChimney/scripts.pory"

# 938 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyGoStopTeamMagma:
# 939 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grr, {PLAYER}!\n"
# 940 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 941 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 942 "data/maps/MtChimney/scripts.pory"
	.string "of Team Magma are up to!\p"
# 943 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 944 "data/maps/MtChimney/scripts.pory"
	.string "Meteorite's power into the volcano!\p"
# 945 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 946 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 947 "data/maps/MtChimney/scripts.pory"

# 948 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyIHaveMyHandsFull:
# 949 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grrr…\n"
# 950 "data/maps/MtChimney/scripts.pory"
	.string "The boss went on to stop Maxie!\p"
# 951 "data/maps/MtChimney/scripts.pory"
	.string "Somebody needs to help him!\p"
# 952 "data/maps/MtChimney/scripts.pory"
	.string "I can't when I have my hands full\n"
# 953 "data/maps/MtChimney/scripts.pory"
	.string "battling three opponents at once!$"
# 954 "data/maps/MtChimney/scripts.pory"

# 955 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 956 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 957 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 958 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 959 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 960 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 961 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 962 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 963 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 964 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 965 "data/maps/MtChimney/scripts.pory"
	.string "As thanks, please take this, the HM for\n"
# 966 "data/maps/MtChimney/scripts.pory"
	.string "Surf.\p"
# 967 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 968 "data/maps/MtChimney/scripts.pory"

# 969 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 970 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 971 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 972 "data/maps/MtChimney/scripts.pory"

# 973 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 974 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 975 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 976 "data/maps/MtChimney/scripts.pory"

# 977 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 978 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 979 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 980 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 981 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 982 "data/maps/MtChimney/scripts.pory"

# 983 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 984 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 985 "data/maps/MtChimney/scripts.pory"

# 986 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 987 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 988 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 989 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 990 "data/maps/MtChimney/scripts.pory"

# 991 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 992 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 993 "data/maps/MtChimney/scripts.pory"

# 994 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 995 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 996 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 997 "data/maps/MtChimney/scripts.pory"

# 998 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 999 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 1000 "data/maps/MtChimney/scripts.pory"

# 1001 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 1002 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 1003 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 1004 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 1005 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 1006 "data/maps/MtChimney/scripts.pory"

# 1007 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 1008 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 1009 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 1010 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 1011 "data/maps/MtChimney/scripts.pory"

# 1012 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 1013 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 1014 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 1015 "data/maps/MtChimney/scripts.pory"

# 1016 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 1017 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 1018 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 1019 "data/maps/MtChimney/scripts.pory"

# 1020 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 1021 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 1022 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 1023 "data/maps/MtChimney/scripts.pory"

# 1024 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 1025 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 1026 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 1027 "data/maps/MtChimney/scripts.pory"

# 1028 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 1029 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 1030 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 1031 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 1032 "data/maps/MtChimney/scripts.pory"

# 1033 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 1034 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1035 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1036 "data/maps/MtChimney/scripts.pory"

# 1037 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 1038 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 1039 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 1040 "data/maps/MtChimney/scripts.pory"

# 1041 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 1042 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 1043 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 1044 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 1045 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 1046 "data/maps/MtChimney/scripts.pory"

# 1047 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 1048 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 1049 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 1050 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 1051 "data/maps/MtChimney/scripts.pory"

# 1052 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 1053 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1054 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1055 "data/maps/MtChimney/scripts.pory"

# 1056 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 1057 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 1058 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 1059 "data/maps/MtChimney/scripts.pory"

# 1060 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 1061 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 1062 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 1063 "data/maps/MtChimney/scripts.pory"

# 1064 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 1065 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 1066 "data/maps/MtChimney/scripts.pory"

# 1067 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 1068 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 1069 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 1070 "data/maps/MtChimney/scripts.pory"

# 1071 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 1072 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 1073 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 1074 "data/maps/MtChimney/scripts.pory"

# 1075 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 1076 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 1077 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 1078 "data/maps/MtChimney/scripts.pory"

# 1079 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 1080 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 1081 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 1082 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 1083 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 1084 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 1085 "data/maps/MtChimney/scripts.pory"

# 1086 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 1087 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 1088 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 1089 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 1090 "data/maps/MtChimney/scripts.pory"

# 1091 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 1092 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 1093 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 1094 "data/maps/MtChimney/scripts.pory"

# 1095 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 1096 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 1097 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 1098 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 1099 "data/maps/MtChimney/scripts.pory"

# 1100 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 1101 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 1102 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 1103 "data/maps/MtChimney/scripts.pory"

# 1104 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 1105 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 1106 "data/maps/MtChimney/scripts.pory"

# 1107 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 1108 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 1109 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 1110 "data/maps/MtChimney/scripts.pory"

# 1111 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 1112 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 1113 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 1114 "data/maps/MtChimney/scripts.pory"

# 1115 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 1116 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 1117 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 1118 "data/maps/MtChimney/scripts.pory"

# 1119 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 1120 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 1121 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 1122 "data/maps/MtChimney/scripts.pory"

# 1123 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 1124 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 1125 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
# 1126 "data/maps/MtChimney/scripts.pory"

# 1127 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieDontDoThis:
# 1128 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Maxie! You must not go through\n"
# 1129 "data/maps/MtChimney/scripts.pory"
	.string "with this!$"
# 1130 "data/maps/MtChimney/scripts.pory"

# 1131 "data/maps/MtChimney/scripts.pory"
Mtchimney_Text_MaxieCannotStopMe:
# 1132 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: Fufufu… Now, now Archie…\n"
# 1133 "data/maps/MtChimney/scripts.pory"
	.string "Is this really the best you can do?$"
# 1134 "data/maps/MtChimney/scripts.pory"

# 1135 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchiePleaseStopMaxie:
# 1136 "data/maps/MtChimney/scripts.pory"
	.string "Archie: {PLAYER}, I warned you\n"
# 1137 "data/maps/MtChimney/scripts.pory"
	.string "about Team Magma.\p"
# 1138 "data/maps/MtChimney/scripts.pory"
	.string "Please, you must help me stop Maxie!$"

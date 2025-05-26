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
	.byte 0
# 13 "data/maps/MtChimney/scripts.pory"

# 14 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 15 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 16 "data/maps/MtChimney/scripts.pory"
	end
# 17 "data/maps/MtChimney/scripts.pory"

# 18 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 19 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 20 "data/maps/MtChimney/scripts.pory"
	end
# 21 "data/maps/MtChimney/scripts.pory"

# 22 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelly::
# 23 "data/maps/MtChimney/scripts.pory"
	lock
# 24 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 25 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ShellyGoStopTeamMagma
# 26 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ShellyBusyFighting
# 27 "data/maps/MtChimney/scripts.pory"
	closemessage
# 28 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceOriginalDirection
# 29 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 30 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 31 "data/maps/MtChimney/scripts.pory"
	release
# 32 "data/maps/MtChimney/scripts.pory"
	end
# 33 "data/maps/MtChimney/scripts.pory"

# 34 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ShellyGoStopTeamMagma::
# 35 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShellyGoStopTeamMagma, MSGBOX_DEFAULT
# 36 "data/maps/MtChimney/scripts.pory"
	return
# 37 "data/maps/MtChimney/scripts.pory"

# 38 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ShellyBusyFighting::
# 39 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShellyIHaveMyHandsFull, MSGBOX_DEFAULT
# 40 "data/maps/MtChimney/scripts.pory"
	return
# 41 "data/maps/MtChimney/scripts.pory"

# 42 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieMaxieFight::
# 43 "data/maps/MtChimney/scripts.pory"
	lockall
# 44 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 45 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 46 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 47 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieDontDoThis, MSGBOX_DEFAULT
# 49 "data/maps/MtChimney/scripts.pory"
	closemessage
# 50 "data/maps/MtChimney/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 51 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieKnockback
# 52 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 53 "data/maps/MtChimney/scripts.pory"
	msgbox Mtchimney_Text_MaxieCannotStopMe, MSGBOX_DEFAULT
# 54 "data/maps/MtChimney/scripts.pory"
	closemessage
# 55 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 56 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 57 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 58 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 59 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 62 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchiePleaseStopMaxie, MSGBOX_DEFAULT
# 63 "data/maps/MtChimney/scripts.pory"
	closemessage
# 64 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 66 "data/maps/MtChimney/scripts.pory"
	addvar VAR_MTCHIMNEY_STATE, 1
# 67 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 6
# 68 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_DOWN
# 69 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_MAXIE, MOVEMENT_TYPE_FACE_RIGHT
# 70 "data/maps/MtChimney/scripts.pory"
	releaseall
# 71 "data/maps/MtChimney/scripts.pory"
	end
# 72 "data/maps/MtChimney/scripts.pory"

# 73 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 74 "data/maps/MtChimney/scripts.pory"
	lockall
# 75 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchiePleaseStopMaxie, MSGBOX_DEFAULT
# 76 "data/maps/MtChimney/scripts.pory"
	closemessage
# 77 "data/maps/MtChimney/scripts.pory"
	releaseall
# 78 "data/maps/MtChimney/scripts.pory"
	end
# 79 "data/maps/MtChimney/scripts.pory"

# 80 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightNorth::
# 81 "data/maps/MtChimney/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 82 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 12, MtChimney_EventScript_EmmiePositionForMaxieFightNorth1
# 83 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 14, MtChimney_EventScript_EmmiePositionForMaxieFightNorth2
# 84 "data/maps/MtChimney/scripts.pory"
	return
# 85 "data/maps/MtChimney/scripts.pory"

# 86 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightNorth1:
# 87 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightNorth1
# 88 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 89 "data/maps/MtChimney/scripts.pory"
	return
# 90 "data/maps/MtChimney/scripts.pory"

# 91 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightNorth2:
# 92 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightNorth2
# 93 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerPositionForMaxieFightNorth2
# 94 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 95 "data/maps/MtChimney/scripts.pory"
	return
# 96 "data/maps/MtChimney/scripts.pory"
	
# 97 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightNorth1:
# 98 "data/maps/MtChimney/scripts.pory"
	walk_up
# 99 "data/maps/MtChimney/scripts.pory"
	face_right
# 100 "data/maps/MtChimney/scripts.pory"
	step_end
# 101 "data/maps/MtChimney/scripts.pory"

# 102 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightNorth2:
# 103 "data/maps/MtChimney/scripts.pory"
	walk_left
# 104 "data/maps/MtChimney/scripts.pory"
	face_up
# 105 "data/maps/MtChimney/scripts.pory"
	step_end
# 106 "data/maps/MtChimney/scripts.pory"

# 107 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerPositionForMaxieFightNorth2:
# 108 "data/maps/MtChimney/scripts.pory"
	walk_left
# 109 "data/maps/MtChimney/scripts.pory"
	walk_up
# 110 "data/maps/MtChimney/scripts.pory"
	face_right
# 111 "data/maps/MtChimney/scripts.pory"
	step_end
# 112 "data/maps/MtChimney/scripts.pory"

# 113 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightEast::
# 114 "data/maps/MtChimney/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 115 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 12, MtChimney_EventScript_EmmiePositionForMaxieFightEast1
# 116 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 11, MtChimney_EventScript_EmmiePositionForMaxieFightEast2
# 117 "data/maps/MtChimney/scripts.pory"
	return
# 118 "data/maps/MtChimney/scripts.pory"

# 119 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightEast1::
# 120 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightEast1
# 121 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 122 "data/maps/MtChimney/scripts.pory"
	return
# 123 "data/maps/MtChimney/scripts.pory"

# 124 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightEast1:
# 125 "data/maps/MtChimney/scripts.pory"
	walk_right
# 126 "data/maps/MtChimney/scripts.pory"
	face_up
# 127 "data/maps/MtChimney/scripts.pory"
	step_end
# 128 "data/maps/MtChimney/scripts.pory"

# 129 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightEast2::
# 130 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightEast2
# 131 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 132 "data/maps/MtChimney/scripts.pory"
	return
# 133 "data/maps/MtChimney/scripts.pory"

# 134 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightEast2:
# 135 "data/maps/MtChimney/scripts.pory"
	walk_down
# 136 "data/maps/MtChimney/scripts.pory"
	walk_right
# 137 "data/maps/MtChimney/scripts.pory"
	walk_right
# 138 "data/maps/MtChimney/scripts.pory"
	face_up
# 139 "data/maps/MtChimney/scripts.pory"
	step_end
# 140 "data/maps/MtChimney/scripts.pory"

# 141 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 142 "data/maps/MtChimney/scripts.pory"
	lockall
# 143 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 144 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_EmmiePositionForMaxieFightEast
# 145 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_EmmiePositionForMaxieFightNorth
# 146 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 147 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 148 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 149 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 150 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 151 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 152 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 153 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 154 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 155 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MaxieDoMultiBattle
# 156 "data/maps/MtChimney/scripts.pory"
	releaseall
# 157 "data/maps/MtChimney/scripts.pory"
	end
# 158 "data/maps/MtChimney/scripts.pory"

# 159 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieDoMultiBattle::
# 160 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 161 "data/maps/MtChimney/scripts.pory"
	multi_2p_vs_1 TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat, PARTNER_EMMIE
# 162 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 163 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_MaxieVictory
# 164 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 165 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 166 "data/maps/MtChimney/scripts.pory"
	waitstate
# 167 "data/maps/MtChimney/scripts.pory"

# 168 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieVictory::
# 169 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 170 "data/maps/MtChimney/scripts.pory"
	closemessage
# 171 "data/maps/MtChimney/scripts.pory"
	delay 30
# 172 "data/maps/MtChimney/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 173 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 12, MtChimney_EventScript_EmmieMoveForMaxie
# 174 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 13, MtChimney_EventScript_PlayerMoveForMaxie
# 175 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 176 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 177 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 178 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 179 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 180 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 181 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 12, MtChimney_EventScript_ArchieApproachPlayerEast
# 182 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 13, MtChimney_EventScript_ArchieApproachPlayerNorth
# 183 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 184 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 185 "data/maps/MtChimney/scripts.pory"
	closemessage
# 186 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_HM_SURF
# 187 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 188 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 189 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 190 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_AQUA_2
# 191 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 192 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 193 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 194 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 195 "data/maps/MtChimney/scripts.pory"
	setvar VAR_LEVEL_CAP, 58
# 196 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 197 "data/maps/MtChimney/scripts.pory"
	releaseall
# 198 "data/maps/MtChimney/scripts.pory"
	end
# 199 "data/maps/MtChimney/scripts.pory"

# 200 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmieMoveForMaxie::
# 201 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_MoveForMaxie
# 202 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_MoveForMaxieOtherFaceLeft
# 203 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 204 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaExit
# 205 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 206 "data/maps/MtChimney/scripts.pory"
	return
# 207 "data/maps/MtChimney/scripts.pory"

# 208 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_PlayerMoveForMaxie::
# 209 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_MoveForMaxie
# 210 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_MoveForMaxieOtherFaceLeft
# 211 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 212 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaExit
# 213 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 214 "data/maps/MtChimney/scripts.pory"
	return
# 215 "data/maps/MtChimney/scripts.pory"

# 216 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieExit:
# 217 "data/maps/MtChimney/scripts.pory"
	walk_down
# 218 "data/maps/MtChimney/scripts.pory"
	walk_left
# 219 "data/maps/MtChimney/scripts.pory"
	walk_left
# 220 "data/maps/MtChimney/scripts.pory"
	walk_left
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_left
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	walk_down
# 226 "data/maps/MtChimney/scripts.pory"
	walk_down
# 227 "data/maps/MtChimney/scripts.pory"
	walk_down
# 228 "data/maps/MtChimney/scripts.pory"
	walk_down
# 229 "data/maps/MtChimney/scripts.pory"
	walk_down
# 230 "data/maps/MtChimney/scripts.pory"
	step_end
# 231 "data/maps/MtChimney/scripts.pory"

# 232 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MoveForMaxieOtherFaceLeft:
# 233 "data/maps/MtChimney/scripts.pory"
	delay_16
# 234 "data/maps/MtChimney/scripts.pory"
	delay_16
# 235 "data/maps/MtChimney/scripts.pory"
	delay_16
# 236 "data/maps/MtChimney/scripts.pory"
	face_left
# 237 "data/maps/MtChimney/scripts.pory"
	step_end
# 238 "data/maps/MtChimney/scripts.pory"

# 239 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_TabithaExit:
# 240 "data/maps/MtChimney/scripts.pory"
	delay_16
# 241 "data/maps/MtChimney/scripts.pory"
	delay_16
# 242 "data/maps/MtChimney/scripts.pory"
	delay_16
# 243 "data/maps/MtChimney/scripts.pory"
	delay_16
# 244 "data/maps/MtChimney/scripts.pory"
	delay_16
# 245 "data/maps/MtChimney/scripts.pory"
	delay_16
# 246 "data/maps/MtChimney/scripts.pory"
	delay_16
# 247 "data/maps/MtChimney/scripts.pory"
	walk_right
# 248 "data/maps/MtChimney/scripts.pory"
	walk_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_down
# 253 "data/maps/MtChimney/scripts.pory"
	step_end
# 254 "data/maps/MtChimney/scripts.pory"

# 255 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MoveForMaxie:
# 256 "data/maps/MtChimney/scripts.pory"
	face_left
# 257 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 258 "data/maps/MtChimney/scripts.pory"
	walk_right
# 259 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 260 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 261 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 262 "data/maps/MtChimney/scripts.pory"
	step_end
# 263 "data/maps/MtChimney/scripts.pory"

# 264 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 265 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 266 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 267 "data/maps/MtChimney/scripts.pory"
	return
# 268 "data/maps/MtChimney/scripts.pory"

# 269 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 270 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 271 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 272 "data/maps/MtChimney/scripts.pory"
	return
# 273 "data/maps/MtChimney/scripts.pory"

# 274 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 275 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 276 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 277 "data/maps/MtChimney/scripts.pory"
	return
# 278 "data/maps/MtChimney/scripts.pory"

# 279 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 280 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 281 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 282 "data/maps/MtChimney/scripts.pory"
	return
# 283 "data/maps/MtChimney/scripts.pory"

# 284 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 285 "data/maps/MtChimney/scripts.pory"
	lock
# 286 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 287 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 288 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 289 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 290 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 291 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 292 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 293 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 294 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 295 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 296 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 297 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 298 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 299 "data/maps/MtChimney/scripts.pory"
	release
# 300 "data/maps/MtChimney/scripts.pory"
	end
# 301 "data/maps/MtChimney/scripts.pory"

# 302 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 303 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 304 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 305 "data/maps/MtChimney/scripts.pory"
	release
# 306 "data/maps/MtChimney/scripts.pory"
	end
# 307 "data/maps/MtChimney/scripts.pory"
.else
# 308 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 309 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 310 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
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
	release
# 317 "data/maps/MtChimney/scripts.pory"
	end
# 318 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 319 "data/maps/MtChimney/scripts.pory"

# 320 "data/maps/MtChimney/scripts.pory"

# 321 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 322 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 323 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 324 "data/maps/MtChimney/scripts.pory"
	return
# 325 "data/maps/MtChimney/scripts.pory"

# 326 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 327 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 328 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 329 "data/maps/MtChimney/scripts.pory"
	release
# 330 "data/maps/MtChimney/scripts.pory"
	end
# 331 "data/maps/MtChimney/scripts.pory"

# 332 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 333 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 334 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 335 "data/maps/MtChimney/scripts.pory"
	release
# 336 "data/maps/MtChimney/scripts.pory"
	end
# 337 "data/maps/MtChimney/scripts.pory"

# 338 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieKnockback:
# 339 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 340 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 341 "data/maps/MtChimney/scripts.pory"
	delay_16
# 342 "data/maps/MtChimney/scripts.pory"
	delay_16
# 343 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 344 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 345 "data/maps/MtChimney/scripts.pory"
	step_end
# 346 "data/maps/MtChimney/scripts.pory"

# 347 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 348 "data/maps/MtChimney/scripts.pory"
	walk_right
# 349 "data/maps/MtChimney/scripts.pory"
	step_end
# 350 "data/maps/MtChimney/scripts.pory"

# 351 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 352 "data/maps/MtChimney/scripts.pory"
	walk_left
# 353 "data/maps/MtChimney/scripts.pory"
	walk_left
# 354 "data/maps/MtChimney/scripts.pory"
	walk_left
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	walk_down
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_down
# 361 "data/maps/MtChimney/scripts.pory"
	step_end
# 362 "data/maps/MtChimney/scripts.pory"

# 363 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 364 "data/maps/MtChimney/scripts.pory"
	walk_down
# 365 "data/maps/MtChimney/scripts.pory"
	walk_right
# 366 "data/maps/MtChimney/scripts.pory"
	step_end
# 367 "data/maps/MtChimney/scripts.pory"

# 368 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 369 "data/maps/MtChimney/scripts.pory"
	walk_left
# 370 "data/maps/MtChimney/scripts.pory"
	walk_left
# 371 "data/maps/MtChimney/scripts.pory"
	walk_left
# 372 "data/maps/MtChimney/scripts.pory"
	walk_down
# 373 "data/maps/MtChimney/scripts.pory"
	walk_down
# 374 "data/maps/MtChimney/scripts.pory"
	walk_down
# 375 "data/maps/MtChimney/scripts.pory"
	walk_down
# 376 "data/maps/MtChimney/scripts.pory"
	walk_down
# 377 "data/maps/MtChimney/scripts.pory"
	walk_down
# 378 "data/maps/MtChimney/scripts.pory"
	walk_down
# 379 "data/maps/MtChimney/scripts.pory"
	walk_down
# 380 "data/maps/MtChimney/scripts.pory"
	step_end
# 381 "data/maps/MtChimney/scripts.pory"

# 382 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 383 "data/maps/MtChimney/scripts.pory"
	walk_down
# 384 "data/maps/MtChimney/scripts.pory"
	walk_down
# 385 "data/maps/MtChimney/scripts.pory"
	walk_down
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	walk_down
# 388 "data/maps/MtChimney/scripts.pory"
	walk_left
# 389 "data/maps/MtChimney/scripts.pory"
	walk_left
# 390 "data/maps/MtChimney/scripts.pory"
	walk_down
# 391 "data/maps/MtChimney/scripts.pory"
	walk_down
# 392 "data/maps/MtChimney/scripts.pory"
	walk_down
# 393 "data/maps/MtChimney/scripts.pory"
	walk_down
# 394 "data/maps/MtChimney/scripts.pory"
	walk_left
# 395 "data/maps/MtChimney/scripts.pory"
	walk_left
# 396 "data/maps/MtChimney/scripts.pory"
	walk_left
# 397 "data/maps/MtChimney/scripts.pory"
	walk_left
# 398 "data/maps/MtChimney/scripts.pory"
	walk_left
# 399 "data/maps/MtChimney/scripts.pory"
	walk_down
# 400 "data/maps/MtChimney/scripts.pory"
	step_end
# 401 "data/maps/MtChimney/scripts.pory"

# 402 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 403 "data/maps/MtChimney/scripts.pory"
	walk_down
# 404 "data/maps/MtChimney/scripts.pory"
	walk_down
# 405 "data/maps/MtChimney/scripts.pory"
	walk_down
# 406 "data/maps/MtChimney/scripts.pory"
	walk_down
# 407 "data/maps/MtChimney/scripts.pory"
	walk_left
# 408 "data/maps/MtChimney/scripts.pory"
	walk_left
# 409 "data/maps/MtChimney/scripts.pory"
	walk_left
# 410 "data/maps/MtChimney/scripts.pory"
	walk_down
# 411 "data/maps/MtChimney/scripts.pory"
	step_end
# 412 "data/maps/MtChimney/scripts.pory"

# 413 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 414 "data/maps/MtChimney/scripts.pory"
	walk_right
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
	walk_left
# 423 "data/maps/MtChimney/scripts.pory"
	walk_left
# 424 "data/maps/MtChimney/scripts.pory"
	walk_down
# 425 "data/maps/MtChimney/scripts.pory"
	walk_down
# 426 "data/maps/MtChimney/scripts.pory"
	walk_down
# 427 "data/maps/MtChimney/scripts.pory"
	walk_down
# 428 "data/maps/MtChimney/scripts.pory"
	step_end
# 429 "data/maps/MtChimney/scripts.pory"

# 430 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 431 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 432 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 433 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 434 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 435 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 436 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 437 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 438 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 439 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 440 "data/maps/MtChimney/scripts.pory"
	walk_left
# 441 "data/maps/MtChimney/scripts.pory"
	walk_left
# 442 "data/maps/MtChimney/scripts.pory"
	walk_down
# 443 "data/maps/MtChimney/scripts.pory"
	walk_down
# 444 "data/maps/MtChimney/scripts.pory"
	walk_down
# 445 "data/maps/MtChimney/scripts.pory"
	walk_left
# 446 "data/maps/MtChimney/scripts.pory"
	walk_left
# 447 "data/maps/MtChimney/scripts.pory"
	walk_down
# 448 "data/maps/MtChimney/scripts.pory"
	walk_down
# 449 "data/maps/MtChimney/scripts.pory"
	walk_left
# 450 "data/maps/MtChimney/scripts.pory"
	walk_left
# 451 "data/maps/MtChimney/scripts.pory"
	walk_left
# 452 "data/maps/MtChimney/scripts.pory"
	walk_left
# 453 "data/maps/MtChimney/scripts.pory"
	walk_left
# 454 "data/maps/MtChimney/scripts.pory"
	walk_down
# 455 "data/maps/MtChimney/scripts.pory"
	step_end
# 456 "data/maps/MtChimney/scripts.pory"

# 457 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 458 "data/maps/MtChimney/scripts.pory"
	delay_16
# 459 "data/maps/MtChimney/scripts.pory"
	delay_16
# 460 "data/maps/MtChimney/scripts.pory"
	delay_16
# 461 "data/maps/MtChimney/scripts.pory"
	walk_down
# 462 "data/maps/MtChimney/scripts.pory"
	walk_down
# 463 "data/maps/MtChimney/scripts.pory"
	walk_down
# 464 "data/maps/MtChimney/scripts.pory"
	walk_left
# 465 "data/maps/MtChimney/scripts.pory"
	walk_left
# 466 "data/maps/MtChimney/scripts.pory"
	walk_left
# 467 "data/maps/MtChimney/scripts.pory"
	walk_down
# 468 "data/maps/MtChimney/scripts.pory"
	step_end
# 469 "data/maps/MtChimney/scripts.pory"

# 470 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 471 "data/maps/MtChimney/scripts.pory"
	delay_16
# 472 "data/maps/MtChimney/scripts.pory"
	walk_left
# 473 "data/maps/MtChimney/scripts.pory"
	walk_down
# 474 "data/maps/MtChimney/scripts.pory"
	walk_down
# 475 "data/maps/MtChimney/scripts.pory"
	walk_down
# 476 "data/maps/MtChimney/scripts.pory"
	walk_down
# 477 "data/maps/MtChimney/scripts.pory"
	walk_left
# 478 "data/maps/MtChimney/scripts.pory"
	walk_left
# 479 "data/maps/MtChimney/scripts.pory"
	walk_left
# 480 "data/maps/MtChimney/scripts.pory"
	walk_left
# 481 "data/maps/MtChimney/scripts.pory"
	walk_left
# 482 "data/maps/MtChimney/scripts.pory"
	walk_down
# 483 "data/maps/MtChimney/scripts.pory"
	walk_down
# 484 "data/maps/MtChimney/scripts.pory"
	walk_down
# 485 "data/maps/MtChimney/scripts.pory"
	walk_down
# 486 "data/maps/MtChimney/scripts.pory"
	step_end
# 487 "data/maps/MtChimney/scripts.pory"

# 488 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 489 "data/maps/MtChimney/scripts.pory"
	delay_16
# 490 "data/maps/MtChimney/scripts.pory"
	walk_left
# 491 "data/maps/MtChimney/scripts.pory"
	walk_left
# 492 "data/maps/MtChimney/scripts.pory"
	walk_down
# 493 "data/maps/MtChimney/scripts.pory"
	walk_down
# 494 "data/maps/MtChimney/scripts.pory"
	walk_down
# 495 "data/maps/MtChimney/scripts.pory"
	walk_left
# 496 "data/maps/MtChimney/scripts.pory"
	walk_left
# 497 "data/maps/MtChimney/scripts.pory"
	walk_down
# 498 "data/maps/MtChimney/scripts.pory"
	walk_down
# 499 "data/maps/MtChimney/scripts.pory"
	walk_left
# 500 "data/maps/MtChimney/scripts.pory"
	walk_left
# 501 "data/maps/MtChimney/scripts.pory"
	walk_left
# 502 "data/maps/MtChimney/scripts.pory"
	walk_left
# 503 "data/maps/MtChimney/scripts.pory"
	walk_left
# 504 "data/maps/MtChimney/scripts.pory"
	walk_down
# 505 "data/maps/MtChimney/scripts.pory"
	step_end
# 506 "data/maps/MtChimney/scripts.pory"

# 507 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 508 "data/maps/MtChimney/scripts.pory"
	delay_16
# 509 "data/maps/MtChimney/scripts.pory"
	walk_down
# 510 "data/maps/MtChimney/scripts.pory"
	walk_left
# 511 "data/maps/MtChimney/scripts.pory"
	walk_left
# 512 "data/maps/MtChimney/scripts.pory"
	walk_left
# 513 "data/maps/MtChimney/scripts.pory"
	walk_left
# 514 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 515 "data/maps/MtChimney/scripts.pory"
	step_end
# 516 "data/maps/MtChimney/scripts.pory"

# 517 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 518 "data/maps/MtChimney/scripts.pory"
	walk_down
# 519 "data/maps/MtChimney/scripts.pory"
	walk_down
# 520 "data/maps/MtChimney/scripts.pory"
	walk_down
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
	walk_left
# 527 "data/maps/MtChimney/scripts.pory"
	walk_down
# 528 "data/maps/MtChimney/scripts.pory"
	walk_down
# 529 "data/maps/MtChimney/scripts.pory"
	walk_down
# 530 "data/maps/MtChimney/scripts.pory"
	walk_down
# 531 "data/maps/MtChimney/scripts.pory"
	step_end
# 532 "data/maps/MtChimney/scripts.pory"

# 533 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 534 "data/maps/MtChimney/scripts.pory"
	walk_down
# 535 "data/maps/MtChimney/scripts.pory"
	step_end
# 536 "data/maps/MtChimney/scripts.pory"

# 537 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 538 "data/maps/MtChimney/scripts.pory"
	walk_down
# 539 "data/maps/MtChimney/scripts.pory"
	walk_down
# 540 "data/maps/MtChimney/scripts.pory"
	walk_down
# 541 "data/maps/MtChimney/scripts.pory"
	walk_down
# 542 "data/maps/MtChimney/scripts.pory"
	walk_down
# 543 "data/maps/MtChimney/scripts.pory"
	walk_down
# 544 "data/maps/MtChimney/scripts.pory"
	walk_down
# 545 "data/maps/MtChimney/scripts.pory"
	step_end
# 546 "data/maps/MtChimney/scripts.pory"

# 547 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 548 "data/maps/MtChimney/scripts.pory"
	delay_16
# 549 "data/maps/MtChimney/scripts.pory"
	delay_16
# 550 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 551 "data/maps/MtChimney/scripts.pory"
	delay_16
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
MtChimney_Movement_Unused13:
# 560 "data/maps/MtChimney/scripts.pory"
	delay_16
# 561 "data/maps/MtChimney/scripts.pory"
	delay_16
# 562 "data/maps/MtChimney/scripts.pory"
	delay_16
# 563 "data/maps/MtChimney/scripts.pory"
	delay_16
# 564 "data/maps/MtChimney/scripts.pory"
	delay_16
# 565 "data/maps/MtChimney/scripts.pory"
	delay_16
# 566 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 567 "data/maps/MtChimney/scripts.pory"
	delay_16
# 568 "data/maps/MtChimney/scripts.pory"
	walk_down
# 569 "data/maps/MtChimney/scripts.pory"
	walk_down
# 570 "data/maps/MtChimney/scripts.pory"
	step_end
# 571 "data/maps/MtChimney/scripts.pory"

# 572 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 573 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 574 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 575 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 576 "data/maps/MtChimney/scripts.pory"
	face_right
# 577 "data/maps/MtChimney/scripts.pory"
	step_end
# 578 "data/maps/MtChimney/scripts.pory"

# 579 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 580 "data/maps/MtChimney/scripts.pory"
	walk_left
# 581 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 582 "data/maps/MtChimney/scripts.pory"
	delay_16
# 583 "data/maps/MtChimney/scripts.pory"
	step_end
# 584 "data/maps/MtChimney/scripts.pory"

# 585 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 586 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 587 "data/maps/MtChimney/scripts.pory"
	end
# 588 "data/maps/MtChimney/scripts.pory"

# 589 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 590 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 591 "data/maps/MtChimney/scripts.pory"
	end
# 592 "data/maps/MtChimney/scripts.pory"

# 593 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 594 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 595 "data/maps/MtChimney/scripts.pory"
	end
# 596 "data/maps/MtChimney/scripts.pory"

# 597 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 598 "data/maps/MtChimney/scripts.pory"
lockall
# 599 "data/maps/MtChimney/scripts.pory"
applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 600 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 601 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 602 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 603 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 604 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaIntro, MSGBOX_AUTOCLOSE
# 605 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_TabithaDoMultiBattle
# 606 "data/maps/MtChimney/scripts.pory"
releaseall
# 607 "data/maps/MtChimney/scripts.pory"
end
# 608 "data/maps/MtChimney/scripts.pory"

# 609 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaDoMultiBattle::
# 610 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 611 "data/maps/MtChimney/scripts.pory"
	multi_2p_vs_1 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, PARTNER_EMMIE
# 612 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 613 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_TabithaVictory
# 614 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 615 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 616 "data/maps/MtChimney/scripts.pory"
	waitstate
# 617 "data/maps/MtChimney/scripts.pory"

# 618 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaVictory::
# 619 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 620 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 621 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 622 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 623 "data/maps/MtChimney/scripts.pory"
end
# 624 "data/maps/MtChimney/scripts.pory"

# 625 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha2::
# 626 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 627 "data/maps/MtChimney/scripts.pory"
	end
# 628 "data/maps/MtChimney/scripts.pory"

# 629 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2::
# 630 "data/maps/MtChimney/scripts.pory"
lockall
# 631 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_1
# 632 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 633 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 634 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 635 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 636 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 637 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 638 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 639 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_2
# 640 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 641 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 642 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 643 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 644 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 645 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 646 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2Intro, MSGBOX_AUTOCLOSE
# 647 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_Grunt1Grunt2DoMultiBattle
# 648 "data/maps/MtChimney/scripts.pory"
releaseall
# 649 "data/maps/MtChimney/scripts.pory"
end
# 650 "data/maps/MtChimney/scripts.pory"

# 651 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2DoMultiBattle::
# 652 "data/maps/MtChimney/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 653 "data/maps/MtChimney/scripts.pory"
multi_2p_vs_1 TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Defeat, PARTNER_EMMIE
# 654 "data/maps/MtChimney/scripts.pory"
switch VAR_RESULT
# 655 "data/maps/MtChimney/scripts.pory"
case 1, MtChimney_EventScript_Grunt1Grunt2Victory
# 656 "data/maps/MtChimney/scripts.pory"
fadescreen FADE_TO_BLACK
# 657 "data/maps/MtChimney/scripts.pory"
special SetCB2WhiteOut
# 658 "data/maps/MtChimney/scripts.pory"
waitstate
# 659 "data/maps/MtChimney/scripts.pory"

# 660 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2Victory::
# 661 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 662 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 663 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 664 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 665 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 666 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 667 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 668 "data/maps/MtChimney/scripts.pory"
end
# 669 "data/maps/MtChimney/scripts.pory"

# 670 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 671 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 672 "data/maps/MtChimney/scripts.pory"
	end
# 673 "data/maps/MtChimney/scripts.pory"

# 674 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 675 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 676 "data/maps/MtChimney/scripts.pory"
	end
# 677 "data/maps/MtChimney/scripts.pory"

# 678 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 679 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 680 "data/maps/MtChimney/scripts.pory"
	end
# 681 "data/maps/MtChimney/scripts.pory"

# 682 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 683 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 684 "data/maps/MtChimney/scripts.pory"
	end
# 685 "data/maps/MtChimney/scripts.pory"

# 686 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 687 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 688 "data/maps/MtChimney/scripts.pory"
	end
# 689 "data/maps/MtChimney/scripts.pory"

# 690 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 691 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 692 "data/maps/MtChimney/scripts.pory"
	end
# 693 "data/maps/MtChimney/scripts.pory"

# 694 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 695 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 696 "data/maps/MtChimney/scripts.pory"
	end
# 697 "data/maps/MtChimney/scripts.pory"

# 698 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 699 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 700 "data/maps/MtChimney/scripts.pory"
	end
# 701 "data/maps/MtChimney/scripts.pory"

# 702 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 703 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 704 "data/maps/MtChimney/scripts.pory"
	end
# 705 "data/maps/MtChimney/scripts.pory"

# 706 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 707 "data/maps/MtChimney/scripts.pory"
	lockall
# 708 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 709 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 710 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 711 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 712 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 713 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 714 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 715 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 716 "data/maps/MtChimney/scripts.pory"
	releaseall
# 717 "data/maps/MtChimney/scripts.pory"
	end
# 718 "data/maps/MtChimney/scripts.pory"

# 719 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 720 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 721 "data/maps/MtChimney/scripts.pory"
	releaseall
# 722 "data/maps/MtChimney/scripts.pory"
	end
# 723 "data/maps/MtChimney/scripts.pory"

# 724 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 725 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 726 "data/maps/MtChimney/scripts.pory"
	releaseall
# 727 "data/maps/MtChimney/scripts.pory"
	end
# 728 "data/maps/MtChimney/scripts.pory"

# 729 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 730 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 731 "data/maps/MtChimney/scripts.pory"
	releaseall
# 732 "data/maps/MtChimney/scripts.pory"
	end
# 733 "data/maps/MtChimney/scripts.pory"

# 734 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 735 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 736 "data/maps/MtChimney/scripts.pory"
	end
# 737 "data/maps/MtChimney/scripts.pory"

# 738 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 739 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 740 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 741 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 742 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 743 "data/maps/MtChimney/scripts.pory"
	release
# 744 "data/maps/MtChimney/scripts.pory"
	end
# 745 "data/maps/MtChimney/scripts.pory"

# 746 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 747 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 748 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 749 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 750 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 751 "data/maps/MtChimney/scripts.pory"
	release
# 752 "data/maps/MtChimney/scripts.pory"
	end
# 753 "data/maps/MtChimney/scripts.pory"

# 754 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 755 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 756 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 757 "data/maps/MtChimney/scripts.pory"
	end
# 758 "data/maps/MtChimney/scripts.pory"

# 759 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 760 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 761 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 762 "data/maps/MtChimney/scripts.pory"
	end
# 763 "data/maps/MtChimney/scripts.pory"

# 764 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 765 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 766 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 767 "data/maps/MtChimney/scripts.pory"
	end
# 768 "data/maps/MtChimney/scripts.pory"

# 769 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 770 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 771 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 772 "data/maps/MtChimney/scripts.pory"
	end
# 773 "data/maps/MtChimney/scripts.pory"

# 774 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 775 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 776 "data/maps/MtChimney/scripts.pory"
	end
# 777 "data/maps/MtChimney/scripts.pory"

# 778 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 779 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 780 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 781 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 782 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 783 "data/maps/MtChimney/scripts.pory"
	release
# 784 "data/maps/MtChimney/scripts.pory"
	end
# 785 "data/maps/MtChimney/scripts.pory"

# 786 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 787 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 788 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 789 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 790 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 791 "data/maps/MtChimney/scripts.pory"
	release
# 792 "data/maps/MtChimney/scripts.pory"
	end
# 793 "data/maps/MtChimney/scripts.pory"

# 794 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 795 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 796 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 797 "data/maps/MtChimney/scripts.pory"
	end
# 798 "data/maps/MtChimney/scripts.pory"

# 799 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 800 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 804 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 805 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 806 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 807 "data/maps/MtChimney/scripts.pory"

# 808 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 809 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 813 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 824 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 826 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 829 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 831 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 832 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 835 "data/maps/MtChimney/scripts.pory"

# 836 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 837 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 843 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 844 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 845 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 847 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 848 "data/maps/MtChimney/scripts.pory"

# 849 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 850 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 851 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 852 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 853 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 854 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 855 "data/maps/MtChimney/scripts.pory"

# 856 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 857 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 858 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 860 "data/maps/MtChimney/scripts.pory"

# 861 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 862 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 863 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 864 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 865 "data/maps/MtChimney/scripts.pory"

# 866 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 867 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 868 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 869 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 870 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 871 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 872 "data/maps/MtChimney/scripts.pory"

# 873 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 874 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 875 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 876 "data/maps/MtChimney/scripts.pory"

# 877 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 878 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 879 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 880 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 881 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 882 "data/maps/MtChimney/scripts.pory"

# 883 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 884 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 885 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 886 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 887 "data/maps/MtChimney/scripts.pory"

# 888 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 889 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 890 "data/maps/MtChimney/scripts.pory"

# 891 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 892 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 893 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 894 "data/maps/MtChimney/scripts.pory"

# 895 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 896 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 897 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 898 "data/maps/MtChimney/scripts.pory"

# 899 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 900 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 901 "data/maps/MtChimney/scripts.pory"

# 902 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 903 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 904 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 905 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 906 "data/maps/MtChimney/scripts.pory"

# 907 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 908 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 909 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 910 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 911 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 912 "data/maps/MtChimney/scripts.pory"

# 913 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 914 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 915 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 916 "data/maps/MtChimney/scripts.pory"

# 917 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 918 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 919 "data/maps/MtChimney/scripts.pory"

# 920 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 921 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 922 "data/maps/MtChimney/scripts.pory"

# 923 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyGoStopTeamMagma:
# 924 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grr, {PLAYER}!\n"
# 925 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 926 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 927 "data/maps/MtChimney/scripts.pory"
	.string "of Team Magma are up to!\p"
# 928 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 929 "data/maps/MtChimney/scripts.pory"
	.string "Meteorite's power into the volcano!\p"
# 930 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 931 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 932 "data/maps/MtChimney/scripts.pory"

# 933 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyIHaveMyHandsFull:
# 934 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grrr…\n"
# 935 "data/maps/MtChimney/scripts.pory"
	.string "The boss went on to stop Maxie!\p"
# 936 "data/maps/MtChimney/scripts.pory"
	.string "Somebody needs to help him!\p"
# 937 "data/maps/MtChimney/scripts.pory"
	.string "I can't when I have my hands full\n"
# 938 "data/maps/MtChimney/scripts.pory"
	.string "battling three opponents at once!$"
# 939 "data/maps/MtChimney/scripts.pory"

# 940 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 941 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 942 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 943 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 944 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 945 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 946 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 947 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 948 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 949 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 950 "data/maps/MtChimney/scripts.pory"
	.string "As thanks, please take this, the HM for\n"
# 951 "data/maps/MtChimney/scripts.pory"
	.string "Surf.\p"
# 952 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 953 "data/maps/MtChimney/scripts.pory"

# 954 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 955 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 956 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 957 "data/maps/MtChimney/scripts.pory"

# 958 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 959 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 960 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 961 "data/maps/MtChimney/scripts.pory"

# 962 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 963 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 964 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 965 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 966 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 967 "data/maps/MtChimney/scripts.pory"

# 968 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 969 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 970 "data/maps/MtChimney/scripts.pory"

# 971 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 972 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 973 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 974 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 975 "data/maps/MtChimney/scripts.pory"

# 976 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 977 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 978 "data/maps/MtChimney/scripts.pory"

# 979 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 980 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 981 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 982 "data/maps/MtChimney/scripts.pory"

# 983 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 984 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 985 "data/maps/MtChimney/scripts.pory"

# 986 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 987 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 988 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 989 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 990 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 991 "data/maps/MtChimney/scripts.pory"

# 992 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 993 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 994 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 995 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 996 "data/maps/MtChimney/scripts.pory"

# 997 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 998 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 999 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 1000 "data/maps/MtChimney/scripts.pory"

# 1001 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 1002 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 1003 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 1004 "data/maps/MtChimney/scripts.pory"

# 1005 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 1006 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 1007 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 1008 "data/maps/MtChimney/scripts.pory"

# 1009 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 1010 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 1011 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 1012 "data/maps/MtChimney/scripts.pory"

# 1013 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 1014 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 1015 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 1016 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 1017 "data/maps/MtChimney/scripts.pory"

# 1018 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 1019 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1020 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1021 "data/maps/MtChimney/scripts.pory"

# 1022 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 1023 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 1024 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 1025 "data/maps/MtChimney/scripts.pory"

# 1026 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 1027 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 1028 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 1029 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 1030 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 1031 "data/maps/MtChimney/scripts.pory"

# 1032 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 1033 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 1034 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 1035 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 1036 "data/maps/MtChimney/scripts.pory"

# 1037 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 1038 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1039 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1040 "data/maps/MtChimney/scripts.pory"

# 1041 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 1042 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 1043 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 1044 "data/maps/MtChimney/scripts.pory"

# 1045 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 1046 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 1047 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 1048 "data/maps/MtChimney/scripts.pory"

# 1049 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 1050 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 1051 "data/maps/MtChimney/scripts.pory"

# 1052 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 1053 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 1054 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 1055 "data/maps/MtChimney/scripts.pory"

# 1056 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 1057 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 1058 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 1059 "data/maps/MtChimney/scripts.pory"

# 1060 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 1061 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 1062 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 1063 "data/maps/MtChimney/scripts.pory"

# 1064 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 1065 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 1066 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 1067 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 1068 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 1069 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 1070 "data/maps/MtChimney/scripts.pory"

# 1071 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 1072 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 1073 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 1074 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 1075 "data/maps/MtChimney/scripts.pory"

# 1076 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 1077 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 1078 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 1079 "data/maps/MtChimney/scripts.pory"

# 1080 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 1081 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 1082 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 1083 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 1084 "data/maps/MtChimney/scripts.pory"

# 1085 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 1086 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 1087 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 1088 "data/maps/MtChimney/scripts.pory"

# 1089 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 1090 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 1091 "data/maps/MtChimney/scripts.pory"

# 1092 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 1093 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 1094 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 1095 "data/maps/MtChimney/scripts.pory"

# 1096 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 1097 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 1098 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 1099 "data/maps/MtChimney/scripts.pory"

# 1100 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 1101 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 1102 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 1103 "data/maps/MtChimney/scripts.pory"

# 1104 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 1105 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 1106 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 1107 "data/maps/MtChimney/scripts.pory"

# 1108 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 1109 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 1110 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
# 1111 "data/maps/MtChimney/scripts.pory"

# 1112 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieDontDoThis:
# 1113 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Maxie! You must not go through\n"
# 1114 "data/maps/MtChimney/scripts.pory"
	.string "with this!$"
# 1115 "data/maps/MtChimney/scripts.pory"

# 1116 "data/maps/MtChimney/scripts.pory"
Mtchimney_Text_MaxieCannotStopMe:
# 1117 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: Fufufu… Now, now Archie…\n"
# 1118 "data/maps/MtChimney/scripts.pory"
	.string "Is this really the best you can do?$"
# 1119 "data/maps/MtChimney/scripts.pory"

# 1120 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchiePleaseStopMaxie:
# 1121 "data/maps/MtChimney/scripts.pory"
	.string "Archie: {PLAYER}, I warned you\n"
# 1122 "data/maps/MtChimney/scripts.pory"
	.string "about Team Magma.\p"
# 1123 "data/maps/MtChimney/scripts.pory"
	.string "Please, you must help me stop Maxie!$"

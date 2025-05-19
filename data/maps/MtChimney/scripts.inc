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
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_EmmiePositionForMaxieFightEast
# 144 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_EmmiePositionForMaxieFightNorth
# 145 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 146 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 147 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 148 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 149 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 150 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 151 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 152 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 153 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 154 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MaxieDoMultiBattle
# 155 "data/maps/MtChimney/scripts.pory"
	releaseall
# 156 "data/maps/MtChimney/scripts.pory"
	end
# 157 "data/maps/MtChimney/scripts.pory"

# 158 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieDoMultiBattle::
# 159 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 160 "data/maps/MtChimney/scripts.pory"
	multi_2p_vs_1 TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat, PARTNER_EMMIE
# 161 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_MaxieVictory
# 163 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 165 "data/maps/MtChimney/scripts.pory"
	waitstate
# 166 "data/maps/MtChimney/scripts.pory"

# 167 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieVictory::
# 168 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 169 "data/maps/MtChimney/scripts.pory"
	closemessage
# 170 "data/maps/MtChimney/scripts.pory"
	delay 30
# 171 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_EmmieMoveForMaxie
# 172 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_PlayerMoveForMaxie
# 173 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 174 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 175 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 176 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 177 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 178 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 179 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 180 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 181 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 182 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 183 "data/maps/MtChimney/scripts.pory"
	closemessage
# 184 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_HM_SURF
# 185 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 186 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 187 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 188 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_AQUA_2
# 189 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 190 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 191 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 192 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 193 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 194 "data/maps/MtChimney/scripts.pory"
	releaseall
# 195 "data/maps/MtChimney/scripts.pory"
	end
# 196 "data/maps/MtChimney/scripts.pory"

# 197 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmieMoveForMaxie::
# 198 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_MoveForMaxie
# 199 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 200 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaExit
# 201 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 202 "data/maps/MtChimney/scripts.pory"
	return
# 203 "data/maps/MtChimney/scripts.pory"

# 204 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_PlayerMoveForMaxie::
# 205 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_MoveForMaxie
# 206 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 207 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaExit
# 208 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 209 "data/maps/MtChimney/scripts.pory"
	return
# 210 "data/maps/MtChimney/scripts.pory"

# 211 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieExit:
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 213 "data/maps/MtChimney/scripts.pory"
	walk_left
# 214 "data/maps/MtChimney/scripts.pory"
	walk_left
# 215 "data/maps/MtChimney/scripts.pory"
	walk_left
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	walk_left
# 218 "data/maps/MtChimney/scripts.pory"
	walk_down
# 219 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	step_end
# 226 "data/maps/MtChimney/scripts.pory"

# 227 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_TabithaExit:
# 228 "data/maps/MtChimney/scripts.pory"
	delay_16
# 229 "data/maps/MtChimney/scripts.pory"
	delay_16
# 230 "data/maps/MtChimney/scripts.pory"
	delay_16
# 231 "data/maps/MtChimney/scripts.pory"
	delay_16
# 232 "data/maps/MtChimney/scripts.pory"
	delay_16
# 233 "data/maps/MtChimney/scripts.pory"
	delay_16
# 234 "data/maps/MtChimney/scripts.pory"
	delay_16
# 235 "data/maps/MtChimney/scripts.pory"
	walk_right
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
	step_end
# 242 "data/maps/MtChimney/scripts.pory"

# 243 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MoveForMaxie:
# 244 "data/maps/MtChimney/scripts.pory"
	face_left
# 245 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 246 "data/maps/MtChimney/scripts.pory"
	walk_right
# 247 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 248 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 249 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 250 "data/maps/MtChimney/scripts.pory"
	step_end
# 251 "data/maps/MtChimney/scripts.pory"

# 252 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 253 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 254 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 255 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 256 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 257 "data/maps/MtChimney/scripts.pory"
	return
# 258 "data/maps/MtChimney/scripts.pory"

# 259 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 260 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 261 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 262 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 263 "data/maps/MtChimney/scripts.pory"
	return
# 264 "data/maps/MtChimney/scripts.pory"

# 265 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 266 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 267 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 268 "data/maps/MtChimney/scripts.pory"
	return
# 269 "data/maps/MtChimney/scripts.pory"

# 270 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 271 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 272 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 273 "data/maps/MtChimney/scripts.pory"
	return
# 274 "data/maps/MtChimney/scripts.pory"

# 275 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 276 "data/maps/MtChimney/scripts.pory"
	lock
# 277 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 278 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 279 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 280 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 281 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 282 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 283 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 284 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 285 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 286 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 287 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 288 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 289 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 290 "data/maps/MtChimney/scripts.pory"
	release
# 291 "data/maps/MtChimney/scripts.pory"
	end
# 292 "data/maps/MtChimney/scripts.pory"

# 293 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 294 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 295 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 296 "data/maps/MtChimney/scripts.pory"
	release
# 297 "data/maps/MtChimney/scripts.pory"
	end
# 298 "data/maps/MtChimney/scripts.pory"
.else
# 299 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 300 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 301 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 302 "data/maps/MtChimney/scripts.pory"
	release
# 303 "data/maps/MtChimney/scripts.pory"
	end
# 304 "data/maps/MtChimney/scripts.pory"

# 305 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 306 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 307 "data/maps/MtChimney/scripts.pory"
	release
# 308 "data/maps/MtChimney/scripts.pory"
	end
# 309 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 310 "data/maps/MtChimney/scripts.pory"

# 311 "data/maps/MtChimney/scripts.pory"

# 312 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 313 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 314 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 315 "data/maps/MtChimney/scripts.pory"
	return
# 316 "data/maps/MtChimney/scripts.pory"

# 317 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 318 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 319 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 320 "data/maps/MtChimney/scripts.pory"
	release
# 321 "data/maps/MtChimney/scripts.pory"
	end
# 322 "data/maps/MtChimney/scripts.pory"

# 323 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 324 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 325 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 326 "data/maps/MtChimney/scripts.pory"
	release
# 327 "data/maps/MtChimney/scripts.pory"
	end
# 328 "data/maps/MtChimney/scripts.pory"

# 329 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieKnockback:
# 330 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 331 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 332 "data/maps/MtChimney/scripts.pory"
	delay_16
# 333 "data/maps/MtChimney/scripts.pory"
	delay_16
# 334 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 335 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 336 "data/maps/MtChimney/scripts.pory"
	step_end
# 337 "data/maps/MtChimney/scripts.pory"

# 338 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 339 "data/maps/MtChimney/scripts.pory"
	walk_right
# 340 "data/maps/MtChimney/scripts.pory"
	step_end
# 341 "data/maps/MtChimney/scripts.pory"

# 342 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 343 "data/maps/MtChimney/scripts.pory"
	walk_left
# 344 "data/maps/MtChimney/scripts.pory"
	walk_left
# 345 "data/maps/MtChimney/scripts.pory"
	walk_left
# 346 "data/maps/MtChimney/scripts.pory"
	walk_down
# 347 "data/maps/MtChimney/scripts.pory"
	walk_down
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	walk_down
# 352 "data/maps/MtChimney/scripts.pory"
	step_end
# 353 "data/maps/MtChimney/scripts.pory"

# 354 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	walk_right
# 357 "data/maps/MtChimney/scripts.pory"
	step_end
# 358 "data/maps/MtChimney/scripts.pory"

# 359 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 360 "data/maps/MtChimney/scripts.pory"
	walk_left
# 361 "data/maps/MtChimney/scripts.pory"
	walk_left
# 362 "data/maps/MtChimney/scripts.pory"
	walk_left
# 363 "data/maps/MtChimney/scripts.pory"
	walk_down
# 364 "data/maps/MtChimney/scripts.pory"
	walk_down
# 365 "data/maps/MtChimney/scripts.pory"
	walk_down
# 366 "data/maps/MtChimney/scripts.pory"
	walk_down
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	walk_down
# 369 "data/maps/MtChimney/scripts.pory"
	walk_down
# 370 "data/maps/MtChimney/scripts.pory"
	walk_down
# 371 "data/maps/MtChimney/scripts.pory"
	step_end
# 372 "data/maps/MtChimney/scripts.pory"

# 373 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
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
	walk_left
# 380 "data/maps/MtChimney/scripts.pory"
	walk_left
# 381 "data/maps/MtChimney/scripts.pory"
	walk_down
# 382 "data/maps/MtChimney/scripts.pory"
	walk_down
# 383 "data/maps/MtChimney/scripts.pory"
	walk_down
# 384 "data/maps/MtChimney/scripts.pory"
	walk_down
# 385 "data/maps/MtChimney/scripts.pory"
	walk_left
# 386 "data/maps/MtChimney/scripts.pory"
	walk_left
# 387 "data/maps/MtChimney/scripts.pory"
	walk_left
# 388 "data/maps/MtChimney/scripts.pory"
	walk_left
# 389 "data/maps/MtChimney/scripts.pory"
	walk_left
# 390 "data/maps/MtChimney/scripts.pory"
	walk_down
# 391 "data/maps/MtChimney/scripts.pory"
	step_end
# 392 "data/maps/MtChimney/scripts.pory"

# 393 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 394 "data/maps/MtChimney/scripts.pory"
	walk_down
# 395 "data/maps/MtChimney/scripts.pory"
	walk_down
# 396 "data/maps/MtChimney/scripts.pory"
	walk_down
# 397 "data/maps/MtChimney/scripts.pory"
	walk_down
# 398 "data/maps/MtChimney/scripts.pory"
	walk_left
# 399 "data/maps/MtChimney/scripts.pory"
	walk_left
# 400 "data/maps/MtChimney/scripts.pory"
	walk_left
# 401 "data/maps/MtChimney/scripts.pory"
	walk_down
# 402 "data/maps/MtChimney/scripts.pory"
	step_end
# 403 "data/maps/MtChimney/scripts.pory"

# 404 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 405 "data/maps/MtChimney/scripts.pory"
	walk_right
# 406 "data/maps/MtChimney/scripts.pory"
	walk_down
# 407 "data/maps/MtChimney/scripts.pory"
	walk_down
# 408 "data/maps/MtChimney/scripts.pory"
	walk_down
# 409 "data/maps/MtChimney/scripts.pory"
	walk_down
# 410 "data/maps/MtChimney/scripts.pory"
	walk_left
# 411 "data/maps/MtChimney/scripts.pory"
	walk_left
# 412 "data/maps/MtChimney/scripts.pory"
	walk_left
# 413 "data/maps/MtChimney/scripts.pory"
	walk_left
# 414 "data/maps/MtChimney/scripts.pory"
	walk_left
# 415 "data/maps/MtChimney/scripts.pory"
	walk_down
# 416 "data/maps/MtChimney/scripts.pory"
	walk_down
# 417 "data/maps/MtChimney/scripts.pory"
	walk_down
# 418 "data/maps/MtChimney/scripts.pory"
	walk_down
# 419 "data/maps/MtChimney/scripts.pory"
	step_end
# 420 "data/maps/MtChimney/scripts.pory"

# 421 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 422 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 423 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 424 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 425 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 426 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 427 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 428 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 429 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 430 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 431 "data/maps/MtChimney/scripts.pory"
	walk_left
# 432 "data/maps/MtChimney/scripts.pory"
	walk_left
# 433 "data/maps/MtChimney/scripts.pory"
	walk_down
# 434 "data/maps/MtChimney/scripts.pory"
	walk_down
# 435 "data/maps/MtChimney/scripts.pory"
	walk_down
# 436 "data/maps/MtChimney/scripts.pory"
	walk_left
# 437 "data/maps/MtChimney/scripts.pory"
	walk_left
# 438 "data/maps/MtChimney/scripts.pory"
	walk_down
# 439 "data/maps/MtChimney/scripts.pory"
	walk_down
# 440 "data/maps/MtChimney/scripts.pory"
	walk_left
# 441 "data/maps/MtChimney/scripts.pory"
	walk_left
# 442 "data/maps/MtChimney/scripts.pory"
	walk_left
# 443 "data/maps/MtChimney/scripts.pory"
	walk_left
# 444 "data/maps/MtChimney/scripts.pory"
	walk_left
# 445 "data/maps/MtChimney/scripts.pory"
	walk_down
# 446 "data/maps/MtChimney/scripts.pory"
	step_end
# 447 "data/maps/MtChimney/scripts.pory"

# 448 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 449 "data/maps/MtChimney/scripts.pory"
	delay_16
# 450 "data/maps/MtChimney/scripts.pory"
	delay_16
# 451 "data/maps/MtChimney/scripts.pory"
	delay_16
# 452 "data/maps/MtChimney/scripts.pory"
	walk_down
# 453 "data/maps/MtChimney/scripts.pory"
	walk_down
# 454 "data/maps/MtChimney/scripts.pory"
	walk_down
# 455 "data/maps/MtChimney/scripts.pory"
	walk_left
# 456 "data/maps/MtChimney/scripts.pory"
	walk_left
# 457 "data/maps/MtChimney/scripts.pory"
	walk_left
# 458 "data/maps/MtChimney/scripts.pory"
	walk_down
# 459 "data/maps/MtChimney/scripts.pory"
	step_end
# 460 "data/maps/MtChimney/scripts.pory"

# 461 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 462 "data/maps/MtChimney/scripts.pory"
	delay_16
# 463 "data/maps/MtChimney/scripts.pory"
	walk_left
# 464 "data/maps/MtChimney/scripts.pory"
	walk_down
# 465 "data/maps/MtChimney/scripts.pory"
	walk_down
# 466 "data/maps/MtChimney/scripts.pory"
	walk_down
# 467 "data/maps/MtChimney/scripts.pory"
	walk_down
# 468 "data/maps/MtChimney/scripts.pory"
	walk_left
# 469 "data/maps/MtChimney/scripts.pory"
	walk_left
# 470 "data/maps/MtChimney/scripts.pory"
	walk_left
# 471 "data/maps/MtChimney/scripts.pory"
	walk_left
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
	step_end
# 478 "data/maps/MtChimney/scripts.pory"

# 479 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 480 "data/maps/MtChimney/scripts.pory"
	delay_16
# 481 "data/maps/MtChimney/scripts.pory"
	walk_left
# 482 "data/maps/MtChimney/scripts.pory"
	walk_left
# 483 "data/maps/MtChimney/scripts.pory"
	walk_down
# 484 "data/maps/MtChimney/scripts.pory"
	walk_down
# 485 "data/maps/MtChimney/scripts.pory"
	walk_down
# 486 "data/maps/MtChimney/scripts.pory"
	walk_left
# 487 "data/maps/MtChimney/scripts.pory"
	walk_left
# 488 "data/maps/MtChimney/scripts.pory"
	walk_down
# 489 "data/maps/MtChimney/scripts.pory"
	walk_down
# 490 "data/maps/MtChimney/scripts.pory"
	walk_left
# 491 "data/maps/MtChimney/scripts.pory"
	walk_left
# 492 "data/maps/MtChimney/scripts.pory"
	walk_left
# 493 "data/maps/MtChimney/scripts.pory"
	walk_left
# 494 "data/maps/MtChimney/scripts.pory"
	walk_left
# 495 "data/maps/MtChimney/scripts.pory"
	walk_down
# 496 "data/maps/MtChimney/scripts.pory"
	step_end
# 497 "data/maps/MtChimney/scripts.pory"

# 498 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 499 "data/maps/MtChimney/scripts.pory"
	delay_16
# 500 "data/maps/MtChimney/scripts.pory"
	walk_down
# 501 "data/maps/MtChimney/scripts.pory"
	walk_left
# 502 "data/maps/MtChimney/scripts.pory"
	walk_left
# 503 "data/maps/MtChimney/scripts.pory"
	walk_left
# 504 "data/maps/MtChimney/scripts.pory"
	walk_left
# 505 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 506 "data/maps/MtChimney/scripts.pory"
	step_end
# 507 "data/maps/MtChimney/scripts.pory"

# 508 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 509 "data/maps/MtChimney/scripts.pory"
	walk_down
# 510 "data/maps/MtChimney/scripts.pory"
	walk_down
# 511 "data/maps/MtChimney/scripts.pory"
	walk_down
# 512 "data/maps/MtChimney/scripts.pory"
	walk_down
# 513 "data/maps/MtChimney/scripts.pory"
	walk_left
# 514 "data/maps/MtChimney/scripts.pory"
	walk_left
# 515 "data/maps/MtChimney/scripts.pory"
	walk_left
# 516 "data/maps/MtChimney/scripts.pory"
	walk_left
# 517 "data/maps/MtChimney/scripts.pory"
	walk_left
# 518 "data/maps/MtChimney/scripts.pory"
	walk_down
# 519 "data/maps/MtChimney/scripts.pory"
	walk_down
# 520 "data/maps/MtChimney/scripts.pory"
	walk_down
# 521 "data/maps/MtChimney/scripts.pory"
	walk_down
# 522 "data/maps/MtChimney/scripts.pory"
	step_end
# 523 "data/maps/MtChimney/scripts.pory"

# 524 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 525 "data/maps/MtChimney/scripts.pory"
	walk_down
# 526 "data/maps/MtChimney/scripts.pory"
	step_end
# 527 "data/maps/MtChimney/scripts.pory"

# 528 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 529 "data/maps/MtChimney/scripts.pory"
	walk_down
# 530 "data/maps/MtChimney/scripts.pory"
	walk_down
# 531 "data/maps/MtChimney/scripts.pory"
	walk_down
# 532 "data/maps/MtChimney/scripts.pory"
	walk_down
# 533 "data/maps/MtChimney/scripts.pory"
	walk_down
# 534 "data/maps/MtChimney/scripts.pory"
	walk_down
# 535 "data/maps/MtChimney/scripts.pory"
	walk_down
# 536 "data/maps/MtChimney/scripts.pory"
	step_end
# 537 "data/maps/MtChimney/scripts.pory"

# 538 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 539 "data/maps/MtChimney/scripts.pory"
	delay_16
# 540 "data/maps/MtChimney/scripts.pory"
	delay_16
# 541 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 542 "data/maps/MtChimney/scripts.pory"
	delay_16
# 543 "data/maps/MtChimney/scripts.pory"
	walk_down
# 544 "data/maps/MtChimney/scripts.pory"
	walk_down
# 545 "data/maps/MtChimney/scripts.pory"
	walk_down
# 546 "data/maps/MtChimney/scripts.pory"
	walk_down
# 547 "data/maps/MtChimney/scripts.pory"
	walk_down
# 548 "data/maps/MtChimney/scripts.pory"
	step_end
# 549 "data/maps/MtChimney/scripts.pory"

# 550 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 551 "data/maps/MtChimney/scripts.pory"
	delay_16
# 552 "data/maps/MtChimney/scripts.pory"
	delay_16
# 553 "data/maps/MtChimney/scripts.pory"
	delay_16
# 554 "data/maps/MtChimney/scripts.pory"
	delay_16
# 555 "data/maps/MtChimney/scripts.pory"
	delay_16
# 556 "data/maps/MtChimney/scripts.pory"
	delay_16
# 557 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 558 "data/maps/MtChimney/scripts.pory"
	delay_16
# 559 "data/maps/MtChimney/scripts.pory"
	walk_down
# 560 "data/maps/MtChimney/scripts.pory"
	walk_down
# 561 "data/maps/MtChimney/scripts.pory"
	step_end
# 562 "data/maps/MtChimney/scripts.pory"

# 563 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 564 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 565 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 566 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 567 "data/maps/MtChimney/scripts.pory"
	face_right
# 568 "data/maps/MtChimney/scripts.pory"
	step_end
# 569 "data/maps/MtChimney/scripts.pory"

# 570 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 571 "data/maps/MtChimney/scripts.pory"
	walk_left
# 572 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 573 "data/maps/MtChimney/scripts.pory"
	delay_16
# 574 "data/maps/MtChimney/scripts.pory"
	step_end
# 575 "data/maps/MtChimney/scripts.pory"

# 576 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 577 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 578 "data/maps/MtChimney/scripts.pory"
	end
# 579 "data/maps/MtChimney/scripts.pory"

# 580 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 581 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 582 "data/maps/MtChimney/scripts.pory"
	end
# 583 "data/maps/MtChimney/scripts.pory"

# 584 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 585 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 586 "data/maps/MtChimney/scripts.pory"
	end
# 587 "data/maps/MtChimney/scripts.pory"

# 588 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 589 "data/maps/MtChimney/scripts.pory"
lockall
# 590 "data/maps/MtChimney/scripts.pory"
applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 591 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 592 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 593 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 594 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 595 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaIntro, MSGBOX_AUTOCLOSE
# 596 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_TabithaDoMultiBattle
# 597 "data/maps/MtChimney/scripts.pory"
releaseall
# 598 "data/maps/MtChimney/scripts.pory"
end
# 599 "data/maps/MtChimney/scripts.pory"

# 600 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaDoMultiBattle::
# 601 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 602 "data/maps/MtChimney/scripts.pory"
	multi_2p_vs_1 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, PARTNER_EMMIE
# 603 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 604 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_TabithaVictory
# 605 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 606 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 607 "data/maps/MtChimney/scripts.pory"
	waitstate
# 608 "data/maps/MtChimney/scripts.pory"

# 609 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaVictory::
# 610 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 611 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 612 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 613 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 614 "data/maps/MtChimney/scripts.pory"
end
# 615 "data/maps/MtChimney/scripts.pory"

# 616 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha2::
# 617 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 618 "data/maps/MtChimney/scripts.pory"
	end
# 619 "data/maps/MtChimney/scripts.pory"

# 620 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2::
# 621 "data/maps/MtChimney/scripts.pory"
lockall
# 622 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_1
# 623 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 624 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 625 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 626 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 627 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 628 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 629 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 630 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_2
# 631 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 632 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 633 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 634 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 635 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 636 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 637 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2Intro, MSGBOX_AUTOCLOSE
# 638 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_Grunt1Grunt2DoMultiBattle
# 639 "data/maps/MtChimney/scripts.pory"
releaseall
# 640 "data/maps/MtChimney/scripts.pory"
end
# 641 "data/maps/MtChimney/scripts.pory"

# 642 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2DoMultiBattle::
# 643 "data/maps/MtChimney/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 644 "data/maps/MtChimney/scripts.pory"
multi_2p_vs_1 TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Defeat, PARTNER_EMMIE
# 645 "data/maps/MtChimney/scripts.pory"
switch VAR_RESULT
# 646 "data/maps/MtChimney/scripts.pory"
case 1, MtChimney_EventScript_Grunt1Grunt2Victory
# 647 "data/maps/MtChimney/scripts.pory"
fadescreen FADE_TO_BLACK
# 648 "data/maps/MtChimney/scripts.pory"
special SetCB2WhiteOut
# 649 "data/maps/MtChimney/scripts.pory"
waitstate
# 650 "data/maps/MtChimney/scripts.pory"

# 651 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2Victory::
# 652 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 653 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 654 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 655 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 656 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 657 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 658 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 659 "data/maps/MtChimney/scripts.pory"
end
# 660 "data/maps/MtChimney/scripts.pory"

# 661 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 662 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 663 "data/maps/MtChimney/scripts.pory"
	end
# 664 "data/maps/MtChimney/scripts.pory"

# 665 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 666 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 667 "data/maps/MtChimney/scripts.pory"
	end
# 668 "data/maps/MtChimney/scripts.pory"

# 669 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 670 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 671 "data/maps/MtChimney/scripts.pory"
	end
# 672 "data/maps/MtChimney/scripts.pory"

# 673 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 674 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 675 "data/maps/MtChimney/scripts.pory"
	end
# 676 "data/maps/MtChimney/scripts.pory"

# 677 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 678 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 679 "data/maps/MtChimney/scripts.pory"
	end
# 680 "data/maps/MtChimney/scripts.pory"

# 681 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 682 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 683 "data/maps/MtChimney/scripts.pory"
	end
# 684 "data/maps/MtChimney/scripts.pory"

# 685 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 686 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 687 "data/maps/MtChimney/scripts.pory"
	end
# 688 "data/maps/MtChimney/scripts.pory"

# 689 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 690 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 691 "data/maps/MtChimney/scripts.pory"
	end
# 692 "data/maps/MtChimney/scripts.pory"

# 693 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 694 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 695 "data/maps/MtChimney/scripts.pory"
	end
# 696 "data/maps/MtChimney/scripts.pory"

# 697 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 698 "data/maps/MtChimney/scripts.pory"
	lockall
# 699 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 700 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 701 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 702 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 703 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 704 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 705 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 706 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 707 "data/maps/MtChimney/scripts.pory"
	releaseall
# 708 "data/maps/MtChimney/scripts.pory"
	end
# 709 "data/maps/MtChimney/scripts.pory"

# 710 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 711 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 712 "data/maps/MtChimney/scripts.pory"
	releaseall
# 713 "data/maps/MtChimney/scripts.pory"
	end
# 714 "data/maps/MtChimney/scripts.pory"

# 715 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 716 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 717 "data/maps/MtChimney/scripts.pory"
	releaseall
# 718 "data/maps/MtChimney/scripts.pory"
	end
# 719 "data/maps/MtChimney/scripts.pory"

# 720 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 721 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 722 "data/maps/MtChimney/scripts.pory"
	releaseall
# 723 "data/maps/MtChimney/scripts.pory"
	end
# 724 "data/maps/MtChimney/scripts.pory"

# 725 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 726 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 727 "data/maps/MtChimney/scripts.pory"
	end
# 728 "data/maps/MtChimney/scripts.pory"

# 729 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 730 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 731 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 732 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 733 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 734 "data/maps/MtChimney/scripts.pory"
	release
# 735 "data/maps/MtChimney/scripts.pory"
	end
# 736 "data/maps/MtChimney/scripts.pory"

# 737 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 738 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 739 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 740 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 741 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 742 "data/maps/MtChimney/scripts.pory"
	release
# 743 "data/maps/MtChimney/scripts.pory"
	end
# 744 "data/maps/MtChimney/scripts.pory"

# 745 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 746 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 747 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 748 "data/maps/MtChimney/scripts.pory"
	end
# 749 "data/maps/MtChimney/scripts.pory"

# 750 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 751 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 752 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 753 "data/maps/MtChimney/scripts.pory"
	end
# 754 "data/maps/MtChimney/scripts.pory"

# 755 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 756 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 757 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 758 "data/maps/MtChimney/scripts.pory"
	end
# 759 "data/maps/MtChimney/scripts.pory"

# 760 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 761 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 762 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 763 "data/maps/MtChimney/scripts.pory"
	end
# 764 "data/maps/MtChimney/scripts.pory"

# 765 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 766 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 767 "data/maps/MtChimney/scripts.pory"
	end
# 768 "data/maps/MtChimney/scripts.pory"

# 769 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 770 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 771 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 772 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 773 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 774 "data/maps/MtChimney/scripts.pory"
	release
# 775 "data/maps/MtChimney/scripts.pory"
	end
# 776 "data/maps/MtChimney/scripts.pory"

# 777 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 778 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 779 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 780 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 781 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 782 "data/maps/MtChimney/scripts.pory"
	release
# 783 "data/maps/MtChimney/scripts.pory"
	end
# 784 "data/maps/MtChimney/scripts.pory"

# 785 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 786 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 787 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 788 "data/maps/MtChimney/scripts.pory"
	end
# 789 "data/maps/MtChimney/scripts.pory"

# 790 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 791 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 792 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 796 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 798 "data/maps/MtChimney/scripts.pory"

# 799 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 800 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 804 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 805 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 806 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 807 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 808 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 809 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 813 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 824 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 826 "data/maps/MtChimney/scripts.pory"

# 827 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 828 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 829 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 830 "data/maps/MtChimney/scripts.pory"

# 831 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 832 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 835 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 836 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 843 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 844 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 845 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 846 "data/maps/MtChimney/scripts.pory"

# 847 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 848 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 849 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 850 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 851 "data/maps/MtChimney/scripts.pory"

# 852 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 853 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 854 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 855 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 856 "data/maps/MtChimney/scripts.pory"

# 857 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 858 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 861 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 862 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 863 "data/maps/MtChimney/scripts.pory"

# 864 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 865 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 866 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 867 "data/maps/MtChimney/scripts.pory"

# 868 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 869 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 870 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 871 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 872 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 873 "data/maps/MtChimney/scripts.pory"

# 874 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 875 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 876 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 877 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 878 "data/maps/MtChimney/scripts.pory"

# 879 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 880 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 881 "data/maps/MtChimney/scripts.pory"

# 882 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 883 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 884 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 885 "data/maps/MtChimney/scripts.pory"

# 886 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 887 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 888 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 889 "data/maps/MtChimney/scripts.pory"

# 890 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 891 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 892 "data/maps/MtChimney/scripts.pory"

# 893 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 894 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 895 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 896 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 897 "data/maps/MtChimney/scripts.pory"

# 898 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 899 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 900 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 901 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 902 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 903 "data/maps/MtChimney/scripts.pory"

# 904 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 905 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 906 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 907 "data/maps/MtChimney/scripts.pory"

# 908 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 909 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 910 "data/maps/MtChimney/scripts.pory"

# 911 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 912 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 913 "data/maps/MtChimney/scripts.pory"

# 914 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyGoStopTeamMagma:
# 915 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grr, {PLAYER}!\n"
# 916 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 917 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 918 "data/maps/MtChimney/scripts.pory"
	.string "of Team Magma are up to!\p"
# 919 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 920 "data/maps/MtChimney/scripts.pory"
	.string "Meteorite's power into the volcano!\p"
# 921 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 922 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 923 "data/maps/MtChimney/scripts.pory"

# 924 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyIHaveMyHandsFull:
# 925 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grrr…\n"
# 926 "data/maps/MtChimney/scripts.pory"
	.string "The boss went on to stop Maxie!\p"
# 927 "data/maps/MtChimney/scripts.pory"
	.string "Somebody needs to help him!\p"
# 928 "data/maps/MtChimney/scripts.pory"
	.string "I can't when I have my hands full\n"
# 929 "data/maps/MtChimney/scripts.pory"
	.string "battling three opponents at once!$"
# 930 "data/maps/MtChimney/scripts.pory"

# 931 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 932 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 933 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 934 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 935 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 936 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 937 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 938 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 939 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 940 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 941 "data/maps/MtChimney/scripts.pory"
	.string "As thanks, please take this, the HM for\n"
# 942 "data/maps/MtChimney/scripts.pory"
	.string "Surf.\p"
# 943 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 944 "data/maps/MtChimney/scripts.pory"

# 945 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 946 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 947 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 948 "data/maps/MtChimney/scripts.pory"

# 949 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 950 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 951 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 952 "data/maps/MtChimney/scripts.pory"

# 953 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 954 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 955 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 956 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 957 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 958 "data/maps/MtChimney/scripts.pory"

# 959 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 960 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 961 "data/maps/MtChimney/scripts.pory"

# 962 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 963 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 964 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 965 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 966 "data/maps/MtChimney/scripts.pory"

# 967 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 968 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 969 "data/maps/MtChimney/scripts.pory"

# 970 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 971 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 972 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 973 "data/maps/MtChimney/scripts.pory"

# 974 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 975 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 976 "data/maps/MtChimney/scripts.pory"

# 977 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 978 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 979 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 980 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 981 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 982 "data/maps/MtChimney/scripts.pory"

# 983 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 984 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 985 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 986 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 987 "data/maps/MtChimney/scripts.pory"

# 988 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 989 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 990 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 991 "data/maps/MtChimney/scripts.pory"

# 992 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 993 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 994 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 995 "data/maps/MtChimney/scripts.pory"

# 996 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 997 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 998 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 999 "data/maps/MtChimney/scripts.pory"

# 1000 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 1001 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 1002 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 1003 "data/maps/MtChimney/scripts.pory"

# 1004 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 1005 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 1006 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 1007 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 1008 "data/maps/MtChimney/scripts.pory"

# 1009 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 1010 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1011 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1012 "data/maps/MtChimney/scripts.pory"

# 1013 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 1014 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 1015 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 1016 "data/maps/MtChimney/scripts.pory"

# 1017 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 1018 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 1019 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 1020 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 1021 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 1022 "data/maps/MtChimney/scripts.pory"

# 1023 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 1024 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 1025 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 1026 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 1027 "data/maps/MtChimney/scripts.pory"

# 1028 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 1029 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1030 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1031 "data/maps/MtChimney/scripts.pory"

# 1032 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 1033 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 1034 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 1035 "data/maps/MtChimney/scripts.pory"

# 1036 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 1037 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 1038 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 1039 "data/maps/MtChimney/scripts.pory"

# 1040 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 1041 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 1042 "data/maps/MtChimney/scripts.pory"

# 1043 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 1044 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 1045 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 1046 "data/maps/MtChimney/scripts.pory"

# 1047 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 1048 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 1049 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 1050 "data/maps/MtChimney/scripts.pory"

# 1051 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 1052 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 1053 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 1054 "data/maps/MtChimney/scripts.pory"

# 1055 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 1056 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 1057 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 1058 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 1059 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 1060 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 1061 "data/maps/MtChimney/scripts.pory"

# 1062 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 1063 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 1064 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 1065 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 1066 "data/maps/MtChimney/scripts.pory"

# 1067 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 1068 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 1069 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 1070 "data/maps/MtChimney/scripts.pory"

# 1071 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 1072 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 1073 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 1074 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 1075 "data/maps/MtChimney/scripts.pory"

# 1076 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 1077 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 1078 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 1079 "data/maps/MtChimney/scripts.pory"

# 1080 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 1081 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 1082 "data/maps/MtChimney/scripts.pory"

# 1083 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 1084 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 1085 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 1086 "data/maps/MtChimney/scripts.pory"

# 1087 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 1088 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 1089 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 1090 "data/maps/MtChimney/scripts.pory"

# 1091 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 1092 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 1093 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 1094 "data/maps/MtChimney/scripts.pory"

# 1095 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 1096 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 1097 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 1098 "data/maps/MtChimney/scripts.pory"

# 1099 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 1100 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 1101 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
# 1102 "data/maps/MtChimney/scripts.pory"

# 1103 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieDontDoThis:
# 1104 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Maxie! You must not go through\n"
# 1105 "data/maps/MtChimney/scripts.pory"
	.string "with this!$"
# 1106 "data/maps/MtChimney/scripts.pory"

# 1107 "data/maps/MtChimney/scripts.pory"
Mtchimney_Text_MaxieCannotStopMe:
# 1108 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: Fufufu… Now, now Archie…\n"
# 1109 "data/maps/MtChimney/scripts.pory"
	.string "Is this really the best you can do?$"
# 1110 "data/maps/MtChimney/scripts.pory"

# 1111 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchiePleaseStopMaxie:
# 1112 "data/maps/MtChimney/scripts.pory"
	.string "Archie: {PLAYER}, I warned you\n"
# 1113 "data/maps/MtChimney/scripts.pory"
	.string "about Team Magma.\p"
# 1114 "data/maps/MtChimney/scripts.pory"
	.string "Please, you must help me stop Maxie!$"

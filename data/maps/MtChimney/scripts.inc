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
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightNorth
# 82 "data/maps/MtChimney/scripts.pory"
	return
# 83 "data/maps/MtChimney/scripts.pory"
	
# 84 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightNorth:
# 85 "data/maps/MtChimney/scripts.pory"
	walk_up
# 86 "data/maps/MtChimney/scripts.pory"
	face_right
# 87 "data/maps/MtChimney/scripts.pory"
	step_end
# 88 "data/maps/MtChimney/scripts.pory"

# 89 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightEast::
# 90 "data/maps/MtChimney/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 91 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 12, MtChimney_EventScript_EmmiePositionForMaxieFightEast1
# 92 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_TEMP_3, 11, MtChimney_EventScript_EmmiePositionForMaxieFightEast2
# 93 "data/maps/MtChimney/scripts.pory"
	return
# 94 "data/maps/MtChimney/scripts.pory"

# 95 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightEast1:
# 96 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightEast1
# 97 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtChimney/scripts.pory"
	return
# 99 "data/maps/MtChimney/scripts.pory"

# 100 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightEast1:
# 101 "data/maps/MtChimney/scripts.pory"
	walk_right
# 102 "data/maps/MtChimney/scripts.pory"
	face_up
# 103 "data/maps/MtChimney/scripts.pory"
	step_end
# 104 "data/maps/MtChimney/scripts.pory"

# 105 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmiePositionForMaxieFightEast2:
# 106 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_EmmiePositionForMaxieFightEast2
# 107 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 108 "data/maps/MtChimney/scripts.pory"
	return
# 109 "data/maps/MtChimney/scripts.pory"

# 110 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_EmmiePositionForMaxieFightEast2:
# 111 "data/maps/MtChimney/scripts.pory"
	walk_down
# 112 "data/maps/MtChimney/scripts.pory"
	walk_right
# 113 "data/maps/MtChimney/scripts.pory"
	walk_right
# 114 "data/maps/MtChimney/scripts.pory"
	face_up
# 115 "data/maps/MtChimney/scripts.pory"
	step_end
# 116 "data/maps/MtChimney/scripts.pory"

# 117 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 118 "data/maps/MtChimney/scripts.pory"
	lockall
# 119 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 120 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_EmmiePositionForMaxieFightEast
# 121 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_EmmiePositionForMaxieFightNorth
# 122 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 123 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 124 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 125 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 126 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 127 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 128 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 129 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 130 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 131 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MaxieDoMultiBattle
# 132 "data/maps/MtChimney/scripts.pory"
	releaseall
# 133 "data/maps/MtChimney/scripts.pory"
	end
# 134 "data/maps/MtChimney/scripts.pory"

# 135 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieDoMultiBattle::
# 136 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 137 "data/maps/MtChimney/scripts.pory"
	multi_2p_vs_1 TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat, PARTNER_EMMIE
# 138 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 139 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_MaxieVictory
# 140 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 141 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 142 "data/maps/MtChimney/scripts.pory"
	waitstate
# 143 "data/maps/MtChimney/scripts.pory"

# 144 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieVictory::
# 145 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 146 "data/maps/MtChimney/scripts.pory"
	closemessage
# 147 "data/maps/MtChimney/scripts.pory"
	delay 30
# 148 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_EmmieMoveForMaxie
# 149 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_PlayerMoveForMaxie
# 150 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 151 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 152 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 153 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 154 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 155 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 156 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 157 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 158 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 159 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 160 "data/maps/MtChimney/scripts.pory"
	closemessage
# 161 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_HM_SURF
# 162 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 164 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 165 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_AQUA_2
# 166 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 167 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 168 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 169 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 170 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 171 "data/maps/MtChimney/scripts.pory"
	releaseall
# 172 "data/maps/MtChimney/scripts.pory"
	end
# 173 "data/maps/MtChimney/scripts.pory"

# 174 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmieMoveForMaxie::
# 175 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_MoveForMaxie
# 176 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 177 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaExit
# 178 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 179 "data/maps/MtChimney/scripts.pory"
	return
# 180 "data/maps/MtChimney/scripts.pory"

# 181 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_PlayerMoveForMaxie::
# 182 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_MoveForMaxie
# 183 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 184 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaExit
# 185 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 186 "data/maps/MtChimney/scripts.pory"
	return
# 187 "data/maps/MtChimney/scripts.pory"

# 188 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieExit:
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_left
# 191 "data/maps/MtChimney/scripts.pory"
	walk_left
# 192 "data/maps/MtChimney/scripts.pory"
	walk_left
# 193 "data/maps/MtChimney/scripts.pory"
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	walk_left
# 195 "data/maps/MtChimney/scripts.pory"
	walk_down
# 196 "data/maps/MtChimney/scripts.pory"
	walk_down
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 201 "data/maps/MtChimney/scripts.pory"
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	step_end
# 203 "data/maps/MtChimney/scripts.pory"

# 204 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_TabithaExit:
# 205 "data/maps/MtChimney/scripts.pory"
	delay_16
# 206 "data/maps/MtChimney/scripts.pory"
	delay_16
# 207 "data/maps/MtChimney/scripts.pory"
	delay_16
# 208 "data/maps/MtChimney/scripts.pory"
	delay_16
# 209 "data/maps/MtChimney/scripts.pory"
	delay_16
# 210 "data/maps/MtChimney/scripts.pory"
	delay_16
# 211 "data/maps/MtChimney/scripts.pory"
	delay_16
# 212 "data/maps/MtChimney/scripts.pory"
	walk_right
# 213 "data/maps/MtChimney/scripts.pory"
	walk_down
# 214 "data/maps/MtChimney/scripts.pory"
	walk_down
# 215 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	walk_down
# 218 "data/maps/MtChimney/scripts.pory"
	step_end
# 219 "data/maps/MtChimney/scripts.pory"

# 220 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MoveForMaxie:
# 221 "data/maps/MtChimney/scripts.pory"
	face_left
# 222 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 223 "data/maps/MtChimney/scripts.pory"
	walk_right
# 224 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 225 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 226 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 227 "data/maps/MtChimney/scripts.pory"
	step_end
# 228 "data/maps/MtChimney/scripts.pory"

# 229 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 230 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 231 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 232 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 233 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 234 "data/maps/MtChimney/scripts.pory"
	return
# 235 "data/maps/MtChimney/scripts.pory"

# 236 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 237 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 238 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 239 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 240 "data/maps/MtChimney/scripts.pory"
	return
# 241 "data/maps/MtChimney/scripts.pory"

# 242 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 243 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 244 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 245 "data/maps/MtChimney/scripts.pory"
	return
# 246 "data/maps/MtChimney/scripts.pory"

# 247 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 248 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 249 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 250 "data/maps/MtChimney/scripts.pory"
	return
# 251 "data/maps/MtChimney/scripts.pory"

# 252 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 253 "data/maps/MtChimney/scripts.pory"
	lock
# 254 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 255 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 256 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 257 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 258 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 259 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 260 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 261 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 262 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 263 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 264 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 265 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 266 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 267 "data/maps/MtChimney/scripts.pory"
	release
# 268 "data/maps/MtChimney/scripts.pory"
	end
# 269 "data/maps/MtChimney/scripts.pory"

# 270 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 271 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 272 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 273 "data/maps/MtChimney/scripts.pory"
	release
# 274 "data/maps/MtChimney/scripts.pory"
	end
# 275 "data/maps/MtChimney/scripts.pory"
.else
# 276 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 277 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 278 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 279 "data/maps/MtChimney/scripts.pory"
	release
# 280 "data/maps/MtChimney/scripts.pory"
	end
# 281 "data/maps/MtChimney/scripts.pory"

# 282 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 283 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 284 "data/maps/MtChimney/scripts.pory"
	release
# 285 "data/maps/MtChimney/scripts.pory"
	end
# 286 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 287 "data/maps/MtChimney/scripts.pory"

# 288 "data/maps/MtChimney/scripts.pory"

# 289 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 290 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 291 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 292 "data/maps/MtChimney/scripts.pory"
	return
# 293 "data/maps/MtChimney/scripts.pory"

# 294 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 295 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 296 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 297 "data/maps/MtChimney/scripts.pory"
	release
# 298 "data/maps/MtChimney/scripts.pory"
	end
# 299 "data/maps/MtChimney/scripts.pory"

# 300 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 301 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 302 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 303 "data/maps/MtChimney/scripts.pory"
	release
# 304 "data/maps/MtChimney/scripts.pory"
	end
# 305 "data/maps/MtChimney/scripts.pory"

# 306 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieKnockback:
# 307 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 308 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 309 "data/maps/MtChimney/scripts.pory"
	delay_16
# 310 "data/maps/MtChimney/scripts.pory"
	delay_16
# 311 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 312 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 313 "data/maps/MtChimney/scripts.pory"
	step_end
# 314 "data/maps/MtChimney/scripts.pory"

# 315 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 316 "data/maps/MtChimney/scripts.pory"
	walk_right
# 317 "data/maps/MtChimney/scripts.pory"
	step_end
# 318 "data/maps/MtChimney/scripts.pory"

# 319 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 320 "data/maps/MtChimney/scripts.pory"
	walk_left
# 321 "data/maps/MtChimney/scripts.pory"
	walk_left
# 322 "data/maps/MtChimney/scripts.pory"
	walk_left
# 323 "data/maps/MtChimney/scripts.pory"
	walk_down
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	walk_down
# 326 "data/maps/MtChimney/scripts.pory"
	walk_down
# 327 "data/maps/MtChimney/scripts.pory"
	walk_down
# 328 "data/maps/MtChimney/scripts.pory"
	walk_down
# 329 "data/maps/MtChimney/scripts.pory"
	step_end
# 330 "data/maps/MtChimney/scripts.pory"

# 331 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 332 "data/maps/MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_right
# 334 "data/maps/MtChimney/scripts.pory"
	step_end
# 335 "data/maps/MtChimney/scripts.pory"

# 336 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 337 "data/maps/MtChimney/scripts.pory"
	walk_left
# 338 "data/maps/MtChimney/scripts.pory"
	walk_left
# 339 "data/maps/MtChimney/scripts.pory"
	walk_left
# 340 "data/maps/MtChimney/scripts.pory"
	walk_down
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	walk_down
# 346 "data/maps/MtChimney/scripts.pory"
	walk_down
# 347 "data/maps/MtChimney/scripts.pory"
	walk_down
# 348 "data/maps/MtChimney/scripts.pory"
	step_end
# 349 "data/maps/MtChimney/scripts.pory"

# 350 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 351 "data/maps/MtChimney/scripts.pory"
	walk_down
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_down
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	walk_left
# 357 "data/maps/MtChimney/scripts.pory"
	walk_left
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_down
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	walk_left
# 363 "data/maps/MtChimney/scripts.pory"
	walk_left
# 364 "data/maps/MtChimney/scripts.pory"
	walk_left
# 365 "data/maps/MtChimney/scripts.pory"
	walk_left
# 366 "data/maps/MtChimney/scripts.pory"
	walk_left
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	step_end
# 369 "data/maps/MtChimney/scripts.pory"

# 370 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 371 "data/maps/MtChimney/scripts.pory"
	walk_down
# 372 "data/maps/MtChimney/scripts.pory"
	walk_down
# 373 "data/maps/MtChimney/scripts.pory"
	walk_down
# 374 "data/maps/MtChimney/scripts.pory"
	walk_down
# 375 "data/maps/MtChimney/scripts.pory"
	walk_left
# 376 "data/maps/MtChimney/scripts.pory"
	walk_left
# 377 "data/maps/MtChimney/scripts.pory"
	walk_left
# 378 "data/maps/MtChimney/scripts.pory"
	walk_down
# 379 "data/maps/MtChimney/scripts.pory"
	step_end
# 380 "data/maps/MtChimney/scripts.pory"

# 381 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 382 "data/maps/MtChimney/scripts.pory"
	walk_right
# 383 "data/maps/MtChimney/scripts.pory"
	walk_down
# 384 "data/maps/MtChimney/scripts.pory"
	walk_down
# 385 "data/maps/MtChimney/scripts.pory"
	walk_down
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	walk_left
# 388 "data/maps/MtChimney/scripts.pory"
	walk_left
# 389 "data/maps/MtChimney/scripts.pory"
	walk_left
# 390 "data/maps/MtChimney/scripts.pory"
	walk_left
# 391 "data/maps/MtChimney/scripts.pory"
	walk_left
# 392 "data/maps/MtChimney/scripts.pory"
	walk_down
# 393 "data/maps/MtChimney/scripts.pory"
	walk_down
# 394 "data/maps/MtChimney/scripts.pory"
	walk_down
# 395 "data/maps/MtChimney/scripts.pory"
	walk_down
# 396 "data/maps/MtChimney/scripts.pory"
	step_end
# 397 "data/maps/MtChimney/scripts.pory"

# 398 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 399 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 400 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 401 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 402 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 403 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 404 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 405 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 406 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 407 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 408 "data/maps/MtChimney/scripts.pory"
	walk_left
# 409 "data/maps/MtChimney/scripts.pory"
	walk_left
# 410 "data/maps/MtChimney/scripts.pory"
	walk_down
# 411 "data/maps/MtChimney/scripts.pory"
	walk_down
# 412 "data/maps/MtChimney/scripts.pory"
	walk_down
# 413 "data/maps/MtChimney/scripts.pory"
	walk_left
# 414 "data/maps/MtChimney/scripts.pory"
	walk_left
# 415 "data/maps/MtChimney/scripts.pory"
	walk_down
# 416 "data/maps/MtChimney/scripts.pory"
	walk_down
# 417 "data/maps/MtChimney/scripts.pory"
	walk_left
# 418 "data/maps/MtChimney/scripts.pory"
	walk_left
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
MtChimney_Movement_Unused5:
# 426 "data/maps/MtChimney/scripts.pory"
	delay_16
# 427 "data/maps/MtChimney/scripts.pory"
	delay_16
# 428 "data/maps/MtChimney/scripts.pory"
	delay_16
# 429 "data/maps/MtChimney/scripts.pory"
	walk_down
# 430 "data/maps/MtChimney/scripts.pory"
	walk_down
# 431 "data/maps/MtChimney/scripts.pory"
	walk_down
# 432 "data/maps/MtChimney/scripts.pory"
	walk_left
# 433 "data/maps/MtChimney/scripts.pory"
	walk_left
# 434 "data/maps/MtChimney/scripts.pory"
	walk_left
# 435 "data/maps/MtChimney/scripts.pory"
	walk_down
# 436 "data/maps/MtChimney/scripts.pory"
	step_end
# 437 "data/maps/MtChimney/scripts.pory"

# 438 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 439 "data/maps/MtChimney/scripts.pory"
	delay_16
# 440 "data/maps/MtChimney/scripts.pory"
	walk_left
# 441 "data/maps/MtChimney/scripts.pory"
	walk_down
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
	walk_left
# 448 "data/maps/MtChimney/scripts.pory"
	walk_left
# 449 "data/maps/MtChimney/scripts.pory"
	walk_left
# 450 "data/maps/MtChimney/scripts.pory"
	walk_down
# 451 "data/maps/MtChimney/scripts.pory"
	walk_down
# 452 "data/maps/MtChimney/scripts.pory"
	walk_down
# 453 "data/maps/MtChimney/scripts.pory"
	walk_down
# 454 "data/maps/MtChimney/scripts.pory"
	step_end
# 455 "data/maps/MtChimney/scripts.pory"

# 456 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 457 "data/maps/MtChimney/scripts.pory"
	delay_16
# 458 "data/maps/MtChimney/scripts.pory"
	walk_left
# 459 "data/maps/MtChimney/scripts.pory"
	walk_left
# 460 "data/maps/MtChimney/scripts.pory"
	walk_down
# 461 "data/maps/MtChimney/scripts.pory"
	walk_down
# 462 "data/maps/MtChimney/scripts.pory"
	walk_down
# 463 "data/maps/MtChimney/scripts.pory"
	walk_left
# 464 "data/maps/MtChimney/scripts.pory"
	walk_left
# 465 "data/maps/MtChimney/scripts.pory"
	walk_down
# 466 "data/maps/MtChimney/scripts.pory"
	walk_down
# 467 "data/maps/MtChimney/scripts.pory"
	walk_left
# 468 "data/maps/MtChimney/scripts.pory"
	walk_left
# 469 "data/maps/MtChimney/scripts.pory"
	walk_left
# 470 "data/maps/MtChimney/scripts.pory"
	walk_left
# 471 "data/maps/MtChimney/scripts.pory"
	walk_left
# 472 "data/maps/MtChimney/scripts.pory"
	walk_down
# 473 "data/maps/MtChimney/scripts.pory"
	step_end
# 474 "data/maps/MtChimney/scripts.pory"

# 475 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 476 "data/maps/MtChimney/scripts.pory"
	delay_16
# 477 "data/maps/MtChimney/scripts.pory"
	walk_down
# 478 "data/maps/MtChimney/scripts.pory"
	walk_left
# 479 "data/maps/MtChimney/scripts.pory"
	walk_left
# 480 "data/maps/MtChimney/scripts.pory"
	walk_left
# 481 "data/maps/MtChimney/scripts.pory"
	walk_left
# 482 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 483 "data/maps/MtChimney/scripts.pory"
	step_end
# 484 "data/maps/MtChimney/scripts.pory"

# 485 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 486 "data/maps/MtChimney/scripts.pory"
	walk_down
# 487 "data/maps/MtChimney/scripts.pory"
	walk_down
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
	walk_down
# 497 "data/maps/MtChimney/scripts.pory"
	walk_down
# 498 "data/maps/MtChimney/scripts.pory"
	walk_down
# 499 "data/maps/MtChimney/scripts.pory"
	step_end
# 500 "data/maps/MtChimney/scripts.pory"

# 501 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 502 "data/maps/MtChimney/scripts.pory"
	walk_down
# 503 "data/maps/MtChimney/scripts.pory"
	step_end
# 504 "data/maps/MtChimney/scripts.pory"

# 505 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 506 "data/maps/MtChimney/scripts.pory"
	walk_down
# 507 "data/maps/MtChimney/scripts.pory"
	walk_down
# 508 "data/maps/MtChimney/scripts.pory"
	walk_down
# 509 "data/maps/MtChimney/scripts.pory"
	walk_down
# 510 "data/maps/MtChimney/scripts.pory"
	walk_down
# 511 "data/maps/MtChimney/scripts.pory"
	walk_down
# 512 "data/maps/MtChimney/scripts.pory"
	walk_down
# 513 "data/maps/MtChimney/scripts.pory"
	step_end
# 514 "data/maps/MtChimney/scripts.pory"

# 515 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 516 "data/maps/MtChimney/scripts.pory"
	delay_16
# 517 "data/maps/MtChimney/scripts.pory"
	delay_16
# 518 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 519 "data/maps/MtChimney/scripts.pory"
	delay_16
# 520 "data/maps/MtChimney/scripts.pory"
	walk_down
# 521 "data/maps/MtChimney/scripts.pory"
	walk_down
# 522 "data/maps/MtChimney/scripts.pory"
	walk_down
# 523 "data/maps/MtChimney/scripts.pory"
	walk_down
# 524 "data/maps/MtChimney/scripts.pory"
	walk_down
# 525 "data/maps/MtChimney/scripts.pory"
	step_end
# 526 "data/maps/MtChimney/scripts.pory"

# 527 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 528 "data/maps/MtChimney/scripts.pory"
	delay_16
# 529 "data/maps/MtChimney/scripts.pory"
	delay_16
# 530 "data/maps/MtChimney/scripts.pory"
	delay_16
# 531 "data/maps/MtChimney/scripts.pory"
	delay_16
# 532 "data/maps/MtChimney/scripts.pory"
	delay_16
# 533 "data/maps/MtChimney/scripts.pory"
	delay_16
# 534 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 535 "data/maps/MtChimney/scripts.pory"
	delay_16
# 536 "data/maps/MtChimney/scripts.pory"
	walk_down
# 537 "data/maps/MtChimney/scripts.pory"
	walk_down
# 538 "data/maps/MtChimney/scripts.pory"
	step_end
# 539 "data/maps/MtChimney/scripts.pory"

# 540 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 541 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 542 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 543 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 544 "data/maps/MtChimney/scripts.pory"
	face_right
# 545 "data/maps/MtChimney/scripts.pory"
	step_end
# 546 "data/maps/MtChimney/scripts.pory"

# 547 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 548 "data/maps/MtChimney/scripts.pory"
	walk_left
# 549 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 550 "data/maps/MtChimney/scripts.pory"
	delay_16
# 551 "data/maps/MtChimney/scripts.pory"
	step_end
# 552 "data/maps/MtChimney/scripts.pory"

# 553 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 554 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 555 "data/maps/MtChimney/scripts.pory"
	end
# 556 "data/maps/MtChimney/scripts.pory"

# 557 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 558 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 559 "data/maps/MtChimney/scripts.pory"
	end
# 560 "data/maps/MtChimney/scripts.pory"

# 561 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 562 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 563 "data/maps/MtChimney/scripts.pory"
	end
# 564 "data/maps/MtChimney/scripts.pory"

# 565 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 566 "data/maps/MtChimney/scripts.pory"
lockall
# 567 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 568 "data/maps/MtChimney/scripts.pory"
applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 569 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 570 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 571 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 572 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 573 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaIntro, MSGBOX_AUTOCLOSE
# 574 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_TabithaDoMultiBattle
# 575 "data/maps/MtChimney/scripts.pory"
releaseall
# 576 "data/maps/MtChimney/scripts.pory"
end
# 577 "data/maps/MtChimney/scripts.pory"

# 578 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaDoMultiBattle::
# 579 "data/maps/MtChimney/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 580 "data/maps/MtChimney/scripts.pory"
multi_2p_vs_1 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, PARTNER_EMMIE
# 581 "data/maps/MtChimney/scripts.pory"
switch VAR_RESULT
# 582 "data/maps/MtChimney/scripts.pory"
case 1, MtChimney_EventScript_TabithaVictory
# 583 "data/maps/MtChimney/scripts.pory"
fadescreen FADE_TO_BLACK
# 584 "data/maps/MtChimney/scripts.pory"
special SetCB2WhiteOut
# 585 "data/maps/MtChimney/scripts.pory"
waitstate
# 586 "data/maps/MtChimney/scripts.pory"

# 587 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaVictory::
# 588 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 589 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 590 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 591 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 592 "data/maps/MtChimney/scripts.pory"
end
# 593 "data/maps/MtChimney/scripts.pory"

# 594 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha2::
# 595 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 596 "data/maps/MtChimney/scripts.pory"
	end
# 597 "data/maps/MtChimney/scripts.pory"

# 598 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2::
# 599 "data/maps/MtChimney/scripts.pory"
lockall
# 600 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_1
# 601 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 602 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 603 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 604 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 605 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 606 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 607 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 608 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_2
# 609 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 610 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 611 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 612 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 613 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 614 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 615 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2Intro MSGBOX_AUTOCLOSE
# 616 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_Grunt1Grunt2DoMultiBattle
# 617 "data/maps/MtChimney/scripts.pory"
releaseall
# 618 "data/maps/MtChimney/scripts.pory"
end
# 619 "data/maps/MtChimney/scripts.pory"

# 620 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2DoMultiBattle::
# 621 "data/maps/MtChimney/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 622 "data/maps/MtChimney/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Defeat, TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Defeat, PARTNER_EMMIE
# 623 "data/maps/MtChimney/scripts.pory"
switch VAR_RESULT
# 624 "data/maps/MtChimney/scripts.pory"
case 1, MtChimney_EventScript_Grunt1Grunt2Victory
# 625 "data/maps/MtChimney/scripts.pory"
fadescreen FADE_TO_BLACK
# 626 "data/maps/MtChimney/scripts.pory"
special SetCB2WhiteOut
# 627 "data/maps/MtChimney/scripts.pory"
waitstate
# 628 "data/maps/MtChimney/scripts.pory"

# 629 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2Victory::
# 630 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 631 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 632 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 633 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 634 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 635 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 636 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 637 "data/maps/MtChimney/scripts.pory"
end
# 638 "data/maps/MtChimney/scripts.pory"

# 639 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 640 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 641 "data/maps/MtChimney/scripts.pory"
	end
# 642 "data/maps/MtChimney/scripts.pory"

# 643 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 644 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 645 "data/maps/MtChimney/scripts.pory"
	end
# 646 "data/maps/MtChimney/scripts.pory"

# 647 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 648 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 649 "data/maps/MtChimney/scripts.pory"
	end
# 650 "data/maps/MtChimney/scripts.pory"

# 651 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 652 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 653 "data/maps/MtChimney/scripts.pory"
	end
# 654 "data/maps/MtChimney/scripts.pory"

# 655 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 656 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 657 "data/maps/MtChimney/scripts.pory"
	end
# 658 "data/maps/MtChimney/scripts.pory"

# 659 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 660 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 661 "data/maps/MtChimney/scripts.pory"
	end
# 662 "data/maps/MtChimney/scripts.pory"

# 663 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 664 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 665 "data/maps/MtChimney/scripts.pory"
	end
# 666 "data/maps/MtChimney/scripts.pory"

# 667 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 668 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 669 "data/maps/MtChimney/scripts.pory"
	end
# 670 "data/maps/MtChimney/scripts.pory"

# 671 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 672 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 673 "data/maps/MtChimney/scripts.pory"
	end
# 674 "data/maps/MtChimney/scripts.pory"

# 675 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 676 "data/maps/MtChimney/scripts.pory"
	lockall
# 677 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 678 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 679 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 680 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 681 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 682 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 683 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 684 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 685 "data/maps/MtChimney/scripts.pory"
	releaseall
# 686 "data/maps/MtChimney/scripts.pory"
	end
# 687 "data/maps/MtChimney/scripts.pory"

# 688 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 689 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 690 "data/maps/MtChimney/scripts.pory"
	releaseall
# 691 "data/maps/MtChimney/scripts.pory"
	end
# 692 "data/maps/MtChimney/scripts.pory"

# 693 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 694 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 695 "data/maps/MtChimney/scripts.pory"
	releaseall
# 696 "data/maps/MtChimney/scripts.pory"
	end
# 697 "data/maps/MtChimney/scripts.pory"

# 698 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 699 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 700 "data/maps/MtChimney/scripts.pory"
	releaseall
# 701 "data/maps/MtChimney/scripts.pory"
	end
# 702 "data/maps/MtChimney/scripts.pory"

# 703 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 704 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 705 "data/maps/MtChimney/scripts.pory"
	end
# 706 "data/maps/MtChimney/scripts.pory"

# 707 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 708 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 709 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 710 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 711 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 712 "data/maps/MtChimney/scripts.pory"
	release
# 713 "data/maps/MtChimney/scripts.pory"
	end
# 714 "data/maps/MtChimney/scripts.pory"

# 715 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 716 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 717 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 718 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 719 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 720 "data/maps/MtChimney/scripts.pory"
	release
# 721 "data/maps/MtChimney/scripts.pory"
	end
# 722 "data/maps/MtChimney/scripts.pory"

# 723 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 724 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 725 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 726 "data/maps/MtChimney/scripts.pory"
	end
# 727 "data/maps/MtChimney/scripts.pory"

# 728 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 729 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 730 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 731 "data/maps/MtChimney/scripts.pory"
	end
# 732 "data/maps/MtChimney/scripts.pory"

# 733 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 734 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 735 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 736 "data/maps/MtChimney/scripts.pory"
	end
# 737 "data/maps/MtChimney/scripts.pory"

# 738 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 739 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 740 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 741 "data/maps/MtChimney/scripts.pory"
	end
# 742 "data/maps/MtChimney/scripts.pory"

# 743 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 744 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 745 "data/maps/MtChimney/scripts.pory"
	end
# 746 "data/maps/MtChimney/scripts.pory"

# 747 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 748 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 749 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 750 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 751 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 752 "data/maps/MtChimney/scripts.pory"
	release
# 753 "data/maps/MtChimney/scripts.pory"
	end
# 754 "data/maps/MtChimney/scripts.pory"

# 755 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 756 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 757 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 758 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 759 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 760 "data/maps/MtChimney/scripts.pory"
	release
# 761 "data/maps/MtChimney/scripts.pory"
	end
# 762 "data/maps/MtChimney/scripts.pory"

# 763 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 764 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 765 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 766 "data/maps/MtChimney/scripts.pory"
	end
# 767 "data/maps/MtChimney/scripts.pory"

# 768 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 769 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 771 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 772 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 775 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 776 "data/maps/MtChimney/scripts.pory"

# 777 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 778 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 783 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 784 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 785 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 788 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 789 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 790 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 791 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 792 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 796 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 798 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 799 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 800 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 804 "data/maps/MtChimney/scripts.pory"

# 805 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 806 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 807 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 808 "data/maps/MtChimney/scripts.pory"

# 809 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 810 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 813 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 817 "data/maps/MtChimney/scripts.pory"

# 818 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 819 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 824 "data/maps/MtChimney/scripts.pory"

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 826 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 829 "data/maps/MtChimney/scripts.pory"

# 830 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 831 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 832 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 834 "data/maps/MtChimney/scripts.pory"

# 835 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 836 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 839 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 840 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 841 "data/maps/MtChimney/scripts.pory"

# 842 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 843 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 844 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 845 "data/maps/MtChimney/scripts.pory"

# 846 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 847 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 848 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 849 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 850 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 851 "data/maps/MtChimney/scripts.pory"

# 852 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 853 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 854 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 855 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 856 "data/maps/MtChimney/scripts.pory"

# 857 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 858 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 859 "data/maps/MtChimney/scripts.pory"

# 860 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 861 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 862 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 863 "data/maps/MtChimney/scripts.pory"

# 864 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 865 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 866 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 867 "data/maps/MtChimney/scripts.pory"

# 868 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 869 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 870 "data/maps/MtChimney/scripts.pory"

# 871 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 872 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 873 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 874 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 875 "data/maps/MtChimney/scripts.pory"

# 876 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 877 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 878 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 879 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 880 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 881 "data/maps/MtChimney/scripts.pory"

# 882 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 883 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 884 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 885 "data/maps/MtChimney/scripts.pory"

# 886 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 887 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 888 "data/maps/MtChimney/scripts.pory"

# 889 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 890 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 891 "data/maps/MtChimney/scripts.pory"

# 892 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyGoStopTeamMagma:
# 893 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grr, {PLAYER}!\n"
# 894 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 895 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 896 "data/maps/MtChimney/scripts.pory"
	.string "of Team Magma are up to!\p"
# 897 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 898 "data/maps/MtChimney/scripts.pory"
	.string "Meteorite's power into the volcano!\p"
# 899 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 900 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 901 "data/maps/MtChimney/scripts.pory"

# 902 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyIHaveMyHandsFull:
# 903 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grrr…\n"
# 904 "data/maps/MtChimney/scripts.pory"
	.string "The boss went on to stop Maxie!\p"
# 905 "data/maps/MtChimney/scripts.pory"
	.string "Somebody needs to help him!\p"
# 906 "data/maps/MtChimney/scripts.pory"
	.string "I can't when I have my hands full\n"
# 907 "data/maps/MtChimney/scripts.pory"
	.string "battling three opponents at once!$"
# 908 "data/maps/MtChimney/scripts.pory"

# 909 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 910 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 911 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 912 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 913 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 914 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 915 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 916 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 917 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 918 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 919 "data/maps/MtChimney/scripts.pory"
	.string "As thanks, please take this, the HM for\n"
# 920 "data/maps/MtChimney/scripts.pory"
	.string "Surf.\p"
# 921 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 922 "data/maps/MtChimney/scripts.pory"

# 923 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 924 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 925 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 926 "data/maps/MtChimney/scripts.pory"

# 927 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 928 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 929 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 930 "data/maps/MtChimney/scripts.pory"

# 931 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 932 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 933 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 934 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 935 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 936 "data/maps/MtChimney/scripts.pory"

# 937 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 938 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 939 "data/maps/MtChimney/scripts.pory"

# 940 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 941 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 942 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 943 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 944 "data/maps/MtChimney/scripts.pory"

# 945 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 946 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 947 "data/maps/MtChimney/scripts.pory"

# 948 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 949 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 950 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 951 "data/maps/MtChimney/scripts.pory"

# 952 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 953 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 954 "data/maps/MtChimney/scripts.pory"

# 955 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 956 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 957 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 958 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 959 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 960 "data/maps/MtChimney/scripts.pory"

# 961 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 962 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 963 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 964 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 965 "data/maps/MtChimney/scripts.pory"

# 966 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 967 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 968 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 969 "data/maps/MtChimney/scripts.pory"

# 970 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 971 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 972 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 973 "data/maps/MtChimney/scripts.pory"

# 974 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 975 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 976 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 977 "data/maps/MtChimney/scripts.pory"

# 978 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 979 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 980 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 981 "data/maps/MtChimney/scripts.pory"

# 982 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 983 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 984 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 985 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 986 "data/maps/MtChimney/scripts.pory"

# 987 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 988 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 989 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 990 "data/maps/MtChimney/scripts.pory"

# 991 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 992 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 993 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 994 "data/maps/MtChimney/scripts.pory"

# 995 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 996 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 997 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 998 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 999 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 1000 "data/maps/MtChimney/scripts.pory"

# 1001 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 1002 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 1003 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 1004 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 1005 "data/maps/MtChimney/scripts.pory"

# 1006 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 1007 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1008 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1009 "data/maps/MtChimney/scripts.pory"

# 1010 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 1011 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 1012 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 1013 "data/maps/MtChimney/scripts.pory"

# 1014 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 1015 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 1016 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 1017 "data/maps/MtChimney/scripts.pory"

# 1018 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 1019 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 1020 "data/maps/MtChimney/scripts.pory"

# 1021 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 1022 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 1023 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 1024 "data/maps/MtChimney/scripts.pory"

# 1025 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 1026 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 1027 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 1028 "data/maps/MtChimney/scripts.pory"

# 1029 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 1030 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 1031 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 1032 "data/maps/MtChimney/scripts.pory"

# 1033 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 1034 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 1035 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 1036 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 1037 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 1038 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 1039 "data/maps/MtChimney/scripts.pory"

# 1040 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 1041 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 1042 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 1043 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 1044 "data/maps/MtChimney/scripts.pory"

# 1045 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 1046 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 1047 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 1048 "data/maps/MtChimney/scripts.pory"

# 1049 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 1050 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 1051 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 1052 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 1053 "data/maps/MtChimney/scripts.pory"

# 1054 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 1055 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 1056 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 1057 "data/maps/MtChimney/scripts.pory"

# 1058 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 1059 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 1060 "data/maps/MtChimney/scripts.pory"

# 1061 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 1062 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 1063 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 1064 "data/maps/MtChimney/scripts.pory"

# 1065 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 1066 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 1067 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 1068 "data/maps/MtChimney/scripts.pory"

# 1069 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 1070 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 1071 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 1072 "data/maps/MtChimney/scripts.pory"

# 1073 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 1074 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 1075 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 1076 "data/maps/MtChimney/scripts.pory"

# 1077 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 1078 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 1079 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
# 1080 "data/maps/MtChimney/scripts.pory"

# 1081 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieDontDoThis:
# 1082 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Maxie! You must not go through\n"
# 1083 "data/maps/MtChimney/scripts.pory"
	.string "with this!$"
# 1084 "data/maps/MtChimney/scripts.pory"

# 1085 "data/maps/MtChimney/scripts.pory"
Mtchimney_Text_MaxieCannotStopMe:
# 1086 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: Fufufu… Now, now Archie…\n"
# 1087 "data/maps/MtChimney/scripts.pory"
	.string "Is this really the best you can do?$"
# 1088 "data/maps/MtChimney/scripts.pory"

# 1089 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchiePleaseStopMaxie:
# 1090 "data/maps/MtChimney/scripts.pory"
	.string "Archie: {PLAYER}, I warned you\n"
# 1091 "data/maps/MtChimney/scripts.pory"
	.string "about Team Magma.\p"
# 1092 "data/maps/MtChimney/scripts.pory"
	.string "Please, you must help me stop Maxie!$"

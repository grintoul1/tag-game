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
MtChimney_EventScript_EmmiePositionForMaxieFightEast1::
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
MtChimney_EventScript_EmmiePositionForMaxieFightEast2::
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
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_EmmiePositionForMaxieFightEast
# 120 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_EmmiePositionForMaxieFightNorth
# 121 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 122 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 123 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 124 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 125 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 126 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 127 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 128 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 129 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 130 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MaxieDoMultiBattle
# 131 "data/maps/MtChimney/scripts.pory"
	releaseall
# 132 "data/maps/MtChimney/scripts.pory"
	end
# 133 "data/maps/MtChimney/scripts.pory"

# 134 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieDoMultiBattle::
# 135 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 136 "data/maps/MtChimney/scripts.pory"
	multi_2p_vs_1 TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat, PARTNER_EMMIE
# 137 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_MaxieVictory
# 139 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 141 "data/maps/MtChimney/scripts.pory"
	waitstate
# 142 "data/maps/MtChimney/scripts.pory"

# 143 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieVictory::
# 144 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 145 "data/maps/MtChimney/scripts.pory"
	closemessage
# 146 "data/maps/MtChimney/scripts.pory"
	delay 30
# 147 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_EmmieMoveForMaxie
# 148 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_PlayerMoveForMaxie
# 149 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 150 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 151 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 152 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 153 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 154 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 155 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 156 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 157 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 158 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 159 "data/maps/MtChimney/scripts.pory"
	closemessage
# 160 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_HM_SURF
# 161 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 162 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 163 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 164 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_AQUA_2
# 165 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 166 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 167 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 168 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 169 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 170 "data/maps/MtChimney/scripts.pory"
	releaseall
# 171 "data/maps/MtChimney/scripts.pory"
	end
# 172 "data/maps/MtChimney/scripts.pory"

# 173 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_EmmieMoveForMaxie::
# 174 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MtChimney_Movement_MoveForMaxie
# 175 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 176 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaExit
# 177 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 178 "data/maps/MtChimney/scripts.pory"
	return
# 179 "data/maps/MtChimney/scripts.pory"

# 180 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_PlayerMoveForMaxie::
# 181 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_MoveForMaxie
# 182 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 183 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaExit
# 184 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 185 "data/maps/MtChimney/scripts.pory"
	return
# 186 "data/maps/MtChimney/scripts.pory"

# 187 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieExit:
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_left
# 190 "data/maps/MtChimney/scripts.pory"
	walk_left
# 191 "data/maps/MtChimney/scripts.pory"
	walk_left
# 192 "data/maps/MtChimney/scripts.pory"
	walk_down
# 193 "data/maps/MtChimney/scripts.pory"
	walk_left
# 194 "data/maps/MtChimney/scripts.pory"
	walk_down
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
	step_end
# 202 "data/maps/MtChimney/scripts.pory"

# 203 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_TabithaExit:
# 204 "data/maps/MtChimney/scripts.pory"
	delay_16
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
	walk_right
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 213 "data/maps/MtChimney/scripts.pory"
	walk_down
# 214 "data/maps/MtChimney/scripts.pory"
	walk_down
# 215 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	step_end
# 218 "data/maps/MtChimney/scripts.pory"

# 219 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MoveForMaxie:
# 220 "data/maps/MtChimney/scripts.pory"
	face_left
# 221 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 222 "data/maps/MtChimney/scripts.pory"
	walk_right
# 223 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 224 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 225 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 226 "data/maps/MtChimney/scripts.pory"
	step_end
# 227 "data/maps/MtChimney/scripts.pory"

# 228 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 229 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 230 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 231 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 232 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 233 "data/maps/MtChimney/scripts.pory"
	return
# 234 "data/maps/MtChimney/scripts.pory"

# 235 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 236 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 237 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 238 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 239 "data/maps/MtChimney/scripts.pory"
	return
# 240 "data/maps/MtChimney/scripts.pory"

# 241 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 242 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 243 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 244 "data/maps/MtChimney/scripts.pory"
	return
# 245 "data/maps/MtChimney/scripts.pory"

# 246 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 247 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 248 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 249 "data/maps/MtChimney/scripts.pory"
	return
# 250 "data/maps/MtChimney/scripts.pory"

# 251 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 252 "data/maps/MtChimney/scripts.pory"
	lock
# 253 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 254 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 255 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 256 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 257 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 258 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 259 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 260 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 261 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 262 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 263 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 264 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 265 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 266 "data/maps/MtChimney/scripts.pory"
	release
# 267 "data/maps/MtChimney/scripts.pory"
	end
# 268 "data/maps/MtChimney/scripts.pory"

# 269 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 270 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 271 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 272 "data/maps/MtChimney/scripts.pory"
	release
# 273 "data/maps/MtChimney/scripts.pory"
	end
# 274 "data/maps/MtChimney/scripts.pory"
.else
# 275 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 276 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 277 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 278 "data/maps/MtChimney/scripts.pory"
	release
# 279 "data/maps/MtChimney/scripts.pory"
	end
# 280 "data/maps/MtChimney/scripts.pory"

# 281 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 282 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 283 "data/maps/MtChimney/scripts.pory"
	release
# 284 "data/maps/MtChimney/scripts.pory"
	end
# 285 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 286 "data/maps/MtChimney/scripts.pory"

# 287 "data/maps/MtChimney/scripts.pory"

# 288 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 289 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 290 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 291 "data/maps/MtChimney/scripts.pory"
	return
# 292 "data/maps/MtChimney/scripts.pory"

# 293 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 294 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 295 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 296 "data/maps/MtChimney/scripts.pory"
	release
# 297 "data/maps/MtChimney/scripts.pory"
	end
# 298 "data/maps/MtChimney/scripts.pory"

# 299 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 300 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 301 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 302 "data/maps/MtChimney/scripts.pory"
	release
# 303 "data/maps/MtChimney/scripts.pory"
	end
# 304 "data/maps/MtChimney/scripts.pory"

# 305 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieKnockback:
# 306 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 307 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 308 "data/maps/MtChimney/scripts.pory"
	delay_16
# 309 "data/maps/MtChimney/scripts.pory"
	delay_16
# 310 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 311 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 312 "data/maps/MtChimney/scripts.pory"
	step_end
# 313 "data/maps/MtChimney/scripts.pory"

# 314 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 315 "data/maps/MtChimney/scripts.pory"
	walk_right
# 316 "data/maps/MtChimney/scripts.pory"
	step_end
# 317 "data/maps/MtChimney/scripts.pory"

# 318 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 319 "data/maps/MtChimney/scripts.pory"
	walk_left
# 320 "data/maps/MtChimney/scripts.pory"
	walk_left
# 321 "data/maps/MtChimney/scripts.pory"
	walk_left
# 322 "data/maps/MtChimney/scripts.pory"
	walk_down
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
	step_end
# 329 "data/maps/MtChimney/scripts.pory"

# 330 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 331 "data/maps/MtChimney/scripts.pory"
	walk_down
# 332 "data/maps/MtChimney/scripts.pory"
	walk_right
# 333 "data/maps/MtChimney/scripts.pory"
	step_end
# 334 "data/maps/MtChimney/scripts.pory"

# 335 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 336 "data/maps/MtChimney/scripts.pory"
	walk_left
# 337 "data/maps/MtChimney/scripts.pory"
	walk_left
# 338 "data/maps/MtChimney/scripts.pory"
	walk_left
# 339 "data/maps/MtChimney/scripts.pory"
	walk_down
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
	step_end
# 348 "data/maps/MtChimney/scripts.pory"

# 349 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 350 "data/maps/MtChimney/scripts.pory"
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	walk_down
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_down
# 355 "data/maps/MtChimney/scripts.pory"
	walk_left
# 356 "data/maps/MtChimney/scripts.pory"
	walk_left
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_down
# 361 "data/maps/MtChimney/scripts.pory"
	walk_left
# 362 "data/maps/MtChimney/scripts.pory"
	walk_left
# 363 "data/maps/MtChimney/scripts.pory"
	walk_left
# 364 "data/maps/MtChimney/scripts.pory"
	walk_left
# 365 "data/maps/MtChimney/scripts.pory"
	walk_left
# 366 "data/maps/MtChimney/scripts.pory"
	walk_down
# 367 "data/maps/MtChimney/scripts.pory"
	step_end
# 368 "data/maps/MtChimney/scripts.pory"

# 369 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 370 "data/maps/MtChimney/scripts.pory"
	walk_down
# 371 "data/maps/MtChimney/scripts.pory"
	walk_down
# 372 "data/maps/MtChimney/scripts.pory"
	walk_down
# 373 "data/maps/MtChimney/scripts.pory"
	walk_down
# 374 "data/maps/MtChimney/scripts.pory"
	walk_left
# 375 "data/maps/MtChimney/scripts.pory"
	walk_left
# 376 "data/maps/MtChimney/scripts.pory"
	walk_left
# 377 "data/maps/MtChimney/scripts.pory"
	walk_down
# 378 "data/maps/MtChimney/scripts.pory"
	step_end
# 379 "data/maps/MtChimney/scripts.pory"

# 380 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 381 "data/maps/MtChimney/scripts.pory"
	walk_right
# 382 "data/maps/MtChimney/scripts.pory"
	walk_down
# 383 "data/maps/MtChimney/scripts.pory"
	walk_down
# 384 "data/maps/MtChimney/scripts.pory"
	walk_down
# 385 "data/maps/MtChimney/scripts.pory"
	walk_down
# 386 "data/maps/MtChimney/scripts.pory"
	walk_left
# 387 "data/maps/MtChimney/scripts.pory"
	walk_left
# 388 "data/maps/MtChimney/scripts.pory"
	walk_left
# 389 "data/maps/MtChimney/scripts.pory"
	walk_left
# 390 "data/maps/MtChimney/scripts.pory"
	walk_left
# 391 "data/maps/MtChimney/scripts.pory"
	walk_down
# 392 "data/maps/MtChimney/scripts.pory"
	walk_down
# 393 "data/maps/MtChimney/scripts.pory"
	walk_down
# 394 "data/maps/MtChimney/scripts.pory"
	walk_down
# 395 "data/maps/MtChimney/scripts.pory"
	step_end
# 396 "data/maps/MtChimney/scripts.pory"

# 397 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 398 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
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
	walk_left
# 408 "data/maps/MtChimney/scripts.pory"
	walk_left
# 409 "data/maps/MtChimney/scripts.pory"
	walk_down
# 410 "data/maps/MtChimney/scripts.pory"
	walk_down
# 411 "data/maps/MtChimney/scripts.pory"
	walk_down
# 412 "data/maps/MtChimney/scripts.pory"
	walk_left
# 413 "data/maps/MtChimney/scripts.pory"
	walk_left
# 414 "data/maps/MtChimney/scripts.pory"
	walk_down
# 415 "data/maps/MtChimney/scripts.pory"
	walk_down
# 416 "data/maps/MtChimney/scripts.pory"
	walk_left
# 417 "data/maps/MtChimney/scripts.pory"
	walk_left
# 418 "data/maps/MtChimney/scripts.pory"
	walk_left
# 419 "data/maps/MtChimney/scripts.pory"
	walk_left
# 420 "data/maps/MtChimney/scripts.pory"
	walk_left
# 421 "data/maps/MtChimney/scripts.pory"
	walk_down
# 422 "data/maps/MtChimney/scripts.pory"
	step_end
# 423 "data/maps/MtChimney/scripts.pory"

# 424 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 425 "data/maps/MtChimney/scripts.pory"
	delay_16
# 426 "data/maps/MtChimney/scripts.pory"
	delay_16
# 427 "data/maps/MtChimney/scripts.pory"
	delay_16
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
	walk_down
# 435 "data/maps/MtChimney/scripts.pory"
	step_end
# 436 "data/maps/MtChimney/scripts.pory"

# 437 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 438 "data/maps/MtChimney/scripts.pory"
	delay_16
# 439 "data/maps/MtChimney/scripts.pory"
	walk_left
# 440 "data/maps/MtChimney/scripts.pory"
	walk_down
# 441 "data/maps/MtChimney/scripts.pory"
	walk_down
# 442 "data/maps/MtChimney/scripts.pory"
	walk_down
# 443 "data/maps/MtChimney/scripts.pory"
	walk_down
# 444 "data/maps/MtChimney/scripts.pory"
	walk_left
# 445 "data/maps/MtChimney/scripts.pory"
	walk_left
# 446 "data/maps/MtChimney/scripts.pory"
	walk_left
# 447 "data/maps/MtChimney/scripts.pory"
	walk_left
# 448 "data/maps/MtChimney/scripts.pory"
	walk_left
# 449 "data/maps/MtChimney/scripts.pory"
	walk_down
# 450 "data/maps/MtChimney/scripts.pory"
	walk_down
# 451 "data/maps/MtChimney/scripts.pory"
	walk_down
# 452 "data/maps/MtChimney/scripts.pory"
	walk_down
# 453 "data/maps/MtChimney/scripts.pory"
	step_end
# 454 "data/maps/MtChimney/scripts.pory"

# 455 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 456 "data/maps/MtChimney/scripts.pory"
	delay_16
# 457 "data/maps/MtChimney/scripts.pory"
	walk_left
# 458 "data/maps/MtChimney/scripts.pory"
	walk_left
# 459 "data/maps/MtChimney/scripts.pory"
	walk_down
# 460 "data/maps/MtChimney/scripts.pory"
	walk_down
# 461 "data/maps/MtChimney/scripts.pory"
	walk_down
# 462 "data/maps/MtChimney/scripts.pory"
	walk_left
# 463 "data/maps/MtChimney/scripts.pory"
	walk_left
# 464 "data/maps/MtChimney/scripts.pory"
	walk_down
# 465 "data/maps/MtChimney/scripts.pory"
	walk_down
# 466 "data/maps/MtChimney/scripts.pory"
	walk_left
# 467 "data/maps/MtChimney/scripts.pory"
	walk_left
# 468 "data/maps/MtChimney/scripts.pory"
	walk_left
# 469 "data/maps/MtChimney/scripts.pory"
	walk_left
# 470 "data/maps/MtChimney/scripts.pory"
	walk_left
# 471 "data/maps/MtChimney/scripts.pory"
	walk_down
# 472 "data/maps/MtChimney/scripts.pory"
	step_end
# 473 "data/maps/MtChimney/scripts.pory"

# 474 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 475 "data/maps/MtChimney/scripts.pory"
	delay_16
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
	walk_in_place_faster_down
# 482 "data/maps/MtChimney/scripts.pory"
	step_end
# 483 "data/maps/MtChimney/scripts.pory"

# 484 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
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
MtChimney_Movement_Unused10:
# 501 "data/maps/MtChimney/scripts.pory"
	walk_down
# 502 "data/maps/MtChimney/scripts.pory"
	step_end
# 503 "data/maps/MtChimney/scripts.pory"

# 504 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 505 "data/maps/MtChimney/scripts.pory"
	walk_down
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
	step_end
# 513 "data/maps/MtChimney/scripts.pory"

# 514 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 515 "data/maps/MtChimney/scripts.pory"
	delay_16
# 516 "data/maps/MtChimney/scripts.pory"
	delay_16
# 517 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 518 "data/maps/MtChimney/scripts.pory"
	delay_16
# 519 "data/maps/MtChimney/scripts.pory"
	walk_down
# 520 "data/maps/MtChimney/scripts.pory"
	walk_down
# 521 "data/maps/MtChimney/scripts.pory"
	walk_down
# 522 "data/maps/MtChimney/scripts.pory"
	walk_down
# 523 "data/maps/MtChimney/scripts.pory"
	walk_down
# 524 "data/maps/MtChimney/scripts.pory"
	step_end
# 525 "data/maps/MtChimney/scripts.pory"

# 526 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 527 "data/maps/MtChimney/scripts.pory"
	delay_16
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
	walk_in_place_faster_left
# 534 "data/maps/MtChimney/scripts.pory"
	delay_16
# 535 "data/maps/MtChimney/scripts.pory"
	walk_down
# 536 "data/maps/MtChimney/scripts.pory"
	walk_down
# 537 "data/maps/MtChimney/scripts.pory"
	step_end
# 538 "data/maps/MtChimney/scripts.pory"

# 539 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 540 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 541 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 542 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 543 "data/maps/MtChimney/scripts.pory"
	face_right
# 544 "data/maps/MtChimney/scripts.pory"
	step_end
# 545 "data/maps/MtChimney/scripts.pory"

# 546 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 547 "data/maps/MtChimney/scripts.pory"
	walk_left
# 548 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 549 "data/maps/MtChimney/scripts.pory"
	delay_16
# 550 "data/maps/MtChimney/scripts.pory"
	step_end
# 551 "data/maps/MtChimney/scripts.pory"

# 552 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 553 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 554 "data/maps/MtChimney/scripts.pory"
	end
# 555 "data/maps/MtChimney/scripts.pory"

# 556 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 557 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 558 "data/maps/MtChimney/scripts.pory"
	end
# 559 "data/maps/MtChimney/scripts.pory"

# 560 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 561 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 562 "data/maps/MtChimney/scripts.pory"
	end
# 563 "data/maps/MtChimney/scripts.pory"

# 564 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 565 "data/maps/MtChimney/scripts.pory"
lockall
# 566 "data/maps/MtChimney/scripts.pory"
applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 567 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 568 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 569 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 570 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 571 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaIntro, MSGBOX_AUTOCLOSE
# 572 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_TabithaDoMultiBattle
# 573 "data/maps/MtChimney/scripts.pory"
releaseall
# 574 "data/maps/MtChimney/scripts.pory"
end
# 575 "data/maps/MtChimney/scripts.pory"

# 576 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaDoMultiBattle::
# 577 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 578 "data/maps/MtChimney/scripts.pory"
	multi_2p_vs_1 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, PARTNER_EMMIE
# 579 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 580 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_TabithaVictory
# 581 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 582 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 583 "data/maps/MtChimney/scripts.pory"
	waitstate
# 584 "data/maps/MtChimney/scripts.pory"

# 585 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaVictory::
# 586 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 587 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 588 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 589 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 590 "data/maps/MtChimney/scripts.pory"
end
# 591 "data/maps/MtChimney/scripts.pory"

# 592 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha2::
# 593 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 594 "data/maps/MtChimney/scripts.pory"
	end
# 595 "data/maps/MtChimney/scripts.pory"

# 596 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2::
# 597 "data/maps/MtChimney/scripts.pory"
lockall
# 598 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_1
# 599 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 600 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 601 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 602 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 603 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 604 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 605 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 606 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_2
# 607 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 608 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 609 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 610 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 611 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 612 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 613 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2Intro, MSGBOX_AUTOCLOSE
# 614 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_Grunt1Grunt2DoMultiBattle
# 615 "data/maps/MtChimney/scripts.pory"
releaseall
# 616 "data/maps/MtChimney/scripts.pory"
end
# 617 "data/maps/MtChimney/scripts.pory"

# 618 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2DoMultiBattle::
# 619 "data/maps/MtChimney/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 620 "data/maps/MtChimney/scripts.pory"
multi_2p_vs_1 TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Defeat, PARTNER_EMMIE
# 621 "data/maps/MtChimney/scripts.pory"
switch VAR_RESULT
# 622 "data/maps/MtChimney/scripts.pory"
case 1, MtChimney_EventScript_Grunt1Grunt2Victory
# 623 "data/maps/MtChimney/scripts.pory"
fadescreen FADE_TO_BLACK
# 624 "data/maps/MtChimney/scripts.pory"
special SetCB2WhiteOut
# 625 "data/maps/MtChimney/scripts.pory"
waitstate
# 626 "data/maps/MtChimney/scripts.pory"

# 627 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2Victory::
# 628 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 629 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 630 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 631 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 632 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 633 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 634 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 635 "data/maps/MtChimney/scripts.pory"
end
# 636 "data/maps/MtChimney/scripts.pory"

# 637 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 638 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 639 "data/maps/MtChimney/scripts.pory"
	end
# 640 "data/maps/MtChimney/scripts.pory"

# 641 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 642 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 643 "data/maps/MtChimney/scripts.pory"
	end
# 644 "data/maps/MtChimney/scripts.pory"

# 645 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 646 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 647 "data/maps/MtChimney/scripts.pory"
	end
# 648 "data/maps/MtChimney/scripts.pory"

# 649 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 650 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 651 "data/maps/MtChimney/scripts.pory"
	end
# 652 "data/maps/MtChimney/scripts.pory"

# 653 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 654 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 655 "data/maps/MtChimney/scripts.pory"
	end
# 656 "data/maps/MtChimney/scripts.pory"

# 657 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 658 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 659 "data/maps/MtChimney/scripts.pory"
	end
# 660 "data/maps/MtChimney/scripts.pory"

# 661 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 662 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 663 "data/maps/MtChimney/scripts.pory"
	end
# 664 "data/maps/MtChimney/scripts.pory"

# 665 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 666 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 667 "data/maps/MtChimney/scripts.pory"
	end
# 668 "data/maps/MtChimney/scripts.pory"

# 669 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 670 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 671 "data/maps/MtChimney/scripts.pory"
	end
# 672 "data/maps/MtChimney/scripts.pory"

# 673 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 674 "data/maps/MtChimney/scripts.pory"
	lockall
# 675 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 676 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 677 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 678 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 679 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 680 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 681 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 682 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 683 "data/maps/MtChimney/scripts.pory"
	releaseall
# 684 "data/maps/MtChimney/scripts.pory"
	end
# 685 "data/maps/MtChimney/scripts.pory"

# 686 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 687 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 688 "data/maps/MtChimney/scripts.pory"
	releaseall
# 689 "data/maps/MtChimney/scripts.pory"
	end
# 690 "data/maps/MtChimney/scripts.pory"

# 691 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 692 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 693 "data/maps/MtChimney/scripts.pory"
	releaseall
# 694 "data/maps/MtChimney/scripts.pory"
	end
# 695 "data/maps/MtChimney/scripts.pory"

# 696 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 697 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 698 "data/maps/MtChimney/scripts.pory"
	releaseall
# 699 "data/maps/MtChimney/scripts.pory"
	end
# 700 "data/maps/MtChimney/scripts.pory"

# 701 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 702 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 703 "data/maps/MtChimney/scripts.pory"
	end
# 704 "data/maps/MtChimney/scripts.pory"

# 705 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 706 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 707 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 708 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 709 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 710 "data/maps/MtChimney/scripts.pory"
	release
# 711 "data/maps/MtChimney/scripts.pory"
	end
# 712 "data/maps/MtChimney/scripts.pory"

# 713 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 714 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 715 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 716 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 717 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 718 "data/maps/MtChimney/scripts.pory"
	release
# 719 "data/maps/MtChimney/scripts.pory"
	end
# 720 "data/maps/MtChimney/scripts.pory"

# 721 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 722 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 723 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 724 "data/maps/MtChimney/scripts.pory"
	end
# 725 "data/maps/MtChimney/scripts.pory"

# 726 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 727 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 728 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 729 "data/maps/MtChimney/scripts.pory"
	end
# 730 "data/maps/MtChimney/scripts.pory"

# 731 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 732 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 733 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 734 "data/maps/MtChimney/scripts.pory"
	end
# 735 "data/maps/MtChimney/scripts.pory"

# 736 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 737 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 738 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 739 "data/maps/MtChimney/scripts.pory"
	end
# 740 "data/maps/MtChimney/scripts.pory"

# 741 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 742 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 743 "data/maps/MtChimney/scripts.pory"
	end
# 744 "data/maps/MtChimney/scripts.pory"

# 745 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 746 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 747 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 748 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 749 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 750 "data/maps/MtChimney/scripts.pory"
	release
# 751 "data/maps/MtChimney/scripts.pory"
	end
# 752 "data/maps/MtChimney/scripts.pory"

# 753 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 754 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 755 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 756 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 757 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 758 "data/maps/MtChimney/scripts.pory"
	release
# 759 "data/maps/MtChimney/scripts.pory"
	end
# 760 "data/maps/MtChimney/scripts.pory"

# 761 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 762 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 763 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 764 "data/maps/MtChimney/scripts.pory"
	end
# 765 "data/maps/MtChimney/scripts.pory"

# 766 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 767 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 768 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 769 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 771 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 772 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 774 "data/maps/MtChimney/scripts.pory"

# 775 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 776 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 777 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 783 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 784 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 785 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 788 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 789 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 790 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 791 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 792 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 796 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 798 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 799 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 800 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 802 "data/maps/MtChimney/scripts.pory"

# 803 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 804 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 805 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 806 "data/maps/MtChimney/scripts.pory"

# 807 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 808 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 809 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 813 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 815 "data/maps/MtChimney/scripts.pory"

# 816 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 817 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 822 "data/maps/MtChimney/scripts.pory"

# 823 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 824 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 826 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 827 "data/maps/MtChimney/scripts.pory"

# 828 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 829 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 831 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 832 "data/maps/MtChimney/scripts.pory"

# 833 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 834 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 835 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 836 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 843 "data/maps/MtChimney/scripts.pory"

# 844 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 845 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 847 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 848 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 849 "data/maps/MtChimney/scripts.pory"

# 850 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 851 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 852 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 853 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 854 "data/maps/MtChimney/scripts.pory"

# 855 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 856 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 857 "data/maps/MtChimney/scripts.pory"

# 858 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 859 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 861 "data/maps/MtChimney/scripts.pory"

# 862 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 863 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 864 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 865 "data/maps/MtChimney/scripts.pory"

# 866 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 867 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 868 "data/maps/MtChimney/scripts.pory"

# 869 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 870 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 871 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 872 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 873 "data/maps/MtChimney/scripts.pory"

# 874 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 875 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 876 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 877 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 878 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 879 "data/maps/MtChimney/scripts.pory"

# 880 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 881 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 882 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 883 "data/maps/MtChimney/scripts.pory"

# 884 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 885 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 886 "data/maps/MtChimney/scripts.pory"

# 887 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 888 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 889 "data/maps/MtChimney/scripts.pory"

# 890 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyGoStopTeamMagma:
# 891 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grr, {PLAYER}!\n"
# 892 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 893 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 894 "data/maps/MtChimney/scripts.pory"
	.string "of Team Magma are up to!\p"
# 895 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 896 "data/maps/MtChimney/scripts.pory"
	.string "Meteorite's power into the volcano!\p"
# 897 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 898 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 899 "data/maps/MtChimney/scripts.pory"

# 900 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyIHaveMyHandsFull:
# 901 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grrr…\n"
# 902 "data/maps/MtChimney/scripts.pory"
	.string "The boss went on to stop Maxie!\p"
# 903 "data/maps/MtChimney/scripts.pory"
	.string "Somebody needs to help him!\p"
# 904 "data/maps/MtChimney/scripts.pory"
	.string "I can't when I have my hands full\n"
# 905 "data/maps/MtChimney/scripts.pory"
	.string "battling three opponents at once!$"
# 906 "data/maps/MtChimney/scripts.pory"

# 907 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 908 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 909 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 910 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 911 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 912 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 913 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 914 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 915 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 916 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 917 "data/maps/MtChimney/scripts.pory"
	.string "As thanks, please take this, the HM for\n"
# 918 "data/maps/MtChimney/scripts.pory"
	.string "Surf.\p"
# 919 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 920 "data/maps/MtChimney/scripts.pory"

# 921 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 922 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 923 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 924 "data/maps/MtChimney/scripts.pory"

# 925 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 926 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 927 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 928 "data/maps/MtChimney/scripts.pory"

# 929 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 930 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 931 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 932 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 933 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 934 "data/maps/MtChimney/scripts.pory"

# 935 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 936 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 937 "data/maps/MtChimney/scripts.pory"

# 938 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 939 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 940 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 941 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 942 "data/maps/MtChimney/scripts.pory"

# 943 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 944 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 945 "data/maps/MtChimney/scripts.pory"

# 946 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 947 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 948 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 949 "data/maps/MtChimney/scripts.pory"

# 950 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 951 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 952 "data/maps/MtChimney/scripts.pory"

# 953 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 954 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 955 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 956 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 957 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 958 "data/maps/MtChimney/scripts.pory"

# 959 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 960 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 961 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 962 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 963 "data/maps/MtChimney/scripts.pory"

# 964 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 965 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 966 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 967 "data/maps/MtChimney/scripts.pory"

# 968 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 969 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 970 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 971 "data/maps/MtChimney/scripts.pory"

# 972 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 973 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 974 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 975 "data/maps/MtChimney/scripts.pory"

# 976 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 977 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 978 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 979 "data/maps/MtChimney/scripts.pory"

# 980 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 981 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 982 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 983 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 984 "data/maps/MtChimney/scripts.pory"

# 985 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 986 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 987 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 988 "data/maps/MtChimney/scripts.pory"

# 989 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 990 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 991 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 992 "data/maps/MtChimney/scripts.pory"

# 993 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 994 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 995 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 996 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 997 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 998 "data/maps/MtChimney/scripts.pory"

# 999 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 1000 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 1001 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 1002 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 1003 "data/maps/MtChimney/scripts.pory"

# 1004 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 1005 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 1006 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 1007 "data/maps/MtChimney/scripts.pory"

# 1008 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 1009 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 1010 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 1011 "data/maps/MtChimney/scripts.pory"

# 1012 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 1013 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 1014 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 1015 "data/maps/MtChimney/scripts.pory"

# 1016 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 1017 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 1018 "data/maps/MtChimney/scripts.pory"

# 1019 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 1020 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 1021 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 1022 "data/maps/MtChimney/scripts.pory"

# 1023 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 1024 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 1025 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 1026 "data/maps/MtChimney/scripts.pory"

# 1027 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 1028 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 1029 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 1030 "data/maps/MtChimney/scripts.pory"

# 1031 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 1032 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 1033 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 1034 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 1035 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 1036 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 1037 "data/maps/MtChimney/scripts.pory"

# 1038 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 1039 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 1040 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 1041 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 1042 "data/maps/MtChimney/scripts.pory"

# 1043 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 1044 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 1045 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 1046 "data/maps/MtChimney/scripts.pory"

# 1047 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 1048 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 1049 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 1050 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 1051 "data/maps/MtChimney/scripts.pory"

# 1052 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 1053 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 1054 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 1055 "data/maps/MtChimney/scripts.pory"

# 1056 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 1057 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 1058 "data/maps/MtChimney/scripts.pory"

# 1059 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 1060 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 1061 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 1062 "data/maps/MtChimney/scripts.pory"

# 1063 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 1064 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 1065 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 1066 "data/maps/MtChimney/scripts.pory"

# 1067 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 1068 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 1069 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 1070 "data/maps/MtChimney/scripts.pory"

# 1071 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 1072 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 1073 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 1074 "data/maps/MtChimney/scripts.pory"

# 1075 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 1076 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 1077 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
# 1078 "data/maps/MtChimney/scripts.pory"

# 1079 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieDontDoThis:
# 1080 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Maxie! You must not go through\n"
# 1081 "data/maps/MtChimney/scripts.pory"
	.string "with this!$"
# 1082 "data/maps/MtChimney/scripts.pory"

# 1083 "data/maps/MtChimney/scripts.pory"
Mtchimney_Text_MaxieCannotStopMe:
# 1084 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: Fufufu… Now, now Archie…\n"
# 1085 "data/maps/MtChimney/scripts.pory"
	.string "Is this really the best you can do?$"
# 1086 "data/maps/MtChimney/scripts.pory"

# 1087 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchiePleaseStopMaxie:
# 1088 "data/maps/MtChimney/scripts.pory"
	.string "Archie: {PLAYER}, I warned you\n"
# 1089 "data/maps/MtChimney/scripts.pory"
	.string "about Team Magma.\p"
# 1090 "data/maps/MtChimney/scripts.pory"
	.string "Please, you must help me stop Maxie!$"

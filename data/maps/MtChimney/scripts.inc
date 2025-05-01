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
	msgbox MtChimney_Text_ArchieDontDoThis, MSGBOX_DEFAULT
# 46 "data/maps/MtChimney/scripts.pory"
	closemessage
# 47 "data/maps/MtChimney/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 48 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieKnockback
# 49 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 50 "data/maps/MtChimney/scripts.pory"
	msgbox Mtchimney_Text_MaxieCannotStopMe, MSGBOX_DEFAULT
# 51 "data/maps/MtChimney/scripts.pory"
	closemessage
# 52 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 53 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 54 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 55 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 56 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 57 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchiePleaseStopMaxie, MSGBOX_DEFAULT
# 58 "data/maps/MtChimney/scripts.pory"
	closemessage
# 59 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
# 60 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 61 "data/maps/MtChimney/scripts.pory"
	addvar VAR_MTCHIMNEY_STATE, 1
# 62 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 6
# 63 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_MAXIE, MOVEMENT_TYPE_FACE_RIGHT
# 65 "data/maps/MtChimney/scripts.pory"
	releaseall
# 66 "data/maps/MtChimney/scripts.pory"
	end
# 67 "data/maps/MtChimney/scripts.pory"

# 68 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 69 "data/maps/MtChimney/scripts.pory"
	lockall
# 70 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchiePleaseStopMaxie, MSGBOX_DEFAULT
# 71 "data/maps/MtChimney/scripts.pory"
	closemessage
# 72 "data/maps/MtChimney/scripts.pory"
	releaseall
# 73 "data/maps/MtChimney/scripts.pory"
	end
# 74 "data/maps/MtChimney/scripts.pory"

# 75 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 76 "data/maps/MtChimney/scripts.pory"
	lockall
# 77 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 78 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 79 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 80 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 81 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 82 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 83 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 84 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 85 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 86 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 87 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MaxieDoMultiBattle
# 88 "data/maps/MtChimney/scripts.pory"
	releaseall
# 89 "data/maps/MtChimney/scripts.pory"
	end
# 90 "data/maps/MtChimney/scripts.pory"

# 91 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieDoMultiBattle::
# 92 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 93 "data/maps/MtChimney/scripts.pory"
	multi_2p_vs_1 TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat, PARTNER_EMMIE
# 94 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_MaxieVictory
# 96 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 98 "data/maps/MtChimney/scripts.pory"
	waitstate
# 99 "data/maps/MtChimney/scripts.pory"

# 100 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MaxieVictory::
# 101 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 102 "data/maps/MtChimney/scripts.pory"
	closemessage
# 103 "data/maps/MtChimney/scripts.pory"
	delay 30
# 104 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 105 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 106 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 107 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 108 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 109 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 110 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_MT_CHIMNEY, TRUE
# 111 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 112 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 113 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 114 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 115 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 116 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 117 "data/maps/MtChimney/scripts.pory"
	closemessage
# 118 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_HM_SURF
# 119 "data/maps/MtChimney/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 120 "data/maps/MtChimney/scripts.pory"
	waitfanfare
# 121 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 123 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 124 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_AQUA_2
# 125 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 126 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 127 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 128 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 129 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 130 "data/maps/MtChimney/scripts.pory"
	releaseall
# 131 "data/maps/MtChimney/scripts.pory"
	end
# 132 "data/maps/MtChimney/scripts.pory"

# 133 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 134 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 135 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 136 "data/maps/MtChimney/scripts.pory"
	return
# 137 "data/maps/MtChimney/scripts.pory"

# 138 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 139 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 140 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 141 "data/maps/MtChimney/scripts.pory"
	return
# 142 "data/maps/MtChimney/scripts.pory"

# 143 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 144 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 145 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 146 "data/maps/MtChimney/scripts.pory"
	return
# 147 "data/maps/MtChimney/scripts.pory"

# 148 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 149 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 150 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 151 "data/maps/MtChimney/scripts.pory"
	return
# 152 "data/maps/MtChimney/scripts.pory"

# 153 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 154 "data/maps/MtChimney/scripts.pory"
	lock
# 155 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 156 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 157 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 158 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 159 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 160 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 161 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 162 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 163 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 164 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 165 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 166 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 167 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 168 "data/maps/MtChimney/scripts.pory"
	release
# 169 "data/maps/MtChimney/scripts.pory"
	end
# 170 "data/maps/MtChimney/scripts.pory"

# 171 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 172 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 173 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 174 "data/maps/MtChimney/scripts.pory"
	release
# 175 "data/maps/MtChimney/scripts.pory"
	end
# 176 "data/maps/MtChimney/scripts.pory"
.else
# 177 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 178 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 179 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 180 "data/maps/MtChimney/scripts.pory"
	release
# 181 "data/maps/MtChimney/scripts.pory"
	end
# 182 "data/maps/MtChimney/scripts.pory"

# 183 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 184 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 185 "data/maps/MtChimney/scripts.pory"
	release
# 186 "data/maps/MtChimney/scripts.pory"
	end
# 187 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 188 "data/maps/MtChimney/scripts.pory"

# 189 "data/maps/MtChimney/scripts.pory"

# 190 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 191 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 192 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 193 "data/maps/MtChimney/scripts.pory"
	return
# 194 "data/maps/MtChimney/scripts.pory"

# 195 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 196 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 197 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 198 "data/maps/MtChimney/scripts.pory"
	release
# 199 "data/maps/MtChimney/scripts.pory"
	end
# 200 "data/maps/MtChimney/scripts.pory"

# 201 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 202 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 203 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 204 "data/maps/MtChimney/scripts.pory"
	release
# 205 "data/maps/MtChimney/scripts.pory"
	end
# 206 "data/maps/MtChimney/scripts.pory"

# 207 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieKnockback:
# 208 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 209 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 210 "data/maps/MtChimney/scripts.pory"
	delay_16
# 211 "data/maps/MtChimney/scripts.pory"
	delay_16
# 212 "data/maps/MtChimney/scripts.pory"
	walk_slow_left
# 213 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 214 "data/maps/MtChimney/scripts.pory"
	step_end
# 215 "data/maps/MtChimney/scripts.pory"

# 216 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 217 "data/maps/MtChimney/scripts.pory"
	walk_right
# 218 "data/maps/MtChimney/scripts.pory"
	step_end
# 219 "data/maps/MtChimney/scripts.pory"

# 220 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 221 "data/maps/MtChimney/scripts.pory"
	walk_left
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
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
	step_end
# 230 "data/maps/MtChimney/scripts.pory"

# 231 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 233 "data/maps/MtChimney/scripts.pory"
	walk_right
# 234 "data/maps/MtChimney/scripts.pory"
	walk_right
# 235 "data/maps/MtChimney/scripts.pory"
	step_end
# 236 "data/maps/MtChimney/scripts.pory"

# 237 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 238 "data/maps/MtChimney/scripts.pory"
	walk_left
# 239 "data/maps/MtChimney/scripts.pory"
	walk_left
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_down
# 242 "data/maps/MtChimney/scripts.pory"
	walk_down
# 243 "data/maps/MtChimney/scripts.pory"
	walk_down
# 244 "data/maps/MtChimney/scripts.pory"
	walk_down
# 245 "data/maps/MtChimney/scripts.pory"
	walk_down
# 246 "data/maps/MtChimney/scripts.pory"
	walk_down
# 247 "data/maps/MtChimney/scripts.pory"
	step_end
# 248 "data/maps/MtChimney/scripts.pory"

# 249 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 250 "data/maps/MtChimney/scripts.pory"
	walk_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_left
# 256 "data/maps/MtChimney/scripts.pory"
	walk_left
# 257 "data/maps/MtChimney/scripts.pory"
	walk_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_down
# 259 "data/maps/MtChimney/scripts.pory"
	walk_down
# 260 "data/maps/MtChimney/scripts.pory"
	walk_down
# 261 "data/maps/MtChimney/scripts.pory"
	walk_left
# 262 "data/maps/MtChimney/scripts.pory"
	walk_left
# 263 "data/maps/MtChimney/scripts.pory"
	walk_left
# 264 "data/maps/MtChimney/scripts.pory"
	walk_left
# 265 "data/maps/MtChimney/scripts.pory"
	walk_left
# 266 "data/maps/MtChimney/scripts.pory"
	walk_down
# 267 "data/maps/MtChimney/scripts.pory"
	step_end
# 268 "data/maps/MtChimney/scripts.pory"

# 269 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 270 "data/maps/MtChimney/scripts.pory"
	walk_down
# 271 "data/maps/MtChimney/scripts.pory"
	walk_down
# 272 "data/maps/MtChimney/scripts.pory"
	walk_down
# 273 "data/maps/MtChimney/scripts.pory"
	walk_down
# 274 "data/maps/MtChimney/scripts.pory"
	walk_left
# 275 "data/maps/MtChimney/scripts.pory"
	walk_left
# 276 "data/maps/MtChimney/scripts.pory"
	walk_left
# 277 "data/maps/MtChimney/scripts.pory"
	walk_down
# 278 "data/maps/MtChimney/scripts.pory"
	step_end
# 279 "data/maps/MtChimney/scripts.pory"

# 280 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 281 "data/maps/MtChimney/scripts.pory"
	walk_right
# 282 "data/maps/MtChimney/scripts.pory"
	walk_down
# 283 "data/maps/MtChimney/scripts.pory"
	walk_down
# 284 "data/maps/MtChimney/scripts.pory"
	walk_down
# 285 "data/maps/MtChimney/scripts.pory"
	walk_down
# 286 "data/maps/MtChimney/scripts.pory"
	walk_left
# 287 "data/maps/MtChimney/scripts.pory"
	walk_left
# 288 "data/maps/MtChimney/scripts.pory"
	walk_left
# 289 "data/maps/MtChimney/scripts.pory"
	walk_left
# 290 "data/maps/MtChimney/scripts.pory"
	walk_left
# 291 "data/maps/MtChimney/scripts.pory"
	walk_down
# 292 "data/maps/MtChimney/scripts.pory"
	walk_down
# 293 "data/maps/MtChimney/scripts.pory"
	walk_down
# 294 "data/maps/MtChimney/scripts.pory"
	walk_down
# 295 "data/maps/MtChimney/scripts.pory"
	step_end
# 296 "data/maps/MtChimney/scripts.pory"

# 297 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 298 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 301 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 302 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 303 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 305 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 306 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 307 "data/maps/MtChimney/scripts.pory"
	walk_left
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/MtChimney/scripts.pory"
	walk_left
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_down
# 315 "data/maps/MtChimney/scripts.pory"
	walk_down
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_left
# 320 "data/maps/MtChimney/scripts.pory"
	walk_left
# 321 "data/maps/MtChimney/scripts.pory"
	walk_down
# 322 "data/maps/MtChimney/scripts.pory"
	step_end
# 323 "data/maps/MtChimney/scripts.pory"

# 324 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 325 "data/maps/MtChimney/scripts.pory"
	delay_16
# 326 "data/maps/MtChimney/scripts.pory"
	delay_16
# 327 "data/maps/MtChimney/scripts.pory"
	delay_16
# 328 "data/maps/MtChimney/scripts.pory"
	walk_down
# 329 "data/maps/MtChimney/scripts.pory"
	walk_down
# 330 "data/maps/MtChimney/scripts.pory"
	walk_down
# 331 "data/maps/MtChimney/scripts.pory"
	walk_left
# 332 "data/maps/MtChimney/scripts.pory"
	walk_left
# 333 "data/maps/MtChimney/scripts.pory"
	walk_left
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	step_end
# 336 "data/maps/MtChimney/scripts.pory"

# 337 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 338 "data/maps/MtChimney/scripts.pory"
	delay_16
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
	walk_left
# 345 "data/maps/MtChimney/scripts.pory"
	walk_left
# 346 "data/maps/MtChimney/scripts.pory"
	walk_left
# 347 "data/maps/MtChimney/scripts.pory"
	walk_left
# 348 "data/maps/MtChimney/scripts.pory"
	walk_left
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	walk_down
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	step_end
# 354 "data/maps/MtChimney/scripts.pory"

# 355 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 356 "data/maps/MtChimney/scripts.pory"
	delay_16
# 357 "data/maps/MtChimney/scripts.pory"
	walk_left
# 358 "data/maps/MtChimney/scripts.pory"
	walk_left
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
	walk_down
# 365 "data/maps/MtChimney/scripts.pory"
	walk_down
# 366 "data/maps/MtChimney/scripts.pory"
	walk_left
# 367 "data/maps/MtChimney/scripts.pory"
	walk_left
# 368 "data/maps/MtChimney/scripts.pory"
	walk_left
# 369 "data/maps/MtChimney/scripts.pory"
	walk_left
# 370 "data/maps/MtChimney/scripts.pory"
	walk_left
# 371 "data/maps/MtChimney/scripts.pory"
	walk_down
# 372 "data/maps/MtChimney/scripts.pory"
	step_end
# 373 "data/maps/MtChimney/scripts.pory"

# 374 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 375 "data/maps/MtChimney/scripts.pory"
	delay_16
# 376 "data/maps/MtChimney/scripts.pory"
	walk_down
# 377 "data/maps/MtChimney/scripts.pory"
	walk_left
# 378 "data/maps/MtChimney/scripts.pory"
	walk_left
# 379 "data/maps/MtChimney/scripts.pory"
	walk_left
# 380 "data/maps/MtChimney/scripts.pory"
	walk_left
# 381 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 382 "data/maps/MtChimney/scripts.pory"
	step_end
# 383 "data/maps/MtChimney/scripts.pory"

# 384 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 385 "data/maps/MtChimney/scripts.pory"
	walk_down
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	walk_down
# 388 "data/maps/MtChimney/scripts.pory"
	walk_down
# 389 "data/maps/MtChimney/scripts.pory"
	walk_left
# 390 "data/maps/MtChimney/scripts.pory"
	walk_left
# 391 "data/maps/MtChimney/scripts.pory"
	walk_left
# 392 "data/maps/MtChimney/scripts.pory"
	walk_left
# 393 "data/maps/MtChimney/scripts.pory"
	walk_left
# 394 "data/maps/MtChimney/scripts.pory"
	walk_down
# 395 "data/maps/MtChimney/scripts.pory"
	walk_down
# 396 "data/maps/MtChimney/scripts.pory"
	walk_down
# 397 "data/maps/MtChimney/scripts.pory"
	walk_down
# 398 "data/maps/MtChimney/scripts.pory"
	step_end
# 399 "data/maps/MtChimney/scripts.pory"

# 400 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 401 "data/maps/MtChimney/scripts.pory"
	walk_down
# 402 "data/maps/MtChimney/scripts.pory"
	step_end
# 403 "data/maps/MtChimney/scripts.pory"

# 404 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 405 "data/maps/MtChimney/scripts.pory"
	walk_down
# 406 "data/maps/MtChimney/scripts.pory"
	walk_down
# 407 "data/maps/MtChimney/scripts.pory"
	walk_down
# 408 "data/maps/MtChimney/scripts.pory"
	walk_down
# 409 "data/maps/MtChimney/scripts.pory"
	walk_down
# 410 "data/maps/MtChimney/scripts.pory"
	walk_down
# 411 "data/maps/MtChimney/scripts.pory"
	walk_down
# 412 "data/maps/MtChimney/scripts.pory"
	step_end
# 413 "data/maps/MtChimney/scripts.pory"

# 414 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 415 "data/maps/MtChimney/scripts.pory"
	delay_16
# 416 "data/maps/MtChimney/scripts.pory"
	delay_16
# 417 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 418 "data/maps/MtChimney/scripts.pory"
	delay_16
# 419 "data/maps/MtChimney/scripts.pory"
	walk_down
# 420 "data/maps/MtChimney/scripts.pory"
	walk_down
# 421 "data/maps/MtChimney/scripts.pory"
	walk_down
# 422 "data/maps/MtChimney/scripts.pory"
	walk_down
# 423 "data/maps/MtChimney/scripts.pory"
	walk_down
# 424 "data/maps/MtChimney/scripts.pory"
	step_end
# 425 "data/maps/MtChimney/scripts.pory"

# 426 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 427 "data/maps/MtChimney/scripts.pory"
	delay_16
# 428 "data/maps/MtChimney/scripts.pory"
	delay_16
# 429 "data/maps/MtChimney/scripts.pory"
	delay_16
# 430 "data/maps/MtChimney/scripts.pory"
	delay_16
# 431 "data/maps/MtChimney/scripts.pory"
	delay_16
# 432 "data/maps/MtChimney/scripts.pory"
	delay_16
# 433 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 434 "data/maps/MtChimney/scripts.pory"
	delay_16
# 435 "data/maps/MtChimney/scripts.pory"
	walk_down
# 436 "data/maps/MtChimney/scripts.pory"
	walk_down
# 437 "data/maps/MtChimney/scripts.pory"
	step_end
# 438 "data/maps/MtChimney/scripts.pory"

# 439 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 440 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 441 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 442 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 443 "data/maps/MtChimney/scripts.pory"
	face_right
# 444 "data/maps/MtChimney/scripts.pory"
	step_end
# 445 "data/maps/MtChimney/scripts.pory"

# 446 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 447 "data/maps/MtChimney/scripts.pory"
	walk_left
# 448 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 449 "data/maps/MtChimney/scripts.pory"
	delay_16
# 450 "data/maps/MtChimney/scripts.pory"
	step_end
# 451 "data/maps/MtChimney/scripts.pory"

# 452 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 453 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 454 "data/maps/MtChimney/scripts.pory"
	end
# 455 "data/maps/MtChimney/scripts.pory"

# 456 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 457 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 458 "data/maps/MtChimney/scripts.pory"
	end
# 459 "data/maps/MtChimney/scripts.pory"

# 460 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 461 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 462 "data/maps/MtChimney/scripts.pory"
	end
# 463 "data/maps/MtChimney/scripts.pory"

# 464 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 465 "data/maps/MtChimney/scripts.pory"
lockall
# 466 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_TABITHA
# 467 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 468 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 469 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 470 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 471 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 472 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 473 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaIntro MSGBOX_AUTOCLOSE
# 474 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_TabithaDoMultiBattle
# 475 "data/maps/MtChimney/scripts.pory"
releaseall
# 476 "data/maps/MtChimney/scripts.pory"
end
# 477 "data/maps/MtChimney/scripts.pory"

# 478 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaDoMultiBattle::
# 479 "data/maps/MtChimney/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 480 "data/maps/MtChimney/scripts.pory"
multi_2p_vs_1 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, PARTNER_EMMIE
# 481 "data/maps/MtChimney/scripts.pory"
switch VAR_RESULT
# 482 "data/maps/MtChimney/scripts.pory"
case 1, MtChimney_EventScript_TabithaVictory
# 483 "data/maps/MtChimney/scripts.pory"
fadescreen FADE_TO_BLACK
# 484 "data/maps/MtChimney/scripts.pory"
special SetCB2WhiteOut
# 485 "data/maps/MtChimney/scripts.pory"
waitstate
# 486 "data/maps/MtChimney/scripts.pory"

# 487 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaVictory::
# 488 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 489 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 490 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 491 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 492 "data/maps/MtChimney/scripts.pory"
end
# 493 "data/maps/MtChimney/scripts.pory"

# 494 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha2::
# 495 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 496 "data/maps/MtChimney/scripts.pory"
	end
# 497 "data/maps/MtChimney/scripts.pory"

# 498 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2::
# 499 "data/maps/MtChimney/scripts.pory"
lockall
# 500 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_1
# 501 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 502 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 503 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 504 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 505 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 506 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 507 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 508 "data/maps/MtChimney/scripts.pory"
setvar VAR_0x8008, LOCALID_MAGMA_GRUNT_2
# 509 "data/maps/MtChimney/scripts.pory"
playse SE_PIN
# 510 "data/maps/MtChimney/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 511 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 512 "data/maps/MtChimney/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 513 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 514 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 515 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2Intro MSGBOX_AUTOCLOSE
# 516 "data/maps/MtChimney/scripts.pory"
goto MtChimney_EventScript_Grunt1Grunt2DoMultiBattle
# 517 "data/maps/MtChimney/scripts.pory"
releaseall
# 518 "data/maps/MtChimney/scripts.pory"
end
# 519 "data/maps/MtChimney/scripts.pory"

# 520 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2DoMultiBattle::
# 521 "data/maps/MtChimney/scripts.pory"
playbgm MUS_MT_CHIMNEY, TRUE
# 522 "data/maps/MtChimney/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Defeat, TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Defeat, PARTNER_EMMIE
# 523 "data/maps/MtChimney/scripts.pory"
switch VAR_RESULT
# 524 "data/maps/MtChimney/scripts.pory"
case 1, MtChimney_EventScript_Grunt1Grunt2Victory
# 525 "data/maps/MtChimney/scripts.pory"
fadescreen FADE_TO_BLACK
# 526 "data/maps/MtChimney/scripts.pory"
special SetCB2WhiteOut
# 527 "data/maps/MtChimney/scripts.pory"
waitstate
# 528 "data/maps/MtChimney/scripts.pory"

# 529 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1Grunt2Victory::
# 530 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 531 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 532 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 533 "data/maps/MtChimney/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 534 "data/maps/MtChimney/scripts.pory"
waitmovement 0
# 535 "data/maps/MtChimney/scripts.pory"
msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 536 "data/maps/MtChimney/scripts.pory"
addvar VAR_MTCHIMNEY_STATE, 1
# 537 "data/maps/MtChimney/scripts.pory"
end
# 538 "data/maps/MtChimney/scripts.pory"

# 539 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 540 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 541 "data/maps/MtChimney/scripts.pory"
	end
# 542 "data/maps/MtChimney/scripts.pory"

# 543 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 544 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 545 "data/maps/MtChimney/scripts.pory"
	end
# 546 "data/maps/MtChimney/scripts.pory"

# 547 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 548 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 549 "data/maps/MtChimney/scripts.pory"
	end
# 550 "data/maps/MtChimney/scripts.pory"

# 551 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 552 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 553 "data/maps/MtChimney/scripts.pory"
	end
# 554 "data/maps/MtChimney/scripts.pory"

# 555 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 556 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 557 "data/maps/MtChimney/scripts.pory"
	end
# 558 "data/maps/MtChimney/scripts.pory"

# 559 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 560 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 561 "data/maps/MtChimney/scripts.pory"
	end
# 562 "data/maps/MtChimney/scripts.pory"

# 563 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 564 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 565 "data/maps/MtChimney/scripts.pory"
	end
# 566 "data/maps/MtChimney/scripts.pory"

# 567 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 568 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 569 "data/maps/MtChimney/scripts.pory"
	end
# 570 "data/maps/MtChimney/scripts.pory"

# 571 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 572 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 573 "data/maps/MtChimney/scripts.pory"
	end
# 574 "data/maps/MtChimney/scripts.pory"

# 575 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 576 "data/maps/MtChimney/scripts.pory"
	lockall
# 577 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 578 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 579 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 580 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 581 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 582 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 583 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 584 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 585 "data/maps/MtChimney/scripts.pory"
	releaseall
# 586 "data/maps/MtChimney/scripts.pory"
	end
# 587 "data/maps/MtChimney/scripts.pory"

# 588 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 589 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 590 "data/maps/MtChimney/scripts.pory"
	releaseall
# 591 "data/maps/MtChimney/scripts.pory"
	end
# 592 "data/maps/MtChimney/scripts.pory"

# 593 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 594 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 595 "data/maps/MtChimney/scripts.pory"
	releaseall
# 596 "data/maps/MtChimney/scripts.pory"
	end
# 597 "data/maps/MtChimney/scripts.pory"

# 598 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 599 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 600 "data/maps/MtChimney/scripts.pory"
	releaseall
# 601 "data/maps/MtChimney/scripts.pory"
	end
# 602 "data/maps/MtChimney/scripts.pory"

# 603 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 604 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 605 "data/maps/MtChimney/scripts.pory"
	end
# 606 "data/maps/MtChimney/scripts.pory"

# 607 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 608 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 609 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 610 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 611 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 612 "data/maps/MtChimney/scripts.pory"
	release
# 613 "data/maps/MtChimney/scripts.pory"
	end
# 614 "data/maps/MtChimney/scripts.pory"

# 615 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 616 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 617 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 618 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 619 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 620 "data/maps/MtChimney/scripts.pory"
	release
# 621 "data/maps/MtChimney/scripts.pory"
	end
# 622 "data/maps/MtChimney/scripts.pory"

# 623 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 624 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 625 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 626 "data/maps/MtChimney/scripts.pory"
	end
# 627 "data/maps/MtChimney/scripts.pory"

# 628 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 629 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 630 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 631 "data/maps/MtChimney/scripts.pory"
	end
# 632 "data/maps/MtChimney/scripts.pory"

# 633 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 634 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 635 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 636 "data/maps/MtChimney/scripts.pory"
	end
# 637 "data/maps/MtChimney/scripts.pory"

# 638 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 639 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 640 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 641 "data/maps/MtChimney/scripts.pory"
	end
# 642 "data/maps/MtChimney/scripts.pory"

# 643 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 644 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 645 "data/maps/MtChimney/scripts.pory"
	end
# 646 "data/maps/MtChimney/scripts.pory"

# 647 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 648 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 649 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 650 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 651 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 652 "data/maps/MtChimney/scripts.pory"
	release
# 653 "data/maps/MtChimney/scripts.pory"
	end
# 654 "data/maps/MtChimney/scripts.pory"

# 655 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 656 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 657 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 658 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 659 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 660 "data/maps/MtChimney/scripts.pory"
	release
# 661 "data/maps/MtChimney/scripts.pory"
	end
# 662 "data/maps/MtChimney/scripts.pory"

# 663 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 664 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 665 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 666 "data/maps/MtChimney/scripts.pory"
	end
# 667 "data/maps/MtChimney/scripts.pory"

# 668 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 669 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 670 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 671 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 672 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 673 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 674 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 675 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 676 "data/maps/MtChimney/scripts.pory"

# 677 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 678 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 704 "data/maps/MtChimney/scripts.pory"

# 705 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 706 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 707 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 708 "data/maps/MtChimney/scripts.pory"

# 709 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 710 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 711 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 712 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 713 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 714 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 715 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 716 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 717 "data/maps/MtChimney/scripts.pory"

# 718 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 719 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 720 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 721 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 722 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 723 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 724 "data/maps/MtChimney/scripts.pory"

# 725 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 726 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 727 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 728 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 729 "data/maps/MtChimney/scripts.pory"

# 730 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 731 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 733 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 734 "data/maps/MtChimney/scripts.pory"

# 735 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 736 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 737 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 738 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 739 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 740 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 741 "data/maps/MtChimney/scripts.pory"

# 742 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 743 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 745 "data/maps/MtChimney/scripts.pory"

# 746 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 747 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 748 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 749 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 750 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 751 "data/maps/MtChimney/scripts.pory"

# 752 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 753 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 754 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 755 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 756 "data/maps/MtChimney/scripts.pory"

# 757 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 758 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 759 "data/maps/MtChimney/scripts.pory"

# 760 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 761 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 762 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 763 "data/maps/MtChimney/scripts.pory"

# 764 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 765 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 766 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 767 "data/maps/MtChimney/scripts.pory"

# 768 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 769 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 770 "data/maps/MtChimney/scripts.pory"

# 771 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 772 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 773 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 775 "data/maps/MtChimney/scripts.pory"

# 776 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 777 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 781 "data/maps/MtChimney/scripts.pory"

# 782 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 783 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 784 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 785 "data/maps/MtChimney/scripts.pory"

# 786 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 787 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 788 "data/maps/MtChimney/scripts.pory"

# 789 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 790 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 791 "data/maps/MtChimney/scripts.pory"

# 792 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyGoStopTeamMagma:
# 793 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grr, {PLAYER}!\n"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 796 "data/maps/MtChimney/scripts.pory"
	.string "of Team Magma are up to!\p"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 798 "data/maps/MtChimney/scripts.pory"
	.string "Meteorite's power into the volcano!\p"
# 799 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 800 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 801 "data/maps/MtChimney/scripts.pory"

# 802 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShellyIHaveMyHandsFull:
# 803 "data/maps/MtChimney/scripts.pory"
	.string "Shelly: Grrr…\n"
# 804 "data/maps/MtChimney/scripts.pory"
	.string "The boss went on to stop Maxie!\p"
# 805 "data/maps/MtChimney/scripts.pory"
	.string "Somebody needs to help him!\p"
# 806 "data/maps/MtChimney/scripts.pory"
	.string "I can't when I have my hands full\n"
# 807 "data/maps/MtChimney/scripts.pory"
	.string "battling three opponents at once!$"
# 808 "data/maps/MtChimney/scripts.pory"

# 809 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 810 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 813 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "As thanks, please take the HM for\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "Surf.\p"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 822 "data/maps/MtChimney/scripts.pory"

# 823 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 824 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 826 "data/maps/MtChimney/scripts.pory"

# 827 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 828 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 829 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 830 "data/maps/MtChimney/scripts.pory"

# 831 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 832 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 835 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 836 "data/maps/MtChimney/scripts.pory"

# 837 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 838 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 843 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 844 "data/maps/MtChimney/scripts.pory"

# 845 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 846 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 847 "data/maps/MtChimney/scripts.pory"

# 848 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 849 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 850 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 851 "data/maps/MtChimney/scripts.pory"

# 852 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 853 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 854 "data/maps/MtChimney/scripts.pory"

# 855 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 856 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 857 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 858 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 860 "data/maps/MtChimney/scripts.pory"

# 861 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 862 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 863 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 864 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 865 "data/maps/MtChimney/scripts.pory"

# 866 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 867 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 868 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 869 "data/maps/MtChimney/scripts.pory"

# 870 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 871 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 872 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 873 "data/maps/MtChimney/scripts.pory"

# 874 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 875 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 876 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 877 "data/maps/MtChimney/scripts.pory"

# 878 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 879 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 880 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 881 "data/maps/MtChimney/scripts.pory"

# 882 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 883 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 884 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 885 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 886 "data/maps/MtChimney/scripts.pory"

# 887 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 888 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 889 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 890 "data/maps/MtChimney/scripts.pory"

# 891 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 892 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 893 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 894 "data/maps/MtChimney/scripts.pory"

# 895 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 896 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 897 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 898 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 899 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 900 "data/maps/MtChimney/scripts.pory"

# 901 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 902 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 903 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 904 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 905 "data/maps/MtChimney/scripts.pory"

# 906 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 907 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 908 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 909 "data/maps/MtChimney/scripts.pory"

# 910 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 911 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 912 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 913 "data/maps/MtChimney/scripts.pory"

# 914 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 915 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 916 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 917 "data/maps/MtChimney/scripts.pory"

# 918 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 919 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 920 "data/maps/MtChimney/scripts.pory"

# 921 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 922 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 923 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 924 "data/maps/MtChimney/scripts.pory"

# 925 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 926 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 927 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 928 "data/maps/MtChimney/scripts.pory"

# 929 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 930 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 931 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 932 "data/maps/MtChimney/scripts.pory"

# 933 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 934 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 935 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 936 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 937 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 938 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 939 "data/maps/MtChimney/scripts.pory"

# 940 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 941 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 942 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 943 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 944 "data/maps/MtChimney/scripts.pory"

# 945 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 946 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 947 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 948 "data/maps/MtChimney/scripts.pory"

# 949 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 950 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 951 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 952 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 953 "data/maps/MtChimney/scripts.pory"

# 954 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 955 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 956 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 957 "data/maps/MtChimney/scripts.pory"

# 958 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 959 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 960 "data/maps/MtChimney/scripts.pory"

# 961 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 962 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 963 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 964 "data/maps/MtChimney/scripts.pory"

# 965 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 966 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 967 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 968 "data/maps/MtChimney/scripts.pory"

# 969 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 970 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 971 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 972 "data/maps/MtChimney/scripts.pory"

# 973 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 974 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 975 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 976 "data/maps/MtChimney/scripts.pory"

# 977 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 978 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 979 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
# 980 "data/maps/MtChimney/scripts.pory"

# 981 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieDontDoThis:
# 982 "data/maps/MtChimney/scripts.pory"
	.string "Archie: Maxie! You must not go\n"
# 983 "data/maps/MtChimney/scripts.pory"
	.string "through with this!$"
# 984 "data/maps/MtChimney/scripts.pory"

# 985 "data/maps/MtChimney/scripts.pory"
Mtchimney_Text_MaxieCannotStopMe:
# 986 "data/maps/MtChimney/scripts.pory"
	.string "Maxie: Fufufu… Now, now Archie…\n"
# 987 "data/maps/MtChimney/scripts.pory"
	.string "Is this really the best you can do?$"
# 988 "data/maps/MtChimney/scripts.pory"

# 989 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchiePleaseStopMaxie:
# 990 "data/maps/MtChimney/scripts.pory"
	.string "Archie: {PLAYER}, I warned you\n"
# 991 "data/maps/MtChimney/scripts.pory"
	.string "about Team Magma.\p"
# 992 "data/maps/MtChimney/scripts.pory"
	.string "Please, you must help me stop Maxie!$"

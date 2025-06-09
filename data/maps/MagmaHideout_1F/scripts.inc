# 1 "data/maps/MagmaHideout_1F/scripts.pory"

# 2 "data/maps/MagmaHideout_1F/scripts.pory"
.set LOCALID_GRUNT1, 1
# 3 "data/maps/MagmaHideout_1F/scripts.pory"
.set LOCALID_GRUNT2, 3
# 4 "data/maps/MagmaHideout_1F/scripts.pory"
.set LOCALID_EMMIE, 8
# 5 "data/maps/MagmaHideout_1F/scripts.pory"
.set LOCALID_SHELLY, 7
# 6 "data/maps/MagmaHideout_1F/scripts.pory"

# 7 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_MapScripts::
# 8 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
# 9 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MagmaHideout_1F_OnWarp
# 10 "data/maps/MagmaHideout_1F/scripts.pory"
	.byte 0
# 11 "data/maps/MagmaHideout_1F/scripts.pory"

# 12 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnTransition:
# 13 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 14 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 15 "data/maps/MagmaHideout_1F/scripts.pory"

# 16 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnWarp:
# 17 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 18 "data/maps/MagmaHideout_1F/scripts.pory"

# 19 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_FirstEntrance::
# 20 "data/maps/MagmaHideout_1F/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 10, 34
# 21 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceUp
# 22 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/MagmaHideout_1F/scripts.pory"
	addobject LOCALID_SHELLY
# 24 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_1F_Movement_PlayerEnterHideout
# 25 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_1F_Movement_EmmieEnterHideout
# 26 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement LOCALID_SHELLY, MagmaHideout_1F_Movement_ShellyEnterHideout
# 27 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_ShellyWelcomeToHideout, MSGBOX_DEFAULT
# 29 "data/maps/MagmaHideout_1F/scripts.pory"
	closemessage
# 30 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterUp
# 31 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 32 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_EmmieBeRightHere, MSGBOX_DEFAULT
# 34 "data/maps/MagmaHideout_1F/scripts.pory"
	closemessage
# 35 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 36 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 37 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/MagmaHideout_1F/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 11, 31
# 39 "data/maps/MagmaHideout_1F/scripts.pory"
	addobject LOCALID_EMMIE
# 40 "data/maps/MagmaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 41 "data/maps/MagmaHideout_1F/scripts.pory"
	destroyfollowernpc
# 42 "data/maps/MagmaHideout_1F/scripts.pory"
	setfollowernpc 7, FNPC_WHITE_OUT, Common_EventScript_Shelly, PARTNER_SHELLY
# 43 "data/maps/MagmaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 44 "data/maps/MagmaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_SHELLY
# 45 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 43
# 46 "data/maps/MagmaHideout_1F/scripts.pory"
	addvar VAR_FOLLOWER_MAGMA_HIDEOUT_SHELLY, 1
# 47 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 48 "data/maps/MagmaHideout_1F/scripts.pory"

# 49 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_LaterEntrance::
# 50 "data/maps/MagmaHideout_1F/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 51 "data/maps/MagmaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_4, 31, MagmaHideout_1F_EventScript_LeavingHideout
# 52 "data/maps/MagmaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_4, 33, MagmaHideout_1F_EventScript_EnteringHideout
# 53 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 54 "data/maps/MagmaHideout_1F/scripts.pory"

# 55 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_LeavingHideout::
# 56 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 57 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 58 "data/maps/MagmaHideout_1F/scripts.pory"
 	waitmovement 0
# 59 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_ShellyDontBeLong, MSGBOX_DEFAULT
# 60 "data/maps/MagmaHideout_1F/scripts.pory"
	closemessage 
# 61 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_1F_Movement_ShellyWaiting
# 62 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/MagmaHideout_1F/scripts.pory"
	addobject LOCALID_SHELLY
# 64 "data/maps/MagmaHideout_1F/scripts.pory"
	destroyfollowernpc
# 65 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_1F_Movement_PlayerLeaving
# 66 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement LOCALID_EMMIE, MagmaHideout_1F_Movement_EmmieLeaving
# 67 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/MagmaHideout_1F/scripts.pory"
	setfollowernpc 8, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
# 69 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 42
# 70 "data/maps/MagmaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 71 "data/maps/MagmaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 72 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 73 "data/maps/MagmaHideout_1F/scripts.pory"

# 74 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_EnteringHideout::
# 75 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_1F_Movement_PlayerEnterHideout
# 76 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_1F_Movement_EmmieEnterHideout
# 77 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement LOCALID_SHELLY, MagmaHideout_1F_Movement_ShellyRejoin
# 78 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 80 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 81 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_ShellyThanksForComingBack, MSGBOX_DEFAULT
# 82 "data/maps/MagmaHideout_1F/scripts.pory"
	closemessage
# 83 "data/maps/MagmaHideout_1F/scripts.pory"
	addobject LOCALID_EMMIE
# 84 "data/maps/MagmaHideout_1F/scripts.pory"
	destroyfollowernpc
# 85 "data/maps/MagmaHideout_1F/scripts.pory"
	setfollowernpc 7, FNPC_WHITE_OUT, Common_EventScript_Shelly, PARTNER_SHELLY
# 86 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 43
# 87 "data/maps/MagmaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 88 "data/maps/MagmaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 89 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 90 "data/maps/MagmaHideout_1F/scripts.pory"

# 91 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_ShellyJoinPlayer:
# 92 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_left
# 93 "data/maps/MagmaHideout_1F/scripts.pory"
	face_up
# 94 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 95 "data/maps/MagmaHideout_1F/scripts.pory"
	
# 96 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_ShellyThanksForComingBack:
# 97 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Shelly: Thanks for coming back. Let's\n"
# 98 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "press on.$"
# 99 "data/maps/MagmaHideout_1F/scripts.pory"

# 100 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_ShellyRejoin:
# 101 "data/maps/MagmaHideout_1F/scripts.pory"
	delay_16
# 102 "data/maps/MagmaHideout_1F/scripts.pory"
	delay_16
# 103 "data/maps/MagmaHideout_1F/scripts.pory"
	delay_16
# 104 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_left
# 105 "data/maps/MagmaHideout_1F/scripts.pory"
	face_up
# 106 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 107 "data/maps/MagmaHideout_1F/scripts.pory"

# 108 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_PlayerLeaving:
# 109 "data/maps/MagmaHideout_1F/scripts.pory"
	delay_16
# 110 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_down
# 111 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 112 "data/maps/MagmaHideout_1F/scripts.pory"

# 113 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_EmmieLeaving:
# 114 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_right
# 115 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_down
# 116 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 117 "data/maps/MagmaHideout_1F/scripts.pory"

# 118 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_ShellyWaiting:
# 119 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_right
# 120 "data/maps/MagmaHideout_1F/scripts.pory"
	face_left
# 121 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end 
# 122 "data/maps/MagmaHideout_1F/scripts.pory"

# 123 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_ShellyDontBeLong:
# 124 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Shelly: You need to leave?\p"
# 125 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Okay, just don't be long, we may not\n"
# 126 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "have much time.$"
# 127 "data/maps/MagmaHideout_1F/scripts.pory"

# 128 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Emmie::
# 129 "data/maps/MagmaHideout_1F/scripts.pory"
	faceplayer
# 130 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_EmmieBeRightHere, MSGBOX_DEFAULT
# 131 "data/maps/MagmaHideout_1F/scripts.pory"
	closemessage
# 132 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_FaceOriginalDirection
# 133 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 134 "data/maps/MagmaHideout_1F/scripts.pory"

# 135 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_EmmieBeRightHere:
# 136 "data/maps/MagmaHideout_1F/scripts.pory"
.string "Emmie: {PLAYER}, I'll be waiting here for\n"
# 137 "data/maps/MagmaHideout_1F/scripts.pory"
.string "you, and we can leave any time you want.$"
# 138 "data/maps/MagmaHideout_1F/scripts.pory"

# 139 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_ShellyWelcomeToHideout:
# 140 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Shelly: Welcome to the Magma Hideout.\p"
# 141 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I don't know what we may face up ahead,\n"
# 142 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "but if we stick together we will be okay.$"
# 143 "data/maps/MagmaHideout_1F/scripts.pory"

# 144 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_PlayerEnterHideout:
# 145 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 146 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 147 "data/maps/MagmaHideout_1F/scripts.pory"
	face_down
# 148 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 149 "data/maps/MagmaHideout_1F/scripts.pory"

# 150 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_EmmieEnterHideout:
# 151 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 152 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 153 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_left
# 154 "data/maps/MagmaHideout_1F/scripts.pory"
	face_right
# 155 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 156 "data/maps/MagmaHideout_1F/scripts.pory"

# 157 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_ShellyEnterHideout:
# 158 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 159 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 160 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 161 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 162 "data/maps/MagmaHideout_1F/scripts.pory"

# 163 "data/maps/MagmaHideout_1F/scripts.pory"

# 164 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2::
# 165 "data/maps/MagmaHideout_1F/scripts.pory"
lockall
# 166 "data/maps/MagmaHideout_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT1
# 167 "data/maps/MagmaHideout_1F/scripts.pory"
playse SE_PIN
# 168 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 169 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 170 "data/maps/MagmaHideout_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 171 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 172 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 173 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 174 "data/maps/MagmaHideout_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT2
# 175 "data/maps/MagmaHideout_1F/scripts.pory"
playse SE_PIN
# 176 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 177 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 178 "data/maps/MagmaHideout_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 179 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 180 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 181 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt2Intro, MSGBOX_AUTOCLOSE
# 182 "data/maps/MagmaHideout_1F/scripts.pory"
goto MagmaHideout_1F_EventScript_Grunt1Grunt2_ChoosePartyForMultiBattle
# 183 "data/maps/MagmaHideout_1F/scripts.pory"
releaseall
# 184 "data/maps/MagmaHideout_1F/scripts.pory"
end
# 185 "data/maps/MagmaHideout_1F/scripts.pory"

# 186 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2_ChoosePartyForMultiBattle::
# 187 "data/maps/MagmaHideout_1F/scripts.pory"
special SavePlayerParty
# 188 "data/maps/MagmaHideout_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 189 "data/maps/MagmaHideout_1F/scripts.pory"
special ChooseHalfPartyForBattle
# 190 "data/maps/MagmaHideout_1F/scripts.pory"
waitstate
# 191 "data/maps/MagmaHideout_1F/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_1F_EventScript_Grunt1Grunt2DoMultiBattle
# 192 "data/maps/MagmaHideout_1F/scripts.pory"
goto MagmaHideout_1F_EventScript_Grunt1Grunt2_ChoosePartyForMultiBattle
# 193 "data/maps/MagmaHideout_1F/scripts.pory"
closemessage
# 194 "data/maps/MagmaHideout_1F/scripts.pory"
releaseall
# 195 "data/maps/MagmaHideout_1F/scripts.pory"
end
# 196 "data/maps/MagmaHideout_1F/scripts.pory"

# 197 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2DoMultiBattle::
# 198 "data/maps/MagmaHideout_1F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 199 "data/maps/MagmaHideout_1F/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Defeat, PARTNER_SHELLY
# 200 "data/maps/MagmaHideout_1F/scripts.pory"
special LoadPlayerParty
# 201 "data/maps/MagmaHideout_1F/scripts.pory"
switch VAR_RESULT
# 202 "data/maps/MagmaHideout_1F/scripts.pory"
case 1, MagmaHideout_1F_EventScript_Grunt1Grunt2Victory
# 203 "data/maps/MagmaHideout_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 204 "data/maps/MagmaHideout_1F/scripts.pory"
special SetCB2WhiteOut
# 205 "data/maps/MagmaHideout_1F/scripts.pory"
waitstate
# 206 "data/maps/MagmaHideout_1F/scripts.pory"

# 207 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2Victory::
# 208 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 209 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 210 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 211 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 212 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 213 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/MagmaHideout_1F/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 215 "data/maps/MagmaHideout_1F/scripts.pory"
end
# 216 "data/maps/MagmaHideout_1F/scripts.pory"

# 217 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1::
# 218 "data/maps/MagmaHideout_1F/scripts.pory"
	faceplayer
# 219 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 221 "data/maps/MagmaHideout_1F/scripts.pory"

# 222 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt2::
# 223 "data/maps/MagmaHideout_1F/scripts.pory"
	faceplayer
# 224 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 226 "data/maps/MagmaHideout_1F/scripts.pory"

# 227 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Intro:
# 228 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "When TEAM MAGMA has roll call, we get\n"
# 229 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "important guarding assignments in\l"
# 230 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "the order that we line up.\p"
# 231 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "That's why I'm stuck off in this corner.\n"
# 232 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late to roll call!$"
# 233 "data/maps/MagmaHideout_1F/scripts.pory"

# 234 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Defeat:
# 235 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late for training sessions,\n"
# 236 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "too!\p"
# 237 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I hate to say it, but I'm wimpy…$"
# 238 "data/maps/MagmaHideout_1F/scripts.pory"

# 239 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1PostBattle:
# 240 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Okay, I'll try to put a little more\n"
# 241 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "effort into things from now on…$"
# 242 "data/maps/MagmaHideout_1F/scripts.pory"

# 243 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Intro:
# 244 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Our leader told us to dig into\n"
# 245 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "MT. CHIMNEY, so we dug and dug.\p"
# 246 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "And in the course of digging, we came\n"
# 247 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "across something that blew our minds!\p"
# 248 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "What did we find?\p"
# 249 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Fuhahaha!\n"
# 250 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'll tell you if you beat me!$"
# 251 "data/maps/MagmaHideout_1F/scripts.pory"

# 252 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Defeat:
# 253 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Arrgh!\n"
# 254 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Taken down!$"
# 255 "data/maps/MagmaHideout_1F/scripts.pory"

# 256 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2PostBattle:
# 257 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I won't tell you after all.\n"
# 258 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "You'll find out when you get there!\p"
# 259 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "It'd be better if you saved surprises\n"
# 260 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "to the end, don't you think?$"

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
	addvar VAR_FOLLOWER_MAGMA_HIDEOUT_SHELLY, 1
# 46 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 47 "data/maps/MagmaHideout_1F/scripts.pory"

# 48 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_LaterEntrance::
# 49 "data/maps/MagmaHideout_1F/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 50 "data/maps/MagmaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_4, 31, MagmaHideout_1F_EventScript_LeavingHideout
# 51 "data/maps/MagmaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_4, 33, MagmaHideout_1F_EventScript_EnteringHideout
# 52 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 53 "data/maps/MagmaHideout_1F/scripts.pory"

# 54 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_LeavingHideout::
# 55 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 56 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 57 "data/maps/MagmaHideout_1F/scripts.pory"
 	waitmovement 0
# 58 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_ShellyDontBeLong, MSGBOX_DEFAULT
# 59 "data/maps/MagmaHideout_1F/scripts.pory"
	closemessage 
# 60 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_1F_Movement_ShellyWaiting
# 61 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/MagmaHideout_1F/scripts.pory"
	addobject LOCALID_SHELLY
# 63 "data/maps/MagmaHideout_1F/scripts.pory"
	destroyfollowernpc
# 64 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_1F_Movement_PlayerLeaving
# 65 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement LOCALID_EMMIE, MagmaHideout_1F_Movement_EmmieLeaving
# 66 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 67 "data/maps/MagmaHideout_1F/scripts.pory"
	setfollowernpc 8, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
# 68 "data/maps/MagmaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 69 "data/maps/MagmaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 70 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 71 "data/maps/MagmaHideout_1F/scripts.pory"

# 72 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_EnteringHideout::
# 73 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_1F_Movement_PlayerEnterHideout
# 74 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, MagmaHideout_1F_Movement_EmmieEnterHideout
# 75 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement LOCALID_SHELLY, MagmaHideout_1F_Movement_ShellyRejoin
# 76 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
# 78 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_ShellyThanksForComingBack, MSGBOX_DEFAULT
# 80 "data/maps/MagmaHideout_1F/scripts.pory"
	closemessage
# 81 "data/maps/MagmaHideout_1F/scripts.pory"
	addobject LOCALID_EMMIE
# 82 "data/maps/MagmaHideout_1F/scripts.pory"
	destroyfollowernpc
# 83 "data/maps/MagmaHideout_1F/scripts.pory"
	setfollowernpc 7, FNPC_WHITE_OUT, Common_EventScript_Shelly, PARTNER_SHELLY
# 84 "data/maps/MagmaHideout_1F/scripts.pory"
	clearflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
# 85 "data/maps/MagmaHideout_1F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
# 86 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 87 "data/maps/MagmaHideout_1F/scripts.pory"

# 88 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_ShellyJoinPlayer:
# 89 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_left
# 90 "data/maps/MagmaHideout_1F/scripts.pory"
	face_up
# 91 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 92 "data/maps/MagmaHideout_1F/scripts.pory"
	
# 93 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_ShellyThanksForComingBack:
# 94 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Shelly: Thanks for coming back. Let's\n"
# 95 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "press on.$"
# 96 "data/maps/MagmaHideout_1F/scripts.pory"

# 97 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_ShellyRejoin:
# 98 "data/maps/MagmaHideout_1F/scripts.pory"
	delay_16
# 99 "data/maps/MagmaHideout_1F/scripts.pory"
	delay_16
# 100 "data/maps/MagmaHideout_1F/scripts.pory"
	delay_16
# 101 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_left
# 102 "data/maps/MagmaHideout_1F/scripts.pory"
	face_up
# 103 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 104 "data/maps/MagmaHideout_1F/scripts.pory"

# 105 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_PlayerLeaving:
# 106 "data/maps/MagmaHideout_1F/scripts.pory"
	delay_16
# 107 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_down
# 108 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 109 "data/maps/MagmaHideout_1F/scripts.pory"

# 110 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_EmmieLeaving:
# 111 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_right
# 112 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_down
# 113 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 114 "data/maps/MagmaHideout_1F/scripts.pory"

# 115 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_ShellyWaiting:
# 116 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_right
# 117 "data/maps/MagmaHideout_1F/scripts.pory"
	face_left
# 118 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end 
# 119 "data/maps/MagmaHideout_1F/scripts.pory"

# 120 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_ShellyDontBeLong:
# 121 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Shelly: You need to leave?\p"
# 122 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Okay, just don't be long, we may not\n"
# 123 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "have much time.$"
# 124 "data/maps/MagmaHideout_1F/scripts.pory"

# 125 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Emmie::
# 126 "data/maps/MagmaHideout_1F/scripts.pory"
	faceplayer
# 127 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_EmmieBeRightHere, MSGBOX_DEFAULT
# 128 "data/maps/MagmaHideout_1F/scripts.pory"
	closemessage
# 129 "data/maps/MagmaHideout_1F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_FaceOriginalDirection
# 130 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 131 "data/maps/MagmaHideout_1F/scripts.pory"

# 132 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_EmmieBeRightHere:
# 133 "data/maps/MagmaHideout_1F/scripts.pory"
.string "Emmie: {PLAYER}, I'll be waiting here for\n"
# 134 "data/maps/MagmaHideout_1F/scripts.pory"
.string "you, and we can leave any time you want.$"
# 135 "data/maps/MagmaHideout_1F/scripts.pory"

# 136 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_ShellyWelcomeToHideout:
# 137 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Shelly: Welcome to the Magma Hideout.\p"
# 138 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I don't know what we may face up ahead,\n"
# 139 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "but if we stick together we will be okay.$"
# 140 "data/maps/MagmaHideout_1F/scripts.pory"

# 141 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_PlayerEnterHideout:
# 142 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 143 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 144 "data/maps/MagmaHideout_1F/scripts.pory"
	face_down
# 145 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 146 "data/maps/MagmaHideout_1F/scripts.pory"

# 147 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_EmmieEnterHideout:
# 148 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 149 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 150 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_left
# 151 "data/maps/MagmaHideout_1F/scripts.pory"
	face_right
# 152 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 153 "data/maps/MagmaHideout_1F/scripts.pory"

# 154 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Movement_ShellyEnterHideout:
# 155 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 156 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 157 "data/maps/MagmaHideout_1F/scripts.pory"
	walk_up
# 158 "data/maps/MagmaHideout_1F/scripts.pory"
	step_end
# 159 "data/maps/MagmaHideout_1F/scripts.pory"

# 160 "data/maps/MagmaHideout_1F/scripts.pory"

# 161 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2::
# 162 "data/maps/MagmaHideout_1F/scripts.pory"
lockall
# 163 "data/maps/MagmaHideout_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT1
# 164 "data/maps/MagmaHideout_1F/scripts.pory"
playse SE_PIN
# 165 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 166 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 167 "data/maps/MagmaHideout_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 168 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 169 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 170 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 171 "data/maps/MagmaHideout_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT2
# 172 "data/maps/MagmaHideout_1F/scripts.pory"
playse SE_PIN
# 173 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 174 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 175 "data/maps/MagmaHideout_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 176 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 177 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 178 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt2Intro, MSGBOX_AUTOCLOSE
# 179 "data/maps/MagmaHideout_1F/scripts.pory"
goto MagmaHideout_1F_EventScript_Grunt1Grunt2_ChoosePartyForMultiBattle
# 180 "data/maps/MagmaHideout_1F/scripts.pory"
releaseall
# 181 "data/maps/MagmaHideout_1F/scripts.pory"
end
# 182 "data/maps/MagmaHideout_1F/scripts.pory"

# 183 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2_ChoosePartyForMultiBattle::
# 184 "data/maps/MagmaHideout_1F/scripts.pory"
special SavePlayerParty
# 185 "data/maps/MagmaHideout_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 186 "data/maps/MagmaHideout_1F/scripts.pory"
special ChooseHalfPartyForBattle
# 187 "data/maps/MagmaHideout_1F/scripts.pory"
waitstate
# 188 "data/maps/MagmaHideout_1F/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_1F_EventScript_Grunt1Grunt2DoMultiBattle
# 189 "data/maps/MagmaHideout_1F/scripts.pory"
goto MagmaHideout_1F_EventScript_Grunt1Grunt2_ChoosePartyForMultiBattle
# 190 "data/maps/MagmaHideout_1F/scripts.pory"
closemessage
# 191 "data/maps/MagmaHideout_1F/scripts.pory"
releaseall
# 192 "data/maps/MagmaHideout_1F/scripts.pory"
end
# 193 "data/maps/MagmaHideout_1F/scripts.pory"

# 194 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2DoMultiBattle::
# 195 "data/maps/MagmaHideout_1F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 196 "data/maps/MagmaHideout_1F/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Defeat, PARTNER_SHELLY
# 197 "data/maps/MagmaHideout_1F/scripts.pory"
special LoadPlayerParty
# 198 "data/maps/MagmaHideout_1F/scripts.pory"
switch VAR_RESULT
# 199 "data/maps/MagmaHideout_1F/scripts.pory"
case 1, MagmaHideout_1F_EventScript_Grunt1Grunt2Victory
# 200 "data/maps/MagmaHideout_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 201 "data/maps/MagmaHideout_1F/scripts.pory"
special SetCB2WhiteOut
# 202 "data/maps/MagmaHideout_1F/scripts.pory"
waitstate
# 203 "data/maps/MagmaHideout_1F/scripts.pory"

# 204 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2Victory::
# 205 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 206 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 207 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 209 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 210 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 211 "data/maps/MagmaHideout_1F/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 212 "data/maps/MagmaHideout_1F/scripts.pory"
end
# 213 "data/maps/MagmaHideout_1F/scripts.pory"

# 214 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1::
# 215 "data/maps/MagmaHideout_1F/scripts.pory"
	faceplayer
# 216 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 218 "data/maps/MagmaHideout_1F/scripts.pory"

# 219 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt2::
# 220 "data/maps/MagmaHideout_1F/scripts.pory"
	faceplayer
# 221 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 223 "data/maps/MagmaHideout_1F/scripts.pory"

# 224 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Intro:
# 225 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "When TEAM MAGMA has roll call, we get\n"
# 226 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "important guarding assignments in\l"
# 227 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "the order that we line up.\p"
# 228 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "That's why I'm stuck off in this corner.\n"
# 229 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late to roll call!$"
# 230 "data/maps/MagmaHideout_1F/scripts.pory"

# 231 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Defeat:
# 232 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late for training sessions,\n"
# 233 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "too!\p"
# 234 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I hate to say it, but I'm wimpy…$"
# 235 "data/maps/MagmaHideout_1F/scripts.pory"

# 236 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1PostBattle:
# 237 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Okay, I'll try to put a little more\n"
# 238 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "effort into things from now on…$"
# 239 "data/maps/MagmaHideout_1F/scripts.pory"

# 240 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Intro:
# 241 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Our leader told us to dig into\n"
# 242 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "MT. CHIMNEY, so we dug and dug.\p"
# 243 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "And in the course of digging, we came\n"
# 244 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "across something that blew our minds!\p"
# 245 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "What did we find?\p"
# 246 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Fuhahaha!\n"
# 247 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'll tell you if you beat me!$"
# 248 "data/maps/MagmaHideout_1F/scripts.pory"

# 249 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Defeat:
# 250 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Arrgh!\n"
# 251 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Taken down!$"
# 252 "data/maps/MagmaHideout_1F/scripts.pory"

# 253 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2PostBattle:
# 254 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I won't tell you after all.\n"
# 255 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "You'll find out when you get there!\p"
# 256 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "It'd be better if you saved surprises\n"
# 257 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "to the end, don't you think?$"

# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_MATT, 1
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_SUBMARINE, 4
# 4 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_GRUNT1, 7
# 5 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_GRUNT4, 2
# 6 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_GRUNT8, 6
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_GRUNT6, 5
# 8 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_SHELLY, 8
# 9 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_EMMIE, 9
# 10 "data/maps/AquaHideout_B2F/scripts.pory"

# 11 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 12 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 13 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 14 "data/maps/AquaHideout_B2F/scripts.pory"

# 15 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 16 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
# 17 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 18 "data/maps/AquaHideout_B2F/scripts.pory"

# 19 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 22 "data/maps/AquaHideout_B2F/scripts.pory"

# 23 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattNoticePlayer::
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 25 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
# 26 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 34 "data/maps/AquaHideout_B2F/scripts.pory"

# 35 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Matt::
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_eq VAR_AQUAHIDEOUT_STATE, 5, AquaHideout_B2F_EventScript_MattPostBattle
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_eq VAR_TEMP_3, 25, AquaHideout_B2F_EventScript_TabithaApproachMatt
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterRight
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattIntro, MSGBOX_DEFAULT
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_WARP_OUT
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	addobject LOCALID_SHELLY
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_ShellyBlowsInTheWind, MSGBOX_DEFAULT
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_eq VAR_TEMP_4, 18, AquaHideout_B2F_EventScript_TabithaApproachShelly1
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_eq VAR_TEMP_4, 20, AquaHideout_B2F_EventScript_TabithaApproachShelly2
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_SHELLY, AquaHideout_4F_Movement_ShellyApproachTabitha
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_TabithaWellWellWell, MSGBOX_DEFAULT
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 69 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterRight
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattNotStalling, MSGBOX_DEFAULT
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 75 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterLeft
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_ShellyWarnedYou, MSGBOX_DEFAULT
# 79 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 80 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_TabithaWhatYoureMadeOf, MSGBOX_DEFAULT
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 84 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_EventScript_MattShelly_ChoosePartyForMultiBattle
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 89 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 90 "data/maps/AquaHideout_B2F/scripts.pory"

# 91 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattShelly_ChoosePartyForMultiBattle::
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
	special SavePlayerParty
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
	waitstate
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, AquaHideout_B2F_EventScript_MattShellyDoMultiBattle
# 97 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_EventScript_MattShelly_ChoosePartyForMultiBattle
# 98 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 99 "data/maps/AquaHideout_B2F/scripts.pory"

# 100 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattShellyDoMultiBattle::
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	multi_2_vs_2 TRAINER_SHELLY_WEATHER_INSTITUTE, AquaHideout_B2F_Text_ShellyDefeat, TRAINER_MATT, AquaHideout_B2F_Text_MattDefeat, PARTNER_TABITHA
# 102 "data/maps/AquaHideout_B2F/scripts.pory"
	special LoadPlayerParty
# 103 "data/maps/AquaHideout_B2F/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/AquaHideout_B2F/scripts.pory"
	case 1, AquaHideout_B2F_EventScript_MattShellyVictory
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
	special SetCB2WhiteOut
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	waitstate
# 108 "data/maps/AquaHideout_B2F/scripts.pory"

# 109 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattShellyVictory::
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 112 "data/maps/AquaHideout_B2F/scripts.pory"
	addvar VAR_AQUAHIDEOUT_STATE, 1
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_EventScript_SubmarineEscape
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 115 "data/maps/AquaHideout_B2F/scripts.pory"

# 116 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattPostBattle::
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 120 "data/maps/AquaHideout_B2F/scripts.pory"

# 121 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_TabithaWhatYoureMadeOf:
# 122 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tabitha: Heh… looks like we're doing\n"
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "this.\p"
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Don't let me down kid. Let's see what\n"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "you're really made of!$"
# 126 "data/maps/AquaHideout_B2F/scripts.pory"

# 127 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ShellyWarnedYou:
# 128 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Shelly: I warned that you Team Aqua\n"
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "has no choice but to retaliate.\p"
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I also warned you to not follow us here.$"
# 131 "data/maps/AquaHideout_B2F/scripts.pory"

# 132 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattNotStalling:
# 133 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Matt: You've stuck your noses in for\n"
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the last time.\p"
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We're going to give you a beating you\n"
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "will never forget!$"
# 137 "data/maps/AquaHideout_B2F/scripts.pory"

# 138 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_TabithaWellWellWell:
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tabitha: Well, well, well. Looks\n"
# 140 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "like the whole gang is here.$"
# 141 "data/maps/AquaHideout_B2F/scripts.pory"

# 142 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_TabithaApproachShelly1:
# 143 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaApproachShelly1
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 145 "data/maps/AquaHideout_B2F/scripts.pory"

# 146 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_TabithaApproachShelly2:
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaApproachShelly2
# 148 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 149 "data/maps/AquaHideout_B2F/scripts.pory"

# 150 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_4F_Movement_ShellyApproachTabitha:
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 152 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 153 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 154 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 155 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 156 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 157 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 158 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 159 "data/maps/AquaHideout_B2F/scripts.pory"

# 160 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_TabithaApproachShelly1:
# 161 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 162 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_slow_right
# 163 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_slow_down
# 164 "data/maps/AquaHideout_B2F/scripts.pory"
	face_right
# 165 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 166 "data/maps/AquaHideout_B2F/scripts.pory"

# 167 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_TabithaApproachShelly2:
# 168 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 169 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_slow_right
# 170 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_slow_up
# 171 "data/maps/AquaHideout_B2F/scripts.pory"
	face_right
# 172 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 173 "data/maps/AquaHideout_B2F/scripts.pory"

# 174 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ShellyBlowsInTheWind:
# 175 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Shelly: He's right. Your loyalty really\n"
# 176 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "does blow in the wind doesn't it?$"
# 177 "data/maps/AquaHideout_B2F/scripts.pory"

# 178 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_TabithaApproachMatt::
# 179 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaApproachMatt
# 180 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 181 "data/maps/AquaHideout_B2F/scripts.pory"

# 182 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_TabithaApproachMatt:
# 183 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_up
# 184 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 185 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 186 "data/maps/AquaHideout_B2F/scripts.pory"

# 187 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 188 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
# 189 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_SUBMARINE
# 190 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 191 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 192 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 193 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterRight
# 194 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 195 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 196 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 197 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 198 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 199 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 200 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 201 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 202 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 203 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 204 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 205 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 206 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 207 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 208 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 209 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_TabithaTimeForMeToLeave, MSGBOX_DEFAULT
# 210 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 211 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 212 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_SHELLY, AquaHideout_B2F_Movement_ShellyKnockedBack
# 213 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaLeave
# 214 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 215 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_WARP_OUT
# 216 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 16
# 217 "data/maps/AquaHideout_B2F/scripts.pory"
	destroyfollowernpc
# 218 "data/maps/AquaHideout_B2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 219 "data/maps/AquaHideout_B2F/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 26, 17
# 220 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_FOLLOWER_AQUA_HIDEOUT_TABITHA, 2
# 221 "data/maps/AquaHideout_B2F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B2F_EMMIE
# 222 "data/maps/AquaHideout_B2F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_SHELLY
# 223 "data/maps/AquaHideout_B2F/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 224 "data/maps/AquaHideout_B2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 225 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 40
# 226 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_WARP_OUT
# 227 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 228 "data/maps/AquaHideout_B2F/scripts.pory"
	addobject LOCALID_EMMIE
# 229 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_EMMIE, AquaHideout_B2F_Movement_EmmieEnters
# 230 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 231 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_EmmieHeardFromTabitha, MSGBOX_DEFAULT
# 232 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 233 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterUp
# 234 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 235 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_EmmieSeenBetterDays, MSGBOX_DEFAULT
# 236 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 237 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterLeft
# 238 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 239 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_EmmieLetsGo, MSGBOX_DEFAULT
# 240 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 241 "data/maps/AquaHideout_B2F/scripts.pory"
	setfollowernpc 9, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
# 242 "data/maps/AquaHideout_B2F/scripts.pory"
	setobjectmovementtype LOCALID_SHELLY, MOVEMENT_TYPE_FACE_DOWN
# 243 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 244 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 245 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 246 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 247 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 248 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 249 "data/maps/AquaHideout_B2F/scripts.pory"

# 250 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Shelly::
# 251 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 252 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 253 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_ShellyCantDoNothing, MSGBOX_DEFAULT
# 254 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage 
# 255 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 256 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 257 "data/maps/AquaHideout_B2F/scripts.pory"

# 258 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ShellyCantDoNothing:
# 259 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Shelly: Sorry kid. Team Aqua can't stand\n"
# 260 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "by and do nothing.$"
# 261 "data/maps/AquaHideout_B2F/scripts.pory"

# 262 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_EmmieLetsGo:
# 263 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Emmie: Anyway, let's get out of here.$"
# 264 "data/maps/AquaHideout_B2F/scripts.pory"

# 265 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_EmmieSeenBetterDays:
# 266 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Emmie: She certainly looks like she's\n"
# 267 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "seen better days.$"
# 268 "data/maps/AquaHideout_B2F/scripts.pory"

# 269 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_EmmieHeardFromTabitha:
# 270 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Emmie: Hey {PLAYER}, Tabitha explained\n"
# 271 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "what's happened on his way out.\p"
# 272 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Seems as if Team Aqua are on their way\n"
# 273 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "to the ocean floor then…\p"
# 274 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tabitha said you held your own well\n"
# 275 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "enough, not that I should be surprised\l"
# 276 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "at this point!$"
# 277 "data/maps/AquaHideout_B2F/scripts.pory"

# 278 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_EmmieEnters:
# 279 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 280 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 281 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 282 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 283 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 284 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 285 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 286 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 287 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 288 "data/maps/AquaHideout_B2F/scripts.pory"

# 289 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_TabithaLeave:
# 290 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 291 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 292 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_up
# 293 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_up
# 294 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 295 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 296 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 297 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 298 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 299 "data/maps/AquaHideout_B2F/scripts.pory"

# 300 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_ShellyKnockedBack:
# 301 "data/maps/AquaHideout_B2F/scripts.pory"
	face_down
# 302 "data/maps/AquaHideout_B2F/scripts.pory"
	lock_facing_direction
# 303 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_fast_up
# 304 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_fast_up
# 305 "data/maps/AquaHideout_B2F/scripts.pory"
	unlock_facing_direction
# 306 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 307 "data/maps/AquaHideout_B2F/scripts.pory"

# 308 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_TabithaTimeForMeToLeave:
# 309 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tabitha: Well that's confirmed what\n"
# 310 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "we feared.\p"
# 311 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Thanks for the assist kid, but it's\n"
# 312 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "time for me to leave for Mossdeep.\p"
# 313 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "See you again no doubt. Hehe…$"
# 314 "data/maps/AquaHideout_B2F/scripts.pory"

# 315 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 316 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 317 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 318 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 319 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 320 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 321 "data/maps/AquaHideout_B2F/scripts.pory"

# 322 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 323 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 324 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 325 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 326 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 327 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 328 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 329 "data/maps/AquaHideout_B2F/scripts.pory"

# 330 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1::
# 331 "data/maps/AquaHideout_B2F/scripts.pory"
lockall
# 332 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT4
# 333 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 334 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 335 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 336 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 337 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 338 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 339 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt4Intro MSGBOX_AUTOCLOSE
# 340 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT1
# 341 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 342 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 343 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 344 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 345 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 346 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 347 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_1F_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 348 "data/maps/AquaHideout_B2F/scripts.pory"
goto AquaHideout_B2F_EventScript_Grunt4Grunt1_ChoosePartyForMultiBattle
# 349 "data/maps/AquaHideout_B2F/scripts.pory"
releaseall
# 350 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 351 "data/maps/AquaHideout_B2F/scripts.pory"

# 352 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1_ChoosePartyForMultiBattle::
# 353 "data/maps/AquaHideout_B2F/scripts.pory"
special SavePlayerParty
# 354 "data/maps/AquaHideout_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 355 "data/maps/AquaHideout_B2F/scripts.pory"
special ChooseHalfPartyForBattle
# 356 "data/maps/AquaHideout_B2F/scripts.pory"
waitstate
# 357 "data/maps/AquaHideout_B2F/scripts.pory"
goto_if_ne VAR_RESULT, 0, AquaHideout_B2F_EventScript_Grunt4Grunt1DoMultiBattle
# 358 "data/maps/AquaHideout_B2F/scripts.pory"
goto AquaHideout_B2F_EventScript_Grunt4Grunt1_ChoosePartyForMultiBattle
# 359 "data/maps/AquaHideout_B2F/scripts.pory"
closemessage
# 360 "data/maps/AquaHideout_B2F/scripts.pory"
releaseall
# 361 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 362 "data/maps/AquaHideout_B2F/scripts.pory"

# 363 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1DoMultiBattle::
# 364 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 365 "data/maps/AquaHideout_B2F/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Defeat, TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Defeat, PARTNER_TABITHA
# 366 "data/maps/AquaHideout_B2F/scripts.pory"
special LoadPlayerParty
# 367 "data/maps/AquaHideout_B2F/scripts.pory"
switch VAR_RESULT
# 368 "data/maps/AquaHideout_B2F/scripts.pory"
case 1, AquaHideout_B2F_EventScript_Grunt4Grunt1Victory
# 369 "data/maps/AquaHideout_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 370 "data/maps/AquaHideout_B2F/scripts.pory"
special SetCB2WhiteOut
# 371 "data/maps/AquaHideout_B2F/scripts.pory"
waitstate
# 372 "data/maps/AquaHideout_B2F/scripts.pory"

# 373 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1Victory::
# 374 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 375 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 376 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 377 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 378 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 379 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 380 "data/maps/AquaHideout_B2F/scripts.pory"
addvar VAR_AQUAHIDEOUT_STATE, 1
# 381 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 382 "data/maps/AquaHideout_B2F/scripts.pory"

# 383 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 384 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 385 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 386 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 387 "data/maps/AquaHideout_B2F/scripts.pory"

# 388 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 389 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 390 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 391 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 392 "data/maps/AquaHideout_B2F/scripts.pory"

# 393 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8::
# 394 "data/maps/AquaHideout_B2F/scripts.pory"
lockall
# 395 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT6
# 396 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 397 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 398 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 399 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 400 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 401 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 402 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt6Intro MSGBOX_AUTOCLOSE
# 403 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT8
# 404 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 405 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 406 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 407 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 408 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 409 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 410 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt8Intro MSGBOX_AUTOCLOSE
# 411 "data/maps/AquaHideout_B2F/scripts.pory"
goto AquaHideout_B2F_EventScript_Grunt6Grunt8_ChoosePartyForMultiBattle
# 412 "data/maps/AquaHideout_B2F/scripts.pory"
releaseall
# 413 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 414 "data/maps/AquaHideout_B2F/scripts.pory"

# 415 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8_ChoosePartyForMultiBattle::
# 416 "data/maps/AquaHideout_B2F/scripts.pory"
special SavePlayerParty
# 417 "data/maps/AquaHideout_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 418 "data/maps/AquaHideout_B2F/scripts.pory"
special ChooseHalfPartyForBattle
# 419 "data/maps/AquaHideout_B2F/scripts.pory"
waitstate
# 420 "data/maps/AquaHideout_B2F/scripts.pory"
goto_if_ne VAR_RESULT, 0, AquaHideout_B2F_EventScript_Grunt6Grunt8DoMultiBattle
# 421 "data/maps/AquaHideout_B2F/scripts.pory"
goto AquaHideout_B2F_EventScript_Grunt6Grunt8_ChoosePartyForMultiBattle
# 422 "data/maps/AquaHideout_B2F/scripts.pory"
closemessage
# 423 "data/maps/AquaHideout_B2F/scripts.pory"
releaseall
# 424 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 425 "data/maps/AquaHideout_B2F/scripts.pory"

# 426 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8DoMultiBattle::
# 427 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 428 "data/maps/AquaHideout_B2F/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Defeat, TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Defeat, PARTNER_TABITHA
# 429 "data/maps/AquaHideout_B2F/scripts.pory"
special LoadPlayerParty
# 430 "data/maps/AquaHideout_B2F/scripts.pory"
switch VAR_RESULT
# 431 "data/maps/AquaHideout_B2F/scripts.pory"
case 1, AquaHideout_B2F_EventScript_Grunt6Grunt8Victory
# 432 "data/maps/AquaHideout_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 433 "data/maps/AquaHideout_B2F/scripts.pory"
special SetCB2WhiteOut
# 434 "data/maps/AquaHideout_B2F/scripts.pory"
waitstate
# 435 "data/maps/AquaHideout_B2F/scripts.pory"

# 436 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8Victory::
# 437 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 438 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 439 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 440 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 441 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 442 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 443 "data/maps/AquaHideout_B2F/scripts.pory"
addvar VAR_AQUAHIDEOUT_STATE, 1
# 444 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 445 "data/maps/AquaHideout_B2F/scripts.pory"

# 446 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 447 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 448 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 449 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 450 "data/maps/AquaHideout_B2F/scripts.pory"

# 451 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 452 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 453 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 454 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 455 "data/maps/AquaHideout_B2F/scripts.pory"

# 456 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro:
# 457 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Matt: What a surprise this isn't.\p"
# 458 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You got here pretty quickly.\n"
# 459 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 460 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What I am surprised by is the company\n"
# 461 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "you're keeping…$"
# 462 "data/maps/AquaHideout_B2F/scripts.pory"

# 463 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 464 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 465 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 466 "data/maps/AquaHideout_B2F/scripts.pory"

# 467 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ShellyDefeat:
# 468 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We still bought Archie\n"
# 469 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "enough time…$"
# 470 "data/maps/AquaHideout_B2F/scripts.pory"

# 471 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 472 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 473 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our BOSS\n"
# 474 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$"
# 475 "data/maps/AquaHideout_B2F/scripts.pory"

# 476 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 477 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 478 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our BOSS has already gone on his way to\n"
# 479 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 480 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 481 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 482 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "LILYCOVE.\p"
# 483 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But will you find it then?\n"
# 484 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!$"
# 485 "data/maps/AquaHideout_B2F/scripts.pory"

# 486 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 487 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 488 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 489 "data/maps/AquaHideout_B2F/scripts.pory"

# 490 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 491 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 492 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 493 "data/maps/AquaHideout_B2F/scripts.pory"

# 494 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 495 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "BOSS…\n"
# 496 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 497 "data/maps/AquaHideout_B2F/scripts.pory"

# 498 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 499 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the HIDEOUT's pride\n"
# 500 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 501 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 502 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 503 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 504 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 505 "data/maps/AquaHideout_B2F/scripts.pory"

# 506 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 507 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 508 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 509 "data/maps/AquaHideout_B2F/scripts.pory"

# 510 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 511 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 512 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the MASTER BALL.\p"
# 513 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our BOSS will\n"
# 514 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 515 "data/maps/AquaHideout_B2F/scripts.pory"

# 516 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 517 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined TEAM AQUA, the first\n"
# 518 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 519 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 520 "data/maps/AquaHideout_B2F/scripts.pory"

# 521 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 522 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 523 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 524 "data/maps/AquaHideout_B2F/scripts.pory"

# 525 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 526 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 527 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"

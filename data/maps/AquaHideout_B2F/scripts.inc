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
	setvar VAR_LEVEL_CAP, 81
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	addvar VAR_AQUAHIDEOUT_STATE, 1
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 50
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	goto AquaHideout_B2F_EventScript_SubmarineEscape
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 117 "data/maps/AquaHideout_B2F/scripts.pory"

# 118 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattPostBattle::
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 122 "data/maps/AquaHideout_B2F/scripts.pory"

# 123 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_TabithaWhatYoureMadeOf:
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tabitha: Heh… looks like we're doing\n"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "this.\p"
# 126 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Don't let me down kid. Let's see what\n"
# 127 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "you're really made of!$"
# 128 "data/maps/AquaHideout_B2F/scripts.pory"

# 129 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ShellyWarnedYou:
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Shelly: I warned that you Team Aqua\n"
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "has no choice but to retaliate.\p"
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I also warned you to not follow us here.$"
# 133 "data/maps/AquaHideout_B2F/scripts.pory"

# 134 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattNotStalling:
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Matt: You've stuck your noses in for\n"
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the last time.\p"
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We're going to give you a beating you\n"
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "will never forget!$"
# 139 "data/maps/AquaHideout_B2F/scripts.pory"

# 140 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_TabithaWellWellWell:
# 141 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tabitha: Well, well, well. Looks\n"
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "like the whole gang is here.$"
# 143 "data/maps/AquaHideout_B2F/scripts.pory"

# 144 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_TabithaApproachShelly1:
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaApproachShelly1
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 147 "data/maps/AquaHideout_B2F/scripts.pory"

# 148 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_TabithaApproachShelly2:
# 149 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaApproachShelly2
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 151 "data/maps/AquaHideout_B2F/scripts.pory"

# 152 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_4F_Movement_ShellyApproachTabitha:
# 153 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 154 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 155 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 156 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 157 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 158 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 159 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 161 "data/maps/AquaHideout_B2F/scripts.pory"

# 162 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_TabithaApproachShelly1:
# 163 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 164 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_slow_right
# 165 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_slow_down
# 166 "data/maps/AquaHideout_B2F/scripts.pory"
	face_right
# 167 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 168 "data/maps/AquaHideout_B2F/scripts.pory"

# 169 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_TabithaApproachShelly2:
# 170 "data/maps/AquaHideout_B2F/scripts.pory"
	delay_16
# 171 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_slow_right
# 172 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_slow_up
# 173 "data/maps/AquaHideout_B2F/scripts.pory"
	face_right
# 174 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 175 "data/maps/AquaHideout_B2F/scripts.pory"

# 176 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ShellyBlowsInTheWind:
# 177 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Shelly: He's right. Your loyalty really\n"
# 178 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "does blow in the wind doesn't it?$"
# 179 "data/maps/AquaHideout_B2F/scripts.pory"

# 180 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_TabithaApproachMatt::
# 181 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaApproachMatt
# 182 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 183 "data/maps/AquaHideout_B2F/scripts.pory"

# 184 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_TabithaApproachMatt:
# 185 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_up
# 186 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 187 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 188 "data/maps/AquaHideout_B2F/scripts.pory"

# 189 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 190 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
# 191 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_SUBMARINE
# 192 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 193 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 194 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 195 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterRight
# 196 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 197 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 198 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 199 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 200 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 201 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 202 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 203 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 204 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 205 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 206 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 207 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 208 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 209 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 210 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 211 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_TabithaTimeForMeToLeave, MSGBOX_DEFAULT
# 212 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 213 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 214 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_SHELLY, AquaHideout_B2F_Movement_ShellyKnockedBack
# 215 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AquaHideout_B2F_Movement_TabithaLeave
# 216 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 217 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_WARP_OUT
# 218 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 16
# 219 "data/maps/AquaHideout_B2F/scripts.pory"
	destroyfollowernpc
# 220 "data/maps/AquaHideout_B2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 221 "data/maps/AquaHideout_B2F/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 26, 17
# 222 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_FOLLOWER_AQUA_HIDEOUT_TABITHA, 2
# 223 "data/maps/AquaHideout_B2F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B2F_EMMIE
# 224 "data/maps/AquaHideout_B2F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_SHELLY
# 225 "data/maps/AquaHideout_B2F/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 226 "data/maps/AquaHideout_B2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 227 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 40
# 228 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_WARP_OUT
# 229 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 230 "data/maps/AquaHideout_B2F/scripts.pory"
	addobject LOCALID_EMMIE
# 231 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_EMMIE, AquaHideout_B2F_Movement_EmmieEnters
# 232 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 233 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_EmmieHeardFromTabitha, MSGBOX_DEFAULT
# 234 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 235 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterUp
# 236 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 237 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_EmmieSeenBetterDays, MSGBOX_DEFAULT
# 238 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 239 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_EMMIE, Common_Movement_WalkInPlaceFasterLeft
# 240 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 241 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_EmmieLetsGo, MSGBOX_DEFAULT
# 242 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 243 "data/maps/AquaHideout_B2F/scripts.pory"
	setfollowernpc 9, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
# 244 "data/maps/AquaHideout_B2F/scripts.pory"
	setobjectmovementtype LOCALID_SHELLY, MOVEMENT_TYPE_FACE_DOWN
# 245 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 246 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_TABITHA
# 247 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_EMMIE
# 248 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 249 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 250 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 251 "data/maps/AquaHideout_B2F/scripts.pory"

# 252 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Shelly::
# 253 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 254 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 255 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_ShellyCantDoNothing, MSGBOX_DEFAULT
# 256 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage 
# 257 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 258 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 259 "data/maps/AquaHideout_B2F/scripts.pory"

# 260 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ShellyCantDoNothing:
# 261 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Shelly: Sorry kid. Team Aqua can't stand\n"
# 262 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "by and do nothing.$"
# 263 "data/maps/AquaHideout_B2F/scripts.pory"

# 264 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_EmmieLetsGo:
# 265 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Emmie: Anyway, let's get out of here.$"
# 266 "data/maps/AquaHideout_B2F/scripts.pory"

# 267 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_EmmieSeenBetterDays:
# 268 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Emmie: She certainly looks like she's\n"
# 269 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "seen better days.$"
# 270 "data/maps/AquaHideout_B2F/scripts.pory"

# 271 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_EmmieHeardFromTabitha:
# 272 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Emmie: Hey {PLAYER}, Tabitha explained\n"
# 273 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "what's happened on his way out.\p"
# 274 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Seems as if Team Aqua are on their way\n"
# 275 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "to the ocean floor then…\p"
# 276 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tabitha said you held your own well\n"
# 277 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "enough, not that I should be surprised\l"
# 278 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "at this point!$"
# 279 "data/maps/AquaHideout_B2F/scripts.pory"

# 280 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_EmmieEnters:
# 281 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 282 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 283 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 284 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 285 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 286 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_down
# 287 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 288 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 289 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 290 "data/maps/AquaHideout_B2F/scripts.pory"

# 291 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_TabithaLeave:
# 292 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 293 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 294 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_up
# 295 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_up
# 296 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 297 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 298 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 299 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 300 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 301 "data/maps/AquaHideout_B2F/scripts.pory"

# 302 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_ShellyKnockedBack:
# 303 "data/maps/AquaHideout_B2F/scripts.pory"
	face_down
# 304 "data/maps/AquaHideout_B2F/scripts.pory"
	lock_facing_direction
# 305 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_fast_up
# 306 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_fast_up
# 307 "data/maps/AquaHideout_B2F/scripts.pory"
	unlock_facing_direction
# 308 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 309 "data/maps/AquaHideout_B2F/scripts.pory"

# 310 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_TabithaTimeForMeToLeave:
# 311 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tabitha: Well that's confirmed what\n"
# 312 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "we feared.\p"
# 313 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Thanks for the assist kid, but it's\n"
# 314 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "time for me to leave for Mossdeep.\p"
# 315 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "See you again no doubt. Hehe…$"
# 316 "data/maps/AquaHideout_B2F/scripts.pory"

# 317 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 318 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 319 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 320 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 321 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 322 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 323 "data/maps/AquaHideout_B2F/scripts.pory"

# 324 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 325 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 326 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 327 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 328 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 329 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 330 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 331 "data/maps/AquaHideout_B2F/scripts.pory"

# 332 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1::
# 333 "data/maps/AquaHideout_B2F/scripts.pory"
lockall
# 334 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT4
# 335 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 336 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 337 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 338 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 339 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 340 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 341 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt4Intro MSGBOX_AUTOCLOSE
# 342 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT1
# 343 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 344 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 345 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 346 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 347 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 348 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 349 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_1F_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 350 "data/maps/AquaHideout_B2F/scripts.pory"
goto AquaHideout_B2F_EventScript_Grunt4Grunt1_ChoosePartyForMultiBattle
# 351 "data/maps/AquaHideout_B2F/scripts.pory"
releaseall
# 352 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 353 "data/maps/AquaHideout_B2F/scripts.pory"

# 354 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1_ChoosePartyForMultiBattle::
# 355 "data/maps/AquaHideout_B2F/scripts.pory"
special SavePlayerParty
# 356 "data/maps/AquaHideout_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 357 "data/maps/AquaHideout_B2F/scripts.pory"
special ChooseHalfPartyForBattle
# 358 "data/maps/AquaHideout_B2F/scripts.pory"
waitstate
# 359 "data/maps/AquaHideout_B2F/scripts.pory"
goto_if_ne VAR_RESULT, 0, AquaHideout_B2F_EventScript_Grunt4Grunt1DoMultiBattle
# 360 "data/maps/AquaHideout_B2F/scripts.pory"
goto AquaHideout_B2F_EventScript_Grunt4Grunt1_ChoosePartyForMultiBattle
# 361 "data/maps/AquaHideout_B2F/scripts.pory"
closemessage
# 362 "data/maps/AquaHideout_B2F/scripts.pory"
releaseall
# 363 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 364 "data/maps/AquaHideout_B2F/scripts.pory"

# 365 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1DoMultiBattle::
# 366 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 367 "data/maps/AquaHideout_B2F/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Defeat, TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Defeat, PARTNER_TABITHA
# 368 "data/maps/AquaHideout_B2F/scripts.pory"
special LoadPlayerParty
# 369 "data/maps/AquaHideout_B2F/scripts.pory"
switch VAR_RESULT
# 370 "data/maps/AquaHideout_B2F/scripts.pory"
case 1, AquaHideout_B2F_EventScript_Grunt4Grunt1Victory
# 371 "data/maps/AquaHideout_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 372 "data/maps/AquaHideout_B2F/scripts.pory"
special SetCB2WhiteOut
# 373 "data/maps/AquaHideout_B2F/scripts.pory"
waitstate
# 374 "data/maps/AquaHideout_B2F/scripts.pory"

# 375 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1Victory::
# 376 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 377 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 378 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 379 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 380 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 381 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 382 "data/maps/AquaHideout_B2F/scripts.pory"
addvar VAR_AQUAHIDEOUT_STATE, 1
# 383 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 384 "data/maps/AquaHideout_B2F/scripts.pory"

# 385 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 386 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 387 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 388 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 389 "data/maps/AquaHideout_B2F/scripts.pory"

# 390 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 391 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 392 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 393 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 394 "data/maps/AquaHideout_B2F/scripts.pory"

# 395 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8::
# 396 "data/maps/AquaHideout_B2F/scripts.pory"
lockall
# 397 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT6
# 398 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 399 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 400 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 401 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 402 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 403 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 404 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt6Intro MSGBOX_AUTOCLOSE
# 405 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT8
# 406 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 407 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 408 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 409 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 410 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 411 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 412 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt8Intro MSGBOX_AUTOCLOSE
# 413 "data/maps/AquaHideout_B2F/scripts.pory"
goto AquaHideout_B2F_EventScript_Grunt6Grunt8_ChoosePartyForMultiBattle
# 414 "data/maps/AquaHideout_B2F/scripts.pory"
releaseall
# 415 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 416 "data/maps/AquaHideout_B2F/scripts.pory"

# 417 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8_ChoosePartyForMultiBattle::
# 418 "data/maps/AquaHideout_B2F/scripts.pory"
special SavePlayerParty
# 419 "data/maps/AquaHideout_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 420 "data/maps/AquaHideout_B2F/scripts.pory"
special ChooseHalfPartyForBattle
# 421 "data/maps/AquaHideout_B2F/scripts.pory"
waitstate
# 422 "data/maps/AquaHideout_B2F/scripts.pory"
goto_if_ne VAR_RESULT, 0, AquaHideout_B2F_EventScript_Grunt6Grunt8DoMultiBattle
# 423 "data/maps/AquaHideout_B2F/scripts.pory"
goto AquaHideout_B2F_EventScript_Grunt6Grunt8_ChoosePartyForMultiBattle
# 424 "data/maps/AquaHideout_B2F/scripts.pory"
closemessage
# 425 "data/maps/AquaHideout_B2F/scripts.pory"
releaseall
# 426 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 427 "data/maps/AquaHideout_B2F/scripts.pory"

# 428 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8DoMultiBattle::
# 429 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 430 "data/maps/AquaHideout_B2F/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Defeat, TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Defeat, PARTNER_TABITHA
# 431 "data/maps/AquaHideout_B2F/scripts.pory"
special LoadPlayerParty
# 432 "data/maps/AquaHideout_B2F/scripts.pory"
switch VAR_RESULT
# 433 "data/maps/AquaHideout_B2F/scripts.pory"
case 1, AquaHideout_B2F_EventScript_Grunt6Grunt8Victory
# 434 "data/maps/AquaHideout_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 435 "data/maps/AquaHideout_B2F/scripts.pory"
special SetCB2WhiteOut
# 436 "data/maps/AquaHideout_B2F/scripts.pory"
waitstate
# 437 "data/maps/AquaHideout_B2F/scripts.pory"

# 438 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8Victory::
# 439 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 440 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 441 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 442 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 443 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 444 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 445 "data/maps/AquaHideout_B2F/scripts.pory"
addvar VAR_AQUAHIDEOUT_STATE, 1
# 446 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 447 "data/maps/AquaHideout_B2F/scripts.pory"

# 448 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 449 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 450 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 451 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 452 "data/maps/AquaHideout_B2F/scripts.pory"

# 453 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 454 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 455 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 456 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 457 "data/maps/AquaHideout_B2F/scripts.pory"

# 458 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro:
# 459 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Matt: What a surprise this isn't.\p"
# 460 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You got here pretty quickly.\n"
# 461 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 462 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What I am surprised by is the company\n"
# 463 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "you're keeping…$"
# 464 "data/maps/AquaHideout_B2F/scripts.pory"

# 465 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 466 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 467 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 468 "data/maps/AquaHideout_B2F/scripts.pory"

# 469 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_ShellyDefeat:
# 470 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We still bought Archie\n"
# 471 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "enough time…$"
# 472 "data/maps/AquaHideout_B2F/scripts.pory"

# 473 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 474 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 475 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our BOSS\n"
# 476 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$"
# 477 "data/maps/AquaHideout_B2F/scripts.pory"

# 478 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 479 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 480 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our BOSS has already gone on his way to\n"
# 481 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 482 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 483 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 484 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "LILYCOVE.\p"
# 485 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But will you find it then?\n"
# 486 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!$"
# 487 "data/maps/AquaHideout_B2F/scripts.pory"

# 488 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 489 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 490 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 491 "data/maps/AquaHideout_B2F/scripts.pory"

# 492 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 493 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 494 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 495 "data/maps/AquaHideout_B2F/scripts.pory"

# 496 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 497 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "BOSS…\n"
# 498 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 499 "data/maps/AquaHideout_B2F/scripts.pory"

# 500 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 501 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the HIDEOUT's pride\n"
# 502 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 503 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 504 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 505 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 506 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 507 "data/maps/AquaHideout_B2F/scripts.pory"

# 508 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 509 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 510 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 511 "data/maps/AquaHideout_B2F/scripts.pory"

# 512 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 513 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 514 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the MASTER BALL.\p"
# 515 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our BOSS will\n"
# 516 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 517 "data/maps/AquaHideout_B2F/scripts.pory"

# 518 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 519 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined TEAM AQUA, the first\n"
# 520 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 521 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 522 "data/maps/AquaHideout_B2F/scripts.pory"

# 523 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 524 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 525 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 526 "data/maps/AquaHideout_B2F/scripts.pory"

# 527 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 528 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 529 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"

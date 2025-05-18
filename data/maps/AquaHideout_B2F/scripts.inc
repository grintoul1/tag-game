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

# 10 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 12 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 13 "data/maps/AquaHideout_B2F/scripts.pory"

# 14 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
# 16 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 17 "data/maps/AquaHideout_B2F/scripts.pory"

# 18 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 21 "data/maps/AquaHideout_B2F/scripts.pory"

# 22 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattNoticePlayer::
# 23 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
# 25 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 26 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 29 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 31 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 32 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 33 "data/maps/AquaHideout_B2F/scripts.pory"

# 34 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Matt::
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattIntro MSGBOX_AUTOCLOSE
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 41 "data/maps/AquaHideout_B2F/scripts.pory"

# 42 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_MATT
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_SUBMARINE
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 61 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 64 "data/maps/AquaHideout_B2F/scripts.pory"

# 65 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 69 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 71 "data/maps/AquaHideout_B2F/scripts.pory"

# 72 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 75 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 79 "data/maps/AquaHideout_B2F/scripts.pory"

# 80 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1::
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
lockall
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT4
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 84 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 89 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt4Intro MSGBOX_AUTOCLOSE
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT1
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 97 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_1F_Text_Grunt1Intro, MSGBOX_AUTOCLOSE
# 98 "data/maps/AquaHideout_B2F/scripts.pory"
goto AquaHideout_B2F_EventScript_Grunt4Grunt1DoMultiBattle
# 99 "data/maps/AquaHideout_B2F/scripts.pory"
releaseall
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 101 "data/maps/AquaHideout_B2F/scripts.pory"

# 102 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1DoMultiBattle::
# 103 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 104 "data/maps/AquaHideout_B2F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Defeat, TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Defeat, PARTNER_TABITHA
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
switch VAR_RESULT
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
case 1, AquaHideout_B2F_EventScript_Grunt4Grunt1Victory
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 108 "data/maps/AquaHideout_B2F/scripts.pory"
special SetCB2WhiteOut
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
waitstate
# 110 "data/maps/AquaHideout_B2F/scripts.pory"

# 111 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Grunt1Victory::
# 112 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
addvar VAR_AQUAHIDEOUT_STATE, 1
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 120 "data/maps/AquaHideout_B2F/scripts.pory"

# 121 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 122 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 124 "data/maps/AquaHideout_B2F/scripts.pory"

# 125 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 126 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 127 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 128 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 129 "data/maps/AquaHideout_B2F/scripts.pory"

# 130 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8::
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
lockall
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT6
# 133 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt6Intro MSGBOX_AUTOCLOSE
# 140 "data/maps/AquaHideout_B2F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT8
# 141 "data/maps/AquaHideout_B2F/scripts.pory"
playse SE_PIN
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 143 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt8Intro, MSGBOX_AUTOCLOSE
# 148 "data/maps/AquaHideout_B2F/scripts.pory"
goto AquaHideout_B2F_EventScript_Grunt6Grunt8DoMultiBattle
# 149 "data/maps/AquaHideout_B2F/scripts.pory"
releaseall
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 151 "data/maps/AquaHideout_B2F/scripts.pory"

# 152 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8DoMultiBattle::
# 153 "data/maps/AquaHideout_B2F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 154 "data/maps/AquaHideout_B2F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Defeat, TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Defeat, PARTNER_TABITHA
# 155 "data/maps/AquaHideout_B2F/scripts.pory"
switch VAR_RESULT
# 156 "data/maps/AquaHideout_B2F/scripts.pory"
case 1, AquaHideout_B2F_EventScript_Grunt6Grunt8Victory
# 157 "data/maps/AquaHideout_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 158 "data/maps/AquaHideout_B2F/scripts.pory"
special SetCB2WhiteOut
# 159 "data/maps/AquaHideout_B2F/scripts.pory"
waitstate
# 160 "data/maps/AquaHideout_B2F/scripts.pory"

# 161 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6Grunt8Victory::
# 162 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 163 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 164 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/AquaHideout_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 166 "data/maps/AquaHideout_B2F/scripts.pory"
waitmovement 0
# 167 "data/maps/AquaHideout_B2F/scripts.pory"
msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/AquaHideout_B2F/scripts.pory"
addvar VAR_AQUAHIDEOUT_STATE, 1
# 169 "data/maps/AquaHideout_B2F/scripts.pory"
end
# 170 "data/maps/AquaHideout_B2F/scripts.pory"

# 171 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 172 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 173 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 174 "data/maps/AquaHideout_B2F/scripts.pory"

# 175 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 176 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 178 "data/maps/AquaHideout_B2F/scripts.pory"

# 179 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro:
# 180 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What a surprise this isn't.\p"
# 181 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You got here pretty quickly.\n"
# 182 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "We underestimated you!\p"
# 183 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What I am surprised by is the company\n"
# 184 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "you're keeping…$"
# 185 "data/maps/AquaHideout_B2F/scripts.pory"

# 186 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 187 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 188 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "So, I lost, too…$"
# 189 "data/maps/AquaHideout_B2F/scripts.pory"

# 190 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 191 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 192 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While I was toying with you, our BOSS\n"
# 193 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "got through his preparations!$"
# 194 "data/maps/AquaHideout_B2F/scripts.pory"

# 195 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 196 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 197 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Our BOSS has already gone on his way to\n"
# 198 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "some cave under the sea!\p"
# 199 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If you're going to give chase, you'd\n"
# 200 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "better search the big, wide sea beyond\l"
# 201 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "LILYCOVE.\p"
# 202 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "But will you find it then?\n"
# 203 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!$"
# 204 "data/maps/AquaHideout_B2F/scripts.pory"

# 205 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 206 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 207 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 208 "data/maps/AquaHideout_B2F/scripts.pory"

# 209 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 210 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 211 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 212 "data/maps/AquaHideout_B2F/scripts.pory"

# 213 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 214 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "BOSS…\n"
# 215 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 216 "data/maps/AquaHideout_B2F/scripts.pory"

# 217 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 218 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the HIDEOUT's pride\n"
# 219 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 220 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 221 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 222 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 223 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 224 "data/maps/AquaHideout_B2F/scripts.pory"

# 225 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 226 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 227 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 228 "data/maps/AquaHideout_B2F/scripts.pory"

# 229 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 230 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 231 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the MASTER BALL.\p"
# 232 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our BOSS will\n"
# 233 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 234 "data/maps/AquaHideout_B2F/scripts.pory"

# 235 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 236 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined TEAM AQUA, the first\n"
# 237 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 238 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 239 "data/maps/AquaHideout_B2F/scripts.pory"

# 240 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 241 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 242 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 243 "data/maps/AquaHideout_B2F/scripts.pory"

# 244 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 245 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 246 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"

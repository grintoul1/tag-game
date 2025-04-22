# 1 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 2 "data/maps/MagmaHideout_2F_2R/scripts.pory"
.set LOCALID_GRUNT15, 5
# 3 "data/maps/MagmaHideout_2F_2R/scripts.pory"
.set LOCALID_GRUNT6, 4
# 4 "data/maps/MagmaHideout_2F_2R/scripts.pory"
.set LOCALID_GRUNT7, 2
# 5 "data/maps/MagmaHideout_2F_2R/scripts.pory"
.set LOCALID_GRUNT8, 1
# 6 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 7 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_MapScripts::
# 8 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.byte 0
# 9 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 10 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15::
# 11 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt15PostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 13 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 14 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt6::
# 15 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 17 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 18 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15Grunt6::
# 19 "data/maps/MagmaHideout_2F_2R/scripts.pory"
lockall
# 20 "data/maps/MagmaHideout_2F_2R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT15
# 21 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playse SE_PIN
# 22 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 23 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 24 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 25 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 26 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 27 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt15Intro MSGBOX_AUTOCLOSE
# 28 "data/maps/MagmaHideout_2F_2R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT6
# 29 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playse SE_PIN
# 30 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 31 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 32 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 33 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 34 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 35 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt6Intro MSGBOX_AUTOCLOSE
# 36 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto MagmaHideout_2F_2R_EventScript_Grunt15Grunt6_ChoosePartyForMultiBattle
# 37 "data/maps/MagmaHideout_2F_2R/scripts.pory"
releaseall
# 38 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 39 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 40 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15Grunt6_ChoosePartyForMultiBattle::
# 41 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special SavePlayerParty
# 42 "data/maps/MagmaHideout_2F_2R/scripts.pory"
fadescreen FADE_TO_BLACK
# 43 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special ChooseHalfPartyForBattle
# 44 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitstate
# 45 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_2F_2R_EventScript_Grunt15Grunt6DoMultiBattle
# 46 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto MagmaHideout_2F_2R_EventScript_Grunt15Grunt6_ChoosePartyForMultiBattle
# 47 "data/maps/MagmaHideout_2F_2R/scripts.pory"
closemessage
# 48 "data/maps/MagmaHideout_2F_2R/scripts.pory"
releaseall
# 49 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 50 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 51 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15Grunt6DoMultiBattle::
# 52 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 53 "data/maps/MagmaHideout_2F_2R/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_15, MagmaHideout_2F_2R_Text_Grunt15Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_6, MagmaHideout_2F_2R_Text_Grunt6Defeat, PARTNER_SHELLY
# 54 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special LoadPlayerParty
# 55 "data/maps/MagmaHideout_2F_2R/scripts.pory"
switch VAR_RESULT
# 56 "data/maps/MagmaHideout_2F_2R/scripts.pory"
case 1, MagmaHideout_2F_2R_EventScript_Grunt15Grunt6Victory
# 57 "data/maps/MagmaHideout_2F_2R/scripts.pory"
fadescreen FADE_TO_BLACK
# 58 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special SetCB2WhiteOut
# 59 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitstate
# 60 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 61 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15Grunt6Victory::
# 62 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 64 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt15PostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 66 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 67 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/MagmaHideout_2F_2R/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 69 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 70 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 71 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 72 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7Grunt8::
# 73 "data/maps/MagmaHideout_2F_2R/scripts.pory"
lockall
# 74 "data/maps/MagmaHideout_2F_2R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT7
# 75 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playse SE_PIN
# 76 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 77 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 78 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 79 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 80 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 81 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt7Intro MSGBOX_AUTOCLOSE
# 82 "data/maps/MagmaHideout_2F_2R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT8
# 83 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playse SE_PIN
# 84 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 85 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 86 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 87 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 88 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 89 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt8Intro MSGBOX_AUTOCLOSE
# 90 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto MagmaHideout_2F_2R_EventScript_Grunt7Grunt8_ChoosePartyForMultiBattle
# 91 "data/maps/MagmaHideout_2F_2R/scripts.pory"
releaseall
# 92 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 93 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 94 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7Grunt8_ChoosePartyForMultiBattle::
# 95 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special SavePlayerParty
# 96 "data/maps/MagmaHideout_2F_2R/scripts.pory"
fadescreen FADE_TO_BLACK
# 97 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special ChooseHalfPartyForBattle
# 98 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitstate
# 99 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_2F_2R_EventScript_Grunt7Grunt8DoMultiBattle
# 100 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto MagmaHideout_2F_2R_EventScript_Grunt7Grunt8_ChoosePartyForMultiBattle
# 101 "data/maps/MagmaHideout_2F_2R/scripts.pory"
closemessage
# 102 "data/maps/MagmaHideout_2F_2R/scripts.pory"
releaseall
# 103 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 104 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 105 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7Grunt8DoMultiBattle::
# 106 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 107 "data/maps/MagmaHideout_2F_2R/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_7, MagmaHideout_2F_2R_Text_Grunt7Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_8, MagmaHideout_2F_2R_Text_Grunt8Defeat, PARTNER_SHELLY
# 108 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special LoadPlayerParty
# 109 "data/maps/MagmaHideout_2F_2R/scripts.pory"
switch VAR_RESULT
# 110 "data/maps/MagmaHideout_2F_2R/scripts.pory"
case 1, MagmaHideout_2F_2R_EventScript_Grunt7Grunt8Victory
# 111 "data/maps/MagmaHideout_2F_2R/scripts.pory"
fadescreen FADE_TO_BLACK
# 112 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special SetCB2WhiteOut
# 113 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitstate
# 114 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 115 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7Grunt8Victory::
# 116 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 117 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 118 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 120 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 121 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/MagmaHideout_2F_2R/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 123 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 124 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 125 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7::
# 126 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 128 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 129 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt8::
# 130 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 132 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 133 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15Intro:
# 134 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I don't have a bone to pick with you.\n"
# 135 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm just following orders!$"
# 136 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 137 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15Defeat:
# 138 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I may have lost, but…$"
# 139 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 140 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15PostBattle:
# 141 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "We dug up something beyond belief!\n"
# 142 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "And, we got the BLUE ORB!\p"
# 143 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "All that's left is for our leader to…\n"
# 144 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Fufufu… Fwahahaha!$"
# 145 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 146 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6Intro:
# 147 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I can't stand heat. Maybe I should've\n"
# 148 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "joined TEAM AQUA instead…$"
# 149 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 150 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6Defeat:
# 151 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Yeah, I really may not be right for\n"
# 152 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "TEAM MAGMA…$"
# 153 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 154 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6PostBattle:
# 155 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Don't you get lonely for the sea\n"
# 156 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "being in a place like this?$"
# 157 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 158 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7Intro:
# 159 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You can hear tremors here sometimes.\p"
# 160 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Could it be the volcano rattling?\n"
# 161 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Or is it GROU…\p"
# 162 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Whoops!\n"
# 163 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "No, no, never mind!$"
# 164 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 165 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7Defeat:
# 166 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You're a fiery battler.\n"
# 167 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Just like a volcano!$"
# 168 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 169 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7PostBattle:
# 170 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You just happened to win this time,\n"
# 171 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "but that doesn't matter.\p"
# 172 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "TEAM MAGMA's goal is about to be\n"
# 173 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "reached!$"
# 174 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 175 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8Intro:
# 176 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "One of our guys was freaking out that\n"
# 177 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "he lost his MAGMA EMBLEM…\p"
# 178 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Wait a minute!\n"
# 179 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Was it you who found it?$"
# 180 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 181 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8Defeat:
# 182 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm having trouble believing this…$"
# 183 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 184 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8PostBattle:
# 185 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm getting this feeling that our plan\n"
# 186 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "is going to end in failure…$"

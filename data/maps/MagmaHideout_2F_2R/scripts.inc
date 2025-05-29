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
	faceplayer
# 12 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt15PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 14 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 15 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt6::
# 16 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	faceplayer
# 17 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 19 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 20 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15Grunt6::
# 21 "data/maps/MagmaHideout_2F_2R/scripts.pory"
lockall
# 22 "data/maps/MagmaHideout_2F_2R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT15
# 23 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playse SE_PIN
# 24 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 25 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 26 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 27 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 28 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 29 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt15Intro MSGBOX_AUTOCLOSE
# 30 "data/maps/MagmaHideout_2F_2R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT6
# 31 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playse SE_PIN
# 32 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 33 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 34 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 35 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 36 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 37 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt6Intro, MSGBOX_AUTOCLOSE
# 38 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto MagmaHideout_2F_2R_EventScript_Grunt15Grunt6_ChoosePartyForMultiBattle
# 39 "data/maps/MagmaHideout_2F_2R/scripts.pory"
releaseall
# 40 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 41 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 42 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15Grunt6_ChoosePartyForMultiBattle::
# 43 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special SavePlayerParty
# 44 "data/maps/MagmaHideout_2F_2R/scripts.pory"
fadescreen FADE_TO_BLACK
# 45 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special ChooseHalfPartyForBattle
# 46 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitstate
# 47 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_2F_2R_EventScript_Grunt15Grunt6DoMultiBattle
# 48 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto MagmaHideout_2F_2R_EventScript_Grunt15Grunt6_ChoosePartyForMultiBattle
# 49 "data/maps/MagmaHideout_2F_2R/scripts.pory"
closemessage
# 50 "data/maps/MagmaHideout_2F_2R/scripts.pory"
releaseall
# 51 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 52 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 53 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15Grunt6DoMultiBattle::
# 54 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 55 "data/maps/MagmaHideout_2F_2R/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_15, MagmaHideout_2F_2R_Text_Grunt15Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_6, MagmaHideout_2F_2R_Text_Grunt6Defeat, PARTNER_SHELLY
# 56 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special LoadPlayerParty
# 57 "data/maps/MagmaHideout_2F_2R/scripts.pory"
switch VAR_RESULT
# 58 "data/maps/MagmaHideout_2F_2R/scripts.pory"
case 1, MagmaHideout_2F_2R_EventScript_Grunt15Grunt6Victory
# 59 "data/maps/MagmaHideout_2F_2R/scripts.pory"
fadescreen FADE_TO_BLACK
# 60 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special SetCB2WhiteOut
# 61 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitstate
# 62 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 63 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt15Grunt6Victory::
# 64 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 65 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 66 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt15PostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 68 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 69 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/MagmaHideout_2F_2R/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 71 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 72 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 73 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 74 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7Grunt8::
# 75 "data/maps/MagmaHideout_2F_2R/scripts.pory"
lockall
# 76 "data/maps/MagmaHideout_2F_2R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT7
# 77 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playse SE_PIN
# 78 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 79 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 80 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 81 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 82 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 83 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt7Intro MSGBOX_AUTOCLOSE
# 84 "data/maps/MagmaHideout_2F_2R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT8
# 85 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playse SE_PIN
# 86 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 87 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 88 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 89 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 90 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 91 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt8Intro, MSGBOX_AUTOCLOSE
# 92 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto MagmaHideout_2F_2R_EventScript_Grunt7Grunt8_ChoosePartyForMultiBattle
# 93 "data/maps/MagmaHideout_2F_2R/scripts.pory"
releaseall
# 94 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 95 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 96 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7Grunt8_ChoosePartyForMultiBattle::
# 97 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special SavePlayerParty
# 98 "data/maps/MagmaHideout_2F_2R/scripts.pory"
fadescreen FADE_TO_BLACK
# 99 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special ChooseHalfPartyForBattle
# 100 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitstate
# 101 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_2F_2R_EventScript_Grunt7Grunt8DoMultiBattle
# 102 "data/maps/MagmaHideout_2F_2R/scripts.pory"
goto MagmaHideout_2F_2R_EventScript_Grunt7Grunt8_ChoosePartyForMultiBattle
# 103 "data/maps/MagmaHideout_2F_2R/scripts.pory"
closemessage
# 104 "data/maps/MagmaHideout_2F_2R/scripts.pory"
releaseall
# 105 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 106 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 107 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7Grunt8DoMultiBattle::
# 108 "data/maps/MagmaHideout_2F_2R/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 109 "data/maps/MagmaHideout_2F_2R/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_7, MagmaHideout_2F_2R_Text_Grunt7Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_8, MagmaHideout_2F_2R_Text_Grunt8Defeat, PARTNER_SHELLY
# 110 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special LoadPlayerParty
# 111 "data/maps/MagmaHideout_2F_2R/scripts.pory"
switch VAR_RESULT
# 112 "data/maps/MagmaHideout_2F_2R/scripts.pory"
case 1, MagmaHideout_2F_2R_EventScript_Grunt7Grunt8Victory
# 113 "data/maps/MagmaHideout_2F_2R/scripts.pory"
fadescreen FADE_TO_BLACK
# 114 "data/maps/MagmaHideout_2F_2R/scripts.pory"
special SetCB2WhiteOut
# 115 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitstate
# 116 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 117 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7Grunt8Victory::
# 118 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 119 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 120 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/MagmaHideout_2F_2R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 122 "data/maps/MagmaHideout_2F_2R/scripts.pory"
waitmovement 0
# 123 "data/maps/MagmaHideout_2F_2R/scripts.pory"
msgbox MagmaHideout_2F_2R_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/MagmaHideout_2F_2R/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 125 "data/maps/MagmaHideout_2F_2R/scripts.pory"
end
# 126 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 127 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt7::
# 128 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	faceplayer
# 129 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 131 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 132 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_EventScript_Grunt8::
# 133 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	faceplayer
# 134 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	msgbox MagmaHideout_2F_2R_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	end
# 136 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 137 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15Intro:
# 138 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I don't have a bone to pick with you.\n"
# 139 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm just following orders!$"
# 140 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 141 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15Defeat:
# 142 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I may have lost, but…$"
# 143 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 144 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt15PostBattle:
# 145 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "We dug up something beyond belief!\n"
# 146 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "And, we got the BLUE ORB!\p"
# 147 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "All that's left is for our leader to…\n"
# 148 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Fufufu… Fwahahaha!$"
# 149 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 150 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6Intro:
# 151 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I can't stand heat. Maybe I should've\n"
# 152 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "joined TEAM AQUA instead…$"
# 153 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 154 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6Defeat:
# 155 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Yeah, I really may not be right for\n"
# 156 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "TEAM MAGMA…$"
# 157 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 158 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt6PostBattle:
# 159 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Don't you get lonely for the sea\n"
# 160 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "being in a place like this?$"
# 161 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 162 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7Intro:
# 163 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You can hear tremors here sometimes.\p"
# 164 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Could it be the volcano rattling?\n"
# 165 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Or is it GROU…\p"
# 166 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Whoops!\n"
# 167 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "No, no, never mind!$"
# 168 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 169 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7Defeat:
# 170 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You're a fiery battler.\n"
# 171 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Just like a volcano!$"
# 172 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 173 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt7PostBattle:
# 174 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "You just happened to win this time,\n"
# 175 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "but that doesn't matter.\p"
# 176 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "TEAM MAGMA's goal is about to be\n"
# 177 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "reached!$"
# 178 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 179 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8Intro:
# 180 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "One of our guys was freaking out that\n"
# 181 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "he lost his MAGMA EMBLEM…\p"
# 182 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Wait a minute!\n"
# 183 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "Was it you who found it?$"
# 184 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 185 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8Defeat:
# 186 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm having trouble believing this…$"
# 187 "data/maps/MagmaHideout_2F_2R/scripts.pory"

# 188 "data/maps/MagmaHideout_2F_2R/scripts.pory"
MagmaHideout_2F_2R_Text_Grunt8PostBattle:
# 189 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "I'm getting this feeling that our plan\n"
# 190 "data/maps/MagmaHideout_2F_2R/scripts.pory"
	.string "is going to end in failure…$"

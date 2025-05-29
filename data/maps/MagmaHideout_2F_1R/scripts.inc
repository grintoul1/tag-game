# 1 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 2 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 3 "data/maps/MagmaHideout_2F_1R/scripts.pory"
.set LOCALID_GRUNT3, 4
# 4 "data/maps/MagmaHideout_2F_1R/scripts.pory"
.set LOCALID_GRUNT14, 3
# 5 "data/maps/MagmaHideout_2F_1R/scripts.pory"
.set LOCALID_GRUNT5, 2
# 6 "data/maps/MagmaHideout_2F_1R/scripts.pory"
.set LOCALID_GRUNT4, 1
# 7 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 8 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_MapScripts::
# 9 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.byte 0
# 10 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 11 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt14Grunt3::
# 12 "data/maps/MagmaHideout_2F_1R/scripts.pory"
lockall
# 13 "data/maps/MagmaHideout_2F_1R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT14
# 14 "data/maps/MagmaHideout_2F_1R/scripts.pory"
playse SE_PIN
# 15 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 16 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 17 "data/maps/MagmaHideout_2F_1R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 18 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 19 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 20 "data/maps/MagmaHideout_2F_1R/scripts.pory"
msgbox MagmaHideout_2F_1R_Text_Grunt14Intro MSGBOX_AUTOCLOSE
# 21 "data/maps/MagmaHideout_2F_1R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT3
# 22 "data/maps/MagmaHideout_2F_1R/scripts.pory"
playse SE_PIN
# 23 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 24 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 25 "data/maps/MagmaHideout_2F_1R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 26 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 27 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 28 "data/maps/MagmaHideout_2F_1R/scripts.pory"
msgbox MagmaHideout_2F_1R_Text_Grunt3Intro, MSGBOX_AUTOCLOSE
# 29 "data/maps/MagmaHideout_2F_1R/scripts.pory"
goto MagmaHideout_2F_1R_EventScript_Grunt14Grunt3_ChoosePartyForMultiBattle
# 30 "data/maps/MagmaHideout_2F_1R/scripts.pory"
releaseall
# 31 "data/maps/MagmaHideout_2F_1R/scripts.pory"
end
# 32 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 33 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt14Grunt3_ChoosePartyForMultiBattle::
# 34 "data/maps/MagmaHideout_2F_1R/scripts.pory"
special SavePlayerParty
# 35 "data/maps/MagmaHideout_2F_1R/scripts.pory"
fadescreen FADE_TO_BLACK
# 36 "data/maps/MagmaHideout_2F_1R/scripts.pory"
special ChooseHalfPartyForBattle
# 37 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitstate
# 38 "data/maps/MagmaHideout_2F_1R/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_2F_1R_EventScript_Grunt14Grunt3DoMultiBattle
# 39 "data/maps/MagmaHideout_2F_1R/scripts.pory"
goto MagmaHideout_2F_1R_EventScript_Grunt14Grunt3_ChoosePartyForMultiBattle
# 40 "data/maps/MagmaHideout_2F_1R/scripts.pory"
closemessage
# 41 "data/maps/MagmaHideout_2F_1R/scripts.pory"
releaseall
# 42 "data/maps/MagmaHideout_2F_1R/scripts.pory"
end
# 43 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 44 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt14Grunt3DoMultiBattle::
# 45 "data/maps/MagmaHideout_2F_1R/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 46 "data/maps/MagmaHideout_2F_1R/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_14, MagmaHideout_2F_1R_Text_Grunt14Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_3, MagmaHideout_2F_1R_Text_Grunt3Defeat, PARTNER_SHELLY
# 47 "data/maps/MagmaHideout_2F_1R/scripts.pory"
special LoadPlayerParty
# 48 "data/maps/MagmaHideout_2F_1R/scripts.pory"
switch VAR_RESULT
# 49 "data/maps/MagmaHideout_2F_1R/scripts.pory"
case 1, MagmaHideout_2F_1R_EventScript_Grunt14Grunt3Victory
# 50 "data/maps/MagmaHideout_2F_1R/scripts.pory"
fadescreen FADE_TO_BLACK
# 51 "data/maps/MagmaHideout_2F_1R/scripts.pory"
special SetCB2WhiteOut
# 52 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitstate
# 53 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 54 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt14Grunt3Victory::
# 55 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 56 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 57 "data/maps/MagmaHideout_2F_1R/scripts.pory"
msgbox MagmaHideout_2F_1R_Text_Grunt14PostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 59 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 60 "data/maps/MagmaHideout_2F_1R/scripts.pory"
msgbox MagmaHideout_2F_1R_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/MagmaHideout_2F_1R/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 62 "data/maps/MagmaHideout_2F_1R/scripts.pory"
end
# 63 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 64 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt14::
# 65 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	faceplayer
# 66 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt14PostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 68 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 69 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt3::
# 70 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	faceplayer
# 71 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 73 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 74 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt5Grunt4::
# 75 "data/maps/MagmaHideout_2F_1R/scripts.pory"
lockall
# 76 "data/maps/MagmaHideout_2F_1R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT5
# 77 "data/maps/MagmaHideout_2F_1R/scripts.pory"
playse SE_PIN
# 78 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 79 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 80 "data/maps/MagmaHideout_2F_1R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 81 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 82 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 83 "data/maps/MagmaHideout_2F_1R/scripts.pory"
msgbox MagmaHideout_2F_1R_Text_Grunt5Intro MSGBOX_AUTOCLOSE
# 84 "data/maps/MagmaHideout_2F_1R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT4
# 85 "data/maps/MagmaHideout_2F_1R/scripts.pory"
playse SE_PIN
# 86 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 87 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 88 "data/maps/MagmaHideout_2F_1R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 89 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 90 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 91 "data/maps/MagmaHideout_2F_1R/scripts.pory"
msgbox MagmaHideout_2F_1R_Text_Grunt4Intro, MSGBOX_AUTOCLOSE
# 92 "data/maps/MagmaHideout_2F_1R/scripts.pory"
goto MagmaHideout_2F_1R_EventScript_Grunt5Grunt4_ChoosePartyForMultiBattle
# 93 "data/maps/MagmaHideout_2F_1R/scripts.pory"
releaseall
# 94 "data/maps/MagmaHideout_2F_1R/scripts.pory"
end
# 95 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 96 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt5Grunt4_ChoosePartyForMultiBattle::
# 97 "data/maps/MagmaHideout_2F_1R/scripts.pory"
special SavePlayerParty
# 98 "data/maps/MagmaHideout_2F_1R/scripts.pory"
fadescreen FADE_TO_BLACK
# 99 "data/maps/MagmaHideout_2F_1R/scripts.pory"
special ChooseHalfPartyForBattle
# 100 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitstate
# 101 "data/maps/MagmaHideout_2F_1R/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_2F_1R_EventScript_Grunt5Grunt4DoMultiBattle
# 102 "data/maps/MagmaHideout_2F_1R/scripts.pory"
goto MagmaHideout_2F_1R_EventScript_Grunt5Grunt4_ChoosePartyForMultiBattle
# 103 "data/maps/MagmaHideout_2F_1R/scripts.pory"
closemessage
# 104 "data/maps/MagmaHideout_2F_1R/scripts.pory"
releaseall
# 105 "data/maps/MagmaHideout_2F_1R/scripts.pory"
end
# 106 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 107 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt5Grunt4DoMultiBattle::
# 108 "data/maps/MagmaHideout_2F_1R/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 109 "data/maps/MagmaHideout_2F_1R/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_5, MagmaHideout_2F_1R_Text_Grunt5Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_4, MagmaHideout_2F_1R_Text_Grunt4Defeat, PARTNER_SHELLY
# 110 "data/maps/MagmaHideout_2F_1R/scripts.pory"
special LoadPlayerParty
# 111 "data/maps/MagmaHideout_2F_1R/scripts.pory"
switch VAR_RESULT
# 112 "data/maps/MagmaHideout_2F_1R/scripts.pory"
case 1, MagmaHideout_2F_1R_EventScript_Grunt5Grunt4Victory
# 113 "data/maps/MagmaHideout_2F_1R/scripts.pory"
fadescreen FADE_TO_BLACK
# 114 "data/maps/MagmaHideout_2F_1R/scripts.pory"
special SetCB2WhiteOut
# 115 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitstate
# 116 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 117 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt5Grunt4Victory::
# 118 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 119 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 120 "data/maps/MagmaHideout_2F_1R/scripts.pory"
msgbox MagmaHideout_2F_1R_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/MagmaHideout_2F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 122 "data/maps/MagmaHideout_2F_1R/scripts.pory"
waitmovement 0
# 123 "data/maps/MagmaHideout_2F_1R/scripts.pory"
msgbox MagmaHideout_2F_1R_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/MagmaHideout_2F_1R/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 125 "data/maps/MagmaHideout_2F_1R/scripts.pory"
end
# 126 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 127 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt4::
# 128 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	faceplayer
# 129 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 131 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 132 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt5::
# 133 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	faceplayer
# 134 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 136 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 137 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14Intro:
# 138 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "What, what, what?\p"
# 139 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Only TEAM MAGMA members are supposed\n"
# 140 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "to be in here!\p"
# 141 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "But you're not dressed in TEAM MAGMA's\n"
# 142 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "uniform…\p"
# 143 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "You rouse my suspicion!\n"
# 144 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Battle with me!$"
# 145 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 146 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14Defeat:
# 147 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Aiyiyi…\n"
# 148 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "My pride as a TEAM MAGMA member…$"
# 149 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 150 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14PostBattle:
# 151 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "If you suffer from chills, you should\n"
# 152 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "join TEAM MAGMA.$"
# 153 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 154 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3Intro:
# 155 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Hold it right there!\p"
# 156 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "You don't really expect me to keep\n"
# 157 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "my trap shut and let you waltz by me?$"
# 158 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 159 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3Defeat:
# 160 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ooh wow!\n"
# 161 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "I concede!$"
# 162 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 163 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3PostBattle:
# 164 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Maybe it would've been better if I did\n"
# 165 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "just let you go unchallenged…$"
# 166 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 167 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4Intro:
# 168 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ahah!\n"
# 169 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "An intruder!$"
# 170 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 171 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4Defeat:
# 172 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Graaah!$"
# 173 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 174 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4PostBattle:
# 175 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "I've already lost.\p"
# 176 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Do I really need to keep running\n"
# 177 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "around in a circle?$"
# 178 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 179 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5Intro:
# 180 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Oh, oh!\n"
# 181 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "An intruder!$"
# 182 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 183 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5Defeat:
# 184 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Mutter…$"
# 185 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 186 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5PostBattle:
# 187 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Actually, I'm no expert at battling…$"

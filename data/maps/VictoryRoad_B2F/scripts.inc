# 1 "data/maps/VictoryRoad_B2F/scripts.pory"

# 2 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_MapScripts::
# 3 "data/maps/VictoryRoad_B2F/scripts.pory"
	.byte 0
# 4 "data/maps/VictoryRoad_B2F/scripts.pory"

# 5 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_DianneJulie::
# 6 "data/maps/VictoryRoad_B2F/scripts.pory"
lockall
# 7 "data/maps/VictoryRoad_B2F/scripts.pory"
playse SE_PIN
# 8 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement LOCALID_DIANNE, Common_Movement_ExclamationMark
# 9 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 10 "data/maps/VictoryRoad_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 11 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 12 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 13 "data/maps/VictoryRoad_B2F/scripts.pory"
msgbox VictoryRoad_B2F_Text_DianneIntro MSGBOX_AUTOCLOSE
# 14 "data/maps/VictoryRoad_B2F/scripts.pory"
playse SE_PIN
# 15 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement  LOCALID_JULIE, Common_Movement_ExclamationMark
# 16 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 17 "data/maps/VictoryRoad_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 18 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 19 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 20 "data/maps/VictoryRoad_B2F/scripts.pory"
msgbox VictoryRoad_B2F_Text_JulieIntro MSGBOX_AUTOCLOSE
# 21 "data/maps/VictoryRoad_B2F/scripts.pory"
goto VictoryRoad_B2F_EventScript_DianneJulieDoMultiBattle
# 22 "data/maps/VictoryRoad_B2F/scripts.pory"
releaseall
# 23 "data/maps/VictoryRoad_B2F/scripts.pory"
end
# 24 "data/maps/VictoryRoad_B2F/scripts.pory"

# 25 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_DianneJulieDoMultiBattle::
# 26 "data/maps/VictoryRoad_B2F/scripts.pory"
playbgm MUS_VICTORY_ROAD, TRUE
# 27 "data/maps/VictoryRoad_B2F/scripts.pory"
multi_2p_vs_2 TRAINER_DIANNE, VictoryRoad_B2F_Text_DianneDefeat, TRAINER_JULIE, VictoryRoad_B2F_Text_JulieDefeat, PARTNER_EMMIE
# 28 "data/maps/VictoryRoad_B2F/scripts.pory"
switch VAR_RESULT
# 29 "data/maps/VictoryRoad_B2F/scripts.pory"
case 1, VictoryRoad_B2F_EventScript_DianneJulieVictory
# 30 "data/maps/VictoryRoad_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 31 "data/maps/VictoryRoad_B2F/scripts.pory"
special SetCB2WhiteOut
# 32 "data/maps/VictoryRoad_B2F/scripts.pory"
waitstate
# 33 "data/maps/VictoryRoad_B2F/scripts.pory"

# 34 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_DianneJulieVictory::
# 35 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 36 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 37 "data/maps/VictoryRoad_B2F/scripts.pory"
msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 39 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 40 "data/maps/VictoryRoad_B2F/scripts.pory"
msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/VictoryRoad_B2F/scripts.pory"
addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 42 "data/maps/VictoryRoad_B2F/scripts.pory"
end
# 43 "data/maps/VictoryRoad_B2F/scripts.pory"

# 44 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_CarolineOwen::
# 45 "data/maps/VictoryRoad_B2F/scripts.pory"
lockall
# 46 "data/maps/VictoryRoad_B2F/scripts.pory"
playse SE_PIN
# 47 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement LOCALID_CAROLINE, Common_Movement_ExclamationMark
# 48 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 49 "data/maps/VictoryRoad_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 50 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 51 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 52 "data/maps/VictoryRoad_B2F/scripts.pory"
msgbox VictoryRoad_B2F_Text_CarolineIntro MSGBOX_AUTOCLOSE
# 53 "data/maps/VictoryRoad_B2F/scripts.pory"
playse SE_PIN
# 54 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement  LOCALID_OWEN, Common_Movement_ExclamationMark
# 55 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 56 "data/maps/VictoryRoad_B2F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 57 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 58 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 59 "data/maps/VictoryRoad_B2F/scripts.pory"
msgbox VictoryRoad_B2F_Text_OwenIntro MSGBOX_AUTOCLOSE
# 60 "data/maps/VictoryRoad_B2F/scripts.pory"
goto VictoryRoad_B2F_EventScript_CarolineOwenDoMultiBattle
# 61 "data/maps/VictoryRoad_B2F/scripts.pory"
releaseall
# 62 "data/maps/VictoryRoad_B2F/scripts.pory"
end
# 63 "data/maps/VictoryRoad_B2F/scripts.pory"

# 64 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_CarolineOwenDoMultiBattle::
# 65 "data/maps/VictoryRoad_B2F/scripts.pory"
playbgm MUS_VICTORY_ROAD, TRUE
# 66 "data/maps/VictoryRoad_B2F/scripts.pory"
multi_2p_vs_2 TRAINER_CAROLINE, VictoryRoad_B2F_Text_CarolineDefeat, TRAINER_OWEN, VictoryRoad_B2F_Text_OwenDefeat, PARTNER_EMMIE
# 67 "data/maps/VictoryRoad_B2F/scripts.pory"
switch VAR_RESULT
# 68 "data/maps/VictoryRoad_B2F/scripts.pory"
case 1, VictoryRoad_B2F_EventScript_CarolineOwenVictory
# 69 "data/maps/VictoryRoad_B2F/scripts.pory"
fadescreen FADE_TO_BLACK
# 70 "data/maps/VictoryRoad_B2F/scripts.pory"
special SetCB2WhiteOut
# 71 "data/maps/VictoryRoad_B2F/scripts.pory"
waitstate
# 72 "data/maps/VictoryRoad_B2F/scripts.pory"

# 73 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_CarolineOwenVictory::
# 74 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 75 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 76 "data/maps/VictoryRoad_B2F/scripts.pory"
msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/VictoryRoad_B2F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 78 "data/maps/VictoryRoad_B2F/scripts.pory"
waitmovement 0
# 79 "data/maps/VictoryRoad_B2F/scripts.pory"
msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/VictoryRoad_B2F/scripts.pory"
addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 81 "data/maps/VictoryRoad_B2F/scripts.pory"
end
# 82 "data/maps/VictoryRoad_B2F/scripts.pory"

# 83 "data/maps/VictoryRoad_B2F/scripts.pory"

# 84 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Vito::
# 85 "data/maps/VictoryRoad_B2F/scripts.pory"
	faceplayer
# 86 "data/maps/VictoryRoad_B2F/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, TRUE
# 87 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_VitoIntro MSGBOX_AUTOCLOSE
# 88 "data/maps/VictoryRoad_B2F/scripts.pory"
	goto VictoryRoad_B2F_EventScript_VitoDoMultiBattle
# 89 "data/maps/VictoryRoad_B2F/scripts.pory"
	releaseall
# 90 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 91 "data/maps/VictoryRoad_B2F/scripts.pory"

# 92 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_VitoDoMultiBattle::
# 93 "data/maps/VictoryRoad_B2F/scripts.pory"
	playbgm MUS_VICTORY_ROAD, TRUE
# 94 "data/maps/VictoryRoad_B2F/scripts.pory"
	multi_2p_vs_1 TRAINER_VITO, VictoryRoad_B2F_Text_VitoDefeat, PARTNER_EMMIE
# 95 "data/maps/VictoryRoad_B2F/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/VictoryRoad_B2F/scripts.pory"
	case 1, VictoryRoad_B2F_EventScript_VitoVictory
# 97 "data/maps/VictoryRoad_B2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/VictoryRoad_B2F/scripts.pory"
	special SetCB2WhiteOut
# 99 "data/maps/VictoryRoad_B2F/scripts.pory"
	waitstate
# 100 "data/maps/VictoryRoad_B2F/scripts.pory"

# 101 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_VitoVictory::
# 102 "data/maps/VictoryRoad_B2F/scripts.pory"
	applymovement LOCALID_VITO, Common_Movement_WalkInPlaceFasterRight
# 103 "data/maps/VictoryRoad_B2F/scripts.pory"
	waitmovement 0
# 104 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/VictoryRoad_B2F/scripts.pory"
	playse SE_EXIT
# 106 "data/maps/VictoryRoad_B2F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 107 "data/maps/VictoryRoad_B2F/scripts.pory"
	removeobject LOCALID_VITO
# 108 "data/maps/VictoryRoad_B2F/scripts.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_VITO
# 109 "data/maps/VictoryRoad_B2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 110 "data/maps/VictoryRoad_B2F/scripts.pory"
	releaseall
# 111 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 112 "data/maps/VictoryRoad_B2F/scripts.pory"

# 113 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Owen::
# 114 "data/maps/VictoryRoad_B2F/scripts.pory"
	faceplayer
# 115 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 117 "data/maps/VictoryRoad_B2F/scripts.pory"

# 118 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Caroline::
# 119 "data/maps/VictoryRoad_B2F/scripts.pory"
	faceplayer
# 120 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 122 "data/maps/VictoryRoad_B2F/scripts.pory"

# 123 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Julie::
# 124 "data/maps/VictoryRoad_B2F/scripts.pory"
	faceplayer
# 125 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 127 "data/maps/VictoryRoad_B2F/scripts.pory"

# 128 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Felix::
# 129 "data/maps/VictoryRoad_B2F/scripts.pory"
	faceplayer
# 130 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 132 "data/maps/VictoryRoad_B2F/scripts.pory"

# 133 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Dianne::
# 134 "data/maps/VictoryRoad_B2F/scripts.pory"
	faceplayer
# 135 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 137 "data/maps/VictoryRoad_B2F/scripts.pory"

# 138 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoIntro:
# 139 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Vito: Well hey there!\p"
# 140 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "My name's Vito and I'm making my\n"
# 141 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "way to challenge the Elite Four.\p"
# 142 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I come from a family of powerful\n"
# 143 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "trainers that lives on Route 111.\p"
# 144 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "That's right, the Winstrates!\p"
# 145 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "What's that? You defeated my\n"
# 146 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "whole family?!\p"
# 147 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Hah, don't make me laugh! I\n"
# 148 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "guess it's time to put your\l"
# 149 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "money where your mouth is!$"
# 150 "data/maps/VictoryRoad_B2F/scripts.pory"

# 151 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoDefeat:
# 152 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Better than my family?!\n"
# 153 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Is that possible?!$"
# 154 "data/maps/VictoryRoad_B2F/scripts.pory"

# 155 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoPostBattle:
# 156 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I was better than everyone in my\n"
# 157 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "family. I've never lost before…\p"
# 158 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I've lost my confidence…\p"
# 159 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Maybe I'll go home and train\n"
# 160 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "some more…$"
# 161 "data/maps/VictoryRoad_B2F/scripts.pory"

# 162 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenIntro:
# 163 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I'd heard that there was a tough\n"
# 164 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "little kid around. Do they mean you?$"
# 165 "data/maps/VictoryRoad_B2F/scripts.pory"

# 166 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenDefeat:
# 167 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The little shrimp is tough!$"
# 168 "data/maps/VictoryRoad_B2F/scripts.pory"

# 169 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenPostBattle:
# 170 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The rumors I heard, that tough little\n"
# 171 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "kid is from PETALBURG CITY.$"
# 172 "data/maps/VictoryRoad_B2F/scripts.pory"

# 173 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolineIntro:
# 174 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You must be getting a little tired.$"
# 175 "data/maps/VictoryRoad_B2F/scripts.pory"

# 176 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolineDefeat:
# 177 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "No signs of tiring at all!$"
# 178 "data/maps/VictoryRoad_B2F/scripts.pory"

# 179 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolinePostBattle:
# 180 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "VICTORY ROAD and the POKéMON LEAGUE\n"
# 181 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "are long and grueling challenges.\l"
# 182 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Beware of fatigue!$"
# 183 "data/maps/VictoryRoad_B2F/scripts.pory"

# 184 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JulieIntro:
# 185 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You shouldn't get complacent just\n"
# 186 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "because you have a lot of GYM BADGES.\p"
# 187 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "There's always going to be someone\n"
# 188 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "who's better than you!$"
# 189 "data/maps/VictoryRoad_B2F/scripts.pory"

# 190 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JulieDefeat:
# 191 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You're better than me!$"
# 192 "data/maps/VictoryRoad_B2F/scripts.pory"

# 193 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JuliePostBattle:
# 194 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Gaze on your collected BADGES and\n"
# 195 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "remember the TRAINERS you've faced.$"
# 196 "data/maps/VictoryRoad_B2F/scripts.pory"

# 197 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixIntro:
# 198 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I've come this far, but the tension's\n"
# 199 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "giving me awful stomach pain…$"
# 200 "data/maps/VictoryRoad_B2F/scripts.pory"

# 201 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixDefeat:
# 202 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ooh…\n"
# 203 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "It hurts…$"
# 204 "data/maps/VictoryRoad_B2F/scripts.pory"

# 205 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixPostBattle:
# 206 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I can't help getting all tense knowing\n"
# 207 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "that I'm nearing the POKéMON LEAGUE.\p"
# 208 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "It's all I can do to feign calm.$"
# 209 "data/maps/VictoryRoad_B2F/scripts.pory"

# 210 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DianneIntro:
# 211 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The elite among the elite gather in\n"
# 212 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "this cave.\p"
# 213 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "How are you finding it?$"
# 214 "data/maps/VictoryRoad_B2F/scripts.pory"

# 215 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DianneDefeat:
# 216 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Not rattled in the least bit!$"
# 217 "data/maps/VictoryRoad_B2F/scripts.pory"

# 218 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DiannePostBattle:
# 219 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You do have guts! I like that!\n"
# 220 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Keep it going!$"

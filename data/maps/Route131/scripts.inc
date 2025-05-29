# 1 "data/maps/Route131/scripts.pory"

# 2 "data/maps/Route131/scripts.pory"
.set LOCALID_HERMAN, 2
# 3 "data/maps/Route131/scripts.pory"
.set LOCALID_SUSIE, 3
# 4 "data/maps/Route131/scripts.pory"
.set LOCALID_IAN, 6
# 5 "data/maps/Route131/scripts.pory"
.set LOCALID_RELI, 5
# 6 "data/maps/Route131/scripts.pory"
.set LOCALID_RICHARD, 1
# 7 "data/maps/Route131/scripts.pory"
.set LOCALID_KARA, 4
# 8 "data/maps/Route131/scripts.pory"
.set LOCALID_KEVIN, 7
# 9 "data/maps/Route131/scripts.pory"
.set LOCALID_TALIA, 8
# 10 "data/maps/Route131/scripts.pory"

# 11 "data/maps/Route131/scripts.pory"
Route131_MapScripts::
# 12 "data/maps/Route131/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route131_OnTransition
# 13 "data/maps/Route131/scripts.pory"
	.byte 0
# 14 "data/maps/Route131/scripts.pory"

# 15 "data/maps/Route131/scripts.pory"
Route131_OnTransition:
# 16 "data/maps/Route131/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_RAIN, Common_EventScript_SetWeatherIntenseRain
# 17 "data/maps/Route131/scripts.pory"
	call Route131_EventScript_SetLayout
# 18 "data/maps/Route131/scripts.pory"
	end
# 19 "data/maps/Route131/scripts.pory"

# 20 "data/maps/Route131/scripts.pory"
Route131_EventScript_SetLayout::
# 21 "data/maps/Route131/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE131_SKY_PILLAR
# 22 "data/maps/Route131/scripts.pory"
	return
# 23 "data/maps/Route131/scripts.pory"

# 24 "data/maps/Route131/scripts.pory"
Route131_EventScript_KevinTalia::
# 25 "data/maps/Route131/scripts.pory"
lockall
# 26 "data/maps/Route131/scripts.pory"
playse SE_PIN
# 27 "data/maps/Route131/scripts.pory"
applymovement LOCALID_KEVIN, Common_Movement_ExclamationMark
# 28 "data/maps/Route131/scripts.pory"
waitmovement 0
# 29 "data/maps/Route131/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 30 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 31 "data/maps/Route131/scripts.pory"
waitmovement 0
# 32 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_KevinIntro MSGBOX_AUTOCLOSE
# 33 "data/maps/Route131/scripts.pory"
playse SE_PIN
# 34 "data/maps/Route131/scripts.pory"
applymovement  LOCALID_TALIA, Common_Movement_ExclamationMark
# 35 "data/maps/Route131/scripts.pory"
waitmovement 0
# 36 "data/maps/Route131/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 37 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 38 "data/maps/Route131/scripts.pory"
waitmovement 0
# 39 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_TaliaIntro MSGBOX_AUTOCLOSE
# 40 "data/maps/Route131/scripts.pory"
goto Route131_EventScript_KevinTaliaDoMultiBattle
# 41 "data/maps/Route131/scripts.pory"
releaseall
# 42 "data/maps/Route131/scripts.pory"
end
# 43 "data/maps/Route131/scripts.pory"

# 44 "data/maps/Route131/scripts.pory"
Route131_EventScript_KevinTaliaDoMultiBattle::
# 45 "data/maps/Route131/scripts.pory"
playbgm MUS_SURF, TRUE
# 46 "data/maps/Route131/scripts.pory"
multi_2p_vs_2 TRAINER_KEVIN, Route131_Text_KevinDefeat, TRAINER_TALIA, Route131_Text_TaliaDefeat, PARTNER_EMMIE
# 47 "data/maps/Route131/scripts.pory"
switch VAR_RESULT
# 48 "data/maps/Route131/scripts.pory"
case 1, Route131_EventScript_KevinTaliaVictory
# 49 "data/maps/Route131/scripts.pory"
fadescreen FADE_TO_BLACK
# 50 "data/maps/Route131/scripts.pory"
special SetCB2WhiteOut
# 51 "data/maps/Route131/scripts.pory"
waitstate
# 52 "data/maps/Route131/scripts.pory"

# 53 "data/maps/Route131/scripts.pory"
Route131_EventScript_KevinTaliaVictory::
# 54 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/Route131/scripts.pory"
waitmovement 0
# 56 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 58 "data/maps/Route131/scripts.pory"
waitmovement 0
# 59 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_TaliaPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route131/scripts.pory"
addvar VAR_ROUTE131_STATE, 1
# 61 "data/maps/Route131/scripts.pory"
end
# 62 "data/maps/Route131/scripts.pory"

# 63 "data/maps/Route131/scripts.pory"
Route131_EventScript_KaraRichard::
# 64 "data/maps/Route131/scripts.pory"
lockall
# 65 "data/maps/Route131/scripts.pory"
playse SE_PIN
# 66 "data/maps/Route131/scripts.pory"
applymovement LOCALID_KARA, Common_Movement_ExclamationMark
# 67 "data/maps/Route131/scripts.pory"
waitmovement 0
# 68 "data/maps/Route131/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 69 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 70 "data/maps/Route131/scripts.pory"
waitmovement 0
# 71 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_KaraIntro MSGBOX_AUTOCLOSE
# 72 "data/maps/Route131/scripts.pory"
playse SE_PIN
# 73 "data/maps/Route131/scripts.pory"
applymovement  LOCALID_RICHARD, Common_Movement_ExclamationMark
# 74 "data/maps/Route131/scripts.pory"
waitmovement 0
# 75 "data/maps/Route131/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 76 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 77 "data/maps/Route131/scripts.pory"
waitmovement 0
# 78 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_RichardIntro MSGBOX_AUTOCLOSE
# 79 "data/maps/Route131/scripts.pory"
goto Route131_EventScript_KaraRichardDoMultiBattle
# 80 "data/maps/Route131/scripts.pory"
releaseall
# 81 "data/maps/Route131/scripts.pory"
end
# 82 "data/maps/Route131/scripts.pory"

# 83 "data/maps/Route131/scripts.pory"
Route131_EventScript_KaraRichardDoMultiBattle::
# 84 "data/maps/Route131/scripts.pory"
playbgm MUS_SURF, TRUE
# 85 "data/maps/Route131/scripts.pory"
multi_2p_vs_2 TRAINER_KARA, Route131_Text_KaraDefeat, TRAINER_RICHARD, Route131_Text_RichardDefeat, PARTNER_EMMIE
# 86 "data/maps/Route131/scripts.pory"
switch VAR_RESULT
# 87 "data/maps/Route131/scripts.pory"
case 1, Route131_EventScript_KaraRichardVictory
# 88 "data/maps/Route131/scripts.pory"
fadescreen FADE_TO_BLACK
# 89 "data/maps/Route131/scripts.pory"
special SetCB2WhiteOut
# 90 "data/maps/Route131/scripts.pory"
waitstate
# 91 "data/maps/Route131/scripts.pory"

# 92 "data/maps/Route131/scripts.pory"
Route131_EventScript_KaraRichardVictory::
# 93 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 94 "data/maps/Route131/scripts.pory"
waitmovement 0
# 95 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_KaraPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 97 "data/maps/Route131/scripts.pory"
waitmovement 0
# 98 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route131/scripts.pory"
addvar VAR_ROUTE131_STATE, 1
# 100 "data/maps/Route131/scripts.pory"
end
# 101 "data/maps/Route131/scripts.pory"

# 102 "data/maps/Route131/scripts.pory"
Route131_EventScript_ReliIan::
# 103 "data/maps/Route131/scripts.pory"
lockall
# 104 "data/maps/Route131/scripts.pory"
playse SE_PIN
# 105 "data/maps/Route131/scripts.pory"
applymovement  LOCALID_RELI, Common_Movement_ExclamationMark
# 106 "data/maps/Route131/scripts.pory"
waitmovement 0
# 107 "data/maps/Route131/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 108 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 109 "data/maps/Route131/scripts.pory"
waitmovement 0
# 110 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_ReliIntro MSGBOX_AUTOCLOSE
# 111 "data/maps/Route131/scripts.pory"
goto Route131_EventScript_ReliIanDoMultiBattle
# 112 "data/maps/Route131/scripts.pory"
releaseall
# 113 "data/maps/Route131/scripts.pory"
end
# 114 "data/maps/Route131/scripts.pory"

# 115 "data/maps/Route131/scripts.pory"
Route131_EventScript_ReliIanDoMultiBattle::
# 116 "data/maps/Route131/scripts.pory"
playbgm MUS_SURF, TRUE
# 117 "data/maps/Route131/scripts.pory"
multi_2p_vs_1 TRAINER_RELI_AND_IAN, Route131_Text_ReliDefeat, PARTNER_EMMIE
# 118 "data/maps/Route131/scripts.pory"
switch VAR_RESULT
# 119 "data/maps/Route131/scripts.pory"
case 1, Route131_EventScript_ReliIanVictory
# 120 "data/maps/Route131/scripts.pory"
fadescreen FADE_TO_BLACK
# 121 "data/maps/Route131/scripts.pory"
special SetCB2WhiteOut
# 122 "data/maps/Route131/scripts.pory"
waitstate
# 123 "data/maps/Route131/scripts.pory"

# 124 "data/maps/Route131/scripts.pory"
Route131_EventScript_ReliIanVictory::
# 125 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 126 "data/maps/Route131/scripts.pory"
waitmovement 0
# 127 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_ReliPostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route131/scripts.pory"
addvar VAR_ROUTE131_STATE, 1
# 129 "data/maps/Route131/scripts.pory"
end
# 130 "data/maps/Route131/scripts.pory"

# 131 "data/maps/Route131/scripts.pory"
Route131_EventScript_HermanSusie::
# 132 "data/maps/Route131/scripts.pory"
lockall
# 133 "data/maps/Route131/scripts.pory"
playse SE_PIN
# 134 "data/maps/Route131/scripts.pory"
applymovement LOCALID_HERMAN, Common_Movement_ExclamationMark
# 135 "data/maps/Route131/scripts.pory"
waitmovement 0
# 136 "data/maps/Route131/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 137 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 138 "data/maps/Route131/scripts.pory"
waitmovement 0
# 139 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_HermanIntro MSGBOX_AUTOCLOSE
# 140 "data/maps/Route131/scripts.pory"
playse SE_PIN
# 141 "data/maps/Route131/scripts.pory"
applymovement  LOCALID_SUSIE, Common_Movement_ExclamationMark
# 142 "data/maps/Route131/scripts.pory"
waitmovement 0
# 143 "data/maps/Route131/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 144 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 145 "data/maps/Route131/scripts.pory"
waitmovement 0
# 146 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_SusieIntro MSGBOX_AUTOCLOSE
# 147 "data/maps/Route131/scripts.pory"
goto Route131_EventScript_HermanSusieDoMultiBattle
# 148 "data/maps/Route131/scripts.pory"
releaseall
# 149 "data/maps/Route131/scripts.pory"
end
# 150 "data/maps/Route131/scripts.pory"

# 151 "data/maps/Route131/scripts.pory"
Route131_EventScript_HermanSusieDoMultiBattle::
# 152 "data/maps/Route131/scripts.pory"
playbgm MUS_SURF, TRUE
# 153 "data/maps/Route131/scripts.pory"
multi_2p_vs_2 TRAINER_HERMAN, Route131_Text_HermanDefeat, TRAINER_SUSIE, Route131_Text_SusieDefeat, PARTNER_EMMIE
# 154 "data/maps/Route131/scripts.pory"
switch VAR_RESULT
# 155 "data/maps/Route131/scripts.pory"
case 1, Route131_EventScript_HermanSusieVictory
# 156 "data/maps/Route131/scripts.pory"
fadescreen FADE_TO_BLACK
# 157 "data/maps/Route131/scripts.pory"
special SetCB2WhiteOut
# 158 "data/maps/Route131/scripts.pory"
waitstate
# 159 "data/maps/Route131/scripts.pory"

# 160 "data/maps/Route131/scripts.pory"
Route131_EventScript_HermanSusieVictory::
# 161 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 162 "data/maps/Route131/scripts.pory"
waitmovement 0
# 163 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route131/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 165 "data/maps/Route131/scripts.pory"
waitmovement 0
# 166 "data/maps/Route131/scripts.pory"
msgbox Route131_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route131/scripts.pory"
addvar VAR_ROUTE131_STATE, 1
# 168 "data/maps/Route131/scripts.pory"
end
# 169 "data/maps/Route131/scripts.pory"

# 170 "data/maps/Route131/scripts.pory"
Route131_EventScript_CheckSetAbnormalWeather::
# 171 "data/maps/Route131/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 172 "data/maps/Route131/scripts.pory"
	return
# 173 "data/maps/Route131/scripts.pory"

# 174 "data/maps/Route131/scripts.pory"
Route131_EventScript_Richard::
# 175 "data/maps/Route131/scripts.pory"
	faceplayer
# 176 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route131/scripts.pory"
	end
# 178 "data/maps/Route131/scripts.pory"

# 179 "data/maps/Route131/scripts.pory"
Route131_EventScript_Herman::
# 180 "data/maps/Route131/scripts.pory"
	faceplayer
# 181 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route131/scripts.pory"
	end
# 183 "data/maps/Route131/scripts.pory"

# 184 "data/maps/Route131/scripts.pory"
Route131_EventScript_Susie::
# 185 "data/maps/Route131/scripts.pory"
	faceplayer
# 186 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route131/scripts.pory"
	end
# 188 "data/maps/Route131/scripts.pory"

# 189 "data/maps/Route131/scripts.pory"
Route131_EventScript_Kara::
# 190 "data/maps/Route131/scripts.pory"
	faceplayer
# 191 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KaraPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route131/scripts.pory"
	end
# 193 "data/maps/Route131/scripts.pory"

# 194 "data/maps/Route131/scripts.pory"
Route131_EventScript_Reli::
# 195 "data/maps/Route131/scripts.pory"
	faceplayer
# 196 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_ReliPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route131/scripts.pory"
	end
# 198 "data/maps/Route131/scripts.pory"

# 199 "data/maps/Route131/scripts.pory"
Route131_EventScript_Ian::
# 200 "data/maps/Route131/scripts.pory"
	faceplayer
# 201 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_IanPostBattle, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route131/scripts.pory"
	end
# 203 "data/maps/Route131/scripts.pory"

# 204 "data/maps/Route131/scripts.pory"
Route131_EventScript_Talia::
# 205 "data/maps/Route131/scripts.pory"
	faceplayer
# 206 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_TaliaPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route131/scripts.pory"
	end
# 208 "data/maps/Route131/scripts.pory"

# 209 "data/maps/Route131/scripts.pory"
Route131_EventScript_Kevin::
# 210 "data/maps/Route131/scripts.pory"
	faceplayer
# 211 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route131/scripts.pory"
	end

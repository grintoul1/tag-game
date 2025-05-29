# 1 "data/maps/Route126/scripts.pory"

# 2 "data/maps/Route126/scripts.pory"
	.set LOCALID_PABLO, 7
# 3 "data/maps/Route126/scripts.pory"
	.set LOCALID_SIENNA, 6
# 4 "data/maps/Route126/scripts.pory"
	.set LOCALID_BRENDA, 4
# 5 "data/maps/Route126/scripts.pory"
	.set LOCALID_NIKKI, 3
# 6 "data/maps/Route126/scripts.pory"
	.set LOCALID_DEAN, 2
# 7 "data/maps/Route126/scripts.pory"
	.set LOCALID_BARRY, 1
# 8 "data/maps/Route126/scripts.pory"
	.set LOCALID_LEONARDO, 9
# 9 "data/maps/Route126/scripts.pory"
	.set LOCALID_ISOBEL, 8
# 10 "data/maps/Route126/scripts.pory"

# 11 "data/maps/Route126/scripts.pory"
Route126_MapScripts::
# 12 "data/maps/Route126/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route126_OnTransition
# 13 "data/maps/Route126/scripts.pory"
	.byte 0
# 14 "data/maps/Route126/scripts.pory"

# 15 "data/maps/Route126/scripts.pory"
Route126_OnTransition:
# 16 "data/maps/Route126/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 17 "data/maps/Route126/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 18 "data/maps/Route126/scripts.pory"
	end
# 19 "data/maps/Route126/scripts.pory"

# 20 "data/maps/Route126/scripts.pory"
Route126_EventScript_NikkiBrenda::
# 21 "data/maps/Route126/scripts.pory"
lockall
# 22 "data/maps/Route126/scripts.pory"
playse SE_PIN
# 23 "data/maps/Route126/scripts.pory"
applymovement LOCALID_NIKKI, Common_Movement_ExclamationMark
# 24 "data/maps/Route126/scripts.pory"
waitmovement 0
# 25 "data/maps/Route126/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 26 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 27 "data/maps/Route126/scripts.pory"
waitmovement 0
# 28 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_NikkiIntro MSGBOX_AUTOCLOSE
# 29 "data/maps/Route126/scripts.pory"
playse SE_PIN
# 30 "data/maps/Route126/scripts.pory"
applymovement  LOCALID_BRENDA, Common_Movement_ExclamationMark
# 31 "data/maps/Route126/scripts.pory"
waitmovement 0
# 32 "data/maps/Route126/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 33 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 34 "data/maps/Route126/scripts.pory"
waitmovement 0
# 35 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_BrendaIntro MSGBOX_AUTOCLOSE
# 36 "data/maps/Route126/scripts.pory"
goto Route126_EventScript_NikkiBrendaDoMultiBattle
# 37 "data/maps/Route126/scripts.pory"
releaseall
# 38 "data/maps/Route126/scripts.pory"
end
# 39 "data/maps/Route126/scripts.pory"

# 40 "data/maps/Route126/scripts.pory"
Route126_EventScript_NikkiBrendaDoMultiBattle::
# 41 "data/maps/Route126/scripts.pory"
playbgm MUS_SURF, TRUE
# 42 "data/maps/Route126/scripts.pory"
multi_2p_vs_2 TRAINER_NIKKI, Route126_Text_NikkiDefeat, TRAINER_BRENDA, Route126_Text_BrendaDefeat, PARTNER_EMMIE
# 43 "data/maps/Route126/scripts.pory"
switch VAR_RESULT
# 44 "data/maps/Route126/scripts.pory"
case 1, Route126_EventScript_NikkiBrendaVictory
# 45 "data/maps/Route126/scripts.pory"
fadescreen FADE_TO_BLACK
# 46 "data/maps/Route126/scripts.pory"
special SetCB2WhiteOut
# 47 "data/maps/Route126/scripts.pory"
waitstate
# 48 "data/maps/Route126/scripts.pory"

# 49 "data/maps/Route126/scripts.pory"
Route126_EventScript_NikkiBrendaVictory::
# 50 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 51 "data/maps/Route126/scripts.pory"
waitmovement 0
# 52 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 54 "data/maps/Route126/scripts.pory"
waitmovement 0
# 55 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_BrendaPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/Route126/scripts.pory"
addvar VAR_ROUTE126_STATE, 1
# 57 "data/maps/Route126/scripts.pory"
end
# 58 "data/maps/Route126/scripts.pory"

# 59 "data/maps/Route126/scripts.pory"
Route126_EventScript_DeanBarry::
# 60 "data/maps/Route126/scripts.pory"
lockall
# 61 "data/maps/Route126/scripts.pory"
playse SE_PIN
# 62 "data/maps/Route126/scripts.pory"
applymovement LOCALID_DEAN, Common_Movement_ExclamationMark
# 63 "data/maps/Route126/scripts.pory"
waitmovement 0
# 64 "data/maps/Route126/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 65 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 66 "data/maps/Route126/scripts.pory"
waitmovement 0
# 67 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_DeanIntro MSGBOX_AUTOCLOSE
# 68 "data/maps/Route126/scripts.pory"
playse SE_PIN
# 69 "data/maps/Route126/scripts.pory"
applymovement  LOCALID_BARRY, Common_Movement_ExclamationMark
# 70 "data/maps/Route126/scripts.pory"
waitmovement 0
# 71 "data/maps/Route126/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 72 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 73 "data/maps/Route126/scripts.pory"
waitmovement 0
# 74 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_BarryIntro MSGBOX_AUTOCLOSE
# 75 "data/maps/Route126/scripts.pory"
goto Route126_EventScript_DeanBarryDoMultiBattle
# 76 "data/maps/Route126/scripts.pory"
releaseall
# 77 "data/maps/Route126/scripts.pory"
end
# 78 "data/maps/Route126/scripts.pory"

# 79 "data/maps/Route126/scripts.pory"
Route126_EventScript_DeanBarryDoMultiBattle::
# 80 "data/maps/Route126/scripts.pory"
playbgm MUS_SURF, TRUE
# 81 "data/maps/Route126/scripts.pory"
multi_2p_vs_2 TRAINER_DEAN, Route126_Text_DeanDefeat, TRAINER_BARRY, Route126_Text_BarryDefeat, PARTNER_EMMIE
# 82 "data/maps/Route126/scripts.pory"
switch VAR_RESULT
# 83 "data/maps/Route126/scripts.pory"
case 1, Route126_EventScript_DeanBarryVictory
# 84 "data/maps/Route126/scripts.pory"
fadescreen FADE_TO_BLACK
# 85 "data/maps/Route126/scripts.pory"
special SetCB2WhiteOut
# 86 "data/maps/Route126/scripts.pory"
waitstate
# 87 "data/maps/Route126/scripts.pory"

# 88 "data/maps/Route126/scripts.pory"
Route126_EventScript_DeanBarryVictory::
# 89 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 90 "data/maps/Route126/scripts.pory"
waitmovement 0
# 91 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 93 "data/maps/Route126/scripts.pory"
waitmovement 0
# 94 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route126/scripts.pory"
addvar VAR_ROUTE126_STATE, 1
# 96 "data/maps/Route126/scripts.pory"
end
# 97 "data/maps/Route126/scripts.pory"

# 98 "data/maps/Route126/scripts.pory"
Route126_EventScript_LeonardoIsobel::
# 99 "data/maps/Route126/scripts.pory"
lockall
# 100 "data/maps/Route126/scripts.pory"
playse SE_PIN
# 101 "data/maps/Route126/scripts.pory"
applymovement LOCALID_LEONARDO, Common_Movement_ExclamationMark
# 102 "data/maps/Route126/scripts.pory"
waitmovement 0
# 103 "data/maps/Route126/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 104 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 105 "data/maps/Route126/scripts.pory"
waitmovement 0
# 106 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_LeonardoIntro MSGBOX_AUTOCLOSE
# 107 "data/maps/Route126/scripts.pory"
playse SE_PIN
# 108 "data/maps/Route126/scripts.pory"
applymovement  LOCALID_ISOBEL, Common_Movement_ExclamationMark
# 109 "data/maps/Route126/scripts.pory"
waitmovement 0
# 110 "data/maps/Route126/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 111 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 112 "data/maps/Route126/scripts.pory"
waitmovement 0
# 113 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_IsobelIntro MSGBOX_AUTOCLOSE
# 114 "data/maps/Route126/scripts.pory"
goto Route126_EventScript_LeonardoIsobelDoMultiBattle
# 115 "data/maps/Route126/scripts.pory"
releaseall
# 116 "data/maps/Route126/scripts.pory"
end
# 117 "data/maps/Route126/scripts.pory"

# 118 "data/maps/Route126/scripts.pory"
Route126_EventScript_LeonardoIsobelDoMultiBattle::
# 119 "data/maps/Route126/scripts.pory"
playbgm MUS_SURF, TRUE
# 120 "data/maps/Route126/scripts.pory"
multi_2p_vs_2 TRAINER_LEONARDO, Route126_Text_LeonardoDefeat, TRAINER_ISOBEL, Route126_Text_IsobelDefeat, PARTNER_EMMIE
# 121 "data/maps/Route126/scripts.pory"
switch VAR_RESULT
# 122 "data/maps/Route126/scripts.pory"
case 1, Route126_EventScript_LeonardoIsobelVictory
# 123 "data/maps/Route126/scripts.pory"
fadescreen FADE_TO_BLACK
# 124 "data/maps/Route126/scripts.pory"
special SetCB2WhiteOut
# 125 "data/maps/Route126/scripts.pory"
waitstate
# 126 "data/maps/Route126/scripts.pory"

# 127 "data/maps/Route126/scripts.pory"
Route126_EventScript_LeonardoIsobelVictory::
# 128 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 129 "data/maps/Route126/scripts.pory"
waitmovement 0
# 130 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 132 "data/maps/Route126/scripts.pory"
waitmovement 0
# 133 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_IsobelPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route126/scripts.pory"
addvar VAR_ROUTE126_STATE, 1
# 135 "data/maps/Route126/scripts.pory"
end
# 136 "data/maps/Route126/scripts.pory"

# 137 "data/maps/Route126/scripts.pory"
Route126_EventScript_PabloSienna::
# 138 "data/maps/Route126/scripts.pory"
lockall
# 139 "data/maps/Route126/scripts.pory"
playse SE_PIN
# 140 "data/maps/Route126/scripts.pory"
applymovement LOCALID_PABLO, Common_Movement_ExclamationMark
# 141 "data/maps/Route126/scripts.pory"
waitmovement 0
# 142 "data/maps/Route126/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 143 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 144 "data/maps/Route126/scripts.pory"
waitmovement 0
# 145 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_PabloIntro MSGBOX_AUTOCLOSE
# 146 "data/maps/Route126/scripts.pory"
playse SE_PIN
# 147 "data/maps/Route126/scripts.pory"
applymovement  LOCALID_SIENNA, Common_Movement_ExclamationMark
# 148 "data/maps/Route126/scripts.pory"
waitmovement 0
# 149 "data/maps/Route126/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 150 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 151 "data/maps/Route126/scripts.pory"
waitmovement 0
# 152 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_SiennaIntro MSGBOX_AUTOCLOSE
# 153 "data/maps/Route126/scripts.pory"
goto Route126_EventScript_PabloSiennaDoMultiBattle
# 154 "data/maps/Route126/scripts.pory"
releaseall
# 155 "data/maps/Route126/scripts.pory"
end
# 156 "data/maps/Route126/scripts.pory"

# 157 "data/maps/Route126/scripts.pory"
Route126_EventScript_PabloSiennaDoMultiBattle::
# 158 "data/maps/Route126/scripts.pory"
playbgm MUS_SURF, TRUE
# 159 "data/maps/Route126/scripts.pory"
multi_2p_vs_2 TRAINER_PABLO_1, Route126_Text_PabloDefeat, TRAINER_SIENNA, Route126_Text_SiennaDefeat, PARTNER_EMMIE
# 160 "data/maps/Route126/scripts.pory"
switch VAR_RESULT
# 161 "data/maps/Route126/scripts.pory"
case 1, Route126_EventScript_PabloSiennaVictory
# 162 "data/maps/Route126/scripts.pory"
fadescreen FADE_TO_BLACK
# 163 "data/maps/Route126/scripts.pory"
special SetCB2WhiteOut
# 164 "data/maps/Route126/scripts.pory"
waitstate
# 165 "data/maps/Route126/scripts.pory"

# 166 "data/maps/Route126/scripts.pory"
Route126_EventScript_PabloSiennaVictory::
# 167 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 168 "data/maps/Route126/scripts.pory"
waitmovement 0
# 169 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_PabloPostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route126/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 171 "data/maps/Route126/scripts.pory"
waitmovement 0
# 172 "data/maps/Route126/scripts.pory"
msgbox Route126_Text_SiennaPostBattle, MSGBOX_AUTOCLOSE
# 173 "data/maps/Route126/scripts.pory"
addvar VAR_ROUTE126_STATE, 1
# 174 "data/maps/Route126/scripts.pory"
end
# 175 "data/maps/Route126/scripts.pory"

# 176 "data/maps/Route126/scripts.pory"
Route126_EventScript_Barry::
# 177 "data/maps/Route126/scripts.pory"
	faceplayer
# 178 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route126/scripts.pory"
	end
# 180 "data/maps/Route126/scripts.pory"

# 181 "data/maps/Route126/scripts.pory"
Route126_EventScript_Dean::
# 182 "data/maps/Route126/scripts.pory"
	faceplayer
# 183 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route126/scripts.pory"
	end
# 185 "data/maps/Route126/scripts.pory"

# 186 "data/maps/Route126/scripts.pory"
Route126_EventScript_Nikki::
# 187 "data/maps/Route126/scripts.pory"
	faceplayer
# 188 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route126/scripts.pory"
	end
# 190 "data/maps/Route126/scripts.pory"

# 191 "data/maps/Route126/scripts.pory"
Route126_EventScript_Brenda::
# 192 "data/maps/Route126/scripts.pory"
	faceplayer
# 193 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BrendaPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route126/scripts.pory"
	end
# 195 "data/maps/Route126/scripts.pory"

# 196 "data/maps/Route126/scripts.pory"
Route126_EventScript_Leonardo::
# 197 "data/maps/Route126/scripts.pory"
	faceplayer
# 198 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route126/scripts.pory"
	end
# 200 "data/maps/Route126/scripts.pory"

# 201 "data/maps/Route126/scripts.pory"
Route126_EventScript_Isobel::
# 202 "data/maps/Route126/scripts.pory"
	faceplayer
# 203 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_IsobelPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route126/scripts.pory"
	end
# 205 "data/maps/Route126/scripts.pory"

# 206 "data/maps/Route126/scripts.pory"
Route126_EventScript_Sienna::
# 207 "data/maps/Route126/scripts.pory"
	faceplayer
# 208 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_SiennaPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route126/scripts.pory"
	end
# 210 "data/maps/Route126/scripts.pory"

# 211 "data/maps/Route126/scripts.pory"
Route126_EventScript_Pablo::
# 212 "data/maps/Route126/scripts.pory"
	faceplayer
# 213 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostBattle, MSGBOX_DEFAULT
# 214 "data/maps/Route126/scripts.pory"
	release
# 215 "data/maps/Route126/scripts.pory"
	end
# 216 "data/maps/Route126/scripts.pory"

# 217 "data/maps/Route126/scripts.pory"
Route126_EventScript_RegisterPablo::
# 218 "data/maps/Route126/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 219 "data/maps/Route126/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloRegister, MSGBOX_DEFAULT
# 221 "data/maps/Route126/scripts.pory"
	register_matchcall TRAINER_PABLO_1
# 222 "data/maps/Route126/scripts.pory"
	release
# 223 "data/maps/Route126/scripts.pory"
	end
# 224 "data/maps/Route126/scripts.pory"

# 225 "data/maps/Route126/scripts.pory"
Route126_EventScript_RematchPablo::
# 226 "data/maps/Route126/scripts.pory"
	trainerbattle_rematch TRAINER_PABLO_1, Route126_Text_PabloRematchIntro, Route126_Text_PabloRematchDefeat
# 227 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostRematch, MSGBOX_AUTOCLOSE
# 228 "data/maps/Route126/scripts.pory"
	end

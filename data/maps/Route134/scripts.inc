# 1 "data/maps/Route134/scripts.pory"

# 2 "data/maps/Route134/scripts.pory"
Route134_MapScripts::
# 3 "data/maps/Route134/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route134_OnResume
# 4 "data/maps/Route134/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route134_OnTransition
# 5 "data/maps/Route134/scripts.pory"
	.byte 0
# 6 "data/maps/Route134/scripts.pory"

# 7 "data/maps/Route134/scripts.pory"
Route134_OnTransition:
# 8 "data/maps/Route134/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 9 "data/maps/Route134/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 10 "data/maps/Route134/scripts.pory"
	end
# 11 "data/maps/Route134/scripts.pory"

# 12 "data/maps/Route134/scripts.pory"
Route134_OnResume:
# 13 "data/maps/Route134/scripts.pory"
	setdivewarp MAP_UNDERWATER_ROUTE134, 8, 6
# 14 "data/maps/Route134/scripts.pory"
	end
# 15 "data/maps/Route134/scripts.pory"

# 16 "data/maps/Route134/scripts.pory"
Route134_EventScript_LaurelJack::
# 17 "data/maps/Route134/scripts.pory"
lockall
# 18 "data/maps/Route134/scripts.pory"
playse SE_PIN
# 19 "data/maps/Route134/scripts.pory"
applymovement LOCALID_LAUREL, Common_Movement_ExclamationMark
# 20 "data/maps/Route134/scripts.pory"
waitmovement 0
# 21 "data/maps/Route134/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 22 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 23 "data/maps/Route134/scripts.pory"
waitmovement 0
# 24 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_LaurelIntro MSGBOX_AUTOCLOSE
# 25 "data/maps/Route134/scripts.pory"
playse SE_PIN
# 26 "data/maps/Route134/scripts.pory"
applymovement  LOCALID_JACK, Common_Movement_ExclamationMark
# 27 "data/maps/Route134/scripts.pory"
waitmovement 0
# 28 "data/maps/Route134/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 29 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 30 "data/maps/Route134/scripts.pory"
waitmovement 0
# 31 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_JackIntro MSGBOX_AUTOCLOSE
# 32 "data/maps/Route134/scripts.pory"
goto Route134_EventScript_LaurelJackDoMultiBattle
# 33 "data/maps/Route134/scripts.pory"
releaseall
# 34 "data/maps/Route134/scripts.pory"
end
# 35 "data/maps/Route134/scripts.pory"

# 36 "data/maps/Route134/scripts.pory"
Route134_EventScript_LaurelJackDoMultiBattle::
# 37 "data/maps/Route134/scripts.pory"
playbgm MUS_SURF, TRUE
# 38 "data/maps/Route134/scripts.pory"
multi_2p_vs_2 TRAINER_LAUREL, Route134_Text_LaurelDefeat, TRAINER_JACK, Route134_Text_JackDefeat, PARTNER_EMMIE
# 39 "data/maps/Route134/scripts.pory"
switch VAR_RESULT
# 40 "data/maps/Route134/scripts.pory"
case 1, Route134_EventScript_LaurelJackVictory
# 41 "data/maps/Route134/scripts.pory"
fadescreen FADE_TO_BLACK
# 42 "data/maps/Route134/scripts.pory"
special SetCB2WhiteOut
# 43 "data/maps/Route134/scripts.pory"
waitstate
# 44 "data/maps/Route134/scripts.pory"

# 45 "data/maps/Route134/scripts.pory"
Route134_EventScript_LaurelJackVictory::
# 46 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/Route134/scripts.pory"
waitmovement 0
# 48 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_LaurelPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 50 "data/maps/Route134/scripts.pory"
waitmovement 0
# 51 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_JackPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route134/scripts.pory"
addvar VAR_ROUTE132_STATE, 1
# 53 "data/maps/Route134/scripts.pory"
end
# 54 "data/maps/Route134/scripts.pory"

# 55 "data/maps/Route134/scripts.pory"
Route134_EventScript_AaronMarley::
# 56 "data/maps/Route134/scripts.pory"
lockall
# 57 "data/maps/Route134/scripts.pory"
playse SE_PIN
# 58 "data/maps/Route134/scripts.pory"
applymovement LOCALID_AARON, Common_Movement_ExclamationMark
# 59 "data/maps/Route134/scripts.pory"
waitmovement 0
# 60 "data/maps/Route134/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 61 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/Route134/scripts.pory"
waitmovement 0
# 63 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_AaronIntro MSGBOX_AUTOCLOSE
# 64 "data/maps/Route134/scripts.pory"
playse SE_PIN
# 65 "data/maps/Route134/scripts.pory"
applymovement  LOCALID_MARLEY, Common_Movement_ExclamationMark
# 66 "data/maps/Route134/scripts.pory"
waitmovement 0
# 67 "data/maps/Route134/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 68 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 69 "data/maps/Route134/scripts.pory"
waitmovement 0
# 70 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_MarleyIntro MSGBOX_AUTOCLOSE
# 71 "data/maps/Route134/scripts.pory"
goto Route134_EventScript_AaronMarleyDoMultiBattle
# 72 "data/maps/Route134/scripts.pory"
releaseall
# 73 "data/maps/Route134/scripts.pory"
end
# 74 "data/maps/Route134/scripts.pory"

# 75 "data/maps/Route134/scripts.pory"
Route134_EventScript_AaronMarleyDoMultiBattle::
# 76 "data/maps/Route134/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 77 "data/maps/Route134/scripts.pory"
multi_2p_vs_2 TRAINER_AARON, Route134_Text_AaronDefeat, TRAINER_MARLEY, Route134_Text_MarleyDefeat, PARTNER_EMMIE
# 78 "data/maps/Route134/scripts.pory"
switch VAR_RESULT
# 79 "data/maps/Route134/scripts.pory"
case 1, Route134_EventScript_AaronMarleyVictory
# 80 "data/maps/Route134/scripts.pory"
fadescreen FADE_TO_BLACK
# 81 "data/maps/Route134/scripts.pory"
special SetCB2WhiteOut
# 82 "data/maps/Route134/scripts.pory"
waitstate
# 83 "data/maps/Route134/scripts.pory"

# 84 "data/maps/Route134/scripts.pory"
Route134_EventScript_AaronMarleyVictory::
# 85 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 86 "data/maps/Route134/scripts.pory"
waitmovement 0
# 87 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 89 "data/maps/Route134/scripts.pory"
waitmovement 0
# 90 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_MarleyPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route134/scripts.pory"
addvar VAR_ROUTE132_STATE, 1
# 92 "data/maps/Route134/scripts.pory"
end
# 93 "data/maps/Route134/scripts.pory"

# 94 "data/maps/Route134/scripts.pory"
Route134_EventScript_AlexKelvin::
# 95 "data/maps/Route134/scripts.pory"
lockall
# 96 "data/maps/Route134/scripts.pory"
playse SE_PIN
# 97 "data/maps/Route134/scripts.pory"
applymovement LOCALID_ALEX, Common_Movement_ExclamationMark
# 98 "data/maps/Route134/scripts.pory"
waitmovement 0
# 99 "data/maps/Route134/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 100 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 101 "data/maps/Route134/scripts.pory"
waitmovement 0
# 102 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_AlexIntro MSGBOX_AUTOCLOSE
# 103 "data/maps/Route134/scripts.pory"
playse SE_PIN
# 104 "data/maps/Route134/scripts.pory"
applymovement  LOCALID_KELVIN, Common_Movement_ExclamationMark
# 105 "data/maps/Route134/scripts.pory"
waitmovement 0
# 106 "data/maps/Route134/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 107 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 108 "data/maps/Route134/scripts.pory"
waitmovement 0
# 109 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_KelvinIntro MSGBOX_AUTOCLOSE
# 110 "data/maps/Route134/scripts.pory"
goto Route134_EventScript_AlexKelvinDoMultiBattle
# 111 "data/maps/Route134/scripts.pory"
releaseall
# 112 "data/maps/Route134/scripts.pory"
end
# 113 "data/maps/Route134/scripts.pory"

# 114 "data/maps/Route134/scripts.pory"
Route134_EventScript_AlexKelvinDoMultiBattle::
# 115 "data/maps/Route134/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 116 "data/maps/Route134/scripts.pory"
multi_2p_vs_2 TRAINER_ALEX, Route134_Text_AlexDefeat, TRAINER_KELVIN, Route134_Text_KelvinDefeat, PARTNER_EMMIE
# 117 "data/maps/Route134/scripts.pory"
switch VAR_RESULT
# 118 "data/maps/Route134/scripts.pory"
case 1, Route134_EventScript_AlexKelvinVictory
# 119 "data/maps/Route134/scripts.pory"
fadescreen FADE_TO_BLACK
# 120 "data/maps/Route134/scripts.pory"
special SetCB2WhiteOut
# 121 "data/maps/Route134/scripts.pory"
waitstate
# 122 "data/maps/Route134/scripts.pory"

# 123 "data/maps/Route134/scripts.pory"
Route134_EventScript_AlexKelvinVictory::
# 124 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 125 "data/maps/Route134/scripts.pory"
waitmovement 0
# 126 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_AlexPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 128 "data/maps/Route134/scripts.pory"
waitmovement 0
# 129 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_KelvinPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route134/scripts.pory"
addvar VAR_ROUTE132_STATE, 1
# 131 "data/maps/Route134/scripts.pory"
end
# 132 "data/maps/Route134/scripts.pory"

# 133 "data/maps/Route134/scripts.pory"
Route134_EventScript_HudsonLinda::
# 134 "data/maps/Route134/scripts.pory"
lockall
# 135 "data/maps/Route134/scripts.pory"
playse SE_PIN
# 136 "data/maps/Route134/scripts.pory"
applymovement LOCALID_HUDSON, Common_Movement_ExclamationMark
# 137 "data/maps/Route134/scripts.pory"
waitmovement 0
# 138 "data/maps/Route134/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 139 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 140 "data/maps/Route134/scripts.pory"
waitmovement 0
# 141 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_HudsonIntro MSGBOX_AUTOCLOSE
# 142 "data/maps/Route134/scripts.pory"
playse SE_PIN
# 143 "data/maps/Route134/scripts.pory"
applymovement  LOCALID_LINDA, Common_Movement_ExclamationMark
# 144 "data/maps/Route134/scripts.pory"
waitmovement 0
# 145 "data/maps/Route134/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 146 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 147 "data/maps/Route134/scripts.pory"
waitmovement 0
# 148 "data/maps/Route134/scripts.pory"
msgbox Route133_Text_LindaIntro MSGBOX_AUTOCLOSE
# 149 "data/maps/Route134/scripts.pory"
goto Route134_EventScript_HudsonLindaDoMultiBattle
# 150 "data/maps/Route134/scripts.pory"
releaseall
# 151 "data/maps/Route134/scripts.pory"
end
# 152 "data/maps/Route134/scripts.pory"

# 153 "data/maps/Route134/scripts.pory"
Route134_EventScript_HudsonLindaDoMultiBattle::
# 154 "data/maps/Route134/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 155 "data/maps/Route134/scripts.pory"
multi_2p_vs_2 TRAINER_HUDSON, Route134_Text_HudsonDefeat, TRAINER_LINDA, Route133_Text_LindaDefeat, PARTNER_EMMIE
# 156 "data/maps/Route134/scripts.pory"
switch VAR_RESULT
# 157 "data/maps/Route134/scripts.pory"
case 1, Route134_EventScript_HudsonLindaVictory
# 158 "data/maps/Route134/scripts.pory"
fadescreen FADE_TO_BLACK
# 159 "data/maps/Route134/scripts.pory"
special SetCB2WhiteOut
# 160 "data/maps/Route134/scripts.pory"
waitstate
# 161 "data/maps/Route134/scripts.pory"

# 162 "data/maps/Route134/scripts.pory"
Route134_EventScript_HudsonLindaVictory::
# 163 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 164 "data/maps/Route134/scripts.pory"
waitmovement 0
# 165 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_HudsonPostBattle, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 167 "data/maps/Route134/scripts.pory"
waitmovement 0
# 168 "data/maps/Route134/scripts.pory"
msgbox Route133_Text_LindaPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route134/scripts.pory"
addvar VAR_ROUTE134_STATE, 1
# 170 "data/maps/Route134/scripts.pory"
end
# 171 "data/maps/Route134/scripts.pory"

# 172 "data/maps/Route134/scripts.pory"
Route134_EventScript_ReynaHitoshi::
# 173 "data/maps/Route134/scripts.pory"
lockall
# 174 "data/maps/Route134/scripts.pory"
playse SE_PIN
# 175 "data/maps/Route134/scripts.pory"
applymovement LOCALID_REYNA, Common_Movement_ExclamationMark
# 176 "data/maps/Route134/scripts.pory"
waitmovement 0
# 177 "data/maps/Route134/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 178 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 179 "data/maps/Route134/scripts.pory"
waitmovement 0
# 180 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_ReynaIntro MSGBOX_AUTOCLOSE
# 181 "data/maps/Route134/scripts.pory"
playse SE_PIN
# 182 "data/maps/Route134/scripts.pory"
applymovement  LOCALID_HITOSHI, Common_Movement_ExclamationMark
# 183 "data/maps/Route134/scripts.pory"
waitmovement 0
# 184 "data/maps/Route134/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 185 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 186 "data/maps/Route134/scripts.pory"
waitmovement 0
# 187 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_HitoshiIntro MSGBOX_AUTOCLOSE
# 188 "data/maps/Route134/scripts.pory"
goto Route134_EventScript_ReynaHitoshiDoMultiBattle
# 189 "data/maps/Route134/scripts.pory"
releaseall
# 190 "data/maps/Route134/scripts.pory"
end
# 191 "data/maps/Route134/scripts.pory"

# 192 "data/maps/Route134/scripts.pory"
Route134_EventScript_ReynaHitoshiDoMultiBattle::
# 193 "data/maps/Route134/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 194 "data/maps/Route134/scripts.pory"
multi_2p_vs_2 TRAINER_REYNA, Route134_Text_ReynaDefeat, TRAINER_HITOSHI, Route134_Text_HitoshiDefeat, PARTNER_EMMIE
# 195 "data/maps/Route134/scripts.pory"
switch VAR_RESULT
# 196 "data/maps/Route134/scripts.pory"
case 1, Route134_EventScript_ReynaHitoshiVictory
# 197 "data/maps/Route134/scripts.pory"
fadescreen FADE_TO_BLACK
# 198 "data/maps/Route134/scripts.pory"
special SetCB2WhiteOut
# 199 "data/maps/Route134/scripts.pory"
waitstate
# 200 "data/maps/Route134/scripts.pory"

# 201 "data/maps/Route134/scripts.pory"
Route134_EventScript_ReynaHitoshiVictory::
# 202 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 203 "data/maps/Route134/scripts.pory"
waitmovement 0
# 204 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_ReynaPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route134/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 206 "data/maps/Route134/scripts.pory"
waitmovement 0
# 207 "data/maps/Route134/scripts.pory"
msgbox Route134_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route134/scripts.pory"
addvar VAR_ROUTE134_STATE, 1
# 209 "data/maps/Route134/scripts.pory"
end
# 210 "data/maps/Route134/scripts.pory"

# 211 "data/maps/Route134/scripts.pory"
Route134_EventScript_Jack::
# 212 "data/maps/Route134/scripts.pory"
	faceplayer
# 213 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_JackPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route134/scripts.pory"
	end
# 215 "data/maps/Route134/scripts.pory"

# 216 "data/maps/Route134/scripts.pory"
Route134_EventScript_Laurel::
# 217 "data/maps/Route134/scripts.pory"
	faceplayer
# 218 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_LaurelPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/Route134/scripts.pory"
	end
# 220 "data/maps/Route134/scripts.pory"

# 221 "data/maps/Route134/scripts.pory"
Route134_EventScript_Alex::
# 222 "data/maps/Route134/scripts.pory"
	faceplayer
# 223 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_AlexPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/Route134/scripts.pory"
	end
# 225 "data/maps/Route134/scripts.pory"

# 226 "data/maps/Route134/scripts.pory"
Route134_EventScript_Aaron::
# 227 "data/maps/Route134/scripts.pory"
	faceplayer
# 228 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/Route134/scripts.pory"
	end
# 230 "data/maps/Route134/scripts.pory"

# 231 "data/maps/Route134/scripts.pory"
Route134_EventScript_Hitoshi::
# 232 "data/maps/Route134/scripts.pory"
	faceplayer
# 233 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/Route134/scripts.pory"
	end
# 235 "data/maps/Route134/scripts.pory"

# 236 "data/maps/Route134/scripts.pory"
Route134_EventScript_Hudson::
# 237 "data/maps/Route134/scripts.pory"
	faceplayer
# 238 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_HudsonPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route134/scripts.pory"
	end
# 240 "data/maps/Route134/scripts.pory"

# 241 "data/maps/Route134/scripts.pory"
Route134_EventScript_Reyna::
# 242 "data/maps/Route134/scripts.pory"
	faceplayer
# 243 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_ReynaPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/Route134/scripts.pory"
	end
# 245 "data/maps/Route134/scripts.pory"

# 246 "data/maps/Route134/scripts.pory"
Route134_EventScript_Marley::
# 247 "data/maps/Route134/scripts.pory"
	faceplayer
# 248 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_MarleyPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route134/scripts.pory"
	end
# 250 "data/maps/Route134/scripts.pory"

# 251 "data/maps/Route134/scripts.pory"
Route134_EventScript_Kelvin::
# 252 "data/maps/Route134/scripts.pory"
	faceplayer
# 253 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_KelvinPostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route134/scripts.pory"
	end

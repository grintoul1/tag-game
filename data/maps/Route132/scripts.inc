# 1 "data/maps/Route132/scripts.pory"

# 2 "data/maps/Route132/scripts.pory"
Route132_MapScripts::
# 3 "data/maps/Route132/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route132_OnTransition
# 4 "data/maps/Route132/scripts.pory"
	.byte 0
# 5 "data/maps/Route132/scripts.pory"

# 6 "data/maps/Route132/scripts.pory"
Route132_OnTransition:
# 7 "data/maps/Route132/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 8 "data/maps/Route132/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 9 "data/maps/Route132/scripts.pory"
	end
# 10 "data/maps/Route132/scripts.pory"

# 11 "data/maps/Route132/scripts.pory"
Route132_EventScript_GilbertDana::
# 12 "data/maps/Route132/scripts.pory"
lockall
# 13 "data/maps/Route132/scripts.pory"
playse SE_PIN
# 14 "data/maps/Route132/scripts.pory"
applymovement LOCALID_GILBERT, Common_Movement_ExclamationMark
# 15 "data/maps/Route132/scripts.pory"
waitmovement 0
# 16 "data/maps/Route132/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 17 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 18 "data/maps/Route132/scripts.pory"
waitmovement 0
# 19 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_GilbertIntro MSGBOX_AUTOCLOSE
# 20 "data/maps/Route132/scripts.pory"
playse SE_PIN
# 21 "data/maps/Route132/scripts.pory"
applymovement  LOCALID_DANA, Common_Movement_ExclamationMark
# 22 "data/maps/Route132/scripts.pory"
waitmovement 0
# 23 "data/maps/Route132/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 24 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 25 "data/maps/Route132/scripts.pory"
waitmovement 0
# 26 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_DanaIntro MSGBOX_AUTOCLOSE
# 27 "data/maps/Route132/scripts.pory"
goto Route132_EventScript_GilbertDanaDoMultiBattle
# 28 "data/maps/Route132/scripts.pory"
releaseall
# 29 "data/maps/Route132/scripts.pory"
end
# 30 "data/maps/Route132/scripts.pory"

# 31 "data/maps/Route132/scripts.pory"
Route132_EventScript_GilbertDanaDoMultiBattle::
# 32 "data/maps/Route132/scripts.pory"
playbgm MUS_SURF, TRUE
# 33 "data/maps/Route132/scripts.pory"
multi_2p_vs_2 TRAINER_GILBERT, Route132_Text_GilbertDefeat, TRAINER_DANA, Route132_Text_DanaDefeat, PARTNER_EMMIE
# 34 "data/maps/Route132/scripts.pory"
switch VAR_RESULT
# 35 "data/maps/Route132/scripts.pory"
case 1, Route132_EventScript_GilbertDanaVictory
# 36 "data/maps/Route132/scripts.pory"
fadescreen FADE_TO_BLACK
# 37 "data/maps/Route132/scripts.pory"
special SetCB2WhiteOut
# 38 "data/maps/Route132/scripts.pory"
waitstate
# 39 "data/maps/Route132/scripts.pory"

# 40 "data/maps/Route132/scripts.pory"
Route132_EventScript_GilbertDanaVictory::
# 41 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/Route132/scripts.pory"
waitmovement 0
# 43 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 45 "data/maps/Route132/scripts.pory"
waitmovement 0
# 46 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route132/scripts.pory"
addvar VAR_ROUTE134_STATE, 1
# 48 "data/maps/Route132/scripts.pory"
end
# 49 "data/maps/Route132/scripts.pory"

# 50 "data/maps/Route132/scripts.pory"
Route132_EventScript_PaxtonMakayla::
# 51 "data/maps/Route132/scripts.pory"
lockall
# 52 "data/maps/Route132/scripts.pory"
playse SE_PIN
# 53 "data/maps/Route132/scripts.pory"
applymovement LOCALID_PAXTON, Common_Movement_ExclamationMark
# 54 "data/maps/Route132/scripts.pory"
waitmovement 0
# 55 "data/maps/Route132/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 56 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/Route132/scripts.pory"
waitmovement 0
# 58 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_PaxtonIntro MSGBOX_AUTOCLOSE
# 59 "data/maps/Route132/scripts.pory"
playse SE_PIN
# 60 "data/maps/Route132/scripts.pory"
applymovement  LOCALID_MAKAYLA, Common_Movement_ExclamationMark
# 61 "data/maps/Route132/scripts.pory"
waitmovement 0
# 62 "data/maps/Route132/scripts.pory"
playbgm MUS_ENCOUNTER_FEMALE, TRUE
# 63 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 64 "data/maps/Route132/scripts.pory"
waitmovement 0
# 65 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_MakaylaIntro MSGBOX_AUTOCLOSE
# 66 "data/maps/Route132/scripts.pory"
goto Route132_EventScript_PaxtonMakaylaDoMultiBattle
# 67 "data/maps/Route132/scripts.pory"
releaseall
# 68 "data/maps/Route132/scripts.pory"
end
# 69 "data/maps/Route132/scripts.pory"

# 70 "data/maps/Route132/scripts.pory"
Route132_EventScript_PaxtonMakaylaDoMultiBattle::
# 71 "data/maps/Route132/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 72 "data/maps/Route132/scripts.pory"
multi_2p_vs_2 TRAINER_PAXTON, Route132_Text_PaxtonDefeat, TRAINER_MAKAYLA, Route132_Text_MakaylaDefeat, PARTNER_EMMIE
# 73 "data/maps/Route132/scripts.pory"
switch VAR_RESULT
# 74 "data/maps/Route132/scripts.pory"
case 1, Route132_EventScript_PaxtonMakaylaVictory
# 75 "data/maps/Route132/scripts.pory"
fadescreen FADE_TO_BLACK
# 76 "data/maps/Route132/scripts.pory"
special SetCB2WhiteOut
# 77 "data/maps/Route132/scripts.pory"
waitstate
# 78 "data/maps/Route132/scripts.pory"

# 79 "data/maps/Route132/scripts.pory"
Route132_EventScript_PaxtonMakaylaVictory::
# 80 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 81 "data/maps/Route132/scripts.pory"
waitmovement 0
# 82 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_PaxtonPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 84 "data/maps/Route132/scripts.pory"
waitmovement 0
# 85 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_MakaylaPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route132/scripts.pory"
addvar VAR_ROUTE134_STATE, 1
# 87 "data/maps/Route132/scripts.pory"
end
# 88 "data/maps/Route132/scripts.pory"

# 89 "data/maps/Route132/scripts.pory"
Route132_EventScript_RonaldKiyo::
# 90 "data/maps/Route132/scripts.pory"
lockall
# 91 "data/maps/Route132/scripts.pory"
playse SE_PIN
# 92 "data/maps/Route132/scripts.pory"
applymovement LOCALID_RONALD, Common_Movement_ExclamationMark
# 93 "data/maps/Route132/scripts.pory"
waitmovement 0
# 94 "data/maps/Route132/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 95 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 96 "data/maps/Route132/scripts.pory"
waitmovement 0
# 97 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_RonaldIntro MSGBOX_AUTOCLOSE
# 98 "data/maps/Route132/scripts.pory"
playse SE_PIN
# 99 "data/maps/Route132/scripts.pory"
applymovement  LOCALID_KIYO, Common_Movement_ExclamationMark
# 100 "data/maps/Route132/scripts.pory"
waitmovement 0
# 101 "data/maps/Route132/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 102 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 103 "data/maps/Route132/scripts.pory"
waitmovement 0
# 104 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_KiyoIntro MSGBOX_AUTOCLOSE
# 105 "data/maps/Route132/scripts.pory"
goto Route132_EventScript_RonaldKiyoDoMultiBattle
# 106 "data/maps/Route132/scripts.pory"
releaseall
# 107 "data/maps/Route132/scripts.pory"
end
# 108 "data/maps/Route132/scripts.pory"

# 109 "data/maps/Route132/scripts.pory"
Route132_EventScript_RonaldKiyoDoMultiBattle::
# 110 "data/maps/Route132/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 111 "data/maps/Route132/scripts.pory"
multi_2p_vs_2 TRAINER_RONALD, Route132_Text_RonaldDefeat, TRAINER_KIYO, Route132_Text_KiyoDefeat, PARTNER_EMMIE
# 112 "data/maps/Route132/scripts.pory"
switch VAR_RESULT
# 113 "data/maps/Route132/scripts.pory"
case 1, Route132_EventScript_RonaldKiyoVictory
# 114 "data/maps/Route132/scripts.pory"
fadescreen FADE_TO_BLACK
# 115 "data/maps/Route132/scripts.pory"
special SetCB2WhiteOut
# 116 "data/maps/Route132/scripts.pory"
waitstate
# 117 "data/maps/Route132/scripts.pory"

# 118 "data/maps/Route132/scripts.pory"
Route132_EventScript_RonaldKiyoVictory::
# 119 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 120 "data/maps/Route132/scripts.pory"
waitmovement 0
# 121 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_RonaldPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 123 "data/maps/Route132/scripts.pory"
waitmovement 0
# 124 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route132/scripts.pory"
addvar VAR_ROUTE132_STATE, 1
# 126 "data/maps/Route132/scripts.pory"
end
# 127 "data/maps/Route132/scripts.pory"

# 128 "data/maps/Route132/scripts.pory"
Route132_EventScript_JonathanDarcy::
# 129 "data/maps/Route132/scripts.pory"
lockall
# 130 "data/maps/Route132/scripts.pory"
playse SE_PIN
# 131 "data/maps/Route132/scripts.pory"
applymovement LOCALID_JONATHAN, Common_Movement_ExclamationMark
# 132 "data/maps/Route132/scripts.pory"
waitmovement 0
# 133 "data/maps/Route132/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 134 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 135 "data/maps/Route132/scripts.pory"
waitmovement 0
# 136 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_JonathanIntro MSGBOX_AUTOCLOSE
# 137 "data/maps/Route132/scripts.pory"
playse SE_PIN
# 138 "data/maps/Route132/scripts.pory"
applymovement  LOCALID_DARCY, Common_Movement_ExclamationMark
# 139 "data/maps/Route132/scripts.pory"
waitmovement 0
# 140 "data/maps/Route132/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 141 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 142 "data/maps/Route132/scripts.pory"
waitmovement 0
# 143 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_DarcyIntro MSGBOX_AUTOCLOSE
# 144 "data/maps/Route132/scripts.pory"
goto Route132_EventScript_JonathanDarcyDoMultiBattle
# 145 "data/maps/Route132/scripts.pory"
releaseall
# 146 "data/maps/Route132/scripts.pory"
end
# 147 "data/maps/Route132/scripts.pory"

# 148 "data/maps/Route132/scripts.pory"
Route132_EventScript_JonathanDarcyDoMultiBattle::
# 149 "data/maps/Route132/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 150 "data/maps/Route132/scripts.pory"
multi_2p_vs_2 TRAINER_JONATHAN, Route132_Text_JonathanDefeat, TRAINER_DARCY, Route132_Text_DarcyDefeat, PARTNER_EMMIE
# 151 "data/maps/Route132/scripts.pory"
switch VAR_RESULT
# 152 "data/maps/Route132/scripts.pory"
case 1, Route132_EventScript_JonathanDarcyVictory
# 153 "data/maps/Route132/scripts.pory"
fadescreen FADE_TO_BLACK
# 154 "data/maps/Route132/scripts.pory"
special SetCB2WhiteOut
# 155 "data/maps/Route132/scripts.pory"
waitstate
# 156 "data/maps/Route132/scripts.pory"

# 157 "data/maps/Route132/scripts.pory"
Route132_EventScript_JonathanDarcyVictory::
# 158 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 159 "data/maps/Route132/scripts.pory"
waitmovement 0
# 160 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_JonathanPostBattle, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route132/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 162 "data/maps/Route132/scripts.pory"
waitmovement 0
# 163 "data/maps/Route132/scripts.pory"
msgbox Route132_Text_DarcyPostBattle, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route132/scripts.pory"
addvar VAR_ROUTE132_STATE, 1
# 165 "data/maps/Route132/scripts.pory"
end
# 166 "data/maps/Route132/scripts.pory"

# 167 "data/maps/Route132/scripts.pory"
Route132_EventScript_Gilbert::
# 168 "data/maps/Route132/scripts.pory"
	faceplayer
# 169 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route132/scripts.pory"
	end
# 171 "data/maps/Route132/scripts.pory"

# 172 "data/maps/Route132/scripts.pory"
Route132_EventScript_Dana::
# 173 "data/maps/Route132/scripts.pory"
	faceplayer
# 174 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
# 175 "data/maps/Route132/scripts.pory"
	end
# 176 "data/maps/Route132/scripts.pory"

# 177 "data/maps/Route132/scripts.pory"
Route132_EventScript_Ronald::
# 178 "data/maps/Route132/scripts.pory"
	faceplayer
# 179 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_RonaldPostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/Route132/scripts.pory"
	end
# 181 "data/maps/Route132/scripts.pory"

# 182 "data/maps/Route132/scripts.pory"
Route132_EventScript_Kiyo::
# 183 "data/maps/Route132/scripts.pory"
	faceplayer
# 184 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
# 185 "data/maps/Route132/scripts.pory"
	end
# 186 "data/maps/Route132/scripts.pory"

# 187 "data/maps/Route132/scripts.pory"
Route132_EventScript_Paxton::
# 188 "data/maps/Route132/scripts.pory"
	faceplayer
# 189 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_PaxtonPostBattle, MSGBOX_AUTOCLOSE
# 190 "data/maps/Route132/scripts.pory"
	end
# 191 "data/maps/Route132/scripts.pory"

# 192 "data/maps/Route132/scripts.pory"
Route132_EventScript_Darcy::
# 193 "data/maps/Route132/scripts.pory"
	faceplayer
# 194 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_DarcyPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route132/scripts.pory"
	end
# 196 "data/maps/Route132/scripts.pory"

# 197 "data/maps/Route132/scripts.pory"
Route132_EventScript_Jonathan::
# 198 "data/maps/Route132/scripts.pory"
	faceplayer
# 199 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_JonathanPostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route132/scripts.pory"
	end
# 201 "data/maps/Route132/scripts.pory"

# 202 "data/maps/Route132/scripts.pory"
Route132_EventScript_Makayla::
# 203 "data/maps/Route132/scripts.pory"
	faceplayer
# 204 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_MakaylaPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route132/scripts.pory"
	end

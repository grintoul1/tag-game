# 1 "data/maps/Route124/scripts.pory"

# 2 "data/maps/Route124/scripts.pory"
	.set LOCALID_GRACE, 4
# 3 "data/maps/Route124/scripts.pory"
	.set LOCALID_DECLAN, 11
# 4 "data/maps/Route124/scripts.pory"
	.set LOCALID_LILA, 9
# 5 "data/maps/Route124/scripts.pory"
	.set LOCALID_ROY, 10
# 6 "data/maps/Route124/scripts.pory"
	.set LOCALID_CHAD, 5
# 7 "data/maps/Route124/scripts.pory"
	.set LOCALID_JENNY, 3
# 8 "data/maps/Route124/scripts.pory"
	.set LOCALID_ISABELLA, 12
# 9 "data/maps/Route124/scripts.pory"
	.set LOCALID_ROLAND, 2
# 10 "data/maps/Route124/scripts.pory"

# 11 "data/maps/Route124/scripts.pory"
Route124_MapScripts::
# 12 "data/maps/Route124/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_OnTransition
# 13 "data/maps/Route124/scripts.pory"
	.byte 0
# 14 "data/maps/Route124/scripts.pory"

# 15 "data/maps/Route124/scripts.pory"
Route124_OnTransition:
# 16 "data/maps/Route124/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 17 "data/maps/Route124/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 18 "data/maps/Route124/scripts.pory"
	end
# 19 "data/maps/Route124/scripts.pory"

# 20 "data/maps/Route124/scripts.pory"
Route124_EventScript_HuntersHouseSign::
# 21 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_HuntersHouse, MSGBOX_SIGN
# 22 "data/maps/Route124/scripts.pory"
	end
# 23 "data/maps/Route124/scripts.pory"

# 24 "data/maps/Route124/scripts.pory"
Route124_EventScript_Spencer::
# 25 "data/maps/Route124/scripts.pory"
	faceplayer
# 26 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route124/scripts.pory"
	end
# 28 "data/maps/Route124/scripts.pory"

# 29 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roland::
# 30 "data/maps/Route124/scripts.pory"
	faceplayer
# 31 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route124/scripts.pory"
	end
# 33 "data/maps/Route124/scripts.pory"

# 34 "data/maps/Route124/scripts.pory"
Route124_EventScript_Jenny::
# 35 "data/maps/Route124/scripts.pory"
	faceplayer
# 36 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostBattle, MSGBOX_DEFAULT
# 37 "data/maps/Route124/scripts.pory"
	release
# 38 "data/maps/Route124/scripts.pory"
	end
# 39 "data/maps/Route124/scripts.pory"

# 40 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterJenny::
# 41 "data/maps/Route124/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 42 "data/maps/Route124/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyRegister, MSGBOX_DEFAULT
# 44 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_JENNY_1
# 45 "data/maps/Route124/scripts.pory"
	release
# 46 "data/maps/Route124/scripts.pory"
	end
# 47 "data/maps/Route124/scripts.pory"

# 48 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchJenny::
# 49 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch TRAINER_JENNY_1, Route124_Text_JennyRematchIntro, Route124_Text_JennyRematchDefeat
# 50 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostRematch, MSGBOX_AUTOCLOSE
# 51 "data/maps/Route124/scripts.pory"
	end
# 52 "data/maps/Route124/scripts.pory"

# 53 "data/maps/Route124/scripts.pory"
Route124_EventScript_GraceDeclan::
# 54 "data/maps/Route124/scripts.pory"
lockall
# 55 "data/maps/Route124/scripts.pory"
playse SE_PIN
# 56 "data/maps/Route124/scripts.pory"
applymovement LOCALID_GRACE, Common_Movement_ExclamationMark
# 57 "data/maps/Route124/scripts.pory"
waitmovement 0
# 58 "data/maps/Route124/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 59 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/Route124/scripts.pory"
waitmovement 0
# 61 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_GraceIntro MSGBOX_AUTOCLOSE
# 62 "data/maps/Route124/scripts.pory"
playse SE_PIN
# 63 "data/maps/Route124/scripts.pory"
applymovement  LOCALID_DECLAN, Common_Movement_ExclamationMark
# 64 "data/maps/Route124/scripts.pory"
waitmovement 0
# 65 "data/maps/Route124/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 66 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 67 "data/maps/Route124/scripts.pory"
waitmovement 0
# 68 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_DeclanIntro MSGBOX_AUTOCLOSE
# 69 "data/maps/Route124/scripts.pory"
goto Route124_EventScript_GraceDeclanDoMultiBattle
# 70 "data/maps/Route124/scripts.pory"
releaseall
# 71 "data/maps/Route124/scripts.pory"
end
# 72 "data/maps/Route124/scripts.pory"

# 73 "data/maps/Route124/scripts.pory"
Route124_EventScript_GraceDeclanDoMultiBattle::
# 74 "data/maps/Route124/scripts.pory"
playbgm MUS_SURF, TRUE
# 75 "data/maps/Route124/scripts.pory"
multi_2p_vs_2 TRAINER_GRACE, Route124_Text_GraceDefeat, TRAINER_DECLAN, Route124_Text_DeclanDefeat, PARTNER_EMMIE
# 76 "data/maps/Route124/scripts.pory"
switch VAR_RESULT
# 77 "data/maps/Route124/scripts.pory"
case 1, Route124_EventScript_GraceDeclanVictory
# 78 "data/maps/Route124/scripts.pory"
fadescreen FADE_TO_BLACK
# 79 "data/maps/Route124/scripts.pory"
special SetCB2WhiteOut
# 80 "data/maps/Route124/scripts.pory"
waitstate
# 81 "data/maps/Route124/scripts.pory"

# 82 "data/maps/Route124/scripts.pory"
Route124_EventScript_GraceDeclanVictory::
# 83 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 84 "data/maps/Route124/scripts.pory"
waitmovement 0
# 85 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/Route124/scripts.pory"
waitmovement 0
# 88 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route124/scripts.pory"
addvar VAR_ROUTE124_STATE, 1
# 90 "data/maps/Route124/scripts.pory"
end
# 91 "data/maps/Route124/scripts.pory"

# 92 "data/maps/Route124/scripts.pory"
Route124_EventScript_Grace::
# 93 "data/maps/Route124/scripts.pory"
	faceplayer
# 94 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route124/scripts.pory"
	end
# 96 "data/maps/Route124/scripts.pory"

# 97 "data/maps/Route124/scripts.pory"
Route124_EventScript_Chad::
# 98 "data/maps/Route124/scripts.pory"
	faceplayer
# 99 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route124/scripts.pory"
	end
# 101 "data/maps/Route124/scripts.pory"

# 102 "data/maps/Route124/scripts.pory"
Route124_EventScript_ChadJenny::
# 103 "data/maps/Route124/scripts.pory"
lockall
# 104 "data/maps/Route124/scripts.pory"
playse SE_PIN
# 105 "data/maps/Route124/scripts.pory"
applymovement LOCALID_CHAD, Common_Movement_ExclamationMark
# 106 "data/maps/Route124/scripts.pory"
waitmovement 0
# 107 "data/maps/Route124/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 108 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 109 "data/maps/Route124/scripts.pory"
waitmovement 0
# 110 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_ChadIntro MSGBOX_AUTOCLOSE
# 111 "data/maps/Route124/scripts.pory"
playse SE_PIN
# 112 "data/maps/Route124/scripts.pory"
applymovement  LOCALID_JENNY, Common_Movement_ExclamationMark
# 113 "data/maps/Route124/scripts.pory"
waitmovement 0
# 114 "data/maps/Route124/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 115 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 116 "data/maps/Route124/scripts.pory"
waitmovement 0
# 117 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_JennyIntro MSGBOX_AUTOCLOSE
# 118 "data/maps/Route124/scripts.pory"
goto Route124_EventScript_ChadJennyDoMultiBattle
# 119 "data/maps/Route124/scripts.pory"
releaseall
# 120 "data/maps/Route124/scripts.pory"
end
# 121 "data/maps/Route124/scripts.pory"

# 122 "data/maps/Route124/scripts.pory"
Route124_EventScript_ChadJennyDoMultiBattle::
# 123 "data/maps/Route124/scripts.pory"
playbgm MUS_SURF, TRUE
# 124 "data/maps/Route124/scripts.pory"
multi_2p_vs_2 TRAINER_CHAD, Route124_Text_ChadDefeat, TRAINER_JENNY_1, Route124_Text_JennyDefeat, PARTNER_EMMIE
# 125 "data/maps/Route124/scripts.pory"
switch VAR_RESULT
# 126 "data/maps/Route124/scripts.pory"
case 1, Route124_EventScript_ChadJennyVictory
# 127 "data/maps/Route124/scripts.pory"
fadescreen FADE_TO_BLACK
# 128 "data/maps/Route124/scripts.pory"
special SetCB2WhiteOut
# 129 "data/maps/Route124/scripts.pory"
waitstate
# 130 "data/maps/Route124/scripts.pory"

# 131 "data/maps/Route124/scripts.pory"
Route124_EventScript_ChadJennyVictory::
# 132 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 133 "data/maps/Route124/scripts.pory"
waitmovement 0
# 134 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 136 "data/maps/Route124/scripts.pory"
waitmovement 0
# 137 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_JennyPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route124/scripts.pory"
addvar VAR_ROUTE124_STATE, 1
# 139 "data/maps/Route124/scripts.pory"
end
# 140 "data/maps/Route124/scripts.pory"

# 141 "data/maps/Route124/scripts.pory"
Route124_EventScript_LilaRoy::
# 142 "data/maps/Route124/scripts.pory"
lockall
# 143 "data/maps/Route124/scripts.pory"
playse SE_PIN
# 144 "data/maps/Route124/scripts.pory"
applymovement LOCALID_LILA, Common_Movement_ExclamationMark
# 145 "data/maps/Route124/scripts.pory"
waitmovement 0
# 146 "data/maps/Route124/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 147 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 148 "data/maps/Route124/scripts.pory"
waitmovement 0
# 149 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_LilaIntro MSGBOX_AUTOCLOSE
# 150 "data/maps/Route124/scripts.pory"
goto Route124_EventScript_LilaRoyDoMultiBattle
# 151 "data/maps/Route124/scripts.pory"
releaseall
# 152 "data/maps/Route124/scripts.pory"
end
# 153 "data/maps/Route124/scripts.pory"

# 154 "data/maps/Route124/scripts.pory"
Route124_EventScript_LilaRoyDoMultiBattle::
# 155 "data/maps/Route124/scripts.pory"
playbgm MUS_SURF, TRUE
# 156 "data/maps/Route124/scripts.pory"
multi_2p_vs_1 TRAINER_LILA_AND_ROY_1, Route124_Text_LilaDefeat, PARTNER_EMMIE
# 157 "data/maps/Route124/scripts.pory"
switch VAR_RESULT
# 158 "data/maps/Route124/scripts.pory"
case 1, Route124_EventScript_LilaRoyVictory
# 159 "data/maps/Route124/scripts.pory"
fadescreen FADE_TO_BLACK
# 160 "data/maps/Route124/scripts.pory"
special SetCB2WhiteOut
# 161 "data/maps/Route124/scripts.pory"
waitstate
# 162 "data/maps/Route124/scripts.pory"

# 163 "data/maps/Route124/scripts.pory"
Route124_EventScript_LilaRoyVictory::
# 164 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 165 "data/maps/Route124/scripts.pory"
waitmovement 0
# 166 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_LilaPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route124/scripts.pory"
addvar VAR_ROUTE124_STATE, 1
# 168 "data/maps/Route124/scripts.pory"
end
# 169 "data/maps/Route124/scripts.pory"

# 170 "data/maps/Route124/scripts.pory"
Route124_EventScript_Lila::
# 171 "data/maps/Route124/scripts.pory"
	faceplayer
# 172 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostBattle, MSGBOX_DEFAULT
# 173 "data/maps/Route124/scripts.pory"
	release
# 174 "data/maps/Route124/scripts.pory"
	end
# 175 "data/maps/Route124/scripts.pory"

# 176 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterLila::
# 177 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 178 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 179 "data/maps/Route124/scripts.pory"
	release
# 180 "data/maps/Route124/scripts.pory"
	end
# 181 "data/maps/Route124/scripts.pory"

# 182 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchLila::
# 183 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaRematchIntro, Route124_Text_LilaRematchDefeat, Route124_Text_LilaRematchNotEnoughMons
# 184 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostRematch, MSGBOX_AUTOCLOSE
# 185 "data/maps/Route124/scripts.pory"
	end
# 186 "data/maps/Route124/scripts.pory"

# 187 "data/maps/Route124/scripts.pory"
Route124_EventScript_Roy::
# 188 "data/maps/Route124/scripts.pory"
	faceplayer
# 189 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostBattle, MSGBOX_DEFAULT
# 190 "data/maps/Route124/scripts.pory"
	release
# 191 "data/maps/Route124/scripts.pory"
	end
# 192 "data/maps/Route124/scripts.pory"

# 193 "data/maps/Route124/scripts.pory"
Route124_EventScript_RegisterRoy::
# 194 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 195 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 196 "data/maps/Route124/scripts.pory"
	release
# 197 "data/maps/Route124/scripts.pory"
	end
# 198 "data/maps/Route124/scripts.pory"

# 199 "data/maps/Route124/scripts.pory"
Route124_EventScript_RematchRoy::
# 200 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyRematchIntro, Route124_Text_RoyRematchDefeat, Route124_Text_RoyRematchNotEnoughMons
# 201 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostRematch, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route124/scripts.pory"
	end
# 203 "data/maps/Route124/scripts.pory"

# 204 "data/maps/Route124/scripts.pory"
Route124_EventScript_Declan::
# 205 "data/maps/Route124/scripts.pory"
	faceplayer
# 206 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route124/scripts.pory"
	end
# 208 "data/maps/Route124/scripts.pory"

# 209 "data/maps/Route124/scripts.pory"
Route124_EventScript_IsabellaRoland::
# 210 "data/maps/Route124/scripts.pory"
lockall
# 211 "data/maps/Route124/scripts.pory"
playse SE_PIN
# 212 "data/maps/Route124/scripts.pory"
applymovement  LOCALID_ISABELLA, Common_Movement_ExclamationMark
# 213 "data/maps/Route124/scripts.pory"
waitmovement 0
# 214 "data/maps/Route124/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 215 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 216 "data/maps/Route124/scripts.pory"
waitmovement 0
# 217 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_IsabellaIntro MSGBOX_AUTOCLOSE
# 218 "data/maps/Route124/scripts.pory"
playse SE_PIN
# 219 "data/maps/Route124/scripts.pory"
applymovement  LOCALID_ROLAND, Common_Movement_ExclamationMark
# 220 "data/maps/Route124/scripts.pory"
waitmovement 0
# 221 "data/maps/Route124/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 222 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 223 "data/maps/Route124/scripts.pory"
waitmovement 0
# 224 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_RolandIntro MSGBOX_AUTOCLOSE
# 225 "data/maps/Route124/scripts.pory"
goto Route124_EventScript_IsabellaRolandDoMultiBattle
# 226 "data/maps/Route124/scripts.pory"
releaseall
# 227 "data/maps/Route124/scripts.pory"
end
# 228 "data/maps/Route124/scripts.pory"

# 229 "data/maps/Route124/scripts.pory"
Route124_EventScript_IsabellaRolandDoMultiBattle::
# 230 "data/maps/Route124/scripts.pory"
playbgm MUS_SURF, TRUE
# 231 "data/maps/Route124/scripts.pory"
multi_2p_vs_2 TRAINER_ISABELLA, Route124_Text_IsabellaDefeat, TRAINER_ROLAND, Route124_Text_RolandDefeat, PARTNER_EMMIE
# 232 "data/maps/Route124/scripts.pory"
switch VAR_RESULT
# 233 "data/maps/Route124/scripts.pory"
case 1, Route124_EventScript_IsabellaRolandVictory
# 234 "data/maps/Route124/scripts.pory"
fadescreen FADE_TO_BLACK
# 235 "data/maps/Route124/scripts.pory"
special SetCB2WhiteOut
# 236 "data/maps/Route124/scripts.pory"
waitstate
# 237 "data/maps/Route124/scripts.pory"

# 238 "data/maps/Route124/scripts.pory"
Route124_EventScript_IsabellaRolandVictory::
# 239 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 240 "data/maps/Route124/scripts.pory"
waitmovement 0
# 241 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
# 242 "data/maps/Route124/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 243 "data/maps/Route124/scripts.pory"
waitmovement 0
# 244 "data/maps/Route124/scripts.pory"
msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/Route124/scripts.pory"
addvar VAR_ROUTE124_STATE, 1
# 246 "data/maps/Route124/scripts.pory"
end
# 247 "data/maps/Route124/scripts.pory"

# 248 "data/maps/Route124/scripts.pory"
Route124_EventScript_Isabella::
# 249 "data/maps/Route124/scripts.pory"
	faceplayer
# 250 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route124/scripts.pory"
	end
# 252 "data/maps/Route124/scripts.pory"

# 253 "data/maps/Route124/scripts.pory"
Route124_Text_HuntersHouse:
# 254 "data/maps/Route124/scripts.pory"
	.string "HUNTER'S HOUSE$"

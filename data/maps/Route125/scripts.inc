# 1 "data/maps/Route125/scripts.pory"

# 2 "data/maps/Route125/scripts.pory"
.set LOCALID_KIM, 6
# 3 "data/maps/Route125/scripts.pory"
.set LOCALID_IRIS, 7
# 4 "data/maps/Route125/scripts.pory"
.set LOCALID_ERNEST, 5
# 5 "data/maps/Route125/scripts.pory"
.set LOCALID_PRESLEY, 8
# 6 "data/maps/Route125/scripts.pory"
.set LOCALID_AURON, 9
# 7 "data/maps/Route125/scripts.pory"
.set LOCALID_TANYA, 3
# 8 "data/maps/Route125/scripts.pory"
.set LOCALID_STAN, 2
# 9 "data/maps/Route125/scripts.pory"
.set LOCALID_NOLEN, 1
# 10 "data/maps/Route125/scripts.pory"
.set LOCALID_SHARON, 4
# 11 "data/maps/Route125/scripts.pory"

# 12 "data/maps/Route125/scripts.pory"
Route125_MapScripts::
# 13 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route125_OnTransition
# 14 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route125_OnLoad
# 15 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route125_OnFrame
# 16 "data/maps/Route125/scripts.pory"
	.byte 0
# 17 "data/maps/Route125/scripts.pory"

# 18 "data/maps/Route125/scripts.pory"
Route125_OnTransition:
# 19 "data/maps/Route125/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 20 "data/maps/Route125/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 21 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 22 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_StartKyogreWeather
# 23 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_StartKyogreWeather
# 24 "data/maps/Route125/scripts.pory"
	end
# 25 "data/maps/Route125/scripts.pory"

# 26 "data/maps/Route125/scripts.pory"
Route125_OnLoad:
# 27 "data/maps/Route125/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 28 "data/maps/Route125/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 29 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST, AbnormalWeather_EventScript_PlaceTilesRoute125West
# 30 "data/maps/Route125/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST, AbnormalWeather_EventScript_PlaceTilesRoute125East
# 31 "data/maps/Route125/scripts.pory"
	end
# 32 "data/maps/Route125/scripts.pory"

# 33 "data/maps/Route125/scripts.pory"
Route125_OnFrame:
# 34 "data/maps/Route125/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 35 "data/maps/Route125/scripts.pory"
	.2byte 0
# 36 "data/maps/Route125/scripts.pory"

# 37 "data/maps/Route125/scripts.pory"
Route125_EventScript_SharonNolen::
# 38 "data/maps/Route125/scripts.pory"
lockall
# 39 "data/maps/Route125/scripts.pory"
playse SE_PIN
# 40 "data/maps/Route125/scripts.pory"
applymovement LOCALID_SHARON, Common_Movement_ExclamationMark
# 41 "data/maps/Route125/scripts.pory"
waitmovement 0
# 42 "data/maps/Route125/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 43 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 44 "data/maps/Route125/scripts.pory"
waitmovement 0
# 45 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_SharonIntro MSGBOX_AUTOCLOSE
# 46 "data/maps/Route125/scripts.pory"
playse SE_PIN
# 47 "data/maps/Route125/scripts.pory"
applymovement  LOCALID_NOLEN, Common_Movement_ExclamationMark
# 48 "data/maps/Route125/scripts.pory"
waitmovement 0
# 49 "data/maps/Route125/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 50 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 51 "data/maps/Route125/scripts.pory"
waitmovement 0
# 52 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_NolenIntro MSGBOX_AUTOCLOSE
# 53 "data/maps/Route125/scripts.pory"
goto Route125_EventScript_SharonNolenDoMultiBattle
# 54 "data/maps/Route125/scripts.pory"
releaseall
# 55 "data/maps/Route125/scripts.pory"
end
# 56 "data/maps/Route125/scripts.pory"

# 57 "data/maps/Route125/scripts.pory"
Route125_EventScript_SharonNolenDoMultiBattle::
# 58 "data/maps/Route125/scripts.pory"
playbgm MUS_SURF, TRUE
# 59 "data/maps/Route125/scripts.pory"
multi_2p_vs_2 TRAINER_SHARON, Route125_Text_SharonDefeat, TRAINER_NOLEN, Route125_Text_NolenDefeat, PARTNER_EMMIE
# 60 "data/maps/Route125/scripts.pory"
switch VAR_RESULT
# 61 "data/maps/Route125/scripts.pory"
case 1, Route125_EventScript_SharonNolenVictory
# 62 "data/maps/Route125/scripts.pory"
fadescreen FADE_TO_BLACK
# 63 "data/maps/Route125/scripts.pory"
special SetCB2WhiteOut
# 64 "data/maps/Route125/scripts.pory"
waitstate
# 65 "data/maps/Route125/scripts.pory"

# 66 "data/maps/Route125/scripts.pory"
Route125_EventScript_SharonNolenVictory::
# 67 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 68 "data/maps/Route125/scripts.pory"
waitmovement 0
# 69 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 71 "data/maps/Route125/scripts.pory"
waitmovement 0
# 72 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route125/scripts.pory"
addvar VAR_ROUTE125_STATE, 1
# 74 "data/maps/Route125/scripts.pory"
end
# 75 "data/maps/Route125/scripts.pory"

# 76 "data/maps/Route125/scripts.pory"
Route125_EventScript_Nolen::
# 77 "data/maps/Route125/scripts.pory"
	faceplayer
# 78 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route125/scripts.pory"
	end
# 80 "data/maps/Route125/scripts.pory"

# 81 "data/maps/Route125/scripts.pory"
Route125_EventScript_TanyaStan::
# 82 "data/maps/Route125/scripts.pory"
lockall
# 83 "data/maps/Route125/scripts.pory"
playse SE_PIN
# 84 "data/maps/Route125/scripts.pory"
applymovement LOCALID_TANYA, Common_Movement_ExclamationMark
# 85 "data/maps/Route125/scripts.pory"
waitmovement 0
# 86 "data/maps/Route125/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 87 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 88 "data/maps/Route125/scripts.pory"
waitmovement 0
# 89 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_TanyaIntro MSGBOX_AUTOCLOSE
# 90 "data/maps/Route125/scripts.pory"
playse SE_PIN
# 91 "data/maps/Route125/scripts.pory"
applymovement  LOCALID_STAN, Common_Movement_ExclamationMark
# 92 "data/maps/Route125/scripts.pory"
waitmovement 0
# 93 "data/maps/Route125/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 94 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 95 "data/maps/Route125/scripts.pory"
waitmovement 0
# 96 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_StanIntro MSGBOX_AUTOCLOSE
# 97 "data/maps/Route125/scripts.pory"
goto Route125_EventScript_TanyaStanDoMultiBattle
# 98 "data/maps/Route125/scripts.pory"
releaseall
# 99 "data/maps/Route125/scripts.pory"
end
# 100 "data/maps/Route125/scripts.pory"

# 101 "data/maps/Route125/scripts.pory"
Route125_EventScript_TanyaStanDoMultiBattle::
# 102 "data/maps/Route125/scripts.pory"
playbgm MUS_SURF, TRUE
# 103 "data/maps/Route125/scripts.pory"
multi_2p_vs_2 TRAINER_TANYA, Route125_Text_TanyaDefeat, TRAINER_STAN, Route125_Text_StanDefeat, PARTNER_EMMIE
# 104 "data/maps/Route125/scripts.pory"
switch VAR_RESULT
# 105 "data/maps/Route125/scripts.pory"
case 1, Route125_EventScript_TanyaStanVictory
# 106 "data/maps/Route125/scripts.pory"
fadescreen FADE_TO_BLACK
# 107 "data/maps/Route125/scripts.pory"
special SetCB2WhiteOut
# 108 "data/maps/Route125/scripts.pory"
waitstate
# 109 "data/maps/Route125/scripts.pory"

# 110 "data/maps/Route125/scripts.pory"
Route125_EventScript_TanyaStanVictory::
# 111 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 112 "data/maps/Route125/scripts.pory"
waitmovement 0
# 113 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 115 "data/maps/Route125/scripts.pory"
waitmovement 0
# 116 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route125/scripts.pory"
addvar VAR_ROUTE125_STATE, 1
# 118 "data/maps/Route125/scripts.pory"
end
# 119 "data/maps/Route125/scripts.pory"

# 120 "data/maps/Route125/scripts.pory"
Route125_EventScript_Stan::
# 121 "data/maps/Route125/scripts.pory"
	faceplayer
# 122 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route125/scripts.pory"
	end
# 124 "data/maps/Route125/scripts.pory"

# 125 "data/maps/Route125/scripts.pory"
Route125_EventScript_Tanya::
# 126 "data/maps/Route125/scripts.pory"
	faceplayer
# 127 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route125/scripts.pory"
	end
# 129 "data/maps/Route125/scripts.pory"

# 130 "data/maps/Route125/scripts.pory"
Route125_EventScript_Sharon::
# 131 "data/maps/Route125/scripts.pory"
	faceplayer
# 132 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/Route125/scripts.pory"
	end
# 134 "data/maps/Route125/scripts.pory"

# 135 "data/maps/Route125/scripts.pory"
Route125_EventScript_Ernest1::
# 136 "data/maps/Route125/scripts.pory"
lockall
# 137 "data/maps/Route125/scripts.pory"
playse SE_PIN
# 138 "data/maps/Route125/scripts.pory"
applymovement  LOCALID_ERNEST, Common_Movement_ExclamationMark
# 139 "data/maps/Route125/scripts.pory"
waitmovement 0
# 140 "data/maps/Route125/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 141 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 142 "data/maps/Route125/scripts.pory"
waitmovement 0
# 143 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_ErnestIntro MSGBOX_AUTOCLOSE
# 144 "data/maps/Route125/scripts.pory"
goto Route125_EventScript_ErnestDoMultiBattle
# 145 "data/maps/Route125/scripts.pory"
releaseall
# 146 "data/maps/Route125/scripts.pory"
end
# 147 "data/maps/Route125/scripts.pory"

# 148 "data/maps/Route125/scripts.pory"
Route125_EventScript_ErnestDoMultiBattle::
# 149 "data/maps/Route125/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 150 "data/maps/Route125/scripts.pory"
multi_2p_vs_1 TRAINER_ERNEST_1, Route125_Text_ErnestDefeat, PARTNER_EMMIE
# 151 "data/maps/Route125/scripts.pory"
switch VAR_RESULT
# 152 "data/maps/Route125/scripts.pory"
case 1, Route125_EventScript_ErnestVictory
# 153 "data/maps/Route125/scripts.pory"
fadescreen FADE_TO_BLACK
# 154 "data/maps/Route125/scripts.pory"
special SetCB2WhiteOut
# 155 "data/maps/Route125/scripts.pory"
waitstate
# 156 "data/maps/Route125/scripts.pory"

# 157 "data/maps/Route125/scripts.pory"
Route125_EventScript_ErnestVictory::
# 158 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 159 "data/maps/Route125/scripts.pory"
waitmovement 0
# 160 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_ErnestPostBattle, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route125/scripts.pory"
addvar VAR_ROUTE125_STATE, 1
# 162 "data/maps/Route125/scripts.pory"
end
# 163 "data/maps/Route125/scripts.pory"

# 164 "data/maps/Route125/scripts.pory"
Route125_EventScript_Ernest::
# 165 "data/maps/Route125/scripts.pory"
	faceplayer
# 166 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestPostBattle, MSGBOX_DEFAULT
# 167 "data/maps/Route125/scripts.pory"
	release
# 168 "data/maps/Route125/scripts.pory"
	end
# 169 "data/maps/Route125/scripts.pory"

# 170 "data/maps/Route125/scripts.pory"
Route125_EventScript_RegisterErnest::
# 171 "data/maps/Route125/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 172 "data/maps/Route125/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRegister, MSGBOX_DEFAULT
# 174 "data/maps/Route125/scripts.pory"
	register_matchcall TRAINER_ERNEST_1
# 175 "data/maps/Route125/scripts.pory"
	release
# 176 "data/maps/Route125/scripts.pory"
	end
# 177 "data/maps/Route125/scripts.pory"

# 178 "data/maps/Route125/scripts.pory"
Route125_EventScript_RematchErnest::
# 179 "data/maps/Route125/scripts.pory"
	trainerbattle_rematch TRAINER_ERNEST_1, Route125_Text_ErnestRematchIntro, Route125_Text_ErnestRematchDefeat
# 180 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRematchPostBattle, MSGBOX_AUTOCLOSE
# 181 "data/maps/Route125/scripts.pory"
	end
# 182 "data/maps/Route125/scripts.pory"

# 183 "data/maps/Route125/scripts.pory"
Route125_EventScript_KimIris::
# 184 "data/maps/Route125/scripts.pory"
lockall
# 185 "data/maps/Route125/scripts.pory"
playse SE_PIN
# 186 "data/maps/Route125/scripts.pory"
applymovement LOCALID_KIM, Common_Movement_ExclamationMark
# 187 "data/maps/Route125/scripts.pory"
applymovement LOCALID_IRIS, Common_Movement_ExclamationMark
# 188 "data/maps/Route125/scripts.pory"
waitmovement 0
# 189 "data/maps/Route125/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 190 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 191 "data/maps/Route125/scripts.pory"
waitmovement 0
# 192 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_KimIntro MSGBOX_AUTOCLOSE
# 193 "data/maps/Route125/scripts.pory"
goto Route125_EventScript_KimIrisDoMultiBattle
# 194 "data/maps/Route125/scripts.pory"
releaseall
# 195 "data/maps/Route125/scripts.pory"
end
# 196 "data/maps/Route125/scripts.pory"

# 197 "data/maps/Route125/scripts.pory"
Route125_EventScript_KimIrisDoMultiBattle::
# 198 "data/maps/Route125/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 199 "data/maps/Route125/scripts.pory"
multi_2p_vs_1 TRAINER_KIM_AND_IRIS, Route125_Text_KimDefeat, PARTNER_EMMIE
# 200 "data/maps/Route125/scripts.pory"
switch VAR_RESULT
# 201 "data/maps/Route125/scripts.pory"
case 1, Route125_EventScript_KimIrisVictory
# 202 "data/maps/Route125/scripts.pory"
fadescreen FADE_TO_BLACK
# 203 "data/maps/Route125/scripts.pory"
special SetCB2WhiteOut
# 204 "data/maps/Route125/scripts.pory"
waitstate
# 205 "data/maps/Route125/scripts.pory"

# 206 "data/maps/Route125/scripts.pory"
Route125_EventScript_KimIrisVictory::
# 207 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 208 "data/maps/Route125/scripts.pory"
waitmovement 0
# 209 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_KimPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route125/scripts.pory"
addvar VAR_SHOAL_CAVE_STATE, 1
# 211 "data/maps/Route125/scripts.pory"
end
# 212 "data/maps/Route125/scripts.pory"

# 213 "data/maps/Route125/scripts.pory"
Route125_EventScript_Kim::
# 214 "data/maps/Route125/scripts.pory"
	faceplayer
# 215 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_KimPostBattle, MSGBOX_AUTOCLOSE
# 216 "data/maps/Route125/scripts.pory"
	end
# 217 "data/maps/Route125/scripts.pory"

# 218 "data/maps/Route125/scripts.pory"
Route125_EventScript_Iris::
# 219 "data/maps/Route125/scripts.pory"
	faceplayer
# 220 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route125/scripts.pory"
	end
# 222 "data/maps/Route125/scripts.pory"

# 223 "data/maps/Route125/scripts.pory"
Route125_EventScript_PresleyAuron::
# 224 "data/maps/Route125/scripts.pory"
lockall
# 225 "data/maps/Route125/scripts.pory"
playse SE_PIN
# 226 "data/maps/Route125/scripts.pory"
applymovement LOCALID_PRESLEY, Common_Movement_ExclamationMark
# 227 "data/maps/Route125/scripts.pory"
waitmovement 0
# 228 "data/maps/Route125/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 229 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 230 "data/maps/Route125/scripts.pory"
waitmovement 0
# 231 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_PresleyIntro MSGBOX_AUTOCLOSE
# 232 "data/maps/Route125/scripts.pory"
playse SE_PIN
# 233 "data/maps/Route125/scripts.pory"
applymovement  LOCALID_AURON, Common_Movement_ExclamationMark
# 234 "data/maps/Route125/scripts.pory"
waitmovement 0
# 235 "data/maps/Route125/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 236 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 237 "data/maps/Route125/scripts.pory"
waitmovement 0
# 238 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_AuronIntro MSGBOX_AUTOCLOSE
# 239 "data/maps/Route125/scripts.pory"
goto Route125_EventScript_PresleyAuronDoMultiBattle
# 240 "data/maps/Route125/scripts.pory"
releaseall
# 241 "data/maps/Route125/scripts.pory"
end
# 242 "data/maps/Route125/scripts.pory"

# 243 "data/maps/Route125/scripts.pory"
Route125_EventScript_PresleyAuronDoMultiBattle::
# 244 "data/maps/Route125/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 245 "data/maps/Route125/scripts.pory"
multi_2p_vs_2 TRAINER_PRESLEY, Route125_Text_PresleyDefeat, TRAINER_AURON, Route125_Text_AuronDefeat, PARTNER_EMMIE
# 246 "data/maps/Route125/scripts.pory"
switch VAR_RESULT
# 247 "data/maps/Route125/scripts.pory"
case 1, Route125_EventScript_PresleyAuronVictory
# 248 "data/maps/Route125/scripts.pory"
fadescreen FADE_TO_BLACK
# 249 "data/maps/Route125/scripts.pory"
special SetCB2WhiteOut
# 250 "data/maps/Route125/scripts.pory"
waitstate
# 251 "data/maps/Route125/scripts.pory"

# 252 "data/maps/Route125/scripts.pory"
Route125_EventScript_PresleyAuronVictory::
# 253 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 254 "data/maps/Route125/scripts.pory"
waitmovement 0
# 255 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_PresleyPostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/Route125/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 257 "data/maps/Route125/scripts.pory"
waitmovement 0
# 258 "data/maps/Route125/scripts.pory"
msgbox Route125_Text_AuronPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/Route125/scripts.pory"
addvar VAR_ROUTE125_STATE, 1
# 260 "data/maps/Route125/scripts.pory"
end
# 261 "data/maps/Route125/scripts.pory"

# 262 "data/maps/Route125/scripts.pory"
Route125_EventScript_Presley::
# 263 "data/maps/Route125/scripts.pory"
	faceplayer
# 264 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_PresleyPostBattle, MSGBOX_AUTOCLOSE
# 265 "data/maps/Route125/scripts.pory"
	end
# 266 "data/maps/Route125/scripts.pory"

# 267 "data/maps/Route125/scripts.pory"
Route125_EventScript_Auron::
# 268 "data/maps/Route125/scripts.pory"
	faceplayer
# 269 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_AuronPostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/Route125/scripts.pory"
	end

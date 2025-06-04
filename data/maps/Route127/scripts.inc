# 1 "data/maps/Route127/scripts.pory"

# 2 "data/maps/Route127/scripts.pory"
	.set LOCALID_DONNY, 2
# 3 "data/maps/Route127/scripts.pory"
	.set LOCALID_CAMDEN, 1
# 4 "data/maps/Route127/scripts.pory"
	.set LOCALID_ATHENA, 10
# 5 "data/maps/Route127/scripts.pory"
	.set LOCALID_AIDAN, 8
# 6 "data/maps/Route127/scripts.pory"
	.set LOCALID_ROGER, 6
# 7 "data/maps/Route127/scripts.pory"
	.set LOCALID_JONAH, 5
# 8 "data/maps/Route127/scripts.pory"
	.set LOCALID_KOJI, 9
# 9 "data/maps/Route127/scripts.pory"
	.set LOCALID_HENRY, 7
# 10 "data/maps/Route127/scripts.pory"

# 11 "data/maps/Route127/scripts.pory"
Route127_MapScripts::
# 12 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route127_OnTransition
# 13 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route127_OnLoad
# 14 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route127_OnFrame
# 15 "data/maps/Route127/scripts.pory"
	.byte 0
# 16 "data/maps/Route127/scripts.pory"

# 17 "data/maps/Route127/scripts.pory"
Route127_OnTransition:
# 18 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 19 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 20 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 21 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_StartKyogreWeather
# 22 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_StartKyogreWeather
# 23 "data/maps/Route127/scripts.pory"
	end
# 24 "data/maps/Route127/scripts.pory"

# 25 "data/maps/Route127/scripts.pory"
Route127_OnLoad:
# 26 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 27 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 28 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute127North
# 29 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute127South
# 30 "data/maps/Route127/scripts.pory"
	end
# 31 "data/maps/Route127/scripts.pory"

# 32 "data/maps/Route127/scripts.pory"
Route127_OnFrame:
# 33 "data/maps/Route127/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 34 "data/maps/Route127/scripts.pory"
	.2byte 0
# 35 "data/maps/Route127/scripts.pory"

# 36 "data/maps/Route127/scripts.pory"
Route127_EventScript_DonnyCamden::
# 37 "data/maps/Route127/scripts.pory"
lockall
# 38 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 39 "data/maps/Route127/scripts.pory"
applymovement LOCALID_DONNY, Common_Movement_ExclamationMark
# 40 "data/maps/Route127/scripts.pory"
waitmovement 0
# 41 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 42 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/Route127/scripts.pory"
waitmovement 0
# 44 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_DonnyIntro MSGBOX_AUTOCLOSE
# 45 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 46 "data/maps/Route127/scripts.pory"
applymovement  LOCALID_CAMDEN, Common_Movement_ExclamationMark
# 47 "data/maps/Route127/scripts.pory"
waitmovement 0
# 48 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 49 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 50 "data/maps/Route127/scripts.pory"
waitmovement 0
# 51 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_CamdenIntro MSGBOX_AUTOCLOSE
# 52 "data/maps/Route127/scripts.pory"
goto Route127_EventScript_DonnyCamdenDoMultiBattle
# 53 "data/maps/Route127/scripts.pory"
releaseall
# 54 "data/maps/Route127/scripts.pory"
end
# 55 "data/maps/Route127/scripts.pory"

# 56 "data/maps/Route127/scripts.pory"
Route127_EventScript_DonnyCamdenDoMultiBattle::
# 57 "data/maps/Route127/scripts.pory"
playbgm MUS_SURF, TRUE
# 58 "data/maps/Route127/scripts.pory"
multi_2p_vs_2 TRAINER_DONNY, Route127_Text_DonnyDefeat, TRAINER_CAMDEN, Route127_Text_CamdenDefeat, PARTNER_EMMIE
# 59 "data/maps/Route127/scripts.pory"
switch VAR_RESULT
# 60 "data/maps/Route127/scripts.pory"
case 1, Route127_EventScript_DonnyCamdenVictory
# 61 "data/maps/Route127/scripts.pory"
fadescreen FADE_TO_BLACK
# 62 "data/maps/Route127/scripts.pory"
special SetCB2WhiteOut
# 63 "data/maps/Route127/scripts.pory"
waitstate
# 64 "data/maps/Route127/scripts.pory"

# 65 "data/maps/Route127/scripts.pory"
Route127_EventScript_DonnyCamdenVictory::
# 66 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 67 "data/maps/Route127/scripts.pory"
waitmovement 0
# 68 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 70 "data/maps/Route127/scripts.pory"
waitmovement 0
# 71 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_CamdenPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route127/scripts.pory"
addvar VAR_ROUTE127_STATE, 1
# 73 "data/maps/Route127/scripts.pory"
end
# 74 "data/maps/Route127/scripts.pory"

# 75 "data/maps/Route127/scripts.pory"
Route127_EventScript_AidanAthena::
# 76 "data/maps/Route127/scripts.pory"
lockall
# 77 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 78 "data/maps/Route127/scripts.pory"
applymovement LOCALID_AIDAN, Common_Movement_ExclamationMark
# 79 "data/maps/Route127/scripts.pory"
waitmovement 0
# 80 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 81 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/Route127/scripts.pory"
waitmovement 0
# 83 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_AidanIntro MSGBOX_AUTOCLOSE
# 84 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 85 "data/maps/Route127/scripts.pory"
applymovement  LOCALID_ATHENA, Common_Movement_ExclamationMark
# 86 "data/maps/Route127/scripts.pory"
waitmovement 0
# 87 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 88 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 89 "data/maps/Route127/scripts.pory"
waitmovement 0
# 90 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_AthenaIntro MSGBOX_AUTOCLOSE
# 91 "data/maps/Route127/scripts.pory"
goto Route127_EventScript_AidanAthenaDoMultiBattle
# 92 "data/maps/Route127/scripts.pory"
releaseall
# 93 "data/maps/Route127/scripts.pory"
end
# 94 "data/maps/Route127/scripts.pory"

# 95 "data/maps/Route127/scripts.pory"
Route127_EventScript_AidanAthenaDoMultiBattle::
# 96 "data/maps/Route127/scripts.pory"
playbgm MUS_ROUTE122, TRUE
# 97 "data/maps/Route127/scripts.pory"
multi_2p_vs_2 TRAINER_AIDAN, Route127_Text_AidanDefeat, TRAINER_ATHENA, Route127_Text_AthenaDefeat, PARTNER_EMMIE
# 98 "data/maps/Route127/scripts.pory"
switch VAR_RESULT
# 99 "data/maps/Route127/scripts.pory"
case 1, Route127_EventScript_AidanAthenaVictory
# 100 "data/maps/Route127/scripts.pory"
fadescreen FADE_TO_BLACK
# 101 "data/maps/Route127/scripts.pory"
special SetCB2WhiteOut
# 102 "data/maps/Route127/scripts.pory"
waitstate
# 103 "data/maps/Route127/scripts.pory"

# 104 "data/maps/Route127/scripts.pory"
Route127_EventScript_AidanAthenaVictory::
# 105 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 106 "data/maps/Route127/scripts.pory"
waitmovement 0
# 107 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 109 "data/maps/Route127/scripts.pory"
waitmovement 0
# 110 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_AthenaPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route127/scripts.pory"
addvar VAR_ROUTE127_STATE, 1
# 112 "data/maps/Route127/scripts.pory"
end
# 113 "data/maps/Route127/scripts.pory"

# 114 "data/maps/Route127/scripts.pory"
Route127_EventScript_RogerJonah::
# 115 "data/maps/Route127/scripts.pory"
lockall
# 116 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 117 "data/maps/Route127/scripts.pory"
applymovement LOCALID_ROGER, Common_Movement_ExclamationMark
# 118 "data/maps/Route127/scripts.pory"
waitmovement 0
# 119 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 120 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 121 "data/maps/Route127/scripts.pory"
waitmovement 0
# 122 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_RogerIntro MSGBOX_AUTOCLOSE
# 123 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 124 "data/maps/Route127/scripts.pory"
applymovement  LOCALID_JONAH, Common_Movement_ExclamationMark
# 125 "data/maps/Route127/scripts.pory"
waitmovement 0
# 126 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 127 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 128 "data/maps/Route127/scripts.pory"
waitmovement 0
# 129 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_JonahIntro MSGBOX_AUTOCLOSE
# 130 "data/maps/Route127/scripts.pory"
goto Route127_EventScript_RogerJonahDoMultiBattle
# 131 "data/maps/Route127/scripts.pory"
releaseall
# 132 "data/maps/Route127/scripts.pory"
end
# 133 "data/maps/Route127/scripts.pory"

# 134 "data/maps/Route127/scripts.pory"
Route127_EventScript_RogerJonahDoMultiBattle::
# 135 "data/maps/Route127/scripts.pory"
playbgm MUS_ROUTE122, TRUE
# 136 "data/maps/Route127/scripts.pory"
multi_2p_vs_2 TRAINER_ROGER, Route127_Text_RogerDefeat, TRAINER_JONAH, Route127_Text_JonahDefeat, PARTNER_EMMIE
# 137 "data/maps/Route127/scripts.pory"
switch VAR_RESULT
# 138 "data/maps/Route127/scripts.pory"
case 1, Route127_EventScript_RogerJonahVictory
# 139 "data/maps/Route127/scripts.pory"
fadescreen FADE_TO_BLACK
# 140 "data/maps/Route127/scripts.pory"
special SetCB2WhiteOut
# 141 "data/maps/Route127/scripts.pory"
waitstate
# 142 "data/maps/Route127/scripts.pory"

# 143 "data/maps/Route127/scripts.pory"
Route127_EventScript_RogerJonahVictory::
# 144 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 145 "data/maps/Route127/scripts.pory"
waitmovement 0
# 146 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 148 "data/maps/Route127/scripts.pory"
waitmovement 0
# 149 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route127/scripts.pory"
addvar VAR_ROUTE127_STATE, 1
# 151 "data/maps/Route127/scripts.pory"
end
# 152 "data/maps/Route127/scripts.pory"

# 153 "data/maps/Route127/scripts.pory"
Route127_EventScript_KojiHenry::
# 154 "data/maps/Route127/scripts.pory"
lockall
# 155 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 156 "data/maps/Route127/scripts.pory"
applymovement LOCALID_KOJI, Common_Movement_ExclamationMark
# 157 "data/maps/Route127/scripts.pory"
waitmovement 0
# 158 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 159 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 160 "data/maps/Route127/scripts.pory"
waitmovement 0
# 161 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_KojiIntro MSGBOX_AUTOCLOSE
# 162 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 163 "data/maps/Route127/scripts.pory"
applymovement  LOCALID_HENRY, Common_Movement_ExclamationMark
# 164 "data/maps/Route127/scripts.pory"
waitmovement 0
# 165 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 166 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 167 "data/maps/Route127/scripts.pory"
waitmovement 0
# 168 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_HenryIntro MSGBOX_AUTOCLOSE
# 169 "data/maps/Route127/scripts.pory"
goto Route127_EventScript_KojiHenryDoMultiBattle
# 170 "data/maps/Route127/scripts.pory"
releaseall
# 171 "data/maps/Route127/scripts.pory"
end
# 172 "data/maps/Route127/scripts.pory"

# 173 "data/maps/Route127/scripts.pory"
Route127_EventScript_KojiHenryDoMultiBattle::
# 174 "data/maps/Route127/scripts.pory"
playbgm MUS_ROUTE122, TRUE
# 175 "data/maps/Route127/scripts.pory"
multi_2p_vs_2 TRAINER_KOJI_1, Route127_Text_KojiDefeat, TRAINER_HENRY, Route127_Text_HenryDefeat, PARTNER_EMMIE
# 176 "data/maps/Route127/scripts.pory"
switch VAR_RESULT
# 177 "data/maps/Route127/scripts.pory"
case 1, Route127_EventScript_KojiHenryVictory
# 178 "data/maps/Route127/scripts.pory"
fadescreen FADE_TO_BLACK
# 179 "data/maps/Route127/scripts.pory"
special SetCB2WhiteOut
# 180 "data/maps/Route127/scripts.pory"
waitstate
# 181 "data/maps/Route127/scripts.pory"

# 182 "data/maps/Route127/scripts.pory"
Route127_EventScript_KojiHenryVictory::
# 183 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 184 "data/maps/Route127/scripts.pory"
waitmovement 0
# 185 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_KojiPostBattle, MSGBOX_AUTOCLOSE
# 186 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 187 "data/maps/Route127/scripts.pory"
waitmovement 0
# 188 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route127/scripts.pory"
addvar VAR_ROUTE127_STATE, 1
# 190 "data/maps/Route127/scripts.pory"
end
# 191 "data/maps/Route127/scripts.pory"

# 192 "data/maps/Route127/scripts.pory"
Route127_EventScript_Camden::
# 193 "data/maps/Route127/scripts.pory"
	faceplayer
# 194 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_CamdenPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route127/scripts.pory"
	end
# 196 "data/maps/Route127/scripts.pory"

# 197 "data/maps/Route127/scripts.pory"
Route127_EventScript_Donny::
# 198 "data/maps/Route127/scripts.pory"
	faceplayer
# 199 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/Route127/scripts.pory"
	end
# 201 "data/maps/Route127/scripts.pory"

# 202 "data/maps/Route127/scripts.pory"
Route127_EventScript_Jonah::
# 203 "data/maps/Route127/scripts.pory"
	faceplayer
# 204 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route127/scripts.pory"
	end
# 206 "data/maps/Route127/scripts.pory"

# 207 "data/maps/Route127/scripts.pory"
Route127_EventScript_Henry::
# 208 "data/maps/Route127/scripts.pory"
	faceplayer
# 209 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route127/scripts.pory"
	end
# 211 "data/maps/Route127/scripts.pory"

# 212 "data/maps/Route127/scripts.pory"
Route127_EventScript_Roger::
# 213 "data/maps/Route127/scripts.pory"
	faceplayer
# 214 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/Route127/scripts.pory"
	end
# 216 "data/maps/Route127/scripts.pory"

# 217 "data/maps/Route127/scripts.pory"
Route127_EventScript_Aidan::
# 218 "data/maps/Route127/scripts.pory"
	faceplayer
# 219 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route127/scripts.pory"
	end
# 221 "data/maps/Route127/scripts.pory"

# 222 "data/maps/Route127/scripts.pory"
Route127_EventScript_Athena::
# 223 "data/maps/Route127/scripts.pory"
	faceplayer
# 224 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AthenaPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route127/scripts.pory"
	end
# 226 "data/maps/Route127/scripts.pory"

# 227 "data/maps/Route127/scripts.pory"
Route127_EventScript_Koji::
# 228 "data/maps/Route127/scripts.pory"
	faceplayer
# 229 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostBattle, MSGBOX_DEFAULT
# 230 "data/maps/Route127/scripts.pory"
	release
# 231 "data/maps/Route127/scripts.pory"
	end
# 232 "data/maps/Route127/scripts.pory"

# 233 "data/maps/Route127/scripts.pory"
Route127_EventScript_RegisterKoji::
# 234 "data/maps/Route127/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 235 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiRegister, MSGBOX_DEFAULT
# 237 "data/maps/Route127/scripts.pory"
	register_matchcall TRAINER_KOJI_1
# 238 "data/maps/Route127/scripts.pory"
	release
# 239 "data/maps/Route127/scripts.pory"
	end
# 240 "data/maps/Route127/scripts.pory"

# 241 "data/maps/Route127/scripts.pory"
Route127_EventScript_RematchKoji::
# 242 "data/maps/Route127/scripts.pory"
	trainerbattle_rematch TRAINER_KOJI_1, Route127_Text_KojiRematchIntro, Route127_Text_KojiRematchDefeat
# 243 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostRematch, MSGBOX_AUTOCLOSE
# 244 "data/maps/Route127/scripts.pory"
	end

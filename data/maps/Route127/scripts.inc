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
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute127North
# 28 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute127South
# 29 "data/maps/Route127/scripts.pory"
	end
# 30 "data/maps/Route127/scripts.pory"

# 31 "data/maps/Route127/scripts.pory"
Route127_OnFrame:
# 32 "data/maps/Route127/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 33 "data/maps/Route127/scripts.pory"
	.2byte 0
# 34 "data/maps/Route127/scripts.pory"

# 35 "data/maps/Route127/scripts.pory"
Route127_EventScript_DonnyCamden::
# 36 "data/maps/Route127/scripts.pory"
lockall
# 37 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 38 "data/maps/Route127/scripts.pory"
applymovement LOCALID_DONNY, Common_Movement_ExclamationMark
# 39 "data/maps/Route127/scripts.pory"
waitmovement 0
# 40 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 41 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/maps/Route127/scripts.pory"
waitmovement 0
# 43 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_DonnyIntro MSGBOX_AUTOCLOSE
# 44 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 45 "data/maps/Route127/scripts.pory"
applymovement  LOCALID_CAMDEN, Common_Movement_ExclamationMark
# 46 "data/maps/Route127/scripts.pory"
waitmovement 0
# 47 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 48 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 49 "data/maps/Route127/scripts.pory"
waitmovement 0
# 50 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_CamdenIntro MSGBOX_AUTOCLOSE
# 51 "data/maps/Route127/scripts.pory"
goto Route127_EventScript_DonnyCamdenDoMultiBattle
# 52 "data/maps/Route127/scripts.pory"
releaseall
# 53 "data/maps/Route127/scripts.pory"
end
# 54 "data/maps/Route127/scripts.pory"

# 55 "data/maps/Route127/scripts.pory"
Route127_EventScript_DonnyCamdenDoMultiBattle::
# 56 "data/maps/Route127/scripts.pory"
playbgm MUS_SURF, TRUE
# 57 "data/maps/Route127/scripts.pory"
multi_2p_vs_2 TRAINER_DONNY, Route127_Text_DonnyDefeat, TRAINER_CAMDEN, Route127_Text_CamdenDefeat, PARTNER_EMMIE
# 58 "data/maps/Route127/scripts.pory"
switch VAR_RESULT
# 59 "data/maps/Route127/scripts.pory"
case 1, Route127_EventScript_DonnyCamdenVictory
# 60 "data/maps/Route127/scripts.pory"
fadescreen FADE_TO_BLACK
# 61 "data/maps/Route127/scripts.pory"
special SetCB2WhiteOut
# 62 "data/maps/Route127/scripts.pory"
waitstate
# 63 "data/maps/Route127/scripts.pory"

# 64 "data/maps/Route127/scripts.pory"
Route127_EventScript_DonnyCamdenVictory::
# 65 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 66 "data/maps/Route127/scripts.pory"
waitmovement 0
# 67 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 69 "data/maps/Route127/scripts.pory"
waitmovement 0
# 70 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_CamdenPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/Route127/scripts.pory"
addvar VAR_ROUTE127_STATE, 1
# 72 "data/maps/Route127/scripts.pory"
end
# 73 "data/maps/Route127/scripts.pory"

# 74 "data/maps/Route127/scripts.pory"
Route127_EventScript_AidanAthena::
# 75 "data/maps/Route127/scripts.pory"
lockall
# 76 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 77 "data/maps/Route127/scripts.pory"
applymovement LOCALID_AIDAN, Common_Movement_ExclamationMark
# 78 "data/maps/Route127/scripts.pory"
waitmovement 0
# 79 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 80 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 81 "data/maps/Route127/scripts.pory"
waitmovement 0
# 82 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_AidanIntro MSGBOX_AUTOCLOSE
# 83 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 84 "data/maps/Route127/scripts.pory"
applymovement  LOCALID_ATHENA, Common_Movement_ExclamationMark
# 85 "data/maps/Route127/scripts.pory"
waitmovement 0
# 86 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 87 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 88 "data/maps/Route127/scripts.pory"
waitmovement 0
# 89 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_AthenaIntro MSGBOX_AUTOCLOSE
# 90 "data/maps/Route127/scripts.pory"
goto Route127_EventScript_AidanAthenaDoMultiBattle
# 91 "data/maps/Route127/scripts.pory"
releaseall
# 92 "data/maps/Route127/scripts.pory"
end
# 93 "data/maps/Route127/scripts.pory"

# 94 "data/maps/Route127/scripts.pory"
Route127_EventScript_AidanAthenaDoMultiBattle::
# 95 "data/maps/Route127/scripts.pory"
playbgm MUS_SURF, TRUE
# 96 "data/maps/Route127/scripts.pory"
multi_2p_vs_2 TRAINER_AIDAN, Route127_Text_AidanDefeat, TRAINER_ATHENA, Route127_Text_AthenaDefeat, PARTNER_EMMIE
# 97 "data/maps/Route127/scripts.pory"
switch VAR_RESULT
# 98 "data/maps/Route127/scripts.pory"
case 1, Route127_EventScript_AidanAthenaVictory
# 99 "data/maps/Route127/scripts.pory"
fadescreen FADE_TO_BLACK
# 100 "data/maps/Route127/scripts.pory"
special SetCB2WhiteOut
# 101 "data/maps/Route127/scripts.pory"
waitstate
# 102 "data/maps/Route127/scripts.pory"

# 103 "data/maps/Route127/scripts.pory"
Route127_EventScript_AidanAthenaVictory::
# 104 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 105 "data/maps/Route127/scripts.pory"
waitmovement 0
# 106 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 108 "data/maps/Route127/scripts.pory"
waitmovement 0
# 109 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_AthenaPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route127/scripts.pory"
addvar VAR_ROUTE127_STATE, 1
# 111 "data/maps/Route127/scripts.pory"
end
# 112 "data/maps/Route127/scripts.pory"

# 113 "data/maps/Route127/scripts.pory"
Route127_EventScript_RogerJonah::
# 114 "data/maps/Route127/scripts.pory"
lockall
# 115 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 116 "data/maps/Route127/scripts.pory"
applymovement LOCALID_ROGER, Common_Movement_ExclamationMark
# 117 "data/maps/Route127/scripts.pory"
waitmovement 0
# 118 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 119 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 120 "data/maps/Route127/scripts.pory"
waitmovement 0
# 121 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_RogerIntro MSGBOX_AUTOCLOSE
# 122 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 123 "data/maps/Route127/scripts.pory"
applymovement  LOCALID_JONAH, Common_Movement_ExclamationMark
# 124 "data/maps/Route127/scripts.pory"
waitmovement 0
# 125 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 126 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 127 "data/maps/Route127/scripts.pory"
waitmovement 0
# 128 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_JonahIntro MSGBOX_AUTOCLOSE
# 129 "data/maps/Route127/scripts.pory"
goto Route127_EventScript_RogerJonahDoMultiBattle
# 130 "data/maps/Route127/scripts.pory"
releaseall
# 131 "data/maps/Route127/scripts.pory"
end
# 132 "data/maps/Route127/scripts.pory"

# 133 "data/maps/Route127/scripts.pory"
Route127_EventScript_RogerJonahDoMultiBattle::
# 134 "data/maps/Route127/scripts.pory"
playbgm MUS_ROUTE122, TRUE
# 135 "data/maps/Route127/scripts.pory"
multi_2p_vs_2 TRAINER_ROGER, Route127_Text_RogerDefeat, TRAINER_JONAH, Route127_Text_JonahDefeat, PARTNER_EMMIE
# 136 "data/maps/Route127/scripts.pory"
switch VAR_RESULT
# 137 "data/maps/Route127/scripts.pory"
case 1, Route127_EventScript_RogerJonahVictory
# 138 "data/maps/Route127/scripts.pory"
fadescreen FADE_TO_BLACK
# 139 "data/maps/Route127/scripts.pory"
special SetCB2WhiteOut
# 140 "data/maps/Route127/scripts.pory"
waitstate
# 141 "data/maps/Route127/scripts.pory"

# 142 "data/maps/Route127/scripts.pory"
Route127_EventScript_RogerJonahVictory::
# 143 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 144 "data/maps/Route127/scripts.pory"
waitmovement 0
# 145 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 147 "data/maps/Route127/scripts.pory"
waitmovement 0
# 148 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route127/scripts.pory"
addvar VAR_ROUTE127_STATE, 1
# 150 "data/maps/Route127/scripts.pory"
end
# 151 "data/maps/Route127/scripts.pory"

# 152 "data/maps/Route127/scripts.pory"
Route127_EventScript_KojiHenry::
# 153 "data/maps/Route127/scripts.pory"
lockall
# 154 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 155 "data/maps/Route127/scripts.pory"
applymovement LOCALID_KOJI, Common_Movement_ExclamationMark
# 156 "data/maps/Route127/scripts.pory"
waitmovement 0
# 157 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 158 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 159 "data/maps/Route127/scripts.pory"
waitmovement 0
# 160 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_KojiIntro MSGBOX_AUTOCLOSE
# 161 "data/maps/Route127/scripts.pory"
playse SE_PIN
# 162 "data/maps/Route127/scripts.pory"
applymovement  LOCALID_HENRY, Common_Movement_ExclamationMark
# 163 "data/maps/Route127/scripts.pory"
waitmovement 0
# 164 "data/maps/Route127/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 165 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 166 "data/maps/Route127/scripts.pory"
waitmovement 0
# 167 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_HenryIntro MSGBOX_AUTOCLOSE
# 168 "data/maps/Route127/scripts.pory"
goto Route127_EventScript_KojiHenryDoMultiBattle
# 169 "data/maps/Route127/scripts.pory"
releaseall
# 170 "data/maps/Route127/scripts.pory"
end
# 171 "data/maps/Route127/scripts.pory"

# 172 "data/maps/Route127/scripts.pory"
Route127_EventScript_KojiHenryDoMultiBattle::
# 173 "data/maps/Route127/scripts.pory"
playbgm MUS_ROUTE122, TRUE
# 174 "data/maps/Route127/scripts.pory"
multi_2p_vs_2 TRAINER_KOJI_1, Route127_Text_KojiDefeat, TRAINER_HENRY, Route127_Text_HenryDefeat, PARTNER_EMMIE
# 175 "data/maps/Route127/scripts.pory"
switch VAR_RESULT
# 176 "data/maps/Route127/scripts.pory"
case 1, Route127_EventScript_KojiHenryVictory
# 177 "data/maps/Route127/scripts.pory"
fadescreen FADE_TO_BLACK
# 178 "data/maps/Route127/scripts.pory"
special SetCB2WhiteOut
# 179 "data/maps/Route127/scripts.pory"
waitstate
# 180 "data/maps/Route127/scripts.pory"

# 181 "data/maps/Route127/scripts.pory"
Route127_EventScript_KojiHenryVictory::
# 182 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 183 "data/maps/Route127/scripts.pory"
waitmovement 0
# 184 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_KojiPostBattle, MSGBOX_AUTOCLOSE
# 185 "data/maps/Route127/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 186 "data/maps/Route127/scripts.pory"
waitmovement 0
# 187 "data/maps/Route127/scripts.pory"
msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route127/scripts.pory"
addvar VAR_ROUTE127_STATE, 1
# 189 "data/maps/Route127/scripts.pory"
end
# 190 "data/maps/Route127/scripts.pory"

# 191 "data/maps/Route127/scripts.pory"
Route127_EventScript_Camden::
# 192 "data/maps/Route127/scripts.pory"
	faceplayer
# 193 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_CamdenPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route127/scripts.pory"
	end
# 195 "data/maps/Route127/scripts.pory"

# 196 "data/maps/Route127/scripts.pory"
Route127_EventScript_Donny::
# 197 "data/maps/Route127/scripts.pory"
	faceplayer
# 198 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route127/scripts.pory"
	end
# 200 "data/maps/Route127/scripts.pory"

# 201 "data/maps/Route127/scripts.pory"
Route127_EventScript_Jonah::
# 202 "data/maps/Route127/scripts.pory"
	faceplayer
# 203 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route127/scripts.pory"
	end
# 205 "data/maps/Route127/scripts.pory"

# 206 "data/maps/Route127/scripts.pory"
Route127_EventScript_Henry::
# 207 "data/maps/Route127/scripts.pory"
	faceplayer
# 208 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route127/scripts.pory"
	end
# 210 "data/maps/Route127/scripts.pory"

# 211 "data/maps/Route127/scripts.pory"
Route127_EventScript_Roger::
# 212 "data/maps/Route127/scripts.pory"
	faceplayer
# 213 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route127/scripts.pory"
	end
# 215 "data/maps/Route127/scripts.pory"

# 216 "data/maps/Route127/scripts.pory"
Route127_EventScript_Aidan::
# 217 "data/maps/Route127/scripts.pory"
	faceplayer
# 218 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/Route127/scripts.pory"
	end
# 220 "data/maps/Route127/scripts.pory"

# 221 "data/maps/Route127/scripts.pory"
Route127_EventScript_Athena::
# 222 "data/maps/Route127/scripts.pory"
	faceplayer
# 223 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AthenaPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/Route127/scripts.pory"
	end
# 225 "data/maps/Route127/scripts.pory"

# 226 "data/maps/Route127/scripts.pory"
Route127_EventScript_Koji::
# 227 "data/maps/Route127/scripts.pory"
	faceplayer
# 228 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostBattle, MSGBOX_DEFAULT
# 229 "data/maps/Route127/scripts.pory"
	release
# 230 "data/maps/Route127/scripts.pory"
	end
# 231 "data/maps/Route127/scripts.pory"

# 232 "data/maps/Route127/scripts.pory"
Route127_EventScript_RegisterKoji::
# 233 "data/maps/Route127/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 234 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiRegister, MSGBOX_DEFAULT
# 236 "data/maps/Route127/scripts.pory"
	register_matchcall TRAINER_KOJI_1
# 237 "data/maps/Route127/scripts.pory"
	release
# 238 "data/maps/Route127/scripts.pory"
	end
# 239 "data/maps/Route127/scripts.pory"

# 240 "data/maps/Route127/scripts.pory"
Route127_EventScript_RematchKoji::
# 241 "data/maps/Route127/scripts.pory"
	trainerbattle_rematch TRAINER_KOJI_1, Route127_Text_KojiRematchIntro, Route127_Text_KojiRematchDefeat
# 242 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostRematch, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route127/scripts.pory"
	end

# 1 "data/maps/Route129/scripts.pory"

# 2 "data/maps/Route129/scripts.pory"
.set LOCALID_CHASE, 1
# 3 "data/maps/Route129/scripts.pory"
.set LOCALID_REED, 4
# 4 "data/maps/Route129/scripts.pory"
.set LOCALID_TISHA, 3
# 5 "data/maps/Route129/scripts.pory"
.set LOCALID_CLARENCE, 5
# 6 "data/maps/Route129/scripts.pory"
.set LOCALID_ALLISON, 2
# 7 "data/maps/Route129/scripts.pory"

# 8 "data/maps/Route129/scripts.pory"
Route129_MapScripts::
# 9 "data/maps/Route129/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route129_OnTransition
# 10 "data/maps/Route129/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route129_OnLoad
# 11 "data/maps/Route129/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route129_OnFrame
# 12 "data/maps/Route129/scripts.pory"
	.byte 0
# 13 "data/maps/Route129/scripts.pory"

# 14 "data/maps/Route129/scripts.pory"
Route129_OnLoad:
# 15 "data/maps/Route129/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 16 "data/maps/Route129/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_WEST, AbnormalWeather_EventScript_PlaceTilesRoute129West
# 17 "data/maps/Route129/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_EAST, AbnormalWeather_EventScript_PlaceTilesRoute129East
# 18 "data/maps/Route129/scripts.pory"
	end
# 19 "data/maps/Route129/scripts.pory"

# 20 "data/maps/Route129/scripts.pory"
Route129_OnTransition:
# 21 "data/maps/Route129/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 22 "data/maps/Route129/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_RAIN, Common_EventScript_SetWeatherIntenseRain
# 23 "data/maps/Route129/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 24 "data/maps/Route129/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, Route129_EventScript_CheckSetAbnormalWeather
# 25 "data/maps/Route129/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_WEST, AbnormalWeather_StartKyogreWeather
# 26 "data/maps/Route129/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_EAST, AbnormalWeather_StartKyogreWeather
# 27 "data/maps/Route129/scripts.pory"
	end
# 28 "data/maps/Route129/scripts.pory"

# 29 "data/maps/Route129/scripts.pory"
Route129_EventScript_CheckSetAbnormalWeather::
# 30 "data/maps/Route129/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 31 "data/maps/Route129/scripts.pory"
	return
# 32 "data/maps/Route129/scripts.pory"

# 33 "data/maps/Route129/scripts.pory"
Route129_OnFrame:
# 34 "data/maps/Route129/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 35 "data/maps/Route129/scripts.pory"
	.2byte 0
# 36 "data/maps/Route129/scripts.pory"

# 37 "data/maps/Route129/scripts.pory"
Route129_EventScript_EmmieMeetSteven::
# 38 "data/maps/Route129/scripts.pory"
	lockall
# 39 "data/maps/Route129/scripts.pory"
	playse SE_PIN
# 40 "data/maps/Route129/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 41 "data/maps/Route129/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 42 "data/maps/Route129/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route129/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 44 "data/maps/Route129/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_EmmieMeetSteven, MSGBOX_DEFAULT
# 46 "data/maps/Route129/scripts.pory"
	closemessage
# 47 "data/maps/Route129/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route129_Movement_ReturnToSootopolis
# 48 "data/maps/Route129/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route129_Movement_ReturnToSootopolis
# 49 "data/maps/Route129/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route129/scripts.pory"
	releaseall
# 51 "data/maps/Route129/scripts.pory"
	end
# 52 "data/maps/Route129/scripts.pory"

# 53 "data/maps/Route129/scripts.pory"
Route129_EventScript_EmmieCheckSootopolis::
# 54 "data/maps/Route129/scripts.pory"
	lockall
# 55 "data/maps/Route129/scripts.pory"
	playse SE_PIN
# 56 "data/maps/Route129/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 57 "data/maps/Route129/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 58 "data/maps/Route129/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route129/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 60 "data/maps/Route129/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_EmmieCheckSootopolis, MSGBOX_DEFAULT
# 62 "data/maps/Route129/scripts.pory"
	closemessage
# 63 "data/maps/Route129/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route129_Movement_ReturnToSootopolis
# 64 "data/maps/Route129/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route129_Movement_ReturnToSootopolis
# 65 "data/maps/Route129/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route129/scripts.pory"
	releaseall
# 67 "data/maps/Route129/scripts.pory"
	end
# 68 "data/maps/Route129/scripts.pory"

# 69 "data/maps/Route129/scripts.pory"
Route129_Movement_ReturnToSootopolis:
# 70 "data/maps/Route129/scripts.pory"
	walk_right
# 71 "data/maps/Route129/scripts.pory"
	walk_right
# 72 "data/maps/Route129/scripts.pory"
	step_end
# 73 "data/maps/Route129/scripts.pory"

# 74 "data/maps/Route129/scripts.pory"
Route129_Text_EmmieMeetSteven:
# 75 "data/maps/Route129/scripts.pory"
	.string "Hey, {PLAYER}, we can't ignore what's\n"
# 76 "data/maps/Route129/scripts.pory"
	.string "happening right now.\p"
# 77 "data/maps/Route129/scripts.pory"
	.string "I really think we should go and meet\n"
# 78 "data/maps/Route129/scripts.pory"
	.string "Steven in Sootopolis City!$"
# 79 "data/maps/Route129/scripts.pory"

# 80 "data/maps/Route129/scripts.pory"
Route129_Text_EmmieCheckSootopolis:
# 81 "data/maps/Route129/scripts.pory"
	.string "Hey, {PLAYER}, didn't Matt say to\n"
# 82 "data/maps/Route129/scripts.pory"
	.string "search the seas beyond Lilycove?\p"
# 83 "data/maps/Route129/scripts.pory"
	.string "I think we should return to the\n"
# 84 "data/maps/Route129/scripts.pory"
	.string "Sootopolis area.\p"
# 85 "data/maps/Route129/scripts.pory"
	.string "We may find out more about what\n"
# 86 "data/maps/Route129/scripts.pory"
	.string "Team Aqua is up to!$"
# 87 "data/maps/Route129/scripts.pory"

# 88 "data/maps/Route129/scripts.pory"
Route129_EventScript_ChaseReed::
# 89 "data/maps/Route129/scripts.pory"
lockall
# 90 "data/maps/Route129/scripts.pory"
playse SE_PIN
# 91 "data/maps/Route129/scripts.pory"
applymovement LOCALID_CHASE, Common_Movement_ExclamationMark
# 92 "data/maps/Route129/scripts.pory"
waitmovement 0
# 93 "data/maps/Route129/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 94 "data/maps/Route129/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 95 "data/maps/Route129/scripts.pory"
waitmovement 0
# 96 "data/maps/Route129/scripts.pory"
msgbox Route129_Text_ChaseIntro MSGBOX_AUTOCLOSE
# 97 "data/maps/Route129/scripts.pory"
playse SE_PIN
# 98 "data/maps/Route129/scripts.pory"
applymovement  LOCALID_REED, Common_Movement_ExclamationMark
# 99 "data/maps/Route129/scripts.pory"
waitmovement 0
# 100 "data/maps/Route129/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 101 "data/maps/Route129/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 102 "data/maps/Route129/scripts.pory"
waitmovement 0
# 103 "data/maps/Route129/scripts.pory"
msgbox Route129_Text_ReedIntro MSGBOX_AUTOCLOSE
# 104 "data/maps/Route129/scripts.pory"
goto Route129_EventScript_ChaseReedDoMultiBattle
# 105 "data/maps/Route129/scripts.pory"
releaseall
# 106 "data/maps/Route129/scripts.pory"
end
# 107 "data/maps/Route129/scripts.pory"

# 108 "data/maps/Route129/scripts.pory"
Route129_EventScript_ChaseReedDoMultiBattle::
# 109 "data/maps/Route129/scripts.pory"
playbgm MUS_SURF, TRUE
# 110 "data/maps/Route129/scripts.pory"
multi_2p_vs_2 TRAINER_CHASE, Route129_Text_ChaseDefeat, TRAINER_REED, Route129_Text_ReedDefeat, PARTNER_EMMIE
# 111 "data/maps/Route129/scripts.pory"
switch VAR_RESULT
# 112 "data/maps/Route129/scripts.pory"
case 1, Route129_EventScript_ChaseReedVictory
# 113 "data/maps/Route129/scripts.pory"
fadescreen FADE_TO_BLACK
# 114 "data/maps/Route129/scripts.pory"
special SetCB2WhiteOut
# 115 "data/maps/Route129/scripts.pory"
waitstate
# 116 "data/maps/Route129/scripts.pory"

# 117 "data/maps/Route129/scripts.pory"
Route129_EventScript_ChaseReedVictory::
# 118 "data/maps/Route129/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 119 "data/maps/Route129/scripts.pory"
waitmovement 0
# 120 "data/maps/Route129/scripts.pory"
msgbox Route129_Text_ChasePostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route129/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 122 "data/maps/Route129/scripts.pory"
waitmovement 0
# 123 "data/maps/Route129/scripts.pory"
msgbox Route129_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route129/scripts.pory"
addvar VAR_ROUTE129_STATE, 1
# 125 "data/maps/Route129/scripts.pory"
end
# 126 "data/maps/Route129/scripts.pory"

# 127 "data/maps/Route129/scripts.pory"
Route129_EventScript_TishaClarence::
# 128 "data/maps/Route129/scripts.pory"
lockall
# 129 "data/maps/Route129/scripts.pory"
playse SE_PIN
# 130 "data/maps/Route129/scripts.pory"
applymovement LOCALID_TISHA, Common_Movement_ExclamationMark
# 131 "data/maps/Route129/scripts.pory"
waitmovement 0
# 132 "data/maps/Route129/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 133 "data/maps/Route129/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 134 "data/maps/Route129/scripts.pory"
waitmovement 0
# 135 "data/maps/Route129/scripts.pory"
msgbox Route129_Text_TishaIntro MSGBOX_AUTOCLOSE
# 136 "data/maps/Route129/scripts.pory"
playse SE_PIN
# 137 "data/maps/Route129/scripts.pory"
applymovement  LOCALID_CLARENCE, Common_Movement_ExclamationMark
# 138 "data/maps/Route129/scripts.pory"
waitmovement 0
# 139 "data/maps/Route129/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 140 "data/maps/Route129/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 141 "data/maps/Route129/scripts.pory"
waitmovement 0
# 142 "data/maps/Route129/scripts.pory"
msgbox Route129_Text_ClarenceIntro MSGBOX_AUTOCLOSE
# 143 "data/maps/Route129/scripts.pory"
goto Route129_EventScript_TishaClarenceDoMultiBattle
# 144 "data/maps/Route129/scripts.pory"
releaseall
# 145 "data/maps/Route129/scripts.pory"
end
# 146 "data/maps/Route129/scripts.pory"

# 147 "data/maps/Route129/scripts.pory"
Route129_EventScript_TishaClarenceDoMultiBattle::
# 148 "data/maps/Route129/scripts.pory"
playbgm MUS_SURF, TRUE
# 149 "data/maps/Route129/scripts.pory"
multi_2p_vs_2 TRAINER_TISHA, Route129_Text_TishaDefeat, TRAINER_CLARENCE, Route129_Text_ClarenceDefeat, PARTNER_EMMIE
# 150 "data/maps/Route129/scripts.pory"
switch VAR_RESULT
# 151 "data/maps/Route129/scripts.pory"
case 1, Route129_EventScript_TishaClarenceVictory
# 152 "data/maps/Route129/scripts.pory"
fadescreen FADE_TO_BLACK
# 153 "data/maps/Route129/scripts.pory"
special SetCB2WhiteOut
# 154 "data/maps/Route129/scripts.pory"
waitstate
# 155 "data/maps/Route129/scripts.pory"

# 156 "data/maps/Route129/scripts.pory"
Route129_EventScript_TishaClarenceVictory::
# 157 "data/maps/Route129/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 158 "data/maps/Route129/scripts.pory"
waitmovement 0
# 159 "data/maps/Route129/scripts.pory"
msgbox Route129_Text_TishaPostBattle, MSGBOX_AUTOCLOSE
# 160 "data/maps/Route129/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 161 "data/maps/Route129/scripts.pory"
waitmovement 0
# 162 "data/maps/Route129/scripts.pory"
msgbox Route129_Text_ClarencePostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route129/scripts.pory"
addvar VAR_ROUTE129_STATE, 1
# 164 "data/maps/Route129/scripts.pory"
end
# 165 "data/maps/Route129/scripts.pory"

# 166 "data/maps/Route129/scripts.pory"
Route129_EventScript_AllisonBattle::
# 167 "data/maps/Route129/scripts.pory"
lockall
# 168 "data/maps/Route129/scripts.pory"
playse SE_PIN
# 169 "data/maps/Route129/scripts.pory"
applymovement  LOCALID_ALLISON, Common_Movement_ExclamationMark
# 170 "data/maps/Route129/scripts.pory"
waitmovement 0
# 171 "data/maps/Route129/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 172 "data/maps/Route129/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 173 "data/maps/Route129/scripts.pory"
waitmovement 0
# 174 "data/maps/Route129/scripts.pory"
msgbox Route129_Text_AllisonIntro MSGBOX_AUTOCLOSE
# 175 "data/maps/Route129/scripts.pory"
goto Route129_EventScript_AllisonDoMultiBattle
# 176 "data/maps/Route129/scripts.pory"
releaseall
# 177 "data/maps/Route129/scripts.pory"
end
# 178 "data/maps/Route129/scripts.pory"

# 179 "data/maps/Route129/scripts.pory"
Route129_EventScript_AllisonDoMultiBattle::
# 180 "data/maps/Route129/scripts.pory"
playbgm MUS_SURF, TRUE
# 181 "data/maps/Route129/scripts.pory"
multi_2p_vs_1 TRAINER_ALLISON, Route129_Text_AllisonDefeat, PARTNER_EMMIE
# 182 "data/maps/Route129/scripts.pory"
switch VAR_RESULT
# 183 "data/maps/Route129/scripts.pory"
case 1, Route129_EventScript_AllisonVictory
# 184 "data/maps/Route129/scripts.pory"
fadescreen FADE_TO_BLACK
# 185 "data/maps/Route129/scripts.pory"
special SetCB2WhiteOut
# 186 "data/maps/Route129/scripts.pory"
waitstate
# 187 "data/maps/Route129/scripts.pory"

# 188 "data/maps/Route129/scripts.pory"
Route129_EventScript_AllisonVictory::
# 189 "data/maps/Route129/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 190 "data/maps/Route129/scripts.pory"
waitmovement 0
# 191 "data/maps/Route129/scripts.pory"
msgbox Route129_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route129/scripts.pory"
addvar VAR_ROUTE129_STATE, 1
# 193 "data/maps/Route129/scripts.pory"
end
# 194 "data/maps/Route129/scripts.pory"

# 195 "data/maps/Route129/scripts.pory"
Route129_EventScript_Chase::
# 196 "data/maps/Route129/scripts.pory"
	faceplayer
# 197 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_ChasePostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route129/scripts.pory"
	end
# 199 "data/maps/Route129/scripts.pory"

# 200 "data/maps/Route129/scripts.pory"
Route129_EventScript_Allison::
# 201 "data/maps/Route129/scripts.pory"
	faceplayer
# 202 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route129/scripts.pory"
	end
# 204 "data/maps/Route129/scripts.pory"

# 205 "data/maps/Route129/scripts.pory"
Route129_EventScript_Reed::
# 206 "data/maps/Route129/scripts.pory"
	faceplayer
# 207 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route129/scripts.pory"
	end
# 209 "data/maps/Route129/scripts.pory"

# 210 "data/maps/Route129/scripts.pory"
Route129_EventScript_Tisha::
# 211 "data/maps/Route129/scripts.pory"
	faceplayer
# 212 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_TishaPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route129/scripts.pory"
	end
# 214 "data/maps/Route129/scripts.pory"

# 215 "data/maps/Route129/scripts.pory"
Route129_EventScript_Clarence::
# 216 "data/maps/Route129/scripts.pory"
	faceplayer
# 217 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_ClarencePostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route129/scripts.pory"
	end

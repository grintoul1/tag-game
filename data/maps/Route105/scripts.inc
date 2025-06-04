# 1 "data/maps/Route105/scripts.pory"

# 2 "data/maps/Route105/scripts.pory"
Route105_MapScripts::
# 3 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route105_OnLoad
# 4 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_OnTransition
# 5 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_OnFrame
# 6 "data/maps/Route105/scripts.pory"
	.byte 0
# 7 "data/maps/Route105/scripts.pory"

# 8 "data/maps/Route105/scripts.pory"
Route105_OnLoad:
# 9 "data/maps/Route105/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 10 "data/maps/Route105/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 11 "data/maps/Route105/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route105_CloseRegiEntrance
# 12 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute105North
# 13 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute105South
# 14 "data/maps/Route105/scripts.pory"
	end
# 15 "data/maps/Route105/scripts.pory"

# 16 "data/maps/Route105/scripts.pory"
Route105_CloseRegiEntrance::
# 17 "data/maps/Route105/scripts.pory"
	setmetatile 9, 19, METATILE_General_RockWall_RockBase, TRUE
# 18 "data/maps/Route105/scripts.pory"
	setmetatile 9, 20, METATILE_General_RockWall_SandBase, TRUE
# 19 "data/maps/Route105/scripts.pory"
	return
# 20 "data/maps/Route105/scripts.pory"

# 21 "data/maps/Route105/scripts.pory"
Route105_OnTransition:
# 22 "data/maps/Route105/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 23 "data/maps/Route105/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 24 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 25 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_StartKyogreWeather
# 26 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_StartKyogreWeather
# 27 "data/maps/Route105/scripts.pory"
	end
# 28 "data/maps/Route105/scripts.pory"

# 29 "data/maps/Route105/scripts.pory"
Route105_OnFrame:
# 30 "data/maps/Route105/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 31 "data/maps/Route105/scripts.pory"
	.2byte 0
# 32 "data/maps/Route105/scripts.pory"

# 33 "data/maps/Route105/scripts.pory"
Route105_EventScript_FosterLuis::
# 34 "data/maps/Route105/scripts.pory"
lockall
# 35 "data/maps/Route105/scripts.pory"
playse SE_PIN
# 36 "data/maps/Route105/scripts.pory"
applymovement LOCALID_FOSTER, Common_Movement_ExclamationMark
# 37 "data/maps/Route105/scripts.pory"
waitmovement 0
# 38 "data/maps/Route105/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 39 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 40 "data/maps/Route105/scripts.pory"
waitmovement 0
# 41 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_FosterIntro MSGBOX_AUTOCLOSE
# 42 "data/maps/Route105/scripts.pory"
playse SE_PIN
# 43 "data/maps/Route105/scripts.pory"
applymovement  LOCALID_LUIS, Common_Movement_ExclamationMark
# 44 "data/maps/Route105/scripts.pory"
waitmovement 0
# 45 "data/maps/Route105/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 46 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 47 "data/maps/Route105/scripts.pory"
waitmovement 0
# 48 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_LuisIntro MSGBOX_AUTOCLOSE
# 49 "data/maps/Route105/scripts.pory"
goto Route105_EventScript_FosterLuisDoMultiBattle
# 50 "data/maps/Route105/scripts.pory"
releaseall
# 51 "data/maps/Route105/scripts.pory"
end
# 52 "data/maps/Route105/scripts.pory"

# 53 "data/maps/Route105/scripts.pory"
Route105_EventScript_FosterLuisDoMultiBattle::
# 54 "data/maps/Route105/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 55 "data/maps/Route105/scripts.pory"
multi_2p_vs_2 TRAINER_FOSTER, Route105_Text_FosterDefeated, TRAINER_LUIS, Route105_Text_LuisDefeated, PARTNER_EMMIE
# 56 "data/maps/Route105/scripts.pory"
switch VAR_RESULT
# 57 "data/maps/Route105/scripts.pory"
case 1, Route105_EventScript_FosterLuisVictory
# 58 "data/maps/Route105/scripts.pory"
fadescreen FADE_TO_BLACK
# 59 "data/maps/Route105/scripts.pory"
special SetCB2WhiteOut
# 60 "data/maps/Route105/scripts.pory"
waitstate
# 61 "data/maps/Route105/scripts.pory"

# 62 "data/maps/Route105/scripts.pory"
Route105_EventScript_FosterLuisVictory::
# 63 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 64 "data/maps/Route105/scripts.pory"
waitmovement 0
# 65 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 67 "data/maps/Route105/scripts.pory"
waitmovement 0
# 68 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route105/scripts.pory"
addvar VAR_ROUTE105_STATE, 1
# 70 "data/maps/Route105/scripts.pory"
end
# 71 "data/maps/Route105/scripts.pory"

# 72 "data/maps/Route105/scripts.pory"
Route105_EventScript_JosueAndres::
# 73 "data/maps/Route105/scripts.pory"
lockall
# 74 "data/maps/Route105/scripts.pory"
playse SE_PIN
# 75 "data/maps/Route105/scripts.pory"
applymovement LOCALID_JOSUE, Common_Movement_ExclamationMark
# 76 "data/maps/Route105/scripts.pory"
waitmovement 0
# 77 "data/maps/Route105/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 78 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 79 "data/maps/Route105/scripts.pory"
waitmovement 0
# 80 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_JosueIntro MSGBOX_AUTOCLOSE
# 81 "data/maps/Route105/scripts.pory"
playse SE_PIN
# 82 "data/maps/Route105/scripts.pory"
applymovement  LOCALID_ANDRES, Common_Movement_ExclamationMark
# 83 "data/maps/Route105/scripts.pory"
waitmovement 0
# 84 "data/maps/Route105/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 85 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 86 "data/maps/Route105/scripts.pory"
waitmovement 0
# 87 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_AndresIntro MSGBOX_AUTOCLOSE
# 88 "data/maps/Route105/scripts.pory"
goto Route105_EventScript_JosueAndresDoMultiBattle
# 89 "data/maps/Route105/scripts.pory"
releaseall
# 90 "data/maps/Route105/scripts.pory"
end
# 91 "data/maps/Route105/scripts.pory"

# 92 "data/maps/Route105/scripts.pory"
Route105_EventScript_JosueAndresDoMultiBattle::
# 93 "data/maps/Route105/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 94 "data/maps/Route105/scripts.pory"
multi_2p_vs_2 TRAINER_JOSUE, Route105_Text_JosueDefeated, TRAINER_ANDRES_1, Route105_Text_AndresDefeated, PARTNER_EMMIE
# 95 "data/maps/Route105/scripts.pory"
switch VAR_RESULT
# 96 "data/maps/Route105/scripts.pory"
case 1, Route105_EventScript_JosueAndresVictory
# 97 "data/maps/Route105/scripts.pory"
fadescreen FADE_TO_BLACK
# 98 "data/maps/Route105/scripts.pory"
special SetCB2WhiteOut
# 99 "data/maps/Route105/scripts.pory"
waitstate
# 100 "data/maps/Route105/scripts.pory"

# 101 "data/maps/Route105/scripts.pory"
Route105_EventScript_JosueAndresVictory::
# 102 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 103 "data/maps/Route105/scripts.pory"
waitmovement 0
# 104 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 106 "data/maps/Route105/scripts.pory"
waitmovement 0
# 107 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_AndresPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route105/scripts.pory"
addvar VAR_ROUTE105_STATE, 1
# 109 "data/maps/Route105/scripts.pory"
end
# 110 "data/maps/Route105/scripts.pory"

# 111 "data/maps/Route105/scripts.pory"
Route105_EventScript_BeverlyDominik::
# 112 "data/maps/Route105/scripts.pory"
lockall
# 113 "data/maps/Route105/scripts.pory"
playse SE_PIN
# 114 "data/maps/Route105/scripts.pory"
applymovement LOCALID_BEVERLY, Common_Movement_ExclamationMark
# 115 "data/maps/Route105/scripts.pory"
waitmovement 0
# 116 "data/maps/Route105/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 117 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 118 "data/maps/Route105/scripts.pory"
waitmovement 0
# 119 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_BeverlyIntro MSGBOX_AUTOCLOSE
# 120 "data/maps/Route105/scripts.pory"
playse SE_PIN
# 121 "data/maps/Route105/scripts.pory"
applymovement  LOCALID_DOMINIK, Common_Movement_ExclamationMark
# 122 "data/maps/Route105/scripts.pory"
waitmovement 0
# 123 "data/maps/Route105/scripts.pory"
playbgm MUS_ENCOUNTER_SWIMMER, TRUE
# 124 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 125 "data/maps/Route105/scripts.pory"
waitmovement 0
# 126 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_DominikIntro MSGBOX_AUTOCLOSE
# 127 "data/maps/Route105/scripts.pory"
goto Route105_EventScript_BeverlyDominikDoMultiBattle
# 128 "data/maps/Route105/scripts.pory"
releaseall
# 129 "data/maps/Route105/scripts.pory"
end
# 130 "data/maps/Route105/scripts.pory"

# 131 "data/maps/Route105/scripts.pory"
Route105_EventScript_BeverlyDominikDoMultiBattle::
# 132 "data/maps/Route105/scripts.pory"
playbgm MUS_SURF, TRUE
# 133 "data/maps/Route105/scripts.pory"
multi_2p_vs_2 TRAINER_BEVERLY, Route105_Text_BeverlyDefeated, TRAINER_DOMINIK, Route105_Text_DominikDefeated, PARTNER_EMMIE
# 134 "data/maps/Route105/scripts.pory"
switch VAR_RESULT
# 135 "data/maps/Route105/scripts.pory"
case 1, Route105_EventScript_BeverlyDominikVictory
# 136 "data/maps/Route105/scripts.pory"
fadescreen FADE_TO_BLACK
# 137 "data/maps/Route105/scripts.pory"
special SetCB2WhiteOut
# 138 "data/maps/Route105/scripts.pory"
waitstate
# 139 "data/maps/Route105/scripts.pory"

# 140 "data/maps/Route105/scripts.pory"
Route105_EventScript_BeverlyDominikVictory::
# 141 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 142 "data/maps/Route105/scripts.pory"
waitmovement 0
# 143 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_BeverlyPostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route105/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 145 "data/maps/Route105/scripts.pory"
waitmovement 0
# 146 "data/maps/Route105/scripts.pory"
msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/Route105/scripts.pory"
addvar VAR_ROUTE105_STATE, 1
# 148 "data/maps/Route105/scripts.pory"
end
# 149 "data/maps/Route105/scripts.pory"

# 150 "data/maps/Route105/scripts.pory"
Route105_EventScript_Foster::
# 151 "data/maps/Route105/scripts.pory"
	faceplayer
# 152 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 153 "data/maps/Route105/scripts.pory"
	end
# 154 "data/maps/Route105/scripts.pory"

# 155 "data/maps/Route105/scripts.pory"
Route105_EventScript_Luis::
# 156 "data/maps/Route105/scripts.pory"
	faceplayer
# 157 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 158 "data/maps/Route105/scripts.pory"
	end
# 159 "data/maps/Route105/scripts.pory"

# 160 "data/maps/Route105/scripts.pory"
Route105_EventScript_Dominik::
# 161 "data/maps/Route105/scripts.pory"
	faceplayer
# 162 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route105/scripts.pory"
	end
# 164 "data/maps/Route105/scripts.pory"

# 165 "data/maps/Route105/scripts.pory"
Route105_EventScript_Beverly::
# 166 "data/maps/Route105/scripts.pory"
	faceplayer
# 167 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_BeverlyPostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/Route105/scripts.pory"
	end
# 169 "data/maps/Route105/scripts.pory"

# 170 "data/maps/Route105/scripts.pory"
Route105_EventScript_Imani::
# 171 "data/maps/Route105/scripts.pory"
	faceplayer
# 172 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
# 173 "data/maps/Route105/scripts.pory"
	end
# 174 "data/maps/Route105/scripts.pory"

# 175 "data/maps/Route105/scripts.pory"
Route105_EventScript_Josue::
# 176 "data/maps/Route105/scripts.pory"
	faceplayer
# 177 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route105/scripts.pory"
	end
# 179 "data/maps/Route105/scripts.pory"

# 180 "data/maps/Route105/scripts.pory"
Route105_EventScript_Andres::
# 181 "data/maps/Route105/scripts.pory"
	faceplayer
# 182 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
# 183 "data/maps/Route105/scripts.pory"
	release
# 184 "data/maps/Route105/scripts.pory"
	end
# 185 "data/maps/Route105/scripts.pory"

# 186 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 187 "data/maps/Route105/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 188 "data/maps/Route105/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 190 "data/maps/Route105/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
# 191 "data/maps/Route105/scripts.pory"
	release
# 192 "data/maps/Route105/scripts.pory"
	end
# 193 "data/maps/Route105/scripts.pory"

# 194 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRematch::
# 195 "data/maps/Route105/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 196 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route105/scripts.pory"
	end
# 198 "data/maps/Route105/scripts.pory"

# 199 "data/maps/Route105/scripts.pory"
Route104_Text_DadPokenavCall:
# 200 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 201 "data/maps/Route105/scripts.pory"
	.string "… … … … … Beep!\p"
# 202 "data/maps/Route105/scripts.pory"
	.string "DAD: Oh, {PLAYER}?\p"
# 203 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 204 "data/maps/Route105/scripts.pory"
	.string "Where are you now?\l"
# 205 "data/maps/Route105/scripts.pory"
	.string "It sounds windy wherever you are.\p"
# 206 "data/maps/Route105/scripts.pory"
	.string "I just heard from DEVON's MR. STONE\n"
# 207 "data/maps/Route105/scripts.pory"
	.string "about your POKéNAV, so I decided\l"
# 208 "data/maps/Route105/scripts.pory"
	.string "to give you a call.\p"
# 209 "data/maps/Route105/scripts.pory"
	.string "It sounds like you're doing fine,\n"
# 210 "data/maps/Route105/scripts.pory"
	.string "so that's fine with me.\p"
# 211 "data/maps/Route105/scripts.pory"
	.string "You take care now.\p"
# 212 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 213 "data/maps/Route105/scripts.pory"
	.string "… … … … … Click!$"
# 214 "data/maps/Route105/scripts.pory"

# 215 "data/maps/Route105/scripts.pory"
Route104_Text_RegisteredDadInPokenav:
# 216 "data/maps/Route105/scripts.pory"
	.string "Registered DAD NORMAN\n"
# 217 "data/maps/Route105/scripts.pory"
	.string "in the POKéNAV.$"

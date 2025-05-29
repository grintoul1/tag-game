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
	call_if_unset FLAG_REGI_DOORS_OPENED, Route105_CloseRegiEntrance
# 11 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute105North
# 12 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute105South
# 13 "data/maps/Route105/scripts.pory"
	end
# 14 "data/maps/Route105/scripts.pory"

# 15 "data/maps/Route105/scripts.pory"
Route105_CloseRegiEntrance::
# 16 "data/maps/Route105/scripts.pory"
	setmetatile 9, 19, METATILE_General_RockWall_RockBase, TRUE
# 17 "data/maps/Route105/scripts.pory"
	setmetatile 9, 20, METATILE_General_RockWall_SandBase, TRUE
# 18 "data/maps/Route105/scripts.pory"
	return
# 19 "data/maps/Route105/scripts.pory"

# 20 "data/maps/Route105/scripts.pory"
Route105_OnTransition:
# 21 "data/maps/Route105/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 22 "data/maps/Route105/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 23 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_StartKyogreWeather
# 24 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_StartKyogreWeather
# 25 "data/maps/Route105/scripts.pory"
	end
# 26 "data/maps/Route105/scripts.pory"

# 27 "data/maps/Route105/scripts.pory"
Route105_OnFrame:
# 28 "data/maps/Route105/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 29 "data/maps/Route105/scripts.pory"
	.2byte 0
# 30 "data/maps/Route105/scripts.pory"

# 31 "data/maps/Route105/scripts.pory"
Route105_EventScript_Foster::
# 32 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated
# 33 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route105/scripts.pory"
	end
# 35 "data/maps/Route105/scripts.pory"

# 36 "data/maps/Route105/scripts.pory"
Route105_EventScript_Luis::
# 37 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
# 38 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route105/scripts.pory"
	end
# 40 "data/maps/Route105/scripts.pory"

# 41 "data/maps/Route105/scripts.pory"
Route105_EventScript_Dominik::
# 42 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
# 43 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route105/scripts.pory"
	end
# 45 "data/maps/Route105/scripts.pory"

# 46 "data/maps/Route105/scripts.pory"
Route105_EventScript_Beverly::
# 47 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
# 48 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route105/scripts.pory"
	end
# 50 "data/maps/Route105/scripts.pory"

# 51 "data/maps/Route105/scripts.pory"
Route105_EventScript_Imani::
# 52 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
# 53 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route105/scripts.pory"
	end
# 55 "data/maps/Route105/scripts.pory"

# 56 "data/maps/Route105/scripts.pory"
Route105_EventScript_Josue::
# 57 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
# 58 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route105/scripts.pory"
	end
# 60 "data/maps/Route105/scripts.pory"

# 61 "data/maps/Route105/scripts.pory"
Route105_EventScript_Andres::
# 62 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated, Route105_EventScript_AndresRegisterMatchCallAfterBattle
# 63 "data/maps/Route105/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 64 "data/maps/Route105/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route105_EventScript_AndresRematch
# 65 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
# 66 "data/maps/Route105/scripts.pory"
	release
# 67 "data/maps/Route105/scripts.pory"
	end
# 68 "data/maps/Route105/scripts.pory"

# 69 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 70 "data/maps/Route105/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 71 "data/maps/Route105/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 73 "data/maps/Route105/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
# 74 "data/maps/Route105/scripts.pory"
	release
# 75 "data/maps/Route105/scripts.pory"
	end
# 76 "data/maps/Route105/scripts.pory"

# 77 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRematch::
# 78 "data/maps/Route105/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 79 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route105/scripts.pory"
	end
# 81 "data/maps/Route105/scripts.pory"

# 82 "data/maps/Route105/scripts.pory"
Route104_Text_DadPokenavCall:
# 83 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 84 "data/maps/Route105/scripts.pory"
	.string "… … … … … Beep!\p"
# 85 "data/maps/Route105/scripts.pory"
	.string "DAD: Oh, {PLAYER}?\p"
# 86 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 87 "data/maps/Route105/scripts.pory"
	.string "Where are you now?\l"
# 88 "data/maps/Route105/scripts.pory"
	.string "It sounds windy wherever you are.\p"
# 89 "data/maps/Route105/scripts.pory"
	.string "I just heard from DEVON's MR. STONE\n"
# 90 "data/maps/Route105/scripts.pory"
	.string "about your POKéNAV, so I decided\l"
# 91 "data/maps/Route105/scripts.pory"
	.string "to give you a call.\p"
# 92 "data/maps/Route105/scripts.pory"
	.string "It sounds like you're doing fine,\n"
# 93 "data/maps/Route105/scripts.pory"
	.string "so that's fine with me.\p"
# 94 "data/maps/Route105/scripts.pory"
	.string "You take care now.\p"
# 95 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 96 "data/maps/Route105/scripts.pory"
	.string "… … … … … Click!$"
# 97 "data/maps/Route105/scripts.pory"

# 98 "data/maps/Route105/scripts.pory"
Route104_Text_RegisteredDadInPokenav:
# 99 "data/maps/Route105/scripts.pory"
	.string "Registered DAD NORMAN\n"
# 100 "data/maps/Route105/scripts.pory"
	.string "in the POKéNAV.$"

# 1 "data/maps/Route129/scripts.pory"

# 2 "data/maps/Route129/scripts.pory"
Route129_MapScripts::
# 3 "data/maps/Route129/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route129_OnTransition
# 4 "data/maps/Route129/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route129_OnLoad
# 5 "data/maps/Route129/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route129_OnFrame
# 6 "data/maps/Route129/scripts.pory"
	.byte 0
# 7 "data/maps/Route129/scripts.pory"

# 8 "data/maps/Route129/scripts.pory"
Route129_OnLoad:
# 9 "data/maps/Route129/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 10 "data/maps/Route129/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_WEST, AbnormalWeather_EventScript_PlaceTilesRoute129West
# 11 "data/maps/Route129/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_EAST, AbnormalWeather_EventScript_PlaceTilesRoute129East
# 12 "data/maps/Route129/scripts.pory"
	end
# 13 "data/maps/Route129/scripts.pory"

# 14 "data/maps/Route129/scripts.pory"
Route129_OnTransition:
# 15 "data/maps/Route129/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 16 "data/maps/Route129/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 17 "data/maps/Route129/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, Route129_EventScript_CheckSetAbnormalWeather
# 18 "data/maps/Route129/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_WEST, AbnormalWeather_StartKyogreWeather
# 19 "data/maps/Route129/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_EAST, AbnormalWeather_StartKyogreWeather
# 20 "data/maps/Route129/scripts.pory"
	end
# 21 "data/maps/Route129/scripts.pory"

# 22 "data/maps/Route129/scripts.pory"
Route129_EventScript_CheckSetAbnormalWeather::
# 23 "data/maps/Route129/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 24 "data/maps/Route129/scripts.pory"
	return
# 25 "data/maps/Route129/scripts.pory"

# 26 "data/maps/Route129/scripts.pory"
Route129_OnFrame:
# 27 "data/maps/Route129/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 28 "data/maps/Route129/scripts.pory"
	.2byte 0
# 29 "data/maps/Route129/scripts.pory"

# 30 "data/maps/Route129/scripts.pory"
Route129_EventScript_Chase::
# 31 "data/maps/Route129/scripts.pory"
	trainerbattle_single TRAINER_CHASE, Route129_Text_ChaseIntro, Route129_Text_ChaseDefeat
# 32 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_ChasePostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route129/scripts.pory"
	end
# 34 "data/maps/Route129/scripts.pory"

# 35 "data/maps/Route129/scripts.pory"
Route129_EventScript_Allison::
# 36 "data/maps/Route129/scripts.pory"
	trainerbattle_single TRAINER_ALLISON, Route129_Text_AllisonIntro, Route129_Text_AllisonDefeat
# 37 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route129/scripts.pory"
	end
# 39 "data/maps/Route129/scripts.pory"

# 40 "data/maps/Route129/scripts.pory"
Route129_EventScript_Reed::
# 41 "data/maps/Route129/scripts.pory"
	trainerbattle_single TRAINER_REED, Route129_Text_ReedIntro, Route129_Text_ReedDefeat
# 42 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route129/scripts.pory"
	end
# 44 "data/maps/Route129/scripts.pory"

# 45 "data/maps/Route129/scripts.pory"
Route129_EventScript_Tisha::
# 46 "data/maps/Route129/scripts.pory"
	trainerbattle_single TRAINER_TISHA, Route129_Text_TishaIntro, Route129_Text_TishaDefeat
# 47 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_TishaPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route129/scripts.pory"
	end
# 49 "data/maps/Route129/scripts.pory"

# 50 "data/maps/Route129/scripts.pory"
Route129_EventScript_Clarence::
# 51 "data/maps/Route129/scripts.pory"
	trainerbattle_single TRAINER_CLARENCE, Route129_Text_ClarenceIntro, Route129_Text_ClarenceDefeat
# 52 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_ClarencePostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route129/scripts.pory"
	end

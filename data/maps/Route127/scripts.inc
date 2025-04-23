# 1 "data/maps/Route127/scripts.pory"

# 2 "data/maps/Route127/scripts.pory"
Route127_MapScripts::
# 3 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route127_OnTransition
# 4 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route127_OnLoad
# 5 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route127_OnFrame
# 6 "data/maps/Route127/scripts.pory"
	.byte 0
# 7 "data/maps/Route127/scripts.pory"

# 8 "data/maps/Route127/scripts.pory"
Route127_OnTransition:
# 9 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 10 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 11 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 12 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_StartKyogreWeather
# 13 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_StartKyogreWeather
# 14 "data/maps/Route127/scripts.pory"
	end
# 15 "data/maps/Route127/scripts.pory"

# 16 "data/maps/Route127/scripts.pory"
Route127_OnLoad:
# 17 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 18 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute127North
# 19 "data/maps/Route127/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute127South
# 20 "data/maps/Route127/scripts.pory"
	end
# 21 "data/maps/Route127/scripts.pory"

# 22 "data/maps/Route127/scripts.pory"
Route127_OnFrame:
# 23 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 24 "data/maps/Route127/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 25 "data/maps/Route127/scripts.pory"
	.2byte 0
# 26 "data/maps/Route127/scripts.pory"

# 27 "data/maps/Route127/scripts.pory"
Route127_EventScript_Camden::
# 28 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_CAMDEN, Route127_Text_CamdenIntro, Route127_Text_CamdenDefeat
# 29 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_CamdenPostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/Route127/scripts.pory"
	end
# 31 "data/maps/Route127/scripts.pory"

# 32 "data/maps/Route127/scripts.pory"
Route127_EventScript_Donny::
# 33 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_DONNY, Route127_Text_DonnyIntro, Route127_Text_DonnyDefeat
# 34 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route127/scripts.pory"
	end
# 36 "data/maps/Route127/scripts.pory"

# 37 "data/maps/Route127/scripts.pory"
Route127_EventScript_Jonah::
# 38 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_JONAH, Route127_Text_JonahIntro, Route127_Text_JonahDefeat
# 39 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/Route127/scripts.pory"
	end
# 41 "data/maps/Route127/scripts.pory"

# 42 "data/maps/Route127/scripts.pory"
Route127_EventScript_Henry::
# 43 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_HENRY, Route127_Text_HenryIntro, Route127_Text_HenryDefeat
# 44 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route127/scripts.pory"
	end
# 46 "data/maps/Route127/scripts.pory"

# 47 "data/maps/Route127/scripts.pory"
Route127_EventScript_Roger::
# 48 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ROGER, Route127_Text_RogerIntro, Route127_Text_RogerDefeat
# 49 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route127/scripts.pory"
	end
# 51 "data/maps/Route127/scripts.pory"

# 52 "data/maps/Route127/scripts.pory"
Route127_EventScript_Aidan::
# 53 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_AIDAN, Route127_Text_AidanIntro, Route127_Text_AidanDefeat
# 54 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route127/scripts.pory"
	end
# 56 "data/maps/Route127/scripts.pory"

# 57 "data/maps/Route127/scripts.pory"
Route127_EventScript_Athena::
# 58 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ATHENA, Route127_Text_AthenaIntro, Route127_Text_AthenaDefeat
# 59 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AthenaPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route127/scripts.pory"
	end
# 61 "data/maps/Route127/scripts.pory"

# 62 "data/maps/Route127/scripts.pory"
Route127_EventScript_Koji::
# 63 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_KOJI_1, Route127_Text_KojiIntro, Route127_Text_KojiDefeat, Route127_EventScript_RegisterKoji
# 64 "data/maps/Route127/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 65 "data/maps/Route127/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route127_EventScript_RematchKoji
# 66 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostBattle, MSGBOX_DEFAULT
# 67 "data/maps/Route127/scripts.pory"
	release
# 68 "data/maps/Route127/scripts.pory"
	end
# 69 "data/maps/Route127/scripts.pory"

# 70 "data/maps/Route127/scripts.pory"
Route127_EventScript_RegisterKoji::
# 71 "data/maps/Route127/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 72 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiRegister, MSGBOX_DEFAULT
# 74 "data/maps/Route127/scripts.pory"
	register_matchcall TRAINER_KOJI_1
# 75 "data/maps/Route127/scripts.pory"
	release
# 76 "data/maps/Route127/scripts.pory"
	end
# 77 "data/maps/Route127/scripts.pory"

# 78 "data/maps/Route127/scripts.pory"
Route127_EventScript_RematchKoji::
# 79 "data/maps/Route127/scripts.pory"
	trainerbattle_rematch TRAINER_KOJI_1, Route127_Text_KojiRematchIntro, Route127_Text_KojiRematchDefeat
# 80 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostRematch, MSGBOX_AUTOCLOSE
# 81 "data/maps/Route127/scripts.pory"
	end

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
Route132_EventScript_Gilbert::
# 12 "data/maps/Route132/scripts.pory"
	trainerbattle_single TRAINER_GILBERT, Route132_Text_GilbertIntro, Route132_Text_GilbertDefeat
# 13 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/Route132/scripts.pory"
	end
# 15 "data/maps/Route132/scripts.pory"

# 16 "data/maps/Route132/scripts.pory"
Route132_EventScript_Dana::
# 17 "data/maps/Route132/scripts.pory"
	trainerbattle_single TRAINER_DANA, Route132_Text_DanaIntro, Route132_Text_DanaDefeat
# 18 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route132/scripts.pory"
	end
# 20 "data/maps/Route132/scripts.pory"

# 21 "data/maps/Route132/scripts.pory"
Route132_EventScript_Ronald::
# 22 "data/maps/Route132/scripts.pory"
	trainerbattle_single TRAINER_RONALD, Route132_Text_RonaldIntro, Route132_Text_RonaldDefeat
# 23 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_RonaldPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route132/scripts.pory"
	end
# 25 "data/maps/Route132/scripts.pory"

# 26 "data/maps/Route132/scripts.pory"
Route132_EventScript_Kiyo::
# 27 "data/maps/Route132/scripts.pory"
	trainerbattle_single TRAINER_KIYO, Route132_Text_KiyoIntro, Route132_Text_KiyoDefeat
# 28 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route132/scripts.pory"
	end
# 30 "data/maps/Route132/scripts.pory"

# 31 "data/maps/Route132/scripts.pory"
Route132_EventScript_Paxton::
# 32 "data/maps/Route132/scripts.pory"
	trainerbattle_single TRAINER_PAXTON, Route132_Text_PaxtonIntro, Route132_Text_PaxtonDefeat
# 33 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_PaxtonPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route132/scripts.pory"
	end
# 35 "data/maps/Route132/scripts.pory"

# 36 "data/maps/Route132/scripts.pory"
Route132_EventScript_Darcy::
# 37 "data/maps/Route132/scripts.pory"
	trainerbattle_single TRAINER_DARCY, Route132_Text_DarcyIntro, Route132_Text_DarcyDefeat
# 38 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_DarcyPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route132/scripts.pory"
	end
# 40 "data/maps/Route132/scripts.pory"

# 41 "data/maps/Route132/scripts.pory"
Route132_EventScript_Jonathan::
# 42 "data/maps/Route132/scripts.pory"
	trainerbattle_single TRAINER_JONATHAN, Route132_Text_JonathanIntro, Route132_Text_JonathanDefeat
# 43 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_JonathanPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route132/scripts.pory"
	end
# 45 "data/maps/Route132/scripts.pory"

# 46 "data/maps/Route132/scripts.pory"
Route132_EventScript_Makayla::
# 47 "data/maps/Route132/scripts.pory"
	trainerbattle_single TRAINER_MAKAYLA, Route132_Text_MakaylaIntro, Route132_Text_MakaylaDefeat
# 48 "data/maps/Route132/scripts.pory"
	msgbox Route132_Text_MakaylaPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route132/scripts.pory"
	end

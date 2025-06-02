# 1 "data/maps/Route133/scripts.pory"

# 2 "data/maps/Route133/scripts.pory"
Route133_MapScripts::
# 3 "data/maps/Route133/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route133_OnTransition
# 4 "data/maps/Route133/scripts.pory"
	.byte 0
# 5 "data/maps/Route133/scripts.pory"

# 6 "data/maps/Route133/scripts.pory"
Route133_OnTransition:
# 7 "data/maps/Route133/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 8 "data/maps/Route133/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 9 "data/maps/Route133/scripts.pory"
	end
# 10 "data/maps/Route133/scripts.pory"

# 11 "data/maps/Route133/scripts.pory"
Route133_EventScript_Franklin::
# 12 "data/maps/Route133/scripts.pory"
	trainerbattle_single TRAINER_FRANKLIN, Route133_Text_FranklinIntro, Route133_Text_FranklinDefeat
# 13 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/Route133/scripts.pory"
	end
# 15 "data/maps/Route133/scripts.pory"

# 16 "data/maps/Route133/scripts.pory"
Route133_EventScript_Debra::
# 17 "data/maps/Route133/scripts.pory"
	trainerbattle_single TRAINER_DEBRA, Route133_Text_DebraIntro, Route133_Text_DebraDefeat
# 18 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_DebraPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route133/scripts.pory"
	end
# 20 "data/maps/Route133/scripts.pory"

# 21 "data/maps/Route133/scripts.pory"
Route133_EventScript_Linda::
# 22 "data/maps/Route133/scripts.pory"
	trainerbattle_single TRAINER_LINDA, Route133_Text_LindaIntro, Route133_Text_LindaDefeat
# 23 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_LindaPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route133/scripts.pory"
	end
# 25 "data/maps/Route133/scripts.pory"

# 26 "data/maps/Route133/scripts.pory"
Route133_EventScript_Warren::
# 27 "data/maps/Route133/scripts.pory"
	trainerbattle_single TRAINER_WARREN, Route133_Text_WarrenIntro, Route133_Text_WarrenDefeat
# 28 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route133/scripts.pory"
	end
# 30 "data/maps/Route133/scripts.pory"

# 31 "data/maps/Route133/scripts.pory"
Route133_EventScript_Beck::
# 32 "data/maps/Route133/scripts.pory"
	trainerbattle_single TRAINER_BECK, Route133_Text_BeckIntro, Route133_Text_BeckDefeat
# 33 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_BeckPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route133/scripts.pory"
	end
# 35 "data/maps/Route133/scripts.pory"

# 36 "data/maps/Route133/scripts.pory"
Route133_EventScript_Mollie::
# 37 "data/maps/Route133/scripts.pory"
	trainerbattle_single TRAINER_MOLLIE, Route133_Text_MollieIntro, Route133_Text_MollieDefeat
# 38 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_MolliePostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route133/scripts.pory"
	end
# 40 "data/maps/Route133/scripts.pory"

# 41 "data/maps/Route133/scripts.pory"
Route133_EventScript_Conor::
# 42 "data/maps/Route133/scripts.pory"
	trainerbattle_single TRAINER_CONOR, Route133_Text_ConorIntro, Route133_Text_ConorDefeat
# 43 "data/maps/Route133/scripts.pory"
	msgbox Route133_Text_ConorPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route133/scripts.pory"
	end

# 1 "data/maps/Route100/scripts.pory"

# 2 "data/maps/Route100/scripts.pory"
Route100_MapScripts::
# 3 "data/maps/Route100/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route100_OnTransition
# 4 "data/maps/Route100/scripts.pory"
	.byte 0
# 5 "data/maps/Route100/scripts.pory"

# 6 "data/maps/Route100/scripts.pory"
Route100_OnTransition:
# 7 "data/maps/Route100/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 8 "data/maps/Route100/scripts.pory"
	end

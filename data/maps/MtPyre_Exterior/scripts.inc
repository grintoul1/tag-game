# 1 "data/maps/MtPyre_Exterior/scripts.pory"

# 2 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_MapScripts::
# 3 "data/maps/MtPyre_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Exterior_OnTransition
# 4 "data/maps/MtPyre_Exterior/scripts.pory"
	.byte 0
# 5 "data/maps/MtPyre_Exterior/scripts.pory"

# 6 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_OnTransition:
# 7 "data/maps/MtPyre_Exterior/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 8 "data/maps/MtPyre_Exterior/scripts.pory"
	call MtPyre_Exterior_EventScript_CheckEnterFromSummit
# 9 "data/maps/MtPyre_Exterior/scripts.pory"
	end
# 10 "data/maps/MtPyre_Exterior/scripts.pory"

# 11 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_CheckEnterFromSummit::
# 12 "data/maps/MtPyre_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 13 "data/maps/MtPyre_Exterior/scripts.pory"
	goto_if_lt VAR_TEMP_1, 12, MtPyre_Exterior_EventScript_EnterFromSummit
# 14 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 15 "data/maps/MtPyre_Exterior/scripts.pory"

# 16 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_EnterFromSummit::
# 17 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 18 "data/maps/MtPyre_Exterior/scripts.pory"
	return
# 19 "data/maps/MtPyre_Exterior/scripts.pory"

# 20 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_FogTrigger::
# 21 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 22 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
# 23 "data/maps/MtPyre_Exterior/scripts.pory"
	end
# 24 "data/maps/MtPyre_Exterior/scripts.pory"

# 25 "data/maps/MtPyre_Exterior/scripts.pory"
MtPyre_Exterior_EventScript_SunTrigger::
# 26 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_SUNNY
# 27 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
# 28 "data/maps/MtPyre_Exterior/scripts.pory"
	end

# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 3 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 4 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_OnWarp
# 5 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_OnFrame
# 6 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity/scripts.pory"

# 8 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnWarp:
# 9 "data/maps/EverGrandeCity/scripts.pory"
	map_script_2 VAR_EMMIE_BATTLE_STATE, 3, EverGrandeCity_EventScript_EmmieCutsceneEmmiePos
# 10 "data/maps/EverGrandeCity/scripts.pory"
	.2byte 0
# 11 "data/maps/EverGrandeCity/scripts.pory"

# 12 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnFrame:
# 13 "data/maps/EverGrandeCity/scripts.pory"
	map_script_2 VAR_EMMIE_BATTLE_STATE, 3, EverGrandeCity_EventScript_EmmieCutscene
# 14 "data/maps/EverGrandeCity/scripts.pory"
	.2byte 0
# 15 "data/maps/EverGrandeCity/scripts.pory"

# 16 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 17 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 18 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 19 "data/maps/EverGrandeCity/scripts.pory"
	end
# 20 "data/maps/EverGrandeCity/scripts.pory"

# 21 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_EmmieCutsceneEmmiePos:
# 22 "data/maps/EverGrandeCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 23 "data/maps/EverGrandeCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 28, 16
# 24 "data/maps/EverGrandeCity/scripts.pory"
	turnobject OBJ_EVENT_ID_NPC_FOLLOWER, DIR_EAST
# 25 "data/maps/EverGrandeCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 26 "data/maps/EverGrandeCity/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_EVER_GRANDE_CITY
# 27 "data/maps/EverGrandeCity/scripts.pory"
	end
# 28 "data/maps/EverGrandeCity/scripts.pory"

# 29 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_EmmieCutscene:
# 30 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 31 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 32 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 33 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EmmieWasntSure, MSGBOX_AUTOCLOSE
# 34 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 35 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 36 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 37 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement 0
# 38 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EmmieThanksForPlaying, MSGBOX_AUTOCLOSE
# 39 "data/maps/EverGrandeCity/scripts.pory"
	delay 30
# 40 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_EMMIE_BATTLE_STATE, 4
# 41 "data/maps/EverGrandeCity/scripts.pory"
	playse SE_EXIT
# 42 "data/maps/EverGrandeCity/scripts.pory"
	warpsilent MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F, 9, 6
# 43 "data/maps/EverGrandeCity/scripts.pory"
	end
# 44 "data/maps/EverGrandeCity/scripts.pory"

# 45 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Movement_Heart:
# 46 "data/maps/EverGrandeCity/scripts.pory"
	emote_heart
# 47 "data/maps/EverGrandeCity/scripts.pory"
	step_end
# 48 "data/maps/EverGrandeCity/scripts.pory"

# 49 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EmmieThanksForPlaying:
# 50 "data/maps/EverGrandeCity/scripts.pory"
	.string "Thanks for playing with me!\p"
# 51 "data/maps/EverGrandeCity/scripts.pory"
	.string "Now, let's get in there and finish this!$"
# 52 "data/maps/EverGrandeCity/scripts.pory"

# 53 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EmmieWasntSure:
# 54 "data/maps/EverGrandeCity/scripts.pory"
	.string "Emmie: Thank you for coming outside. I\n"
# 55 "data/maps/EverGrandeCity/scripts.pory"
	.string "just wanted to say something before\l"
# 56 "data/maps/EverGrandeCity/scripts.pory"
	.string "we went inside.\p"
# 57 "data/maps/EverGrandeCity/scripts.pory"
	.string "When I first had the idea of us going on\n"
# 58 "data/maps/EverGrandeCity/scripts.pory"
	.string "this journey together, I admit I wasn't\l"
# 59 "data/maps/EverGrandeCity/scripts.pory"
	.string "sure if you would be up for it.\p"
# 60 "data/maps/EverGrandeCity/scripts.pory"
	.string "I guess I was worried that I wouldn't\n"
# 61 "data/maps/EverGrandeCity/scripts.pory"
	.string "give you the adventure that you were\l"
# 62 "data/maps/EverGrandeCity/scripts.pory"
	.string "looking for…\p"
# 63 "data/maps/EverGrandeCity/scripts.pory"
	.string "I mean, who wants their big sister\n"
# 64 "data/maps/EverGrandeCity/scripts.pory"
	.string "cramping their style, right?\p"
# 65 "data/maps/EverGrandeCity/scripts.pory"
	.string "But look how far we've come thanks to\n"
# 66 "data/maps/EverGrandeCity/scripts.pory"
	.string "your remarkable skills!\p"
# 67 "data/maps/EverGrandeCity/scripts.pory"
	.string "Whatever happens in there, I want you\n"
# 68 "data/maps/EverGrandeCity/scripts.pory"
	.string "to know how proud of you I am.\p"
# 69 "data/maps/EverGrandeCity/scripts.pory"
	.string "I hope that the fact that we've\n"
# 70 "data/maps/EverGrandeCity/scripts.pory"
	.string "travelled so far means you've enjoyed\l"
# 71 "data/maps/EverGrandeCity/scripts.pory"
	.string "our time together.\p"
# 72 "data/maps/EverGrandeCity/scripts.pory"
	.string "I suppose what I really want to say is…$"
# 73 "data/maps/EverGrandeCity/scripts.pory"

# 74 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 75 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 76 "data/maps/EverGrandeCity/scripts.pory"
	end
# 77 "data/maps/EverGrandeCity/scripts.pory"

# 78 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 79 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 80 "data/maps/EverGrandeCity/scripts.pory"
	end
# 81 "data/maps/EverGrandeCity/scripts.pory"

# 82 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 83 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 84 "data/maps/EverGrandeCity/scripts.pory"
	end
# 85 "data/maps/EverGrandeCity/scripts.pory"

# 86 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 87 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 88 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 89 "data/maps/EverGrandeCity/scripts.pory"
	end
# 90 "data/maps/EverGrandeCity/scripts.pory"

# 91 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 92 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 93 "data/maps/EverGrandeCity/scripts.pory"

# 94 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 95 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 96 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 97 "data/maps/EverGrandeCity/scripts.pory"

# 98 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 99 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 100 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 101 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

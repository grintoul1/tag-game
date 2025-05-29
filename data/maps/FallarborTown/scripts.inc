# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 3 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 4 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 5 "data/maps/FallarborTown/scripts.pory"

# 6 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 7 "data/maps/FallarborTown/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 8 "data/maps/FallarborTown/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 9 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 10 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 11 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 12 "data/maps/FallarborTown/scripts.pory"
	end
# 13 "data/maps/FallarborTown/scripts.pory"

# 14 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 15 "data/maps/FallarborTown/scripts.pory"
	lock
# 16 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 17 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 18 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 19 "data/maps/FallarborTown/scripts.pory"
	release
# 20 "data/maps/FallarborTown/scripts.pory"
	end
# 21 "data/maps/FallarborTown/scripts.pory"

# 22 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 23 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 24 "data/maps/FallarborTown/scripts.pory"
	release
# 25 "data/maps/FallarborTown/scripts.pory"
	end
# 26 "data/maps/FallarborTown/scripts.pory"

# 27 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 28 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 29 "data/maps/FallarborTown/scripts.pory"
	end
# 30 "data/maps/FallarborTown/scripts.pory"

# 31 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 32 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 33 "data/maps/FallarborTown/scripts.pory"
	end
# 34 "data/maps/FallarborTown/scripts.pory"

# 35 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 36 "data/maps/FallarborTown/scripts.pory"
	lock
# 37 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 38 "data/maps/FallarborTown/scripts.pory"
	waitse
# 39 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 40 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 41 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 42 "data/maps/FallarborTown/scripts.pory"
	release
# 43 "data/maps/FallarborTown/scripts.pory"
	end
# 44 "data/maps/FallarborTown/scripts.pory"

# 45 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 46 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 47 "data/maps/FallarborTown/scripts.pory"
	end
# 48 "data/maps/FallarborTown/scripts.pory"

# 49 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 50 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 51 "data/maps/FallarborTown/scripts.pory"
	end
# 52 "data/maps/FallarborTown/scripts.pory"

# 53 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 54 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 55 "data/maps/FallarborTown/scripts.pory"
	end
# 56 "data/maps/FallarborTown/scripts.pory"

# 57 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 58 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 59 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 60 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 61 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of PROF. COZMO's home…$"
# 62 "data/maps/FallarborTown/scripts.pory"

# 63 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 64 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 65 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 66 "data/maps/FallarborTown/scripts.pory"
	.string "They say METEOR FALLS was gouged out\n"
# 67 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 68 "data/maps/FallarborTown/scripts.pory"

# 69 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 70 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 71 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious AZURILL!\p"
# 72 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 73 "data/maps/FallarborTown/scripts.pory"

# 74 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 75 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Rooreelooo.$"
# 76 "data/maps/FallarborTown/scripts.pory"

# 77 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged FLANNERY,\n"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "the LEADER of LAVARIDGE GYM?\p"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the ELITE FOUR in the\l"
# 82 "data/maps/FallarborTown/scripts.pory"
	.string "POKéMON LEAGUE at one point.\p"
# 83 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see FLANNERY\n"
# 84 "data/maps/FallarborTown/scripts.pory"
	.string "become a great TRAINER in her own\l"
# 85 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 86 "data/maps/FallarborTown/scripts.pory"

# 87 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 88 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
# 89 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 90 "data/maps/FallarborTown/scripts.pory"

# 91 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 92 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
# 93 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 94 "data/maps/FallarborTown/scripts.pory"

# 95 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 96 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
# 97 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to POKéMON.”$"

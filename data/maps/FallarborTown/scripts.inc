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
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 9 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 10 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 11 "data/maps/FallarborTown/scripts.pory"
	end
# 12 "data/maps/FallarborTown/scripts.pory"

# 13 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 14 "data/maps/FallarborTown/scripts.pory"
	lock
# 15 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 16 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 17 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 18 "data/maps/FallarborTown/scripts.pory"
	release
# 19 "data/maps/FallarborTown/scripts.pory"
	end
# 20 "data/maps/FallarborTown/scripts.pory"

# 21 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 22 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 23 "data/maps/FallarborTown/scripts.pory"
	release
# 24 "data/maps/FallarborTown/scripts.pory"
	end
# 25 "data/maps/FallarborTown/scripts.pory"

# 26 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 27 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 28 "data/maps/FallarborTown/scripts.pory"
	end
# 29 "data/maps/FallarborTown/scripts.pory"

# 30 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 31 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 32 "data/maps/FallarborTown/scripts.pory"
	end
# 33 "data/maps/FallarborTown/scripts.pory"

# 34 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 35 "data/maps/FallarborTown/scripts.pory"
	lock
# 36 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 37 "data/maps/FallarborTown/scripts.pory"
	waitse
# 38 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 39 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 40 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 41 "data/maps/FallarborTown/scripts.pory"
	release
# 42 "data/maps/FallarborTown/scripts.pory"
	end
# 43 "data/maps/FallarborTown/scripts.pory"

# 44 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 45 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 46 "data/maps/FallarborTown/scripts.pory"
	end
# 47 "data/maps/FallarborTown/scripts.pory"

# 48 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 49 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 50 "data/maps/FallarborTown/scripts.pory"
	end
# 51 "data/maps/FallarborTown/scripts.pory"

# 52 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 53 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 54 "data/maps/FallarborTown/scripts.pory"
	end
# 55 "data/maps/FallarborTown/scripts.pory"

# 56 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 57 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 58 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 59 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 60 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of PROF. COZMO's home…$"
# 61 "data/maps/FallarborTown/scripts.pory"

# 62 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 63 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 64 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 65 "data/maps/FallarborTown/scripts.pory"
	.string "They say METEOR FALLS was gouged out\n"
# 66 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 67 "data/maps/FallarborTown/scripts.pory"

# 68 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 69 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 70 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious AZURILL!\p"
# 71 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 72 "data/maps/FallarborTown/scripts.pory"

# 73 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 74 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Rooreelooo.$"
# 75 "data/maps/FallarborTown/scripts.pory"

# 76 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 77 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged FLANNERY,\n"
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "the LEADER of LAVARIDGE GYM?\p"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the ELITE FOUR in the\l"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "POKéMON LEAGUE at one point.\p"
# 82 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see FLANNERY\n"
# 83 "data/maps/FallarborTown/scripts.pory"
	.string "become a great TRAINER in her own\l"
# 84 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 85 "data/maps/FallarborTown/scripts.pory"

# 86 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 87 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
# 88 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 89 "data/maps/FallarborTown/scripts.pory"

# 90 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 91 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
# 92 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 93 "data/maps/FallarborTown/scripts.pory"

# 94 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 95 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
# 96 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to POKéMON.”$"

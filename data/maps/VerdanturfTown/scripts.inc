# 1 "data/maps/VerdanturfTown/scripts.pory"

# 2 "data/maps/VerdanturfTown/scripts.pory"
.set LOCALID_TWIN, 2
# 3 "data/maps/VerdanturfTown/scripts.pory"

# 4 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 5 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 6 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 7 "data/maps/VerdanturfTown/scripts.pory"

# 8 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 9 "data/maps/VerdanturfTown/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 10 "data/maps/VerdanturfTown/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 11 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 12 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 13 "data/maps/VerdanturfTown/scripts.pory"
	end
# 14 "data/maps/VerdanturfTown/scripts.pory"

# 15 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 16 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 17 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 18 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 19 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 20 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 21 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 22 "data/maps/VerdanturfTown/scripts.pory"
	release
# 23 "data/maps/VerdanturfTown/scripts.pory"
	end
# 24 "data/maps/VerdanturfTown/scripts.pory"

# 25 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 26 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 27 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 28 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 29 "data/maps/VerdanturfTown/scripts.pory"
	release
# 30 "data/maps/VerdanturfTown/scripts.pory"
	end
# 31 "data/maps/VerdanturfTown/scripts.pory"

# 32 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 33 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 34 "data/maps/VerdanturfTown/scripts.pory"
	end
# 35 "data/maps/VerdanturfTown/scripts.pory"

# 36 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 37 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 38 "data/maps/VerdanturfTown/scripts.pory"
	end
# 39 "data/maps/VerdanturfTown/scripts.pory"

# 40 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 41 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 42 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 43 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 44 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 45 "data/maps/VerdanturfTown/scripts.pory"
	release
# 46 "data/maps/VerdanturfTown/scripts.pory"
	end
# 47 "data/maps/VerdanturfTown/scripts.pory"

# 48 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 49 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 50 "data/maps/VerdanturfTown/scripts.pory"
	release
# 51 "data/maps/VerdanturfTown/scripts.pory"
	end
# 52 "data/maps/VerdanturfTown/scripts.pory"

# 53 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 54 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 55 "data/maps/VerdanturfTown/scripts.pory"
	end
# 56 "data/maps/VerdanturfTown/scripts.pory"

# 57 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 58 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 59 "data/maps/VerdanturfTown/scripts.pory"
	end
# 60 "data/maps/VerdanturfTown/scripts.pory"

# 61 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 62 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 63 "data/maps/VerdanturfTown/scripts.pory"
	end
# 64 "data/maps/VerdanturfTown/scripts.pory"

# 65 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 66 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 67 "data/maps/VerdanturfTown/scripts.pory"
	end
# 68 "data/maps/VerdanturfTown/scripts.pory"

# 69 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManTryingToDigTunnel:
# 70 "data/maps/VerdanturfTown/scripts.pory"
	.string "My papa told me.\p"
# 71 "data/maps/VerdanturfTown/scripts.pory"
	.string "He says this tunnel is full of\n"
# 72 "data/maps/VerdanturfTown/scripts.pory"
	.string "timid POKéMON.\p"
# 73 "data/maps/VerdanturfTown/scripts.pory"
	.string "They get all scared of loud noise and\n"
# 74 "data/maps/VerdanturfTown/scripts.pory"
	.string "make a big uproar.\p"
# 75 "data/maps/VerdanturfTown/scripts.pory"
	.string "So they had to stop the big tunnel\n"
# 76 "data/maps/VerdanturfTown/scripts.pory"
	.string "project.\p"
# 77 "data/maps/VerdanturfTown/scripts.pory"
	.string "But there's one man. He's trying to dig\n"
# 78 "data/maps/VerdanturfTown/scripts.pory"
	.string "the tunnel by himself!$"
# 79 "data/maps/VerdanturfTown/scripts.pory"

# 80 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove:
# 81 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\n"
# 82 "data/maps/VerdanturfTown/scripts.pory"
	.string "a lady he loved.\p"
# 83 "data/maps/VerdanturfTown/scripts.pory"
	.string "I don't really get it, but hey!$"
# 84 "data/maps/VerdanturfTown/scripts.pory"

# 85 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere:
# 86 "data/maps/VerdanturfTown/scripts.pory"
	.string "The way the winds blow, volcanic ash\n"
# 87 "data/maps/VerdanturfTown/scripts.pory"
	.string "is never blown in this direction.\p"
# 88 "data/maps/VerdanturfTown/scripts.pory"
	.string "The air is clean and delicious here.\n"
# 89 "data/maps/VerdanturfTown/scripts.pory"
	.string "Living here should do wonders for even\l"
# 90 "data/maps/VerdanturfTown/scripts.pory"
	.string "frail and sickly people.$"
# 91 "data/maps/VerdanturfTown/scripts.pory"

# 92 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut:
# 93 "data/maps/VerdanturfTown/scripts.pory"
	.string "My POKéMON and I, we've been riding\n"
# 94 "data/maps/VerdanturfTown/scripts.pory"
	.string "a hot winning streak.\p"
# 95 "data/maps/VerdanturfTown/scripts.pory"
	.string "So I decided to make my BATTLE TENT\n"
# 96 "data/maps/VerdanturfTown/scripts.pory"
	.string "debut in this town.$"
# 97 "data/maps/VerdanturfTown/scripts.pory"

# 98 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 99 "data/maps/VerdanturfTown/scripts.pory"
	.string "Did you see the cave next to the\n"
# 100 "data/maps/VerdanturfTown/scripts.pory"
	.string "POKéMON MART?\p"
# 101 "data/maps/VerdanturfTown/scripts.pory"
	.string "There's a guy in there who's trying to\n"
# 102 "data/maps/VerdanturfTown/scripts.pory"
	.string "bust up boulders so he can bust out\l"
# 103 "data/maps/VerdanturfTown/scripts.pory"
	.string "through to the other side.\p"
# 104 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'd be great if we could go through…\n"
# 105 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'll make it easy to visit RUSTBORO.$"
# 106 "data/maps/VerdanturfTown/scripts.pory"

# 107 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow:
# 108 "data/maps/VerdanturfTown/scripts.pory"
	.string "That cave next to the POKéMON MART\n"
# 109 "data/maps/VerdanturfTown/scripts.pory"
	.string "is now a tunnel to the other side.\p"
# 110 "data/maps/VerdanturfTown/scripts.pory"
	.string "It's great--it's easy to go shop for\n"
# 111 "data/maps/VerdanturfTown/scripts.pory"
	.string "new DEVON products in RUSTBORO now.$"
# 112 "data/maps/VerdanturfTown/scripts.pory"

# 113 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign:
# 114 "data/maps/VerdanturfTown/scripts.pory"
	.string "VERDANTURF TOWN\p"
# 115 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The windswept highlands with the\n"
# 116 "data/maps/VerdanturfTown/scripts.pory"
	.string "sweet fragrance of grass.”$"
# 117 "data/maps/VerdanturfTown/scripts.pory"

# 118 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse:
# 119 "data/maps/VerdanturfTown/scripts.pory"
	.string "WANDA'S HOUSE$"
# 120 "data/maps/VerdanturfTown/scripts.pory"

# 121 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign:
# 122 "data/maps/VerdanturfTown/scripts.pory"
	.string "BATTLE TENT VERDANTURF SITE\n"
# 123 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Feast Your Eyes on Battles!”$"
# 124 "data/maps/VerdanturfTown/scripts.pory"

# 125 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign:
# 126 "data/maps/VerdanturfTown/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 127 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 128 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The tunnel project has been\n"
# 129 "data/maps/VerdanturfTown/scripts.pory"
	.string "canceled.”$"

# 1 "data/maps/FortreeCity/scripts.pory"

# 2 "data/maps/FortreeCity/scripts.pory"
.set LOCALID_SHELLY, 8
# 3 "data/maps/FortreeCity/scripts.pory"

# 4 "data/maps/FortreeCity/scripts.pory"

# 5 "data/maps/FortreeCity/scripts.pory"
FortreeCity_MapScripts::
# 6 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
# 7 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
# 8 "data/maps/FortreeCity/scripts.pory"
	.byte 0
# 9 "data/maps/FortreeCity/scripts.pory"

# 10 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnTransition:
# 11 "data/maps/FortreeCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 12 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 13 "data/maps/FortreeCity/scripts.pory"
	end
# 14 "data/maps/FortreeCity/scripts.pory"

# 15 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume:
# 16 "data/maps/FortreeCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 17 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 18 "data/maps/FortreeCity/scripts.pory"
	end
# 19 "data/maps/FortreeCity/scripts.pory"

# 20 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Shelly::
# 21 "data/maps/FortreeCity/scripts.pory"
	lockall 
# 22 "data/maps/FortreeCity/scripts.pory"
	delay 50
# 23 "data/maps/FortreeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 24 "data/maps/FortreeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 25 "data/maps/FortreeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 26 "data/maps/FortreeCity/scripts.pory"
	addobject LOCALID_SHELLY
# 27 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_SHELLY, FortreeCity_Movement_ShellyApproachPlayer
# 28 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 29 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 30 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 31 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ShellyComeToJaggedPass, MSGBOX_DEFAULT
# 32 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 33 "data/maps/FortreeCity/scripts.pory"
	giveitem ITEM_HM_FLY
# 34 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 35 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 36 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 37 "data/maps/FortreeCity/scripts.pory"
	delay 50
# 38 "data/maps/FortreeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 39 "data/maps/FortreeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 40 "data/maps/FortreeCity/scripts.pory"
	delay 15
# 41 "data/maps/FortreeCity/scripts.pory"
	removeobject LOCALID_SHELLY
# 42 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_HIDE_FORTREE_SHELLY
# 43 "data/maps/FortreeCity/scripts.pory"
	clearflag FLAG_HIDE_JAGGED_PASS_SHELLY
# 44 "data/maps/FortreeCity/scripts.pory"
	addvar VAR_FORTREE_CITY_STATE, 1 
# 45 "data/maps/FortreeCity/scripts.pory"
	end
# 46 "data/maps/FortreeCity/scripts.pory"

# 47 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_ShellyApproachPlayer:
# 48 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 49 "data/maps/FortreeCity/scripts.pory"
	step_end
# 50 "data/maps/FortreeCity/scripts.pory"

# 51 "data/maps/FortreeCity/scripts.pory"

# 52 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 53 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 54 "data/maps/FortreeCity/scripts.pory"
	end
# 55 "data/maps/FortreeCity/scripts.pory"

# 56 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 57 "data/maps/FortreeCity/scripts.pory"
	lock
# 58 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 59 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 60 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 61 "data/maps/FortreeCity/scripts.pory"
	release
# 62 "data/maps/FortreeCity/scripts.pory"
	end
# 63 "data/maps/FortreeCity/scripts.pory"

# 64 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 65 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 66 "data/maps/FortreeCity/scripts.pory"
	release
# 67 "data/maps/FortreeCity/scripts.pory"
	end
# 68 "data/maps/FortreeCity/scripts.pory"

# 69 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 70 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 71 "data/maps/FortreeCity/scripts.pory"
	end
# 72 "data/maps/FortreeCity/scripts.pory"

# 73 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 74 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 75 "data/maps/FortreeCity/scripts.pory"
	end
# 76 "data/maps/FortreeCity/scripts.pory"

# 77 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 78 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 79 "data/maps/FortreeCity/scripts.pory"
	end
# 80 "data/maps/FortreeCity/scripts.pory"

# 81 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 82 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 83 "data/maps/FortreeCity/scripts.pory"
	end
# 84 "data/maps/FortreeCity/scripts.pory"

# 85 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 86 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 87 "data/maps/FortreeCity/scripts.pory"
	end
# 88 "data/maps/FortreeCity/scripts.pory"

# 89 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 90 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 91 "data/maps/FortreeCity/scripts.pory"
	end
# 92 "data/maps/FortreeCity/scripts.pory"

# 93 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 94 "data/maps/FortreeCity/scripts.pory"
	lock
# 95 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 96 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 97 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 98 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 99 "data/maps/FortreeCity/scripts.pory"
	release
# 100 "data/maps/FortreeCity/scripts.pory"
	end
# 101 "data/maps/FortreeCity/scripts.pory"

# 102 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 103 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 104 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 105 "data/maps/FortreeCity/scripts.pory"
	release
# 106 "data/maps/FortreeCity/scripts.pory"
	end
# 107 "data/maps/FortreeCity/scripts.pory"

# 108 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 109 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 110 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 111 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 112 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/FortreeCity/scripts.pory"
	waitse
# 114 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 115 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 116 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 117 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 118 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 119 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 120 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 121 "data/maps/FortreeCity/scripts.pory"
	release
# 122 "data/maps/FortreeCity/scripts.pory"
	end
# 123 "data/maps/FortreeCity/scripts.pory"

# 124 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 125 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 126 "data/maps/FortreeCity/scripts.pory"
	step_end
# 127 "data/maps/FortreeCity/scripts.pory"

# 128 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ShellyComeToJaggedPass:
# 129 "data/maps/FortreeCity/scripts.pory"
	.string "Shelly: Hey kid. Remember me?\p"
# 130 "data/maps/FortreeCity/scripts.pory"
	.string "Archie told me what happened at Mt.\n"
# 131 "data/maps/FortreeCity/scripts.pory"
	.string "Pyre.\p"
# 132 "data/maps/FortreeCity/scripts.pory"
	.string "Whatever your opinion on Team Aqua's\n"
# 133 "data/maps/FortreeCity/scripts.pory"
	.string "goals, you have so recognise the harm\l"
# 134 "data/maps/FortreeCity/scripts.pory"
	.string "Team Magma will cause to Hoenn.\p"
# 135 "data/maps/FortreeCity/scripts.pory"
	.string "I stuck around Mt. Chimney after you\n"
# 136 "data/maps/FortreeCity/scripts.pory"
	.string "left and believe I have located Team\l"
# 137 "data/maps/FortreeCity/scripts.pory"
	.string "Magma's hideout.\p"
# 138 "data/maps/FortreeCity/scripts.pory"
	.string "Archie doesn't trust you, perhaps with\n"
# 139 "data/maps/FortreeCity/scripts.pory"
	.string "good reason, but I trust that you also\l"
# 140 "data/maps/FortreeCity/scripts.pory"
	.string "don't want Team Magma to succeed.\p"
# 141 "data/maps/FortreeCity/scripts.pory"
	.string "I could use some help infiltrating the\n"
# 142 "data/maps/FortreeCity/scripts.pory"
	.string "Team Magma hideout, and I can't call on\l"
# 143 "data/maps/FortreeCity/scripts.pory"
	.string "Matt right now.\p"
# 144 "data/maps/FortreeCity/scripts.pory"
	.string "If you fancy doing something useful for\n"
# 145 "data/maps/FortreeCity/scripts.pory"
	.string "once, meet me on Jagged Pass near\l"
# 146 "data/maps/FortreeCity/scripts.pory"
	.string "Lavaridge Town.\p"
# 147 "data/maps/FortreeCity/scripts.pory"
	.string "Here, take this as well. I hope to see\n"
# 148 "data/maps/FortreeCity/scripts.pory"
	.string "you there.$"
# 149 "data/maps/FortreeCity/scripts.pory"

# 150 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 151 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
# 152 "data/maps/FortreeCity/scripts.pory"
	.string "gigantic POKéMON in the sky.\p"
# 153 "data/maps/FortreeCity/scripts.pory"
	.string "It seemed to squirm as it flew toward\n"
# 154 "data/maps/FortreeCity/scripts.pory"
	.string "ROUTE 131.\p"
# 155 "data/maps/FortreeCity/scripts.pory"
	.string "By the way… Sniff…\n"
# 156 "data/maps/FortreeCity/scripts.pory"
	.string "Um… You, uh…smell singed.\p"
# 157 "data/maps/FortreeCity/scripts.pory"
	.string "Were you at a volcano or something?$"
# 158 "data/maps/FortreeCity/scripts.pory"

# 159 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 160 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
# 161 "data/maps/FortreeCity/scripts.pory"
	.string "but something's blocking the way.\p"
# 162 "data/maps/FortreeCity/scripts.pory"
	.string "After all the bother I went through\n"
# 163 "data/maps/FortreeCity/scripts.pory"
	.string "training on ROUTE 120…$"
# 164 "data/maps/FortreeCity/scripts.pory"

# 165 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 166 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
# 167 "data/maps/FortreeCity/scripts.pory"
	.string "with me. This time, I'll beat WINONA.$"
# 168 "data/maps/FortreeCity/scripts.pory"

# 169 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 170 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
# 171 "data/maps/FortreeCity/scripts.pory"
	.string "trees grow by drinking that water…\p"
# 172 "data/maps/FortreeCity/scripts.pory"
	.string "Our FORTREE CITY exists because\n"
# 173 "data/maps/FortreeCity/scripts.pory"
	.string "there's both water and soil.$"
# 174 "data/maps/FortreeCity/scripts.pory"

# 175 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 176 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
# 177 "data/maps/FortreeCity/scripts.pory"
	.string "trees.\p"
# 178 "data/maps/FortreeCity/scripts.pory"
	.string "Perhaps because of that lifestyle,\n"
# 179 "data/maps/FortreeCity/scripts.pory"
	.string "everyone is healthy and lively.\p"
# 180 "data/maps/FortreeCity/scripts.pory"
	.string "Why, even myself--I feel as if I've\n"
# 181 "data/maps/FortreeCity/scripts.pory"
	.string "grown thirty years younger.$"
# 182 "data/maps/FortreeCity/scripts.pory"

# 183 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 184 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
# 185 "data/maps/FortreeCity/scripts.pory"
	.string "But sometimes BUG POKéMON come in\n"
# 186 "data/maps/FortreeCity/scripts.pory"
	.string "through windows.\l"
# 187 "data/maps/FortreeCity/scripts.pory"
	.string "It can be really startling.$"
# 188 "data/maps/FortreeCity/scripts.pory"

# 189 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 190 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
# 191 "data/maps/FortreeCity/scripts.pory"
	.string "you trade them! That's what I heard.$"
# 192 "data/maps/FortreeCity/scripts.pory"

# 193 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 194 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"
# 195 "data/maps/FortreeCity/scripts.pory"

# 196 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 197 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 198 "data/maps/FortreeCity/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 199 "data/maps/FortreeCity/scripts.pory"

# 200 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 201 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 202 "data/maps/FortreeCity/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 203 "data/maps/FortreeCity/scripts.pory"
	.string "visible!\p"
# 204 "data/maps/FortreeCity/scripts.pory"
	.string "The startled POKéMON fled!$"
# 205 "data/maps/FortreeCity/scripts.pory"

# 206 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 207 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
# 208 "data/maps/FortreeCity/scripts.pory"
	.string "“The treetop city that frolics with\l"
# 209 "data/maps/FortreeCity/scripts.pory"
	.string "nature.”$"
# 210 "data/maps/FortreeCity/scripts.pory"

# 211 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 212 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
# 213 "data/maps/FortreeCity/scripts.pory"
	.string "LEADER: WINONA\p"
# 214 "data/maps/FortreeCity/scripts.pory"
	.string "“The bird user taking flight into\n"
# 215 "data/maps/FortreeCity/scripts.pory"
	.string "the world.”$"

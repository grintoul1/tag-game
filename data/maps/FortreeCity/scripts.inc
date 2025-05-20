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
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 28 "data/maps/FortreeCity/scripts.pory"
	call_if_eq VAR_TEMP_3, 24, FortreeCity_EventScript_EmmieMoveForShelly1
# 29 "data/maps/FortreeCity/scripts.pory"
	call_if_eq VAR_TEMP_3, 25, FortreeCity_EventScript_EmmieMoveForShelly2
# 30 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_SHELLY, FortreeCity_Movement_ShellyApproachPlayer
# 31 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 32 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 33 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ShellyComeToJaggedPass, MSGBOX_DEFAULT
# 35 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 36 "data/maps/FortreeCity/scripts.pory"
	giveitem ITEM_HM_FLY
# 37 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 38 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 39 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 40 "data/maps/FortreeCity/scripts.pory"
	delay 50
# 41 "data/maps/FortreeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 42 "data/maps/FortreeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 43 "data/maps/FortreeCity/scripts.pory"
	delay 15
# 44 "data/maps/FortreeCity/scripts.pory"
	removeobject LOCALID_SHELLY
# 45 "data/maps/FortreeCity/scripts.pory"
	delay 15
# 46 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, FortreeCity_Movement_EmmieReturnToPlayer
# 47 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_HIDE_FORTREE_SHELLY
# 49 "data/maps/FortreeCity/scripts.pory"
	clearflag FLAG_HIDE_JAGGED_PASS_SHELLY
# 50 "data/maps/FortreeCity/scripts.pory"
	addvar VAR_FORTREE_CITY_STATE, 1 
# 51 "data/maps/FortreeCity/scripts.pory"
	end
# 52 "data/maps/FortreeCity/scripts.pory"

# 53 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_EmmieReturnToPlayer:
# 54 "data/maps/FortreeCity/scripts.pory"
	walk_up
# 55 "data/maps/FortreeCity/scripts.pory"
	face_right
# 56 "data/maps/FortreeCity/scripts.pory"
	step_end
# 57 "data/maps/FortreeCity/scripts.pory"

# 58 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_EmmieMoveForShelly1::
# 59 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, FortreeCity_Movement_EmmieMoveForShelly1
# 60 "data/maps/FortreeCity/scripts.pory"
	return
# 61 "data/maps/FortreeCity/scripts.pory"

# 62 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_EmmieMoveForShelly1:
# 63 "data/maps/FortreeCity/scripts.pory"
	walk_down
# 64 "data/maps/FortreeCity/scripts.pory"
	face_up
# 65 "data/maps/FortreeCity/scripts.pory"
	step_end
# 66 "data/maps/FortreeCity/scripts.pory"

# 67 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_EmmieMoveForShelly2::
# 68 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, FortreeCity_Movement_EmmieMoveForShelly2
# 69 "data/maps/FortreeCity/scripts.pory"
	return
# 70 "data/maps/FortreeCity/scripts.pory"

# 71 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_EmmieMoveForShelly2:
# 72 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 73 "data/maps/FortreeCity/scripts.pory"
	face_up
# 74 "data/maps/FortreeCity/scripts.pory"
	step_end
# 75 "data/maps/FortreeCity/scripts.pory"

# 76 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_ShellyApproachPlayer:
# 77 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 78 "data/maps/FortreeCity/scripts.pory"
	step_end
# 79 "data/maps/FortreeCity/scripts.pory"

# 80 "data/maps/FortreeCity/scripts.pory"

# 81 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 82 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 83 "data/maps/FortreeCity/scripts.pory"
	end
# 84 "data/maps/FortreeCity/scripts.pory"

# 85 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 86 "data/maps/FortreeCity/scripts.pory"
	lock
# 87 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 88 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 89 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 90 "data/maps/FortreeCity/scripts.pory"
	release
# 91 "data/maps/FortreeCity/scripts.pory"
	end
# 92 "data/maps/FortreeCity/scripts.pory"

# 93 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 94 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 95 "data/maps/FortreeCity/scripts.pory"
	release
# 96 "data/maps/FortreeCity/scripts.pory"
	end
# 97 "data/maps/FortreeCity/scripts.pory"

# 98 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 99 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 100 "data/maps/FortreeCity/scripts.pory"
	end
# 101 "data/maps/FortreeCity/scripts.pory"

# 102 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 103 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 104 "data/maps/FortreeCity/scripts.pory"
	end
# 105 "data/maps/FortreeCity/scripts.pory"

# 106 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 107 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 108 "data/maps/FortreeCity/scripts.pory"
	end
# 109 "data/maps/FortreeCity/scripts.pory"

# 110 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 111 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 112 "data/maps/FortreeCity/scripts.pory"
	end
# 113 "data/maps/FortreeCity/scripts.pory"

# 114 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 115 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 116 "data/maps/FortreeCity/scripts.pory"
	end
# 117 "data/maps/FortreeCity/scripts.pory"

# 118 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 119 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 120 "data/maps/FortreeCity/scripts.pory"
	end
# 121 "data/maps/FortreeCity/scripts.pory"

# 122 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 123 "data/maps/FortreeCity/scripts.pory"
	lock
# 124 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 125 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 126 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 127 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 128 "data/maps/FortreeCity/scripts.pory"
	release
# 129 "data/maps/FortreeCity/scripts.pory"
	end
# 130 "data/maps/FortreeCity/scripts.pory"

# 131 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 132 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 133 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 134 "data/maps/FortreeCity/scripts.pory"
	release
# 135 "data/maps/FortreeCity/scripts.pory"
	end
# 136 "data/maps/FortreeCity/scripts.pory"

# 137 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 138 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 139 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 140 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 141 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 142 "data/maps/FortreeCity/scripts.pory"
	waitse
# 143 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 144 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 145 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 146 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 147 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 148 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 149 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 150 "data/maps/FortreeCity/scripts.pory"
	release
# 151 "data/maps/FortreeCity/scripts.pory"
	end
# 152 "data/maps/FortreeCity/scripts.pory"

# 153 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 154 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 155 "data/maps/FortreeCity/scripts.pory"
	step_end
# 156 "data/maps/FortreeCity/scripts.pory"

# 157 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ShellyComeToJaggedPass:
# 158 "data/maps/FortreeCity/scripts.pory"
	.string "Shelly: Hey kid. Remember me?\p"
# 159 "data/maps/FortreeCity/scripts.pory"
	.string "Archie told me what happened at Mt.\n"
# 160 "data/maps/FortreeCity/scripts.pory"
	.string "Pyre.\p"
# 161 "data/maps/FortreeCity/scripts.pory"
	.string "Whatever your opinion on Team Aqua's\n"
# 162 "data/maps/FortreeCity/scripts.pory"
	.string "goals, you have so recognise the harm\l"
# 163 "data/maps/FortreeCity/scripts.pory"
	.string "Team Magma will cause to Hoenn.\p"
# 164 "data/maps/FortreeCity/scripts.pory"
	.string "I stuck around Mt. Chimney after you\n"
# 165 "data/maps/FortreeCity/scripts.pory"
	.string "left and believe I have located Team\l"
# 166 "data/maps/FortreeCity/scripts.pory"
	.string "Magma's hideout.\p"
# 167 "data/maps/FortreeCity/scripts.pory"
	.string "Archie doesn't trust you, perhaps with\n"
# 168 "data/maps/FortreeCity/scripts.pory"
	.string "good reason, but I trust that you also\l"
# 169 "data/maps/FortreeCity/scripts.pory"
	.string "don't want Team Magma to succeed.\p"
# 170 "data/maps/FortreeCity/scripts.pory"
	.string "I could use some help infiltrating the\n"
# 171 "data/maps/FortreeCity/scripts.pory"
	.string "Team Magma hideout, and I can't call on\l"
# 172 "data/maps/FortreeCity/scripts.pory"
	.string "Matt right now.\p"
# 173 "data/maps/FortreeCity/scripts.pory"
	.string "If you fancy doing something useful for\n"
# 174 "data/maps/FortreeCity/scripts.pory"
	.string "once, meet me on Jagged Pass near\l"
# 175 "data/maps/FortreeCity/scripts.pory"
	.string "Lavaridge Town.\p"
# 176 "data/maps/FortreeCity/scripts.pory"
	.string "Here, take this as well. I hope to see\n"
# 177 "data/maps/FortreeCity/scripts.pory"
	.string "you there.$"
# 178 "data/maps/FortreeCity/scripts.pory"

# 179 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 180 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
# 181 "data/maps/FortreeCity/scripts.pory"
	.string "gigantic POKéMON in the sky.\p"
# 182 "data/maps/FortreeCity/scripts.pory"
	.string "It seemed to squirm as it flew toward\n"
# 183 "data/maps/FortreeCity/scripts.pory"
	.string "ROUTE 131.\p"
# 184 "data/maps/FortreeCity/scripts.pory"
	.string "By the way… Sniff…\n"
# 185 "data/maps/FortreeCity/scripts.pory"
	.string "Um… You, uh…smell singed.\p"
# 186 "data/maps/FortreeCity/scripts.pory"
	.string "Were you at a volcano or something?$"
# 187 "data/maps/FortreeCity/scripts.pory"

# 188 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 189 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
# 190 "data/maps/FortreeCity/scripts.pory"
	.string "but something's blocking the way.\p"
# 191 "data/maps/FortreeCity/scripts.pory"
	.string "After all the bother I went through\n"
# 192 "data/maps/FortreeCity/scripts.pory"
	.string "training on ROUTE 120…$"
# 193 "data/maps/FortreeCity/scripts.pory"

# 194 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 195 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
# 196 "data/maps/FortreeCity/scripts.pory"
	.string "with me. This time, I'll beat WINONA.$"
# 197 "data/maps/FortreeCity/scripts.pory"

# 198 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 199 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
# 200 "data/maps/FortreeCity/scripts.pory"
	.string "trees grow by drinking that water…\p"
# 201 "data/maps/FortreeCity/scripts.pory"
	.string "Our FORTREE CITY exists because\n"
# 202 "data/maps/FortreeCity/scripts.pory"
	.string "there's both water and soil.$"
# 203 "data/maps/FortreeCity/scripts.pory"

# 204 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 205 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
# 206 "data/maps/FortreeCity/scripts.pory"
	.string "trees.\p"
# 207 "data/maps/FortreeCity/scripts.pory"
	.string "Perhaps because of that lifestyle,\n"
# 208 "data/maps/FortreeCity/scripts.pory"
	.string "everyone is healthy and lively.\p"
# 209 "data/maps/FortreeCity/scripts.pory"
	.string "Why, even myself--I feel as if I've\n"
# 210 "data/maps/FortreeCity/scripts.pory"
	.string "grown thirty years younger.$"
# 211 "data/maps/FortreeCity/scripts.pory"

# 212 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 213 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
# 214 "data/maps/FortreeCity/scripts.pory"
	.string "But sometimes BUG POKéMON come in\n"
# 215 "data/maps/FortreeCity/scripts.pory"
	.string "through windows.\l"
# 216 "data/maps/FortreeCity/scripts.pory"
	.string "It can be really startling.$"
# 217 "data/maps/FortreeCity/scripts.pory"

# 218 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 219 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
# 220 "data/maps/FortreeCity/scripts.pory"
	.string "you trade them! That's what I heard.$"
# 221 "data/maps/FortreeCity/scripts.pory"

# 222 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 223 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"
# 224 "data/maps/FortreeCity/scripts.pory"

# 225 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 226 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 227 "data/maps/FortreeCity/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 228 "data/maps/FortreeCity/scripts.pory"

# 229 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 230 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 231 "data/maps/FortreeCity/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 232 "data/maps/FortreeCity/scripts.pory"
	.string "visible!\p"
# 233 "data/maps/FortreeCity/scripts.pory"
	.string "The startled POKéMON fled!$"
# 234 "data/maps/FortreeCity/scripts.pory"

# 235 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 236 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
# 237 "data/maps/FortreeCity/scripts.pory"
	.string "“The treetop city that frolics with\l"
# 238 "data/maps/FortreeCity/scripts.pory"
	.string "nature.”$"
# 239 "data/maps/FortreeCity/scripts.pory"

# 240 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 241 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
# 242 "data/maps/FortreeCity/scripts.pory"
	.string "Leader: WINONA\p"
# 243 "data/maps/FortreeCity/scripts.pory"
	.string "“The bird user taking flight into\n"
# 244 "data/maps/FortreeCity/scripts.pory"
	.string "the world.”$"

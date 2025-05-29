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
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 13 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 14 "data/maps/FortreeCity/scripts.pory"
	end
# 15 "data/maps/FortreeCity/scripts.pory"

# 16 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume:
# 17 "data/maps/FortreeCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 18 "data/maps/FortreeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 19 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 20 "data/maps/FortreeCity/scripts.pory"
	end
# 21 "data/maps/FortreeCity/scripts.pory"

# 22 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Shelly::
# 23 "data/maps/FortreeCity/scripts.pory"
	lockall 
# 24 "data/maps/FortreeCity/scripts.pory"
	delay 50
# 25 "data/maps/FortreeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 26 "data/maps/FortreeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 27 "data/maps/FortreeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 28 "data/maps/FortreeCity/scripts.pory"
	addobject LOCALID_SHELLY
# 29 "data/maps/FortreeCity/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 30 "data/maps/FortreeCity/scripts.pory"
	call_if_eq VAR_TEMP_3, 24, FortreeCity_EventScript_EmmieMoveForShelly1
# 31 "data/maps/FortreeCity/scripts.pory"
	call_if_eq VAR_TEMP_3, 25, FortreeCity_EventScript_EmmieMoveForShelly2
# 32 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_SHELLY, FortreeCity_Movement_ShellyApproachPlayer
# 33 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 35 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 36 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ShellyComeToJaggedPass, MSGBOX_DEFAULT
# 37 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 38 "data/maps/FortreeCity/scripts.pory"
	giveitem ITEM_HM_FLY
# 39 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 40 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 41 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 42 "data/maps/FortreeCity/scripts.pory"
	delay 50
# 43 "data/maps/FortreeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 44 "data/maps/FortreeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 45 "data/maps/FortreeCity/scripts.pory"
	delay 15
# 46 "data/maps/FortreeCity/scripts.pory"
	removeobject LOCALID_SHELLY
# 47 "data/maps/FortreeCity/scripts.pory"
	delay 15
# 48 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, FortreeCity_Movement_EmmieReturnToPlayer
# 49 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_HIDE_FORTREE_SHELLY
# 51 "data/maps/FortreeCity/scripts.pory"
	clearflag FLAG_HIDE_JAGGED_PASS_SHELLY
# 52 "data/maps/FortreeCity/scripts.pory"
	addvar VAR_FORTREE_CITY_STATE, 1 
# 53 "data/maps/FortreeCity/scripts.pory"
	end
# 54 "data/maps/FortreeCity/scripts.pory"

# 55 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_EmmieReturnToPlayer:
# 56 "data/maps/FortreeCity/scripts.pory"
	walk_up
# 57 "data/maps/FortreeCity/scripts.pory"
	face_right
# 58 "data/maps/FortreeCity/scripts.pory"
	step_end
# 59 "data/maps/FortreeCity/scripts.pory"

# 60 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_EmmieMoveForShelly1::
# 61 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, FortreeCity_Movement_EmmieMoveForShelly1
# 62 "data/maps/FortreeCity/scripts.pory"
	return
# 63 "data/maps/FortreeCity/scripts.pory"

# 64 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_EmmieMoveForShelly1:
# 65 "data/maps/FortreeCity/scripts.pory"
	walk_down
# 66 "data/maps/FortreeCity/scripts.pory"
	face_up
# 67 "data/maps/FortreeCity/scripts.pory"
	step_end
# 68 "data/maps/FortreeCity/scripts.pory"

# 69 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_EmmieMoveForShelly2::
# 70 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, FortreeCity_Movement_EmmieMoveForShelly2
# 71 "data/maps/FortreeCity/scripts.pory"
	return
# 72 "data/maps/FortreeCity/scripts.pory"

# 73 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_EmmieMoveForShelly2:
# 74 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 75 "data/maps/FortreeCity/scripts.pory"
	face_up
# 76 "data/maps/FortreeCity/scripts.pory"
	step_end
# 77 "data/maps/FortreeCity/scripts.pory"

# 78 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_ShellyApproachPlayer:
# 79 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 80 "data/maps/FortreeCity/scripts.pory"
	step_end
# 81 "data/maps/FortreeCity/scripts.pory"

# 82 "data/maps/FortreeCity/scripts.pory"

# 83 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 84 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 85 "data/maps/FortreeCity/scripts.pory"
	end
# 86 "data/maps/FortreeCity/scripts.pory"

# 87 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 88 "data/maps/FortreeCity/scripts.pory"
	lock
# 89 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 90 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 91 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 92 "data/maps/FortreeCity/scripts.pory"
	release
# 93 "data/maps/FortreeCity/scripts.pory"
	end
# 94 "data/maps/FortreeCity/scripts.pory"

# 95 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 96 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 97 "data/maps/FortreeCity/scripts.pory"
	release
# 98 "data/maps/FortreeCity/scripts.pory"
	end
# 99 "data/maps/FortreeCity/scripts.pory"

# 100 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 101 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 102 "data/maps/FortreeCity/scripts.pory"
	end
# 103 "data/maps/FortreeCity/scripts.pory"

# 104 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 105 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 106 "data/maps/FortreeCity/scripts.pory"
	end
# 107 "data/maps/FortreeCity/scripts.pory"

# 108 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 109 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 110 "data/maps/FortreeCity/scripts.pory"
	end
# 111 "data/maps/FortreeCity/scripts.pory"

# 112 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 113 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 114 "data/maps/FortreeCity/scripts.pory"
	end
# 115 "data/maps/FortreeCity/scripts.pory"

# 116 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 117 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 118 "data/maps/FortreeCity/scripts.pory"
	end
# 119 "data/maps/FortreeCity/scripts.pory"

# 120 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 121 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 122 "data/maps/FortreeCity/scripts.pory"
	end
# 123 "data/maps/FortreeCity/scripts.pory"

# 124 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 125 "data/maps/FortreeCity/scripts.pory"
	lock
# 126 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 127 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 128 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 129 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 130 "data/maps/FortreeCity/scripts.pory"
	release
# 131 "data/maps/FortreeCity/scripts.pory"
	end
# 132 "data/maps/FortreeCity/scripts.pory"

# 133 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 134 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 135 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 136 "data/maps/FortreeCity/scripts.pory"
	release
# 137 "data/maps/FortreeCity/scripts.pory"
	end
# 138 "data/maps/FortreeCity/scripts.pory"

# 139 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 140 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 141 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 142 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 143 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 144 "data/maps/FortreeCity/scripts.pory"
	waitse
# 145 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 146 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 147 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 148 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 149 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 151 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 152 "data/maps/FortreeCity/scripts.pory"
	release
# 153 "data/maps/FortreeCity/scripts.pory"
	end
# 154 "data/maps/FortreeCity/scripts.pory"

# 155 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 156 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 157 "data/maps/FortreeCity/scripts.pory"
	step_end
# 158 "data/maps/FortreeCity/scripts.pory"

# 159 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ShellyComeToJaggedPass:
# 160 "data/maps/FortreeCity/scripts.pory"
	.string "Shelly: Hey kid. Remember me?\p"
# 161 "data/maps/FortreeCity/scripts.pory"
	.string "Archie told me what happened at Mt.\n"
# 162 "data/maps/FortreeCity/scripts.pory"
	.string "Pyre.\p"
# 163 "data/maps/FortreeCity/scripts.pory"
	.string "Whatever your opinion on Team Aqua's\n"
# 164 "data/maps/FortreeCity/scripts.pory"
	.string "goals, you have so recognise the harm\l"
# 165 "data/maps/FortreeCity/scripts.pory"
	.string "Team Magma will cause to Hoenn.\p"
# 166 "data/maps/FortreeCity/scripts.pory"
	.string "I stuck around Mt. Chimney after you\n"
# 167 "data/maps/FortreeCity/scripts.pory"
	.string "left and believe I have located Team\l"
# 168 "data/maps/FortreeCity/scripts.pory"
	.string "Magma's hideout.\p"
# 169 "data/maps/FortreeCity/scripts.pory"
	.string "Archie doesn't trust you, perhaps with\n"
# 170 "data/maps/FortreeCity/scripts.pory"
	.string "good reason, but I trust that you also\l"
# 171 "data/maps/FortreeCity/scripts.pory"
	.string "don't want Team Magma to succeed.\p"
# 172 "data/maps/FortreeCity/scripts.pory"
	.string "I could use some help infiltrating the\n"
# 173 "data/maps/FortreeCity/scripts.pory"
	.string "Team Magma hideout, and I can't call on\l"
# 174 "data/maps/FortreeCity/scripts.pory"
	.string "Matt right now.\p"
# 175 "data/maps/FortreeCity/scripts.pory"
	.string "If you fancy doing something useful for\n"
# 176 "data/maps/FortreeCity/scripts.pory"
	.string "once, meet me on Jagged Pass near\l"
# 177 "data/maps/FortreeCity/scripts.pory"
	.string "Lavaridge Town.\p"
# 178 "data/maps/FortreeCity/scripts.pory"
	.string "Here, take this as well. I hope to see\n"
# 179 "data/maps/FortreeCity/scripts.pory"
	.string "you there.$"
# 180 "data/maps/FortreeCity/scripts.pory"

# 181 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 182 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
# 183 "data/maps/FortreeCity/scripts.pory"
	.string "gigantic POKéMON in the sky.\p"
# 184 "data/maps/FortreeCity/scripts.pory"
	.string "It seemed to squirm as it flew toward\n"
# 185 "data/maps/FortreeCity/scripts.pory"
	.string "ROUTE 131.\p"
# 186 "data/maps/FortreeCity/scripts.pory"
	.string "By the way… Sniff…\n"
# 187 "data/maps/FortreeCity/scripts.pory"
	.string "Um… You, uh…smell singed.\p"
# 188 "data/maps/FortreeCity/scripts.pory"
	.string "Were you at a volcano or something?$"
# 189 "data/maps/FortreeCity/scripts.pory"

# 190 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 191 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
# 192 "data/maps/FortreeCity/scripts.pory"
	.string "but something's blocking the way.\p"
# 193 "data/maps/FortreeCity/scripts.pory"
	.string "After all the bother I went through\n"
# 194 "data/maps/FortreeCity/scripts.pory"
	.string "training on ROUTE 120…$"
# 195 "data/maps/FortreeCity/scripts.pory"

# 196 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 197 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
# 198 "data/maps/FortreeCity/scripts.pory"
	.string "with me. This time, I'll beat WINONA.$"
# 199 "data/maps/FortreeCity/scripts.pory"

# 200 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 201 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
# 202 "data/maps/FortreeCity/scripts.pory"
	.string "trees grow by drinking that water…\p"
# 203 "data/maps/FortreeCity/scripts.pory"
	.string "Our FORTREE CITY exists because\n"
# 204 "data/maps/FortreeCity/scripts.pory"
	.string "there's both water and soil.$"
# 205 "data/maps/FortreeCity/scripts.pory"

# 206 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 207 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
# 208 "data/maps/FortreeCity/scripts.pory"
	.string "trees.\p"
# 209 "data/maps/FortreeCity/scripts.pory"
	.string "Perhaps because of that lifestyle,\n"
# 210 "data/maps/FortreeCity/scripts.pory"
	.string "everyone is healthy and lively.\p"
# 211 "data/maps/FortreeCity/scripts.pory"
	.string "Why, even myself--I feel as if I've\n"
# 212 "data/maps/FortreeCity/scripts.pory"
	.string "grown thirty years younger.$"
# 213 "data/maps/FortreeCity/scripts.pory"

# 214 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 215 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
# 216 "data/maps/FortreeCity/scripts.pory"
	.string "But sometimes BUG POKéMON come in\n"
# 217 "data/maps/FortreeCity/scripts.pory"
	.string "through windows.\l"
# 218 "data/maps/FortreeCity/scripts.pory"
	.string "It can be really startling.$"
# 219 "data/maps/FortreeCity/scripts.pory"

# 220 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 221 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
# 222 "data/maps/FortreeCity/scripts.pory"
	.string "you trade them! That's what I heard.$"
# 223 "data/maps/FortreeCity/scripts.pory"

# 224 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 225 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"
# 226 "data/maps/FortreeCity/scripts.pory"

# 227 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 228 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 229 "data/maps/FortreeCity/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 230 "data/maps/FortreeCity/scripts.pory"

# 231 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 232 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 233 "data/maps/FortreeCity/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 234 "data/maps/FortreeCity/scripts.pory"
	.string "visible!\p"
# 235 "data/maps/FortreeCity/scripts.pory"
	.string "The startled POKéMON fled!$"
# 236 "data/maps/FortreeCity/scripts.pory"

# 237 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 238 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
# 239 "data/maps/FortreeCity/scripts.pory"
	.string "“The treetop city that frolics with\l"
# 240 "data/maps/FortreeCity/scripts.pory"
	.string "nature.”$"
# 241 "data/maps/FortreeCity/scripts.pory"

# 242 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 243 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
# 244 "data/maps/FortreeCity/scripts.pory"
	.string "Leader: WINONA\p"
# 245 "data/maps/FortreeCity/scripts.pory"
	.string "“The bird user taking flight into\n"
# 246 "data/maps/FortreeCity/scripts.pory"
	.string "the world.”$"

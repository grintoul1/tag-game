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
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FortreeCity_OnFrame
# 9 "data/maps/FortreeCity/scripts.pory"
	.byte 0
# 10 "data/maps/FortreeCity/scripts.pory"

# 11 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnFrame:
# 12 "data/maps/FortreeCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 36, FortreeCity_EventScript_ProgressEmmieState
# 13 "data/maps/FortreeCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 38, FortreeCity_EventScript_ProgressEmmieState
# 14 "data/maps/FortreeCity/scripts.pory"
	.2byte 0
# 15 "data/maps/FortreeCity/scripts.pory"

# 16 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_ProgressEmmieState::
# 17 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 37
# 18 "data/maps/FortreeCity/scripts.pory"
	return
# 19 "data/maps/FortreeCity/scripts.pory"

# 20 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnTransition:
# 21 "data/maps/FortreeCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 22 "data/maps/FortreeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 23 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 24 "data/maps/FortreeCity/scripts.pory"
	end
# 25 "data/maps/FortreeCity/scripts.pory"

# 26 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume:
# 27 "data/maps/FortreeCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 28 "data/maps/FortreeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 29 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 30 "data/maps/FortreeCity/scripts.pory"
	end
# 31 "data/maps/FortreeCity/scripts.pory"

# 32 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Shelly::
# 33 "data/maps/FortreeCity/scripts.pory"
	lockall 
# 34 "data/maps/FortreeCity/scripts.pory"
	delay 50
# 35 "data/maps/FortreeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 36 "data/maps/FortreeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 37 "data/maps/FortreeCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 38 "data/maps/FortreeCity/scripts.pory"
	addobject LOCALID_SHELLY
# 39 "data/maps/FortreeCity/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 40 "data/maps/FortreeCity/scripts.pory"
	call_if_eq VAR_TEMP_3, 24, FortreeCity_EventScript_EmmieMoveForShelly1
# 41 "data/maps/FortreeCity/scripts.pory"
	call_if_eq VAR_TEMP_3, 25, FortreeCity_EventScript_EmmieMoveForShelly2
# 42 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_SHELLY, FortreeCity_Movement_ShellyApproachPlayer
# 43 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 45 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ShellyComeToJaggedPass, MSGBOX_DEFAULT
# 47 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 48 "data/maps/FortreeCity/scripts.pory"
	giveitem ITEM_HM_FLY
# 49 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 50 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterDown
# 51 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/FortreeCity/scripts.pory"
	delay 50
# 53 "data/maps/FortreeCity/scripts.pory"
	setfieldeffectargument 0, 1
# 54 "data/maps/FortreeCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 55 "data/maps/FortreeCity/scripts.pory"
	delay 15
# 56 "data/maps/FortreeCity/scripts.pory"
	removeobject LOCALID_SHELLY
# 57 "data/maps/FortreeCity/scripts.pory"
	delay 15
# 58 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, FortreeCity_Movement_EmmieReturnToPlayer
# 59 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_HIDE_FORTREE_SHELLY
# 61 "data/maps/FortreeCity/scripts.pory"
	clearflag FLAG_HIDE_JAGGED_PASS_SHELLY
# 62 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 40
# 63 "data/maps/FortreeCity/scripts.pory"
	addvar VAR_FORTREE_CITY_STATE, 1 
# 64 "data/maps/FortreeCity/scripts.pory"
	end
# 65 "data/maps/FortreeCity/scripts.pory"

# 66 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_EmmieReturnToPlayer:
# 67 "data/maps/FortreeCity/scripts.pory"
	walk_up
# 68 "data/maps/FortreeCity/scripts.pory"
	face_right
# 69 "data/maps/FortreeCity/scripts.pory"
	step_end
# 70 "data/maps/FortreeCity/scripts.pory"

# 71 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_EmmieMoveForShelly1::
# 72 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, FortreeCity_Movement_EmmieMoveForShelly1
# 73 "data/maps/FortreeCity/scripts.pory"
	return
# 74 "data/maps/FortreeCity/scripts.pory"

# 75 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_EmmieMoveForShelly1:
# 76 "data/maps/FortreeCity/scripts.pory"
	walk_down
# 77 "data/maps/FortreeCity/scripts.pory"
	face_up
# 78 "data/maps/FortreeCity/scripts.pory"
	step_end
# 79 "data/maps/FortreeCity/scripts.pory"

# 80 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_EmmieMoveForShelly2::
# 81 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, FortreeCity_Movement_EmmieMoveForShelly2
# 82 "data/maps/FortreeCity/scripts.pory"
	return
# 83 "data/maps/FortreeCity/scripts.pory"

# 84 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_EmmieMoveForShelly2:
# 85 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 86 "data/maps/FortreeCity/scripts.pory"
	face_up
# 87 "data/maps/FortreeCity/scripts.pory"
	step_end
# 88 "data/maps/FortreeCity/scripts.pory"

# 89 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_ShellyApproachPlayer:
# 90 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 91 "data/maps/FortreeCity/scripts.pory"
	step_end
# 92 "data/maps/FortreeCity/scripts.pory"

# 93 "data/maps/FortreeCity/scripts.pory"

# 94 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 95 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 96 "data/maps/FortreeCity/scripts.pory"
	end
# 97 "data/maps/FortreeCity/scripts.pory"

# 98 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 99 "data/maps/FortreeCity/scripts.pory"
	lock
# 100 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 101 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 102 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 103 "data/maps/FortreeCity/scripts.pory"
	release
# 104 "data/maps/FortreeCity/scripts.pory"
	end
# 105 "data/maps/FortreeCity/scripts.pory"

# 106 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 107 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 108 "data/maps/FortreeCity/scripts.pory"
	release
# 109 "data/maps/FortreeCity/scripts.pory"
	end
# 110 "data/maps/FortreeCity/scripts.pory"

# 111 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 112 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 113 "data/maps/FortreeCity/scripts.pory"
	end
# 114 "data/maps/FortreeCity/scripts.pory"

# 115 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 116 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 117 "data/maps/FortreeCity/scripts.pory"
	end
# 118 "data/maps/FortreeCity/scripts.pory"

# 119 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 120 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 121 "data/maps/FortreeCity/scripts.pory"
	end
# 122 "data/maps/FortreeCity/scripts.pory"

# 123 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 124 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 125 "data/maps/FortreeCity/scripts.pory"
	end
# 126 "data/maps/FortreeCity/scripts.pory"

# 127 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 128 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 129 "data/maps/FortreeCity/scripts.pory"
	end
# 130 "data/maps/FortreeCity/scripts.pory"

# 131 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 132 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 133 "data/maps/FortreeCity/scripts.pory"
	end
# 134 "data/maps/FortreeCity/scripts.pory"

# 135 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 136 "data/maps/FortreeCity/scripts.pory"
	lock
# 137 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 138 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 139 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 140 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 141 "data/maps/FortreeCity/scripts.pory"
	release
# 142 "data/maps/FortreeCity/scripts.pory"
	end
# 143 "data/maps/FortreeCity/scripts.pory"

# 144 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 145 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 146 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 147 "data/maps/FortreeCity/scripts.pory"
	release
# 148 "data/maps/FortreeCity/scripts.pory"
	end
# 149 "data/maps/FortreeCity/scripts.pory"

# 150 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 151 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 152 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 153 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 154 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/FortreeCity/scripts.pory"
	waitse
# 156 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 157 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 158 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 159 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 160 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 162 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 163 "data/maps/FortreeCity/scripts.pory"
	release
# 164 "data/maps/FortreeCity/scripts.pory"
	end
# 165 "data/maps/FortreeCity/scripts.pory"

# 166 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 167 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 168 "data/maps/FortreeCity/scripts.pory"
	step_end
# 169 "data/maps/FortreeCity/scripts.pory"

# 170 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ShellyComeToJaggedPass:
# 171 "data/maps/FortreeCity/scripts.pory"
	.string "Shelly: Hey kid. Remember me?\p"
# 172 "data/maps/FortreeCity/scripts.pory"
	.string "Archie told me what happened at Mt.\n"
# 173 "data/maps/FortreeCity/scripts.pory"
	.string "Pyre.\p"
# 174 "data/maps/FortreeCity/scripts.pory"
	.string "Whatever your opinion on Team Aqua's\n"
# 175 "data/maps/FortreeCity/scripts.pory"
	.string "goals, you have so recognise the harm\l"
# 176 "data/maps/FortreeCity/scripts.pory"
	.string "Team Magma will cause to Hoenn.\p"
# 177 "data/maps/FortreeCity/scripts.pory"
	.string "I stuck around Mt. Chimney after you\n"
# 178 "data/maps/FortreeCity/scripts.pory"
	.string "left and believe I have located Team\l"
# 179 "data/maps/FortreeCity/scripts.pory"
	.string "Magma's hideout.\p"
# 180 "data/maps/FortreeCity/scripts.pory"
	.string "Archie doesn't trust you, perhaps with\n"
# 181 "data/maps/FortreeCity/scripts.pory"
	.string "good reason, but I trust that you also\l"
# 182 "data/maps/FortreeCity/scripts.pory"
	.string "don't want Team Magma to succeed.\p"
# 183 "data/maps/FortreeCity/scripts.pory"
	.string "I could use some help infiltrating the\n"
# 184 "data/maps/FortreeCity/scripts.pory"
	.string "Team Magma hideout, and I can't call on\l"
# 185 "data/maps/FortreeCity/scripts.pory"
	.string "Matt right now.\p"
# 186 "data/maps/FortreeCity/scripts.pory"
	.string "If you fancy doing something useful for\n"
# 187 "data/maps/FortreeCity/scripts.pory"
	.string "once, meet me on Jagged Pass near\l"
# 188 "data/maps/FortreeCity/scripts.pory"
	.string "Lavaridge Town.\p"
# 189 "data/maps/FortreeCity/scripts.pory"
	.string "Here, take this as well. I hope to see\n"
# 190 "data/maps/FortreeCity/scripts.pory"
	.string "you there.$"
# 191 "data/maps/FortreeCity/scripts.pory"

# 192 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 193 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
# 194 "data/maps/FortreeCity/scripts.pory"
	.string "gigantic POKéMON in the sky.\p"
# 195 "data/maps/FortreeCity/scripts.pory"
	.string "It seemed to squirm as it flew toward\n"
# 196 "data/maps/FortreeCity/scripts.pory"
	.string "ROUTE 131.\p"
# 197 "data/maps/FortreeCity/scripts.pory"
	.string "By the way… Sniff…\n"
# 198 "data/maps/FortreeCity/scripts.pory"
	.string "Um… You, uh…smell singed.\p"
# 199 "data/maps/FortreeCity/scripts.pory"
	.string "Were you at a volcano or something?$"
# 200 "data/maps/FortreeCity/scripts.pory"

# 201 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 202 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
# 203 "data/maps/FortreeCity/scripts.pory"
	.string "but something's blocking the way.\p"
# 204 "data/maps/FortreeCity/scripts.pory"
	.string "After all the bother I went through\n"
# 205 "data/maps/FortreeCity/scripts.pory"
	.string "training on ROUTE 120…$"
# 206 "data/maps/FortreeCity/scripts.pory"

# 207 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 208 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
# 209 "data/maps/FortreeCity/scripts.pory"
	.string "with me. This time, I'll beat WINONA.$"
# 210 "data/maps/FortreeCity/scripts.pory"

# 211 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 212 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
# 213 "data/maps/FortreeCity/scripts.pory"
	.string "trees grow by drinking that water…\p"
# 214 "data/maps/FortreeCity/scripts.pory"
	.string "Our FORTREE CITY exists because\n"
# 215 "data/maps/FortreeCity/scripts.pory"
	.string "there's both water and soil.$"
# 216 "data/maps/FortreeCity/scripts.pory"

# 217 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 218 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
# 219 "data/maps/FortreeCity/scripts.pory"
	.string "trees.\p"
# 220 "data/maps/FortreeCity/scripts.pory"
	.string "Perhaps because of that lifestyle,\n"
# 221 "data/maps/FortreeCity/scripts.pory"
	.string "everyone is healthy and lively.\p"
# 222 "data/maps/FortreeCity/scripts.pory"
	.string "Why, even myself--I feel as if I've\n"
# 223 "data/maps/FortreeCity/scripts.pory"
	.string "grown thirty years younger.$"
# 224 "data/maps/FortreeCity/scripts.pory"

# 225 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 226 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
# 227 "data/maps/FortreeCity/scripts.pory"
	.string "But sometimes BUG POKéMON come in\n"
# 228 "data/maps/FortreeCity/scripts.pory"
	.string "through windows.\l"
# 229 "data/maps/FortreeCity/scripts.pory"
	.string "It can be really startling.$"
# 230 "data/maps/FortreeCity/scripts.pory"

# 231 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 232 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
# 233 "data/maps/FortreeCity/scripts.pory"
	.string "you trade them! That's what I heard.$"
# 234 "data/maps/FortreeCity/scripts.pory"

# 235 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 236 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"
# 237 "data/maps/FortreeCity/scripts.pory"

# 238 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 239 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 240 "data/maps/FortreeCity/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 241 "data/maps/FortreeCity/scripts.pory"

# 242 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 243 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 244 "data/maps/FortreeCity/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 245 "data/maps/FortreeCity/scripts.pory"
	.string "visible!\p"
# 246 "data/maps/FortreeCity/scripts.pory"
	.string "The startled POKéMON fled!$"
# 247 "data/maps/FortreeCity/scripts.pory"

# 248 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 249 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
# 250 "data/maps/FortreeCity/scripts.pory"
	.string "“The treetop city that frolics with\l"
# 251 "data/maps/FortreeCity/scripts.pory"
	.string "nature.”$"
# 252 "data/maps/FortreeCity/scripts.pory"

# 253 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 254 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
# 255 "data/maps/FortreeCity/scripts.pory"
	.string "Leader: WINONA\p"
# 256 "data/maps/FortreeCity/scripts.pory"
	.string "“The bird user taking flight into\n"
# 257 "data/maps/FortreeCity/scripts.pory"
	.string "the world.”$"

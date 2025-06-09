# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"

# 3 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 4 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 5 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 6 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_OnWarp
# 7 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity/scripts.pory"

# 9 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 10 "data/maps/PetalburgCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 11 "data/maps/PetalburgCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 12 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 13 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 14 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 16 "data/maps/PetalburgCity/scripts.pory"
	end
# 17 "data/maps/PetalburgCity/scripts.pory"

# 18 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 19 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 20 "data/maps/PetalburgCity/scripts.pory"
	return
# 21 "data/maps/PetalburgCity/scripts.pory"

# 22 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 23 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 24 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 25 "data/maps/PetalburgCity/scripts.pory"
	return
# 26 "data/maps/PetalburgCity/scripts.pory"

# 27 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 28 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 29 "data/maps/PetalburgCity/scripts.pory"
	return
# 30 "data/maps/PetalburgCity/scripts.pory"

# 31 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 32 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 33 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 34 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 10, PetalburgCity_EventScript_ProgressEmmieState
# 35 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 36 "data/maps/PetalburgCity/scripts.pory"

# 37 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ProgressEmmieState::
# 38 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 9
# 39 "data/maps/PetalburgCity/scripts.pory"
	return
# 40 "data/maps/PetalburgCity/scripts.pory"

# 41 "data/maps/PetalburgCity/scripts.pory"

# 42 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnWarp:
# 43 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorialEmmiePosition
# 44 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 45 "data/maps/PetalburgCity/scripts.pory"

# 46 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorialEmmiePosition::
# 47 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 14, 9
# 48 "data/maps/PetalburgCity/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_PETALBURG_CITY
# 49 "data/maps/PetalburgCity/scripts.pory"
	end
# 50 "data/maps/PetalburgCity/scripts.pory"

# 51 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 52 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 53 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 54 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 55 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 56 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 57 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PetalburgCity_Movement_WallyTutorialEmmie
# 58 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 59 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 60 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 61 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 62 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 64 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 65 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 67 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 68 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 69 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 70 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 71 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 72 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 73 "data/maps/PetalburgCity/scripts.pory"
	addvar VAR_PARTNER_EMMIE_STATE, 1
# 74 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 75 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 76 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 77 "data/maps/PetalburgCity/scripts.pory"
	end
# 78 "data/maps/PetalburgCity/scripts.pory"

# 79 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 80 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 81 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 82 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 83 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 84 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 86 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 87 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 88 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 89 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 90 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 91 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 93 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 94 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 95 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 96 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 97 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 98 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 99 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 100 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 101 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 102 "data/maps/PetalburgCity/scripts.pory"
	end
# 103 "data/maps/PetalburgCity/scripts.pory"

# 104 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 105 "data/maps/PetalburgCity/scripts.pory"
	lock
# 106 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 107 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 108 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 109 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 110 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 111 "data/maps/PetalburgCity/scripts.pory"
	release
# 112 "data/maps/PetalburgCity/scripts.pory"
	end
# 113 "data/maps/PetalburgCity/scripts.pory"

# 114 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 115 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 116 "data/maps/PetalburgCity/scripts.pory"
	end
# 117 "data/maps/PetalburgCity/scripts.pory"

# 118 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 119 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 137 "data/maps/PetalburgCity/scripts.pory"

# 138 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 141 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 142 "data/maps/PetalburgCity/scripts.pory"

# 143 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 144 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 161 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 162 "data/maps/PetalburgCity/scripts.pory"

# 163 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 165 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 166 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 167 "data/maps/PetalburgCity/scripts.pory"

# 168 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 169 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 202 "data/maps/PetalburgCity/scripts.pory"

# 203 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialEmmie:
# 204 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 235 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 236 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 237 "data/maps/PetalburgCity/scripts.pory"

# 238 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 239 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 241 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 242 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 244 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 245 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 247 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 248 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 249 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 250 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 251 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 252 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 254 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 255 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 256 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 259 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 260 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 261 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 263 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 264 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 265 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 266 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 267 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 268 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 270 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 271 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 272 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 273 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 274 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 275 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 276 "data/maps/PetalburgCity/scripts.pory"

# 277 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 278 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 279 "data/maps/PetalburgCity/scripts.pory"
	end
# 280 "data/maps/PetalburgCity/scripts.pory"

# 281 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 282 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 283 "data/maps/PetalburgCity/scripts.pory"
	end
# 284 "data/maps/PetalburgCity/scripts.pory"

# 285 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 286 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 287 "data/maps/PetalburgCity/scripts.pory"
	end
# 288 "data/maps/PetalburgCity/scripts.pory"

# 289 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Reporters::
# 290 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_Reporters, MSGBOX_NPC
# 291 "data/maps/PetalburgCity/scripts.pory"
	end
# 292 "data/maps/PetalburgCity/scripts.pory"

# 293 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 294 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 295 "data/maps/PetalburgCity/scripts.pory"
	end
# 296 "data/maps/PetalburgCity/scripts.pory"

# 297 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 298 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 299 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 300 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 301 "data/maps/PetalburgCity/scripts.pory"
	end
# 302 "data/maps/PetalburgCity/scripts.pory"

# 303 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 304 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 305 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 306 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 307 "data/maps/PetalburgCity/scripts.pory"
	end
# 308 "data/maps/PetalburgCity/scripts.pory"

# 309 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 310 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 311 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 312 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 313 "data/maps/PetalburgCity/scripts.pory"
	end
# 314 "data/maps/PetalburgCity/scripts.pory"

# 315 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 316 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 317 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 318 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 319 "data/maps/PetalburgCity/scripts.pory"
	end
# 320 "data/maps/PetalburgCity/scripts.pory"

# 321 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 323 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 325 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 327 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 329 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 331 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 332 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 333 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 334 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 335 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 336 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 337 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 338 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 339 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 340 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 341 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 343 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 344 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 345 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 346 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 347 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 348 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 349 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 350 "data/maps/PetalburgCity/scripts.pory"
	end
# 351 "data/maps/PetalburgCity/scripts.pory"

# 352 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 353 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 354 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 356 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 357 "data/maps/PetalburgCity/scripts.pory"
	return
# 358 "data/maps/PetalburgCity/scripts.pory"

# 359 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 360 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 361 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 362 "data/maps/PetalburgCity/scripts.pory"
	return
# 363 "data/maps/PetalburgCity/scripts.pory"

# 364 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 365 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 366 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 367 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 368 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 369 "data/maps/PetalburgCity/scripts.pory"
	return
# 370 "data/maps/PetalburgCity/scripts.pory"

# 371 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 372 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 373 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 374 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 375 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 376 "data/maps/PetalburgCity/scripts.pory"
	return
# 377 "data/maps/PetalburgCity/scripts.pory"

# 378 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 379 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 380 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 381 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 382 "data/maps/PetalburgCity/scripts.pory"
	return
# 383 "data/maps/PetalburgCity/scripts.pory"

# 384 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 385 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 386 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 387 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 388 "data/maps/PetalburgCity/scripts.pory"
	return
# 389 "data/maps/PetalburgCity/scripts.pory"

# 390 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 391 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 392 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 393 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 394 "data/maps/PetalburgCity/scripts.pory"
	return
# 395 "data/maps/PetalburgCity/scripts.pory"

# 396 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 397 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 398 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 399 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 400 "data/maps/PetalburgCity/scripts.pory"
	return
# 401 "data/maps/PetalburgCity/scripts.pory"

# 402 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 403 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 404 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 405 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 406 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 407 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 408 "data/maps/PetalburgCity/scripts.pory"

# 409 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 414 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 415 "data/maps/PetalburgCity/scripts.pory"

# 416 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 420 "data/maps/PetalburgCity/scripts.pory"

# 421 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 426 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 427 "data/maps/PetalburgCity/scripts.pory"

# 428 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 434 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 435 "data/maps/PetalburgCity/scripts.pory"

# 436 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 447 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 448 "data/maps/PetalburgCity/scripts.pory"

# 449 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 463 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 464 "data/maps/PetalburgCity/scripts.pory"

# 465 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 476 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 477 "data/maps/PetalburgCity/scripts.pory"

# 478 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 490 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 491 "data/maps/PetalburgCity/scripts.pory"

# 492 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 505 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 506 "data/maps/PetalburgCity/scripts.pory"

# 507 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 513 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 514 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 515 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 517 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 518 "data/maps/PetalburgCity/scripts.pory"

# 519 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 520 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 521 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 522 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 523 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 525 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 526 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 527 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 528 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 529 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 530 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 531 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 532 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 533 "data/maps/PetalburgCity/scripts.pory"

# 534 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 535 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 536 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 537 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 538 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 539 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 540 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 541 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 542 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 543 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 544 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 545 "data/maps/PetalburgCity/scripts.pory"

# 546 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 547 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 548 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 549 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 550 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 551 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 552 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 553 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 554 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 555 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 556 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 557 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 558 "data/maps/PetalburgCity/scripts.pory"

# 559 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 560 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 561 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 562 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 563 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 564 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 565 "data/maps/PetalburgCity/scripts.pory"
	end
# 566 "data/maps/PetalburgCity/scripts.pory"

# 567 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 568 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 569 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 570 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 571 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 572 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 573 "data/maps/PetalburgCity/scripts.pory"
	end
# 574 "data/maps/PetalburgCity/scripts.pory"

# 575 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 576 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 577 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 578 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 579 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 580 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 581 "data/maps/PetalburgCity/scripts.pory"
	end
# 582 "data/maps/PetalburgCity/scripts.pory"

# 583 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 584 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 585 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 586 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 587 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 588 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 589 "data/maps/PetalburgCity/scripts.pory"
	end
# 590 "data/maps/PetalburgCity/scripts.pory"

# 591 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 592 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 593 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 594 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 595 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 596 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 597 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 598 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 599 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 600 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 602 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 603 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 604 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 605 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 606 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 607 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 609 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 610 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 611 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 612 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 614 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 615 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 616 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 617 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 618 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 619 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 620 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 621 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 622 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 623 "data/maps/PetalburgCity/scripts.pory"
	end
# 624 "data/maps/PetalburgCity/scripts.pory"

# 625 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 626 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 627 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 628 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/PetalburgCity/scripts.pory"
	return
# 630 "data/maps/PetalburgCity/scripts.pory"

# 631 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 632 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 633 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 634 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/PetalburgCity/scripts.pory"
	return
# 636 "data/maps/PetalburgCity/scripts.pory"

# 637 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 638 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 639 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 640 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/PetalburgCity/scripts.pory"
	return
# 642 "data/maps/PetalburgCity/scripts.pory"

# 643 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 644 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 645 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 646 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/PetalburgCity/scripts.pory"
	return
# 648 "data/maps/PetalburgCity/scripts.pory"

# 649 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 654 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 655 "data/maps/PetalburgCity/scripts.pory"

# 656 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 662 "data/maps/PetalburgCity/scripts.pory"

# 663 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 678 "data/maps/PetalburgCity/scripts.pory"

# 679 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 680 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 682 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 683 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 684 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 687 "data/maps/PetalburgCity/scripts.pory"

# 688 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 700 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 701 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 702 "data/maps/PetalburgCity/scripts.pory"

# 703 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 704 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 705 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 706 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 707 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 708 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 709 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 710 "data/maps/PetalburgCity/scripts.pory"

# 711 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 712 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 713 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 714 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 715 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 716 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 717 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 718 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 719 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 720 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 721 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 722 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 723 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 724 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 725 "data/maps/PetalburgCity/scripts.pory"

# 726 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 727 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 728 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 729 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 730 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 731 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 732 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 733 "data/maps/PetalburgCity/scripts.pory"

# 734 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 735 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 736 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 737 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 738 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 739 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 740 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 741 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 742 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 743 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 744 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 745 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 746 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 747 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 748 "data/maps/PetalburgCity/scripts.pory"

# 749 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 750 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 751 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 752 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 753 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 754 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 755 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 756 "data/maps/PetalburgCity/scripts.pory"

# 757 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 758 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 759 "data/maps/PetalburgCity/scripts.pory"
	end
# 760 "data/maps/PetalburgCity/scripts.pory"

# 761 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 765 "data/maps/PetalburgCity/scripts.pory"

# 766 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 771 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 773 "data/maps/PetalburgCity/scripts.pory"

# 774 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 776 "data/maps/PetalburgCity/scripts.pory"

# 777 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 778 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 779 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 780 "data/maps/PetalburgCity/scripts.pory"

# 781 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 782 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 783 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 784 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 785 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 786 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 787 "data/maps/PetalburgCity/scripts.pory"

# 788 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 789 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 790 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 791 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 793 "data/maps/PetalburgCity/scripts.pory"

# 794 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 795 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 796 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: NORMAN\l"
# 797 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 798 "data/maps/PetalburgCity/scripts.pory"

# 799 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 800 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 802 "data/maps/PetalburgCity/scripts.pory"

# 803 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 805 "data/maps/PetalburgCity/scripts.pory"

# 806 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 807 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 808 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 809 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 810 "data/maps/PetalburgCity/scripts.pory"

# 811 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 812 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 813 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 814 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 815 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 816 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 817 "data/maps/PetalburgCity/scripts.pory"

# 818 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 819 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 820 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 821 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
# 822 "data/maps/PetalburgCity/scripts.pory"

# 823 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_Reporters:
# 824 "data/maps/PetalburgCity/scripts.pory"
	.string "We are covering an ongoing incident\n"
# 825 "data/maps/PetalburgCity/scripts.pory"
	.string "with Team Aqua and a missing Wingull.\p"
# 826 "data/maps/PetalburgCity/scripts.pory"
	.string "Apologies but we cannot let you\n"
# 827 "data/maps/PetalburgCity/scripts.pory"
	.string "through at this time.$"

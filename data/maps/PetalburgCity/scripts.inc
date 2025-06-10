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
	.2byte 0
# 35 "data/maps/PetalburgCity/scripts.pory"

# 36 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnWarp:
# 37 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorialEmmiePosition
# 38 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 39 "data/maps/PetalburgCity/scripts.pory"

# 40 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorialEmmiePosition::
# 41 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 14, 9
# 42 "data/maps/PetalburgCity/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_PETALBURG_CITY
# 43 "data/maps/PetalburgCity/scripts.pory"
	end
# 44 "data/maps/PetalburgCity/scripts.pory"

# 45 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 46 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 47 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 48 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 49 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 50 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 51 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PetalburgCity_Movement_WallyTutorialEmmie
# 52 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 54 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 55 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 56 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 57 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 58 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 59 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 60 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 61 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 63 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 64 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 65 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 66 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 67 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 68 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 69 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 70 "data/maps/PetalburgCity/scripts.pory"
	end
# 71 "data/maps/PetalburgCity/scripts.pory"

# 72 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 73 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 74 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 75 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 76 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 77 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 79 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 80 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 82 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 83 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 84 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 86 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 87 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 88 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 89 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 90 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 91 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 92 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 93 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 94 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 95 "data/maps/PetalburgCity/scripts.pory"
	end
# 96 "data/maps/PetalburgCity/scripts.pory"

# 97 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 98 "data/maps/PetalburgCity/scripts.pory"
	lock
# 99 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 100 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 101 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 102 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 103 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/PetalburgCity/scripts.pory"
	release
# 105 "data/maps/PetalburgCity/scripts.pory"
	end
# 106 "data/maps/PetalburgCity/scripts.pory"

# 107 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 108 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 109 "data/maps/PetalburgCity/scripts.pory"
	end
# 110 "data/maps/PetalburgCity/scripts.pory"

# 111 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 112 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 129 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 130 "data/maps/PetalburgCity/scripts.pory"

# 131 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 134 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 135 "data/maps/PetalburgCity/scripts.pory"

# 136 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 137 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 154 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 155 "data/maps/PetalburgCity/scripts.pory"

# 156 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 158 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 159 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 160 "data/maps/PetalburgCity/scripts.pory"

# 161 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 162 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 195 "data/maps/PetalburgCity/scripts.pory"

# 196 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialEmmie:
# 197 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 229 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 230 "data/maps/PetalburgCity/scripts.pory"

# 231 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 232 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 235 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 236 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 237 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 238 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 241 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 242 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 244 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 245 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 261 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 263 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 264 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 265 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 266 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 267 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 268 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 269 "data/maps/PetalburgCity/scripts.pory"

# 270 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 271 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 272 "data/maps/PetalburgCity/scripts.pory"
	end
# 273 "data/maps/PetalburgCity/scripts.pory"

# 274 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 275 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 276 "data/maps/PetalburgCity/scripts.pory"
	end
# 277 "data/maps/PetalburgCity/scripts.pory"

# 278 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 279 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 280 "data/maps/PetalburgCity/scripts.pory"
	end
# 281 "data/maps/PetalburgCity/scripts.pory"

# 282 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Reporters::
# 283 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_Reporters, MSGBOX_NPC
# 284 "data/maps/PetalburgCity/scripts.pory"
	end
# 285 "data/maps/PetalburgCity/scripts.pory"

# 286 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 287 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 288 "data/maps/PetalburgCity/scripts.pory"
	end
# 289 "data/maps/PetalburgCity/scripts.pory"

# 290 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 291 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 292 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 293 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 294 "data/maps/PetalburgCity/scripts.pory"
	end
# 295 "data/maps/PetalburgCity/scripts.pory"

# 296 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 297 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 298 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 299 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 300 "data/maps/PetalburgCity/scripts.pory"
	end
# 301 "data/maps/PetalburgCity/scripts.pory"

# 302 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 303 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 304 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 305 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 306 "data/maps/PetalburgCity/scripts.pory"
	end
# 307 "data/maps/PetalburgCity/scripts.pory"

# 308 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 309 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 310 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 311 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 312 "data/maps/PetalburgCity/scripts.pory"
	end
# 313 "data/maps/PetalburgCity/scripts.pory"

# 314 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 316 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 318 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 319 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 320 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 322 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 323 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 324 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 325 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 326 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 327 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 328 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 329 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 330 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 331 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 332 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 333 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 334 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 336 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 338 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 339 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 340 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 341 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 342 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 343 "data/maps/PetalburgCity/scripts.pory"
	end
# 344 "data/maps/PetalburgCity/scripts.pory"

# 345 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 346 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 347 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 348 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 349 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 350 "data/maps/PetalburgCity/scripts.pory"
	return
# 351 "data/maps/PetalburgCity/scripts.pory"

# 352 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 353 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 354 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/PetalburgCity/scripts.pory"
	return
# 356 "data/maps/PetalburgCity/scripts.pory"

# 357 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 358 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 359 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 360 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 361 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 362 "data/maps/PetalburgCity/scripts.pory"
	return
# 363 "data/maps/PetalburgCity/scripts.pory"

# 364 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 365 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
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
PetalburgCity_EventScript_LeadPlayerToGym0::
# 372 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 373 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 374 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 375 "data/maps/PetalburgCity/scripts.pory"
	return
# 376 "data/maps/PetalburgCity/scripts.pory"

# 377 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 378 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 379 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 380 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 381 "data/maps/PetalburgCity/scripts.pory"
	return
# 382 "data/maps/PetalburgCity/scripts.pory"

# 383 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 384 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 385 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 386 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 387 "data/maps/PetalburgCity/scripts.pory"
	return
# 388 "data/maps/PetalburgCity/scripts.pory"

# 389 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 390 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 391 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 392 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 393 "data/maps/PetalburgCity/scripts.pory"
	return
# 394 "data/maps/PetalburgCity/scripts.pory"

# 395 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 396 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 397 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 398 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 399 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 400 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 401 "data/maps/PetalburgCity/scripts.pory"

# 402 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 407 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 408 "data/maps/PetalburgCity/scripts.pory"

# 409 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 413 "data/maps/PetalburgCity/scripts.pory"

# 414 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 419 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 420 "data/maps/PetalburgCity/scripts.pory"

# 421 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 427 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 428 "data/maps/PetalburgCity/scripts.pory"

# 429 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 440 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 441 "data/maps/PetalburgCity/scripts.pory"

# 442 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 456 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 457 "data/maps/PetalburgCity/scripts.pory"

# 458 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 469 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 470 "data/maps/PetalburgCity/scripts.pory"

# 471 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 483 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 484 "data/maps/PetalburgCity/scripts.pory"

# 485 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 498 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 499 "data/maps/PetalburgCity/scripts.pory"

# 500 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 510 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 511 "data/maps/PetalburgCity/scripts.pory"

# 512 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 513 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 514 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 515 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 517 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 518 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 519 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 520 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 521 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 522 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 523 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 525 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 526 "data/maps/PetalburgCity/scripts.pory"

# 527 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 528 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 529 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 530 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 531 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 532 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 533 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 534 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 535 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 536 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 537 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 538 "data/maps/PetalburgCity/scripts.pory"

# 539 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 540 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 541 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 542 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 543 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 544 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 545 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 546 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 547 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 548 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 549 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 550 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 551 "data/maps/PetalburgCity/scripts.pory"

# 552 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 553 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 554 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 555 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 556 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 557 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 558 "data/maps/PetalburgCity/scripts.pory"
	end
# 559 "data/maps/PetalburgCity/scripts.pory"

# 560 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 561 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 562 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 563 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 564 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 565 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 566 "data/maps/PetalburgCity/scripts.pory"
	end
# 567 "data/maps/PetalburgCity/scripts.pory"

# 568 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 569 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 570 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 571 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 572 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 573 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 574 "data/maps/PetalburgCity/scripts.pory"
	end
# 575 "data/maps/PetalburgCity/scripts.pory"

# 576 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 577 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 578 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 579 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 580 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 581 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 582 "data/maps/PetalburgCity/scripts.pory"
	end
# 583 "data/maps/PetalburgCity/scripts.pory"

# 584 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 585 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 586 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 587 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 588 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 589 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 590 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 591 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 593 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 594 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 595 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 596 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 597 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 598 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 599 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 600 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 602 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 603 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 604 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 605 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 606 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 607 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 608 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 609 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 610 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 611 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 612 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 613 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 614 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 615 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 616 "data/maps/PetalburgCity/scripts.pory"
	end
# 617 "data/maps/PetalburgCity/scripts.pory"

# 618 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 619 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 620 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 621 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/PetalburgCity/scripts.pory"
	return
# 623 "data/maps/PetalburgCity/scripts.pory"

# 624 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 625 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 626 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 627 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/PetalburgCity/scripts.pory"
	return
# 629 "data/maps/PetalburgCity/scripts.pory"

# 630 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 631 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 632 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 633 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 634 "data/maps/PetalburgCity/scripts.pory"
	return
# 635 "data/maps/PetalburgCity/scripts.pory"

# 636 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 637 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 638 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 639 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/PetalburgCity/scripts.pory"
	return
# 641 "data/maps/PetalburgCity/scripts.pory"

# 642 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 648 "data/maps/PetalburgCity/scripts.pory"

# 649 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
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
PetalburgCity_Movement_ScottExit0:
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 671 "data/maps/PetalburgCity/scripts.pory"

# 672 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 673 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 675 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 676 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 677 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 679 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 680 "data/maps/PetalburgCity/scripts.pory"

# 681 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 695 "data/maps/PetalburgCity/scripts.pory"

# 696 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 697 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 699 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 700 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 702 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 703 "data/maps/PetalburgCity/scripts.pory"

# 704 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 705 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 706 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 707 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 708 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 709 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 710 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 711 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 712 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 713 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 714 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 715 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 716 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 717 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 718 "data/maps/PetalburgCity/scripts.pory"

# 719 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 720 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 721 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 722 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 723 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 724 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 725 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 726 "data/maps/PetalburgCity/scripts.pory"

# 727 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 728 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 729 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 730 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 731 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 732 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 733 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 734 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 735 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 736 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 737 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 738 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 739 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 740 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 743 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 744 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 745 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 746 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 747 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 748 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 749 "data/maps/PetalburgCity/scripts.pory"

# 750 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 751 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 752 "data/maps/PetalburgCity/scripts.pory"
	end
# 753 "data/maps/PetalburgCity/scripts.pory"

# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 758 "data/maps/PetalburgCity/scripts.pory"

# 759 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 766 "data/maps/PetalburgCity/scripts.pory"

# 767 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 769 "data/maps/PetalburgCity/scripts.pory"

# 770 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 771 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 773 "data/maps/PetalburgCity/scripts.pory"

# 774 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 778 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 779 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 780 "data/maps/PetalburgCity/scripts.pory"

# 781 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 782 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 783 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 784 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 785 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 786 "data/maps/PetalburgCity/scripts.pory"

# 787 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 789 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: NORMAN\l"
# 790 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 791 "data/maps/PetalburgCity/scripts.pory"

# 792 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 793 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 795 "data/maps/PetalburgCity/scripts.pory"

# 796 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 797 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 798 "data/maps/PetalburgCity/scripts.pory"

# 799 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 800 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 802 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 803 "data/maps/PetalburgCity/scripts.pory"

# 804 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 806 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 807 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 808 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 809 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 810 "data/maps/PetalburgCity/scripts.pory"

# 811 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 812 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 813 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 814 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
# 815 "data/maps/PetalburgCity/scripts.pory"

# 816 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_Reporters:
# 817 "data/maps/PetalburgCity/scripts.pory"
	.string "We are covering an ongoing incident\n"
# 818 "data/maps/PetalburgCity/scripts.pory"
	.string "with Team Aqua and a missing Wingull.\p"
# 819 "data/maps/PetalburgCity/scripts.pory"
	.string "Apologies but we cannot let you\n"
# 820 "data/maps/PetalburgCity/scripts.pory"
	.string "through at this time.$"

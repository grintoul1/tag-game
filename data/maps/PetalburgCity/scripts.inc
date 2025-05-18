# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 6 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 7 "data/maps/PetalburgCity/scripts.pory"

# 8 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 9 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 10 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 11 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_OnWarp
# 12 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 13 "data/maps/PetalburgCity/scripts.pory"

# 14 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 16 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 17 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 19 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 20 "data/maps/PetalburgCity/scripts.pory"
	end
# 21 "data/maps/PetalburgCity/scripts.pory"

# 22 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 23 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 24 "data/maps/PetalburgCity/scripts.pory"
	return
# 25 "data/maps/PetalburgCity/scripts.pory"

# 26 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 27 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 28 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 29 "data/maps/PetalburgCity/scripts.pory"
	return
# 30 "data/maps/PetalburgCity/scripts.pory"

# 31 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 32 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 33 "data/maps/PetalburgCity/scripts.pory"
	return
# 34 "data/maps/PetalburgCity/scripts.pory"

# 35 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 36 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 37 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 38 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 39 "data/maps/PetalburgCity/scripts.pory"

# 40 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnWarp:
# 41 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorialEmmiePosition
# 42 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 43 "data/maps/PetalburgCity/scripts.pory"

# 44 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorialEmmiePosition::
# 45 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 14, 9
# 46 "data/maps/PetalburgCity/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_PETALBURG_CITY
# 47 "data/maps/PetalburgCity/scripts.pory"
	end
# 48 "data/maps/PetalburgCity/scripts.pory"

# 49 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 50 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 51 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 52 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 53 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 54 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 55 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PetalburgCity_Movement_WallyTutorialEmmie
# 56 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 58 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 59 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 60 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 62 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 63 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 64 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 65 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 66 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 67 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 68 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 69 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 70 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 71 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 72 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 73 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 74 "data/maps/PetalburgCity/scripts.pory"
	end
# 75 "data/maps/PetalburgCity/scripts.pory"

# 76 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 77 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 78 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 79 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 80 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 83 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 84 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 85 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 86 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 87 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 88 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 90 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 91 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 92 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 93 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 94 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 95 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 96 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 97 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 98 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 99 "data/maps/PetalburgCity/scripts.pory"
	end
# 100 "data/maps/PetalburgCity/scripts.pory"

# 101 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 102 "data/maps/PetalburgCity/scripts.pory"
	lock
# 103 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 104 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 105 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 106 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 107 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/PetalburgCity/scripts.pory"
	release
# 109 "data/maps/PetalburgCity/scripts.pory"
	end
# 110 "data/maps/PetalburgCity/scripts.pory"

# 111 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 112 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 113 "data/maps/PetalburgCity/scripts.pory"
	end
# 114 "data/maps/PetalburgCity/scripts.pory"

# 115 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 116 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	walk_up
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 133 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 134 "data/maps/PetalburgCity/scripts.pory"

# 135 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 138 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 139 "data/maps/PetalburgCity/scripts.pory"

# 140 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 141 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	walk_up
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 158 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 159 "data/maps/PetalburgCity/scripts.pory"

# 160 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 162 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 163 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 164 "data/maps/PetalburgCity/scripts.pory"

# 165 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 166 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 199 "data/maps/PetalburgCity/scripts.pory"

# 200 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialEmmie:
# 201 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 233 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 234 "data/maps/PetalburgCity/scripts.pory"

# 235 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 236 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 237 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 238 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 241 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 242 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 261 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 263 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 264 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 265 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 266 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 267 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 268 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 269 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 270 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 271 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 272 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 273 "data/maps/PetalburgCity/scripts.pory"

# 274 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 275 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 276 "data/maps/PetalburgCity/scripts.pory"
	end
# 277 "data/maps/PetalburgCity/scripts.pory"

# 278 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 279 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 280 "data/maps/PetalburgCity/scripts.pory"
	end
# 281 "data/maps/PetalburgCity/scripts.pory"

# 282 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 283 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 284 "data/maps/PetalburgCity/scripts.pory"
	end
# 285 "data/maps/PetalburgCity/scripts.pory"

# 286 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Reporters::
# 287 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_Reporters, MSGBOX_NPC
# 288 "data/maps/PetalburgCity/scripts.pory"
	end
# 289 "data/maps/PetalburgCity/scripts.pory"

# 290 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 291 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 292 "data/maps/PetalburgCity/scripts.pory"
	end
# 293 "data/maps/PetalburgCity/scripts.pory"

# 294 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 295 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 296 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 297 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 298 "data/maps/PetalburgCity/scripts.pory"
	end
# 299 "data/maps/PetalburgCity/scripts.pory"

# 300 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 301 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 302 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 303 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 304 "data/maps/PetalburgCity/scripts.pory"
	end
# 305 "data/maps/PetalburgCity/scripts.pory"

# 306 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 307 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 308 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 309 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 310 "data/maps/PetalburgCity/scripts.pory"
	end
# 311 "data/maps/PetalburgCity/scripts.pory"

# 312 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 313 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 314 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 315 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 316 "data/maps/PetalburgCity/scripts.pory"
	end
# 317 "data/maps/PetalburgCity/scripts.pory"

# 318 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 319 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 320 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 322 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 323 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 324 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 326 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 328 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 329 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 330 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 331 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 332 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 333 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 334 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 335 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 336 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 337 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 339 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 340 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 341 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 342 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 343 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 344 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 346 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 347 "data/maps/PetalburgCity/scripts.pory"
	end
# 348 "data/maps/PetalburgCity/scripts.pory"

# 349 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 350 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 351 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 352 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 353 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 354 "data/maps/PetalburgCity/scripts.pory"
	return
# 355 "data/maps/PetalburgCity/scripts.pory"

# 356 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 357 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 358 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 359 "data/maps/PetalburgCity/scripts.pory"
	return
# 360 "data/maps/PetalburgCity/scripts.pory"

# 361 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 362 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 363 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 364 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 365 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 366 "data/maps/PetalburgCity/scripts.pory"
	return
# 367 "data/maps/PetalburgCity/scripts.pory"

# 368 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 369 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 370 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 371 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 372 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 373 "data/maps/PetalburgCity/scripts.pory"
	return
# 374 "data/maps/PetalburgCity/scripts.pory"

# 375 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 376 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 377 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 378 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 379 "data/maps/PetalburgCity/scripts.pory"
	return
# 380 "data/maps/PetalburgCity/scripts.pory"

# 381 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 382 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 383 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 384 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 385 "data/maps/PetalburgCity/scripts.pory"
	return
# 386 "data/maps/PetalburgCity/scripts.pory"

# 387 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 388 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 389 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 390 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 391 "data/maps/PetalburgCity/scripts.pory"
	return
# 392 "data/maps/PetalburgCity/scripts.pory"

# 393 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 394 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 395 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 396 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 397 "data/maps/PetalburgCity/scripts.pory"
	return
# 398 "data/maps/PetalburgCity/scripts.pory"

# 399 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 400 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 401 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 402 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 403 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 404 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 405 "data/maps/PetalburgCity/scripts.pory"

# 406 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 411 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 412 "data/maps/PetalburgCity/scripts.pory"

# 413 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 417 "data/maps/PetalburgCity/scripts.pory"

# 418 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 423 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 424 "data/maps/PetalburgCity/scripts.pory"

# 425 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 431 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 432 "data/maps/PetalburgCity/scripts.pory"

# 433 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 444 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 445 "data/maps/PetalburgCity/scripts.pory"

# 446 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 460 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 461 "data/maps/PetalburgCity/scripts.pory"

# 462 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 473 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 474 "data/maps/PetalburgCity/scripts.pory"

# 475 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 487 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 488 "data/maps/PetalburgCity/scripts.pory"

# 489 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 502 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 503 "data/maps/PetalburgCity/scripts.pory"

# 504 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 513 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 514 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 515 "data/maps/PetalburgCity/scripts.pory"

# 516 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 517 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 518 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 519 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 520 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 521 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 522 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 523 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 525 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 526 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 527 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 528 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 529 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 530 "data/maps/PetalburgCity/scripts.pory"

# 531 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 532 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 533 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 534 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 535 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 536 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 537 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 538 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 539 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 540 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 541 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 542 "data/maps/PetalburgCity/scripts.pory"

# 543 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 544 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 545 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 546 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 547 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 548 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 549 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 550 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 551 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 552 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 553 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 554 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 555 "data/maps/PetalburgCity/scripts.pory"

# 556 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 557 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 558 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 559 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 560 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 561 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 562 "data/maps/PetalburgCity/scripts.pory"
	end
# 563 "data/maps/PetalburgCity/scripts.pory"

# 564 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 565 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 566 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 567 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 568 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 569 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 570 "data/maps/PetalburgCity/scripts.pory"
	end
# 571 "data/maps/PetalburgCity/scripts.pory"

# 572 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 573 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 574 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 575 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 576 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 577 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 578 "data/maps/PetalburgCity/scripts.pory"
	end
# 579 "data/maps/PetalburgCity/scripts.pory"

# 580 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 581 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 582 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 583 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 584 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 585 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 586 "data/maps/PetalburgCity/scripts.pory"
	end
# 587 "data/maps/PetalburgCity/scripts.pory"

# 588 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 589 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 590 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 591 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 592 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 593 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 594 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 595 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 596 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 597 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 598 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 599 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 600 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 601 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 602 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 603 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 604 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 605 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 606 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 607 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 608 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 609 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 611 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 612 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 613 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 614 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 615 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 616 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 617 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 618 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 619 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 620 "data/maps/PetalburgCity/scripts.pory"
	end
# 621 "data/maps/PetalburgCity/scripts.pory"

# 622 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 623 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 624 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 625 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/PetalburgCity/scripts.pory"
	return
# 627 "data/maps/PetalburgCity/scripts.pory"

# 628 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 629 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 630 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 631 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/PetalburgCity/scripts.pory"
	return
# 633 "data/maps/PetalburgCity/scripts.pory"

# 634 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 635 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 636 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 637 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/PetalburgCity/scripts.pory"
	return
# 639 "data/maps/PetalburgCity/scripts.pory"

# 640 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 641 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 642 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 643 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/PetalburgCity/scripts.pory"
	return
# 645 "data/maps/PetalburgCity/scripts.pory"

# 646 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 651 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 652 "data/maps/PetalburgCity/scripts.pory"

# 653 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 654 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 658 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 659 "data/maps/PetalburgCity/scripts.pory"

# 660 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 675 "data/maps/PetalburgCity/scripts.pory"

# 676 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 677 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 679 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 680 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 681 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 684 "data/maps/PetalburgCity/scripts.pory"

# 685 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 698 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 699 "data/maps/PetalburgCity/scripts.pory"

# 700 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 701 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 702 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 703 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 704 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 705 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 706 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 707 "data/maps/PetalburgCity/scripts.pory"

# 708 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 709 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 718 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 719 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 720 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 721 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 722 "data/maps/PetalburgCity/scripts.pory"

# 723 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 724 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 725 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 726 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 727 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 728 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 729 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 730 "data/maps/PetalburgCity/scripts.pory"

# 731 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 732 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_left
# 741 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 742 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 743 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 744 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 745 "data/maps/PetalburgCity/scripts.pory"

# 746 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 747 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 748 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 749 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 750 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 751 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 752 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 753 "data/maps/PetalburgCity/scripts.pory"

# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 755 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 756 "data/maps/PetalburgCity/scripts.pory"
	end
# 757 "data/maps/PetalburgCity/scripts.pory"

# 758 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 762 "data/maps/PetalburgCity/scripts.pory"

# 763 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 770 "data/maps/PetalburgCity/scripts.pory"

# 771 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 773 "data/maps/PetalburgCity/scripts.pory"

# 774 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 777 "data/maps/PetalburgCity/scripts.pory"

# 778 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 779 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 780 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 781 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 782 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 783 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 784 "data/maps/PetalburgCity/scripts.pory"

# 785 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 786 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 789 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 790 "data/maps/PetalburgCity/scripts.pory"

# 791 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 793 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: NORMAN\l"
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 795 "data/maps/PetalburgCity/scripts.pory"

# 796 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 797 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 799 "data/maps/PetalburgCity/scripts.pory"

# 800 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 802 "data/maps/PetalburgCity/scripts.pory"

# 803 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 806 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 807 "data/maps/PetalburgCity/scripts.pory"

# 808 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 809 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 810 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 811 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 812 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 813 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 814 "data/maps/PetalburgCity/scripts.pory"

# 815 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 816 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 817 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 818 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
# 819 "data/maps/PetalburgCity/scripts.pory"

# 820 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_Reporters:
# 821 "data/maps/PetalburgCity/scripts.pory"
	.string "We are covering an ongoing incident\n"
# 822 "data/maps/PetalburgCity/scripts.pory"
	.string "with Team Aqua and a missing Wingull.\p"
# 823 "data/maps/PetalburgCity/scripts.pory"
	.string "Apologies but we cannot let you\n"
# 824 "data/maps/PetalburgCity/scripts.pory"
	.string "through at this time.$"

# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 7
# 6 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 8
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
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 17 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 19 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 20 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 21 "data/maps/PetalburgCity/scripts.pory"
	end
# 22 "data/maps/PetalburgCity/scripts.pory"

# 23 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 24 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 25 "data/maps/PetalburgCity/scripts.pory"
	return
# 26 "data/maps/PetalburgCity/scripts.pory"

# 27 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 28 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 29 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 30 "data/maps/PetalburgCity/scripts.pory"
	return
# 31 "data/maps/PetalburgCity/scripts.pory"

# 32 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 33 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 34 "data/maps/PetalburgCity/scripts.pory"
	return
# 35 "data/maps/PetalburgCity/scripts.pory"

# 36 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 37 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 38 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 39 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 40 "data/maps/PetalburgCity/scripts.pory"

# 41 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnWarp:
# 42 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorialEmmiePosition
# 43 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 44 "data/maps/PetalburgCity/scripts.pory"

# 45 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorialEmmiePosition::
# 46 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER, 14, 9
# 47 "data/maps/PetalburgCity/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_PETALBURG_CITY
# 48 "data/maps/PetalburgCity/scripts.pory"
	end
# 49 "data/maps/PetalburgCity/scripts.pory"

# 50 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 51 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 52 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 53 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 54 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 55 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 56 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PetalburgCity_Movement_WallyTutorialEmmie
# 57 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 59 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 60 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 61 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 62 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 63 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 64 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 65 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 66 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 67 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 68 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 69 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 70 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 71 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 72 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 73 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 74 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 75 "data/maps/PetalburgCity/scripts.pory"
	end
# 76 "data/maps/PetalburgCity/scripts.pory"

# 77 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 78 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 79 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 80 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 81 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 82 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 84 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 85 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 86 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 87 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 88 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 89 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 91 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 92 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 93 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 94 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 95 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 96 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 97 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 98 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 99 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 100 "data/maps/PetalburgCity/scripts.pory"
	end
# 101 "data/maps/PetalburgCity/scripts.pory"

# 102 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 103 "data/maps/PetalburgCity/scripts.pory"
	lock
# 104 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 105 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 106 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 107 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 108 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 109 "data/maps/PetalburgCity/scripts.pory"
	release
# 110 "data/maps/PetalburgCity/scripts.pory"
	end
# 111 "data/maps/PetalburgCity/scripts.pory"

# 112 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 113 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 114 "data/maps/PetalburgCity/scripts.pory"
	end
# 115 "data/maps/PetalburgCity/scripts.pory"

# 116 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 117 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 134 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 135 "data/maps/PetalburgCity/scripts.pory"

# 136 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 139 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 140 "data/maps/PetalburgCity/scripts.pory"

# 141 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 142 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
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
	walk_up
# 159 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 160 "data/maps/PetalburgCity/scripts.pory"

# 161 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 163 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 164 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 165 "data/maps/PetalburgCity/scripts.pory"

# 166 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 167 "data/maps/PetalburgCity/scripts.pory"
	delay_8
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
	walk_down
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
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 200 "data/maps/PetalburgCity/scripts.pory"

# 201 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialEmmie:
# 202 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_down
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
	walk_right
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 234 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 235 "data/maps/PetalburgCity/scripts.pory"

# 236 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 237 "data/maps/PetalburgCity/scripts.pory"
	delay_8
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
	walk_down
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
	walk_right
# 265 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 266 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 267 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 268 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 270 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 271 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 272 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 273 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 274 "data/maps/PetalburgCity/scripts.pory"

# 275 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 276 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 277 "data/maps/PetalburgCity/scripts.pory"
	end
# 278 "data/maps/PetalburgCity/scripts.pory"

# 279 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 280 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 281 "data/maps/PetalburgCity/scripts.pory"
	end
# 282 "data/maps/PetalburgCity/scripts.pory"

# 283 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 284 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 285 "data/maps/PetalburgCity/scripts.pory"
	end
# 286 "data/maps/PetalburgCity/scripts.pory"

# 287 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Reporters::
# 288 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_Reporters, MSGBOX_NPC
# 289 "data/maps/PetalburgCity/scripts.pory"
	end
# 290 "data/maps/PetalburgCity/scripts.pory"

# 291 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 292 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 293 "data/maps/PetalburgCity/scripts.pory"
	end
# 294 "data/maps/PetalburgCity/scripts.pory"

# 295 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 296 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 297 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 298 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 299 "data/maps/PetalburgCity/scripts.pory"
	end
# 300 "data/maps/PetalburgCity/scripts.pory"

# 301 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 302 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 303 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 304 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 305 "data/maps/PetalburgCity/scripts.pory"
	end
# 306 "data/maps/PetalburgCity/scripts.pory"

# 307 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 308 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 309 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 310 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 311 "data/maps/PetalburgCity/scripts.pory"
	end
# 312 "data/maps/PetalburgCity/scripts.pory"

# 313 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 314 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 315 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 316 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 317 "data/maps/PetalburgCity/scripts.pory"
	end
# 318 "data/maps/PetalburgCity/scripts.pory"

# 319 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 320 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 321 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 323 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 324 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 325 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 327 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 329 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 330 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 331 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 332 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 333 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 334 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 335 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 336 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 337 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 338 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 339 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 341 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 343 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 344 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 345 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 347 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 348 "data/maps/PetalburgCity/scripts.pory"
	end
# 349 "data/maps/PetalburgCity/scripts.pory"

# 350 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 351 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 352 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 353 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 354 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/PetalburgCity/scripts.pory"
	return
# 356 "data/maps/PetalburgCity/scripts.pory"

# 357 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 358 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 359 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 360 "data/maps/PetalburgCity/scripts.pory"
	return
# 361 "data/maps/PetalburgCity/scripts.pory"

# 362 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 363 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 364 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 366 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 367 "data/maps/PetalburgCity/scripts.pory"
	return
# 368 "data/maps/PetalburgCity/scripts.pory"

# 369 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 370 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 371 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 372 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 373 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 374 "data/maps/PetalburgCity/scripts.pory"
	return
# 375 "data/maps/PetalburgCity/scripts.pory"

# 376 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 377 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 378 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 379 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 380 "data/maps/PetalburgCity/scripts.pory"
	return
# 381 "data/maps/PetalburgCity/scripts.pory"

# 382 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 383 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 384 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 385 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 386 "data/maps/PetalburgCity/scripts.pory"
	return
# 387 "data/maps/PetalburgCity/scripts.pory"

# 388 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 389 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 390 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 391 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 392 "data/maps/PetalburgCity/scripts.pory"
	return
# 393 "data/maps/PetalburgCity/scripts.pory"

# 394 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 395 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 396 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 397 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 398 "data/maps/PetalburgCity/scripts.pory"
	return
# 399 "data/maps/PetalburgCity/scripts.pory"

# 400 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 401 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 402 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 403 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 404 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 405 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 406 "data/maps/PetalburgCity/scripts.pory"

# 407 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 412 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 413 "data/maps/PetalburgCity/scripts.pory"

# 414 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 418 "data/maps/PetalburgCity/scripts.pory"

# 419 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 424 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 425 "data/maps/PetalburgCity/scripts.pory"

# 426 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 432 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 433 "data/maps/PetalburgCity/scripts.pory"

# 434 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
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
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 445 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 446 "data/maps/PetalburgCity/scripts.pory"

# 447 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 461 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 462 "data/maps/PetalburgCity/scripts.pory"

# 463 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
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
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 474 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 475 "data/maps/PetalburgCity/scripts.pory"

# 476 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
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
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 488 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 489 "data/maps/PetalburgCity/scripts.pory"

# 490 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 503 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 504 "data/maps/PetalburgCity/scripts.pory"

# 505 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 514 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 515 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 516 "data/maps/PetalburgCity/scripts.pory"

# 517 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 518 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 519 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 520 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 528 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 529 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 530 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 531 "data/maps/PetalburgCity/scripts.pory"

# 532 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 533 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 541 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 542 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 543 "data/maps/PetalburgCity/scripts.pory"

# 544 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 545 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 553 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 554 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 555 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 556 "data/maps/PetalburgCity/scripts.pory"

# 557 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 558 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 559 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 560 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 561 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 562 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 563 "data/maps/PetalburgCity/scripts.pory"
	end
# 564 "data/maps/PetalburgCity/scripts.pory"

# 565 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 566 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 567 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 568 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 569 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 570 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 571 "data/maps/PetalburgCity/scripts.pory"
	end
# 572 "data/maps/PetalburgCity/scripts.pory"

# 573 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 574 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 575 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 576 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 577 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 578 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 579 "data/maps/PetalburgCity/scripts.pory"
	end
# 580 "data/maps/PetalburgCity/scripts.pory"

# 581 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 582 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 583 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 584 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 585 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 586 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 587 "data/maps/PetalburgCity/scripts.pory"
	end
# 588 "data/maps/PetalburgCity/scripts.pory"

# 589 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 590 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 591 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 593 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 594 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 595 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 596 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 597 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 598 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 599 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 600 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 602 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 603 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 604 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 605 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 606 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 607 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 608 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 609 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 610 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 611 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 612 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 613 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 614 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 615 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 616 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 617 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 618 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 619 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 620 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 621 "data/maps/PetalburgCity/scripts.pory"
	end
# 622 "data/maps/PetalburgCity/scripts.pory"

# 623 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 624 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 625 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 626 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/PetalburgCity/scripts.pory"
	return
# 628 "data/maps/PetalburgCity/scripts.pory"

# 629 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 630 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 631 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 632 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/PetalburgCity/scripts.pory"
	return
# 634 "data/maps/PetalburgCity/scripts.pory"

# 635 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 636 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 637 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 638 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/PetalburgCity/scripts.pory"
	return
# 640 "data/maps/PetalburgCity/scripts.pory"

# 641 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 642 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 643 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 644 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/PetalburgCity/scripts.pory"
	return
# 646 "data/maps/PetalburgCity/scripts.pory"

# 647 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 652 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 653 "data/maps/PetalburgCity/scripts.pory"

# 654 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 660 "data/maps/PetalburgCity/scripts.pory"

# 661 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 676 "data/maps/PetalburgCity/scripts.pory"

# 677 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 678 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 680 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 681 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 682 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 685 "data/maps/PetalburgCity/scripts.pory"

# 686 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 699 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 700 "data/maps/PetalburgCity/scripts.pory"

# 701 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 702 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 703 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 704 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 705 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 706 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 707 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 708 "data/maps/PetalburgCity/scripts.pory"

# 709 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 710 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 722 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 723 "data/maps/PetalburgCity/scripts.pory"

# 724 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 725 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 726 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 727 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 728 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 729 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 730 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 731 "data/maps/PetalburgCity/scripts.pory"

# 732 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 733 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_left
# 745 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 746 "data/maps/PetalburgCity/scripts.pory"

# 747 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 748 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 749 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 750 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 751 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 752 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 753 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 754 "data/maps/PetalburgCity/scripts.pory"

# 755 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 756 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 757 "data/maps/PetalburgCity/scripts.pory"
	end
# 758 "data/maps/PetalburgCity/scripts.pory"

# 759 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 763 "data/maps/PetalburgCity/scripts.pory"

# 764 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 771 "data/maps/PetalburgCity/scripts.pory"

# 772 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 774 "data/maps/PetalburgCity/scripts.pory"

# 775 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 778 "data/maps/PetalburgCity/scripts.pory"

# 779 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 780 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 781 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 782 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 783 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 784 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 785 "data/maps/PetalburgCity/scripts.pory"

# 786 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 789 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 790 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 791 "data/maps/PetalburgCity/scripts.pory"

# 792 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 793 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: NORMAN\l"
# 795 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 796 "data/maps/PetalburgCity/scripts.pory"

# 797 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 799 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 800 "data/maps/PetalburgCity/scripts.pory"

# 801 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 802 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 803 "data/maps/PetalburgCity/scripts.pory"

# 804 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 806 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 807 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 808 "data/maps/PetalburgCity/scripts.pory"

# 809 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 810 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 811 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 812 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 813 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 814 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 815 "data/maps/PetalburgCity/scripts.pory"

# 816 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 817 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 818 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 819 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
# 820 "data/maps/PetalburgCity/scripts.pory"

# 821 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_Reporters:
# 822 "data/maps/PetalburgCity/scripts.pory"
	.string "We are covering an ongoing incident\n"
# 823 "data/maps/PetalburgCity/scripts.pory"
	.string "with Team Aqua and a missing Wingull.\p"
# 824 "data/maps/PetalburgCity/scripts.pory"
	.string "Apologies but we cannot let you\n"
# 825 "data/maps/PetalburgCity/scripts.pory"
	.string "through at this time.$"

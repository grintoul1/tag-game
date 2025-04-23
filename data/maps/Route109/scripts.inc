# 1 "data/maps/Route109/scripts.pory"

# 2 "data/maps/Route109/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/Route109/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route109/scripts.pory"

# 5 "data/maps/Route109/scripts.pory"
.set LOCALID_HAILEY, 21
# 6 "data/maps/Route109/scripts.pory"
.set LOCALID_RICKY, 7
# 7 "data/maps/Route109/scripts.pory"
.set LOCALID_HUEY, 5
# 8 "data/maps/Route109/scripts.pory"
.set LOCALID_EDMOND, 6
# 9 "data/maps/Route109/scripts.pory"
.set LOCALID_LOLA, 8
# 10 "data/maps/Route109/scripts.pory"
.set LOCALID_CHANDLER, 11
# 11 "data/maps/Route109/scripts.pory"

# 12 "data/maps/Route109/scripts.pory"

# 13 "data/maps/Route109/scripts.pory"
Route109_MapScripts::
# 14 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_OnTransition
# 15 "data/maps/Route109/scripts.pory"
	.byte 0
# 16 "data/maps/Route109/scripts.pory"

# 17 "data/maps/Route109/scripts.pory"
Route109_OnTransition:
# 18 "data/maps/Route109/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 19 "data/maps/Route109/scripts.pory"
	end
# 20 "data/maps/Route109/scripts.pory"

# 21 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 22 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 23 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 24 "data/maps/Route109/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109, 0
# 25 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
# 26 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_BRINEY_R109
# 28 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 29 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 30 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 31 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 32 "data/maps/Route109/scripts.pory"
	end
# 33 "data/maps/Route109/scripts.pory"

# 34 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 35 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 36 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 38 "data/maps/Route109/scripts.pory"
	end
# 39 "data/maps/Route109/scripts.pory"

# 40 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 41 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 42 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 44 "data/maps/Route109/scripts.pory"
	end
# 45 "data/maps/Route109/scripts.pory"

# 46 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 47 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 48 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 50 "data/maps/Route109/scripts.pory"
	end
# 51 "data/maps/Route109/scripts.pory"

# 52 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 53 "data/maps/Route109/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 54 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 55 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
# 56 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
# 57 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route109/scripts.pory"
	delay 50
# 59 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 60 "data/maps/Route109/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 61 "data/maps/Route109/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
# 62 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 64 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 65 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 66 "data/maps/Route109/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 67 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 68 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
# 69 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 71 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 72 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE109
# 73 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 74 "data/maps/Route109/scripts.pory"
	closemessage
# 75 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 76 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 77 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 78 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 79 "data/maps/Route109/scripts.pory"
	release
# 80 "data/maps/Route109/scripts.pory"
	end
# 81 "data/maps/Route109/scripts.pory"

# 82 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 83 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 84 "data/maps/Route109/scripts.pory"
	walk_down
# 85 "data/maps/Route109/scripts.pory"
	walk_down
# 86 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 87 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 88 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 89 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 90 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 91 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 92 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 94 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 95 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 96 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 97 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 98 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 99 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 100 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 101 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 102 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 103 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 104 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 105 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 106 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 108 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 109 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 110 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 111 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 112 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 113 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 114 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 115 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 116 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 117 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 118 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 119 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 120 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 121 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 122 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 123 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 124 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 125 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 126 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 127 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 128 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 129 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 130 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 131 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 132 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 133 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 134 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 135 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 136 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 137 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 138 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 139 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 140 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 141 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 142 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 143 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 144 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 145 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 146 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 147 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 148 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 149 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 150 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 151 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 152 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 153 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 154 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 155 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 156 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 157 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 158 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 159 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 160 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 161 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 162 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 163 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 164 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 165 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 166 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 167 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 168 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 169 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 170 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 171 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 172 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 173 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 174 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 175 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 176 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 177 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 178 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 179 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 180 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 181 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 183 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 184 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 185 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 186 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 187 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 188 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 189 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 190 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 191 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 192 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 193 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 194 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 195 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 196 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 197 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 198 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 199 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 200 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 201 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 202 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 203 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 204 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 205 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 206 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 207 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 208 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 209 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 210 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 211 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 212 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 213 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 214 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 215 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 218 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 219 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 220 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 221 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 222 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 223 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 224 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 225 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 226 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 227 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 228 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 229 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 230 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 231 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 232 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 233 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 234 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 235 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 236 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 237 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 238 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 239 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 240 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 241 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 242 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 243 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 244 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 245 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 246 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 247 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 248 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 249 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 250 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 251 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 252 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 253 "data/maps/Route109/scripts.pory"
	walk_left
# 254 "data/maps/Route109/scripts.pory"
	walk_left
# 255 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 256 "data/maps/Route109/scripts.pory"
	step_end
# 257 "data/maps/Route109/scripts.pory"

# 258 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 259 "data/maps/Route109/scripts.pory"
	walk_down
# 260 "data/maps/Route109/scripts.pory"
	walk_down
# 261 "data/maps/Route109/scripts.pory"
	step_end
# 262 "data/maps/Route109/scripts.pory"

# 263 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 264 "data/maps/Route109/scripts.pory"
	walk_down
# 265 "data/maps/Route109/scripts.pory"
	walk_down
# 266 "data/maps/Route109/scripts.pory"
	walk_left
# 267 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 268 "data/maps/Route109/scripts.pory"
	step_end
# 269 "data/maps/Route109/scripts.pory"

# 270 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 271 "data/maps/Route109/scripts.pory"
	walk_right
# 272 "data/maps/Route109/scripts.pory"
	walk_down
# 273 "data/maps/Route109/scripts.pory"
	step_end
# 274 "data/maps/Route109/scripts.pory"

# 275 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 276 "data/maps/Route109/scripts.pory"
	walk_left
# 277 "data/maps/Route109/scripts.pory"
	walk_down
# 278 "data/maps/Route109/scripts.pory"
	step_end
# 279 "data/maps/Route109/scripts.pory"

# 280 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 281 "data/maps/Route109/scripts.pory"
	walk_down
# 282 "data/maps/Route109/scripts.pory"
	step_end
# 283 "data/maps/Route109/scripts.pory"

# 284 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 285 "data/maps/Route109/scripts.pory"
	walk_down
# 286 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 287 "data/maps/Route109/scripts.pory"
	step_end
# 288 "data/maps/Route109/scripts.pory"

# 289 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 290 "data/maps/Route109/scripts.pory"
	lock
# 291 "data/maps/Route109/scripts.pory"
	faceplayer
# 292 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 293 "data/maps/Route109/scripts.pory"
	end
# 294 "data/maps/Route109/scripts.pory"

# 295 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 296 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 297 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 298 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 299 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 300 "data/maps/Route109/scripts.pory"
	end
# 301 "data/maps/Route109/scripts.pory"

# 302 "data/maps/Route109/scripts.pory"
Route109_EventScript_OneWayTrip::
# 303 "data/maps/Route109/scripts.pory"
	lock
# 304 "data/maps/Route109/scripts.pory"
	faceplayer
# 305 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyOneWayTrip, MSGBOX_DEFAULT
# 306 "data/maps/Route109/scripts.pory"
	release
# 307 "data/maps/Route109/scripts.pory"
	end
# 308 "data/maps/Route109/scripts.pory"

# 309 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 310 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_OneWayTrip
# 311 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 312 "data/maps/Route109/scripts.pory"
	waitmessage
# 313 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 314 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 315 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 316 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 317 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 318 "data/maps/Route109/scripts.pory"
	end
# 319 "data/maps/Route109/scripts.pory"

# 320 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 321 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 322 "data/maps/Route109/scripts.pory"
	closemessage
# 323 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 324 "data/maps/Route109/scripts.pory"
	end
# 325 "data/maps/Route109/scripts.pory"

# 326 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 327 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 328 "data/maps/Route109/scripts.pory"
	release
# 329 "data/maps/Route109/scripts.pory"
	end
# 330 "data/maps/Route109/scripts.pory"

# 331 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 332 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 333 "data/maps/Route109/scripts.pory"
	release
# 334 "data/maps/Route109/scripts.pory"
	end
# 335 "data/maps/Route109/scripts.pory"

# 336 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 337 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
# 338 "data/maps/Route109/scripts.pory"
	end
# 339 "data/maps/Route109/scripts.pory"

# 340 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 341 "data/maps/Route109/scripts.pory"
	lock
# 342 "data/maps/Route109/scripts.pory"
	faceplayer
# 343 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 344 "data/maps/Route109/scripts.pory"
	closemessage
# 345 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 346 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 347 "data/maps/Route109/scripts.pory"
	release
# 348 "data/maps/Route109/scripts.pory"
	end
# 349 "data/maps/Route109/scripts.pory"

# 350 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 351 "data/maps/Route109/scripts.pory"
	lock
# 352 "data/maps/Route109/scripts.pory"
	faceplayer
# 353 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 354 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 355 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 356 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 357 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 358 "data/maps/Route109/scripts.pory"
	closemessage
# 359 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 360 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 361 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 362 "data/maps/Route109/scripts.pory"
	release
# 363 "data/maps/Route109/scripts.pory"
	end
# 364 "data/maps/Route109/scripts.pory"

# 365 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 366 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 367 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 368 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 369 "data/maps/Route109/scripts.pory"
	release
# 370 "data/maps/Route109/scripts.pory"
	end
# 371 "data/maps/Route109/scripts.pory"

# 372 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 373 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 374 "data/maps/Route109/scripts.pory"
	end
# 375 "data/maps/Route109/scripts.pory"

# 376 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 377 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 378 "data/maps/Route109/scripts.pory"
	end
# 379 "data/maps/Route109/scripts.pory"

# 380 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 381 "data/maps/Route109/scripts.pory"
	lock
# 382 "data/maps/Route109/scripts.pory"
	faceplayer
# 383 "data/maps/Route109/scripts.pory"
	waitse
# 384 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 385 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 386 "data/maps/Route109/scripts.pory"
	waitmoncry
# 387 "data/maps/Route109/scripts.pory"
	release
# 388 "data/maps/Route109/scripts.pory"
	end
# 389 "data/maps/Route109/scripts.pory"

# 390 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 391 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 392 "data/maps/Route109/scripts.pory"
	end
# 393 "data/maps/Route109/scripts.pory"

# 394 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 395 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 396 "data/maps/Route109/scripts.pory"
	end
# 397 "data/maps/Route109/scripts.pory"

# 398 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 399 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 400 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 401 "data/maps/Route109/scripts.pory"
	end
# 402 "data/maps/Route109/scripts.pory"

# 403 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 404 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 405 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 406 "data/maps/Route109/scripts.pory"
	end
# 407 "data/maps/Route109/scripts.pory"

# 408 "data/maps/Route109/scripts.pory"
Route109_EventScript_EdmondHuey::
# 409 "data/maps/Route109/scripts.pory"
lockall
# 410 "data/maps/Route109/scripts.pory"
setvar VAR_0x8008, LOCALID_EDMOND
# 411 "data/maps/Route109/scripts.pory"
playse SE_PIN
# 412 "data/maps/Route109/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 413 "data/maps/Route109/scripts.pory"
waitmovement 0
# 414 "data/maps/Route109/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 415 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 416 "data/maps/Route109/scripts.pory"
waitmovement 0
# 417 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_EdmondIntro MSGBOX_AUTOCLOSE
# 418 "data/maps/Route109/scripts.pory"
setvar VAR_0x8008, LOCALID_HUEY
# 419 "data/maps/Route109/scripts.pory"
playse SE_PIN
# 420 "data/maps/Route109/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 421 "data/maps/Route109/scripts.pory"
waitmovement 0
# 422 "data/maps/Route109/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 423 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 424 "data/maps/Route109/scripts.pory"
waitmovement 0
# 425 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_HueyIntro MSGBOX_AUTOCLOSE
# 426 "data/maps/Route109/scripts.pory"
goto Route109_EventScript_EdmondHueyDoMultiBattle
# 427 "data/maps/Route109/scripts.pory"
releaseall
# 428 "data/maps/Route109/scripts.pory"
end
# 429 "data/maps/Route109/scripts.pory"

# 430 "data/maps/Route109/scripts.pory"
Route109_EventScript_EdmondHueyDoMultiBattle::
# 431 "data/maps/Route109/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 432 "data/maps/Route109/scripts.pory"
multi_2p_vs_2 TRAINER_EDMOND, Route109_Text_EdmondDefeated, TRAINER_HUEY, Route109_Text_HueyDefeated, PARTNER_EMMIE
# 433 "data/maps/Route109/scripts.pory"
switch VAR_RESULT
# 434 "data/maps/Route109/scripts.pory"
case 1, Route109_EventScript_EdmondHueyVictory
# 435 "data/maps/Route109/scripts.pory"
fadescreen FADE_TO_BLACK
# 436 "data/maps/Route109/scripts.pory"
special SetCB2WhiteOut
# 437 "data/maps/Route109/scripts.pory"
waitstate
# 438 "data/maps/Route109/scripts.pory"

# 439 "data/maps/Route109/scripts.pory"
Route109_EventScript_EdmondHueyVictory::
# 440 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 441 "data/maps/Route109/scripts.pory"
waitmovement 0
# 442 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 443 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 444 "data/maps/Route109/scripts.pory"
waitmovement 0
# 445 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 446 "data/maps/Route109/scripts.pory"
addvar VAR_ROUTE109_STATE, 1
# 447 "data/maps/Route109/scripts.pory"
end
# 448 "data/maps/Route109/scripts.pory"

# 449 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 450 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 451 "data/maps/Route109/scripts.pory"
	end
# 452 "data/maps/Route109/scripts.pory"

# 453 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 454 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 455 "data/maps/Route109/scripts.pory"
	end
# 456 "data/maps/Route109/scripts.pory"

# 457 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 458 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 459 "data/maps/Route109/scripts.pory"
	release
# 460 "data/maps/Route109/scripts.pory"
	end
# 461 "data/maps/Route109/scripts.pory"

# 462 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 463 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 464 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 465 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 466 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 467 "data/maps/Route109/scripts.pory"
	release
# 468 "data/maps/Route109/scripts.pory"
	end
# 469 "data/maps/Route109/scripts.pory"

# 470 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 471 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 472 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 473 "data/maps/Route109/scripts.pory"
	end
# 474 "data/maps/Route109/scripts.pory"

# 475 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaChandler::
# 476 "data/maps/Route109/scripts.pory"
lockall
# 477 "data/maps/Route109/scripts.pory"
setvar VAR_0x8008, LOCALID_LOLA
# 478 "data/maps/Route109/scripts.pory"
playse SE_PIN
# 479 "data/maps/Route109/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 480 "data/maps/Route109/scripts.pory"
waitmovement 0
# 481 "data/maps/Route109/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 482 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 483 "data/maps/Route109/scripts.pory"
waitmovement 0
# 484 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_LolaIntro MSGBOX_AUTOCLOSE
# 485 "data/maps/Route109/scripts.pory"
setvar VAR_0x8008, LOCALID_CHANDLER
# 486 "data/maps/Route109/scripts.pory"
playse SE_PIN
# 487 "data/maps/Route109/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 488 "data/maps/Route109/scripts.pory"
waitmovement 0
# 489 "data/maps/Route109/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 490 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 491 "data/maps/Route109/scripts.pory"
waitmovement 0
# 492 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_ChandlerIntro MSGBOX_AUTOCLOSE
# 493 "data/maps/Route109/scripts.pory"
goto Route109_EventScript_LolaChandlerDoMultiBattle
# 494 "data/maps/Route109/scripts.pory"
releaseall
# 495 "data/maps/Route109/scripts.pory"
end
# 496 "data/maps/Route109/scripts.pory"

# 497 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaChandlerDoMultiBattle::
# 498 "data/maps/Route109/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 499 "data/maps/Route109/scripts.pory"
multi_2p_vs_2 TRAINER_LOLA_1, Route109_Text_LolaDefeated, TRAINER_CHANDLER, Route109_Text_ChandlerDefeated, PARTNER_EMMIE
# 500 "data/maps/Route109/scripts.pory"
switch VAR_RESULT
# 501 "data/maps/Route109/scripts.pory"
case 1, Route109_EventScript_LolaChandlerVictory
# 502 "data/maps/Route109/scripts.pory"
fadescreen FADE_TO_BLACK
# 503 "data/maps/Route109/scripts.pory"
special SetCB2WhiteOut
# 504 "data/maps/Route109/scripts.pory"
waitstate
# 505 "data/maps/Route109/scripts.pory"

# 506 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaChandlerVictory::
# 507 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 508 "data/maps/Route109/scripts.pory"
waitmovement 0
# 509 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_LolaPostBattle, MSGBOX_AUTOCLOSE
# 510 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 511 "data/maps/Route109/scripts.pory"
waitmovement 0
# 512 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route109/scripts.pory"
addvar VAR_ROUTE109_STATE, 1
# 514 "data/maps/Route109/scripts.pory"
end
# 515 "data/maps/Route109/scripts.pory"

# 516 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 517 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 518 "data/maps/Route109/scripts.pory"
	release
# 519 "data/maps/Route109/scripts.pory"
	end
# 520 "data/maps/Route109/scripts.pory"

# 521 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 522 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 523 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 524 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 525 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 526 "data/maps/Route109/scripts.pory"
	release
# 527 "data/maps/Route109/scripts.pory"
	end
# 528 "data/maps/Route109/scripts.pory"

# 529 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 530 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 531 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 532 "data/maps/Route109/scripts.pory"
	end
# 533 "data/maps/Route109/scripts.pory"

# 534 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 535 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 536 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 537 "data/maps/Route109/scripts.pory"
	end
# 538 "data/maps/Route109/scripts.pory"

# 539 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 540 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 541 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 542 "data/maps/Route109/scripts.pory"
	end
# 543 "data/maps/Route109/scripts.pory"

# 544 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 545 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 546 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 547 "data/maps/Route109/scripts.pory"
	end
# 548 "data/maps/Route109/scripts.pory"

# 549 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 550 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 551 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 552 "data/maps/Route109/scripts.pory"
	end
# 553 "data/maps/Route109/scripts.pory"

# 554 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 555 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 556 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 557 "data/maps/Route109/scripts.pory"
	end
# 558 "data/maps/Route109/scripts.pory"

# 559 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 560 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 561 "data/maps/Route109/scripts.pory"
	end
# 562 "data/maps/Route109/scripts.pory"

# 563 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaileyRicky::
# 564 "data/maps/Route109/scripts.pory"
lockall
# 565 "data/maps/Route109/scripts.pory"
setvar VAR_0x8008, LOCALID_HAILEY
# 566 "data/maps/Route109/scripts.pory"
playse SE_PIN
# 567 "data/maps/Route109/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 568 "data/maps/Route109/scripts.pory"
waitmovement 0
# 569 "data/maps/Route109/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 570 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 571 "data/maps/Route109/scripts.pory"
waitmovement 0
# 572 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_HaileyIntro MSGBOX_AUTOCLOSE
# 573 "data/maps/Route109/scripts.pory"
setvar VAR_0x8008, LOCALID_RICKY
# 574 "data/maps/Route109/scripts.pory"
playse SE_PIN
# 575 "data/maps/Route109/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 576 "data/maps/Route109/scripts.pory"
waitmovement 0
# 577 "data/maps/Route109/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 578 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 579 "data/maps/Route109/scripts.pory"
waitmovement 0
# 580 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_RickyIntro MSGBOX_AUTOCLOSE
# 581 "data/maps/Route109/scripts.pory"
goto Route109_EventScript_HaileyRickyDoMultiBattle
# 582 "data/maps/Route109/scripts.pory"
releaseall
# 583 "data/maps/Route109/scripts.pory"
end
# 584 "data/maps/Route109/scripts.pory"

# 585 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaileyRickyDoMultiBattle::
# 586 "data/maps/Route109/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 587 "data/maps/Route109/scripts.pory"
multi_2p_vs_2 TRAINER_HAILEY, Route109_Text_HaileyDefeated, TRAINER_RICKY_1, Route109_Text_RickyDefeated, PARTNER_EMMIE
# 588 "data/maps/Route109/scripts.pory"
switch VAR_RESULT
# 589 "data/maps/Route109/scripts.pory"
case 1, Route109_EventScript_HaileyRickyVictory
# 590 "data/maps/Route109/scripts.pory"
fadescreen FADE_TO_BLACK
# 591 "data/maps/Route109/scripts.pory"
special SetCB2WhiteOut
# 592 "data/maps/Route109/scripts.pory"
waitstate
# 593 "data/maps/Route109/scripts.pory"

# 594 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaileyRickyVictory::
# 595 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 596 "data/maps/Route109/scripts.pory"
waitmovement 0
# 597 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 598 "data/maps/Route109/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 599 "data/maps/Route109/scripts.pory"
waitmovement 0
# 600 "data/maps/Route109/scripts.pory"
msgbox Route109_Text_RickyPostBattle, MSGBOX_AUTOCLOSE
# 601 "data/maps/Route109/scripts.pory"
addvar VAR_ROUTE109_STATE, 1
# 602 "data/maps/Route109/scripts.pory"
end
# 603 "data/maps/Route109/scripts.pory"

# 604 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 605 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 606 "data/maps/Route109/scripts.pory"
	end
# 607 "data/maps/Route109/scripts.pory"

# 608 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 609 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 610 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 611 "data/maps/Route109/scripts.pory"
	end
# 612 "data/maps/Route109/scripts.pory"

# 613 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 614 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: I thought you're supposed\n"
# 615 "data/maps/Route109/scripts.pory"
	.string "to deliver the DEVON GOODS.\p"
# 616 "data/maps/Route109/scripts.pory"
	.string "Would you like to sail back to\n"
# 617 "data/maps/Route109/scripts.pory"
	.string "DEWFORD, then?$"
# 618 "data/maps/Route109/scripts.pory"

# 619 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 620 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\p"
# 621 "data/maps/Route109/scripts.pory"
	.string "Anchors aweigh!\n"
# 622 "data/maps/Route109/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 623 "data/maps/Route109/scripts.pory"

# 624 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 625 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 626 "data/maps/Route109/scripts.pory"
	.string "the DEVON GOODS. I'll be waiting.$"
# 627 "data/maps/Route109/scripts.pory"

# 628 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 629 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy! We've made land in\n"
# 630 "data/maps/Route109/scripts.pory"
	.string "SLATEPORT!\p"
# 631 "data/maps/Route109/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 632 "data/maps/Route109/scripts.pory"
	.string "you want to set sail again!$"
# 633 "data/maps/Route109/scripts.pory"

# 634 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyOneWayTrip:
# 635 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: I said it was one-way!\n"
# 636 "data/maps/Route109/scripts.pory"
	.string "Best of luck on your travels kid!$"
# 637 "data/maps/Route109/scripts.pory"

# 638 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 639 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 640 "data/maps/Route109/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 641 "data/maps/Route109/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 642 "data/maps/Route109/scripts.pory"

# 643 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 644 "data/maps/Route109/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 645 "data/maps/Route109/scripts.pory"
	.string "you need to set sail again!$"
# 646 "data/maps/Route109/scripts.pory"

# 647 "data/maps/Route109/scripts.pory"
Route109_Text_ChillAtMyPapasSpot:
# 648 "data/maps/Route109/scripts.pory"
	.string "Yo, TRAINERS!\n"
# 649 "data/maps/Route109/scripts.pory"
	.string "Whether you're hot to trot,\l"
# 650 "data/maps/Route109/scripts.pory"
	.string "or cool cat not,\l"
# 651 "data/maps/Route109/scripts.pory"
	.string "chill at my papa's spot!$"
# 652 "data/maps/Route109/scripts.pory"

# 653 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 654 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 655 "data/maps/Route109/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 656 "data/maps/Route109/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 657 "data/maps/Route109/scripts.pory"
	.string "Mine are with my POKéMON, so they\n"
# 658 "data/maps/Route109/scripts.pory"
	.string "should be okay, but…$"
# 659 "data/maps/Route109/scripts.pory"

# 660 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 661 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 662 "data/maps/Route109/scripts.pory"
	.string "to make.$"
# 663 "data/maps/Route109/scripts.pory"

# 664 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 665 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"
# 666 "data/maps/Route109/scripts.pory"

# 667 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 668 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
# 669 "data/maps/Route109/scripts.pory"
	.string "the beach and make a big castle!\p"
# 670 "data/maps/Route109/scripts.pory"
	.string "And then we're going to be a king and\n"
# 671 "data/maps/Route109/scripts.pory"
	.string "queen.\p"
# 672 "data/maps/Route109/scripts.pory"
	.string "We'll let you be a servant.$"
# 673 "data/maps/Route109/scripts.pory"

# 674 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 675 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
# 676 "data/maps/Route109/scripts.pory"
	.string "But, I get my ZIGZAGOON to pick up\n"
# 677 "data/maps/Route109/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 678 "data/maps/Route109/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 679 "data/maps/Route109/scripts.pory"
	.string "rivers, which we drink from…\p"
# 680 "data/maps/Route109/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 681 "data/maps/Route109/scripts.pory"
	.string "back to haunt us eventually.$"
# 682 "data/maps/Route109/scripts.pory"

# 683 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 684 "data/maps/Route109/scripts.pory"
	.string "ZIGZAGOON: Guguu?$"
# 685 "data/maps/Route109/scripts.pory"

# 686 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 687 "data/maps/Route109/scripts.pory"
	.string "SEASHORE HOUSE\p"
# 688 "data/maps/Route109/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 689 "data/maps/Route109/scripts.pory"
	.string "The place for hot TRAINERS!”$"
# 690 "data/maps/Route109/scripts.pory"

# 691 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 692 "data/maps/Route109/scripts.pory"
	.string "TRAINER TIPS\p"
# 693 "data/maps/Route109/scripts.pory"
	.string "POKéMON at the same level may not\n"
# 694 "data/maps/Route109/scripts.pory"
	.string "always have identical stats.\p"
# 695 "data/maps/Route109/scripts.pory"
	.string "POKéMON raised by TRAINERS are said\n"
# 696 "data/maps/Route109/scripts.pory"
	.string "to grow stronger than wild POKéMON.$"

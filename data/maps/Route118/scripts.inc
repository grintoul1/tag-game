# 1 "data/maps/Route118/scripts.pory"

# 2 "data/maps/Route118/scripts.pory"
.set LOCALID_STEVEN, 13
# 3 "data/maps/Route118/scripts.pory"
.set LOCALID_BARNY, 11
# 4 "data/maps/Route118/scripts.pory"
.set LOCALID_WADE, 9
# 5 "data/maps/Route118/scripts.pory"
.set LOCALID_ROSE, 8
# 6 "data/maps/Route118/scripts.pory"
.set LOCALID_DEANDRE, 15
# 7 "data/maps/Route118/scripts.pory"
.set LOCALID_CHESTER, 10
# 8 "data/maps/Route118/scripts.pory"
.set LOCALID_DALTON, 12
# 9 "data/maps/Route118/scripts.pory"

# 10 "data/maps/Route118/scripts.pory"
Route118_MapScripts::
# 11 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
# 12 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
# 13 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
# 14 "data/maps/Route118/scripts.pory"
	.byte 0
# 15 "data/maps/Route118/scripts.pory"

# 16 "data/maps/Route118/scripts.pory"
Route118_OnTransition:
# 17 "data/maps/Route118/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 18 "data/maps/Route118/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 19 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 20 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 21 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
# 22 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
# 23 "data/maps/Route118/scripts.pory"
	end
# 24 "data/maps/Route118/scripts.pory"

# 25 "data/maps/Route118/scripts.pory"
Route118_OnLoad:
# 26 "data/maps/Route118/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 27 "data/maps/Route118/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 28 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
# 29 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
# 30 "data/maps/Route118/scripts.pory"
	end
# 31 "data/maps/Route118/scripts.pory"

# 32 "data/maps/Route118/scripts.pory"
Route118_OnFrame:
# 33 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 34 "data/maps/Route118/scripts.pory"
	.2byte 0
# 35 "data/maps/Route118/scripts.pory"

# 36 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman::
# 37 "data/maps/Route118/scripts.pory"
	lock
# 38 "data/maps/Route118/scripts.pory"
	faceplayer
# 39 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_ReceivedGoodRod
# 40 "data/maps/Route118/scripts.pory"
	end
# 41 "data/maps/Route118/scripts.pory"

# 42 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod::
# 43 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
# 44 "data/maps/Route118/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 45 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 46 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 47 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 48 "data/maps/Route118/scripts.pory"
	release
# 49 "data/maps/Route118/scripts.pory"
	end
# 50 "data/maps/Route118/scripts.pory"

# 51 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeclineGoodRod::
# 52 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 53 "data/maps/Route118/scripts.pory"
	release
# 54 "data/maps/Route118/scripts.pory"
	end
# 55 "data/maps/Route118/scripts.pory"

# 56 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceivedGoodRod::
# 57 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
# 58 "data/maps/Route118/scripts.pory"
	release
# 59 "data/maps/Route118/scripts.pory"
	end
# 60 "data/maps/Route118/scripts.pory"

# 61 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 62 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 63 "data/maps/Route118/scripts.pory"
	end
# 64 "data/maps/Route118/scripts.pory"

# 65 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 66 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 67 "data/maps/Route118/scripts.pory"
	end
# 68 "data/maps/Route118/scripts.pory"

# 69 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 70 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 71 "data/maps/Route118/scripts.pory"
	end
# 72 "data/maps/Route118/scripts.pory"

# 73 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 74 "data/maps/Route118/scripts.pory"
	lockall
# 75 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 76 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 77 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge0
# 79 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 81 "data/maps/Route118/scripts.pory"
	end
# 82 "data/maps/Route118/scripts.pory"

# 83 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 84 "data/maps/Route118/scripts.pory"
	lockall
# 85 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 86 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 87 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 89 "data/maps/Route118/scripts.pory"
	end
# 90 "data/maps/Route118/scripts.pory"

# 91 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 92 "data/maps/Route118/scripts.pory"
	lockall
# 93 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 94 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 95 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 97 "data/maps/Route118/scripts.pory"
	end
# 98 "data/maps/Route118/scripts.pory"

# 99 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger::
# 100 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 101 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
# 102 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route118/scripts.pory"
	delay 30
# 104 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 105 "data/maps/Route118/scripts.pory"
	closemessage
# 106 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route118_EventScript_StevenExit0
# 107 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route118_EventScript_StevenExit1
# 108 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route118_EventScript_StevenExit2
# 109 "data/maps/Route118/scripts.pory"
	addvar VAR_ROUTE118_STATE, 1
# 110 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 111 "data/maps/Route118/scripts.pory"
	releaseall
# 112 "data/maps/Route118/scripts.pory"
	end
# 113 "data/maps/Route118/scripts.pory"

# 114 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 115 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 116 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit0
# 117 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route118/scripts.pory"
	return
# 119 "data/maps/Route118/scripts.pory"

# 120 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 121 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 122 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit1
# 123 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route118/scripts.pory"
	return
# 125 "data/maps/Route118/scripts.pory"

# 126 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 127 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 128 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit2
# 129 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route118/scripts.pory"
	return
# 131 "data/maps/Route118/scripts.pory"

# 132 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 133 "data/maps/Route118/scripts.pory"
	delay_16
# 134 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 135 "data/maps/Route118/scripts.pory"
	step_end
# 136 "data/maps/Route118/scripts.pory"

# 137 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge0:
# 138 "data/maps/Route118/scripts.pory"
	walk_left
# 139 "data/maps/Route118/scripts.pory"
	step_end
# 140 "data/maps/Route118/scripts.pory"

# 141 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge2:
# 142 "data/maps/Route118/scripts.pory"
	walk_right
# 143 "data/maps/Route118/scripts.pory"
	step_end
# 144 "data/maps/Route118/scripts.pory"

# 145 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 146 "data/maps/Route118/scripts.pory"
	jump_2_down
# 147 "data/maps/Route118/scripts.pory"
	delay_16
# 148 "data/maps/Route118/scripts.pory"
	walk_down
# 149 "data/maps/Route118/scripts.pory"
	step_end
# 150 "data/maps/Route118/scripts.pory"

# 151 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0:
# 152 "data/maps/Route118/scripts.pory"
	walk_right
# 153 "data/maps/Route118/scripts.pory"
	walk_right
# 154 "data/maps/Route118/scripts.pory"
	walk_right
# 155 "data/maps/Route118/scripts.pory"
	walk_right
# 156 "data/maps/Route118/scripts.pory"
	walk_right
# 157 "data/maps/Route118/scripts.pory"
	walk_right
# 158 "data/maps/Route118/scripts.pory"
	walk_right
# 159 "data/maps/Route118/scripts.pory"
	walk_right
# 160 "data/maps/Route118/scripts.pory"
	walk_right
# 161 "data/maps/Route118/scripts.pory"
	walk_right
# 162 "data/maps/Route118/scripts.pory"
	step_end
# 163 "data/maps/Route118/scripts.pory"

# 164 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1:
# 165 "data/maps/Route118/scripts.pory"
	walk_right
# 166 "data/maps/Route118/scripts.pory"
	walk_right
# 167 "data/maps/Route118/scripts.pory"
	walk_right
# 168 "data/maps/Route118/scripts.pory"
	walk_right
# 169 "data/maps/Route118/scripts.pory"
	walk_right
# 170 "data/maps/Route118/scripts.pory"
	walk_right
# 171 "data/maps/Route118/scripts.pory"
	walk_right
# 172 "data/maps/Route118/scripts.pory"
	walk_right
# 173 "data/maps/Route118/scripts.pory"
	walk_right
# 174 "data/maps/Route118/scripts.pory"
	step_end
# 175 "data/maps/Route118/scripts.pory"

# 176 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit2:
# 177 "data/maps/Route118/scripts.pory"
	walk_right
# 178 "data/maps/Route118/scripts.pory"
	walk_right
# 179 "data/maps/Route118/scripts.pory"
	walk_right
# 180 "data/maps/Route118/scripts.pory"
	walk_right
# 181 "data/maps/Route118/scripts.pory"
	walk_right
# 182 "data/maps/Route118/scripts.pory"
	walk_right
# 183 "data/maps/Route118/scripts.pory"
	walk_right
# 184 "data/maps/Route118/scripts.pory"
	walk_right
# 185 "data/maps/Route118/scripts.pory"
	step_end
# 186 "data/maps/Route118/scripts.pory"

# 187 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 188 "data/maps/Route118/scripts.pory"
	faceplayer
# 189 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 190 "data/maps/Route118/scripts.pory"
	release
# 191 "data/maps/Route118/scripts.pory"
	end
# 192 "data/maps/Route118/scripts.pory"

# 193 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 194 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 195 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 197 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 198 "data/maps/Route118/scripts.pory"
	release
# 199 "data/maps/Route118/scripts.pory"
	end
# 200 "data/maps/Route118/scripts.pory"

# 201 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 202 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 203 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route118/scripts.pory"
	end
# 205 "data/maps/Route118/scripts.pory"

# 206 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 207 "data/maps/Route118/scripts.pory"
	faceplayer
# 208 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route118/scripts.pory"
	end
# 210 "data/maps/Route118/scripts.pory"

# 211 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 212 "data/maps/Route118/scripts.pory"
	faceplayer
# 213 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route118/scripts.pory"
	end
# 215 "data/maps/Route118/scripts.pory"

# 216 "data/maps/Route118/scripts.pory"
Route118_EventScript_BarnyWade::
# 217 "data/maps/Route118/scripts.pory"
lockall
# 218 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_BARNY
# 219 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 220 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 221 "data/maps/Route118/scripts.pory"
waitmovement 0
# 222 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 223 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 224 "data/maps/Route118/scripts.pory"
waitmovement 0
# 225 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_BarnyIntro MSGBOX_AUTOCLOSE
# 226 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_WADE
# 227 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 228 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 229 "data/maps/Route118/scripts.pory"
waitmovement 0
# 230 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 231 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 232 "data/maps/Route118/scripts.pory"
waitmovement 0
# 233 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_WadeIntro, MSGBOX_AUTOCLOSE
# 234 "data/maps/Route118/scripts.pory"
goto Route118_EventScript_BarnyWadeDoMultiBattle
# 235 "data/maps/Route118/scripts.pory"
releaseall
# 236 "data/maps/Route118/scripts.pory"
end
# 237 "data/maps/Route118/scripts.pory"

# 238 "data/maps/Route118/scripts.pory"
Route118_EventScript_BarnyWadeDoMultiBattle::
# 239 "data/maps/Route118/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 240 "data/maps/Route118/scripts.pory"
multi_2p_vs_2 TRAINER_BARNY, Route118_Text_BarnyDefeat, TRAINER_WADE, Route118_Text_WadeDefeat, PARTNER_EMMIE
# 241 "data/maps/Route118/scripts.pory"
switch VAR_RESULT
# 242 "data/maps/Route118/scripts.pory"
case 1, Route118_EventScript_BarnyWadeVictory
# 243 "data/maps/Route118/scripts.pory"
fadescreen FADE_TO_BLACK
# 244 "data/maps/Route118/scripts.pory"
special SetCB2WhiteOut
# 245 "data/maps/Route118/scripts.pory"
waitstate
# 246 "data/maps/Route118/scripts.pory"

# 247 "data/maps/Route118/scripts.pory"
Route118_EventScript_BarnyWadeVictory::
# 248 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 249 "data/maps/Route118/scripts.pory"
waitmovement 0
# 250 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 252 "data/maps/Route118/scripts.pory"
waitmovement 0
# 253 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/Route118/scripts.pory"
addvar VAR_ROUTE118_STATE, 1
# 255 "data/maps/Route118/scripts.pory"
end
# 256 "data/maps/Route118/scripts.pory"

# 257 "data/maps/Route118/scripts.pory"
Route118_EventScript_ChesterDalton::
# 258 "data/maps/Route118/scripts.pory"
lockall
# 259 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_CHESTER
# 260 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 261 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 262 "data/maps/Route118/scripts.pory"
waitmovement 0
# 263 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 264 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 265 "data/maps/Route118/scripts.pory"
waitmovement 0
# 266 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_ChesterIntro MSGBOX_AUTOCLOSE
# 267 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_DALTON
# 268 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 269 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 270 "data/maps/Route118/scripts.pory"
waitmovement 0
# 271 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 272 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 273 "data/maps/Route118/scripts.pory"
waitmovement 0
# 274 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DaltonIntro, MSGBOX_AUTOCLOSE
# 275 "data/maps/Route118/scripts.pory"
goto Route118_EventScript_ChesterDaltonDoMultiBattle
# 276 "data/maps/Route118/scripts.pory"
releaseall
# 277 "data/maps/Route118/scripts.pory"
end
# 278 "data/maps/Route118/scripts.pory"

# 279 "data/maps/Route118/scripts.pory"
Route118_EventScript_ChesterDaltonDoMultiBattle::
# 280 "data/maps/Route118/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 281 "data/maps/Route118/scripts.pory"
multi_2p_vs_2 TRAINER_CHESTER, Route118_Text_ChesterDefeat, TRAINER_DALTON_1, Route118_Text_DaltonDefeat, PARTNER_EMMIE
# 282 "data/maps/Route118/scripts.pory"
switch VAR_RESULT
# 283 "data/maps/Route118/scripts.pory"
case 1, Route118_EventScript_ChesterDaltonVictory
# 284 "data/maps/Route118/scripts.pory"
fadescreen FADE_TO_BLACK
# 285 "data/maps/Route118/scripts.pory"
special SetCB2WhiteOut
# 286 "data/maps/Route118/scripts.pory"
waitstate
# 287 "data/maps/Route118/scripts.pory"

# 288 "data/maps/Route118/scripts.pory"
Route118_EventScript_ChesterDaltonVictory::
# 289 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 290 "data/maps/Route118/scripts.pory"
waitmovement 0
# 291 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 293 "data/maps/Route118/scripts.pory"
waitmovement 0
# 294 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route118/scripts.pory"
addvar VAR_ROUTE118_STATE, 1
# 296 "data/maps/Route118/scripts.pory"
end
# 297 "data/maps/Route118/scripts.pory"

# 298 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 299 "data/maps/Route118/scripts.pory"
	faceplayer
# 300 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 301 "data/maps/Route118/scripts.pory"
	release
# 302 "data/maps/Route118/scripts.pory"
	end
# 303 "data/maps/Route118/scripts.pory"

# 304 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 305 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 306 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 307 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 308 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 309 "data/maps/Route118/scripts.pory"
	release
# 310 "data/maps/Route118/scripts.pory"
	end
# 311 "data/maps/Route118/scripts.pory"

# 312 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 313 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 314 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 315 "data/maps/Route118/scripts.pory"
	end
# 316 "data/maps/Route118/scripts.pory"

# 317 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 318 "data/maps/Route118/scripts.pory"
	faceplayer
# 319 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route118/scripts.pory"
	end
# 321 "data/maps/Route118/scripts.pory"

# 322 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 323 "data/maps/Route118/scripts.pory"
	faceplayer
# 324 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 325 "data/maps/Route118/scripts.pory"
	end
# 326 "data/maps/Route118/scripts.pory"

# 327 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeandreRose::
# 328 "data/maps/Route118/scripts.pory"
lockall
# 329 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_DEANDRE
# 330 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 331 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 332 "data/maps/Route118/scripts.pory"
waitmovement 0
# 333 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 334 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 335 "data/maps/Route118/scripts.pory"
waitmovement 0
# 336 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DeandreIntro MSGBOX_AUTOCLOSE
# 337 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_ROSE
# 338 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 339 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 340 "data/maps/Route118/scripts.pory"
waitmovement 0
# 341 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 342 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 343 "data/maps/Route118/scripts.pory"
waitmovement 0
# 344 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_RoseIntro, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route118/scripts.pory"
goto Route118_EventScript_DeandreRoseDoMultiBattle
# 346 "data/maps/Route118/scripts.pory"
releaseall
# 347 "data/maps/Route118/scripts.pory"
end
# 348 "data/maps/Route118/scripts.pory"

# 349 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeandreRoseDoMultiBattle::
# 350 "data/maps/Route118/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 351 "data/maps/Route118/scripts.pory"
multi_2p_vs_2 TRAINER_DEANDRE, Route118_Text_DeandreDefeat, TRAINER_ROSE_1, Route118_Text_RoseDefeat, PARTNER_EMMIE
# 352 "data/maps/Route118/scripts.pory"
switch VAR_RESULT
# 353 "data/maps/Route118/scripts.pory"
case 1, Route118_EventScript_DeandreRoseVictory
# 354 "data/maps/Route118/scripts.pory"
fadescreen FADE_TO_BLACK
# 355 "data/maps/Route118/scripts.pory"
special SetCB2WhiteOut
# 356 "data/maps/Route118/scripts.pory"
waitstate
# 357 "data/maps/Route118/scripts.pory"

# 358 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeandreRoseVictory::
# 359 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 360 "data/maps/Route118/scripts.pory"
waitmovement 0
# 361 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 362 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 363 "data/maps/Route118/scripts.pory"
waitmovement 0
# 364 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_RosePostBattle, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route118/scripts.pory"
addvar VAR_ROUTE118_STATE, 1
# 366 "data/maps/Route118/scripts.pory"
end
# 367 "data/maps/Route118/scripts.pory"

# 368 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 369 "data/maps/Route118/scripts.pory"
	faceplayer
# 370 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route118/scripts.pory"
	end
# 372 "data/maps/Route118/scripts.pory"

# 373 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 374 "data/maps/Route118/scripts.pory"
	.string "STEVEN: Hi, {PLAYER}{KUN}!\p"
# 375 "data/maps/Route118/scripts.pory"
	.string "It's me, STEVEN!\n"
# 376 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near DEWFORD.\p"
# 377 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of POKéMON\n"
# 378 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 379 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of POKéMON\n"
# 380 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 381 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 382 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 383 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 384 "data/maps/Route118/scripts.pory"
	.string "all sorts of POKéMON.\p"
# 385 "data/maps/Route118/scripts.pory"
	.string "As a TRAINER of POKéMON,\n"
# 386 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 387 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 388 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 389 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 390 "data/maps/Route118/scripts.pory"

# 391 "data/maps/Route118/scripts.pory"
Route118_Text_YouAgreeGoodRodIsGood:
# 392 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 393 "data/maps/Route118/scripts.pory"
	.string "A GOOD ROD is really good!\p"
# 394 "data/maps/Route118/scripts.pory"
	.string "Wouldn't you agree?$"
# 395 "data/maps/Route118/scripts.pory"

# 396 "data/maps/Route118/scripts.pory"
Route118_Text_IdenticalMindsTakeThis:
# 397 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 398 "data/maps/Route118/scripts.pory"
	.string "We're of identical minds!\p"
# 399 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 400 "data/maps/Route118/scripts.pory"
	.string "Take this GOOD ROD!$"
# 401 "data/maps/Route118/scripts.pory"

# 402 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 403 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 404 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 405 "data/maps/Route118/scripts.pory"

# 406 "data/maps/Route118/scripts.pory"
Route118_Text_DontYouLikeToFish:
# 407 "data/maps/Route118/scripts.pory"
	.string "Don't you like to fish?$"
# 408 "data/maps/Route118/scripts.pory"

# 409 "data/maps/Route118/scripts.pory"
Route118_Text_TryCatchingMonWithGoodRod:
# 410 "data/maps/Route118/scripts.pory"
	.string "Try catching all sorts of POKéMON\n"
# 411 "data/maps/Route118/scripts.pory"
	.string "with your fishing rod!$"
# 412 "data/maps/Route118/scripts.pory"

# 413 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 414 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 415 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 416 "data/maps/Route118/scripts.pory"
	.string "a POKéMON that knows SURF.\p"
# 417 "data/maps/Route118/scripts.pory"
	.string "POKéMON can be counted on to do so\n"
# 418 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 419 "data/maps/Route118/scripts.pory"

# 420 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 421 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 422 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} MAUVILLE CITY$"
# 423 "data/maps/Route118/scripts.pory"

# 424 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 425 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 426 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} ROUTE 119$"

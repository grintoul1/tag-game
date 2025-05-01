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
	call GabbyAndTy_EventScript_UpdateLocation
# 19 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 20 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
# 21 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
# 22 "data/maps/Route118/scripts.pory"
	end
# 23 "data/maps/Route118/scripts.pory"

# 24 "data/maps/Route118/scripts.pory"
Route118_OnLoad:
# 25 "data/maps/Route118/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 26 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
# 27 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
# 28 "data/maps/Route118/scripts.pory"
	end
# 29 "data/maps/Route118/scripts.pory"

# 30 "data/maps/Route118/scripts.pory"
Route118_OnFrame:
# 31 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 32 "data/maps/Route118/scripts.pory"
	.2byte 0
# 33 "data/maps/Route118/scripts.pory"

# 34 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman::
# 35 "data/maps/Route118/scripts.pory"
	lock
# 36 "data/maps/Route118/scripts.pory"
	faceplayer
# 37 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_EventScript_ReceivedGoodRod
# 38 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
# 39 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route118_EventScript_ReceiveGoodRod
# 40 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route118_EventScript_DeclineGoodRod
# 41 "data/maps/Route118/scripts.pory"
	end
# 42 "data/maps/Route118/scripts.pory"

# 43 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod::
# 44 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
# 45 "data/maps/Route118/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 46 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 47 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 48 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 49 "data/maps/Route118/scripts.pory"
	release
# 50 "data/maps/Route118/scripts.pory"
	end
# 51 "data/maps/Route118/scripts.pory"

# 52 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeclineGoodRod::
# 53 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 54 "data/maps/Route118/scripts.pory"
	release
# 55 "data/maps/Route118/scripts.pory"
	end
# 56 "data/maps/Route118/scripts.pory"

# 57 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceivedGoodRod::
# 58 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
# 59 "data/maps/Route118/scripts.pory"
	release
# 60 "data/maps/Route118/scripts.pory"
	end
# 61 "data/maps/Route118/scripts.pory"

# 62 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 63 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 64 "data/maps/Route118/scripts.pory"
	end
# 65 "data/maps/Route118/scripts.pory"

# 66 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 67 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 68 "data/maps/Route118/scripts.pory"
	end
# 69 "data/maps/Route118/scripts.pory"

# 70 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 71 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 72 "data/maps/Route118/scripts.pory"
	end
# 73 "data/maps/Route118/scripts.pory"

# 74 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 75 "data/maps/Route118/scripts.pory"
	lockall
# 76 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 77 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 78 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge0
# 80 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 82 "data/maps/Route118/scripts.pory"
	end
# 83 "data/maps/Route118/scripts.pory"

# 84 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 85 "data/maps/Route118/scripts.pory"
	lockall
# 86 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 87 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 88 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 90 "data/maps/Route118/scripts.pory"
	end
# 91 "data/maps/Route118/scripts.pory"

# 92 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 93 "data/maps/Route118/scripts.pory"
	lockall
# 94 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 95 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 96 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 98 "data/maps/Route118/scripts.pory"
	end
# 99 "data/maps/Route118/scripts.pory"

# 100 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger::
# 101 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 102 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
# 103 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route118/scripts.pory"
	delay 30
# 105 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 106 "data/maps/Route118/scripts.pory"
	closemessage
# 107 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route118_EventScript_StevenExit0
# 108 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route118_EventScript_StevenExit1
# 109 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route118_EventScript_StevenExit2
# 110 "data/maps/Route118/scripts.pory"
	addvar VAR_ROUTE118_STATE, 1
# 111 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 112 "data/maps/Route118/scripts.pory"
	releaseall
# 113 "data/maps/Route118/scripts.pory"
	end
# 114 "data/maps/Route118/scripts.pory"

# 115 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 116 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 117 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit0
# 118 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route118/scripts.pory"
	return
# 120 "data/maps/Route118/scripts.pory"

# 121 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 122 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 123 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit1
# 124 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route118/scripts.pory"
	return
# 126 "data/maps/Route118/scripts.pory"

# 127 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 128 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 129 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit2
# 130 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route118/scripts.pory"
	return
# 132 "data/maps/Route118/scripts.pory"

# 133 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 134 "data/maps/Route118/scripts.pory"
	delay_16
# 135 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 136 "data/maps/Route118/scripts.pory"
	step_end
# 137 "data/maps/Route118/scripts.pory"

# 138 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge0:
# 139 "data/maps/Route118/scripts.pory"
	walk_left
# 140 "data/maps/Route118/scripts.pory"
	step_end
# 141 "data/maps/Route118/scripts.pory"

# 142 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge2:
# 143 "data/maps/Route118/scripts.pory"
	walk_right
# 144 "data/maps/Route118/scripts.pory"
	step_end
# 145 "data/maps/Route118/scripts.pory"

# 146 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 147 "data/maps/Route118/scripts.pory"
	jump_2_down
# 148 "data/maps/Route118/scripts.pory"
	delay_16
# 149 "data/maps/Route118/scripts.pory"
	walk_down
# 150 "data/maps/Route118/scripts.pory"
	step_end
# 151 "data/maps/Route118/scripts.pory"

# 152 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0:
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
	walk_right
# 163 "data/maps/Route118/scripts.pory"
	step_end
# 164 "data/maps/Route118/scripts.pory"

# 165 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1:
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
	walk_right
# 175 "data/maps/Route118/scripts.pory"
	step_end
# 176 "data/maps/Route118/scripts.pory"

# 177 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit2:
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
	walk_right
# 186 "data/maps/Route118/scripts.pory"
	step_end
# 187 "data/maps/Route118/scripts.pory"

# 188 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
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
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route118/scripts.pory"
	end
# 209 "data/maps/Route118/scripts.pory"

# 210 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 211 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route118/scripts.pory"
	end
# 213 "data/maps/Route118/scripts.pory"

# 214 "data/maps/Route118/scripts.pory"
Route118_EventScript_BarnyWade::
# 215 "data/maps/Route118/scripts.pory"
lockall
# 216 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_BARNY
# 217 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 218 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 219 "data/maps/Route118/scripts.pory"
waitmovement 0
# 220 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 221 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 222 "data/maps/Route118/scripts.pory"
waitmovement 0
# 223 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_BarnyIntro MSGBOX_AUTOCLOSE
# 224 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_WADE
# 225 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 226 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 227 "data/maps/Route118/scripts.pory"
waitmovement 0
# 228 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 229 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 230 "data/maps/Route118/scripts.pory"
waitmovement 0
# 231 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_WadeIntro MSGBOX_AUTOCLOSE
# 232 "data/maps/Route118/scripts.pory"
goto Route118_EventScript_BarnyWadeDoMultiBattle
# 233 "data/maps/Route118/scripts.pory"
releaseall
# 234 "data/maps/Route118/scripts.pory"
end
# 235 "data/maps/Route118/scripts.pory"

# 236 "data/maps/Route118/scripts.pory"
Route118_EventScript_BarnyWadeDoMultiBattle::
# 237 "data/maps/Route118/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 238 "data/maps/Route118/scripts.pory"
multi_2p_vs_2 TRAINER_BARNY, Route118_Text_BarnyDefeat, TRAINER_WADE, Route118_Text_WadeDefeat, PARTNER_EMMIE
# 239 "data/maps/Route118/scripts.pory"
switch VAR_RESULT
# 240 "data/maps/Route118/scripts.pory"
case 1, Route118_EventScript_BarnyWadeVictory
# 241 "data/maps/Route118/scripts.pory"
fadescreen FADE_TO_BLACK
# 242 "data/maps/Route118/scripts.pory"
special SetCB2WhiteOut
# 243 "data/maps/Route118/scripts.pory"
waitstate
# 244 "data/maps/Route118/scripts.pory"

# 245 "data/maps/Route118/scripts.pory"
Route118_EventScript_BarnyWadeVictory::
# 246 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 247 "data/maps/Route118/scripts.pory"
waitmovement 0
# 248 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 250 "data/maps/Route118/scripts.pory"
waitmovement 0
# 251 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 252 "data/maps/Route118/scripts.pory"
addvar VAR_ROUTE118_STATE, 1
# 253 "data/maps/Route118/scripts.pory"
end
# 254 "data/maps/Route118/scripts.pory"

# 255 "data/maps/Route118/scripts.pory"
Route118_EventScript_ChesterDalton::
# 256 "data/maps/Route118/scripts.pory"
lockall
# 257 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_CHESTER
# 258 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 259 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 260 "data/maps/Route118/scripts.pory"
waitmovement 0
# 261 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 262 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 263 "data/maps/Route118/scripts.pory"
waitmovement 0
# 264 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_ChesterIntro MSGBOX_AUTOCLOSE
# 265 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_DALTON
# 266 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 267 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 268 "data/maps/Route118/scripts.pory"
waitmovement 0
# 269 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 270 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 271 "data/maps/Route118/scripts.pory"
waitmovement 0
# 272 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DaltonIntro MSGBOX_AUTOCLOSE
# 273 "data/maps/Route118/scripts.pory"
goto Route118_EventScript_ChesterDaltonDoMultiBattle
# 274 "data/maps/Route118/scripts.pory"
releaseall
# 275 "data/maps/Route118/scripts.pory"
end
# 276 "data/maps/Route118/scripts.pory"

# 277 "data/maps/Route118/scripts.pory"
Route118_EventScript_ChesterDaltonDoMultiBattle::
# 278 "data/maps/Route118/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 279 "data/maps/Route118/scripts.pory"
multi_2p_vs_2 TRAINER_CHESTER, Route118_Text_ChesterDefeat, TRAINER_DALTON_1, Route118_Text_DaltonDefeat, PARTNER_EMMIE
# 280 "data/maps/Route118/scripts.pory"
switch VAR_RESULT
# 281 "data/maps/Route118/scripts.pory"
case 1, Route118_EventScript_ChesterDaltonVictory
# 282 "data/maps/Route118/scripts.pory"
fadescreen FADE_TO_BLACK
# 283 "data/maps/Route118/scripts.pory"
special SetCB2WhiteOut
# 284 "data/maps/Route118/scripts.pory"
waitstate
# 285 "data/maps/Route118/scripts.pory"

# 286 "data/maps/Route118/scripts.pory"
Route118_EventScript_ChesterDaltonVictory::
# 287 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 288 "data/maps/Route118/scripts.pory"
waitmovement 0
# 289 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 291 "data/maps/Route118/scripts.pory"
waitmovement 0
# 292 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route118/scripts.pory"
addvar VAR_ROUTE118_STATE, 1
# 294 "data/maps/Route118/scripts.pory"
end
# 295 "data/maps/Route118/scripts.pory"

# 296 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 297 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 298 "data/maps/Route118/scripts.pory"
	release
# 299 "data/maps/Route118/scripts.pory"
	end
# 300 "data/maps/Route118/scripts.pory"

# 301 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 302 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 303 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 304 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 305 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 306 "data/maps/Route118/scripts.pory"
	release
# 307 "data/maps/Route118/scripts.pory"
	end
# 308 "data/maps/Route118/scripts.pory"

# 309 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 310 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 311 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 312 "data/maps/Route118/scripts.pory"
	end
# 313 "data/maps/Route118/scripts.pory"

# 314 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 315 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 316 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route118/scripts.pory"
	end
# 318 "data/maps/Route118/scripts.pory"

# 319 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 320 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 321 "data/maps/Route118/scripts.pory"
	end
# 322 "data/maps/Route118/scripts.pory"

# 323 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeandreRose::
# 324 "data/maps/Route118/scripts.pory"
lockall
# 325 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_DEANDRE
# 326 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 327 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 328 "data/maps/Route118/scripts.pory"
waitmovement 0
# 329 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 330 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 331 "data/maps/Route118/scripts.pory"
waitmovement 0
# 332 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DeandreIntro MSGBOX_AUTOCLOSE
# 333 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_ROSE
# 334 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 335 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 336 "data/maps/Route118/scripts.pory"
waitmovement 0
# 337 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 338 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 339 "data/maps/Route118/scripts.pory"
waitmovement 0
# 340 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_RoseIntro MSGBOX_AUTOCLOSE
# 341 "data/maps/Route118/scripts.pory"
goto Route118_EventScript_DeandreRoseDoMultiBattle
# 342 "data/maps/Route118/scripts.pory"
releaseall
# 343 "data/maps/Route118/scripts.pory"
end
# 344 "data/maps/Route118/scripts.pory"

# 345 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeandreRoseDoMultiBattle::
# 346 "data/maps/Route118/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 347 "data/maps/Route118/scripts.pory"
multi_2p_vs_2 TRAINER_DEANDRE, Route118_Text_DeandreDefeat, TRAINER_ROSE_1, Route118_Text_RoseDefeat, PARTNER_EMMIE
# 348 "data/maps/Route118/scripts.pory"
switch VAR_RESULT
# 349 "data/maps/Route118/scripts.pory"
case 1, Route118_EventScript_DeandreRoseVictory
# 350 "data/maps/Route118/scripts.pory"
fadescreen FADE_TO_BLACK
# 351 "data/maps/Route118/scripts.pory"
special SetCB2WhiteOut
# 352 "data/maps/Route118/scripts.pory"
waitstate
# 353 "data/maps/Route118/scripts.pory"

# 354 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeandreRoseVictory::
# 355 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 356 "data/maps/Route118/scripts.pory"
waitmovement 0
# 357 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 358 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 359 "data/maps/Route118/scripts.pory"
waitmovement 0
# 360 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_RosePostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route118/scripts.pory"
addvar VAR_ROUTE118_STATE, 1
# 362 "data/maps/Route118/scripts.pory"
end
# 363 "data/maps/Route118/scripts.pory"

# 364 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 365 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route118/scripts.pory"
	end
# 367 "data/maps/Route118/scripts.pory"

# 368 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 369 "data/maps/Route118/scripts.pory"
	.string "STEVEN: Hi, {PLAYER}{KUN}!\p"
# 370 "data/maps/Route118/scripts.pory"
	.string "It's me, STEVEN!\n"
# 371 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near DEWFORD.\p"
# 372 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of POKéMON\n"
# 373 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 374 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of POKéMON\n"
# 375 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 376 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 377 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 378 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 379 "data/maps/Route118/scripts.pory"
	.string "all sorts of POKéMON.\p"
# 380 "data/maps/Route118/scripts.pory"
	.string "As a TRAINER of POKéMON,\n"
# 381 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 382 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 383 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 384 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 385 "data/maps/Route118/scripts.pory"

# 386 "data/maps/Route118/scripts.pory"
Route118_Text_YouAgreeGoodRodIsGood:
# 387 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 388 "data/maps/Route118/scripts.pory"
	.string "A GOOD ROD is really good!\p"
# 389 "data/maps/Route118/scripts.pory"
	.string "Wouldn't you agree?$"
# 390 "data/maps/Route118/scripts.pory"

# 391 "data/maps/Route118/scripts.pory"
Route118_Text_IdenticalMindsTakeThis:
# 392 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 393 "data/maps/Route118/scripts.pory"
	.string "We're of identical minds!\p"
# 394 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 395 "data/maps/Route118/scripts.pory"
	.string "Take this GOOD ROD!$"
# 396 "data/maps/Route118/scripts.pory"

# 397 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 398 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 399 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 400 "data/maps/Route118/scripts.pory"

# 401 "data/maps/Route118/scripts.pory"
Route118_Text_DontYouLikeToFish:
# 402 "data/maps/Route118/scripts.pory"
	.string "Don't you like to fish?$"
# 403 "data/maps/Route118/scripts.pory"

# 404 "data/maps/Route118/scripts.pory"
Route118_Text_TryCatchingMonWithGoodRod:
# 405 "data/maps/Route118/scripts.pory"
	.string "Try catching all sorts of POKéMON\n"
# 406 "data/maps/Route118/scripts.pory"
	.string "with your GOOD ROD.$"
# 407 "data/maps/Route118/scripts.pory"

# 408 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 409 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 410 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 411 "data/maps/Route118/scripts.pory"
	.string "a POKéMON that knows SURF.\p"
# 412 "data/maps/Route118/scripts.pory"
	.string "POKéMON can be counted on to do so\n"
# 413 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 414 "data/maps/Route118/scripts.pory"

# 415 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 416 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 417 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} MAUVILLE CITY$"
# 418 "data/maps/Route118/scripts.pory"

# 419 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 420 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 421 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} ROUTE 119$"

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
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 32 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 33 "data/maps/Route118/scripts.pory"
	.2byte 0
# 34 "data/maps/Route118/scripts.pory"

# 35 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman::
# 36 "data/maps/Route118/scripts.pory"
	lock
# 37 "data/maps/Route118/scripts.pory"
	faceplayer
# 38 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_EventScript_ReceivedGoodRod
# 39 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
# 40 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route118_EventScript_ReceiveGoodRod
# 41 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route118_EventScript_DeclineGoodRod
# 42 "data/maps/Route118/scripts.pory"
	end
# 43 "data/maps/Route118/scripts.pory"

# 44 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod::
# 45 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
# 46 "data/maps/Route118/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 47 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 48 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 49 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 50 "data/maps/Route118/scripts.pory"
	release
# 51 "data/maps/Route118/scripts.pory"
	end
# 52 "data/maps/Route118/scripts.pory"

# 53 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeclineGoodRod::
# 54 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 55 "data/maps/Route118/scripts.pory"
	release
# 56 "data/maps/Route118/scripts.pory"
	end
# 57 "data/maps/Route118/scripts.pory"

# 58 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceivedGoodRod::
# 59 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
# 60 "data/maps/Route118/scripts.pory"
	release
# 61 "data/maps/Route118/scripts.pory"
	end
# 62 "data/maps/Route118/scripts.pory"

# 63 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 64 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 65 "data/maps/Route118/scripts.pory"
	end
# 66 "data/maps/Route118/scripts.pory"

# 67 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 68 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 69 "data/maps/Route118/scripts.pory"
	end
# 70 "data/maps/Route118/scripts.pory"

# 71 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 72 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 73 "data/maps/Route118/scripts.pory"
	end
# 74 "data/maps/Route118/scripts.pory"

# 75 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0::
# 76 "data/maps/Route118/scripts.pory"
	lockall
# 77 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 78 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 79 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge0
# 81 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 83 "data/maps/Route118/scripts.pory"
	end
# 84 "data/maps/Route118/scripts.pory"

# 85 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1::
# 86 "data/maps/Route118/scripts.pory"
	lockall
# 87 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 88 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 89 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 91 "data/maps/Route118/scripts.pory"
	end
# 92 "data/maps/Route118/scripts.pory"

# 93 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2::
# 94 "data/maps/Route118/scripts.pory"
	lockall
# 95 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 96 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 97 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 99 "data/maps/Route118/scripts.pory"
	end
# 100 "data/maps/Route118/scripts.pory"

# 101 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger::
# 102 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 103 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
# 104 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route118/scripts.pory"
	delay 30
# 106 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 107 "data/maps/Route118/scripts.pory"
	closemessage
# 108 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route118_EventScript_StevenExit0
# 109 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route118_EventScript_StevenExit1
# 110 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route118_EventScript_StevenExit2
# 111 "data/maps/Route118/scripts.pory"
	addvar VAR_ROUTE118_STATE, 1
# 112 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 113 "data/maps/Route118/scripts.pory"
	releaseall
# 114 "data/maps/Route118/scripts.pory"
	end
# 115 "data/maps/Route118/scripts.pory"

# 116 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0::
# 117 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 118 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit0
# 119 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route118/scripts.pory"
	return
# 121 "data/maps/Route118/scripts.pory"

# 122 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1::
# 123 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 124 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit1
# 125 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route118/scripts.pory"
	return
# 127 "data/maps/Route118/scripts.pory"

# 128 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2::
# 129 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 130 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit2
# 131 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route118/scripts.pory"
	return
# 133 "data/maps/Route118/scripts.pory"

# 134 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 135 "data/maps/Route118/scripts.pory"
	delay_16
# 136 "data/maps/Route118/scripts.pory"
	walk_in_place_faster_right
# 137 "data/maps/Route118/scripts.pory"
	step_end
# 138 "data/maps/Route118/scripts.pory"

# 139 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge0:
# 140 "data/maps/Route118/scripts.pory"
	walk_left
# 141 "data/maps/Route118/scripts.pory"
	step_end
# 142 "data/maps/Route118/scripts.pory"

# 143 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge2:
# 144 "data/maps/Route118/scripts.pory"
	walk_right
# 145 "data/maps/Route118/scripts.pory"
	step_end
# 146 "data/maps/Route118/scripts.pory"

# 147 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge:
# 148 "data/maps/Route118/scripts.pory"
	jump_2_down
# 149 "data/maps/Route118/scripts.pory"
	delay_16
# 150 "data/maps/Route118/scripts.pory"
	walk_down
# 151 "data/maps/Route118/scripts.pory"
	step_end
# 152 "data/maps/Route118/scripts.pory"

# 153 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0:
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
	walk_right
# 164 "data/maps/Route118/scripts.pory"
	step_end
# 165 "data/maps/Route118/scripts.pory"

# 166 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1:
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
	walk_right
# 176 "data/maps/Route118/scripts.pory"
	step_end
# 177 "data/maps/Route118/scripts.pory"

# 178 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit2:
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
	walk_right
# 187 "data/maps/Route118/scripts.pory"
	step_end
# 188 "data/maps/Route118/scripts.pory"

# 189 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 190 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 191 "data/maps/Route118/scripts.pory"
	release
# 192 "data/maps/Route118/scripts.pory"
	end
# 193 "data/maps/Route118/scripts.pory"

# 194 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 195 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 196 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 198 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 199 "data/maps/Route118/scripts.pory"
	release
# 200 "data/maps/Route118/scripts.pory"
	end
# 201 "data/maps/Route118/scripts.pory"

# 202 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 203 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 204 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route118/scripts.pory"
	end
# 206 "data/maps/Route118/scripts.pory"

# 207 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 208 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route118/scripts.pory"
	end
# 210 "data/maps/Route118/scripts.pory"

# 211 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 212 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route118/scripts.pory"
	end
# 214 "data/maps/Route118/scripts.pory"

# 215 "data/maps/Route118/scripts.pory"
Route118_EventScript_BarnyWade::
# 216 "data/maps/Route118/scripts.pory"
lockall
# 217 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_BARNY
# 218 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 219 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 220 "data/maps/Route118/scripts.pory"
waitmovement 0
# 221 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 222 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 223 "data/maps/Route118/scripts.pory"
waitmovement 0
# 224 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_BarnyIntro MSGBOX_AUTOCLOSE
# 225 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_WADE
# 226 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 227 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 228 "data/maps/Route118/scripts.pory"
waitmovement 0
# 229 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 230 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 231 "data/maps/Route118/scripts.pory"
waitmovement 0
# 232 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_WadeIntro MSGBOX_AUTOCLOSE
# 233 "data/maps/Route118/scripts.pory"
goto Route118_EventScript_BarnyWadeDoMultiBattle
# 234 "data/maps/Route118/scripts.pory"
releaseall
# 235 "data/maps/Route118/scripts.pory"
end
# 236 "data/maps/Route118/scripts.pory"

# 237 "data/maps/Route118/scripts.pory"
Route118_EventScript_BarnyWadeDoMultiBattle::
# 238 "data/maps/Route118/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 239 "data/maps/Route118/scripts.pory"
multi_2p_vs_2 TRAINER_BARNY, Route118_Text_BarnyDefeat, TRAINER_WADE, Route118_Text_WadeDefeat, PARTNER_EMMIE
# 240 "data/maps/Route118/scripts.pory"
switch VAR_RESULT
# 241 "data/maps/Route118/scripts.pory"
case 1, Route118_EventScript_BarnyWadeVictory
# 242 "data/maps/Route118/scripts.pory"
fadescreen FADE_TO_BLACK
# 243 "data/maps/Route118/scripts.pory"
special SetCB2WhiteOut
# 244 "data/maps/Route118/scripts.pory"
waitstate
# 245 "data/maps/Route118/scripts.pory"

# 246 "data/maps/Route118/scripts.pory"
Route118_EventScript_BarnyWadeVictory::
# 247 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 248 "data/maps/Route118/scripts.pory"
waitmovement 0
# 249 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 251 "data/maps/Route118/scripts.pory"
waitmovement 0
# 252 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 253 "data/maps/Route118/scripts.pory"
addvar VAR_ROUTE118_STATE, 1
# 254 "data/maps/Route118/scripts.pory"
end
# 255 "data/maps/Route118/scripts.pory"

# 256 "data/maps/Route118/scripts.pory"
Route118_EventScript_ChesterDalton::
# 257 "data/maps/Route118/scripts.pory"
lockall
# 258 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_CHESTER
# 259 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 260 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 261 "data/maps/Route118/scripts.pory"
waitmovement 0
# 262 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 263 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 264 "data/maps/Route118/scripts.pory"
waitmovement 0
# 265 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_ChesterIntro MSGBOX_AUTOCLOSE
# 266 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_DALTON
# 267 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 268 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 269 "data/maps/Route118/scripts.pory"
waitmovement 0
# 270 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 271 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 272 "data/maps/Route118/scripts.pory"
waitmovement 0
# 273 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DaltonIntro MSGBOX_AUTOCLOSE
# 274 "data/maps/Route118/scripts.pory"
goto Route118_EventScript_ChesterDaltonDoMultiBattle
# 275 "data/maps/Route118/scripts.pory"
releaseall
# 276 "data/maps/Route118/scripts.pory"
end
# 277 "data/maps/Route118/scripts.pory"

# 278 "data/maps/Route118/scripts.pory"
Route118_EventScript_ChesterDaltonDoMultiBattle::
# 279 "data/maps/Route118/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 280 "data/maps/Route118/scripts.pory"
multi_2p_vs_2 TRAINER_CHESTER, Route118_Text_ChesterDefeat, TRAINER_DALTON_1, Route118_Text_DaltonDefeat, PARTNER_EMMIE
# 281 "data/maps/Route118/scripts.pory"
switch VAR_RESULT
# 282 "data/maps/Route118/scripts.pory"
case 1, Route118_EventScript_ChesterDaltonVictory
# 283 "data/maps/Route118/scripts.pory"
fadescreen FADE_TO_BLACK
# 284 "data/maps/Route118/scripts.pory"
special SetCB2WhiteOut
# 285 "data/maps/Route118/scripts.pory"
waitstate
# 286 "data/maps/Route118/scripts.pory"

# 287 "data/maps/Route118/scripts.pory"
Route118_EventScript_ChesterDaltonVictory::
# 288 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 289 "data/maps/Route118/scripts.pory"
waitmovement 0
# 290 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 292 "data/maps/Route118/scripts.pory"
waitmovement 0
# 293 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route118/scripts.pory"
addvar VAR_ROUTE118_STATE, 1
# 295 "data/maps/Route118/scripts.pory"
end
# 296 "data/maps/Route118/scripts.pory"

# 297 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 298 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 299 "data/maps/Route118/scripts.pory"
	release
# 300 "data/maps/Route118/scripts.pory"
	end
# 301 "data/maps/Route118/scripts.pory"

# 302 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 303 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 304 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 305 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 306 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 307 "data/maps/Route118/scripts.pory"
	release
# 308 "data/maps/Route118/scripts.pory"
	end
# 309 "data/maps/Route118/scripts.pory"

# 310 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 311 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 312 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 313 "data/maps/Route118/scripts.pory"
	end
# 314 "data/maps/Route118/scripts.pory"

# 315 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 316 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 317 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route118/scripts.pory"
	end
# 319 "data/maps/Route118/scripts.pory"

# 320 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 321 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route118/scripts.pory"
	end
# 323 "data/maps/Route118/scripts.pory"

# 324 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeandreRose::
# 325 "data/maps/Route118/scripts.pory"
lockall
# 326 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_DEANDRE
# 327 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 328 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 329 "data/maps/Route118/scripts.pory"
waitmovement 0
# 330 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 331 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 332 "data/maps/Route118/scripts.pory"
waitmovement 0
# 333 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DeandreIntro MSGBOX_AUTOCLOSE
# 334 "data/maps/Route118/scripts.pory"
setvar VAR_0x8008, LOCALID_ROSE
# 335 "data/maps/Route118/scripts.pory"
playse SE_PIN
# 336 "data/maps/Route118/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 337 "data/maps/Route118/scripts.pory"
waitmovement 0
# 338 "data/maps/Route118/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 339 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 340 "data/maps/Route118/scripts.pory"
waitmovement 0
# 341 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_RoseIntro MSGBOX_AUTOCLOSE
# 342 "data/maps/Route118/scripts.pory"
goto Route118_EventScript_DeandreRoseDoMultiBattle
# 343 "data/maps/Route118/scripts.pory"
releaseall
# 344 "data/maps/Route118/scripts.pory"
end
# 345 "data/maps/Route118/scripts.pory"

# 346 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeandreRoseDoMultiBattle::
# 347 "data/maps/Route118/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 348 "data/maps/Route118/scripts.pory"
multi_2p_vs_2 TRAINER_DEANDRE, Route118_Text_DeandreDefeat, TRAINER_ROSE_1, Route118_Text_RoseDefeat, PARTNER_EMMIE
# 349 "data/maps/Route118/scripts.pory"
switch VAR_RESULT
# 350 "data/maps/Route118/scripts.pory"
case 1, Route118_EventScript_DeandreRoseVictory
# 351 "data/maps/Route118/scripts.pory"
fadescreen FADE_TO_BLACK
# 352 "data/maps/Route118/scripts.pory"
special SetCB2WhiteOut
# 353 "data/maps/Route118/scripts.pory"
waitstate
# 354 "data/maps/Route118/scripts.pory"

# 355 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeandreRoseVictory::
# 356 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 357 "data/maps/Route118/scripts.pory"
waitmovement 0
# 358 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 359 "data/maps/Route118/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 360 "data/maps/Route118/scripts.pory"
waitmovement 0
# 361 "data/maps/Route118/scripts.pory"
msgbox Route118_Text_RosePostBattle, MSGBOX_AUTOCLOSE
# 362 "data/maps/Route118/scripts.pory"
addvar VAR_ROUTE118_STATE, 1
# 363 "data/maps/Route118/scripts.pory"
end
# 364 "data/maps/Route118/scripts.pory"

# 365 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 366 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 367 "data/maps/Route118/scripts.pory"
	end
# 368 "data/maps/Route118/scripts.pory"

# 369 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions:
# 370 "data/maps/Route118/scripts.pory"
	.string "STEVEN: Hi, {PLAYER}{KUN}!\p"
# 371 "data/maps/Route118/scripts.pory"
	.string "It's me, STEVEN!\n"
# 372 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near DEWFORD.\p"
# 373 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of POKéMON\n"
# 374 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 375 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of POKéMON\n"
# 376 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 377 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 378 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 379 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 380 "data/maps/Route118/scripts.pory"
	.string "all sorts of POKéMON.\p"
# 381 "data/maps/Route118/scripts.pory"
	.string "As a TRAINER of POKéMON,\n"
# 382 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 383 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 384 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 385 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 386 "data/maps/Route118/scripts.pory"

# 387 "data/maps/Route118/scripts.pory"
Route118_Text_YouAgreeGoodRodIsGood:
# 388 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 389 "data/maps/Route118/scripts.pory"
	.string "A GOOD ROD is really good!\p"
# 390 "data/maps/Route118/scripts.pory"
	.string "Wouldn't you agree?$"
# 391 "data/maps/Route118/scripts.pory"

# 392 "data/maps/Route118/scripts.pory"
Route118_Text_IdenticalMindsTakeThis:
# 393 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 394 "data/maps/Route118/scripts.pory"
	.string "We're of identical minds!\p"
# 395 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 396 "data/maps/Route118/scripts.pory"
	.string "Take this GOOD ROD!$"
# 397 "data/maps/Route118/scripts.pory"

# 398 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 399 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 400 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 401 "data/maps/Route118/scripts.pory"

# 402 "data/maps/Route118/scripts.pory"
Route118_Text_DontYouLikeToFish:
# 403 "data/maps/Route118/scripts.pory"
	.string "Don't you like to fish?$"
# 404 "data/maps/Route118/scripts.pory"

# 405 "data/maps/Route118/scripts.pory"
Route118_Text_TryCatchingMonWithGoodRod:
# 406 "data/maps/Route118/scripts.pory"
	.string "Try catching all sorts of POKéMON\n"
# 407 "data/maps/Route118/scripts.pory"
	.string "with your GOOD ROD.$"
# 408 "data/maps/Route118/scripts.pory"

# 409 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 410 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 411 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 412 "data/maps/Route118/scripts.pory"
	.string "a POKéMON that knows SURF.\p"
# 413 "data/maps/Route118/scripts.pory"
	.string "POKéMON can be counted on to do so\n"
# 414 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 415 "data/maps/Route118/scripts.pory"

# 416 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 417 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 418 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} MAUVILLE CITY$"
# 419 "data/maps/Route118/scripts.pory"

# 420 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 421 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
# 422 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} ROUTE 119$"

# 1 "data/maps/Route116/scripts.pory"

# 2 "data/maps/Route116/scripts.pory"
.set LOCALID_BRINEY, 22
# 3 "data/maps/Route116/scripts.pory"
.set LOCALID_WANDAS_BF_OUTSIDE, 21
# 4 "data/maps/Route116/scripts.pory"
.set LOCALID_DEVAN, 20
# 5 "data/maps/Route116/scripts.pory"
.set LOCALID_CLARK, 9
# 6 "data/maps/Route116/scripts.pory"
.set LOCALID_SARAH, 16
# 7 "data/maps/Route116/scripts.pory"
.set LOCALID_DAWSON, 17
# 8 "data/maps/Route116/scripts.pory"
.set LOCALID_JERRY, 13
# 9 "data/maps/Route116/scripts.pory"
.set LOCALID_JANICE, 11
# 10 "data/maps/Route116/scripts.pory"
.set LOCALID_JOSE, 4
# 11 "data/maps/Route116/scripts.pory"
.set LOCALID_JOEY, 3
# 12 "data/maps/Route116/scripts.pory"
.set LOCALID_JOHNSON, 19
# 13 "data/maps/Route116/scripts.pory"
.set LOCALID_KAREN, 12
# 14 "data/maps/Route116/scripts.pory"

# 15 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 16 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 17 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 18 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 19 "data/maps/Route116/scripts.pory"
	.byte 0
# 20 "data/maps/Route116/scripts.pory"

# 21 "data/maps/Route116/scripts.pory"
Route116_OnTransition:
# 22 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 23 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 24 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 25 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 26 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 27 "data/maps/Route116/scripts.pory"
	end
# 28 "data/maps/Route116/scripts.pory"

# 29 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 30 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 38, 10
# 31 "data/maps/Route116/scripts.pory"
	return
# 32 "data/maps/Route116/scripts.pory"

# 33 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 34 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 35 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 36 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 37 "data/maps/Route116/scripts.pory"
	end
# 38 "data/maps/Route116/scripts.pory"

# 39 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 40 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 41 "data/maps/Route116/scripts.pory"
	.2byte 0
# 42 "data/maps/Route116/scripts.pory"

# 43 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 44 "data/maps/Route116/scripts.pory"
	lock
# 45 "data/maps/Route116/scripts.pory"
	faceplayer
# 46 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 47 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 48 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 49 "data/maps/Route116/scripts.pory"
	release
# 50 "data/maps/Route116/scripts.pory"
	end
# 51 "data/maps/Route116/scripts.pory"

# 52 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 53 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 54 "data/maps/Route116/scripts.pory"
	release
# 55 "data/maps/Route116/scripts.pory"
	end
# 56 "data/maps/Route116/scripts.pory"

# 57 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 58 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 59 "data/maps/Route116/scripts.pory"
	release
# 60 "data/maps/Route116/scripts.pory"
	end
# 61 "data/maps/Route116/scripts.pory"

# 62 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 63 "data/maps/Route116/scripts.pory"
	lock
# 64 "data/maps/Route116/scripts.pory"
	faceplayer
# 65 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 66 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 67 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 68 "data/maps/Route116/scripts.pory"
	end
# 69 "data/maps/Route116/scripts.pory"

# 70 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 71 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 72 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 73 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 74 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 75 "data/maps/Route116/scripts.pory"
	closemessage
# 76 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 77 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 78 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 79 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 80 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 81 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 82 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 83 "data/maps/Route116/scripts.pory"
	release
# 84 "data/maps/Route116/scripts.pory"
	end
# 85 "data/maps/Route116/scripts.pory"

# 86 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 87 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 88 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route116/scripts.pory"
	return
# 90 "data/maps/Route116/scripts.pory"

# 91 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 92 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 93 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route116/scripts.pory"
	return
# 95 "data/maps/Route116/scripts.pory"

# 96 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 97 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 98 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 99 "data/maps/Route116/scripts.pory"
	end
# 100 "data/maps/Route116/scripts.pory"

# 101 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 102 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 103 "data/maps/Route116/scripts.pory"
	release
# 104 "data/maps/Route116/scripts.pory"
	end
# 105 "data/maps/Route116/scripts.pory"

# 106 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 107 "data/maps/Route116/scripts.pory"
	walk_left
# 108 "data/maps/Route116/scripts.pory"
	walk_left
# 109 "data/maps/Route116/scripts.pory"
	walk_left
# 110 "data/maps/Route116/scripts.pory"
	walk_left
# 111 "data/maps/Route116/scripts.pory"
	walk_left
# 112 "data/maps/Route116/scripts.pory"
	walk_left
# 113 "data/maps/Route116/scripts.pory"
	walk_left
# 114 "data/maps/Route116/scripts.pory"
	walk_left
# 115 "data/maps/Route116/scripts.pory"
	step_end
# 116 "data/maps/Route116/scripts.pory"

# 117 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 118 "data/maps/Route116/scripts.pory"
	walk_down
# 119 "data/maps/Route116/scripts.pory"
	walk_left
# 120 "data/maps/Route116/scripts.pory"
	walk_left
# 121 "data/maps/Route116/scripts.pory"
	walk_left
# 122 "data/maps/Route116/scripts.pory"
	walk_left
# 123 "data/maps/Route116/scripts.pory"
	walk_left
# 124 "data/maps/Route116/scripts.pory"
	walk_left
# 125 "data/maps/Route116/scripts.pory"
	walk_left
# 126 "data/maps/Route116/scripts.pory"
	walk_left
# 127 "data/maps/Route116/scripts.pory"
	walk_left
# 128 "data/maps/Route116/scripts.pory"
	step_end
# 129 "data/maps/Route116/scripts.pory"

# 130 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 131 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 132 "data/maps/Route116/scripts.pory"
	end
# 133 "data/maps/Route116/scripts.pory"

# 134 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 135 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 136 "data/maps/Route116/scripts.pory"
	end
# 137 "data/maps/Route116/scripts.pory"

# 138 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 139 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 140 "data/maps/Route116/scripts.pory"
	end
# 141 "data/maps/Route116/scripts.pory"

# 142 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 143 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 144 "data/maps/Route116/scripts.pory"
	end
# 145 "data/maps/Route116/scripts.pory"

# 146 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 147 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 148 "data/maps/Route116/scripts.pory"
	end
# 149 "data/maps/Route116/scripts.pory"

# 150 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 151 "data/maps/Route116/scripts.pory"
	lock
# 152 "data/maps/Route116/scripts.pory"
	faceplayer
# 153 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 154 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 155 "data/maps/Route116/scripts.pory"
	release
# 156 "data/maps/Route116/scripts.pory"
	end
# 157 "data/maps/Route116/scripts.pory"

# 158 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 159 "data/maps/Route116/scripts.pory"
	lockall
# 160 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 161 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 162 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 164 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 165 "data/maps/Route116/scripts.pory"
	releaseall
# 166 "data/maps/Route116/scripts.pory"
	end
# 167 "data/maps/Route116/scripts.pory"

# 168 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 169 "data/maps/Route116/scripts.pory"
	lock
# 170 "data/maps/Route116/scripts.pory"
	faceplayer
# 171 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 172 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 173 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 174 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 175 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 176 "data/maps/Route116/scripts.pory"
	release
# 177 "data/maps/Route116/scripts.pory"
	end
# 178 "data/maps/Route116/scripts.pory"

# 179 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 180 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 181 "data/maps/Route116/scripts.pory"
	closemessage
# 182 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 183 "data/maps/Route116/scripts.pory"
	end
# 184 "data/maps/Route116/scripts.pory"

# 185 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 186 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 187 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 188 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 189 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 190 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 191 "data/maps/Route116/scripts.pory"
	release
# 192 "data/maps/Route116/scripts.pory"
	end
# 193 "data/maps/Route116/scripts.pory"

# 194 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 195 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 196 "data/maps/Route116/scripts.pory"
	closemessage
# 197 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 198 "data/maps/Route116/scripts.pory"
	end
# 199 "data/maps/Route116/scripts.pory"

# 200 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 201 "data/maps/Route116/scripts.pory"
	delay 20
# 202 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 203 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 204 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 205 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 206 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 207 "data/maps/Route116/scripts.pory"
	release
# 208 "data/maps/Route116/scripts.pory"
	end
# 209 "data/maps/Route116/scripts.pory"

# 210 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 211 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 212 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route116/scripts.pory"
	return
# 214 "data/maps/Route116/scripts.pory"

# 215 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 216 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 217 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route116/scripts.pory"
	return
# 219 "data/maps/Route116/scripts.pory"

# 220 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 221 "data/maps/Route116/scripts.pory"
	walk_left
# 222 "data/maps/Route116/scripts.pory"
	walk_left
# 223 "data/maps/Route116/scripts.pory"
	walk_left
# 224 "data/maps/Route116/scripts.pory"
	walk_left
# 225 "data/maps/Route116/scripts.pory"
	walk_left
# 226 "data/maps/Route116/scripts.pory"
	walk_left
# 227 "data/maps/Route116/scripts.pory"
	walk_left
# 228 "data/maps/Route116/scripts.pory"
	walk_left
# 229 "data/maps/Route116/scripts.pory"
	walk_left
# 230 "data/maps/Route116/scripts.pory"
	step_end
# 231 "data/maps/Route116/scripts.pory"

# 232 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 233 "data/maps/Route116/scripts.pory"
	walk_up
# 234 "data/maps/Route116/scripts.pory"
	walk_left
# 235 "data/maps/Route116/scripts.pory"
	walk_left
# 236 "data/maps/Route116/scripts.pory"
	walk_left
# 237 "data/maps/Route116/scripts.pory"
	walk_left
# 238 "data/maps/Route116/scripts.pory"
	walk_left
# 239 "data/maps/Route116/scripts.pory"
	walk_left
# 240 "data/maps/Route116/scripts.pory"
	walk_left
# 241 "data/maps/Route116/scripts.pory"
	walk_left
# 242 "data/maps/Route116/scripts.pory"
	walk_left
# 243 "data/maps/Route116/scripts.pory"
	step_end
# 244 "data/maps/Route116/scripts.pory"

# 245 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 246 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 247 "data/maps/Route116/scripts.pory"
	end
# 248 "data/maps/Route116/scripts.pory"

# 249 "data/maps/Route116/scripts.pory"
Route116_EventScript_JoseJoey::
# 250 "data/maps/Route116/scripts.pory"
lockall
# 251 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JOSE
# 252 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 253 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 254 "data/maps/Route116/scripts.pory"
waitmovement 0
# 255 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 256 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 257 "data/maps/Route116/scripts.pory"
waitmovement 0
# 258 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JoseIntro MSGBOX_AUTOCLOSE
# 259 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JOEY
# 260 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 261 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 262 "data/maps/Route116/scripts.pory"
waitmovement 0
# 263 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 264 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 265 "data/maps/Route116/scripts.pory"
waitmovement 0
# 266 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JoeyIntro MSGBOX_AUTOCLOSE
# 267 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_JoseJoeyDoMultiBattle
# 268 "data/maps/Route116/scripts.pory"
releaseall
# 269 "data/maps/Route116/scripts.pory"
end
# 270 "data/maps/Route116/scripts.pory"

# 271 "data/maps/Route116/scripts.pory"
Route116_EventScript_JoseJoeyDoMultiBattle::
# 272 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 273 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_JOSE, Route116_Text_JoseDefeat, TRAINER_JOEY, Route116_Text_JoeyDefeat, PARTNER_EMMIE
# 274 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 275 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_JoseJoeyVictory
# 276 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 277 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 278 "data/maps/Route116/scripts.pory"
waitstate
# 279 "data/maps/Route116/scripts.pory"

# 280 "data/maps/Route116/scripts.pory"
Route116_EventScript_JoseJoeyVictory::
# 281 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 282 "data/maps/Route116/scripts.pory"
waitmovement 0
# 283 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 284 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 285 "data/maps/Route116/scripts.pory"
waitmovement 0
# 286 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 288 "data/maps/Route116/scripts.pory"
end
# 289 "data/maps/Route116/scripts.pory"

# 290 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 291 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route116/scripts.pory"
	end
# 293 "data/maps/Route116/scripts.pory"

# 294 "data/maps/Route116/scripts.pory"
Route116_EventScript_JerryJanice::
# 295 "data/maps/Route116/scripts.pory"
lockall
# 296 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JERRY
# 297 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 298 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 299 "data/maps/Route116/scripts.pory"
waitmovement 0
# 300 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 301 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 302 "data/maps/Route116/scripts.pory"
waitmovement 0
# 303 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JerryIntro MSGBOX_AUTOCLOSE
# 304 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JANICE
# 305 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 306 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 307 "data/maps/Route116/scripts.pory"
waitmovement 0
# 308 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 309 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 310 "data/maps/Route116/scripts.pory"
waitmovement 0
# 311 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JaniceIntro MSGBOX_AUTOCLOSE
# 312 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_JerryJaniceDoMultiBattle
# 313 "data/maps/Route116/scripts.pory"
releaseall
# 314 "data/maps/Route116/scripts.pory"
end
# 315 "data/maps/Route116/scripts.pory"

# 316 "data/maps/Route116/scripts.pory"
Route116_EventScript_JerryJaniceDoMultiBattle::
# 317 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 318 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_JERRY_1, Route116_Text_JerryDefeat, TRAINER_JANICE, Route116_Text_JaniceDefeat, PARTNER_EMMIE
# 319 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 320 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_JerryJaniceVictory
# 321 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 322 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 323 "data/maps/Route116/scripts.pory"
waitstate
# 324 "data/maps/Route116/scripts.pory"

# 325 "data/maps/Route116/scripts.pory"
Route116_EventScript_JerryJaniceVictory::
# 326 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 327 "data/maps/Route116/scripts.pory"
waitmovement 0
# 328 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 330 "data/maps/Route116/scripts.pory"
waitmovement 0
# 331 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 332 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 333 "data/maps/Route116/scripts.pory"
end
# 334 "data/maps/Route116/scripts.pory"

# 335 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 336 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 337 "data/maps/Route116/scripts.pory"
	release
# 338 "data/maps/Route116/scripts.pory"
	end
# 339 "data/maps/Route116/scripts.pory"

# 340 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 341 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 342 "data/maps/Route116/scripts.pory"
	release
# 343 "data/maps/Route116/scripts.pory"
	end
# 344 "data/maps/Route116/scripts.pory"

# 345 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 346 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 347 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 349 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 350 "data/maps/Route116/scripts.pory"
	release
# 351 "data/maps/Route116/scripts.pory"
	end
# 352 "data/maps/Route116/scripts.pory"

# 353 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 354 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 355 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 356 "data/maps/Route116/scripts.pory"
	release
# 357 "data/maps/Route116/scripts.pory"
	end
# 358 "data/maps/Route116/scripts.pory"

# 359 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 360 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 361 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 362 "data/maps/Route116/scripts.pory"
	release
# 363 "data/maps/Route116/scripts.pory"
	end
# 364 "data/maps/Route116/scripts.pory"

# 365 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 366 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 367 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 368 "data/maps/Route116/scripts.pory"
	end
# 369 "data/maps/Route116/scripts.pory"

# 370 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 371 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 372 "data/maps/Route116/scripts.pory"
	end
# 373 "data/maps/Route116/scripts.pory"

# 374 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 375 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 376 "data/maps/Route116/scripts.pory"
	end
# 377 "data/maps/Route116/scripts.pory"

# 378 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 379 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 380 "data/maps/Route116/scripts.pory"
	release
# 381 "data/maps/Route116/scripts.pory"
	end
# 382 "data/maps/Route116/scripts.pory"

# 383 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 384 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 385 "data/maps/Route116/scripts.pory"
	release
# 386 "data/maps/Route116/scripts.pory"
	end
# 387 "data/maps/Route116/scripts.pory"

# 388 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 389 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 390 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 392 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 393 "data/maps/Route116/scripts.pory"
	release
# 394 "data/maps/Route116/scripts.pory"
	end
# 395 "data/maps/Route116/scripts.pory"

# 396 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 397 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 398 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 399 "data/maps/Route116/scripts.pory"
	release
# 400 "data/maps/Route116/scripts.pory"
	end
# 401 "data/maps/Route116/scripts.pory"

# 402 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 403 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 404 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 405 "data/maps/Route116/scripts.pory"
	release
# 406 "data/maps/Route116/scripts.pory"
	end
# 407 "data/maps/Route116/scripts.pory"

# 408 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 409 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 410 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 411 "data/maps/Route116/scripts.pory"
	end
# 412 "data/maps/Route116/scripts.pory"

# 413 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 414 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 415 "data/maps/Route116/scripts.pory"
	end
# 416 "data/maps/Route116/scripts.pory"

# 417 "data/maps/Route116/scripts.pory"
Route116_EventScript_DawsonSarah::
# 418 "data/maps/Route116/scripts.pory"
lockall
# 419 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_DAWSON
# 420 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 421 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 422 "data/maps/Route116/scripts.pory"
waitmovement 0
# 423 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 424 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 425 "data/maps/Route116/scripts.pory"
waitmovement 0
# 426 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DawsonIntro MSGBOX_AUTOCLOSE
# 427 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_SARAH
# 428 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 429 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 430 "data/maps/Route116/scripts.pory"
waitmovement 0
# 431 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 432 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 433 "data/maps/Route116/scripts.pory"
waitmovement 0
# 434 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_SarahIntro MSGBOX_AUTOCLOSE
# 435 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_DawsonSarahDoMultiBattle
# 436 "data/maps/Route116/scripts.pory"
releaseall
# 437 "data/maps/Route116/scripts.pory"
end
# 438 "data/maps/Route116/scripts.pory"

# 439 "data/maps/Route116/scripts.pory"
Route116_EventScript_DawsonSarahDoMultiBattle::
# 440 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 441 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_DAWSON, Route116_Text_DawsonDefeat, TRAINER_SARAH, Route116_Text_SarahDefeat, PARTNER_EMMIE
# 442 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 443 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_DawsonSarahVictory
# 444 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 445 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 446 "data/maps/Route116/scripts.pory"
waitstate
# 447 "data/maps/Route116/scripts.pory"

# 448 "data/maps/Route116/scripts.pory"
Route116_EventScript_DawsonSarahVictory::
# 449 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 450 "data/maps/Route116/scripts.pory"
waitmovement 0
# 451 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 452 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 453 "data/maps/Route116/scripts.pory"
waitmovement 0
# 454 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 455 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 456 "data/maps/Route116/scripts.pory"
end
# 457 "data/maps/Route116/scripts.pory"

# 458 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 459 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 460 "data/maps/Route116/scripts.pory"
	end
# 461 "data/maps/Route116/scripts.pory"

# 462 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevanClark::
# 463 "data/maps/Route116/scripts.pory"
lockall
# 464 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_DEVAN
# 465 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 466 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 467 "data/maps/Route116/scripts.pory"
waitmovement 0
# 468 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 469 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 470 "data/maps/Route116/scripts.pory"
waitmovement 0
# 471 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DevanIntro MSGBOX_AUTOCLOSE
# 472 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_CLARK
# 473 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 474 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 475 "data/maps/Route116/scripts.pory"
waitmovement 0
# 476 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 477 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 478 "data/maps/Route116/scripts.pory"
waitmovement 0
# 479 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_ClarkIntro MSGBOX_AUTOCLOSE
# 480 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_DevanClarkDoMultiBattle
# 481 "data/maps/Route116/scripts.pory"
releaseall
# 482 "data/maps/Route116/scripts.pory"
end
# 483 "data/maps/Route116/scripts.pory"

# 484 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevanClarkDoMultiBattle::
# 485 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 486 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_DEVAN, Route116_Text_DevanDefeat, TRAINER_CLARK, Route116_Text_ClarkDefeat, PARTNER_EMMIE
# 487 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 488 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_DevanClarkVictory
# 489 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 490 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 491 "data/maps/Route116/scripts.pory"
waitstate
# 492 "data/maps/Route116/scripts.pory"

# 493 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevanClarkVictory::
# 494 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 495 "data/maps/Route116/scripts.pory"
waitmovement 0
# 496 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 497 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 498 "data/maps/Route116/scripts.pory"
waitmovement 0
# 499 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 500 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 501 "data/maps/Route116/scripts.pory"
end
# 502 "data/maps/Route116/scripts.pory"

# 503 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 504 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 505 "data/maps/Route116/scripts.pory"
	end
# 506 "data/maps/Route116/scripts.pory"

# 507 "data/maps/Route116/scripts.pory"
Route116_EventScript_JohnsonKaren::
# 508 "data/maps/Route116/scripts.pory"
lockall
# 509 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JOHNSON
# 510 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 511 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 512 "data/maps/Route116/scripts.pory"
waitmovement 0
# 513 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 514 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 515 "data/maps/Route116/scripts.pory"
waitmovement 0
# 516 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JohnsonIntro MSGBOX_AUTOCLOSE
# 517 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_KAREN
# 518 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 519 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 520 "data/maps/Route116/scripts.pory"
waitmovement 0
# 521 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 522 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 523 "data/maps/Route116/scripts.pory"
waitmovement 0
# 524 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_KarenIntro MSGBOX_AUTOCLOSE
# 525 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_JohnsonKarenDoMultiBattle
# 526 "data/maps/Route116/scripts.pory"
releaseall
# 527 "data/maps/Route116/scripts.pory"
end
# 528 "data/maps/Route116/scripts.pory"

# 529 "data/maps/Route116/scripts.pory"
Route116_EventScript_JohnsonKarenDoMultiBattle::
# 530 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 531 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_JOHNSON, Route116_Text_JohnsonDefeat, TRAINER_KAREN_1, Route116_Text_KarenDefeat, PARTNER_EMMIE
# 532 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 533 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_JohnsonKarenVictory
# 534 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 535 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 536 "data/maps/Route116/scripts.pory"
waitstate
# 537 "data/maps/Route116/scripts.pory"

# 538 "data/maps/Route116/scripts.pory"
Route116_EventScript_JohnsonKarenVictory::
# 539 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 540 "data/maps/Route116/scripts.pory"
waitmovement 0
# 541 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 542 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 543 "data/maps/Route116/scripts.pory"
waitmovement 0
# 544 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_KarenPostBattle, MSGBOX_AUTOCLOSE
# 545 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 546 "data/maps/Route116/scripts.pory"
end
# 547 "data/maps/Route116/scripts.pory"

# 548 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 549 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 550 "data/maps/Route116/scripts.pory"
	end
# 551 "data/maps/Route116/scripts.pory"

# 552 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 553 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
# 554 "data/maps/Route116/scripts.pory"
	.string "We were on our walk, PEEKO and I, when\n"
# 555 "data/maps/Route116/scripts.pory"
	.string "we were jumped by an odd thug…\p"
# 556 "data/maps/Route116/scripts.pory"
	.string "The scoundrel made off with my\n"
# 557 "data/maps/Route116/scripts.pory"
	.string "darling PEEKO!\p"
# 558 "data/maps/Route116/scripts.pory"
	.string "Wrrrooooooaaaar! PEEKO!$"
# 559 "data/maps/Route116/scripts.pory"

# 560 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 561 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 562 "data/maps/Route116/scripts.pory"
	.string "I want to dig that tunnel!$"
# 563 "data/maps/Route116/scripts.pory"

# 564 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 565 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
# 566 "data/maps/Route116/scripts.pory"
	.string "What's going on?\p"
# 567 "data/maps/Route116/scripts.pory"
	.string "I was digging the tunnel without any\n"
# 568 "data/maps/Route116/scripts.pory"
	.string "tools when some goon ordered me out!\p"
# 569 "data/maps/Route116/scripts.pory"
	.string "That tunnel's filled with POKéMON\n"
# 570 "data/maps/Route116/scripts.pory"
	.string "that react badly to loud noises.\l"
# 571 "data/maps/Route116/scripts.pory"
	.string "They could cause an uproar.\p"
# 572 "data/maps/Route116/scripts.pory"
	.string "That's why we stopped using heavy\n"
# 573 "data/maps/Route116/scripts.pory"
	.string "equipment for tunneling…\p"
# 574 "data/maps/Route116/scripts.pory"
	.string "I'm worried that the goon will do\n"
# 575 "data/maps/Route116/scripts.pory"
	.string "something stupid and startle the\l"
# 576 "data/maps/Route116/scripts.pory"
	.string "POKéMON into an uproar.$"
# 577 "data/maps/Route116/scripts.pory"

# 578 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 579 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 580 "data/maps/Route116/scripts.pory"
	.string "That goofy goon hightailed it out of\n"
# 581 "data/maps/Route116/scripts.pory"
	.string "the tunnel! I can go back to digging!$"
# 582 "data/maps/Route116/scripts.pory"

# 583 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 584 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
# 585 "data/maps/Route116/scripts.pory"
	.string "You're that person who not only helped\n"
# 586 "data/maps/Route116/scripts.pory"
	.string "me in PETALBURG WOODS, but also got\l"
# 587 "data/maps/Route116/scripts.pory"
	.string "back my stolen package and then even\l"
# 588 "data/maps/Route116/scripts.pory"
	.string "graciously delivered it to SLATEPORT!\p"
# 589 "data/maps/Route116/scripts.pory"
	.string "CAPT. STERN informed us that the\n"
# 590 "data/maps/Route116/scripts.pory"
	.string "package arrived, too!\p"
# 591 "data/maps/Route116/scripts.pory"
	.string "I thank you very, very much!\p"
# 592 "data/maps/Route116/scripts.pory"
	.string "Why, if I were a rain cloud, I would\n"
# 593 "data/maps/Route116/scripts.pory"
	.string "shower you with gratitude and hail\l"
# 594 "data/maps/Route116/scripts.pory"
	.string "you as a hero!\p"
# 595 "data/maps/Route116/scripts.pory"
	.string "For you, the most wonderful TRAINER,\n"
# 596 "data/maps/Route116/scripts.pory"
	.string "I bear good news!\p"
# 597 "data/maps/Route116/scripts.pory"
	.string "Recently, our company developed\n"
# 598 "data/maps/Route116/scripts.pory"
	.string "a new kind of POKé BALL.\p"
# 599 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation, this\n"
# 600 "data/maps/Route116/scripts.pory"
	.string "is our gift to our wonderful TRAINER!$"
# 601 "data/maps/Route116/scripts.pory"

# 602 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 603 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
# 604 "data/maps/Route116/scripts.pory"
	.string "at the POKéMON MART in RUSTBORO.\p"
# 605 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\n"
# 606 "data/maps/Route116/scripts.pory"
	.string "Thank you and bye-bye!$"
# 607 "data/maps/Route116/scripts.pory"

# 608 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 609 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
# 610 "data/maps/Route116/scripts.pory"
	.string "I can't give you this REPEAT BALL.$"
# 611 "data/maps/Route116/scripts.pory"

# 612 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 613 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 614 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 615 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of POKé BALL\l"
# 616 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful TRAINER!$"
# 617 "data/maps/Route116/scripts.pory"

# 618 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 619 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
# 620 "data/maps/Route116/scripts.pory"
	.string "Can you help me find them?$"
# 621 "data/maps/Route116/scripts.pory"

# 622 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 623 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 624 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 625 "data/maps/Route116/scripts.pory"

# 626 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 627 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 628 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 629 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…\p"
# 630 "data/maps/Route116/scripts.pory"
	.string "Maybe my glasses aren't around\n"
# 631 "data/maps/Route116/scripts.pory"
	.string "here…$"
# 632 "data/maps/Route116/scripts.pory"

# 633 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 634 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 635 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 636 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 637 "data/maps/Route116/scripts.pory"

# 638 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 639 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 640 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 641 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 642 "data/maps/Route116/scripts.pory"

# 643 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 644 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
# 645 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} RUSTBORO CITY$"
# 646 "data/maps/Route116/scripts.pory"

# 647 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 648 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 649 "data/maps/Route116/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 650 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 651 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 652 "data/maps/Route116/scripts.pory"

# 653 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 654 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"
# 655 "data/maps/Route116/scripts.pory"

# 656 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 657 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 658 "data/maps/Route116/scripts.pory"
	.string "If you want to stop a POKéMON from\n"
# 659 "data/maps/Route116/scripts.pory"
	.string "evolving, press the B Button while it\l"
# 660 "data/maps/Route116/scripts.pory"
	.string "is trying to evolve.\l"
# 661 "data/maps/Route116/scripts.pory"
	.string "The startled POKéMON will stop.\p"
# 662 "data/maps/Route116/scripts.pory"
	.string "This is called an evolution cancel.$"
# 663 "data/maps/Route116/scripts.pory"

# 664 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 665 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 666 "data/maps/Route116/scripts.pory"
	.string "Your BAG has several POCKETS.\p"
# 667 "data/maps/Route116/scripts.pory"
	.string "Items you obtain are automatically\n"
# 668 "data/maps/Route116/scripts.pory"
	.string "placed in the appropriate POCKETS.\p"
# 669 "data/maps/Route116/scripts.pory"
	.string "No TRAINER can afford to be without\n"
# 670 "data/maps/Route116/scripts.pory"
	.string "a BAG of their own.$"

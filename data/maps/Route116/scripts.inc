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
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 24 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 25 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 26 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 27 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 28 "data/maps/Route116/scripts.pory"
	end
# 29 "data/maps/Route116/scripts.pory"

# 30 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 31 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 38, 10
# 32 "data/maps/Route116/scripts.pory"
	return
# 33 "data/maps/Route116/scripts.pory"

# 34 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 35 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 36 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 37 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 38 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 39 "data/maps/Route116/scripts.pory"
	end
# 40 "data/maps/Route116/scripts.pory"

# 41 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 42 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 43 "data/maps/Route116/scripts.pory"
	.2byte 0
# 44 "data/maps/Route116/scripts.pory"

# 45 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 46 "data/maps/Route116/scripts.pory"
	lock
# 47 "data/maps/Route116/scripts.pory"
	faceplayer
# 48 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 49 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 50 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 51 "data/maps/Route116/scripts.pory"
	release
# 52 "data/maps/Route116/scripts.pory"
	end
# 53 "data/maps/Route116/scripts.pory"

# 54 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 55 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 56 "data/maps/Route116/scripts.pory"
	release
# 57 "data/maps/Route116/scripts.pory"
	end
# 58 "data/maps/Route116/scripts.pory"

# 59 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 60 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 61 "data/maps/Route116/scripts.pory"
	release
# 62 "data/maps/Route116/scripts.pory"
	end
# 63 "data/maps/Route116/scripts.pory"

# 64 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 65 "data/maps/Route116/scripts.pory"
	lock
# 66 "data/maps/Route116/scripts.pory"
	faceplayer
# 67 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 68 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 69 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 70 "data/maps/Route116/scripts.pory"
	end
# 71 "data/maps/Route116/scripts.pory"

# 72 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 73 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 74 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 75 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 76 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 77 "data/maps/Route116/scripts.pory"
	closemessage
# 78 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 79 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 80 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 81 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 82 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 83 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 84 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 85 "data/maps/Route116/scripts.pory"
	release
# 86 "data/maps/Route116/scripts.pory"
	end
# 87 "data/maps/Route116/scripts.pory"

# 88 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 89 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 90 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route116/scripts.pory"
	return
# 92 "data/maps/Route116/scripts.pory"

# 93 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 94 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 95 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route116/scripts.pory"
	return
# 97 "data/maps/Route116/scripts.pory"

# 98 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 99 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 100 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 101 "data/maps/Route116/scripts.pory"
	end
# 102 "data/maps/Route116/scripts.pory"

# 103 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 104 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 105 "data/maps/Route116/scripts.pory"
	release
# 106 "data/maps/Route116/scripts.pory"
	end
# 107 "data/maps/Route116/scripts.pory"

# 108 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
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
	walk_left
# 116 "data/maps/Route116/scripts.pory"
	walk_left
# 117 "data/maps/Route116/scripts.pory"
	step_end
# 118 "data/maps/Route116/scripts.pory"

# 119 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 120 "data/maps/Route116/scripts.pory"
	walk_down
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
	walk_left
# 129 "data/maps/Route116/scripts.pory"
	walk_left
# 130 "data/maps/Route116/scripts.pory"
	step_end
# 131 "data/maps/Route116/scripts.pory"

# 132 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 133 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 134 "data/maps/Route116/scripts.pory"
	end
# 135 "data/maps/Route116/scripts.pory"

# 136 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 137 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 138 "data/maps/Route116/scripts.pory"
	end
# 139 "data/maps/Route116/scripts.pory"

# 140 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 141 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 142 "data/maps/Route116/scripts.pory"
	end
# 143 "data/maps/Route116/scripts.pory"

# 144 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 145 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 146 "data/maps/Route116/scripts.pory"
	end
# 147 "data/maps/Route116/scripts.pory"

# 148 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 149 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 150 "data/maps/Route116/scripts.pory"
	end
# 151 "data/maps/Route116/scripts.pory"

# 152 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 153 "data/maps/Route116/scripts.pory"
	lock
# 154 "data/maps/Route116/scripts.pory"
	faceplayer
# 155 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 156 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 157 "data/maps/Route116/scripts.pory"
	release
# 158 "data/maps/Route116/scripts.pory"
	end
# 159 "data/maps/Route116/scripts.pory"

# 160 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 161 "data/maps/Route116/scripts.pory"
	lockall
# 162 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 163 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 164 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 166 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 167 "data/maps/Route116/scripts.pory"
	releaseall
# 168 "data/maps/Route116/scripts.pory"
	end
# 169 "data/maps/Route116/scripts.pory"

# 170 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 171 "data/maps/Route116/scripts.pory"
	lock
# 172 "data/maps/Route116/scripts.pory"
	faceplayer
# 173 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 174 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 175 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 176 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 177 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 178 "data/maps/Route116/scripts.pory"
	release
# 179 "data/maps/Route116/scripts.pory"
	end
# 180 "data/maps/Route116/scripts.pory"

# 181 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 182 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 183 "data/maps/Route116/scripts.pory"
	closemessage
# 184 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 185 "data/maps/Route116/scripts.pory"
	end
# 186 "data/maps/Route116/scripts.pory"

# 187 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 188 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 189 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 190 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 191 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 192 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 193 "data/maps/Route116/scripts.pory"
	release
# 194 "data/maps/Route116/scripts.pory"
	end
# 195 "data/maps/Route116/scripts.pory"

# 196 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 197 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 198 "data/maps/Route116/scripts.pory"
	closemessage
# 199 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 200 "data/maps/Route116/scripts.pory"
	end
# 201 "data/maps/Route116/scripts.pory"

# 202 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 203 "data/maps/Route116/scripts.pory"
	delay 20
# 204 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 205 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 206 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 207 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 208 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 209 "data/maps/Route116/scripts.pory"
	release
# 210 "data/maps/Route116/scripts.pory"
	end
# 211 "data/maps/Route116/scripts.pory"

# 212 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 213 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 214 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route116/scripts.pory"
	return
# 216 "data/maps/Route116/scripts.pory"

# 217 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 218 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 219 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route116/scripts.pory"
	return
# 221 "data/maps/Route116/scripts.pory"

# 222 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
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
	walk_left
# 231 "data/maps/Route116/scripts.pory"
	walk_left
# 232 "data/maps/Route116/scripts.pory"
	step_end
# 233 "data/maps/Route116/scripts.pory"

# 234 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 235 "data/maps/Route116/scripts.pory"
	walk_up
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
	walk_left
# 244 "data/maps/Route116/scripts.pory"
	walk_left
# 245 "data/maps/Route116/scripts.pory"
	step_end
# 246 "data/maps/Route116/scripts.pory"

# 247 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 248 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/Route116/scripts.pory"
	end
# 250 "data/maps/Route116/scripts.pory"

# 251 "data/maps/Route116/scripts.pory"
Route116_EventScript_JoseJoey::
# 252 "data/maps/Route116/scripts.pory"
lockall
# 253 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JOSE
# 254 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 255 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 256 "data/maps/Route116/scripts.pory"
waitmovement 0
# 257 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 258 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 259 "data/maps/Route116/scripts.pory"
waitmovement 0
# 260 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JoseIntro MSGBOX_AUTOCLOSE
# 261 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JOEY
# 262 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 263 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 264 "data/maps/Route116/scripts.pory"
waitmovement 0
# 265 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 266 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 267 "data/maps/Route116/scripts.pory"
waitmovement 0
# 268 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JoeyIntro, MSGBOX_AUTOCLOSE
# 269 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_JoseJoeyDoMultiBattle
# 270 "data/maps/Route116/scripts.pory"
releaseall
# 271 "data/maps/Route116/scripts.pory"
end
# 272 "data/maps/Route116/scripts.pory"

# 273 "data/maps/Route116/scripts.pory"
Route116_EventScript_JoseJoeyDoMultiBattle::
# 274 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 275 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_JOSE, Route116_Text_JoseDefeat, TRAINER_JOEY, Route116_Text_JoeyDefeat, PARTNER_EMMIE
# 276 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 277 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_JoseJoeyVictory
# 278 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 279 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 280 "data/maps/Route116/scripts.pory"
waitstate
# 281 "data/maps/Route116/scripts.pory"

# 282 "data/maps/Route116/scripts.pory"
Route116_EventScript_JoseJoeyVictory::
# 283 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 284 "data/maps/Route116/scripts.pory"
waitmovement 0
# 285 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 287 "data/maps/Route116/scripts.pory"
waitmovement 0
# 288 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 290 "data/maps/Route116/scripts.pory"
end
# 291 "data/maps/Route116/scripts.pory"

# 292 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 293 "data/maps/Route116/scripts.pory"
	faceplayer
# 294 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route116/scripts.pory"
	end
# 296 "data/maps/Route116/scripts.pory"

# 297 "data/maps/Route116/scripts.pory"
Route116_EventScript_JerryJanice::
# 298 "data/maps/Route116/scripts.pory"
lockall
# 299 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JERRY
# 300 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 301 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 302 "data/maps/Route116/scripts.pory"
waitmovement 0
# 303 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 304 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 305 "data/maps/Route116/scripts.pory"
waitmovement 0
# 306 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JerryIntro MSGBOX_AUTOCLOSE
# 307 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JANICE
# 308 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 309 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 310 "data/maps/Route116/scripts.pory"
waitmovement 0
# 311 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 312 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 313 "data/maps/Route116/scripts.pory"
waitmovement 0
# 314 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JaniceIntro, MSGBOX_AUTOCLOSE
# 315 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_JerryJaniceDoMultiBattle
# 316 "data/maps/Route116/scripts.pory"
releaseall
# 317 "data/maps/Route116/scripts.pory"
end
# 318 "data/maps/Route116/scripts.pory"

# 319 "data/maps/Route116/scripts.pory"
Route116_EventScript_JerryJaniceDoMultiBattle::
# 320 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 321 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_JERRY_1, Route116_Text_JerryDefeat, TRAINER_JANICE, Route116_Text_JaniceDefeat, PARTNER_EMMIE
# 322 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 323 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_JerryJaniceVictory
# 324 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 325 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 326 "data/maps/Route116/scripts.pory"
waitstate
# 327 "data/maps/Route116/scripts.pory"

# 328 "data/maps/Route116/scripts.pory"
Route116_EventScript_JerryJaniceVictory::
# 329 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 330 "data/maps/Route116/scripts.pory"
waitmovement 0
# 331 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
# 332 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 333 "data/maps/Route116/scripts.pory"
waitmovement 0
# 334 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 335 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 336 "data/maps/Route116/scripts.pory"
end
# 337 "data/maps/Route116/scripts.pory"

# 338 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 339 "data/maps/Route116/scripts.pory"
	faceplayer
# 340 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 341 "data/maps/Route116/scripts.pory"
	release
# 342 "data/maps/Route116/scripts.pory"
	end
# 343 "data/maps/Route116/scripts.pory"

# 344 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 345 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 346 "data/maps/Route116/scripts.pory"
	release
# 347 "data/maps/Route116/scripts.pory"
	end
# 348 "data/maps/Route116/scripts.pory"

# 349 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 350 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 351 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 353 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 354 "data/maps/Route116/scripts.pory"
	release
# 355 "data/maps/Route116/scripts.pory"
	end
# 356 "data/maps/Route116/scripts.pory"

# 357 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 358 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 359 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 360 "data/maps/Route116/scripts.pory"
	release
# 361 "data/maps/Route116/scripts.pory"
	end
# 362 "data/maps/Route116/scripts.pory"

# 363 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 364 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 365 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 366 "data/maps/Route116/scripts.pory"
	release
# 367 "data/maps/Route116/scripts.pory"
	end
# 368 "data/maps/Route116/scripts.pory"

# 369 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 370 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 371 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 372 "data/maps/Route116/scripts.pory"
	end
# 373 "data/maps/Route116/scripts.pory"

# 374 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 375 "data/maps/Route116/scripts.pory"
	faceplayer
# 376 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 377 "data/maps/Route116/scripts.pory"
	end
# 378 "data/maps/Route116/scripts.pory"

# 379 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 380 "data/maps/Route116/scripts.pory"
	faceplayer
# 381 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 382 "data/maps/Route116/scripts.pory"
	end
# 383 "data/maps/Route116/scripts.pory"

# 384 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 385 "data/maps/Route116/scripts.pory"
	faceplayer
# 386 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 387 "data/maps/Route116/scripts.pory"
	release
# 388 "data/maps/Route116/scripts.pory"
	end
# 389 "data/maps/Route116/scripts.pory"

# 390 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 391 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 392 "data/maps/Route116/scripts.pory"
	release
# 393 "data/maps/Route116/scripts.pory"
	end
# 394 "data/maps/Route116/scripts.pory"

# 395 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 396 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 397 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 399 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 400 "data/maps/Route116/scripts.pory"
	release
# 401 "data/maps/Route116/scripts.pory"
	end
# 402 "data/maps/Route116/scripts.pory"

# 403 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 404 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 405 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 406 "data/maps/Route116/scripts.pory"
	release
# 407 "data/maps/Route116/scripts.pory"
	end
# 408 "data/maps/Route116/scripts.pory"

# 409 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 410 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 411 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 412 "data/maps/Route116/scripts.pory"
	release
# 413 "data/maps/Route116/scripts.pory"
	end
# 414 "data/maps/Route116/scripts.pory"

# 415 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 416 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 417 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 418 "data/maps/Route116/scripts.pory"
	end
# 419 "data/maps/Route116/scripts.pory"

# 420 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 421 "data/maps/Route116/scripts.pory"
	faceplayer
# 422 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 423 "data/maps/Route116/scripts.pory"
	end
# 424 "data/maps/Route116/scripts.pory"

# 425 "data/maps/Route116/scripts.pory"
Route116_EventScript_DawsonSarah::
# 426 "data/maps/Route116/scripts.pory"
lockall
# 427 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_DAWSON
# 428 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 429 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 430 "data/maps/Route116/scripts.pory"
waitmovement 0
# 431 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 432 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 433 "data/maps/Route116/scripts.pory"
waitmovement 0
# 434 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DawsonIntro MSGBOX_AUTOCLOSE
# 435 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_SARAH
# 436 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 437 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 438 "data/maps/Route116/scripts.pory"
waitmovement 0
# 439 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 440 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 441 "data/maps/Route116/scripts.pory"
waitmovement 0
# 442 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_SarahIntro, MSGBOX_AUTOCLOSE
# 443 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_DawsonSarahDoMultiBattle
# 444 "data/maps/Route116/scripts.pory"
releaseall
# 445 "data/maps/Route116/scripts.pory"
end
# 446 "data/maps/Route116/scripts.pory"

# 447 "data/maps/Route116/scripts.pory"
Route116_EventScript_DawsonSarahDoMultiBattle::
# 448 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 449 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_DAWSON, Route116_Text_DawsonDefeat, TRAINER_SARAH, Route116_Text_SarahDefeat, PARTNER_EMMIE
# 450 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 451 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_DawsonSarahVictory
# 452 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 453 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 454 "data/maps/Route116/scripts.pory"
waitstate
# 455 "data/maps/Route116/scripts.pory"

# 456 "data/maps/Route116/scripts.pory"
Route116_EventScript_DawsonSarahVictory::
# 457 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 458 "data/maps/Route116/scripts.pory"
waitmovement 0
# 459 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 460 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 461 "data/maps/Route116/scripts.pory"
waitmovement 0
# 462 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 463 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 464 "data/maps/Route116/scripts.pory"
end
# 465 "data/maps/Route116/scripts.pory"

# 466 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 467 "data/maps/Route116/scripts.pory"
	faceplayer
# 468 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 469 "data/maps/Route116/scripts.pory"
	end
# 470 "data/maps/Route116/scripts.pory"

# 471 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevanClark::
# 472 "data/maps/Route116/scripts.pory"
lockall
# 473 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_DEVAN
# 474 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 475 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 476 "data/maps/Route116/scripts.pory"
waitmovement 0
# 477 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 478 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 479 "data/maps/Route116/scripts.pory"
waitmovement 0
# 480 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DevanIntro MSGBOX_AUTOCLOSE
# 481 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_CLARK
# 482 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 483 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 484 "data/maps/Route116/scripts.pory"
waitmovement 0
# 485 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 486 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 487 "data/maps/Route116/scripts.pory"
waitmovement 0
# 488 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_ClarkIntro, MSGBOX_AUTOCLOSE
# 489 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_DevanClarkDoMultiBattle
# 490 "data/maps/Route116/scripts.pory"
releaseall
# 491 "data/maps/Route116/scripts.pory"
end
# 492 "data/maps/Route116/scripts.pory"

# 493 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevanClarkDoMultiBattle::
# 494 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 495 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_DEVAN, Route116_Text_DevanDefeat, TRAINER_CLARK, Route116_Text_ClarkDefeat, PARTNER_EMMIE
# 496 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 497 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_DevanClarkVictory
# 498 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 499 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 500 "data/maps/Route116/scripts.pory"
waitstate
# 501 "data/maps/Route116/scripts.pory"

# 502 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevanClarkVictory::
# 503 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 504 "data/maps/Route116/scripts.pory"
waitmovement 0
# 505 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 506 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 507 "data/maps/Route116/scripts.pory"
waitmovement 0
# 508 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 510 "data/maps/Route116/scripts.pory"
end
# 511 "data/maps/Route116/scripts.pory"

# 512 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 513 "data/maps/Route116/scripts.pory"
	faceplayer
# 514 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 515 "data/maps/Route116/scripts.pory"
	end
# 516 "data/maps/Route116/scripts.pory"

# 517 "data/maps/Route116/scripts.pory"
Route116_EventScript_JohnsonKaren::
# 518 "data/maps/Route116/scripts.pory"
lockall
# 519 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JOHNSON
# 520 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 521 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 522 "data/maps/Route116/scripts.pory"
waitmovement 0
# 523 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 524 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 525 "data/maps/Route116/scripts.pory"
waitmovement 0
# 526 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JohnsonIntro MSGBOX_AUTOCLOSE
# 527 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_KAREN
# 528 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 529 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 530 "data/maps/Route116/scripts.pory"
waitmovement 0
# 531 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 532 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 533 "data/maps/Route116/scripts.pory"
waitmovement 0
# 534 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_KarenIntro, MSGBOX_AUTOCLOSE
# 535 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_JohnsonKarenDoMultiBattle
# 536 "data/maps/Route116/scripts.pory"
releaseall
# 537 "data/maps/Route116/scripts.pory"
end
# 538 "data/maps/Route116/scripts.pory"

# 539 "data/maps/Route116/scripts.pory"
Route116_EventScript_JohnsonKarenDoMultiBattle::
# 540 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 541 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_JOHNSON, Route116_Text_JohnsonDefeat, TRAINER_KAREN_1, Route116_Text_KarenDefeat, PARTNER_EMMIE
# 542 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 543 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_JohnsonKarenVictory
# 544 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 545 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 546 "data/maps/Route116/scripts.pory"
waitstate
# 547 "data/maps/Route116/scripts.pory"

# 548 "data/maps/Route116/scripts.pory"
Route116_EventScript_JohnsonKarenVictory::
# 549 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 550 "data/maps/Route116/scripts.pory"
waitmovement 0
# 551 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 552 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 553 "data/maps/Route116/scripts.pory"
waitmovement 0
# 554 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_KarenPostBattle, MSGBOX_AUTOCLOSE
# 555 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 556 "data/maps/Route116/scripts.pory"
end
# 557 "data/maps/Route116/scripts.pory"

# 558 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 559 "data/maps/Route116/scripts.pory"
	faceplayer
# 560 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 561 "data/maps/Route116/scripts.pory"
	end
# 562 "data/maps/Route116/scripts.pory"

# 563 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 564 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
# 565 "data/maps/Route116/scripts.pory"
	.string "We were on our walk, PEEKO and I, when\n"
# 566 "data/maps/Route116/scripts.pory"
	.string "we were jumped by an odd thug…\p"
# 567 "data/maps/Route116/scripts.pory"
	.string "The scoundrel made off with my\n"
# 568 "data/maps/Route116/scripts.pory"
	.string "darling PEEKO!\p"
# 569 "data/maps/Route116/scripts.pory"
	.string "Wrrrooooooaaaar! PEEKO!$"
# 570 "data/maps/Route116/scripts.pory"

# 571 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 572 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 573 "data/maps/Route116/scripts.pory"
	.string "I want to dig that tunnel!$"
# 574 "data/maps/Route116/scripts.pory"

# 575 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 576 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
# 577 "data/maps/Route116/scripts.pory"
	.string "What's going on?\p"
# 578 "data/maps/Route116/scripts.pory"
	.string "I was digging the tunnel without any\n"
# 579 "data/maps/Route116/scripts.pory"
	.string "tools when some goon ordered me out!\p"
# 580 "data/maps/Route116/scripts.pory"
	.string "That tunnel's filled with POKéMON\n"
# 581 "data/maps/Route116/scripts.pory"
	.string "that react badly to loud noises.\l"
# 582 "data/maps/Route116/scripts.pory"
	.string "They could cause an uproar.\p"
# 583 "data/maps/Route116/scripts.pory"
	.string "That's why we stopped using heavy\n"
# 584 "data/maps/Route116/scripts.pory"
	.string "equipment for tunneling…\p"
# 585 "data/maps/Route116/scripts.pory"
	.string "I'm worried that the goon will do\n"
# 586 "data/maps/Route116/scripts.pory"
	.string "something stupid and startle the\l"
# 587 "data/maps/Route116/scripts.pory"
	.string "POKéMON into an uproar.$"
# 588 "data/maps/Route116/scripts.pory"

# 589 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 590 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 591 "data/maps/Route116/scripts.pory"
	.string "That goofy goon hightailed it out of\n"
# 592 "data/maps/Route116/scripts.pory"
	.string "the tunnel! I can go back to digging!$"
# 593 "data/maps/Route116/scripts.pory"

# 594 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 595 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
# 596 "data/maps/Route116/scripts.pory"
	.string "You're that person who not only helped\n"
# 597 "data/maps/Route116/scripts.pory"
	.string "me in PETALBURG WOODS, but also got\l"
# 598 "data/maps/Route116/scripts.pory"
	.string "back my stolen package and then even\l"
# 599 "data/maps/Route116/scripts.pory"
	.string "graciously delivered it to SLATEPORT!\p"
# 600 "data/maps/Route116/scripts.pory"
	.string "CAPT. STERN informed us that the\n"
# 601 "data/maps/Route116/scripts.pory"
	.string "package arrived, too!\p"
# 602 "data/maps/Route116/scripts.pory"
	.string "I thank you very, very much!\p"
# 603 "data/maps/Route116/scripts.pory"
	.string "Why, if I were a rain cloud, I would\n"
# 604 "data/maps/Route116/scripts.pory"
	.string "shower you with gratitude and hail\l"
# 605 "data/maps/Route116/scripts.pory"
	.string "you as a hero!\p"
# 606 "data/maps/Route116/scripts.pory"
	.string "For you, the most wonderful TRAINER,\n"
# 607 "data/maps/Route116/scripts.pory"
	.string "I bear good news!\p"
# 608 "data/maps/Route116/scripts.pory"
	.string "Recently, our company developed\n"
# 609 "data/maps/Route116/scripts.pory"
	.string "a new kind of POKé BALL.\p"
# 610 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation, this\n"
# 611 "data/maps/Route116/scripts.pory"
	.string "is our gift to our wonderful TRAINER!$"
# 612 "data/maps/Route116/scripts.pory"

# 613 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 614 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
# 615 "data/maps/Route116/scripts.pory"
	.string "at the POKéMON MART in RUSTBORO.\p"
# 616 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\n"
# 617 "data/maps/Route116/scripts.pory"
	.string "Thank you and bye-bye!$"
# 618 "data/maps/Route116/scripts.pory"

# 619 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 620 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
# 621 "data/maps/Route116/scripts.pory"
	.string "I can't give you this REPEAT BALL.$"
# 622 "data/maps/Route116/scripts.pory"

# 623 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 624 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 625 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 626 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of POKé BALL\l"
# 627 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful TRAINER!$"
# 628 "data/maps/Route116/scripts.pory"

# 629 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 630 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
# 631 "data/maps/Route116/scripts.pory"
	.string "Can you help me find them?$"
# 632 "data/maps/Route116/scripts.pory"

# 633 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 634 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 635 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 636 "data/maps/Route116/scripts.pory"

# 637 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 638 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 639 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 640 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…\p"
# 641 "data/maps/Route116/scripts.pory"
	.string "Maybe my glasses aren't around\n"
# 642 "data/maps/Route116/scripts.pory"
	.string "here…$"
# 643 "data/maps/Route116/scripts.pory"

# 644 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 645 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 646 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 647 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 648 "data/maps/Route116/scripts.pory"

# 649 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 650 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 651 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 652 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 653 "data/maps/Route116/scripts.pory"

# 654 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 655 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
# 656 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} RUSTBORO CITY$"
# 657 "data/maps/Route116/scripts.pory"

# 658 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 659 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 660 "data/maps/Route116/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 661 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 662 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 663 "data/maps/Route116/scripts.pory"

# 664 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 665 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"
# 666 "data/maps/Route116/scripts.pory"

# 667 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 668 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 669 "data/maps/Route116/scripts.pory"
	.string "If you want to stop a POKéMON from\n"
# 670 "data/maps/Route116/scripts.pory"
	.string "evolving, press the B Button while it\l"
# 671 "data/maps/Route116/scripts.pory"
	.string "is trying to evolve.\l"
# 672 "data/maps/Route116/scripts.pory"
	.string "The startled POKéMON will stop.\p"
# 673 "data/maps/Route116/scripts.pory"
	.string "This is called an evolution cancel.$"
# 674 "data/maps/Route116/scripts.pory"

# 675 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 676 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 677 "data/maps/Route116/scripts.pory"
	.string "Your BAG has several POCKETS.\p"
# 678 "data/maps/Route116/scripts.pory"
	.string "Items you obtain are automatically\n"
# 679 "data/maps/Route116/scripts.pory"
	.string "placed in the appropriate POCKETS.\p"
# 680 "data/maps/Route116/scripts.pory"
	.string "No TRAINER can afford to be without\n"
# 681 "data/maps/Route116/scripts.pory"
	.string "a BAG of their own.$"

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
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 37 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 38 "data/maps/Route116/scripts.pory"
	end
# 39 "data/maps/Route116/scripts.pory"

# 40 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 41 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 42 "data/maps/Route116/scripts.pory"
	.2byte 0
# 43 "data/maps/Route116/scripts.pory"

# 44 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 45 "data/maps/Route116/scripts.pory"
	lock
# 46 "data/maps/Route116/scripts.pory"
	faceplayer
# 47 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 48 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 49 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 50 "data/maps/Route116/scripts.pory"
	release
# 51 "data/maps/Route116/scripts.pory"
	end
# 52 "data/maps/Route116/scripts.pory"

# 53 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 54 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 55 "data/maps/Route116/scripts.pory"
	release
# 56 "data/maps/Route116/scripts.pory"
	end
# 57 "data/maps/Route116/scripts.pory"

# 58 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 59 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 60 "data/maps/Route116/scripts.pory"
	release
# 61 "data/maps/Route116/scripts.pory"
	end
# 62 "data/maps/Route116/scripts.pory"

# 63 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 64 "data/maps/Route116/scripts.pory"
	lock
# 65 "data/maps/Route116/scripts.pory"
	faceplayer
# 66 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 67 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 68 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 69 "data/maps/Route116/scripts.pory"
	end
# 70 "data/maps/Route116/scripts.pory"

# 71 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 72 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 73 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 74 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 75 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 76 "data/maps/Route116/scripts.pory"
	closemessage
# 77 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 78 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 79 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 80 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 81 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 82 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 83 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 84 "data/maps/Route116/scripts.pory"
	release
# 85 "data/maps/Route116/scripts.pory"
	end
# 86 "data/maps/Route116/scripts.pory"

# 87 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 88 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 89 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route116/scripts.pory"
	return
# 91 "data/maps/Route116/scripts.pory"

# 92 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 93 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 94 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route116/scripts.pory"
	return
# 96 "data/maps/Route116/scripts.pory"

# 97 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 98 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 99 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 100 "data/maps/Route116/scripts.pory"
	end
# 101 "data/maps/Route116/scripts.pory"

# 102 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 103 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 104 "data/maps/Route116/scripts.pory"
	release
# 105 "data/maps/Route116/scripts.pory"
	end
# 106 "data/maps/Route116/scripts.pory"

# 107 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
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
	walk_left
# 116 "data/maps/Route116/scripts.pory"
	step_end
# 117 "data/maps/Route116/scripts.pory"

# 118 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 119 "data/maps/Route116/scripts.pory"
	walk_down
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
	walk_left
# 129 "data/maps/Route116/scripts.pory"
	step_end
# 130 "data/maps/Route116/scripts.pory"

# 131 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 132 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 133 "data/maps/Route116/scripts.pory"
	end
# 134 "data/maps/Route116/scripts.pory"

# 135 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 136 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 137 "data/maps/Route116/scripts.pory"
	end
# 138 "data/maps/Route116/scripts.pory"

# 139 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 140 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 141 "data/maps/Route116/scripts.pory"
	end
# 142 "data/maps/Route116/scripts.pory"

# 143 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 144 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 145 "data/maps/Route116/scripts.pory"
	end
# 146 "data/maps/Route116/scripts.pory"

# 147 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 148 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 149 "data/maps/Route116/scripts.pory"
	end
# 150 "data/maps/Route116/scripts.pory"

# 151 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 152 "data/maps/Route116/scripts.pory"
	lock
# 153 "data/maps/Route116/scripts.pory"
	faceplayer
# 154 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 155 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 156 "data/maps/Route116/scripts.pory"
	release
# 157 "data/maps/Route116/scripts.pory"
	end
# 158 "data/maps/Route116/scripts.pory"

# 159 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 160 "data/maps/Route116/scripts.pory"
	lockall
# 161 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 162 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 163 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 164 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 165 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 166 "data/maps/Route116/scripts.pory"
	releaseall
# 167 "data/maps/Route116/scripts.pory"
	end
# 168 "data/maps/Route116/scripts.pory"

# 169 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 170 "data/maps/Route116/scripts.pory"
	lock
# 171 "data/maps/Route116/scripts.pory"
	faceplayer
# 172 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 173 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 174 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 175 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 176 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 177 "data/maps/Route116/scripts.pory"
	release
# 178 "data/maps/Route116/scripts.pory"
	end
# 179 "data/maps/Route116/scripts.pory"

# 180 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 181 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 182 "data/maps/Route116/scripts.pory"
	closemessage
# 183 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 184 "data/maps/Route116/scripts.pory"
	end
# 185 "data/maps/Route116/scripts.pory"

# 186 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 187 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 188 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 189 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 190 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 191 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 192 "data/maps/Route116/scripts.pory"
	release
# 193 "data/maps/Route116/scripts.pory"
	end
# 194 "data/maps/Route116/scripts.pory"

# 195 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 196 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 197 "data/maps/Route116/scripts.pory"
	closemessage
# 198 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 199 "data/maps/Route116/scripts.pory"
	end
# 200 "data/maps/Route116/scripts.pory"

# 201 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 202 "data/maps/Route116/scripts.pory"
	delay 20
# 203 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 204 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 205 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 206 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 207 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 208 "data/maps/Route116/scripts.pory"
	release
# 209 "data/maps/Route116/scripts.pory"
	end
# 210 "data/maps/Route116/scripts.pory"

# 211 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 212 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 213 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route116/scripts.pory"
	return
# 215 "data/maps/Route116/scripts.pory"

# 216 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 217 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 218 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 219 "data/maps/Route116/scripts.pory"
	return
# 220 "data/maps/Route116/scripts.pory"

# 221 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
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
	walk_left
# 231 "data/maps/Route116/scripts.pory"
	step_end
# 232 "data/maps/Route116/scripts.pory"

# 233 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 234 "data/maps/Route116/scripts.pory"
	walk_up
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
	walk_left
# 244 "data/maps/Route116/scripts.pory"
	step_end
# 245 "data/maps/Route116/scripts.pory"

# 246 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 247 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route116/scripts.pory"
	end
# 249 "data/maps/Route116/scripts.pory"

# 250 "data/maps/Route116/scripts.pory"
Route116_EventScript_JoseJoey::
# 251 "data/maps/Route116/scripts.pory"
lockall
# 252 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JOSE
# 253 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 254 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 255 "data/maps/Route116/scripts.pory"
waitmovement 0
# 256 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 257 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 258 "data/maps/Route116/scripts.pory"
waitmovement 0
# 259 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JoseIntro MSGBOX_AUTOCLOSE
# 260 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JOEY
# 261 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 262 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 263 "data/maps/Route116/scripts.pory"
waitmovement 0
# 264 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 265 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 266 "data/maps/Route116/scripts.pory"
waitmovement 0
# 267 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JoeyIntro, MSGBOX_AUTOCLOSE
# 268 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_JoseJoeyDoMultiBattle
# 269 "data/maps/Route116/scripts.pory"
releaseall
# 270 "data/maps/Route116/scripts.pory"
end
# 271 "data/maps/Route116/scripts.pory"

# 272 "data/maps/Route116/scripts.pory"
Route116_EventScript_JoseJoeyDoMultiBattle::
# 273 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 274 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_JOSE, Route116_Text_JoseDefeat, TRAINER_JOEY, Route116_Text_JoeyDefeat, PARTNER_EMMIE
# 275 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 276 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_JoseJoeyVictory
# 277 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 278 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 279 "data/maps/Route116/scripts.pory"
waitstate
# 280 "data/maps/Route116/scripts.pory"

# 281 "data/maps/Route116/scripts.pory"
Route116_EventScript_JoseJoeyVictory::
# 282 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 283 "data/maps/Route116/scripts.pory"
waitmovement 0
# 284 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 286 "data/maps/Route116/scripts.pory"
waitmovement 0
# 287 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 289 "data/maps/Route116/scripts.pory"
end
# 290 "data/maps/Route116/scripts.pory"

# 291 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 292 "data/maps/Route116/scripts.pory"
	faceplayer
# 293 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route116/scripts.pory"
	end
# 295 "data/maps/Route116/scripts.pory"

# 296 "data/maps/Route116/scripts.pory"
Route116_EventScript_JerryJanice::
# 297 "data/maps/Route116/scripts.pory"
lockall
# 298 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JERRY
# 299 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 300 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 301 "data/maps/Route116/scripts.pory"
waitmovement 0
# 302 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 303 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 304 "data/maps/Route116/scripts.pory"
waitmovement 0
# 305 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JerryIntro MSGBOX_AUTOCLOSE
# 306 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JANICE
# 307 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 308 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 309 "data/maps/Route116/scripts.pory"
waitmovement 0
# 310 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 311 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 312 "data/maps/Route116/scripts.pory"
waitmovement 0
# 313 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JaniceIntro, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_JerryJaniceDoMultiBattle
# 315 "data/maps/Route116/scripts.pory"
releaseall
# 316 "data/maps/Route116/scripts.pory"
end
# 317 "data/maps/Route116/scripts.pory"

# 318 "data/maps/Route116/scripts.pory"
Route116_EventScript_JerryJaniceDoMultiBattle::
# 319 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 320 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_JERRY_1, Route116_Text_JerryDefeat, TRAINER_JANICE, Route116_Text_JaniceDefeat, PARTNER_EMMIE
# 321 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 322 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_JerryJaniceVictory
# 323 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 324 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 325 "data/maps/Route116/scripts.pory"
waitstate
# 326 "data/maps/Route116/scripts.pory"

# 327 "data/maps/Route116/scripts.pory"
Route116_EventScript_JerryJaniceVictory::
# 328 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 329 "data/maps/Route116/scripts.pory"
waitmovement 0
# 330 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 332 "data/maps/Route116/scripts.pory"
waitmovement 0
# 333 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 334 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 335 "data/maps/Route116/scripts.pory"
end
# 336 "data/maps/Route116/scripts.pory"

# 337 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 338 "data/maps/Route116/scripts.pory"
	faceplayer
# 339 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 340 "data/maps/Route116/scripts.pory"
	release
# 341 "data/maps/Route116/scripts.pory"
	end
# 342 "data/maps/Route116/scripts.pory"

# 343 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 344 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 345 "data/maps/Route116/scripts.pory"
	release
# 346 "data/maps/Route116/scripts.pory"
	end
# 347 "data/maps/Route116/scripts.pory"

# 348 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 349 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 350 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 351 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 352 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 353 "data/maps/Route116/scripts.pory"
	release
# 354 "data/maps/Route116/scripts.pory"
	end
# 355 "data/maps/Route116/scripts.pory"

# 356 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 357 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 358 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 359 "data/maps/Route116/scripts.pory"
	release
# 360 "data/maps/Route116/scripts.pory"
	end
# 361 "data/maps/Route116/scripts.pory"

# 362 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 363 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 364 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 365 "data/maps/Route116/scripts.pory"
	release
# 366 "data/maps/Route116/scripts.pory"
	end
# 367 "data/maps/Route116/scripts.pory"

# 368 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 369 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 370 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route116/scripts.pory"
	end
# 372 "data/maps/Route116/scripts.pory"

# 373 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 374 "data/maps/Route116/scripts.pory"
	faceplayer
# 375 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 376 "data/maps/Route116/scripts.pory"
	end
# 377 "data/maps/Route116/scripts.pory"

# 378 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 379 "data/maps/Route116/scripts.pory"
	faceplayer
# 380 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route116/scripts.pory"
	end
# 382 "data/maps/Route116/scripts.pory"

# 383 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 384 "data/maps/Route116/scripts.pory"
	faceplayer
# 385 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 386 "data/maps/Route116/scripts.pory"
	release
# 387 "data/maps/Route116/scripts.pory"
	end
# 388 "data/maps/Route116/scripts.pory"

# 389 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 390 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 391 "data/maps/Route116/scripts.pory"
	release
# 392 "data/maps/Route116/scripts.pory"
	end
# 393 "data/maps/Route116/scripts.pory"

# 394 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 395 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 396 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 397 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 398 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 399 "data/maps/Route116/scripts.pory"
	release
# 400 "data/maps/Route116/scripts.pory"
	end
# 401 "data/maps/Route116/scripts.pory"

# 402 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 403 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 404 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 405 "data/maps/Route116/scripts.pory"
	release
# 406 "data/maps/Route116/scripts.pory"
	end
# 407 "data/maps/Route116/scripts.pory"

# 408 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 409 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 410 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 411 "data/maps/Route116/scripts.pory"
	release
# 412 "data/maps/Route116/scripts.pory"
	end
# 413 "data/maps/Route116/scripts.pory"

# 414 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 415 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 416 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 417 "data/maps/Route116/scripts.pory"
	end
# 418 "data/maps/Route116/scripts.pory"

# 419 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 420 "data/maps/Route116/scripts.pory"
	faceplayer
# 421 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 422 "data/maps/Route116/scripts.pory"
	end
# 423 "data/maps/Route116/scripts.pory"

# 424 "data/maps/Route116/scripts.pory"
Route116_EventScript_DawsonSarah::
# 425 "data/maps/Route116/scripts.pory"
lockall
# 426 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_DAWSON
# 427 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 428 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 429 "data/maps/Route116/scripts.pory"
waitmovement 0
# 430 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 431 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 432 "data/maps/Route116/scripts.pory"
waitmovement 0
# 433 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DawsonIntro MSGBOX_AUTOCLOSE
# 434 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_SARAH
# 435 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 436 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 437 "data/maps/Route116/scripts.pory"
waitmovement 0
# 438 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 439 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 440 "data/maps/Route116/scripts.pory"
waitmovement 0
# 441 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_SarahIntro, MSGBOX_AUTOCLOSE
# 442 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_DawsonSarahDoMultiBattle
# 443 "data/maps/Route116/scripts.pory"
releaseall
# 444 "data/maps/Route116/scripts.pory"
end
# 445 "data/maps/Route116/scripts.pory"

# 446 "data/maps/Route116/scripts.pory"
Route116_EventScript_DawsonSarahDoMultiBattle::
# 447 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 448 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_DAWSON, Route116_Text_DawsonDefeat, TRAINER_SARAH, Route116_Text_SarahDefeat, PARTNER_EMMIE
# 449 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 450 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_DawsonSarahVictory
# 451 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 452 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 453 "data/maps/Route116/scripts.pory"
waitstate
# 454 "data/maps/Route116/scripts.pory"

# 455 "data/maps/Route116/scripts.pory"
Route116_EventScript_DawsonSarahVictory::
# 456 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 457 "data/maps/Route116/scripts.pory"
waitmovement 0
# 458 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 459 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 460 "data/maps/Route116/scripts.pory"
waitmovement 0
# 461 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 462 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 463 "data/maps/Route116/scripts.pory"
end
# 464 "data/maps/Route116/scripts.pory"

# 465 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 466 "data/maps/Route116/scripts.pory"
	faceplayer
# 467 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 468 "data/maps/Route116/scripts.pory"
	end
# 469 "data/maps/Route116/scripts.pory"

# 470 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevanClark::
# 471 "data/maps/Route116/scripts.pory"
lockall
# 472 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_DEVAN
# 473 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 474 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 475 "data/maps/Route116/scripts.pory"
waitmovement 0
# 476 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 477 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 478 "data/maps/Route116/scripts.pory"
waitmovement 0
# 479 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DevanIntro MSGBOX_AUTOCLOSE
# 480 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_CLARK
# 481 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 482 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 483 "data/maps/Route116/scripts.pory"
waitmovement 0
# 484 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 485 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 486 "data/maps/Route116/scripts.pory"
waitmovement 0
# 487 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_ClarkIntro, MSGBOX_AUTOCLOSE
# 488 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_DevanClarkDoMultiBattle
# 489 "data/maps/Route116/scripts.pory"
releaseall
# 490 "data/maps/Route116/scripts.pory"
end
# 491 "data/maps/Route116/scripts.pory"

# 492 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevanClarkDoMultiBattle::
# 493 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 494 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_DEVAN, Route116_Text_DevanDefeat, TRAINER_CLARK, Route116_Text_ClarkDefeat, PARTNER_EMMIE
# 495 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 496 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_DevanClarkVictory
# 497 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 498 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 499 "data/maps/Route116/scripts.pory"
waitstate
# 500 "data/maps/Route116/scripts.pory"

# 501 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevanClarkVictory::
# 502 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 503 "data/maps/Route116/scripts.pory"
waitmovement 0
# 504 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 505 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 506 "data/maps/Route116/scripts.pory"
waitmovement 0
# 507 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 509 "data/maps/Route116/scripts.pory"
end
# 510 "data/maps/Route116/scripts.pory"

# 511 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 512 "data/maps/Route116/scripts.pory"
	faceplayer
# 513 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 514 "data/maps/Route116/scripts.pory"
	end
# 515 "data/maps/Route116/scripts.pory"

# 516 "data/maps/Route116/scripts.pory"
Route116_EventScript_JohnsonKaren::
# 517 "data/maps/Route116/scripts.pory"
lockall
# 518 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_JOHNSON
# 519 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 520 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 521 "data/maps/Route116/scripts.pory"
waitmovement 0
# 522 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 523 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 524 "data/maps/Route116/scripts.pory"
waitmovement 0
# 525 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JohnsonIntro MSGBOX_AUTOCLOSE
# 526 "data/maps/Route116/scripts.pory"
setvar VAR_0x8008, LOCALID_KAREN
# 527 "data/maps/Route116/scripts.pory"
playse SE_PIN
# 528 "data/maps/Route116/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 529 "data/maps/Route116/scripts.pory"
waitmovement 0
# 530 "data/maps/Route116/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 531 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 532 "data/maps/Route116/scripts.pory"
waitmovement 0
# 533 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_KarenIntro, MSGBOX_AUTOCLOSE
# 534 "data/maps/Route116/scripts.pory"
goto Route116_EventScript_JohnsonKarenDoMultiBattle
# 535 "data/maps/Route116/scripts.pory"
releaseall
# 536 "data/maps/Route116/scripts.pory"
end
# 537 "data/maps/Route116/scripts.pory"

# 538 "data/maps/Route116/scripts.pory"
Route116_EventScript_JohnsonKarenDoMultiBattle::
# 539 "data/maps/Route116/scripts.pory"
playbgm MUS_ROUTE110, TRUE
# 540 "data/maps/Route116/scripts.pory"
multi_2p_vs_2 TRAINER_JOHNSON, Route116_Text_JohnsonDefeat, TRAINER_KAREN_1, Route116_Text_KarenDefeat, PARTNER_EMMIE
# 541 "data/maps/Route116/scripts.pory"
switch VAR_RESULT
# 542 "data/maps/Route116/scripts.pory"
case 1, Route116_EventScript_JohnsonKarenVictory
# 543 "data/maps/Route116/scripts.pory"
fadescreen FADE_TO_BLACK
# 544 "data/maps/Route116/scripts.pory"
special SetCB2WhiteOut
# 545 "data/maps/Route116/scripts.pory"
waitstate
# 546 "data/maps/Route116/scripts.pory"

# 547 "data/maps/Route116/scripts.pory"
Route116_EventScript_JohnsonKarenVictory::
# 548 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 549 "data/maps/Route116/scripts.pory"
waitmovement 0
# 550 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 551 "data/maps/Route116/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 552 "data/maps/Route116/scripts.pory"
waitmovement 0
# 553 "data/maps/Route116/scripts.pory"
msgbox Route116_Text_KarenPostBattle, MSGBOX_AUTOCLOSE
# 554 "data/maps/Route116/scripts.pory"
addvar VAR_ROUTE116_STATE, 1
# 555 "data/maps/Route116/scripts.pory"
end
# 556 "data/maps/Route116/scripts.pory"

# 557 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 558 "data/maps/Route116/scripts.pory"
	faceplayer
# 559 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 560 "data/maps/Route116/scripts.pory"
	end
# 561 "data/maps/Route116/scripts.pory"

# 562 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 563 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
# 564 "data/maps/Route116/scripts.pory"
	.string "We were on our walk, PEEKO and I, when\n"
# 565 "data/maps/Route116/scripts.pory"
	.string "we were jumped by an odd thug…\p"
# 566 "data/maps/Route116/scripts.pory"
	.string "The scoundrel made off with my\n"
# 567 "data/maps/Route116/scripts.pory"
	.string "darling PEEKO!\p"
# 568 "data/maps/Route116/scripts.pory"
	.string "Wrrrooooooaaaar! PEEKO!$"
# 569 "data/maps/Route116/scripts.pory"

# 570 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 571 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 572 "data/maps/Route116/scripts.pory"
	.string "I want to dig that tunnel!$"
# 573 "data/maps/Route116/scripts.pory"

# 574 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 575 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
# 576 "data/maps/Route116/scripts.pory"
	.string "What's going on?\p"
# 577 "data/maps/Route116/scripts.pory"
	.string "I was digging the tunnel without any\n"
# 578 "data/maps/Route116/scripts.pory"
	.string "tools when some goon ordered me out!\p"
# 579 "data/maps/Route116/scripts.pory"
	.string "That tunnel's filled with POKéMON\n"
# 580 "data/maps/Route116/scripts.pory"
	.string "that react badly to loud noises.\l"
# 581 "data/maps/Route116/scripts.pory"
	.string "They could cause an uproar.\p"
# 582 "data/maps/Route116/scripts.pory"
	.string "That's why we stopped using heavy\n"
# 583 "data/maps/Route116/scripts.pory"
	.string "equipment for tunneling…\p"
# 584 "data/maps/Route116/scripts.pory"
	.string "I'm worried that the goon will do\n"
# 585 "data/maps/Route116/scripts.pory"
	.string "something stupid and startle the\l"
# 586 "data/maps/Route116/scripts.pory"
	.string "POKéMON into an uproar.$"
# 587 "data/maps/Route116/scripts.pory"

# 588 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 589 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 590 "data/maps/Route116/scripts.pory"
	.string "That goofy goon hightailed it out of\n"
# 591 "data/maps/Route116/scripts.pory"
	.string "the tunnel! I can go back to digging!$"
# 592 "data/maps/Route116/scripts.pory"

# 593 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 594 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
# 595 "data/maps/Route116/scripts.pory"
	.string "You're that person who not only helped\n"
# 596 "data/maps/Route116/scripts.pory"
	.string "me in PETALBURG WOODS, but also got\l"
# 597 "data/maps/Route116/scripts.pory"
	.string "back my stolen package and then even\l"
# 598 "data/maps/Route116/scripts.pory"
	.string "graciously delivered it to SLATEPORT!\p"
# 599 "data/maps/Route116/scripts.pory"
	.string "CAPT. STERN informed us that the\n"
# 600 "data/maps/Route116/scripts.pory"
	.string "package arrived, too!\p"
# 601 "data/maps/Route116/scripts.pory"
	.string "I thank you very, very much!\p"
# 602 "data/maps/Route116/scripts.pory"
	.string "Why, if I were a rain cloud, I would\n"
# 603 "data/maps/Route116/scripts.pory"
	.string "shower you with gratitude and hail\l"
# 604 "data/maps/Route116/scripts.pory"
	.string "you as a hero!\p"
# 605 "data/maps/Route116/scripts.pory"
	.string "For you, the most wonderful TRAINER,\n"
# 606 "data/maps/Route116/scripts.pory"
	.string "I bear good news!\p"
# 607 "data/maps/Route116/scripts.pory"
	.string "Recently, our company developed\n"
# 608 "data/maps/Route116/scripts.pory"
	.string "a new kind of POKé BALL.\p"
# 609 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation, this\n"
# 610 "data/maps/Route116/scripts.pory"
	.string "is our gift to our wonderful TRAINER!$"
# 611 "data/maps/Route116/scripts.pory"

# 612 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 613 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
# 614 "data/maps/Route116/scripts.pory"
	.string "at the POKéMON MART in RUSTBORO.\p"
# 615 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\n"
# 616 "data/maps/Route116/scripts.pory"
	.string "Thank you and bye-bye!$"
# 617 "data/maps/Route116/scripts.pory"

# 618 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 619 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
# 620 "data/maps/Route116/scripts.pory"
	.string "I can't give you this REPEAT BALL.$"
# 621 "data/maps/Route116/scripts.pory"

# 622 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 623 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 624 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 625 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of POKé BALL\l"
# 626 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful TRAINER!$"
# 627 "data/maps/Route116/scripts.pory"

# 628 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 629 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
# 630 "data/maps/Route116/scripts.pory"
	.string "Can you help me find them?$"
# 631 "data/maps/Route116/scripts.pory"

# 632 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 633 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 634 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 635 "data/maps/Route116/scripts.pory"

# 636 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 637 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 638 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 639 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…\p"
# 640 "data/maps/Route116/scripts.pory"
	.string "Maybe my glasses aren't around\n"
# 641 "data/maps/Route116/scripts.pory"
	.string "here…$"
# 642 "data/maps/Route116/scripts.pory"

# 643 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 644 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 645 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 646 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 647 "data/maps/Route116/scripts.pory"

# 648 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 649 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 650 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 651 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 652 "data/maps/Route116/scripts.pory"

# 653 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 654 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
# 655 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} RUSTBORO CITY$"
# 656 "data/maps/Route116/scripts.pory"

# 657 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 658 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 659 "data/maps/Route116/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 660 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 661 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 662 "data/maps/Route116/scripts.pory"

# 663 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 664 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"
# 665 "data/maps/Route116/scripts.pory"

# 666 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 667 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 668 "data/maps/Route116/scripts.pory"
	.string "If you want to stop a POKéMON from\n"
# 669 "data/maps/Route116/scripts.pory"
	.string "evolving, press the B Button while it\l"
# 670 "data/maps/Route116/scripts.pory"
	.string "is trying to evolve.\l"
# 671 "data/maps/Route116/scripts.pory"
	.string "The startled POKéMON will stop.\p"
# 672 "data/maps/Route116/scripts.pory"
	.string "This is called an evolution cancel.$"
# 673 "data/maps/Route116/scripts.pory"

# 674 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 675 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 676 "data/maps/Route116/scripts.pory"
	.string "Your BAG has several POCKETS.\p"
# 677 "data/maps/Route116/scripts.pory"
	.string "Items you obtain are automatically\n"
# 678 "data/maps/Route116/scripts.pory"
	.string "placed in the appropriate POCKETS.\p"
# 679 "data/maps/Route116/scripts.pory"
	.string "No TRAINER can afford to be without\n"
# 680 "data/maps/Route116/scripts.pory"
	.string "a BAG of their own.$"

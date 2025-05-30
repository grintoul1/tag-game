# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 30
# 3 "data/maps/Route120/scripts.pory"
.set LOCALID_CHIP, 24
# 4 "data/maps/Route120/scripts.pory"
.set LOCALID_JEFFREY, 15
# 5 "data/maps/Route120/scripts.pory"
.set LOCALID_KEIGO, 33
# 6 "data/maps/Route120/scripts.pory"
.set LOCALID_RILEY, 34
# 7 "data/maps/Route120/scripts.pory"
.set LOCALID_LORENZO, 13
# 8 "data/maps/Route120/scripts.pory"
.set LOCALID_JENNA, 14
# 9 "data/maps/Route120/scripts.pory"
.set LOCALID_CALLIE, 41
# 10 "data/maps/Route120/scripts.pory"
.set LOCALID_JENNIFER, 23
# 11 "data/maps/Route120/scripts.pory"
.set LOCALID_ROBERT, 12
# 12 "data/maps/Route120/scripts.pory"
.set LOCALID_CLARISSA, 25
# 13 "data/maps/Route120/scripts.pory"
.set LOCALID_ANGELICA, 26
# 14 "data/maps/Route120/scripts.pory"
.set LOCALID_COLIN, 42
# 15 "data/maps/Route120/scripts.pory"

# 16 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 17 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 18 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 19 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 20 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route120_OnFrame
# 21 "data/maps/Route120/scripts.pory"
	.byte 0
# 22 "data/maps/Route120/scripts.pory"

# 23 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 24 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 25 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 26 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 27 "data/maps/Route120/scripts.pory"
	end
# 28 "data/maps/Route120/scripts.pory"

# 29 "data/maps/Route120/scripts.pory"
Route120_OnFrame:
# 30 "data/maps/Route120/scripts.pory"
	end
# 31 "data/maps/Route120/scripts.pory"

# 32 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 33 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 34 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 35 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 36 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 37 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 38 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 39 "data/maps/Route120/scripts.pory"
	return
# 40 "data/maps/Route120/scripts.pory"

# 41 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 42 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 43 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 44 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 45 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 46 "data/maps/Route120/scripts.pory"
	return
# 47 "data/maps/Route120/scripts.pory"

# 48 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 49 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 51 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 52 "data/maps/Route120/scripts.pory"
	return
# 53 "data/maps/Route120/scripts.pory"

# 54 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 55 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 56 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 57 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 58 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 59 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 60 "data/maps/Route120/scripts.pory"
	end
# 61 "data/maps/Route120/scripts.pory"

# 62 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 63 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 64 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 65 "data/maps/Route120/scripts.pory"
	return
# 66 "data/maps/Route120/scripts.pory"

# 67 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 68 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 69 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 70 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 71 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 72 "data/maps/Route120/scripts.pory"
	return
# 73 "data/maps/Route120/scripts.pory"

# 74 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 75 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 76 "data/maps/Route120/scripts.pory"
	return
# 77 "data/maps/Route120/scripts.pory"

# 78 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 79 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 80 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 81 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 82 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 83 "data/maps/Route120/scripts.pory"
	end
# 84 "data/maps/Route120/scripts.pory"

# 85 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 86 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 87 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 88 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 89 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 90 "data/maps/Route120/scripts.pory"
	return
# 91 "data/maps/Route120/scripts.pory"

# 92 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 93 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 94 "data/maps/Route120/scripts.pory"
	return
# 95 "data/maps/Route120/scripts.pory"

# 96 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 97 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 98 "data/maps/Route120/scripts.pory"
	return
# 99 "data/maps/Route120/scripts.pory"

# 100 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 101 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 102 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 103 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 104 "data/maps/Route120/scripts.pory"
	end
# 105 "data/maps/Route120/scripts.pory"

# 106 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 107 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 108 "data/maps/Route120/scripts.pory"
	return
# 109 "data/maps/Route120/scripts.pory"

# 110 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 111 "data/maps/Route120/scripts.pory"
	lock
# 112 "data/maps/Route120/scripts.pory"
	faceplayer
# 113 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 114 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 115 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 116 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 117 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 118 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 119 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 121 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 122 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 123 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 124 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 125 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 126 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 127 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 128 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 129 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 130 "data/maps/Route120/scripts.pory"
	end
# 131 "data/maps/Route120/scripts.pory"

# 132 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 133 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 134 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 135 "data/maps/Route120/scripts.pory"
	end
# 136 "data/maps/Route120/scripts.pory"

# 137 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 138 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 139 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 140 "data/maps/Route120/scripts.pory"
	end
# 141 "data/maps/Route120/scripts.pory"

# 142 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 143 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 144 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 145 "data/maps/Route120/scripts.pory"
	end
# 146 "data/maps/Route120/scripts.pory"

# 147 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 148 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 149 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 150 "data/maps/Route120/scripts.pory"
	end
# 151 "data/maps/Route120/scripts.pory"

# 152 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 153 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 154 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 155 "data/maps/Route120/scripts.pory"
	end
# 156 "data/maps/Route120/scripts.pory"

# 157 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 158 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 159 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 160 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 161 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 162 "data/maps/Route120/scripts.pory"
	release
# 163 "data/maps/Route120/scripts.pory"
	end
# 164 "data/maps/Route120/scripts.pory"

# 165 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 166 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 167 "data/maps/Route120/scripts.pory"
	release
# 168 "data/maps/Route120/scripts.pory"
	end
# 169 "data/maps/Route120/scripts.pory"

# 170 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 171 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 172 "data/maps/Route120/scripts.pory"
	return
# 173 "data/maps/Route120/scripts.pory"

# 174 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 175 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 176 "data/maps/Route120/scripts.pory"
	return
# 177 "data/maps/Route120/scripts.pory"

# 178 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 179 "data/maps/Route120/scripts.pory"
	lock
# 180 "data/maps/Route120/scripts.pory"
	faceplayer
# 181 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 182 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 183 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 184 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 185 "data/maps/Route120/scripts.pory"
	end
# 186 "data/maps/Route120/scripts.pory"

# 187 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 188 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 189 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 190 "data/maps/Route120/scripts.pory"
	release
# 191 "data/maps/Route120/scripts.pory"
	end
# 192 "data/maps/Route120/scripts.pory"

# 193 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 194 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 195 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 196 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 197 "data/maps/Route120/scripts.pory"
	end
# 198 "data/maps/Route120/scripts.pory"

# 199 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 200 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 201 "data/maps/Route120/scripts.pory"
	closemessage
# 202 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route120_EventScript_PlayerApproachKecleonEast
# 203 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 204 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route120/scripts.pory"
	delay 20
# 206 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 207 "data/maps/Route120/scripts.pory"
	closemessage
# 208 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterUp
# 209 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 211 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route120/scripts.pory"
	waitse
# 213 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 214 "data/maps/Route120/scripts.pory"
	delay 40
# 215 "data/maps/Route120/scripts.pory"
	waitmoncry
# 216 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 217 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 218 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 219 "data/maps/Route120/scripts.pory"
	dowildbattle
# 220 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 221 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 222 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 223 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 224 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 225 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 226 "data/maps/Route120/scripts.pory"
	end
# 227 "data/maps/Route120/scripts.pory"

# 228 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 229 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 230 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 231 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 232 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 233 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 234 "data/maps/Route120/scripts.pory"
	end
# 235 "data/maps/Route120/scripts.pory"

# 236 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 237 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 238 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 239 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 241 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 242 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 243 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 244 "data/maps/Route120/scripts.pory"
	closemessage
# 245 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 246 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route120/scripts.pory"
	delay 50
# 248 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 249 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 250 "data/maps/Route120/scripts.pory"
	delay 15
# 251 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 252 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 253 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 254 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 255 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 256 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 257 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 258 "data/maps/Route120/scripts.pory"
	release
# 259 "data/maps/Route120/scripts.pory"
	end
# 260 "data/maps/Route120/scripts.pory"

# 261 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 262 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 263 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route120/scripts.pory"
	return
# 265 "data/maps/Route120/scripts.pory"

# 266 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonEast::
# 267 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonEast
# 268 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route120/scripts.pory"
	return
# 270 "data/maps/Route120/scripts.pory"

# 271 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonEast:
# 272 "data/maps/Route120/scripts.pory"
	face_down
# 273 "data/maps/Route120/scripts.pory"
	step_end
# 274 "data/maps/Route120/scripts.pory"

# 275 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 276 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 277 "data/maps/Route120/scripts.pory"
	end
# 278 "data/maps/Route120/scripts.pory"

# 279 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 280 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 281 "data/maps/Route120/scripts.pory"
	end
# 282 "data/maps/Route120/scripts.pory"

# 283 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 284 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 285 "data/maps/Route120/scripts.pory"
	end
# 286 "data/maps/Route120/scripts.pory"

# 287 "data/maps/Route120/scripts.pory"
Route120_EventScript_ColinAngelica::
# 288 "data/maps/Route120/scripts.pory"
lockall
# 289 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_COLIN
# 290 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 291 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 292 "data/maps/Route120/scripts.pory"
waitmovement 0
# 293 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 294 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 295 "data/maps/Route120/scripts.pory"
waitmovement 0
# 296 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ColinIntro MSGBOX_AUTOCLOSE
# 297 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_ANGELICA
# 298 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 299 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 300 "data/maps/Route120/scripts.pory"
waitmovement 0
# 301 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 302 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 303 "data/maps/Route120/scripts.pory"
waitmovement 0
# 304 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_AngelicaIntro, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ColinAngelicaDoMultiBattle
# 306 "data/maps/Route120/scripts.pory"
releaseall
# 307 "data/maps/Route120/scripts.pory"
end
# 308 "data/maps/Route120/scripts.pory"

# 309 "data/maps/Route120/scripts.pory"
Route120_EventScript_ColinAngelicaDoMultiBattle::
# 310 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 311 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_COLIN, Route120_Text_ColinDefeat, TRAINER_ANGELICA, Route120_Text_AngelicaDefeat, PARTNER_EMMIE
# 312 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 313 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ColinAngelicaVictory
# 314 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 315 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 316 "data/maps/Route120/scripts.pory"
waitstate
# 317 "data/maps/Route120/scripts.pory"

# 318 "data/maps/Route120/scripts.pory"
Route120_EventScript_ColinAngelicaVictory::
# 319 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 320 "data/maps/Route120/scripts.pory"
waitmovement 0
# 321 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 323 "data/maps/Route120/scripts.pory"
waitmovement 0
# 324 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 325 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 326 "data/maps/Route120/scripts.pory"
end
# 327 "data/maps/Route120/scripts.pory"

# 328 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 329 "data/maps/Route120/scripts.pory"
	faceplayer
# 330 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/Route120/scripts.pory"
	end
# 332 "data/maps/Route120/scripts.pory"

# 333 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobert::
# 334 "data/maps/Route120/scripts.pory"
lockall
# 335 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CLARISSA
# 336 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 337 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 338 "data/maps/Route120/scripts.pory"
waitmovement 0
# 339 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 340 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 341 "data/maps/Route120/scripts.pory"
waitmovement 0
# 342 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ClarissaIntro MSGBOX_AUTOCLOSE
# 343 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_ROBERT
# 344 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 345 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 346 "data/maps/Route120/scripts.pory"
waitmovement 0
# 347 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 348 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 349 "data/maps/Route120/scripts.pory"
waitmovement 0
# 350 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RobertIntro, MSGBOX_AUTOCLOSE
# 351 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ClarissaRobertDoMultiBattle
# 352 "data/maps/Route120/scripts.pory"
releaseall
# 353 "data/maps/Route120/scripts.pory"
end
# 354 "data/maps/Route120/scripts.pory"

# 355 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobertDoMultiBattle::
# 356 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 357 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_CLARISSA, Route120_Text_ClarissaDefeat, TRAINER_ROBERT_1, Route120_Text_RobertDefeat, PARTNER_EMMIE
# 358 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 359 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ClarissaRobertVictory
# 360 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 361 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 362 "data/maps/Route120/scripts.pory"
waitstate
# 363 "data/maps/Route120/scripts.pory"

# 364 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobertVictory::
# 365 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 366 "data/maps/Route120/scripts.pory"
waitmovement 0
# 367 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 368 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 369 "data/maps/Route120/scripts.pory"
waitmovement 0
# 370 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 372 "data/maps/Route120/scripts.pory"
end
# 373 "data/maps/Route120/scripts.pory"

# 374 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 375 "data/maps/Route120/scripts.pory"
	faceplayer
# 376 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 377 "data/maps/Route120/scripts.pory"
	release
# 378 "data/maps/Route120/scripts.pory"
	end
# 379 "data/maps/Route120/scripts.pory"

# 380 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 381 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 382 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 384 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 385 "data/maps/Route120/scripts.pory"
	release
# 386 "data/maps/Route120/scripts.pory"
	end
# 387 "data/maps/Route120/scripts.pory"

# 388 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 389 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 390 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 391 "data/maps/Route120/scripts.pory"
	end
# 392 "data/maps/Route120/scripts.pory"

# 393 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzo::
# 394 "data/maps/Route120/scripts.pory"
lockall
# 395 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JENNA
# 396 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 397 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 398 "data/maps/Route120/scripts.pory"
waitmovement 0
# 399 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 400 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 401 "data/maps/Route120/scripts.pory"
waitmovement 0
# 402 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JennaIntro MSGBOX_AUTOCLOSE
# 403 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_LORENZO
# 404 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 405 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 406 "data/maps/Route120/scripts.pory"
waitmovement 0
# 407 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 408 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 409 "data/maps/Route120/scripts.pory"
waitmovement 0
# 410 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_LorenzoIntro, MSGBOX_AUTOCLOSE
# 411 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_JennaLorenzoDoMultiBattle
# 412 "data/maps/Route120/scripts.pory"
releaseall
# 413 "data/maps/Route120/scripts.pory"
end
# 414 "data/maps/Route120/scripts.pory"

# 415 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzoDoMultiBattle::
# 416 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 417 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_JENNA, Route120_Text_JennaDefeat, TRAINER_LORENZO, Route120_Text_LorenzoDefeat, PARTNER_EMMIE
# 418 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 419 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_JennaLorenzoVictory
# 420 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 421 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 422 "data/maps/Route120/scripts.pory"
waitstate
# 423 "data/maps/Route120/scripts.pory"

# 424 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzoVictory::
# 425 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 426 "data/maps/Route120/scripts.pory"
waitmovement 0
# 427 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 428 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 429 "data/maps/Route120/scripts.pory"
waitmovement 0
# 430 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 431 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 432 "data/maps/Route120/scripts.pory"
end
# 433 "data/maps/Route120/scripts.pory"

# 434 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 435 "data/maps/Route120/scripts.pory"
	faceplayer
# 436 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 437 "data/maps/Route120/scripts.pory"
	end
# 438 "data/maps/Route120/scripts.pory"

# 439 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 440 "data/maps/Route120/scripts.pory"
	faceplayer
# 441 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 442 "data/maps/Route120/scripts.pory"
	end
# 443 "data/maps/Route120/scripts.pory"

# 444 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffrey::
# 445 "data/maps/Route120/scripts.pory"
lockall
# 446 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CHIP
# 447 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 448 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 449 "data/maps/Route120/scripts.pory"
waitmovement 0
# 450 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 451 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 452 "data/maps/Route120/scripts.pory"
waitmovement 0
# 453 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ChipIntro MSGBOX_AUTOCLOSE
# 454 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JEFFREY
# 455 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 456 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 457 "data/maps/Route120/scripts.pory"
waitmovement 0
# 458 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 459 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 460 "data/maps/Route120/scripts.pory"
waitmovement 0
# 461 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JeffreyIntro, MSGBOX_AUTOCLOSE
# 462 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ChipJeffreyDoMultiBattle
# 463 "data/maps/Route120/scripts.pory"
releaseall
# 464 "data/maps/Route120/scripts.pory"
end
# 465 "data/maps/Route120/scripts.pory"

# 466 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffreyDoMultiBattle::
# 467 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 468 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_CHIP, Route120_Text_ChipDefeat, TRAINER_JEFFREY_1, Route120_Text_JeffreyDefeat, PARTNER_EMMIE
# 469 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 470 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ChipJeffreyVictory
# 471 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 472 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 473 "data/maps/Route120/scripts.pory"
waitstate
# 474 "data/maps/Route120/scripts.pory"

# 475 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffreyVictory::
# 476 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 477 "data/maps/Route120/scripts.pory"
waitmovement 0
# 478 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 479 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 480 "data/maps/Route120/scripts.pory"
waitmovement 0
# 481 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JeffreyPostBattle, MSGBOX_AUTOCLOSE
# 482 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 483 "data/maps/Route120/scripts.pory"
end
# 484 "data/maps/Route120/scripts.pory"

# 485 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 486 "data/maps/Route120/scripts.pory"
	faceplayer
# 487 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 488 "data/maps/Route120/scripts.pory"
	release
# 489 "data/maps/Route120/scripts.pory"
	end
# 490 "data/maps/Route120/scripts.pory"

# 491 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 492 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 493 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 494 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 495 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 496 "data/maps/Route120/scripts.pory"
	release
# 497 "data/maps/Route120/scripts.pory"
	end
# 498 "data/maps/Route120/scripts.pory"

# 499 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 500 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 501 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 502 "data/maps/Route120/scripts.pory"
	end
# 503 "data/maps/Route120/scripts.pory"

# 504 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 505 "data/maps/Route120/scripts.pory"
	faceplayer
# 506 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 507 "data/maps/Route120/scripts.pory"
	end
# 508 "data/maps/Route120/scripts.pory"

# 509 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 510 "data/maps/Route120/scripts.pory"
	faceplayer
# 511 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 512 "data/maps/Route120/scripts.pory"
	end
# 513 "data/maps/Route120/scripts.pory"

# 514 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 515 "data/maps/Route120/scripts.pory"
	faceplayer
# 516 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 517 "data/maps/Route120/scripts.pory"
	end
# 518 "data/maps/Route120/scripts.pory"

# 519 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 520 "data/maps/Route120/scripts.pory"
	faceplayer
# 521 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 522 "data/maps/Route120/scripts.pory"
	end
# 523 "data/maps/Route120/scripts.pory"

# 524 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRiley::
# 525 "data/maps/Route120/scripts.pory"
lockall
# 526 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_KEIGO
# 527 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 528 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 529 "data/maps/Route120/scripts.pory"
waitmovement 0
# 530 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 531 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 532 "data/maps/Route120/scripts.pory"
waitmovement 0
# 533 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_KeigoIntro MSGBOX_AUTOCLOSE
# 534 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_RILEY
# 535 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 536 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 537 "data/maps/Route120/scripts.pory"
waitmovement 0
# 538 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 539 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 540 "data/maps/Route120/scripts.pory"
waitmovement 0
# 541 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RileyIntro, MSGBOX_AUTOCLOSE
# 542 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_KeigoRileyDoMultiBattle
# 543 "data/maps/Route120/scripts.pory"
releaseall
# 544 "data/maps/Route120/scripts.pory"
end
# 545 "data/maps/Route120/scripts.pory"

# 546 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRileyDoMultiBattle::
# 547 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 548 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_KEIGO, Route120_Text_KeigoDefeat, TRAINER_RILEY, Route120_Text_RileyDefeat, PARTNER_EMMIE
# 549 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 550 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_KeigoRileyVictory
# 551 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 552 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 553 "data/maps/Route120/scripts.pory"
waitstate
# 554 "data/maps/Route120/scripts.pory"

# 555 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRileyVictory::
# 556 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 557 "data/maps/Route120/scripts.pory"
waitmovement 0
# 558 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 559 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 560 "data/maps/Route120/scripts.pory"
waitmovement 0
# 561 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 562 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 563 "data/maps/Route120/scripts.pory"
end
# 564 "data/maps/Route120/scripts.pory"

# 565 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 566 "data/maps/Route120/scripts.pory"
	faceplayer
# 567 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 568 "data/maps/Route120/scripts.pory"
	end
# 569 "data/maps/Route120/scripts.pory"

# 570 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 571 "data/maps/Route120/scripts.pory"
	faceplayer
# 572 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 573 "data/maps/Route120/scripts.pory"
	end
# 574 "data/maps/Route120/scripts.pory"

# 575 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 576 "data/maps/Route120/scripts.pory"
	faceplayer
# 577 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 578 "data/maps/Route120/scripts.pory"
	end
# 579 "data/maps/Route120/scripts.pory"

# 580 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallie::
# 581 "data/maps/Route120/scripts.pory"
lockall
# 582 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JENNIFER
# 583 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 584 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 585 "data/maps/Route120/scripts.pory"
waitmovement 0
# 586 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 587 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 588 "data/maps/Route120/scripts.pory"
waitmovement 0
# 589 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JenniferIntro MSGBOX_AUTOCLOSE
# 590 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CALLIE
# 591 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 592 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 593 "data/maps/Route120/scripts.pory"
waitmovement 0
# 594 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 595 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 596 "data/maps/Route120/scripts.pory"
waitmovement 0
# 597 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_CallieIntro, MSGBOX_AUTOCLOSE
# 598 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_JenniferCallieDoMultiBattle
# 599 "data/maps/Route120/scripts.pory"
releaseall
# 600 "data/maps/Route120/scripts.pory"
end
# 601 "data/maps/Route120/scripts.pory"

# 602 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallieDoMultiBattle::
# 603 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 604 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_JENNIFER, Route120_Text_JenniferDefeat, TRAINER_CALLIE, Route120_Text_CallieDefeat, PARTNER_EMMIE
# 605 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 606 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_JenniferCallieVictory
# 607 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 608 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 609 "data/maps/Route120/scripts.pory"
waitstate
# 610 "data/maps/Route120/scripts.pory"

# 611 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallieVictory::
# 612 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 613 "data/maps/Route120/scripts.pory"
waitmovement 0
# 614 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 615 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 616 "data/maps/Route120/scripts.pory"
waitmovement 0
# 617 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 618 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 619 "data/maps/Route120/scripts.pory"
end
# 620 "data/maps/Route120/scripts.pory"

# 621 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 622 "data/maps/Route120/scripts.pory"
	faceplayer
# 623 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 624 "data/maps/Route120/scripts.pory"
	end
# 625 "data/maps/Route120/scripts.pory"

# 626 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 627 "data/maps/Route120/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\n"
# 628 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 629 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 630 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 631 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 632 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 633 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 634 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 635 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 636 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your POKéMON ready for\n"
# 637 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 638 "data/maps/Route120/scripts.pory"

# 639 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 640 "data/maps/Route120/scripts.pory"
	.string "STEVEN: No?\p"
# 641 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 642 "data/maps/Route120/scripts.pory"

# 643 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 644 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your POKéMON\n"
# 645 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 646 "data/maps/Route120/scripts.pory"

# 647 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 648 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\n"
# 649 "data/maps/Route120/scripts.pory"
	.string "power as a TRAINER!$"
# 650 "data/maps/Route120/scripts.pory"

# 651 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 652 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
# 653 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 654 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 655 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 656 "data/maps/Route120/scripts.pory"

# 657 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 658 "data/maps/Route120/scripts.pory"
	.string "STEVEN: I see…\n"
# 659 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 660 "data/maps/Route120/scripts.pory"
	.string "Your POKéMON have obviously grown\n"
# 661 "data/maps/Route120/scripts.pory"
	.string "since I first met you in DEWFORD.\p"
# 662 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 663 "data/maps/Route120/scripts.pory"
	.string "DEVON SCOPE.\p"
# 664 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 665 "data/maps/Route120/scripts.pory"
	.string "concealed POKéMON.$"
# 666 "data/maps/Route120/scripts.pory"

# 667 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 668 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\p"
# 669 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing POKéMON and TRAINERS\n"
# 670 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 671 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 672 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 673 "data/maps/Route120/scripts.pory"

# 674 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 675 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 676 "data/maps/Route120/scripts.pory"

# 677 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 678 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 679 "data/maps/Route120/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 680 "data/maps/Route120/scripts.pory"

# 681 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 682 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 683 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 684 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 685 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 686 "data/maps/Route120/scripts.pory"

# 687 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 688 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
# 689 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} FORTREE CITY$"
# 690 "data/maps/Route120/scripts.pory"

# 691 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 692 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
# 693 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 120$"

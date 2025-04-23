# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON, 29
# 3 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 30
# 4 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON_SHADOW, 35  @ They use a second object which is identical to Kecleon but has a reflection palette tag for the bridge shadow
# 5 "data/maps/Route120/scripts.pory"
.set LOCALID_CHIP, 24
# 6 "data/maps/Route120/scripts.pory"
.set LOCALID_JEFFREY, 15
# 7 "data/maps/Route120/scripts.pory"
.set LOCALID_KEIGO, 33
# 8 "data/maps/Route120/scripts.pory"
.set LOCALID_RILEY, 34
# 9 "data/maps/Route120/scripts.pory"
.set LOCALID_LORENZO, 13
# 10 "data/maps/Route120/scripts.pory"
.set LOCALID_JENNA, 14
# 11 "data/maps/Route120/scripts.pory"
.set LOCALID_CALLIE, 41
# 12 "data/maps/Route120/scripts.pory"
.set LOCALID_JENNIFER, 23
# 13 "data/maps/Route120/scripts.pory"
.set LOCALID_ROBERT, 12
# 14 "data/maps/Route120/scripts.pory"
.set LOCALID_CLARISSA, 25
# 15 "data/maps/Route120/scripts.pory"
.set LOCALID_ANGELICA, 26
# 16 "data/maps/Route120/scripts.pory"
.set LOCALID_COLIN, 42
# 17 "data/maps/Route120/scripts.pory"

# 18 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 19 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 20 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 21 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 22 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route120_OnFrame
# 23 "data/maps/Route120/scripts.pory"
	.byte 0
# 24 "data/maps/Route120/scripts.pory"

# 25 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 26 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 27 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 28 "data/maps/Route120/scripts.pory"
	end
# 29 "data/maps/Route120/scripts.pory"

# 30 "data/maps/Route120/scripts.pory"
Route120_OnFrame:
# 31 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 32 "data/maps/Route120/scripts.pory"
	end
# 33 "data/maps/Route120/scripts.pory"

# 34 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 35 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 36 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 37 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 38 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 39 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 40 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 41 "data/maps/Route120/scripts.pory"
	return
# 42 "data/maps/Route120/scripts.pory"

# 43 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 44 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 45 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 46 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 47 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 48 "data/maps/Route120/scripts.pory"
	return
# 49 "data/maps/Route120/scripts.pory"

# 50 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 51 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 52 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 53 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 54 "data/maps/Route120/scripts.pory"
	return
# 55 "data/maps/Route120/scripts.pory"

# 56 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 57 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 58 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 59 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 60 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 61 "data/maps/Route120/scripts.pory"
	end
# 62 "data/maps/Route120/scripts.pory"

# 63 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 64 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 65 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 66 "data/maps/Route120/scripts.pory"
	return
# 67 "data/maps/Route120/scripts.pory"

# 68 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 69 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 70 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 71 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 72 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 73 "data/maps/Route120/scripts.pory"
	return
# 74 "data/maps/Route120/scripts.pory"

# 75 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 76 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 77 "data/maps/Route120/scripts.pory"
	return
# 78 "data/maps/Route120/scripts.pory"

# 79 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 80 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
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
msgbox Route120_Text_AngelicaIntro MSGBOX_AUTOCLOSE
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
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route120/scripts.pory"
	end
# 331 "data/maps/Route120/scripts.pory"

# 332 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobert::
# 333 "data/maps/Route120/scripts.pory"
lockall
# 334 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CLARISSA
# 335 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 336 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 337 "data/maps/Route120/scripts.pory"
waitmovement 0
# 338 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 339 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 340 "data/maps/Route120/scripts.pory"
waitmovement 0
# 341 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ClarissaIntro MSGBOX_AUTOCLOSE
# 342 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_ROBERT
# 343 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 344 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 345 "data/maps/Route120/scripts.pory"
waitmovement 0
# 346 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 347 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 348 "data/maps/Route120/scripts.pory"
waitmovement 0
# 349 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RobertIntro MSGBOX_AUTOCLOSE
# 350 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ClarissaRobertDoMultiBattle
# 351 "data/maps/Route120/scripts.pory"
releaseall
# 352 "data/maps/Route120/scripts.pory"
end
# 353 "data/maps/Route120/scripts.pory"

# 354 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobertDoMultiBattle::
# 355 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 356 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_CLARISSA, Route120_Text_ClarissaDefeat, TRAINER_ROBERT_1, Route120_Text_RobertDefeat, PARTNER_EMMIE
# 357 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 358 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ClarissaRobertVictory
# 359 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 360 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 361 "data/maps/Route120/scripts.pory"
waitstate
# 362 "data/maps/Route120/scripts.pory"

# 363 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobertVictory::
# 364 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 365 "data/maps/Route120/scripts.pory"
waitmovement 0
# 366 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 367 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 368 "data/maps/Route120/scripts.pory"
waitmovement 0
# 369 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 371 "data/maps/Route120/scripts.pory"
end
# 372 "data/maps/Route120/scripts.pory"

# 373 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 374 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 375 "data/maps/Route120/scripts.pory"
	release
# 376 "data/maps/Route120/scripts.pory"
	end
# 377 "data/maps/Route120/scripts.pory"

# 378 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 379 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 380 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 382 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 383 "data/maps/Route120/scripts.pory"
	release
# 384 "data/maps/Route120/scripts.pory"
	end
# 385 "data/maps/Route120/scripts.pory"

# 386 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 387 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 388 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 389 "data/maps/Route120/scripts.pory"
	end
# 390 "data/maps/Route120/scripts.pory"

# 391 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzo::
# 392 "data/maps/Route120/scripts.pory"
lockall
# 393 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JENNA
# 394 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 395 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 396 "data/maps/Route120/scripts.pory"
waitmovement 0
# 397 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 398 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 399 "data/maps/Route120/scripts.pory"
waitmovement 0
# 400 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JennaIntro MSGBOX_AUTOCLOSE
# 401 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_LORENZO
# 402 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 403 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 404 "data/maps/Route120/scripts.pory"
waitmovement 0
# 405 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 406 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 407 "data/maps/Route120/scripts.pory"
waitmovement 0
# 408 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_LorenzoIntro MSGBOX_AUTOCLOSE
# 409 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_JennaLorenzoDoMultiBattle
# 410 "data/maps/Route120/scripts.pory"
releaseall
# 411 "data/maps/Route120/scripts.pory"
end
# 412 "data/maps/Route120/scripts.pory"

# 413 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzoDoMultiBattle::
# 414 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 415 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_JENNA, Route120_Text_JennaDefeat, TRAINER_LORENZO, Route120_Text_LorenzoDefeat, PARTNER_EMMIE
# 416 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 417 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_JennaLorenzoVictory
# 418 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 419 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 420 "data/maps/Route120/scripts.pory"
waitstate
# 421 "data/maps/Route120/scripts.pory"

# 422 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzoVictory::
# 423 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 424 "data/maps/Route120/scripts.pory"
waitmovement 0
# 425 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 426 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 427 "data/maps/Route120/scripts.pory"
waitmovement 0
# 428 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 429 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 430 "data/maps/Route120/scripts.pory"
end
# 431 "data/maps/Route120/scripts.pory"

# 432 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 433 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 434 "data/maps/Route120/scripts.pory"
	end
# 435 "data/maps/Route120/scripts.pory"

# 436 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 437 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 438 "data/maps/Route120/scripts.pory"
	end
# 439 "data/maps/Route120/scripts.pory"

# 440 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffrey::
# 441 "data/maps/Route120/scripts.pory"
lockall
# 442 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CHIP
# 443 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 444 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 445 "data/maps/Route120/scripts.pory"
waitmovement 0
# 446 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 447 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 448 "data/maps/Route120/scripts.pory"
waitmovement 0
# 449 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ChipIntro MSGBOX_AUTOCLOSE
# 450 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JEFFREY
# 451 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 452 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 453 "data/maps/Route120/scripts.pory"
waitmovement 0
# 454 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 455 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 456 "data/maps/Route120/scripts.pory"
waitmovement 0
# 457 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JeffreyIntro MSGBOX_AUTOCLOSE
# 458 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ChipJeffreyDoMultiBattle
# 459 "data/maps/Route120/scripts.pory"
releaseall
# 460 "data/maps/Route120/scripts.pory"
end
# 461 "data/maps/Route120/scripts.pory"

# 462 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffreyDoMultiBattle::
# 463 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 464 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_CHIP, Route120_Text_ChipDefeat, TRAINER_JEFFREY_1, Route120_Text_JeffreyDefeat, PARTNER_EMMIE
# 465 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 466 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ChipJeffreyVictory
# 467 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 468 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 469 "data/maps/Route120/scripts.pory"
waitstate
# 470 "data/maps/Route120/scripts.pory"

# 471 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffreyVictory::
# 472 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 473 "data/maps/Route120/scripts.pory"
waitmovement 0
# 474 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 475 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 476 "data/maps/Route120/scripts.pory"
waitmovement 0
# 477 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JeffreyPostBattle, MSGBOX_AUTOCLOSE
# 478 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 479 "data/maps/Route120/scripts.pory"
end
# 480 "data/maps/Route120/scripts.pory"

# 481 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 482 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 483 "data/maps/Route120/scripts.pory"
	release
# 484 "data/maps/Route120/scripts.pory"
	end
# 485 "data/maps/Route120/scripts.pory"

# 486 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 487 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 488 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 489 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 490 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 491 "data/maps/Route120/scripts.pory"
	release
# 492 "data/maps/Route120/scripts.pory"
	end
# 493 "data/maps/Route120/scripts.pory"

# 494 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 495 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 496 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 497 "data/maps/Route120/scripts.pory"
	end
# 498 "data/maps/Route120/scripts.pory"

# 499 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 500 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 501 "data/maps/Route120/scripts.pory"
	end
# 502 "data/maps/Route120/scripts.pory"

# 503 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 504 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 505 "data/maps/Route120/scripts.pory"
	end
# 506 "data/maps/Route120/scripts.pory"

# 507 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 508 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/Route120/scripts.pory"
	end
# 510 "data/maps/Route120/scripts.pory"

# 511 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 512 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route120/scripts.pory"
	end
# 514 "data/maps/Route120/scripts.pory"

# 515 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRiley::
# 516 "data/maps/Route120/scripts.pory"
lockall
# 517 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_KEIGO
# 518 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 519 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 520 "data/maps/Route120/scripts.pory"
waitmovement 0
# 521 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 522 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 523 "data/maps/Route120/scripts.pory"
waitmovement 0
# 524 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_KeigoIntro MSGBOX_AUTOCLOSE
# 525 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_RILEY
# 526 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 527 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 528 "data/maps/Route120/scripts.pory"
waitmovement 0
# 529 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 530 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 531 "data/maps/Route120/scripts.pory"
waitmovement 0
# 532 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RileyIntro MSGBOX_AUTOCLOSE
# 533 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_KeigoRileyDoMultiBattle
# 534 "data/maps/Route120/scripts.pory"
releaseall
# 535 "data/maps/Route120/scripts.pory"
end
# 536 "data/maps/Route120/scripts.pory"

# 537 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRileyDoMultiBattle::
# 538 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 539 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_KEIGO, Route120_Text_KeigoDefeat, TRAINER_RILEY, Route120_Text_RileyDefeat, PARTNER_EMMIE
# 540 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 541 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_KeigoRileyVictory
# 542 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 543 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 544 "data/maps/Route120/scripts.pory"
waitstate
# 545 "data/maps/Route120/scripts.pory"

# 546 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRileyVictory::
# 547 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 548 "data/maps/Route120/scripts.pory"
waitmovement 0
# 549 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 550 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 551 "data/maps/Route120/scripts.pory"
waitmovement 0
# 552 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 553 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 554 "data/maps/Route120/scripts.pory"
end
# 555 "data/maps/Route120/scripts.pory"

# 556 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 557 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 558 "data/maps/Route120/scripts.pory"
	end
# 559 "data/maps/Route120/scripts.pory"

# 560 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 561 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 562 "data/maps/Route120/scripts.pory"
	end
# 563 "data/maps/Route120/scripts.pory"

# 564 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 565 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 566 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 567 "data/maps/Route120/scripts.pory"
	end
# 568 "data/maps/Route120/scripts.pory"

# 569 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallie::
# 570 "data/maps/Route120/scripts.pory"
lockall
# 571 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JENNIFER
# 572 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 573 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 574 "data/maps/Route120/scripts.pory"
waitmovement 0
# 575 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 576 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 577 "data/maps/Route120/scripts.pory"
waitmovement 0
# 578 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JenniferIntro MSGBOX_AUTOCLOSE
# 579 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CALLIE
# 580 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 581 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 582 "data/maps/Route120/scripts.pory"
waitmovement 0
# 583 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 584 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 585 "data/maps/Route120/scripts.pory"
waitmovement 0
# 586 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_CallieIntro MSGBOX_AUTOCLOSE
# 587 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_JenniferCallieDoMultiBattle
# 588 "data/maps/Route120/scripts.pory"
releaseall
# 589 "data/maps/Route120/scripts.pory"
end
# 590 "data/maps/Route120/scripts.pory"

# 591 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallieDoMultiBattle::
# 592 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 593 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_JENNIFER, Route120_Text_JenniferDefeat, TRAINER_CALLIE, Route120_Text_CallieDefeat, PARTNER_EMMIE
# 594 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 595 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_JenniferCallieVictory
# 596 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 597 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 598 "data/maps/Route120/scripts.pory"
waitstate
# 599 "data/maps/Route120/scripts.pory"

# 600 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallieVictory::
# 601 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 602 "data/maps/Route120/scripts.pory"
waitmovement 0
# 603 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 604 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 605 "data/maps/Route120/scripts.pory"
waitmovement 0
# 606 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 607 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 608 "data/maps/Route120/scripts.pory"
end
# 609 "data/maps/Route120/scripts.pory"

# 610 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 611 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 612 "data/maps/Route120/scripts.pory"
	end
# 613 "data/maps/Route120/scripts.pory"

# 614 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 615 "data/maps/Route120/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\n"
# 616 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 617 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 618 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 619 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 620 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 621 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 622 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 623 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 624 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your POKéMON ready for\n"
# 625 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 626 "data/maps/Route120/scripts.pory"

# 627 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 628 "data/maps/Route120/scripts.pory"
	.string "STEVEN: No?\p"
# 629 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 630 "data/maps/Route120/scripts.pory"

# 631 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 632 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your POKéMON\n"
# 633 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 634 "data/maps/Route120/scripts.pory"

# 635 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 636 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\n"
# 637 "data/maps/Route120/scripts.pory"
	.string "power as a TRAINER!$"
# 638 "data/maps/Route120/scripts.pory"

# 639 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 640 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
# 641 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 642 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 643 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 644 "data/maps/Route120/scripts.pory"

# 645 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 646 "data/maps/Route120/scripts.pory"
	.string "STEVEN: I see…\n"
# 647 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 648 "data/maps/Route120/scripts.pory"
	.string "Your POKéMON have obviously grown\n"
# 649 "data/maps/Route120/scripts.pory"
	.string "since I first met you in DEWFORD.\p"
# 650 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 651 "data/maps/Route120/scripts.pory"
	.string "DEVON SCOPE.\p"
# 652 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 653 "data/maps/Route120/scripts.pory"
	.string "concealed POKéMON.$"
# 654 "data/maps/Route120/scripts.pory"

# 655 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 656 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\p"
# 657 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing POKéMON and TRAINERS\n"
# 658 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 659 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 660 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 661 "data/maps/Route120/scripts.pory"

# 662 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 663 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 664 "data/maps/Route120/scripts.pory"

# 665 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 666 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 667 "data/maps/Route120/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 668 "data/maps/Route120/scripts.pory"

# 669 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 670 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 671 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 672 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 673 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 674 "data/maps/Route120/scripts.pory"

# 675 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 676 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
# 677 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} FORTREE CITY$"
# 678 "data/maps/Route120/scripts.pory"

# 679 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 680 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
# 681 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 120$"

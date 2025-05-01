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
	end
# 32 "data/maps/Route120/scripts.pory"

# 33 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 34 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 35 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 36 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 37 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 38 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 39 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 40 "data/maps/Route120/scripts.pory"
	return
# 41 "data/maps/Route120/scripts.pory"

# 42 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 43 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 45 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 46 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 47 "data/maps/Route120/scripts.pory"
	return
# 48 "data/maps/Route120/scripts.pory"

# 49 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 50 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 51 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 52 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 53 "data/maps/Route120/scripts.pory"
	return
# 54 "data/maps/Route120/scripts.pory"

# 55 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 56 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
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
	call GabbyAndTy_EventScript_UpdateLocation
# 81 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 82 "data/maps/Route120/scripts.pory"
	end
# 83 "data/maps/Route120/scripts.pory"

# 84 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 85 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 86 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 87 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 88 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 89 "data/maps/Route120/scripts.pory"
	return
# 90 "data/maps/Route120/scripts.pory"

# 91 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 92 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 93 "data/maps/Route120/scripts.pory"
	return
# 94 "data/maps/Route120/scripts.pory"

# 95 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 96 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 97 "data/maps/Route120/scripts.pory"
	return
# 98 "data/maps/Route120/scripts.pory"

# 99 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 100 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 101 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 102 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 103 "data/maps/Route120/scripts.pory"
	end
# 104 "data/maps/Route120/scripts.pory"

# 105 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 106 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 107 "data/maps/Route120/scripts.pory"
	return
# 108 "data/maps/Route120/scripts.pory"

# 109 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 110 "data/maps/Route120/scripts.pory"
	lock
# 111 "data/maps/Route120/scripts.pory"
	faceplayer
# 112 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 113 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 114 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 115 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 116 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 117 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 118 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 120 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 121 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 122 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 123 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 124 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 125 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 126 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 127 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 128 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 129 "data/maps/Route120/scripts.pory"
	end
# 130 "data/maps/Route120/scripts.pory"

# 131 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 132 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 133 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 134 "data/maps/Route120/scripts.pory"
	end
# 135 "data/maps/Route120/scripts.pory"

# 136 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 137 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 138 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 139 "data/maps/Route120/scripts.pory"
	end
# 140 "data/maps/Route120/scripts.pory"

# 141 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 142 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 143 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 144 "data/maps/Route120/scripts.pory"
	end
# 145 "data/maps/Route120/scripts.pory"

# 146 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 147 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 148 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 149 "data/maps/Route120/scripts.pory"
	end
# 150 "data/maps/Route120/scripts.pory"

# 151 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 152 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 153 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 154 "data/maps/Route120/scripts.pory"
	end
# 155 "data/maps/Route120/scripts.pory"

# 156 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 157 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 158 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 159 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 160 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 161 "data/maps/Route120/scripts.pory"
	release
# 162 "data/maps/Route120/scripts.pory"
	end
# 163 "data/maps/Route120/scripts.pory"

# 164 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 165 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 166 "data/maps/Route120/scripts.pory"
	release
# 167 "data/maps/Route120/scripts.pory"
	end
# 168 "data/maps/Route120/scripts.pory"

# 169 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 170 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 171 "data/maps/Route120/scripts.pory"
	return
# 172 "data/maps/Route120/scripts.pory"

# 173 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 174 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 175 "data/maps/Route120/scripts.pory"
	return
# 176 "data/maps/Route120/scripts.pory"

# 177 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 178 "data/maps/Route120/scripts.pory"
	lock
# 179 "data/maps/Route120/scripts.pory"
	faceplayer
# 180 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 181 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 182 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 183 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 184 "data/maps/Route120/scripts.pory"
	end
# 185 "data/maps/Route120/scripts.pory"

# 186 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 187 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 188 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 189 "data/maps/Route120/scripts.pory"
	release
# 190 "data/maps/Route120/scripts.pory"
	end
# 191 "data/maps/Route120/scripts.pory"

# 192 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 193 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 194 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 195 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 196 "data/maps/Route120/scripts.pory"
	end
# 197 "data/maps/Route120/scripts.pory"

# 198 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 199 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 200 "data/maps/Route120/scripts.pory"
	closemessage
# 201 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route120_EventScript_PlayerApproachKecleonEast
# 202 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 203 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 204 "data/maps/Route120/scripts.pory"
	delay 20
# 205 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 206 "data/maps/Route120/scripts.pory"
	closemessage
# 207 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterUp
# 208 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 210 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route120/scripts.pory"
	waitse
# 212 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 213 "data/maps/Route120/scripts.pory"
	delay 40
# 214 "data/maps/Route120/scripts.pory"
	waitmoncry
# 215 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 216 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 217 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 218 "data/maps/Route120/scripts.pory"
	dowildbattle
# 219 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 220 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 221 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 222 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 223 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 224 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 225 "data/maps/Route120/scripts.pory"
	end
# 226 "data/maps/Route120/scripts.pory"

# 227 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 228 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 229 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 230 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 231 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 232 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 233 "data/maps/Route120/scripts.pory"
	end
# 234 "data/maps/Route120/scripts.pory"

# 235 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 236 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 237 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 238 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 240 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 241 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 242 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 243 "data/maps/Route120/scripts.pory"
	closemessage
# 244 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 245 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route120/scripts.pory"
	delay 50
# 247 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 248 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 249 "data/maps/Route120/scripts.pory"
	delay 15
# 250 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 251 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 252 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 253 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 254 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 255 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 256 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 257 "data/maps/Route120/scripts.pory"
	release
# 258 "data/maps/Route120/scripts.pory"
	end
# 259 "data/maps/Route120/scripts.pory"

# 260 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 261 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 262 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 263 "data/maps/Route120/scripts.pory"
	return
# 264 "data/maps/Route120/scripts.pory"

# 265 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonEast::
# 266 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonEast
# 267 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route120/scripts.pory"
	return
# 269 "data/maps/Route120/scripts.pory"

# 270 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonEast:
# 271 "data/maps/Route120/scripts.pory"
	face_down
# 272 "data/maps/Route120/scripts.pory"
	step_end
# 273 "data/maps/Route120/scripts.pory"

# 274 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 275 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 276 "data/maps/Route120/scripts.pory"
	end
# 277 "data/maps/Route120/scripts.pory"

# 278 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 279 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 280 "data/maps/Route120/scripts.pory"
	end
# 281 "data/maps/Route120/scripts.pory"

# 282 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 283 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 284 "data/maps/Route120/scripts.pory"
	end
# 285 "data/maps/Route120/scripts.pory"

# 286 "data/maps/Route120/scripts.pory"
Route120_EventScript_ColinAngelica::
# 287 "data/maps/Route120/scripts.pory"
lockall
# 288 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_COLIN
# 289 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 290 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 291 "data/maps/Route120/scripts.pory"
waitmovement 0
# 292 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 293 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 294 "data/maps/Route120/scripts.pory"
waitmovement 0
# 295 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ColinIntro MSGBOX_AUTOCLOSE
# 296 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_ANGELICA
# 297 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 298 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 299 "data/maps/Route120/scripts.pory"
waitmovement 0
# 300 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 301 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 302 "data/maps/Route120/scripts.pory"
waitmovement 0
# 303 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_AngelicaIntro MSGBOX_AUTOCLOSE
# 304 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ColinAngelicaDoMultiBattle
# 305 "data/maps/Route120/scripts.pory"
releaseall
# 306 "data/maps/Route120/scripts.pory"
end
# 307 "data/maps/Route120/scripts.pory"

# 308 "data/maps/Route120/scripts.pory"
Route120_EventScript_ColinAngelicaDoMultiBattle::
# 309 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 310 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_COLIN, Route120_Text_ColinDefeat, TRAINER_ANGELICA, Route120_Text_AngelicaDefeat, PARTNER_EMMIE
# 311 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 312 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ColinAngelicaVictory
# 313 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 314 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 315 "data/maps/Route120/scripts.pory"
waitstate
# 316 "data/maps/Route120/scripts.pory"

# 317 "data/maps/Route120/scripts.pory"
Route120_EventScript_ColinAngelicaVictory::
# 318 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/Route120/scripts.pory"
waitmovement 0
# 320 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 321 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 322 "data/maps/Route120/scripts.pory"
waitmovement 0
# 323 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 324 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 325 "data/maps/Route120/scripts.pory"
end
# 326 "data/maps/Route120/scripts.pory"

# 327 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 328 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route120/scripts.pory"
	end
# 330 "data/maps/Route120/scripts.pory"

# 331 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobert::
# 332 "data/maps/Route120/scripts.pory"
lockall
# 333 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CLARISSA
# 334 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 335 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 336 "data/maps/Route120/scripts.pory"
waitmovement 0
# 337 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 338 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 339 "data/maps/Route120/scripts.pory"
waitmovement 0
# 340 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ClarissaIntro MSGBOX_AUTOCLOSE
# 341 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_ROBERT
# 342 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 343 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 344 "data/maps/Route120/scripts.pory"
waitmovement 0
# 345 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 346 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 347 "data/maps/Route120/scripts.pory"
waitmovement 0
# 348 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RobertIntro MSGBOX_AUTOCLOSE
# 349 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ClarissaRobertDoMultiBattle
# 350 "data/maps/Route120/scripts.pory"
releaseall
# 351 "data/maps/Route120/scripts.pory"
end
# 352 "data/maps/Route120/scripts.pory"

# 353 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobertDoMultiBattle::
# 354 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 355 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_CLARISSA, Route120_Text_ClarissaDefeat, TRAINER_ROBERT_1, Route120_Text_RobertDefeat, PARTNER_EMMIE
# 356 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 357 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ClarissaRobertVictory
# 358 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 359 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 360 "data/maps/Route120/scripts.pory"
waitstate
# 361 "data/maps/Route120/scripts.pory"

# 362 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobertVictory::
# 363 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 364 "data/maps/Route120/scripts.pory"
waitmovement 0
# 365 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 367 "data/maps/Route120/scripts.pory"
waitmovement 0
# 368 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
# 369 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 370 "data/maps/Route120/scripts.pory"
end
# 371 "data/maps/Route120/scripts.pory"

# 372 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 373 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 374 "data/maps/Route120/scripts.pory"
	release
# 375 "data/maps/Route120/scripts.pory"
	end
# 376 "data/maps/Route120/scripts.pory"

# 377 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 378 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 379 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 380 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 381 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 382 "data/maps/Route120/scripts.pory"
	release
# 383 "data/maps/Route120/scripts.pory"
	end
# 384 "data/maps/Route120/scripts.pory"

# 385 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 386 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 387 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 388 "data/maps/Route120/scripts.pory"
	end
# 389 "data/maps/Route120/scripts.pory"

# 390 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzo::
# 391 "data/maps/Route120/scripts.pory"
lockall
# 392 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JENNA
# 393 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 394 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 395 "data/maps/Route120/scripts.pory"
waitmovement 0
# 396 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 397 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 398 "data/maps/Route120/scripts.pory"
waitmovement 0
# 399 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JennaIntro MSGBOX_AUTOCLOSE
# 400 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_LORENZO
# 401 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 402 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 403 "data/maps/Route120/scripts.pory"
waitmovement 0
# 404 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 405 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 406 "data/maps/Route120/scripts.pory"
waitmovement 0
# 407 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_LorenzoIntro MSGBOX_AUTOCLOSE
# 408 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_JennaLorenzoDoMultiBattle
# 409 "data/maps/Route120/scripts.pory"
releaseall
# 410 "data/maps/Route120/scripts.pory"
end
# 411 "data/maps/Route120/scripts.pory"

# 412 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzoDoMultiBattle::
# 413 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 414 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_JENNA, Route120_Text_JennaDefeat, TRAINER_LORENZO, Route120_Text_LorenzoDefeat, PARTNER_EMMIE
# 415 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 416 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_JennaLorenzoVictory
# 417 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 418 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 419 "data/maps/Route120/scripts.pory"
waitstate
# 420 "data/maps/Route120/scripts.pory"

# 421 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzoVictory::
# 422 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 423 "data/maps/Route120/scripts.pory"
waitmovement 0
# 424 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 426 "data/maps/Route120/scripts.pory"
waitmovement 0
# 427 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 428 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 429 "data/maps/Route120/scripts.pory"
end
# 430 "data/maps/Route120/scripts.pory"

# 431 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 432 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route120/scripts.pory"
	end
# 434 "data/maps/Route120/scripts.pory"

# 435 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 436 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 437 "data/maps/Route120/scripts.pory"
	end
# 438 "data/maps/Route120/scripts.pory"

# 439 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffrey::
# 440 "data/maps/Route120/scripts.pory"
lockall
# 441 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CHIP
# 442 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 443 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 444 "data/maps/Route120/scripts.pory"
waitmovement 0
# 445 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 446 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 447 "data/maps/Route120/scripts.pory"
waitmovement 0
# 448 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ChipIntro MSGBOX_AUTOCLOSE
# 449 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JEFFREY
# 450 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 451 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 452 "data/maps/Route120/scripts.pory"
waitmovement 0
# 453 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 454 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 455 "data/maps/Route120/scripts.pory"
waitmovement 0
# 456 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JeffreyIntro MSGBOX_AUTOCLOSE
# 457 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ChipJeffreyDoMultiBattle
# 458 "data/maps/Route120/scripts.pory"
releaseall
# 459 "data/maps/Route120/scripts.pory"
end
# 460 "data/maps/Route120/scripts.pory"

# 461 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffreyDoMultiBattle::
# 462 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 463 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_CHIP, Route120_Text_ChipDefeat, TRAINER_JEFFREY_1, Route120_Text_JeffreyDefeat, PARTNER_EMMIE
# 464 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 465 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ChipJeffreyVictory
# 466 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 467 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 468 "data/maps/Route120/scripts.pory"
waitstate
# 469 "data/maps/Route120/scripts.pory"

# 470 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffreyVictory::
# 471 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 472 "data/maps/Route120/scripts.pory"
waitmovement 0
# 473 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 474 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 475 "data/maps/Route120/scripts.pory"
waitmovement 0
# 476 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JeffreyPostBattle, MSGBOX_AUTOCLOSE
# 477 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 478 "data/maps/Route120/scripts.pory"
end
# 479 "data/maps/Route120/scripts.pory"

# 480 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 481 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 482 "data/maps/Route120/scripts.pory"
	release
# 483 "data/maps/Route120/scripts.pory"
	end
# 484 "data/maps/Route120/scripts.pory"

# 485 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 486 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 487 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 488 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 489 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 490 "data/maps/Route120/scripts.pory"
	release
# 491 "data/maps/Route120/scripts.pory"
	end
# 492 "data/maps/Route120/scripts.pory"

# 493 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 494 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 495 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 496 "data/maps/Route120/scripts.pory"
	end
# 497 "data/maps/Route120/scripts.pory"

# 498 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 499 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 500 "data/maps/Route120/scripts.pory"
	end
# 501 "data/maps/Route120/scripts.pory"

# 502 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 503 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 504 "data/maps/Route120/scripts.pory"
	end
# 505 "data/maps/Route120/scripts.pory"

# 506 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 507 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route120/scripts.pory"
	end
# 509 "data/maps/Route120/scripts.pory"

# 510 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 511 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 512 "data/maps/Route120/scripts.pory"
	end
# 513 "data/maps/Route120/scripts.pory"

# 514 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRiley::
# 515 "data/maps/Route120/scripts.pory"
lockall
# 516 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_KEIGO
# 517 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 518 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 519 "data/maps/Route120/scripts.pory"
waitmovement 0
# 520 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 521 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 522 "data/maps/Route120/scripts.pory"
waitmovement 0
# 523 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_KeigoIntro MSGBOX_AUTOCLOSE
# 524 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_RILEY
# 525 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 526 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 527 "data/maps/Route120/scripts.pory"
waitmovement 0
# 528 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 529 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 530 "data/maps/Route120/scripts.pory"
waitmovement 0
# 531 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RileyIntro MSGBOX_AUTOCLOSE
# 532 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_KeigoRileyDoMultiBattle
# 533 "data/maps/Route120/scripts.pory"
releaseall
# 534 "data/maps/Route120/scripts.pory"
end
# 535 "data/maps/Route120/scripts.pory"

# 536 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRileyDoMultiBattle::
# 537 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 538 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_KEIGO, Route120_Text_KeigoDefeat, TRAINER_RILEY, Route120_Text_RileyDefeat, PARTNER_EMMIE
# 539 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 540 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_KeigoRileyVictory
# 541 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 542 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 543 "data/maps/Route120/scripts.pory"
waitstate
# 544 "data/maps/Route120/scripts.pory"

# 545 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRileyVictory::
# 546 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 547 "data/maps/Route120/scripts.pory"
waitmovement 0
# 548 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 549 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 550 "data/maps/Route120/scripts.pory"
waitmovement 0
# 551 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 552 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 553 "data/maps/Route120/scripts.pory"
end
# 554 "data/maps/Route120/scripts.pory"

# 555 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 556 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 557 "data/maps/Route120/scripts.pory"
	end
# 558 "data/maps/Route120/scripts.pory"

# 559 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 560 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 561 "data/maps/Route120/scripts.pory"
	end
# 562 "data/maps/Route120/scripts.pory"

# 563 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 564 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 565 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 566 "data/maps/Route120/scripts.pory"
	end
# 567 "data/maps/Route120/scripts.pory"

# 568 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallie::
# 569 "data/maps/Route120/scripts.pory"
lockall
# 570 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JENNIFER
# 571 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 572 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 573 "data/maps/Route120/scripts.pory"
waitmovement 0
# 574 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 575 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 576 "data/maps/Route120/scripts.pory"
waitmovement 0
# 577 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JenniferIntro MSGBOX_AUTOCLOSE
# 578 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CALLIE
# 579 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 580 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 581 "data/maps/Route120/scripts.pory"
waitmovement 0
# 582 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 583 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 584 "data/maps/Route120/scripts.pory"
waitmovement 0
# 585 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_CallieIntro MSGBOX_AUTOCLOSE
# 586 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_JenniferCallieDoMultiBattle
# 587 "data/maps/Route120/scripts.pory"
releaseall
# 588 "data/maps/Route120/scripts.pory"
end
# 589 "data/maps/Route120/scripts.pory"

# 590 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallieDoMultiBattle::
# 591 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 592 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_JENNIFER, Route120_Text_JenniferDefeat, TRAINER_CALLIE, Route120_Text_CallieDefeat, PARTNER_EMMIE
# 593 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 594 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_JenniferCallieVictory
# 595 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 596 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 597 "data/maps/Route120/scripts.pory"
waitstate
# 598 "data/maps/Route120/scripts.pory"

# 599 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallieVictory::
# 600 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 601 "data/maps/Route120/scripts.pory"
waitmovement 0
# 602 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 603 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 604 "data/maps/Route120/scripts.pory"
waitmovement 0
# 605 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 606 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 607 "data/maps/Route120/scripts.pory"
end
# 608 "data/maps/Route120/scripts.pory"

# 609 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 610 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 611 "data/maps/Route120/scripts.pory"
	end
# 612 "data/maps/Route120/scripts.pory"

# 613 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 614 "data/maps/Route120/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\n"
# 615 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 616 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 617 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 618 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 619 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 620 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 621 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 622 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 623 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your POKéMON ready for\n"
# 624 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 625 "data/maps/Route120/scripts.pory"

# 626 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 627 "data/maps/Route120/scripts.pory"
	.string "STEVEN: No?\p"
# 628 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 629 "data/maps/Route120/scripts.pory"

# 630 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 631 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your POKéMON\n"
# 632 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 633 "data/maps/Route120/scripts.pory"

# 634 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 635 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\n"
# 636 "data/maps/Route120/scripts.pory"
	.string "power as a TRAINER!$"
# 637 "data/maps/Route120/scripts.pory"

# 638 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 639 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
# 640 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 641 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 642 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 643 "data/maps/Route120/scripts.pory"

# 644 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 645 "data/maps/Route120/scripts.pory"
	.string "STEVEN: I see…\n"
# 646 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 647 "data/maps/Route120/scripts.pory"
	.string "Your POKéMON have obviously grown\n"
# 648 "data/maps/Route120/scripts.pory"
	.string "since I first met you in DEWFORD.\p"
# 649 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 650 "data/maps/Route120/scripts.pory"
	.string "DEVON SCOPE.\p"
# 651 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 652 "data/maps/Route120/scripts.pory"
	.string "concealed POKéMON.$"
# 653 "data/maps/Route120/scripts.pory"

# 654 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 655 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\p"
# 656 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing POKéMON and TRAINERS\n"
# 657 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 658 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 659 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 660 "data/maps/Route120/scripts.pory"

# 661 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 662 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 663 "data/maps/Route120/scripts.pory"

# 664 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 665 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 666 "data/maps/Route120/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 667 "data/maps/Route120/scripts.pory"

# 668 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 669 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 670 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 671 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 672 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 673 "data/maps/Route120/scripts.pory"

# 674 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 675 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
# 676 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} FORTREE CITY$"
# 677 "data/maps/Route120/scripts.pory"

# 678 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 679 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
# 680 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 120$"

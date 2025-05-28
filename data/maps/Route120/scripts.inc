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
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 28 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 29 "data/maps/Route120/scripts.pory"
	end
# 30 "data/maps/Route120/scripts.pory"

# 31 "data/maps/Route120/scripts.pory"
Route120_OnFrame:
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
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 59 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 60 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 61 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 62 "data/maps/Route120/scripts.pory"
	end
# 63 "data/maps/Route120/scripts.pory"

# 64 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 65 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 66 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 67 "data/maps/Route120/scripts.pory"
	return
# 68 "data/maps/Route120/scripts.pory"

# 69 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 70 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 71 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 72 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 73 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 74 "data/maps/Route120/scripts.pory"
	return
# 75 "data/maps/Route120/scripts.pory"

# 76 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 77 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 78 "data/maps/Route120/scripts.pory"
	return
# 79 "data/maps/Route120/scripts.pory"

# 80 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 81 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 82 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 83 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 84 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 85 "data/maps/Route120/scripts.pory"
	end
# 86 "data/maps/Route120/scripts.pory"

# 87 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 88 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 89 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 90 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 91 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 92 "data/maps/Route120/scripts.pory"
	return
# 93 "data/maps/Route120/scripts.pory"

# 94 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 95 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 96 "data/maps/Route120/scripts.pory"
	return
# 97 "data/maps/Route120/scripts.pory"

# 98 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 99 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 100 "data/maps/Route120/scripts.pory"
	return
# 101 "data/maps/Route120/scripts.pory"

# 102 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 103 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 104 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 105 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 106 "data/maps/Route120/scripts.pory"
	end
# 107 "data/maps/Route120/scripts.pory"

# 108 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 109 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 110 "data/maps/Route120/scripts.pory"
	return
# 111 "data/maps/Route120/scripts.pory"

# 112 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 113 "data/maps/Route120/scripts.pory"
	lock
# 114 "data/maps/Route120/scripts.pory"
	faceplayer
# 115 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 116 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 117 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 118 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 119 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 120 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 121 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 123 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 124 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 125 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 126 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 127 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 128 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 129 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 130 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 131 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 132 "data/maps/Route120/scripts.pory"
	end
# 133 "data/maps/Route120/scripts.pory"

# 134 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 135 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 136 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 137 "data/maps/Route120/scripts.pory"
	end
# 138 "data/maps/Route120/scripts.pory"

# 139 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 140 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 141 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 142 "data/maps/Route120/scripts.pory"
	end
# 143 "data/maps/Route120/scripts.pory"

# 144 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 145 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 146 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 147 "data/maps/Route120/scripts.pory"
	end
# 148 "data/maps/Route120/scripts.pory"

# 149 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 150 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 151 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 152 "data/maps/Route120/scripts.pory"
	end
# 153 "data/maps/Route120/scripts.pory"

# 154 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 155 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 156 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 157 "data/maps/Route120/scripts.pory"
	end
# 158 "data/maps/Route120/scripts.pory"

# 159 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 160 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 161 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 162 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 163 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 164 "data/maps/Route120/scripts.pory"
	release
# 165 "data/maps/Route120/scripts.pory"
	end
# 166 "data/maps/Route120/scripts.pory"

# 167 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 168 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 169 "data/maps/Route120/scripts.pory"
	release
# 170 "data/maps/Route120/scripts.pory"
	end
# 171 "data/maps/Route120/scripts.pory"

# 172 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 173 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 174 "data/maps/Route120/scripts.pory"
	return
# 175 "data/maps/Route120/scripts.pory"

# 176 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 177 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 178 "data/maps/Route120/scripts.pory"
	return
# 179 "data/maps/Route120/scripts.pory"

# 180 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 181 "data/maps/Route120/scripts.pory"
	lock
# 182 "data/maps/Route120/scripts.pory"
	faceplayer
# 183 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 184 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 185 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 186 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 187 "data/maps/Route120/scripts.pory"
	end
# 188 "data/maps/Route120/scripts.pory"

# 189 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 190 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 191 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 192 "data/maps/Route120/scripts.pory"
	release
# 193 "data/maps/Route120/scripts.pory"
	end
# 194 "data/maps/Route120/scripts.pory"

# 195 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 196 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 197 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 198 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 199 "data/maps/Route120/scripts.pory"
	end
# 200 "data/maps/Route120/scripts.pory"

# 201 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 202 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 203 "data/maps/Route120/scripts.pory"
	closemessage
# 204 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route120_EventScript_PlayerApproachKecleonEast
# 205 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 206 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route120/scripts.pory"
	delay 20
# 208 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 209 "data/maps/Route120/scripts.pory"
	closemessage
# 210 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterUp
# 211 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 213 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route120/scripts.pory"
	waitse
# 215 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 216 "data/maps/Route120/scripts.pory"
	delay 40
# 217 "data/maps/Route120/scripts.pory"
	waitmoncry
# 218 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 219 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 220 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 221 "data/maps/Route120/scripts.pory"
	dowildbattle
# 222 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 223 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 224 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 225 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 226 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 227 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 228 "data/maps/Route120/scripts.pory"
	end
# 229 "data/maps/Route120/scripts.pory"

# 230 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 231 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 232 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 233 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 234 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 235 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 236 "data/maps/Route120/scripts.pory"
	end
# 237 "data/maps/Route120/scripts.pory"

# 238 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 239 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 240 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 241 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 243 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 244 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 245 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 246 "data/maps/Route120/scripts.pory"
	closemessage
# 247 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 248 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route120/scripts.pory"
	delay 50
# 250 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 251 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 252 "data/maps/Route120/scripts.pory"
	delay 15
# 253 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 254 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 255 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 256 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 257 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 258 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 259 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 260 "data/maps/Route120/scripts.pory"
	release
# 261 "data/maps/Route120/scripts.pory"
	end
# 262 "data/maps/Route120/scripts.pory"

# 263 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 264 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 265 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route120/scripts.pory"
	return
# 267 "data/maps/Route120/scripts.pory"

# 268 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonEast::
# 269 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonEast
# 270 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route120/scripts.pory"
	return
# 272 "data/maps/Route120/scripts.pory"

# 273 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonEast:
# 274 "data/maps/Route120/scripts.pory"
	face_down
# 275 "data/maps/Route120/scripts.pory"
	step_end
# 276 "data/maps/Route120/scripts.pory"

# 277 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 278 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 279 "data/maps/Route120/scripts.pory"
	end
# 280 "data/maps/Route120/scripts.pory"

# 281 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 282 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 283 "data/maps/Route120/scripts.pory"
	end
# 284 "data/maps/Route120/scripts.pory"

# 285 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 286 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 287 "data/maps/Route120/scripts.pory"
	end
# 288 "data/maps/Route120/scripts.pory"

# 289 "data/maps/Route120/scripts.pory"
Route120_EventScript_ColinAngelica::
# 290 "data/maps/Route120/scripts.pory"
lockall
# 291 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_COLIN
# 292 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 293 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 294 "data/maps/Route120/scripts.pory"
waitmovement 0
# 295 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 296 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 297 "data/maps/Route120/scripts.pory"
waitmovement 0
# 298 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ColinIntro MSGBOX_AUTOCLOSE
# 299 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_ANGELICA
# 300 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 301 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 302 "data/maps/Route120/scripts.pory"
waitmovement 0
# 303 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 304 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 305 "data/maps/Route120/scripts.pory"
waitmovement 0
# 306 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_AngelicaIntro, MSGBOX_AUTOCLOSE
# 307 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ColinAngelicaDoMultiBattle
# 308 "data/maps/Route120/scripts.pory"
releaseall
# 309 "data/maps/Route120/scripts.pory"
end
# 310 "data/maps/Route120/scripts.pory"

# 311 "data/maps/Route120/scripts.pory"
Route120_EventScript_ColinAngelicaDoMultiBattle::
# 312 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 313 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_COLIN, Route120_Text_ColinDefeat, TRAINER_ANGELICA, Route120_Text_AngelicaDefeat, PARTNER_EMMIE
# 314 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 315 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ColinAngelicaVictory
# 316 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 317 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 318 "data/maps/Route120/scripts.pory"
waitstate
# 319 "data/maps/Route120/scripts.pory"

# 320 "data/maps/Route120/scripts.pory"
Route120_EventScript_ColinAngelicaVictory::
# 321 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 322 "data/maps/Route120/scripts.pory"
waitmovement 0
# 323 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 324 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 325 "data/maps/Route120/scripts.pory"
waitmovement 0
# 326 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 327 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 328 "data/maps/Route120/scripts.pory"
end
# 329 "data/maps/Route120/scripts.pory"

# 330 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 331 "data/maps/Route120/scripts.pory"
	faceplayer
# 332 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 333 "data/maps/Route120/scripts.pory"
	end
# 334 "data/maps/Route120/scripts.pory"

# 335 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobert::
# 336 "data/maps/Route120/scripts.pory"
lockall
# 337 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CLARISSA
# 338 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 339 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 340 "data/maps/Route120/scripts.pory"
waitmovement 0
# 341 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 342 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 343 "data/maps/Route120/scripts.pory"
waitmovement 0
# 344 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ClarissaIntro MSGBOX_AUTOCLOSE
# 345 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_ROBERT
# 346 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 347 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 348 "data/maps/Route120/scripts.pory"
waitmovement 0
# 349 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 350 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 351 "data/maps/Route120/scripts.pory"
waitmovement 0
# 352 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RobertIntro, MSGBOX_AUTOCLOSE
# 353 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ClarissaRobertDoMultiBattle
# 354 "data/maps/Route120/scripts.pory"
releaseall
# 355 "data/maps/Route120/scripts.pory"
end
# 356 "data/maps/Route120/scripts.pory"

# 357 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobertDoMultiBattle::
# 358 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 359 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_CLARISSA, Route120_Text_ClarissaDefeat, TRAINER_ROBERT_1, Route120_Text_RobertDefeat, PARTNER_EMMIE
# 360 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 361 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ClarissaRobertVictory
# 362 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 363 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 364 "data/maps/Route120/scripts.pory"
waitstate
# 365 "data/maps/Route120/scripts.pory"

# 366 "data/maps/Route120/scripts.pory"
Route120_EventScript_ClarissaRobertVictory::
# 367 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 368 "data/maps/Route120/scripts.pory"
waitmovement 0
# 369 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 371 "data/maps/Route120/scripts.pory"
waitmovement 0
# 372 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 374 "data/maps/Route120/scripts.pory"
end
# 375 "data/maps/Route120/scripts.pory"

# 376 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 377 "data/maps/Route120/scripts.pory"
	faceplayer
# 378 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 379 "data/maps/Route120/scripts.pory"
	release
# 380 "data/maps/Route120/scripts.pory"
	end
# 381 "data/maps/Route120/scripts.pory"

# 382 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 383 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 384 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 385 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 386 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 387 "data/maps/Route120/scripts.pory"
	release
# 388 "data/maps/Route120/scripts.pory"
	end
# 389 "data/maps/Route120/scripts.pory"

# 390 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 391 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 392 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 393 "data/maps/Route120/scripts.pory"
	end
# 394 "data/maps/Route120/scripts.pory"

# 395 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzo::
# 396 "data/maps/Route120/scripts.pory"
lockall
# 397 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JENNA
# 398 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 399 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 400 "data/maps/Route120/scripts.pory"
waitmovement 0
# 401 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 402 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 403 "data/maps/Route120/scripts.pory"
waitmovement 0
# 404 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JennaIntro MSGBOX_AUTOCLOSE
# 405 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_LORENZO
# 406 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 407 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 408 "data/maps/Route120/scripts.pory"
waitmovement 0
# 409 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 410 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 411 "data/maps/Route120/scripts.pory"
waitmovement 0
# 412 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_LorenzoIntro, MSGBOX_AUTOCLOSE
# 413 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_JennaLorenzoDoMultiBattle
# 414 "data/maps/Route120/scripts.pory"
releaseall
# 415 "data/maps/Route120/scripts.pory"
end
# 416 "data/maps/Route120/scripts.pory"

# 417 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzoDoMultiBattle::
# 418 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 419 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_JENNA, Route120_Text_JennaDefeat, TRAINER_LORENZO, Route120_Text_LorenzoDefeat, PARTNER_EMMIE
# 420 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 421 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_JennaLorenzoVictory
# 422 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 423 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 424 "data/maps/Route120/scripts.pory"
waitstate
# 425 "data/maps/Route120/scripts.pory"

# 426 "data/maps/Route120/scripts.pory"
Route120_EventScript_JennaLorenzoVictory::
# 427 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 428 "data/maps/Route120/scripts.pory"
waitmovement 0
# 429 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 431 "data/maps/Route120/scripts.pory"
waitmovement 0
# 432 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 434 "data/maps/Route120/scripts.pory"
end
# 435 "data/maps/Route120/scripts.pory"

# 436 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 437 "data/maps/Route120/scripts.pory"
	faceplayer
# 438 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 439 "data/maps/Route120/scripts.pory"
	end
# 440 "data/maps/Route120/scripts.pory"

# 441 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 442 "data/maps/Route120/scripts.pory"
	faceplayer
# 443 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 444 "data/maps/Route120/scripts.pory"
	end
# 445 "data/maps/Route120/scripts.pory"

# 446 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffrey::
# 447 "data/maps/Route120/scripts.pory"
lockall
# 448 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CHIP
# 449 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 450 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 451 "data/maps/Route120/scripts.pory"
waitmovement 0
# 452 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 453 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 454 "data/maps/Route120/scripts.pory"
waitmovement 0
# 455 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ChipIntro MSGBOX_AUTOCLOSE
# 456 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JEFFREY
# 457 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 458 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 459 "data/maps/Route120/scripts.pory"
waitmovement 0
# 460 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 461 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 462 "data/maps/Route120/scripts.pory"
waitmovement 0
# 463 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JeffreyIntro, MSGBOX_AUTOCLOSE
# 464 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_ChipJeffreyDoMultiBattle
# 465 "data/maps/Route120/scripts.pory"
releaseall
# 466 "data/maps/Route120/scripts.pory"
end
# 467 "data/maps/Route120/scripts.pory"

# 468 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffreyDoMultiBattle::
# 469 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 470 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_CHIP, Route120_Text_ChipDefeat, TRAINER_JEFFREY_1, Route120_Text_JeffreyDefeat, PARTNER_EMMIE
# 471 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 472 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_ChipJeffreyVictory
# 473 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 474 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 475 "data/maps/Route120/scripts.pory"
waitstate
# 476 "data/maps/Route120/scripts.pory"

# 477 "data/maps/Route120/scripts.pory"
Route120_EventScript_ChipJeffreyVictory::
# 478 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 479 "data/maps/Route120/scripts.pory"
waitmovement 0
# 480 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 481 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 482 "data/maps/Route120/scripts.pory"
waitmovement 0
# 483 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JeffreyPostBattle, MSGBOX_AUTOCLOSE
# 484 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 485 "data/maps/Route120/scripts.pory"
end
# 486 "data/maps/Route120/scripts.pory"

# 487 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 488 "data/maps/Route120/scripts.pory"
	faceplayer
# 489 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 490 "data/maps/Route120/scripts.pory"
	release
# 491 "data/maps/Route120/scripts.pory"
	end
# 492 "data/maps/Route120/scripts.pory"

# 493 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 494 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 495 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 496 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 497 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 498 "data/maps/Route120/scripts.pory"
	release
# 499 "data/maps/Route120/scripts.pory"
	end
# 500 "data/maps/Route120/scripts.pory"

# 501 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 502 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 503 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 504 "data/maps/Route120/scripts.pory"
	end
# 505 "data/maps/Route120/scripts.pory"

# 506 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 507 "data/maps/Route120/scripts.pory"
	faceplayer
# 508 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/Route120/scripts.pory"
	end
# 510 "data/maps/Route120/scripts.pory"

# 511 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 512 "data/maps/Route120/scripts.pory"
	faceplayer
# 513 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 514 "data/maps/Route120/scripts.pory"
	end
# 515 "data/maps/Route120/scripts.pory"

# 516 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 517 "data/maps/Route120/scripts.pory"
	faceplayer
# 518 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 519 "data/maps/Route120/scripts.pory"
	end
# 520 "data/maps/Route120/scripts.pory"

# 521 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 522 "data/maps/Route120/scripts.pory"
	faceplayer
# 523 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 524 "data/maps/Route120/scripts.pory"
	end
# 525 "data/maps/Route120/scripts.pory"

# 526 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRiley::
# 527 "data/maps/Route120/scripts.pory"
lockall
# 528 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_KEIGO
# 529 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 530 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 531 "data/maps/Route120/scripts.pory"
waitmovement 0
# 532 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 533 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 534 "data/maps/Route120/scripts.pory"
waitmovement 0
# 535 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_KeigoIntro MSGBOX_AUTOCLOSE
# 536 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_RILEY
# 537 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 538 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 539 "data/maps/Route120/scripts.pory"
waitmovement 0
# 540 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 541 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 542 "data/maps/Route120/scripts.pory"
waitmovement 0
# 543 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RileyIntro, MSGBOX_AUTOCLOSE
# 544 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_KeigoRileyDoMultiBattle
# 545 "data/maps/Route120/scripts.pory"
releaseall
# 546 "data/maps/Route120/scripts.pory"
end
# 547 "data/maps/Route120/scripts.pory"

# 548 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRileyDoMultiBattle::
# 549 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 550 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_KEIGO, Route120_Text_KeigoDefeat, TRAINER_RILEY, Route120_Text_RileyDefeat, PARTNER_EMMIE
# 551 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 552 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_KeigoRileyVictory
# 553 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 554 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 555 "data/maps/Route120/scripts.pory"
waitstate
# 556 "data/maps/Route120/scripts.pory"

# 557 "data/maps/Route120/scripts.pory"
Route120_EventScript_KeigoRileyVictory::
# 558 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 559 "data/maps/Route120/scripts.pory"
waitmovement 0
# 560 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 561 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 562 "data/maps/Route120/scripts.pory"
waitmovement 0
# 563 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 564 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 565 "data/maps/Route120/scripts.pory"
end
# 566 "data/maps/Route120/scripts.pory"

# 567 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 568 "data/maps/Route120/scripts.pory"
	faceplayer
# 569 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 570 "data/maps/Route120/scripts.pory"
	end
# 571 "data/maps/Route120/scripts.pory"

# 572 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 573 "data/maps/Route120/scripts.pory"
	faceplayer
# 574 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 575 "data/maps/Route120/scripts.pory"
	end
# 576 "data/maps/Route120/scripts.pory"

# 577 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 578 "data/maps/Route120/scripts.pory"
	faceplayer
# 579 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 580 "data/maps/Route120/scripts.pory"
	end
# 581 "data/maps/Route120/scripts.pory"

# 582 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallie::
# 583 "data/maps/Route120/scripts.pory"
lockall
# 584 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_JENNIFER
# 585 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 586 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 587 "data/maps/Route120/scripts.pory"
waitmovement 0
# 588 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 589 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 590 "data/maps/Route120/scripts.pory"
waitmovement 0
# 591 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JenniferIntro MSGBOX_AUTOCLOSE
# 592 "data/maps/Route120/scripts.pory"
setvar VAR_0x8008, LOCALID_CALLIE
# 593 "data/maps/Route120/scripts.pory"
playse SE_PIN
# 594 "data/maps/Route120/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 595 "data/maps/Route120/scripts.pory"
waitmovement 0
# 596 "data/maps/Route120/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 597 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 598 "data/maps/Route120/scripts.pory"
waitmovement 0
# 599 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_CallieIntro, MSGBOX_AUTOCLOSE
# 600 "data/maps/Route120/scripts.pory"
goto Route120_EventScript_JenniferCallieDoMultiBattle
# 601 "data/maps/Route120/scripts.pory"
releaseall
# 602 "data/maps/Route120/scripts.pory"
end
# 603 "data/maps/Route120/scripts.pory"

# 604 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallieDoMultiBattle::
# 605 "data/maps/Route120/scripts.pory"
playbgm MUS_ROUTE120, TRUE
# 606 "data/maps/Route120/scripts.pory"
multi_2p_vs_2 TRAINER_JENNIFER, Route120_Text_JenniferDefeat, TRAINER_CALLIE, Route120_Text_CallieDefeat, PARTNER_EMMIE
# 607 "data/maps/Route120/scripts.pory"
switch VAR_RESULT
# 608 "data/maps/Route120/scripts.pory"
case 1, Route120_EventScript_JenniferCallieVictory
# 609 "data/maps/Route120/scripts.pory"
fadescreen FADE_TO_BLACK
# 610 "data/maps/Route120/scripts.pory"
special SetCB2WhiteOut
# 611 "data/maps/Route120/scripts.pory"
waitstate
# 612 "data/maps/Route120/scripts.pory"

# 613 "data/maps/Route120/scripts.pory"
Route120_EventScript_JenniferCallieVictory::
# 614 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 615 "data/maps/Route120/scripts.pory"
waitmovement 0
# 616 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 617 "data/maps/Route120/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 618 "data/maps/Route120/scripts.pory"
waitmovement 0
# 619 "data/maps/Route120/scripts.pory"
msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 620 "data/maps/Route120/scripts.pory"
addvar VAR_ROUTE120_STATE, 1
# 621 "data/maps/Route120/scripts.pory"
end
# 622 "data/maps/Route120/scripts.pory"

# 623 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 624 "data/maps/Route120/scripts.pory"
	faceplayer
# 625 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 626 "data/maps/Route120/scripts.pory"
	end
# 627 "data/maps/Route120/scripts.pory"

# 628 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 629 "data/maps/Route120/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\n"
# 630 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 631 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 632 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 633 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 634 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 635 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 636 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 637 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 638 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your POKéMON ready for\n"
# 639 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 640 "data/maps/Route120/scripts.pory"

# 641 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 642 "data/maps/Route120/scripts.pory"
	.string "STEVEN: No?\p"
# 643 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 644 "data/maps/Route120/scripts.pory"

# 645 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 646 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your POKéMON\n"
# 647 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 648 "data/maps/Route120/scripts.pory"

# 649 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 650 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\n"
# 651 "data/maps/Route120/scripts.pory"
	.string "power as a TRAINER!$"
# 652 "data/maps/Route120/scripts.pory"

# 653 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 654 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
# 655 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 656 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 657 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 658 "data/maps/Route120/scripts.pory"

# 659 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 660 "data/maps/Route120/scripts.pory"
	.string "STEVEN: I see…\n"
# 661 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 662 "data/maps/Route120/scripts.pory"
	.string "Your POKéMON have obviously grown\n"
# 663 "data/maps/Route120/scripts.pory"
	.string "since I first met you in DEWFORD.\p"
# 664 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 665 "data/maps/Route120/scripts.pory"
	.string "DEVON SCOPE.\p"
# 666 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 667 "data/maps/Route120/scripts.pory"
	.string "concealed POKéMON.$"
# 668 "data/maps/Route120/scripts.pory"

# 669 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 670 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\p"
# 671 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing POKéMON and TRAINERS\n"
# 672 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 673 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 674 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 675 "data/maps/Route120/scripts.pory"

# 676 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 677 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 678 "data/maps/Route120/scripts.pory"

# 679 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 680 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 681 "data/maps/Route120/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 682 "data/maps/Route120/scripts.pory"

# 683 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 684 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 685 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 686 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 687 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 688 "data/maps/Route120/scripts.pory"

# 689 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 690 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
# 691 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} FORTREE CITY$"
# 692 "data/maps/Route120/scripts.pory"

# 693 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 694 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
# 695 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 120$"

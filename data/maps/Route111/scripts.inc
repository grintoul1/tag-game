.set LOCALID_VICTOR, 1
.set LOCALID_VICTORIA, 2
.set LOCALID_VIVI, 3
.set LOCALID_VICKY, 4
.set LOCALID_IRENE, 21
.set LOCALID_TRAVIS, 22
.set LOCALID_TYRON, 27
.set LOCALID_CELINA, 28
.set LOCALID_BIANCA, 29
.set LOCALID_HAYDEN, 30
.set LOCALID_CELIA, 32
.set LOCALID_BRYAN, 31
.set LOCALID_BRANDEN, 33
.set LOCALID_DUSTY, 10
.set LOCALID_BEAU, 11
.set LOCALID_HEIDI, 5
.set LOCALID_BECKY, 12
.set LOCALID_DREW, 9
.set LOCALID_WILTON, 24
.set LOCALID_BROOKE, 23
.set LOCALID_ROCK_SMASH_MAN, 38

@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h

Route111_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
	.byte 0

Route111_OnLoad:
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
	end

Route111_EventScript_CloseDesertRuins::
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
	return

@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
Route111_EventScript_ShowTemporaryMirageTower::
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
	return

Route111_OnTransition:
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
	special SetMirageTowerVisibility
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
	call Route111_EventScript_CheckSetSandstorm
	call GabbyAndTy_EventScript_UpdateLocation
	end

Route111_EventScript_SetFallingPlayerGfx::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
	return

Route111_EventScript_SetFallingPlayerGfxMale::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

Route111_EventScript_SetFallingPlayerGfxFemale::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

Route111_EventScript_CheckSetSandstorm::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
Route111_EventScript_SetSandstorm::
	setweather WEATHER_SANDSTORM
Route111_EventScript_EndCheckSetSandstorm::
	return

Route111_EventScript_SetWinstratesNotDefeated::
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VITO_WINSTRATE
	cleartrainerflag TRAINER_VICTOR
	cleartrainerflag TRAINER_VICTORIA
	cleartrainerflag TRAINER_VIVI
	end

Route111_EventScript_SetLayoutNoMirageTower::
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
	return

Route111_EventScript_SetMirageTowerGone::
	setvar VAR_MIRAGE_TOWER_STATE, 3
	return

Route111_OnWarp:
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
	.2byte 0

Route111_EventScript_HidePlayerForMirageTower::
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
	end

Route111_OnFrame:
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
	.2byte 0

Route111_EventScript_MirageTowerDisappear::
	lockall
	special StartMirageTowerShake
	waitstate
	delay 24
	playse SE_FALL
	addobject LOCALID_ROUTE111_PLAYER_FALLING
	special StartPlayerDescendMirageTower
	waitstate
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
	delay 16
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 16
	special StartMirageTowerDisintegration
	waitstate
	special StartMirageTowerFossilFallAndSink
	waitstate
	setvar VAR_MIRAGE_TOWER_STATE, 2
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
	releaseall
	end

Route111_EventScript_RootFossilDisappeared::
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
	releaseall
	end

@ Unused
Route111_Movement_PlayerFall::
	lock_anim
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Route111_EventScript_Girl::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
	giveitem ITEM_RAZZ_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
	special GetPlayerBigGuyGirlString
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_ReceivedBerry::
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
	release
	end

@ Unused
Route111_EventScript_ViciousSandstormTriggerUp::
	lockall
	setvar VAR_0x8004, 0
	goto Route111_EventScript_ViciousSandstormTrigger
	end

Route111_EventScript_ViciousSandstormTriggerDown::
	lockall
	setvar VAR_0x8004, 1
	goto Route111_EventScript_ViciousSandstormTrigger
	end

Route111_EventScript_ViciousSandstormTriggerLeft::
	lockall
	setvar VAR_0x8004, 2
	goto Route111_EventScript_ViciousSandstormTrigger
	end

@ Unused
Route111_EventScript_ViciousSandstormTriggerRight::
	lockall
	setvar VAR_0x8004, 3
	goto Route111_EventScript_ViciousSandstormTrigger
	end

Route111_EventScript_ViciousSandstormTrigger::
	checkitem ITEM_GO_GOGGLES
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
	setvar VAR_TEMP_3, 1
	releaseall
	end

Route111_EventScript_PreventRouteAccess::
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
	releaseall
	end

Route111_EventScript_PushUpFromRoute::
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route111_Movement_PushUpFromRoute
	waitmovement 0
	return

Route111_EventScript_PushDownFromRoute::
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route111_Movement_PushDownFromRoute
	waitmovement 0
	return

Route111_EventScript_PushLeftFromRoute::
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route111_Movement_PushLeftFromRoute
	waitmovement 0
	return

Route111_EventScript_PushRightFromRoute::
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route111_Movement_PushRightFromRoute
	waitmovement 0
	return

Route111_Movement_PushUpFromRoute:
	walk_up
	step_end

Route111_Movement_PushDownFromRoute:
	walk_down
	step_end

Route111_Movement_PushLeftFromRoute:
	walk_left
	step_end

Route111_Movement_PushRightFromRoute:
	walk_right
	step_end

Route111_EventScript_SunTrigger::
	setweather WEATHER_SUNNY
	fadenewbgm MUS_ROUTE110
	doweather
	setvar VAR_TEMP_3, 0
	end

Route111_EventScript_SandstormTrigger::
	setweather WEATHER_SANDSTORM
	fadenewbgm MUS_DESERT
	doweather
	end

Route111_EventScript_Victor::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE02_GET, Route111_EventScript_WinstratesNotReady
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_WinstratesNotReady::
	msgbox Route111_Text_WinstratesNotReady, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_BattleWinstrates::
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_MakeSpaceForWinstrates
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	call_if_eq VAR_TEMP_3, 13, Route111_EventScript_EmmieMakeSpaceForWinstrates1
	call_if_eq VAR_TEMP_3, 14, Route111_EventScript_EmmieMakeSpaceForWinstrates2
	call_if_eq VAR_TEMP_3, 12, Route111_EventScript_EmmieMakeSpaceForWinstrates2
	applymovement LOCALID_VICTOR, Route111_Movement_Winstrate1_StartBattle
	waitmovement 0
	call Route111_EventScript_OpenWinstrateDoor
	addobject LOCALID_VICTORIA
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
	waitmovement 0
	applymovement LOCALID_VICTORIA, Route111_Movement_Winstrate2_StartBattle
	waitmovement 0
	call Route111_EventScript_CloseWinstrateDoor
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
	multi_2p_vs_2 TRAINER_VICTOR, Route111_Text_VictorDefeat, TRAINER_VICTORIA, Route111_Text_VictoriaDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, Route111_EventScript_VictorVictoriaVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Route111_EventScript_EmmieMakeSpaceForWinstrates1::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route111_Movement_EmmieMakeSpaceForWinstrates
	return

Route111_EventScript_EmmieMakeSpaceForWinstrates2::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route111_Movement_MakeSpaceForWinstrates
	return

Route111_Movement_EmmieMakeSpaceForWinstrates:
	walk_down
	walk_right
	walk_in_place_faster_up
	step_end

Route111_Movement_VictorMoveForVivi:
	walk_right
	walk_in_place_faster_down
	step_end

Route111_Movement_VictoriaMoveForVicky:
	walk_left
	walk_in_place_faster_down
	step_end

Route111_EventScript_VictorVictoriaVictory::
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox Route111_Text_VictorPostBattle, MSGBOX_AUTOCLOSE
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_AUTOCLOSE
	closemessage
	applymovement LOCALID_VICTOR, Route111_Movement_VictorMoveForVivi
	applymovement LOCALID_VICTORIA, Route111_Movement_VictoriaMoveForVicky
	waitmovement 0
	call Route111_EventScript_OpenWinstrateDoor
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject LOCALID_VIVI
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
	waitmovement 0
	applymovement LOCALID_VIVI, Route111_Movement_Winstrate1_StartBattle
	waitmovement 0
	addobject LOCALID_VICKY
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
	waitmovement 0
	applymovement LOCALID_VICKY, Route111_Movement_Winstrate2_StartBattle
	waitmovement 0
	call Route111_EventScript_CloseWinstrateDoor
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
	multi_2p_vs_2 TRAINER_VIVI, Route111_Text_ViviDefeat, TRAINER_VICKY, Route111_Text_VickyDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, Route111_EventScript_ViviVickyVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

	Route111_EventScript_ViviVickyVictory::
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox Route111_Text_VickyCallVito, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	call Route111_EventScript_OpenWinstrateDoor
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject LOCALID_ROUTE111_VITO
	applymovement LOCALID_ROUTE111_VITO, Route111_Movement_VitoExitHouse
	waitmovement 0
	call Route111_EventScript_CloseWinstrateDoor
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, FALSE
	applymovement LOCALID_ROUTE111_VITO, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route111_Text_VitoIntro, MSGBOX_DEFAULT
	playbgm MUS_ROUTE110, FALSE
	multi_2p_vs_1 TRAINER_VITO_ROUTE111, Route111_Text_VitoDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, Route111_EventScript_VitoVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Route111_EventScript_VitoVictory::
	msgbox Route111_Text_VitoPostBattle, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ROUTE111_VITO
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 20
	call Route111_EventScript_OpenWinstrateDoor
	waitmovement 0
	applymovement LOCALID_VICKY, Route111_Movement_Winstrate2_EndBattle
	waitmovement 0
	removeobject LOCALID_VICKY
	applymovement LOCALID_VIVI, Route111_Movement_Winstrate1_EndBattle
	waitmovement 0
	removeobject LOCALID_VIVI
	applymovement LOCALID_VICTORIA, Route111_Movement_Winstrate4_EndBattle
	waitmovement 0
	removeobject LOCALID_VICTORIA
	applymovement LOCALID_VICTOR, Route111_Movement_Winstrate3_EndBattle
	waitmovement 0
	removeobject LOCALID_VICTOR
	call Route111_EventScript_CloseWinstrateDoor
	setflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VITO_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_AQUA_2
	setvar VAR_PARTNER_EMMIE_STATE, 21
	release
	end

Route111_EventScript_OpenWinstrateDoor::
	opendoor 13, 113
	waitdooranim
	return

Route111_EventScript_CloseWinstrateDoor::
	closedoor 13, 113
	waitdooranim
	return

Route111_Movement_WinstrateEnterHouse:
	walk_in_place_faster_up
	walk_up
	step_end

Route111_Movement_MakeSpaceForWinstrates:
	walk_down
	walk_down
	walk_in_place_faster_up
	step_end

Route111_Movement_Winstrate1_StartBattle:
	walk_down
	walk_right
	walk_in_place_faster_down
	step_end

Route111_Movement_Winstrate2_StartBattle:
	walk_down
	walk_left
	walk_in_place_faster_down
	step_end

Route111_Movement_Winstrate1_EndBattle:
	walk_left
	walk_up
	walk_up
	step_end

Route111_Movement_Winstrate2_EndBattle:
	walk_right
	walk_up
	walk_up
	step_end

Route111_Movement_Winstrate3_EndBattle:
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

Route111_Movement_Winstrate4_EndBattle:
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

Route111_Movement_WinstrateExitHouse:
	walk_down
	step_end

Route111_Movement_VitoExitHouse:
	walk_down
	walk_down
	walk_down
	step_end

Route111_Movement_WaitForNextWinstrate:
	delay_16
	delay_16
	delay_16
	step_end

Route111_EventScript_RouteSignMauville::
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
	end

Route111_EventScript_WinstrateHouseSign::
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
	end

Route111_EventScript_RouteSign112::
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
	end

Route111_EventScript_RouteSign113::
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
	end

Route111_EventScript_OldLadysRestStopSign::
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
	end

Route111_EventScript_TrainerTipsSpAtkSpDef::
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
	end

Route111_EventScript_Man1::
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
	end

Route111_EventScript_Man2::
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
	end

Route111_EventScript_Hiker::
	lock
	faceplayer
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_HikerMirageTowerGone::
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_HikerMirageTowerDisintegrated::
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_HikerMirageTowerVisible::
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_RockSmashTipFatMan::
	lockall
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

Route111_EventScript_Drew::
	faceplayer
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Heidi::
	faceplayer
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_BeauHeidi::
lockall
setvar VAR_0x8008, LOCALID_BEAU
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MALE, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_BeauIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_HEIDI
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_GIRL, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_HeidiIntro, MSGBOX_AUTOCLOSE
goto Route111_EventScript_BeauHeidiDoMultiBattle
releaseall
end

Route111_EventScript_BeauHeidiDoMultiBattle::
playbgm MUS_DESERT, TRUE
multi_2p_vs_2 TRAINER_BEAU, Route111_Text_BeauDefeat, TRAINER_HEIDI, Route111_Text_HeidiDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route111_EventScript_BeauHeidiVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route111_EventScript_BeauHeidiVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE111_STATE, 1
end

Route111_EventScript_Beau::
	faceplayer
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_BeckyDrew::
lockall
setvar VAR_0x8008, LOCALID_BECKY
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_GIRL, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route111_Text_BeckyIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_DREW
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MALE, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route111_Text_DrewIntro, MSGBOX_AUTOCLOSE
goto Route111_EventScript_BeckyDrewDoMultiBattle
releaseall
end

Route111_EventScript_BeckyDrewDoMultiBattle::
playbgm MUS_DESERT, TRUE
multi_2p_vs_2 TRAINER_BECKY, Route111_Text_BeckyDefeat, TRAINER_DREW, Route111_Text_DrewDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route111_EventScript_BeckyDrewVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route111_EventScript_BeckyDrewVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE111_STATE, 1
end

Route111_EventScript_Becky::
	faceplayer
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Dusty::
	faceplayer
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_RegisterDusty::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DUSTY_1
	release
	end

Route111_EventScript_RematchDusty::
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_TravisIrene::
lockall
setvar VAR_0x8008, LOCALID_TRAVIS
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MALE, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_TravisIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_IRENE
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_GIRL, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_IreneIntro, MSGBOX_AUTOCLOSE
goto Route111_EventScript_TravisIreneDoMultiBattle
releaseall
end

Route111_EventScript_TravisIreneDoMultiBattle::
playbgm MUS_ROUTE110, TRUE
multi_2p_vs_2 TRAINER_TRAVIS, Route111_Text_TravisDefeat, TRAINER_IRENE, Route111_Text_IreneDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route111_EventScript_TravisIreneVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route111_EventScript_TravisIreneVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE111_STATE, 1
end

Route111_EventScript_Travis::
	faceplayer
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Irene::
	faceplayer
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Daisuke::
	faceplayer
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_WiltonBrooke::
lockall
setvar VAR_0x8008, LOCALID_WILTON
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_COOL, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_WiltonIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_BROOKE
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_COOL, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_BrookeIntro, MSGBOX_AUTOCLOSE
goto Route111_EventScript_WiltonBrookeDoMultiBattle
releaseall
end

Route111_EventScript_WiltonBrookeDoMultiBattle::
playbgm MUS_ROUTE110, TRUE
multi_2p_vs_2 TRAINER_WILTON_1, Route111_Text_WiltonDefeat, TRAINER_BROOKE_1, Route111_Text_BrookeDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route111_EventScript_WiltonBrookeVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route111_EventScript_WiltonBrookeVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_WiltonPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_BrookePostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE111_STATE, 1
end

Route111_EventScript_Wilton::
	faceplayer
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_RegisterWilton::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_WILTON_1
	release
	end

Route111_EventScript_RematchWilton::
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Brooke::
	faceplayer
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_RegisterBrooke::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BROOKE_1
	release
	end

Route111_EventScript_RematchBrooke::
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_HaydenBianca::
lockall
setvar VAR_0x8008, LOCALID_HAYDEN
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_INTENSE, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_HaydenIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_BIANCA
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_GIRL, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_BiancaIntro, MSGBOX_AUTOCLOSE
goto Route111_EventScript_HaydenBiancaDoMultiBattle
releaseall
end

Route111_EventScript_HaydenBiancaDoMultiBattle::
playbgm MUS_ROUTE110, TRUE
multi_2p_vs_2 TRAINER_HAYDEN, Route111_Text_HaydenDefeat, TRAINER_BIANCA, Route111_Text_BiancaDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route111_EventScript_HaydenBiancaVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route111_EventScript_HaydenBiancaVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE111_STATE, 1
end

Route111_EventScript_Hayden::
	faceplayer
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Bianca::
	faceplayer
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Tyron::
	faceplayer
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_CelinaTyron::
lockall
playse SE_PIN
applymovement LOCALID_CELINA, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_GIRL, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_CelinaIntro MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement LOCALID_TYRON, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MALE, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_TyronIntro, MSGBOX_AUTOCLOSE
goto Route111_EventScript_CelinaTyronDoMultiBattle
releaseall
end

Route111_EventScript_CelinaTyronDoMultiBattle::
playbgm MUS_ROUTE110, TRUE
multi_2p_vs_2 TRAINER_CELINA, Route111_Text_CelinaDefeat, TRAINER_TYRON, Route111_Text_TyronDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route111_EventScript_CelinaTyronVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route111_EventScript_CelinaTyronVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE111_STATE, 1
end

Route111_EventScript_Celina::
	faceplayer
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Celia::
	faceplayer
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_BryanDusty::
lockall
setvar VAR_0x8008, LOCALID_BRYAN
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_HIKER, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_BryanIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_DUSTY
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_HIKER, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_DustyIntro, MSGBOX_AUTOCLOSE
goto Route111_EventScript_BryanDustyDoMultiBattle
releaseall
end

Route111_EventScript_BryanDustyDoMultiBattle::
playbgm MUS_DESERT, TRUE
multi_2p_vs_2 TRAINER_BRYAN, Route111_Text_BryanDefeat, TRAINER_DUSTY_1, Route111_Text_DustyDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route111_EventScript_BryanDustyVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route111_EventScript_BryanDustyVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
waitmovement 0
msgbox Route111_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE111_STATE, 1
end

Route111_EventScript_Bryan::
	faceplayer
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_CeliaBranden::
lockall
setvar VAR_0x8008, LOCALID_CELIA
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_GIRL, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route111_Text_CeliaIntro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_BRANDEN
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MALE, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route111_Text_BrandenIntro, MSGBOX_AUTOCLOSE
goto Route111_EventScript_CeliaBrandenDoMultiBattle
releaseall
end

Route111_EventScript_CeliaBrandenDoMultiBattle::
playbgm MUS_DESERT, TRUE
multi_2p_vs_2 TRAINER_CELIA, Route111_Text_CeliaDefeat, TRAINER_BRANDEN, Route111_Text_BrandenDefeat, PARTNER_EMMIE
switch VAR_RESULT
case 1, Route111_EventScript_CeliaBrandenVictory
fadescreen FADE_TO_BLACK
special SetCB2WhiteOut
waitstate

Route111_EventScript_CeliaBrandenVictory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
waitmovement 0
msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
addvar VAR_ROUTE111_STATE, 1
end

Route111_EventScript_AquaGrunt1::
	msgbox Route111_Text_Aqua_1, MSGBOX_NPC
	end

Route111_EventScript_AquaGrunt2::
	msgbox Route111_Text_Aqua_2, MSGBOX_NPC
	end

Route111_EventScript_AquaGrunt3::
	msgbox Route111_Text_Aqua_3, MSGBOX_NPC
	end

Route111_EventScript_AquaGrunt4::
	msgbox Route111_Text_Aqua_4, MSGBOX_NPC
	end

Route111_EventScript_AquaGrunt5::
	msgbox Route111_Text_Aqua_5, MSGBOX_NPC
	end

Route111_EventScript_MagmaGrunt1::
	msgbox Route111_Text_Magma_1, MSGBOX_NPC
	end

Route111_EventScript_MagmaGrunt2::
	msgbox Route111_Text_Magma_2, MSGBOX_NPC
	end

Route111_EventScript_MagmaGrunt3::
	msgbox Route111_Text_Magma_3, MSGBOX_NPC
	end

Route111_EventScript_MagmaGrunt4::
	msgbox Route111_Text_Magma_4, MSGBOX_NPC
	end

Route111_EventScript_Branden::
	faceplayer
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_TrainerHillSign::
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
	end

Route111_Text_BattleOurFamily:
	.string "Hello! I take it you're a traveler.\p"
	.string "How's this? What do you say to taking\n"
	.string "on our family of four in a pair of\l"
	.string "POKéMON battles?$"

Route111_Text_IsThatSo:
	.string "Is that so?\n"
	.string "Drop in, if you change your mind!$"

Route111_Text_VictorIntro:
	.string "Victor: That's the spirit! I like you!$"

Route111_Text_VictorDefeat:
	.string "Aiyah!\n"
	.string "You're a lot tougher than I expected!$"

Route111_Text_VictorPostBattle:
	.string "Victor: Hey, all!\n"
	.string "I've found strong trainers!$"

Route111_Text_VictoriaIntro:
	.string "Victoria: Oh, my goodness!\n"
	.string "Aren't you young?$"

Route111_Text_VictoriaDefeat:
	.string "Oh, gosh!\n"
	.string "I can't get over how strong they are!$"

Route111_Text_VictoriaPostBattle:
	.string "Victoria: There are strong trainers\n"
	.string "here!$"

Route111_Text_ViviIntro:
	.string "Vivi: You're stronger than my parents?\p"
	.string "But I'm strong, too!\n"
	.string "Really! Honestly!$"

Route111_Text_VitoIntro:
	.string "Vito: Wow, this is the first time I've\n"
	.string "ever been called out!\p"
	.string "My name's Vito and I'm a cut above\n"
	.string "the rest of our family.\p"
	.string "Allow me to demonstrate what I mean!$"

Route111_Text_ViviDefeat:
	.string "Huh? Did I just lose?$"

Route111_Text_ViviPostBattle:
	.string "Vivi: This stinks…$"

Route111_Text_VickyIntro:
	.string "Vicky: Hohoho... So you defeated my\n"
	.string "daughter and her husband.\p"
	.string "No matter... You won't defeat\n"
	.string "both youth and experience!$"

Route111_Text_VickyDefeat:
	.string "Kwah! You are strong…\n"
	.string "My daughter was right…$"

Route111_Text_VitoDefeat:
	.string "I still have so much to\n"
	.string "learn…$"

Route111_Text_VickyPostBattle:
	.string "Vicky: Very impressive. However, the\n"
	.string "Winstrate family isn't beaten yet.$"

Route111_Text_VitoPostBattle:
	.string "Vito: The first time that I am\n"
	.string "called out and I lose…\p"
	.string "I suppose I have a lot of training\n"
	.string "still to complete.\p"
	.string "I'm going to travel around some more\n"
	.string "and grow in strength.\p"
	.string "Next time we meet you're going down!$"

Route111_Text_VickyCallVito:
	.string "Vicky: Vito, get out here!\n"
	.string "It's time to step up!$"

Route111_Text_ToughToKeepWinningUpTheRanks:
	.string "If you don't raise your POKéMON some\n"
	.string "more, it could be tough to keep winning\l"
	.string "up through the ranks.\p"
	.string "I've heard the POKéMON LEAGUE's\n"
	.string "ELITE FOUR are far stronger than\l"
	.string "any GYM LEADER.$"

Route111_Text_WinstrateFamilyDestroyedMe:
	.string "I challenged the WINSTRATE family,\n"
	.string "but four matches in a row is tough\l"
	.string "going… They destroyed me.$"

Route111_Text_RouteSignMauville:
	.string "ROUTE 111\n"
	.string "{DOWN_ARROW} MAUVILLE CITY$"

Route111_Text_WinstrateHouseSign:
	.string "“Our family's hearts beat as one!”\n"
	.string "THE WINSTRATE'S HOUSE$"

Route111_Text_RouteSign112:
	.string "ROUTE 111\n"
	.string "{LEFT_ARROW} ROUTE 112$"

Route111_Text_RouteSign113:
	.string "ROUTE 111\n"
	.string "{LEFT_ARROW} ROUTE 113$"

Route111_Text_OldLadysRestStopSign:
	.string "OLD LADY'S REST STOP\n"
	.string "“Come in and rest your tired bones.”$"

Route111_Text_TrainerTipsSpAtkSpDef:
	.string "TRAINER TIPS\p"
	.string "One of the indicators of a POKéMON's\n"
	.string "powerfulness is SP. ATK. It stands for\l"
	.string "“SPECIAL ATTACK.”\p"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
	.string "DEFENSE.”$"

Route111_Text_ShouldBeMirageTowerAroundHere:
	.string "There should be a tower made of sand\n"
	.string "around here somewhere.\p"
	.string "But for some reason, it can be seen\n"
	.string "sometimes, and sometimes not.\p"
	.string "That's why I call it the MIRAGE TOWER.$"

Route111_Text_MirageTowerClearlyVisible:
	.string "I see it!\n"
	.string "The tower of sand!\p"
	.string "The sand tower they called a mirage\n"
	.string "is clearly visible!\p"
	.string "But it looks so fragile…\n"
	.string "It could crumble away anytime…\p"
	.string "I want to go inside it, but I can't\n"
	.string "get my courage up for it…$"

Route111_Text_ThatWasShockingSandRainedDown:
	.string "Whoa…\n"
	.string "That was shocking.\p"
	.string "Sand rained down in chunks all of\n"
	.string "a sudden.\p"
	.string "What was it like inside?\n"
	.string "Were there sandy ghosts and such?$"

Route111_Text_MirageTowerHasntBeenSeenSince:
	.string "Since I spoke to you, the tower of sand\n"
	.string "hasn't been seen.\p"
	.string "Perhaps it really was\n"
	.string "the MIRAGE TOWER…$"

Route111_Text_ClawFossilDisappeared:
	.string "The CLAW FOSSIL disappeared into\n"
	.string "the sand…$"

Route111_Text_RootFossilDisappeared:
	.string "The ROOT FOSSIL disappeared into\n"
	.string "the sand…$"

Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
	.string "Oh, no!\p"
	.string "My uncle in MAUVILLE told me to take\n"
	.string "ROCK SMASH with me if I was going to\l"
	.string "ROUTE 111!\p"
	.string "My uncle? He lives across from\n"
	.string "the bike shop in MAUVILLE.$"

Route111_Text_TrainerHillSign:
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
	.string "“Scale the heights, you hot-blooded\n"
	.string "TRAINERS!”$"

Route111_Text_WinstratesNotReady:
	.string "Hey, kids! How many badges do you\n"
	.string "have?\p"
	.string "Sorry, my family doesn't challenge\n"
	.string "trainers with fewer than four badges!$"

Route111_Text_Aqua_1:
	.string "Beat it kids!$"

Route111_Text_Aqua_2:
	.string "Nobody is getting past us!$"

Route111_Text_Aqua_3:
	.string "Shelly gave us strict orders to let\n"
	.string "nobody through here!$"

Route111_Text_Aqua_4:
	.string "By order of Team Aqua, nobody is allowed\n"
	.string "near Mt. Chimney!$"

Route111_Text_Aqua_5:
	.string "Team Magma's Tabitha just came through\n"
	.string "here and trounced us!\p"
	.string "He was making his way up to Mt. Chimney.$"

Route111_Text_Magma_1:
	.string "Beat it kids!$"

Route111_Text_Magma_2:
	.string "Nobody is getting past us!$"

Route111_Text_Magma_3:
	.string "Tabitha gave us strict orders to let\n"
	.string "nobody through here!$"

Route111_Text_Magma_4:
	.string "By order of Team Magma, nobody is allowed\n"
	.string "near Mt. Chimney!$"

.set LOCALID_KYOGRE, 1
.set LOCALID_ARCHIE, 2
.set LOCALID_MAXIE, 3
.set LOCALID_GRUNT_1, 4
.set LOCALID_GRUNT_2, 5
.set LOCALID_KYOGRE_SLEEPING, 7
.set LOCALID_MATT, 9
.set LOCALID_SHELLY, 8

SeafloorCavern_Room9_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SeafloorCavern_Room9_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, SeafloorCavern_Room9_OnTransition
	.byte 0

SeafloorCavern_Room9_EventScript_ArchiePos::
	setobjectxyperm LOCALID_ARCHIE, 11, 28
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_RIGHT
	showobjectat LOCALID_ARCHIE, MAP_SEAFLOOR_CAVERN_ROOM9
	return

SeafloorCavern_Room9_EventScript_ShellyMattPos::
	setobjectxyperm LOCALID_SHELLY, 12, 28
	setobjectxyperm LOCALID_MATT, 11, 28
	setobjectxyperm LOCALID_KYOGRE, 17, 40
	showobjectat LOCALID_KYOGRE, MAP_SEAFLOOR_CAVERN_ROOM9
	setobjectmovementtype LOCALID_SHELLY, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_MATT, MOVEMENT_TYPE_FACE_UP
	return

SeafloorCavern_Room9_OnTransition:
	call_if_eq VAR_SEAFLOOR_CAVERN_STATE, 3, SeafloorCavern_Room9_EventScript_ClearFog
	end

SeafloorCavern_Room9_OnWarp:
	map_script_2 VAR_SEAFLOOR_CAVERN_STATE, 2, SeafloorCavern_Room9_EventScript_ArchiePos
	map_script_2 VAR_SEAFLOOR_CAVERN_STATE, 3, SeafloorCavern_Room9_EventScript_ShellyMattPos
	.2byte 0

SeafloorCavern_Room9_EventScript_ClearFog::
	setweather WEATHER_NONE
	doweather
	return

SeafloorCavern_Room9_EventScript_ShellyMatt::
	lockall
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	applymovement LOCALID_MATT, Common_Movement_FaceUp
	applymovement LOCALID_SHELLY, Common_Movement_FaceUp
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerApproach1
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproach1
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieYouAgain, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MATT, Common_Movement_FaceRight
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_ARCHIE, Common_Movement_FaceRight
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ShellyWeWillStall, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_SHELLY, SeafloorCavern_Room9_Movement_ShellyApproach1
	applymovement LOCALID_ARCHIE, SeafloorCavern_Room9_Movement_ArchieApproachKyogre1
	waitmovement 0
	removeobject LOCALID_ARCHIE
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ShellyThisHasToHappen, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MATT, Common_Movement_WalkSlowDown
	applymovement LOCALID_SHELLY, Common_Movement_WalkSlowDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkSlowDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkSlowDown
	waitmovement 0
	delay 8
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SeafloorCavern_Room9_Movement_PanToAction
	waitmovement 0
	special RemoveCameraObject
	delay 30
	setobjectxyperm LOCALID_MATT, 11, 28
	setobjectxyperm LOCALID_ARCHIE, 9, 42
	setobjectmovementtype LOCALID_MATT, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_SHELLY, MOVEMENT_TYPE_FACE_DOWN
	addobject LOCALID_ARCHIE
	applymovement LOCALID_ARCHIE, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
	waitmovement 0 
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
	closemessage
	setweather WEATHER_NONE
	doweather
	special WaitWeather
	waitstate
	setvar VAR_RESULT, 1
	playse SE_M_DETECT
	dofieldeffectsparkle 17, 42, 0
	waitfieldeffect FLDEFF_SPARKLE
	closemessage
	setvar VAR_RESULT, 4
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	delay 150
	removeobject LOCALID_KYOGRE_SLEEPING
	addobject LOCALID_KYOGRE
	waitstate
	delay 60
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
	waitmovement 0
	special FadeOutOrbEffect
	waitstate
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	setobjectxyperm LOCALID_KYOGRE, 17, 40
	setobjectxyperm LOCALID_ARCHIE, 17, 42
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_UP
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SeafloorCavern_Room9_Movement_ReturnFromAction
	waitmovement 0
	special RemoveCameraObject
	delay 30
	applymovement LOCALID_MATT, Common_Movement_FaceUp
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ShellyItIsDone, MSGBOX_DEFAULT
	closemessage
	playse SE_NOT_EFFECTIVE
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_KnockedUp
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_KnockedUp
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MattNotGettingOffLightly, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MATT, Common_Movement_WalkSlowUp
	applymovement LOCALID_SHELLY, Common_Movement_WalkSlowUp
	waitmovement 0
	goto SeafloorCavern_Room9_EventScript_MattShellyDoMultiBattle
	releaseall
	end

SeafloorCavern_Room9_EventScript_MattShellyDoMultiBattle::
	playbgm MUS_MT_CHIMNEY, TRUE
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	multi_2p_vs_2 TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Room9_Text_ShellyDefeat, TRAINER_MATT_MT_PYRE, SeafloorCavern_Room9_Text_MattDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, SeafloorCavern_Room9_EventScript_MattShellyVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

SeafloorCavern_Room9_EventScript_MattShellyVictory::
	playse SE_NOT_EFFECTIVE
	applymovement LOCALID_MATT, SeafloorCavern_Room9_Movement_KnockedDown
	applymovement LOCALID_SHELLY, SeafloorCavern_Room9_Movement_KnockedDown
	waitmovement 0
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MattPostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
	setvar VAR_PARTNER_EMMIE_STATE, 60
	addvar VAR_SEAFLOOR_CAVERN_STATE, 1
	end

SeafloorCavern_Room9_EventScript_ShellyPostBattle::
	lockall
	faceplayer
	msgbox SeafloorCavern_Room9_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
	releaseall
	end

SeafloorCavern_Room9_EventScript_MattPostBattle::
	lockall
	faceplayer
	msgbox SeafloorCavern_Room9_Text_MattPostBattle, MSGBOX_AUTOCLOSE
	releaseall
	end

SeafloorCavern_Room9_Movement_KnockedUp:
	lock_facing_direction
	walk_fast_up
	unlock_facing_direction
	step_end

SeafloorCavern_Room9_Movement_KnockedDown:
	lock_facing_direction
	walk_fast_down
	unlock_facing_direction
	step_end

SeafloorCavern_Room9_Text_ShellyDefeat:
	.string "If only you were on our side…$"

SeafloorCavern_Room9_Text_MattDefeat:
	.string "It's like the woods all over again…$"

SeafloorCavern_Room9_Movement_ShellyMovePostBattle:
	face_left
	lock_facing_direction
	walk_slow_right
	unlock_facing_direction
	step_end

SeafloorCavern_Room9_Text_MattPostBattle:
	.string "Matt: We may have lost the battle,\n"
	.string "but ultimately we're still the winners.$"

SeafloorCavern_Room9_Text_ShellyPostBattle:
	.string "Shelly: With the power of Kyogre, you\n"
	.string "will not defeat Archie.$"

SeafloorCavern_Room9_Text_MattNotGettingOffLightly:
	.string "Matt: You're not getting off lightly\n"
	.string "though.\p"
	.string "Us four, we have a score to settle, and\n"
	.string "we're a long way from Petalburg Woods!$"

SeafloorCavern_Room9_Text_ShellyItIsDone:
	.string "Shelly: It is done. Archie now\n"
	.string "controls the legendary Pokémon Kyogre!$"

SeafloorCavern_Room9_Movement_PanToAction:
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SeafloorCavern_Room9_Movement_ReturnFromAction:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_diag_northwest
	walk_diag_northwest
	walk_diag_northwest
	walk_diag_northwest
	walk_diag_northwest
	step_end

SeafloorCavern_Room9_Text_ShellyThisHasToHappen:
	.string "Shelly: You're not getting through us\n"
	.string "before Archie makes it to Kyogre.\p"
	.string "After Team Magma released Groudon,\n"
	.string "this became more than a mere vision\l"
	.string "for Team Aqua, it's now a necessity.\p"
	.string "Balance will be brought and you can't\n"
	.string "stop us. Observe.$"
	
SeafloorCavern_Room9_Movement_ArchieApproachKyogre1:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_down
	walk_left
	walk_down
	walk_down
	step_end

SeafloorCavern_Room9_Movement_EmmieApproach2:
	walk_slow_down
	walk_down
	step_end

SeafloorCavern_Room9_Movement_ShellyApproach1:
	walk_slow_up
	step_end

SeafloorCavern_Room9_Text_ShellyWeWillStall:
	.string "Shelly: We are too close to stop now.\p"
	.string "Go. We will stall them.$"

SeafloorCavern_Room9_Text_ArchieYouAgain:
	.string "Archie: You…\p"
	.string "Why do you insist on pursuing us\n"
	.string "even here?\p"
	.string "You have seen the horror Team Magma\n"
	.string "have brought to the region.\p"
	.string "Do you not see that balance must be\n"
	.string "restored?\p"
	.string "You will not stop me.$"

SeafloorCavern_Room9_Movement_PlayerApproach1:
	walk_down
	walk_down
	walk_slow_down
	walk_slow_down
	step_end

SeafloorCavern_Room9_Movement_EmmieApproach1:
	walk_down
	walk_left
	walk_down
	face_down
	walk_down
	walk_down
	walk_down
	step_end

SeafloorCavern_Room9_Movement_ArchieKnockedBack:
	face_right
	lock_facing_direction
	walk_fast_left
	delay_16
	walk_slow_left
	unlock_facing_direction
	step_end

SeafloorCavern_Room9_EventScript_Archie::
	lockall
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Room9_EventScript_PlayerApproachArchieEast
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Room9_EventScript_PlayerApproachArchieWest
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Room9_EventScript_PlayerApproachArchieNorth
	waitmovement 0
	delay 30
	setvar VAR_0x8004, LOCALID_ARCHIE
	setvar VAR_0x8005, LOCALID_MAXIE
	setvar VAR_0x8006, LOCALID_GRUNT_1
	setvar VAR_0x8007, LOCALID_GRUNT_2
	faceplayer
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
	closemessage
	goto SeafloorCavern_Room9_EventScript_ArchieDoMultiBattle
	releaseall
	end

SeafloorCavern_Room9_EventScript_ArchieDoMultiBattle::
	playbgm MUS_NONE, TRUE
	multi_2p_vs_1 TRAINER_ARCHIE_SEAFLOOR_CAVERN, SeafloorCavern_Room9_Text_ArchieDefeat, PARTNER_EMMIE
	switch VAR_RESULT
	case 1, SeafloorCavern_Room9_EventScript_ArchieVictory
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

SeafloorCavern_Room9_EventScript_ArchieVictory::
	playse SE_NOT_EFFECTIVE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
	applymovement LOCALID_ARCHIE, SeafloorCavern_Room9_Movement_ArchieKnockedBack
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_ARCHIE, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	waitmovement 0
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
	waitmovement 0
	removeobject LOCALID_KYOGRE
	delay 4
	setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	setvar VAR_0x8004, LOCALID_ARCHIE
	setvar VAR_0x8005, LOCALID_MAXIE
	setvar VAR_0x8006, LOCALID_GRUNT_1
	setvar VAR_0x8007, LOCALID_GRUNT_2
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
	playse SE_PC_LOGIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
	closemessage
	playse SE_PC_OFF
	delay 20
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
	closemessage
	addobject VAR_0x8005
	addobject VAR_0x8006
	addobject VAR_0x8007
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
	waitmovement 0
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8004, Common_Movement_Delay48
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
	setvar VAR_ROUTE128_STATE, 1
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
	clearflag FLAG_ABNORMAL_WEATHER_SUN
	setflag FLAG_SYS_WEATHER_CTRL
	setflag FLAG_ABNORMAL_WEATHER_RAIN
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setvar VAR_LEVEL_CAP, 88
	setvar VAR_STEVENS_HOUSE_STATE, 2
	setvar VAR_PARTNER_EMMIE_STATE, 61
	addvar VAR_SEAFLOOR_CAVERN_STATE, 1
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
	setflag FLAG_HIDE_MAP_NAME_POPUP
	warp MAP_ROUTE128, 38, 22
	waitstate
	releaseall
	end

SeafloorCavern_Room9_EventScript_PlayerApproachArchieEast::
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	call_if_eq VAR_TEMP_3, 16, SeafloorCavern_Room9_EventScript_ApproachArchieEast1
	call_if_eq VAR_TEMP_3, 15, SeafloorCavern_Room9_EventScript_ApproachArchieEast2
	return

SeafloorCavern_Room9_EventScript_ApproachArchieEast1::
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerArchieStart2
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart6
	return

SeafloorCavern_Room9_EventScript_ApproachArchieEast2::
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerArchieStart3
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart7
	return

SeafloorCavern_Room9_Movement_EmmieApproachArchieStart7:
	walk_right
	walk_down
	walk_right
	face_up
	step_end

SeafloorCavern_Room9_Movement_EmmieApproachArchieStart6:
	walk_right
	walk_right
	walk_up
	face_left
	step_end

SeafloorCavern_Room9_Movement_PlayerArchieStart2:
	walk_down
	walk_right
	face_up
	step_end

SeafloorCavern_Room9_Movement_PlayerArchieStart3:
	walk_down
	walk_right
	walk_right
	walk_up
	face_left
	step_end

SeafloorCavern_Room9_EventScript_PlayerApproachArchieWest::
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	call_if_eq VAR_TEMP_3, 18, SeafloorCavern_Room9_EventScript_ApproachArchieWest1
	call_if_eq VAR_TEMP_3, 19, SeafloorCavern_Room9_EventScript_ApproachArchieWest2
	return

SeafloorCavern_Room9_EventScript_ApproachArchieWest1::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart4
	return

SeafloorCavern_Room9_EventScript_ApproachArchieWest2::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart5
	return

SeafloorCavern_Room9_Movement_EmmieApproachArchieStart5:
	walk_down
	walk_left
	walk_left
	face_up
	step_end

SeafloorCavern_Room9_Movement_EmmieApproachArchieStart4:
	walk_left
	face_up
	step_end

SeafloorCavern_Room9_EventScript_PlayerApproachArchieNorth::
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	call_if_eq VAR_TEMP_3, 18, SeafloorCavern_Room9_EventScript_ApproachArchieNorth1
	call_if_eq VAR_TEMP_3, 17, SeafloorCavern_Room9_EventScript_ApproachArchieNorth2
	call_if_eq VAR_TEMP_3, 16, SeafloorCavern_Room9_EventScript_ApproachArchieNorth3
	return

SeafloorCavern_Room9_EventScript_ApproachArchieNorth1::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart1
	return

SeafloorCavern_Room9_EventScript_ApproachArchieNorth2::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart2
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerApproachArchieStart1
	return

SeafloorCavern_Room9_EventScript_ApproachArchieNorth3::
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SeafloorCavern_Room9_Movement_EmmieApproachArchieStart3
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerApproachArchieStart1
	return

SeafloorCavern_Room9_Movement_EmmieApproachArchieStart3:
	walk_right
	face_up
	step_end

SeafloorCavern_Room9_Movement_EmmieApproachArchieStart2:
	walk_up
	step_end

SeafloorCavern_Room9_Movement_EmmieApproachArchieStart1:
	walk_up
	face_left
	step_end

SeafloorCavern_Room9_Movement_PlayerApproachArchieStart1:
	walk_right
	walk_up
	face_left
	step_end

SeafloorCavern_Room9_Movement_PlayerApproachArchieNorth:
	walk_left
	walk_up
	step_end

SeafloorCavern_Room9_Movement_PlayerApproachArchieWest:
	walk_down
	walk_left
	walk_left
	walk_up
	step_end


SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

SeafloorCavern_Room9_Movement_Unused1:
	walk_left
	walk_left
	step_end

SeafloorCavern_Room9_Movement_ArchieListenMessage:
	walk_slow_right
	delay_16
	step_end

SeafloorCavern_Room9_Movement_Unused2:
	walk_right
	step_end

SeafloorCavern_Room9_Movement_ArchieExit:
	face_up
	lock_facing_direction
	walk_down
	unlock_facing_direction
	walk_in_place_faster_right
	step_end

SeafloorCavern_Room9_Movement_KyogreApproach:
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	step_end

SeafloorCavern_Room9_Movement_KyogreExit:
	slide_up
	slide_up
	step_end

SeafloorCavern_Room9_Movement_MaxieArrive:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SeafloorCavern_Room9_Movement_MaxieExit:
	walk_right
	walk_right
	step_end

SeafloorCavern_Room9_Movement_MagmaGruntArrive:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SeafloorCavern_Room9_Movement_Delay32:
	delay_16
	delay_16
	step_end

SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
	.string "Archie: You just don't know when to\n"
	.string "give up do you?\p"
	.string "With Kyogre by my side, Team Aqua's\n"
	.string "vision will finally come to pass.\p"
	.string "Together we will end Groudon's\n"
	.string "drought, bringing rainfall, high seas,\l"
	.string "and peace to people and Pokémon alike.\p"
	.string "The final obstacles in my way are\n"
	.string "yourselves.\p"
	.string "But not for much longer.$"

SeafloorCavern_Room9_Text_ArchieSoItWasYou:
	.string "ARCHIE: Fufufu…\n"
	.string "So it was you, after all.$"

SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
	.string "Archie: Behold!\p"
	.string "See how beautiful it is, the sleeping\n"
	.string "form of the ancient Pokémon Kyogre…!\p"
	.string "I have waited so long for this day to\n"
	.string "come…\p"
	.string "I have this in my possession!\p"
	.string "With this Red Orb, I will awaken Kyogre…$"

SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
	.string "ARCHIE: It surprises me, how you've\n"
	.string "managed to chase me here.\p"
	.string "But that's all over now.\p"
	.string "For the realization of my dream,\n"
	.string "you must disappear now!$"

SeafloorCavern_Room9_Text_ArchieDefeat:
	.string "What?!\n"
	.string "I lost to a mere child like you?!$"

SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
	.string "Archie: Remarkable…\p"
	.string "I commend you. I must recognize that\n"
	.string "you are truly gifted to be able to\l"
	.string "stand up to Kyogre.\p"
	.string "But this matters not, for I have this\n"
	.string "in my possession!\p"
	.string "With this Red Orb, I can still control\n"
	.string "Kyogre and…$"

SeafloorCavern_Room9_Text_RedOrbShinesByItself:
	.string "The RED ORB suddenly began shining\n"
	.string "by itself!$"

SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
	.string "Archie: What?!\p"
	.string "I didn't command this.\p"
	.string "Why did the Red Orb…\n"
	.string "Where did Kyogre go?$"

SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
	.string "Archie: Hm? It's a message from our\n"
	.string "members outside…$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
	.string "Archie: Yes, what is it?\p"
	.string "Hm…\n"
	.string "It's raining heavily?\p"
	.string "Good… That should have happened.\n"
	.string "That is why we awakened Kyogre,\l"
	.string "to realize Team Aqua's vision of\l"
	.string "expanding the sea.\p"
	.string "What?!\p"
	.string "It's raining far harder than we\n"
	.string "envisioned? You're in danger?\p"
	.string "That can't be…\n"
	.string "That's just not possible…\p"
	.string "Hold your position and monitor\n"
	.string "the situation!$"

SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
	.string "ARCHIE: There's something wrong…\p"
	.string "The Red Orb is supposed to awaken\n"
	.string "and control Kyogre…\p"
	.string "But… Why?\n"
	.string "Why did Kyogre disappear?\p"
	.string "Why?!$"

SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
	.string "Maxie: What have you wrought?\p"
	.string "Archie… You've finally awoken Kyogre,\n"
	.string "haven't you?\p"
	.string "What will happen to the world if this\n"
	.string "downpour continues for all eternity?\p"
	.string "The world's landmass will drown in\n"
	.string "the deepening sea…$"

SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
	.string "Archie: W-what?!\n"
	.string "Don't get all high and mighty with me!\p"
	.string "It was you, Team Magma, that first\n"
	.string "released Groudon!\p"
	.string "So long as I have this Red Orb,\n"
	.string "I should be able to control Kyogre.\p"
	.string "I should be able to control it…$"

SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
	.string "Maxie: We don't have the time to\n"
	.string "argue about it here!\p"
	.string "Get outside and see for yourself!\p"
	.string "See if what you've wrought is the\n"
	.string "world that we desired!$"

SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
	.string "Maxie: {PLAYER}, Emmie, come on, you\n"
	.string "have to get out of here, too!$"

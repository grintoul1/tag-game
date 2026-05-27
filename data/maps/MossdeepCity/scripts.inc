
.set LOCALID_GRUNT_1, 10
.set LOCALID_GRUNT_2, 11
.set LOCALID_GRUNT_3, 12
.set LOCALID_GRUNT_4, 13
.set LOCALID_MAXIE, 14
.set LOCALID_AQUA_GRUNT_1, 19
.set LOCALID_AQUA_GRUNT_2, 20
.set LOCALID_AQUA_GRUNT_3, 21
.set LOCALID_AQUA_GRUNT_4, 18
.set LOCALID_ARCHIE, 22
.set LOCALID_SCOTT, 16

MossdeepCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_OnFrame
	.byte 0

MossdeepCity_OnFrame:
	map_script_2 VAR_PARTNER_EMMIE_STATE, 50, MossdeepCity_EventScript_ProgressEmmieState
	map_script_2 VAR_PARTNER_EMMIE_STATE, 52, MossdeepCity_EventScript_ProgressEmmieState
	map_script_2 VAR_PARTNER_EMMIE_STATE, 55, MossdeepCity_EventScript_ProgressEmmieState2
	map_script_2 VAR_PARTNER_EMMIE_STATE, 56, MossdeepCity_EventScript_ProgressEmmieState2
	map_script_2 VAR_PARTNER_EMMIE_STATE, 58, MossdeepCity_EventScript_ProgressEmmieStateReturnToSFC
	.2byte 0

MossdeepCity_EventScript_ProgressEmmieStateReturnToSFC::
	setvar VAR_PARTNER_EMMIE_STATE, 59
	return

MossdeepCity_EventScript_ProgressEmmieState::
	setvar VAR_PARTNER_EMMIE_STATE, 51
	return

MossdeepCity_EventScript_ProgressEmmieState2::
	setvar VAR_PARTNER_EMMIE_STATE, 54
	end

MossdeepCity_OnTransition:
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

MossdeepCity_EventScript_PokefanF::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_PokefanFMagmaGone::
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_Sailor::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_SailorMagmaGone::
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_NinjaBoy::
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
	end

MossdeepCity_EventScript_ExpertM::
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
	end

MossdeepCity_EventScript_Girl::
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
	end

MossdeepCity_EventScript_Woman::
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
	end

MossdeepCity_EventScript_WhiteRock::
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
	end

MossdeepCity_EventScript_GymSign::
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_CitySign::
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_SpaceCenterSign::
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_VisitedMossdeep::
	setflag FLAG_VISITED_MOSSDEEP_CITY
	setvar VAR_TEMP_1, 1
	end

MossdeepCity_EventScript_BlueIntroduction1::
	lockall
	getobjectcurrentxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	addvar VAR_TEMP_4, (-6)
	setobjectxyperm LOCALID_MOSSDEEP_CITY_BLUE, VAR_TEMP_3, VAR_TEMP_4
	delay 8
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	addobject LOCALID_MOSSDEEP_CITY_BLUE
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceUp
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, MossdeepCity_Movement_BlueApproachPlayerNorth
	waitmovement
	msgbox MossdeepCity_Text_BlueIntroduction, MSGBOX_AUTOCLOSE
	delay 8
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, Common_Movement_FaceRight
	waitmovement
	msgbox MossdeepCity_Text_BlueIntroduction2, MSGBOX_AUTOCLOSE
	delay 8
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, Common_Movement_FacePlayer
	waitmovement
	msgbox MossdeepCity_Text_BlueIntroduction3, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, MossdeepCity_Movement_BlueLeavePlayerNorth
	waitmovement
	removeobject LOCALID_MOSSDEEP_CITY_BLUE
	setobjectxyperm LOCALID_MOSSDEEP_CITY_BLUE, 48, 12
	addobject LOCALID_MOSSDEEP_CITY_BLUE
	addvar VAR_KANTONIANS_STATE, 1
	fadedefaultbgm
	releaseall
	end

MossdeepCity_EventScript_BlueIntroduction2::
	lockall
	setobjectxyperm LOCALID_MOSSDEEP_CITY_BLUE, 26, 23
	delay 8
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	addobject LOCALID_MOSSDEEP_CITY_BLUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, MossdeepCity_Movement_BlueApproachPlayerSouth
	waitmovement
	msgbox MossdeepCity_Text_BlueIntroduction, MSGBOX_AUTOCLOSE
	delay 8
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, Common_Movement_FaceRight
	waitmovement
	msgbox MossdeepCity_Text_BlueIntroduction2, MSGBOX_AUTOCLOSE
	delay 8
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, Common_Movement_FacePlayer
	waitmovement
	msgbox MossdeepCity_Text_BlueIntroduction3, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, MossdeepCity_Movement_BlueLeavePlayerSouth
	waitmovement
	removeobject LOCALID_MOSSDEEP_CITY_BLUE
	setobjectxyperm LOCALID_MOSSDEEP_CITY_BLUE, 48, 12
	addobject LOCALID_MOSSDEEP_CITY_BLUE
	addvar VAR_KANTONIANS_STATE, 1
	fadedefaultbgm
	releaseall
	end

MossdeepCity_EventScript_BlueIntroduction4::
	lockall
	setobjectxyperm LOCALID_MOSSDEEP_CITY_BLUE, 37, 19
	delay 8
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	addobject LOCALID_MOSSDEEP_CITY_BLUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
	goto MossdeepCity_EventScript_BlueIntroduction5
MossdeepCity_EventScript_BlueIntroduction3::
	lockall
	setobjectxyperm LOCALID_MOSSDEEP_CITY_BLUE, 36, 20
	delay 8
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	addobject LOCALID_MOSSDEEP_CITY_BLUE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceRight
MossdeepCity_EventScript_BlueIntroduction5::
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, MossdeepCity_Movement_BlueApproachPlayerEast
	waitmovement
	msgbox MossdeepCity_Text_BlueIntroduction, MSGBOX_AUTOCLOSE
	delay 8
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, Common_Movement_FaceRight
	waitmovement
	msgbox MossdeepCity_Text_BlueIntroduction2, MSGBOX_AUTOCLOSE
	delay 8
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, Common_Movement_FacePlayer
	waitmovement
	msgbox MossdeepCity_Text_BlueIntroduction3, MSGBOX_AUTOCLOSE
	applymovement LOCALID_MOSSDEEP_CITY_BLUE, MossdeepCity_Movement_BlueLeavePlayerEast
	waitmovement
	removeobject LOCALID_MOSSDEEP_CITY_BLUE
	setobjectxyperm LOCALID_MOSSDEEP_CITY_BLUE, 48, 12
	addobject LOCALID_MOSSDEEP_CITY_BLUE
	addvar VAR_KANTONIANS_STATE, 1
	fadedefaultbgm
	releaseall
	end

MossdeepCity_Movement_BlueLeavePlayerEast:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_down
	walk_slow_down
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

MossdeepCity_Movement_BlueApproachPlayerEast:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	walk_slow_up
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

MossdeepCity_Movement_BlueLeavePlayerSouth:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_down
	walk_slow_right
	step_end

MossdeepCity_Movement_BlueApproachPlayerSouth:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_right
	face_up
	step_end

MossdeepCity_Movement_BlueLeavePlayerNorth:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

MossdeepCity_Text_BlueIntroduction:
	.string "Blue: Well, well, look who it is!\p"
	.string "I was wondering how long it would take\n"
	.string "you to get here.\p"
	.string "I'm guessing your next stop must be\n"
	.string "Mossdeep City Gym?\p"
	.string "What am I doing here?\p"
	.string "Well as you know my friends and I are\n"
	.string "here on invitation of Hoenn's former\l"
	.string "champion.\p"
	.string "Mossdeep is his home city, so we\n"
	.string "thought we would come and see it.\p"
	.string "The Mossdeep gym leaders are the twins\n"
	.string "Tate and Liza.\p"
	.string "Let me warn you, those kids are a\n"
	.string "force to be reckoned with!\p"
	.string "Their speciality is the psychic type,\n"
	.string "which gave me an idea.\p"
	.string "One of the toughest leaders in our\n"
	.string "Kanto roster is called Sabrina.\p"
	.string "She was… an unusual character when she\n"
	.string "was younger…\p"
	.string "But she's mellowed out in recent\n"
	.string "years.\p"
	.string "Anyway, I've spoken with Tate and Liza\n"
	.string "and we've got a fun challenge for you.\p"
	.string "When you reach them, only one of you\n"
	.string "will participate in the battle.\p"
	.string "You will then have to choose between\n"
	.string "Tate, Liza, and Sabrina.\p"
	.string "Your first two selections will be your\n"
	.string "opponents for the battle.\p"
	.string "Then the individual who remains will\n"
	.string "be your battle partner!\p"
	.string "The three of them are evenly matched\n"
	.string "in terms of ability, so think hard\l"
	.string "about who you can best support.$"

MossdeepCity_Text_BlueIntroduction2:
	.string "If you have time, come and join me on\n"
	.string "the plateau near the Space Center.\p"
	.string "There are some Kanto legends that I\n"
	.string "would like you to meet.\p"
	.string "They've agreed to have a practice\n"
	.string "battle with you in preparation for\l"
	.string "your gym challenge.$"

MossdeepCity_Text_BlueIntroduction3:
	.string "They're planning to leave Mossdeep\n"
	.string "a bit earlier than the rest of us, \l"
	.string "so make the most of this offer!\p"
	.string "Anyway, I'll be seeing ya!$"

MossdeepCity_Movement_BlueApproachPlayerNorth:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
	lockall
	goto_if_set FLAG_EVIL_TEAM_AQUA, MossdeepCity_EventScript_TeamAquaEnterSpaceCenter
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
	waitmovement 0
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
	waitmovement 0
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
	waitmovement 0
	removeobject LOCALID_MAXIE
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_GRUNT_4
	delay 30
	setvar VAR_MOSSDEEP_CITY_STATE, 2
	setvar VAR_PARTNER_EMMIE_STATE, 54
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	releaseall
	end

MossdeepCity_EventScript_TeamAquaEnterSpaceCenter::
	applymovement LOCALID_ARCHIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
	waitmovement 0
	applymovement LOCALID_AQUA_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_AQUA_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_AQUA_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_AQUA_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
	waitmovement 0
	applymovement LOCALID_ARCHIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
	applymovement LOCALID_AQUA_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
	applymovement LOCALID_AQUA_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
	applymovement LOCALID_AQUA_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
	applymovement LOCALID_AQUA_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
	waitmovement 0
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_AQUA_GRUNT_1
	removeobject LOCALID_AQUA_GRUNT_2
	removeobject LOCALID_AQUA_GRUNT_3
	removeobject LOCALID_AQUA_GRUNT_4
	delay 30
	setvar VAR_MOSSDEEP_CITY_STATE, 2
	setvar VAR_PARTNER_EMMIE_STATE, 54
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	releaseall
	end

MossdeepCity_Movement_MaxieGestureToSpaceCenter:
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	step_end

MossdeepCity_Movement_GruntFaceSpaceCenter:
	face_right
	delay_16
	delay_16
	delay_16
	step_end

MossdeepCity_Movement_MaxieEnterSpaceCenter:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt1EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt2EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt3EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt4EnterSpaceCenter:
	delay_16
	delay_8
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_EventScript_Man::
	lock
	faceplayer
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_EventScript_KingsRockBoy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
	giveitem ITEM_KINGS_ROCK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_KINGS_ROCK
	release
	end

MossdeepCity_EventScript_ReceivedKingsRock::
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DeclineKingsRock::
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_BlackBelt::
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
	end

MossdeepCity_EventScript_Scott::
	lock
	faceplayer
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
	addvar VAR_SCOTT_STATE, 1
	removeobject LOCALID_SCOTT
	release
	end

MossdeepCity_EventScript_ScottExitNorth::
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
	waitmovement 0
	return

MossdeepCity_EventScript_ScottExitEast::
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
	waitmovement 0
	return

MossdeepCity_Movement_PlayerWatchScottExit:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MossdeepCity_Movement_ScottExitNorth:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MossdeepCity_Movement_ScottExitEast:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MossdeepCity_Text_WantKingsRockStevenGaveMe:
	.string "I got this from STEVEN, but I don't\n"
	.string "know what it's good for.\p"
	.string "I think it's called KING'S ROCK.\n"
	.string "Do you want it?$"

MossdeepCity_Text_YouCanKeepIt:
	.string "Why would you want it?\n"
	.string "You're weird.\p"
	.string "You can keep it, but keep it a secret\n"
	.string "from STEVEN.$"

MossdeepCity_Text_StevensHouseOverThere:
	.string "STEVEN's house is right over there!$"

MossdeepCity_Text_WhatToDoWithWeirdRock:
	.string "Yeah, you think so, too! What are you\n"
	.string "supposed to do with some weird rock?$"

MossdeepCity_Text_WailmerWatching:
	.string "Around MOSSDEEP, you can see wild\n"
	.string "WAILMER.\p"
	.string "It's called, uh…\n"
	.string "What was it now…\p"
	.string "WAI, WAI, WAI…\p"
	.string "WAILMER watching!$"

MossdeepCity_Text_SpaceCenterReceivedLetter:
	.string "The island's SPACE CENTER has been\n"
	.string "launching huge rockets.\p"
	.string "There's been some kind of an uproar\n"
	.string "over a letter they received recently.$"

MossdeepCity_Text_SpaceCenterLaunchingRockets:
	.string "The island's SPACE CENTER has been\n"
	.string "launching huge rockets.$"

MossdeepCity_Text_MossdeepTargetedByMagma:
	.string "I heard from a SAILOR buddy that\n"
	.string "TEAM AQUA set up shop in LILYCOVE.\p"
	.string "I also heard that someone came along\n"
	.string "and wiped the floor with them!\p"
	.string "But MOSSDEEP here's been targeted\n"
	.string "by that TEAM MAGMA.\p"
	.string "If you want to know what they're up to,\n"
	.string "go visit the SPACE CENTER.$"

MossdeepCity_Text_FeelReliefOnLand:
	.string "I'm a SAILOR, so the sea's obviously\n"
	.string "more important to me.\p"
	.string "But you know? When I get back on land\n"
	.string "after a long voyage, I do feel relief!$"

MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
	.string "Wouldn't it be nice?\p"
	.string "If the whole world was covered in\n"
	.string "plants and flowers like this island?$"

MossdeepCity_Text_LifeNeedsSeaToLive:
	.string "All life needs the sea to live, even\n"
	.string "though it makes its home on the land.\p"
	.string "Life, having run its course, becomes\n"
	.string "soil and returns to the land.\p"
	.string "And the sea is always connected to\n"
	.string "the land.\p"
	.string "Yes, like the very shoreline here.$"

MossdeepCity_Text_SurfExhilarating:
	.string "A voyage on a ship is fine.\p"
	.string "But crossing the sea with POKéMON\n"
	.string "using SURF…\p"
	.string "Now that's an exhilarating trip!\n"
	.string "Wouldn't you agree, youngster?$"

MossdeepCity_Text_SpecialSpaceCenterRock:
	.string "This rock has a special meaning to\n"
	.string "the people at the SPACE CENTER.\p"
	.string "They put it here as their wish for\n"
	.string "their rockets to fly safely.\p"
	.string "When you make a wish, what do you use?\n"
	.string "Do you wish upon a star?\p"
	.string "I use a wish tag to make it happen.\n"
	.string "That's what I do.$"

MossdeepCity_Text_ItsAWhiteRock:
	.string "It's a white rock.$"

MossdeepCity_Text_GymSign:
	.string "MOSSDEEP CITY POKéMON GYM\n"
	.string "LEADERS: LIZA & TATE\p"
	.string "“The mystic combination!”$"

MossdeepCity_Text_CitySign:
	.string "MOSSDEEP CITY\n"
	.string "“Our slogan: Cherish POKéMON!”$"

MossdeepCity_Text_SpaceCenterSign:
	.string "MOSSDEEP SPACE CENTER\n"
	.string "“The closest place to space.”$"

MossdeepCity_Text_ScottSomethingWrongWithTown:
	.string "SCOTT: {PLAYER}{KUN}, feeling good?\n"
	.string "I'm doing great!\p"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
	.string "pretty strong, so I decided to come\l"
	.string "take a look-see for myself.\p"
	.string "But there's something wrong about\n"
	.string "this town.\p"
	.string "People are going on about a warning\n"
	.string "letter and the SPACE CENTER…\p"
	.string "I don't think it concerns me in any\n"
	.string "way, though.$"

MossdeepCity_Text_SootopolisNewGymLeader:
	.string "Ahh… It feels great letting the waves\n"
	.string "wash over my feet…\p"
	.string "Speaking of the waves, you know that\n"
	.string "island city SOOTOPOLIS?\p"
	.string "I think the GYM there had a new\n"
	.string "LEADER come in.\p"
	.string "People tell me the new LEADER once\n"
	.string "mentored WALLACE.$"

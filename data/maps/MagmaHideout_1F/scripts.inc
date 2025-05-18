# 1 "data/maps/MagmaHideout_1F/scripts.pory"

# 2 "data/maps/MagmaHideout_1F/scripts.pory"
.set LOCALID_GRUNT1, 1
# 3 "data/maps/MagmaHideout_1F/scripts.pory"
.set LOCALID_GRUNT2, 3
# 4 "data/maps/MagmaHideout_1F/scripts.pory"
.set LOCALID_SHELLY, 7
# 5 "data/maps/MagmaHideout_1F/scripts.pory"

# 6 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_MapScripts::
# 7 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
# 8 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MagmaHideout_1F_OnWarp
# 9 "data/maps/MagmaHideout_1F/scripts.pory"
	.byte 0
# 10 "data/maps/MagmaHideout_1F/scripts.pory"

# 11 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnTransition:
# 12 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 13 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 14 "data/maps/MagmaHideout_1F/scripts.pory"

# 15 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnWarp:
# 16 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 17 "data/maps/MagmaHideout_1F/scripts.pory"

# 18 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_GetShellyPosition::
# 19 "data/maps/MagmaHideout_1F/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 20 "data/maps/MagmaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_2, 10, MagmaHideout_1F_EventScript_SetShellyPositionA
# 21 "data/maps/MagmaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_2, 25, MagmaHideout_1F_EventScript_SetShellyPositionB
# 22 "data/maps/MagmaHideout_1F/scripts.pory"
	goto_if_eq VAR_TEMP_2, 31, MagmaHideout_1F_EventScript_SetShellyPositionC
# 23 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 24 "data/maps/MagmaHideout_1F/scripts.pory"

# 25 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_SetShellyPositionA::
# 26 "data/maps/MagmaHideout_1F/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 10, 34
# 27 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 29 "data/maps/MagmaHideout_1F/scripts.pory"

# 30 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_SetShellyPositionB::
# 31 "data/maps/MagmaHideout_1F/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 25, 34
# 32 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 34 "data/maps/MagmaHideout_1F/scripts.pory"

# 35 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_SetShellyPositionC::
# 36 "data/maps/MagmaHideout_1F/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 31, 3
# 37 "data/maps/MagmaHideout_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 39 "data/maps/MagmaHideout_1F/scripts.pory"

# 40 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_AddShelly::
# 41 "data/maps/MagmaHideout_1F/scripts.pory"
	lockall
# 42 "data/maps/MagmaHideout_1F/scripts.pory"
	addobject LOCALID_SHELLY
# 43 "data/maps/MagmaHideout_1F/scripts.pory"
	delay 15
# 44 "data/maps/MagmaHideout_1F/scripts.pory"
	releaseall
# 45 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 46 "data/maps/MagmaHideout_1F/scripts.pory"

# 47 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2::
# 48 "data/maps/MagmaHideout_1F/scripts.pory"
lockall
# 49 "data/maps/MagmaHideout_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT1
# 50 "data/maps/MagmaHideout_1F/scripts.pory"
playse SE_PIN
# 51 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 52 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 53 "data/maps/MagmaHideout_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 54 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 55 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 56 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt1Intro MSGBOX_AUTOCLOSE
# 57 "data/maps/MagmaHideout_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT2
# 58 "data/maps/MagmaHideout_1F/scripts.pory"
playse SE_PIN
# 59 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 60 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 61 "data/maps/MagmaHideout_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 62 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 63 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 64 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt2Intro, MSGBOX_AUTOCLOSE
# 65 "data/maps/MagmaHideout_1F/scripts.pory"
goto MagmaHideout_1F_EventScript_Grunt1Grunt2_ChoosePartyForMultiBattle
# 66 "data/maps/MagmaHideout_1F/scripts.pory"
releaseall
# 67 "data/maps/MagmaHideout_1F/scripts.pory"
end
# 68 "data/maps/MagmaHideout_1F/scripts.pory"

# 69 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2_ChoosePartyForMultiBattle::
# 70 "data/maps/MagmaHideout_1F/scripts.pory"
special SavePlayerParty
# 71 "data/maps/MagmaHideout_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 72 "data/maps/MagmaHideout_1F/scripts.pory"
special ChooseHalfPartyForBattle
# 73 "data/maps/MagmaHideout_1F/scripts.pory"
waitstate
# 74 "data/maps/MagmaHideout_1F/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_1F_EventScript_Grunt1Grunt2DoMultiBattle
# 75 "data/maps/MagmaHideout_1F/scripts.pory"
goto MagmaHideout_1F_EventScript_Grunt1Grunt2_ChoosePartyForMultiBattle
# 76 "data/maps/MagmaHideout_1F/scripts.pory"
closemessage
# 77 "data/maps/MagmaHideout_1F/scripts.pory"
releaseall
# 78 "data/maps/MagmaHideout_1F/scripts.pory"
end
# 79 "data/maps/MagmaHideout_1F/scripts.pory"

# 80 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2DoMultiBattle::
# 81 "data/maps/MagmaHideout_1F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 82 "data/maps/MagmaHideout_1F/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Defeat, PARTNER_SHELLY
# 83 "data/maps/MagmaHideout_1F/scripts.pory"
special LoadPlayerParty
# 84 "data/maps/MagmaHideout_1F/scripts.pory"
switch VAR_RESULT
# 85 "data/maps/MagmaHideout_1F/scripts.pory"
case 1, MagmaHideout_1F_EventScript_Grunt1Grunt2Victory
# 86 "data/maps/MagmaHideout_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 87 "data/maps/MagmaHideout_1F/scripts.pory"
special SetCB2WhiteOut
# 88 "data/maps/MagmaHideout_1F/scripts.pory"
waitstate
# 89 "data/maps/MagmaHideout_1F/scripts.pory"

# 90 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1Grunt2Victory::
# 91 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 92 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 93 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/MagmaHideout_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 95 "data/maps/MagmaHideout_1F/scripts.pory"
waitmovement 0
# 96 "data/maps/MagmaHideout_1F/scripts.pory"
msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/MagmaHideout_1F/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 98 "data/maps/MagmaHideout_1F/scripts.pory"
end
# 99 "data/maps/MagmaHideout_1F/scripts.pory"

# 100 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1::
# 101 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 103 "data/maps/MagmaHideout_1F/scripts.pory"

# 104 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt2::
# 105 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 107 "data/maps/MagmaHideout_1F/scripts.pory"

# 108 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Intro:
# 109 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "When TEAM MAGMA has roll call, we get\n"
# 110 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "important guarding assignments in\l"
# 111 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "the order that we line up.\p"
# 112 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "That's why I'm stuck off in this corner.\n"
# 113 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late to roll call!$"
# 114 "data/maps/MagmaHideout_1F/scripts.pory"

# 115 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Defeat:
# 116 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late for training sessions,\n"
# 117 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "too!\p"
# 118 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I hate to say it, but I'm wimpy…$"
# 119 "data/maps/MagmaHideout_1F/scripts.pory"

# 120 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1PostBattle:
# 121 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Okay, I'll try to put a little more\n"
# 122 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "effort into things from now on…$"
# 123 "data/maps/MagmaHideout_1F/scripts.pory"

# 124 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Intro:
# 125 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Our leader told us to dig into\n"
# 126 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "MT. CHIMNEY, so we dug and dug.\p"
# 127 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "And in the course of digging, we came\n"
# 128 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "across something that blew our minds!\p"
# 129 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "What did we find?\p"
# 130 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Fuhahaha!\n"
# 131 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'll tell you if you beat me!$"
# 132 "data/maps/MagmaHideout_1F/scripts.pory"

# 133 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Defeat:
# 134 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Arrgh!\n"
# 135 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Taken down!$"
# 136 "data/maps/MagmaHideout_1F/scripts.pory"

# 137 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2PostBattle:
# 138 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I won't tell you after all.\n"
# 139 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "You'll find out when you get there!\p"
# 140 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "It'd be better if you saved surprises\n"
# 141 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "to the end, don't you think?$"

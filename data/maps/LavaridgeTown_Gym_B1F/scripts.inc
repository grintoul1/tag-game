# 1 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
.equ LOCALID_KEEGAN, 1
# 3 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
.equ LOCALID_ELI, 4
# 4 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 5 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_MapScripts::
# 6 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_B1F_OnTransition
# 7 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	.byte 0
# 8 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 9 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_OnTransition:
# 10 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	call LavaridgeTown_Gym_B1F_EventScript_SetTrainerTempVars
# 11 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	call LavaridgeTown_Gym_B1F_EventScript_CheckBuryTrainers
# 12 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	end
# 13 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 14 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 15 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetTrainerTempVars::
# 16 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_7, 0
# 17 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_8, 0
# 18 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_9, 0
# 19 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_A, 0
# 20 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_EventScript_SetJaceTempVar
# 21 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_7, 1
# 22 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetJaceTempVar::
# 23 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JACE, LavaridgeTown_Gym_B1F_EventScript_SetJeffTempVar
# 24 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_8, 1
# 25 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetJeffTempVar::
# 26 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JEFF, LavaridgeTown_Gym_B1F_EventScript_SetEliTempVar
# 27 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_9, 1
# 28 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetEliTempVar::
# 29 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_ELI, LavaridgeTown_Gym_B1F_EventScript_EndSetTrainerTempVars
# 30 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_A, 1
# 31 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_EndSetTrainerTempVars::
# 32 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 33 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 34 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryTrainers::
# 35 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_EventScript_CheckBuryJace
# 36 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_KEEGAN, MOVEMENT_TYPE_BURIED
# 37 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryJace::
# 38 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JACE, LavaridgeTown_Gym_B1F_EventScript_CheckBuryJeff
# 39 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_JACE, MOVEMENT_TYPE_BURIED
# 40 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryJeff::
# 41 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JEFF, LavaridgeTown_Gym_B1F_EventScript_CheckBuryEli
# 42 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_JEFF, MOVEMENT_TYPE_BURIED
# 43 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryEli::
# 44 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_ELI, LavaridgeTown_Gym_B1F_EventScript_EndCheckBuryTrainers
# 45 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_ELI, MOVEMENT_TYPE_BURIED
# 46 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_EndCheckBuryTrainers::
# 47 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 48 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 49 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_JeffKeegan::
# 50 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
lockall
# 51 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
setvar VAR_0x8008, LOCALID_JEFF
# 52 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
playse SE_PIN
# 53 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 54 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
waitmovement 0
# 56 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 57 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 58 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
waitmovement 0
# 59 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
msgbox LavaridgeTown_Gym_B1F_Text_JeffIntro MSGBOX_AUTOCLOSE
# 60 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
setvar VAR_0x8008, LOCALID_KEEGAN
# 61 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
playse SE_PIN
# 62 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 63 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 64 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
waitmovement 0
# 65 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 66 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 67 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
waitmovement 0
# 68 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
msgbox LavaridgeTown_Gym_B1F_Text_KeeganIntro, MSGBOX_AUTOCLOSE
# 69 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
goto LavaridgeTown_Gym_B1F_EventScript_JeffKeeganDoMultiBattle
# 70 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
releaseall
# 71 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
end
# 72 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 73 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_JeffKeeganDoMultiBattle::
# 74 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 75 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_JEFF, LavaridgeTown_Gym_B1F_Text_JeffDefeat, TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, PARTNER_EMMIE
# 76 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
switch VAR_RESULT
# 77 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
case 1, LavaridgeTown_Gym_B1F_EventScript_JeffKeeganVictory
# 78 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
goto Common_EventScript_MultibattleWipe
# 79 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 80 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_JeffKeeganVictory::
# 81 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 82 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
waitmovement 0
# 83 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 85 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
waitmovement 0
# 86 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
settrainerflag TRAINER_JEFF
# 88 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
settrainerflag TRAINER_KEEGAN
# 89 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
addvar VAR_LAVARIDGE_GYM_STATE, 1
# 90 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
end

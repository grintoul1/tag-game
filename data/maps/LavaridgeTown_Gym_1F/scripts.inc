# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_COLE, 2
# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_GERALD, 3
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_AXLE, 4
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_DANIELLE, 5
# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts::
# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition:
# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery2::
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_FlanneryIntro MSGBOX_AUTOCLOSE
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_FlanneryDoMultiBattle
# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
releaseall
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDoMultiBattle::
# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
multi_2p_vs_1 TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, PARTNER_EMMIE
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
switch VAR_RESULT
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
case 1, LavaridgeTown_Gym_1F_EventScript_FlanneryVictory
# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
special SetCB2WhiteOut
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitstate
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryVictory::
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_LEVEL_CAP, 65
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Movement_Flannery_NotReady:
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
walk_down
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
step_end
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery::
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Flannery2
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_118_AQUA
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldCole::
# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GERALD
# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_GeraldIntro MSGBOX_AUTOCLOSE
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_COLE
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_ColeIntro, MSGBOX_AUTOCLOSE
# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_GeraldColeDoMultiBattle
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
releaseall
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldColeDoMultiBattle::
# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldDefeat, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeDefeat, PARTNER_EMMIE
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
switch VAR_RESULT
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
case 1, LavaridgeTown_Gym_1F_EventScript_GeraldColeVictory
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
special SetCB2WhiteOut
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitstate
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldColeVictory::
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_COLE
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_GERALD
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
addvar VAR_LAVARIDGE_GYM_STATE, 1
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleAxle::
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_DANIELLE
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_DanielleIntro MSGBOX_AUTOCLOSE
# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_AXLE
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_AxleIntro, MSGBOX_AUTOCLOSE
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_DanielleAxleDoMultiBattle
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
releaseall
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleAxleDoMultiBattle::
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
multi_2p_vs_2 TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleDefeat, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleDefeat, PARTNER_EMMIE
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
switch VAR_RESULT
# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
case 1, LavaridgeTown_Gym_1F_EventScript_DanielleAxleVictory
# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
special SetCB2WhiteOut
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitstate
# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleAxleVictory::
# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_DANIELLE
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_AXLE
# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
addvar VAR_LAVARIDGE_GYM_STATE, 1
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_End::
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE's GYM LEADER FLANNERY\n"
# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "uses FIRE-type POKéMON.\p"
# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Her passion for POKéMON burns stronger\n"
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "and hotter than a volcano.\p"
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't get too close to her--you'll burn!\n"
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hose her down with water and then\l"
# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "go for it!$"
# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yow! That was a scorching-hot battle!$"
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro:
# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Owowowowow!\n"
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yikes, it's hot!$"
# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat:
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm blinded by sweat in my eyes…$"
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle:
# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Being buried in hot sand promotes\n"
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "circulation.\p"
# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's effective for healing pain in\n"
# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your joints.$"
# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro:
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm trying to relieve my stress.\n"
# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't come along and stress me out!$"
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat:
# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hope FLANNERY flames you good!$"
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle:
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Haaah… Whew…\p"
# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you spend too much time buried in\n"
# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot sand, it tuckers you out…$"
# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro:
# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You must be getting tired by now.\n"
# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You'd like to rest in the hot sand,\l"
# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "wouldn't you?\p"
# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But you should know that maintaining\n"
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your willpower is an important ability\l"
# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "for all TRAINERS.$"
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Play with fire, and be burned…$"
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your skill is real…\n"
# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But our LEADER FLANNERY is strong.\p"
# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you don't watch yourself, you'll be\n"
# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "burned seriously.$"
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro:
# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Can your POKéMON withstand\n"
# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392-degree heat?$"
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat:
# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It didn't burn hotly enough…$"
# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The temperature of magma is\n"
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392 degrees.\p"
# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your POKéMON beat me, so they should\n"
# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "easily survive in magma.$"
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro:
# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Um…\n"
# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Okay, I'll battle with you.$"
# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat:
# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, but you're too strong.$"
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm going to be a pretty and strong\n"
# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "TRAINER just like FLANNERY.$"
# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro:
# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Come on, get with it!\n"
# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's go before my feelings cool!$"
# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat:
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's so hot, and yet my heart is\n"
# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "clutched by ice…$"
# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle:
# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The way the battling spirit burns\n"
# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "within you, you may stand a chance\l"
# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "against our LEADER.$"
# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro:
# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "See how the flames blaze wildly?\n"
# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "They flare in anticipation of my win!$"
# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat:
# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Something didn't go right.$"
# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, so what? I say so what?\n"
# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I can walk on hot coals barefoot!\p"
# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "…Don't even think about trying it!$"
# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro:
# 398 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "As much as I love mountains,\n"
# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I especially love volcanoes.$"
# 400 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat:
# 402 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, it seems to me I lost without\n"
# 403 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ever being in control.$"
# 404 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 405 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle:
# 406 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I stay here because I became a fan\n"
# 407 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of FLANNERY's power.\p"
# 408 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hehehehe.$"
# 409 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 410 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro:
# 411 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Welcome… No, wait.\p"
# 412 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Puny TRAINER, how good to see you've\n"
# 413 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "made it here!\p"
# 414 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been entrusted with the…\n"
# 415 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No, wait.\p"
# 416 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I am FLANNERY, and I'm the GYM\n"
# 417 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LEADER here!\p"
# 418 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Uh…\n"
# 419 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Dare not underestimate me, though\l"
# 420 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been LEADER only a short time!\p"
# 421 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "With skills inherited from my grand-\n"
# 422 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "father, I shall, uh…demonstrate the\l"
# 423 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot moves we have honed on this land!$"
# 424 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 425 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
# 426 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh…\n"
# 427 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I guess I was trying too hard…\p"
# 428 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I… I've only recently become\n"
# 429 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "a GYM LEADER.\p"
# 430 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I tried too hard to be someone\n"
# 431 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm not.\p"
# 432 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have to do things my natural way. If\n"
# 433 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I don't, my POKéMON will be confused.\p"
# 434 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Thanks for teaching me that.\n"
# 435 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "For that, you deserve this.$"
# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
# 438 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} received the HEAT BADGE\n"
# 439 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "from FLANNERY.$"
# 440 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 441 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
# 442 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you have a HEAT BADGE, all POKéMON\n"
# 443 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "up to Level 50, even those you get in\l"
# 444 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "trades from other people, will obey\l"
# 445 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "you completely.\p"
# 446 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And, it lets POKéMON use the HM move\n"
# 447 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "STRENGTH outside of battle.\p"
# 448 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "This is a token of my appreciation.\n"
# 449 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't be shy about taking it!$"
# 450 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 451 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat:
# 452 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM50 contains OVERHEAT.\p"
# 453 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That move inflicts serious damage on\n"
# 454 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the opponent.\p"
# 455 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But it also sharply cuts the SP. ATK\n"
# 456 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of the POKéMON using it. It might not\l"
# 457 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "be suitable for longer battles.$"
# 458 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 459 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
# 460 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER FLANNERY\n"
# 461 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 462 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 463 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
# 464 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your power reminds me of someone…\p"
# 465 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh! I know! You battle like NORMAN,\n"
# 466 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the GYM LEADER of PETALBURG.$"
# 467 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 468 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue:
# 469 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM$"
# 470 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 471 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified:
# 472 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\p"
# 473 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY'S CERTIFIED TRAINERS:\n"
# 474 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 475 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 476 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
# 477 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 478 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 479 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 480 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 481 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 482 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 483 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!$"
# 484 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 485 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
# 486 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
# 487 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "On the verge of eruption!$"
# 488 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 489 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
# 490 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: I lost the match,\n"
# 491 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "but I'm completely satisfied.\p"
# 492 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's not often I get to enjoy a battle\n"
# 493 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "this heated.\p"
# 494 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's have another one like this\n"
# 495 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "again sometime!$"
# 496 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 497 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
# 498 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 499 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 500 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 501 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 502 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 503 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 504 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!\p"
# 505 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, wait. Do you only have one POKéMON\n"
# 506 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "that can battle?\p"
# 507 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hate to say this, but when you come\n"
# 508 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "see me, bring at least two POKéMON.$"
# 509 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 510 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReadyToFight:
# 511 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Feeling tough?$"
# 512 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 513 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ComeBackWhenReady:
# 514 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hah! Come back when you're ready!$"

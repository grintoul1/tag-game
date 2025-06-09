# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts::
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_Gym_1F_OnFrame
# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnFrame:
# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 29, LavaridgeTown_Gym_1F_EventScript_ProgressEmmieState
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.2byte 0
# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_ProgressEmmieState::
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 30
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition:
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery2::
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_FlanneryIntro MSGBOX_AUTOCLOSE
# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_FlanneryDoMultiBattle
# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
releaseall
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDoMultiBattle::
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
multi_2p_vs_1 TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, PARTNER_EMMIE
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
switch VAR_RESULT
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
case 1, LavaridgeTown_Gym_1F_EventScript_FlanneryVictory
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
special SetCB2WhiteOut
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitstate
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryVictory::
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_LEVEL_CAP, 65
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_PARTNER_EMMIE_STATE, 31
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Movement_Flannery_NotReady:
# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
walk_down
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
step_end
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery::
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Flannery2
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_118_AQUA
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldCole::
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GERALD
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_GeraldIntro MSGBOX_AUTOCLOSE
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_COLE
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_ColeIntro, MSGBOX_AUTOCLOSE
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_GeraldColeDoMultiBattle
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
releaseall
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldColeDoMultiBattle::
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldDefeat, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeDefeat, PARTNER_EMMIE
# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
switch VAR_RESULT
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
case 1, LavaridgeTown_Gym_1F_EventScript_GeraldColeVictory
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
special SetCB2WhiteOut
# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitstate
# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldColeVictory::
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_COLE
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_GERALD
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
addvar VAR_LAVARIDGE_GYM_STATE, 1
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleAxle::
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_DANIELLE
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_DanielleIntro MSGBOX_AUTOCLOSE
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_AXLE
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_AxleIntro, MSGBOX_AUTOCLOSE
# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_DanielleAxleDoMultiBattle
# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
releaseall
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleAxleDoMultiBattle::
# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
multi_2p_vs_2 TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleDefeat, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleDefeat, PARTNER_EMMIE
# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
switch VAR_RESULT
# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
case 1, LavaridgeTown_Gym_1F_EventScript_DanielleAxleVictory
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
special SetCB2WhiteOut
# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitstate
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleAxleVictory::
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_DANIELLE
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_AXLE
# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
addvar VAR_LAVARIDGE_GYM_STATE, 1
# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_End::
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE's GYM LEADER FLANNERY\n"
# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "uses FIRE-type POKéMON.\p"
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Her passion for POKéMON burns stronger\n"
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "and hotter than a volcano.\p"
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't get too close to her--you'll burn!\n"
# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hose her down with water and then\l"
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "go for it!$"
# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yow! That was a scorching-hot battle!$"
# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro:
# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Owowowowow!\n"
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yikes, it's hot!$"
# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat:
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm blinded by sweat in my eyes…$"
# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle:
# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Being buried in hot sand promotes\n"
# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "circulation.\p"
# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's effective for healing pain in\n"
# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your joints.$"
# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro:
# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm trying to relieve my stress.\n"
# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't come along and stress me out!$"
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat:
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hope FLANNERY flames you good!$"
# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle:
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Haaah… Whew…\p"
# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you spend too much time buried in\n"
# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot sand, it tuckers you out…$"
# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro:
# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You must be getting tired by now.\n"
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You'd like to rest in the hot sand,\l"
# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "wouldn't you?\p"
# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But you should know that maintaining\n"
# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your willpower is an important ability\l"
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "for all TRAINERS.$"
# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Play with fire, and be burned…$"
# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your skill is real…\n"
# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But our LEADER FLANNERY is strong.\p"
# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you don't watch yourself, you'll be\n"
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "burned seriously.$"
# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro:
# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Can your POKéMON withstand\n"
# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392-degree heat?$"
# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat:
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It didn't burn hotly enough…$"
# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The temperature of magma is\n"
# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392 degrees.\p"
# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your POKéMON beat me, so they should\n"
# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "easily survive in magma.$"
# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro:
# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Um…\n"
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Okay, I'll battle with you.$"
# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat:
# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, but you're too strong.$"
# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm going to be a pretty and strong\n"
# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "TRAINER just like FLANNERY.$"
# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro:
# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Come on, get with it!\n"
# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's go before my feelings cool!$"
# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat:
# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's so hot, and yet my heart is\n"
# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "clutched by ice…$"
# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle:
# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The way the battling spirit burns\n"
# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "within you, you may stand a chance\l"
# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "against our LEADER.$"
# 398 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro:
# 400 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "See how the flames blaze wildly?\n"
# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "They flare in anticipation of my win!$"
# 402 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 403 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat:
# 404 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Something didn't go right.$"
# 405 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 406 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
# 407 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, so what? I say so what?\n"
# 408 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I can walk on hot coals barefoot!\p"
# 409 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "…Don't even think about trying it!$"
# 410 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 411 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro:
# 412 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "As much as I love mountains,\n"
# 413 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I especially love volcanoes.$"
# 414 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 415 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat:
# 416 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, it seems to me I lost without\n"
# 417 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ever being in control.$"
# 418 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 419 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle:
# 420 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I stay here because I became a fan\n"
# 421 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of FLANNERY's power.\p"
# 422 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hehehehe.$"
# 423 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 424 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro:
# 425 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Welcome… No, wait.\p"
# 426 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Puny TRAINER, how good to see you've\n"
# 427 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "made it here!\p"
# 428 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been entrusted with the…\n"
# 429 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No, wait.\p"
# 430 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I am FLANNERY, and I'm the GYM\n"
# 431 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LEADER here!\p"
# 432 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Uh…\n"
# 433 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Dare not underestimate me, though\l"
# 434 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been LEADER only a short time!\p"
# 435 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "With skills inherited from my grand-\n"
# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "father, I shall, uh…demonstrate the\l"
# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot moves we have honed on this land!$"
# 438 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 439 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
# 440 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh…\n"
# 441 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I guess I was trying too hard…\p"
# 442 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I… I've only recently become\n"
# 443 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "a GYM LEADER.\p"
# 444 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I tried too hard to be someone\n"
# 445 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm not.\p"
# 446 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have to do things my natural way. If\n"
# 447 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I don't, my POKéMON will be confused.\p"
# 448 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Thanks for teaching me that.\n"
# 449 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "For that, you deserve this.$"
# 450 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 451 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
# 452 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} received the HEAT BADGE\n"
# 453 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "from FLANNERY.$"
# 454 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 455 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
# 456 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you have a HEAT BADGE, all POKéMON\n"
# 457 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "up to Level 50, even those you get in\l"
# 458 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "trades from other people, will obey\l"
# 459 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "you completely.\p"
# 460 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And, it lets POKéMON use the HM move\n"
# 461 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "STRENGTH outside of battle.\p"
# 462 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "This is a token of my appreciation.\n"
# 463 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't be shy about taking it!$"
# 464 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 465 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat:
# 466 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM50 contains OVERHEAT.\p"
# 467 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That move inflicts serious damage on\n"
# 468 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the opponent.\p"
# 469 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But it also sharply cuts the SP. ATK\n"
# 470 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of the POKéMON using it. It might not\l"
# 471 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "be suitable for longer battles.$"
# 472 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 473 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
# 474 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER FLANNERY\n"
# 475 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 476 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 477 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
# 478 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your power reminds me of someone…\p"
# 479 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh! I know! You battle like NORMAN,\n"
# 480 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the GYM LEADER of PETALBURG.$"
# 481 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 482 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue:
# 483 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM$"
# 484 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 485 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified:
# 486 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\p"
# 487 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY'S CERTIFIED TRAINERS:\n"
# 488 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 489 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 490 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
# 491 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 492 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 493 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 494 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 495 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 496 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 497 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!$"
# 498 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 499 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
# 500 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
# 501 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "On the verge of eruption!$"
# 502 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 503 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
# 504 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: I lost the match,\n"
# 505 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "but I'm completely satisfied.\p"
# 506 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's not often I get to enjoy a battle\n"
# 507 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "this heated.\p"
# 508 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's have another one like this\n"
# 509 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "again sometime!$"
# 510 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 511 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
# 512 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 513 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 514 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 515 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 516 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 517 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 518 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!\p"
# 519 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, wait. Do you only have one POKéMON\n"
# 520 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "that can battle?\p"
# 521 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hate to say this, but when you come\n"
# 522 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "see me, bring at least two POKéMON.$"
# 523 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 524 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReadyToFight:
# 525 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Feeling tough?$"
# 526 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 527 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ComeBackWhenReady:
# 528 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hah! Come back when you're ready!$"

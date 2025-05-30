# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts::
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition:
# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery2::
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_FlanneryIntro MSGBOX_AUTOCLOSE
# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_FlanneryDoMultiBattle
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
releaseall
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDoMultiBattle::
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
multi_2p_vs_1 TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, PARTNER_EMMIE
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
switch VAR_RESULT
# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
case 1, LavaridgeTown_Gym_1F_EventScript_FlanneryVictory
# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
special SetCB2WhiteOut
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitstate
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryVictory::
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_LEVEL_CAP, 65
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Movement_Flannery_NotReady:
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
walk_down
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
step_end
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery::
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Flannery2
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_118_AQUA
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldCole::
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GERALD
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_GeraldIntro MSGBOX_AUTOCLOSE
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_COLE
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_ColeIntro, MSGBOX_AUTOCLOSE
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_GeraldColeDoMultiBattle
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
releaseall
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldColeDoMultiBattle::
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldDefeat, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeDefeat, PARTNER_EMMIE
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
switch VAR_RESULT
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
case 1, LavaridgeTown_Gym_1F_EventScript_GeraldColeVictory
# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
special SetCB2WhiteOut
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitstate
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldColeVictory::
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_COLE
# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_GERALD
# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
addvar VAR_LAVARIDGE_GYM_STATE, 1
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleAxle::
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_DANIELLE
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_DanielleIntro MSGBOX_AUTOCLOSE
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_AXLE
# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Movement_RevealTrainer
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_AxleIntro, MSGBOX_AUTOCLOSE
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_DanielleAxleDoMultiBattle
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
releaseall
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleAxleDoMultiBattle::
# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
multi_2p_vs_2 TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleDefeat, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleDefeat, PARTNER_EMMIE
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
switch VAR_RESULT
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
case 1, LavaridgeTown_Gym_1F_EventScript_DanielleAxleVictory
# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
special SetCB2WhiteOut
# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitstate
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleAxleVictory::
# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_DANIELLE
# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
settrainerflag TRAINER_AXLE
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
addvar VAR_LAVARIDGE_GYM_STATE, 1
# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
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
	faceplayer
# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE's GYM LEADER FLANNERY\n"
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "uses FIRE-type POKéMON.\p"
# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Her passion for POKéMON burns stronger\n"
# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "and hotter than a volcano.\p"
# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't get too close to her--you'll burn!\n"
# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hose her down with water and then\l"
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "go for it!$"
# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yow! That was a scorching-hot battle!$"
# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro:
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Owowowowow!\n"
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yikes, it's hot!$"
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat:
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm blinded by sweat in my eyes…$"
# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle:
# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Being buried in hot sand promotes\n"
# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "circulation.\p"
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's effective for healing pain in\n"
# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your joints.$"
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro:
# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm trying to relieve my stress.\n"
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't come along and stress me out!$"
# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat:
# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hope FLANNERY flames you good!$"
# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle:
# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Haaah… Whew…\p"
# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you spend too much time buried in\n"
# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot sand, it tuckers you out…$"
# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro:
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You must be getting tired by now.\n"
# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You'd like to rest in the hot sand,\l"
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "wouldn't you?\p"
# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But you should know that maintaining\n"
# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your willpower is an important ability\l"
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "for all TRAINERS.$"
# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Play with fire, and be burned…$"
# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your skill is real…\n"
# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But our LEADER FLANNERY is strong.\p"
# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you don't watch yourself, you'll be\n"
# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "burned seriously.$"
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro:
# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Can your POKéMON withstand\n"
# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392-degree heat?$"
# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat:
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It didn't burn hotly enough…$"
# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The temperature of magma is\n"
# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392 degrees.\p"
# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your POKéMON beat me, so they should\n"
# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "easily survive in magma.$"
# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro:
# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Um…\n"
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Okay, I'll battle with you.$"
# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat:
# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, but you're too strong.$"
# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm going to be a pretty and strong\n"
# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "TRAINER just like FLANNERY.$"
# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro:
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Come on, get with it!\n"
# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's go before my feelings cool!$"
# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat:
# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's so hot, and yet my heart is\n"
# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "clutched by ice…$"
# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle:
# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The way the battling spirit burns\n"
# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "within you, you may stand a chance\l"
# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "against our LEADER.$"
# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro:
# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "See how the flames blaze wildly?\n"
# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "They flare in anticipation of my win!$"
# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat:
# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Something didn't go right.$"
# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, so what? I say so what?\n"
# 398 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I can walk on hot coals barefoot!\p"
# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "…Don't even think about trying it!$"
# 400 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro:
# 402 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "As much as I love mountains,\n"
# 403 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I especially love volcanoes.$"
# 404 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 405 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat:
# 406 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, it seems to me I lost without\n"
# 407 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ever being in control.$"
# 408 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 409 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle:
# 410 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I stay here because I became a fan\n"
# 411 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of FLANNERY's power.\p"
# 412 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hehehehe.$"
# 413 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 414 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro:
# 415 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Welcome… No, wait.\p"
# 416 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Puny TRAINER, how good to see you've\n"
# 417 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "made it here!\p"
# 418 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been entrusted with the…\n"
# 419 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No, wait.\p"
# 420 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I am FLANNERY, and I'm the GYM\n"
# 421 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LEADER here!\p"
# 422 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Uh…\n"
# 423 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Dare not underestimate me, though\l"
# 424 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been LEADER only a short time!\p"
# 425 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "With skills inherited from my grand-\n"
# 426 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "father, I shall, uh…demonstrate the\l"
# 427 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot moves we have honed on this land!$"
# 428 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 429 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
# 430 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh…\n"
# 431 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I guess I was trying too hard…\p"
# 432 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I… I've only recently become\n"
# 433 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "a GYM LEADER.\p"
# 434 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I tried too hard to be someone\n"
# 435 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm not.\p"
# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have to do things my natural way. If\n"
# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I don't, my POKéMON will be confused.\p"
# 438 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Thanks for teaching me that.\n"
# 439 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "For that, you deserve this.$"
# 440 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 441 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
# 442 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} received the HEAT BADGE\n"
# 443 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "from FLANNERY.$"
# 444 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 445 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
# 446 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you have a HEAT BADGE, all POKéMON\n"
# 447 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "up to Level 50, even those you get in\l"
# 448 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "trades from other people, will obey\l"
# 449 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "you completely.\p"
# 450 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And, it lets POKéMON use the HM move\n"
# 451 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "STRENGTH outside of battle.\p"
# 452 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "This is a token of my appreciation.\n"
# 453 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't be shy about taking it!$"
# 454 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 455 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat:
# 456 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM50 contains OVERHEAT.\p"
# 457 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That move inflicts serious damage on\n"
# 458 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the opponent.\p"
# 459 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But it also sharply cuts the SP. ATK\n"
# 460 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of the POKéMON using it. It might not\l"
# 461 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "be suitable for longer battles.$"
# 462 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 463 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
# 464 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER FLANNERY\n"
# 465 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 466 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 467 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
# 468 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your power reminds me of someone…\p"
# 469 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh! I know! You battle like NORMAN,\n"
# 470 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the GYM LEADER of PETALBURG.$"
# 471 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 472 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue:
# 473 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM$"
# 474 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 475 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified:
# 476 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\p"
# 477 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY'S CERTIFIED TRAINERS:\n"
# 478 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 479 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 480 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
# 481 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 482 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 483 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 484 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 485 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 486 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 487 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!$"
# 488 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 489 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
# 490 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
# 491 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "On the verge of eruption!$"
# 492 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 493 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
# 494 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: I lost the match,\n"
# 495 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "but I'm completely satisfied.\p"
# 496 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's not often I get to enjoy a battle\n"
# 497 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "this heated.\p"
# 498 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's have another one like this\n"
# 499 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "again sometime!$"
# 500 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 501 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
# 502 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 503 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 504 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 505 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 506 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 507 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 508 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!\p"
# 509 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, wait. Do you only have one POKéMON\n"
# 510 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "that can battle?\p"
# 511 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hate to say this, but when you come\n"
# 512 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "see me, bring at least two POKéMON.$"
# 513 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 514 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReadyToFight:
# 515 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Feeling tough?$"
# 516 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 517 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ComeBackWhenReady:
# 518 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hah! Come back when you're ready!$"

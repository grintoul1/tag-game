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
	end
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_gt VAR_LAVARIDGE_GYM_STATE, 0, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_gt VAR_LAVARIDGE_GYM_STATE, 0, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_gt VAR_LAVARIDGE_GYM_STATE, 2, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_gt VAR_LAVARIDGE_GYM_STATE, 2, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery2::
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_FlanneryIntro MSGBOX_AUTOCLOSE
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_ReadyToFight MSGBOX_YESNO
# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto_if_eq VAR_RESULT, YES, LavaridgeTown_Gym_1F_EventScript_FlanneryDoMultiBattle
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_ComeBackWhenReady, MSGBOX_DEFAULT
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
closemessage
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Gym_1F_Movement_Flannery_NotReady
# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
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
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
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
waitmovement 0
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_GeraldIntro MSGBOX_AUTOCLOSE
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_COLE
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_ColeIntro, MSGBOX_AUTOCLOSE
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
goto LavaridgeTown_Gym_1F_EventScript_GeraldColeDoMultiBattle
# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
releaseall
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldColeDoMultiBattle::
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_GYM, TRUE
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldDefeat, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeDefeat, PARTNER_EMMIE
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
switch VAR_RESULT
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
case 1, LavaridgeTown_Gym_1F_EventScript_GeraldColeVictory
# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
special SetCB2WhiteOut
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitstate
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GeraldColeVictory::
# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
addvar VAR_LAVARIDGE_GYM_STATE, 1
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_DanielleAxle::
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
lockall
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_DANIELLE
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
msgbox LavaridgeTown_Gym_1F_Text_DanielleIntro MSGBOX_AUTOCLOSE
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
setvar VAR_0x8008, LOCALID_AXLE
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playse SE_PIN
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
waitmovement 0
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
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
addvar VAR_LAVARIDGE_GYM_STATE, 1
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
end
# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_End::
# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
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
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE's GYM LEADER FLANNERY\n"
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "uses FIRE-type POKéMON.\p"
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Her passion for POKéMON burns stronger\n"
# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "and hotter than a volcano.\p"
# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't get too close to her--you'll burn!\n"
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hose her down with water and then\l"
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "go for it!$"
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yow! That was a scorching-hot battle!$"
# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro:
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Owowowowow!\n"
# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yikes, it's hot!$"
# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat:
# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm blinded by sweat in my eyes…$"
# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle:
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Being buried in hot sand promotes\n"
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "circulation.\p"
# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's effective for healing pain in\n"
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your joints.$"
# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro:
# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm trying to relieve my stress.\n"
# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't come along and stress me out!$"
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat:
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hope FLANNERY flames you good!$"
# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle:
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Haaah… Whew…\p"
# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you spend too much time buried in\n"
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot sand, it tuckers you out…$"
# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro:
# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You must be getting tired by now.\n"
# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You'd like to rest in the hot sand,\l"
# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "wouldn't you?\p"
# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But you should know that maintaining\n"
# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your willpower is an important ability\l"
# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "for all TRAINERS.$"
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Play with fire, and be burned…$"
# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your skill is real…\n"
# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But our LEADER FLANNERY is strong.\p"
# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you don't watch yourself, you'll be\n"
# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "burned seriously.$"
# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro:
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Can your POKéMON withstand\n"
# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392-degree heat?$"
# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat:
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It didn't burn hotly enough…$"
# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The temperature of magma is\n"
# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392 degrees.\p"
# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your POKéMON beat me, so they should\n"
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "easily survive in magma.$"
# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro:
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Um…\n"
# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Okay, I'll battle with you.$"
# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat:
# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, but you're too strong.$"
# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm going to be a pretty and strong\n"
# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "TRAINER just like FLANNERY.$"
# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro:
# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Come on, get with it!\n"
# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's go before my feelings cool!$"
# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat:
# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's so hot, and yet my heart is\n"
# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "clutched by ice…$"
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle:
# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The way the battling spirit burns\n"
# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "within you, you may stand a chance\l"
# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "against our LEADER.$"
# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro:
# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "See how the flames blaze wildly?\n"
# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "They flare in anticipation of my win!$"
# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat:
# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Something didn't go right.$"
# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, so what? I say so what?\n"
# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I can walk on hot coals barefoot!\p"
# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "…Don't even think about trying it!$"
# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro:
# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "As much as I love mountains,\n"
# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I especially love volcanoes.$"
# 398 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat:
# 400 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, it seems to me I lost without\n"
# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ever being in control.$"
# 402 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 403 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle:
# 404 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I stay here because I became a fan\n"
# 405 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of FLANNERY's power.\p"
# 406 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hehehehe.$"
# 407 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 408 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro:
# 409 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Welcome… No, wait.\p"
# 410 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Puny TRAINER, how good to see you've\n"
# 411 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "made it here!\p"
# 412 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been entrusted with the…\n"
# 413 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No, wait.\p"
# 414 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I am FLANNERY, and I'm the GYM\n"
# 415 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LEADER here!\p"
# 416 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Uh…\n"
# 417 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Dare not underestimate me, though\l"
# 418 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been LEADER only a short time!\p"
# 419 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "With skills inherited from my grand-\n"
# 420 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "father, I shall, uh…demonstrate the\l"
# 421 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot moves we have honed on this land!$"
# 422 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 423 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
# 424 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh…\n"
# 425 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I guess I was trying too hard…\p"
# 426 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I… I've only recently become\n"
# 427 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "a GYM LEADER.\p"
# 428 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I tried too hard to be someone\n"
# 429 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm not.\p"
# 430 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have to do things my natural way. If\n"
# 431 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I don't, my POKéMON will be confused.\p"
# 432 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Thanks for teaching me that.\n"
# 433 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "For that, you deserve this.$"
# 434 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 435 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} received the HEAT BADGE\n"
# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "from FLANNERY.$"
# 438 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 439 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
# 440 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you have a HEAT BADGE, all POKéMON\n"
# 441 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "up to Level 50, even those you get in\l"
# 442 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "trades from other people, will obey\l"
# 443 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "you completely.\p"
# 444 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And, it lets POKéMON use the HM move\n"
# 445 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "STRENGTH outside of battle.\p"
# 446 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "This is a token of my appreciation.\n"
# 447 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't be shy about taking it!$"
# 448 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 449 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat:
# 450 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM50 contains OVERHEAT.\p"
# 451 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That move inflicts serious damage on\n"
# 452 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the opponent.\p"
# 453 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But it also sharply cuts the SP. ATK\n"
# 454 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of the POKéMON using it. It might not\l"
# 455 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "be suitable for longer battles.$"
# 456 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 457 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
# 458 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER FLANNERY\n"
# 459 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 460 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 461 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
# 462 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your power reminds me of someone…\p"
# 463 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh! I know! You battle like NORMAN,\n"
# 464 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the GYM LEADER of PETALBURG.$"
# 465 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 466 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue:
# 467 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM$"
# 468 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 469 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified:
# 470 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\p"
# 471 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY'S CERTIFIED TRAINERS:\n"
# 472 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 473 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 474 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
# 475 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 476 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 477 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 478 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 479 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 480 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 481 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!$"
# 482 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 483 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
# 484 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
# 485 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "On the verge of eruption!$"
# 486 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 487 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
# 488 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: I lost the match,\n"
# 489 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "but I'm completely satisfied.\p"
# 490 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's not often I get to enjoy a battle\n"
# 491 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "this heated.\p"
# 492 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's have another one like this\n"
# 493 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "again sometime!$"
# 494 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 495 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
# 496 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
# 497 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 498 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love POKéMON.\n"
# 499 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 500 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this GYM!\p"
# 501 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 502 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!\p"
# 503 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, wait. Do you only have one POKéMON\n"
# 504 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "that can battle?\p"
# 505 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hate to say this, but when you come\n"
# 506 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "see me, bring at least two POKéMON.$"
# 507 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 508 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReadyToFight:
# 509 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Feeling tough?$"
# 510 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 511 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ComeBackWhenReady:
# 512 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hah! Come back when you're ready!$"

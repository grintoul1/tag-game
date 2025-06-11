# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_LAURA, 4
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_BRENDEN, 8
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_CRISTIAN, 6
# 5 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_TAKAO, 2
# 6 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_LILITH, 7
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_JOCELYN, 3
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_BRAWLY, 1
# 9 "data/maps/DewfordTown_Gym/scripts.pory"

# 10 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DewfordTown_Gym_OnFrame
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 14 "data/maps/DewfordTown_Gym/scripts.pory"

# 15 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnFrame:
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 13, DewfordTown_Gym_EventScript_ProgressEmmieState
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	.2byte 0
# 18 "data/maps/DewfordTown_Gym/scripts.pory"

# 19 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_ProgressEmmieState::
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 14
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 23 "data/maps/DewfordTown_Gym/scripts.pory"

# 24 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 27 "data/maps/DewfordTown_Gym/scripts.pory"

# 28 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetLightsOn
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 34 "data/maps/DewfordTown_Gym/scripts.pory"

# 35 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 39 "data/maps/DewfordTown_Gym/scripts.pory"

# 40 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 43 "data/maps/DewfordTown_Gym/scripts.pory"

# 44 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 47 "data/maps/DewfordTown_Gym/scripts.pory"

# 48 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 51 "data/maps/DewfordTown_Gym/scripts.pory"

# 52 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 55 "data/maps/DewfordTown_Gym/scripts.pory"

# 56 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 59 "data/maps/DewfordTown_Gym/scripts.pory"

# 60 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 64 "data/maps/DewfordTown_Gym/scripts.pory"

# 65 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 76 "data/maps/DewfordTown_Gym/scripts.pory"

# 77 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 79 "data/maps/DewfordTown_Gym/scripts.pory"

# 80 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 86 "data/maps/DewfordTown_Gym/scripts.pory"

# 87 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 92 "data/maps/DewfordTown_Gym/scripts.pory"

# 93 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 98 "data/maps/DewfordTown_Gym/scripts.pory"

# 99 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 104 "data/maps/DewfordTown_Gym/scripts.pory"

# 105 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 110 "data/maps/DewfordTown_Gym/scripts.pory"

# 111 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 116 "data/maps/DewfordTown_Gym/scripts.pory"

# 117 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 122 "data/maps/DewfordTown_Gym/scripts.pory"

# 123 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 144 "data/maps/DewfordTown_Gym/scripts.pory"

# 145 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly2::
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrawlyIntro, MSGBOX_AUTOCLOSE
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_BrawlyDoMultiBattle
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_ComeBackWhenReady, MSGBOX_DEFAULT
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
closemessage
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 155 "data/maps/DewfordTown_Gym/scripts.pory"

# 156 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDoMultiBattle::
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat, PARTNER_EMMIE
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_BrawlyVictory
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 164 "data/maps/DewfordTown_Gym/scripts.pory"

# 165 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyVictory::
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_DEWFORD_TOWN_STATE, 1
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 46
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 15
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyDefeated
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 171 "data/maps/DewfordTown_Gym/scripts.pory"

# 172 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Movement_Brawly_NotReady:
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
walk_down
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
step_end
# 175 "data/maps/DewfordTown_Gym/scripts.pory"

# 176 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly2
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 182 "data/maps/DewfordTown_Gym/scripts.pory"

# 183 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 197 "data/maps/DewfordTown_Gym/scripts.pory"

# 198 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 204 "data/maps/DewfordTown_Gym/scripts.pory"

# 205 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 212 "data/maps/DewfordTown_Gym/scripts.pory"

# 213 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 217 "data/maps/DewfordTown_Gym/scripts.pory"

# 218 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 222 "data/maps/DewfordTown_Gym/scripts.pory"

# 223 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 227 "data/maps/DewfordTown_Gym/scripts.pory"

# 228 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 232 "data/maps/DewfordTown_Gym/scripts.pory"

# 233 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 237 "data/maps/DewfordTown_Gym/scripts.pory"

# 238 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrenden::
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_LAURA
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LauraIntro MSGBOX_AUTOCLOSE
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_BRENDEN
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrendenIntro, MSGBOX_AUTOCLOSE
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_LauraBrendenDoMultiBattle
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 259 "data/maps/DewfordTown_Gym/scripts.pory"

# 260 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrendenDoMultiBattle::
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_LAURA, DewfordTown_Gym_Text_LauraDefeat, TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenDefeat, PARTNER_EMMIE
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_LauraBrendenVictory
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 268 "data/maps/DewfordTown_Gym/scripts.pory"

# 269 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrendenVictory::
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 278 "data/maps/DewfordTown_Gym/scripts.pory"

# 279 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 283 "data/maps/DewfordTown_Gym/scripts.pory"

# 284 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 288 "data/maps/DewfordTown_Gym/scripts.pory"

# 289 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 293 "data/maps/DewfordTown_Gym/scripts.pory"

# 294 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 298 "data/maps/DewfordTown_Gym/scripts.pory"

# 299 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakao::
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_CRISTIAN
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_CristianIntro MSGBOX_AUTOCLOSE
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_TAKAO
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_TakaoIntro, MSGBOX_AUTOCLOSE
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_CristianTakaoDoMultiBattle
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 320 "data/maps/DewfordTown_Gym/scripts.pory"

# 321 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakaoDoMultiBattle::
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianDefeat, TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoDefeat, PARTNER_EMMIE
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_CristianTakaoVictory
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 329 "data/maps/DewfordTown_Gym/scripts.pory"

# 330 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakaoVictory::
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 339 "data/maps/DewfordTown_Gym/scripts.pory"

# 340 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 344 "data/maps/DewfordTown_Gym/scripts.pory"

# 345 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 349 "data/maps/DewfordTown_Gym/scripts.pory"

# 350 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelyn::
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_LILITH
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LilithIntro MSGBOX_AUTOCLOSE
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JOCELYN
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_JocelynIntro, MSGBOX_AUTOCLOSE
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_LilithJocelynDoMultiBattle
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 371 "data/maps/DewfordTown_Gym/scripts.pory"

# 372 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelynDoMultiBattle::
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_LILITH, DewfordTown_Gym_Text_LilithDefeat, TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynDefeat, PARTNER_EMMIE
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_LilithJocelynVictory
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 380 "data/maps/DewfordTown_Gym/scripts.pory"

# 381 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelynVictory::
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 390 "data/maps/DewfordTown_Gym/scripts.pory"

# 391 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 395 "data/maps/DewfordTown_Gym/scripts.pory"

# 396 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 400 "data/maps/DewfordTown_Gym/scripts.pory"

# 401 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 408 "data/maps/DewfordTown_Gym/scripts.pory"

# 409 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 413 "data/maps/DewfordTown_Gym/scripts.pory"

# 414 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 419 "data/maps/DewfordTown_Gym/scripts.pory"

# 420 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 425 "data/maps/DewfordTown_Gym/scripts.pory"

# 426 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 430 "data/maps/DewfordTown_Gym/scripts.pory"

# 431 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 435 "data/maps/DewfordTown_Gym/scripts.pory"

# 436 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 449 "data/maps/DewfordTown_Gym/scripts.pory"

# 450 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 453 "data/maps/DewfordTown_Gym/scripts.pory"

# 454 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 457 "data/maps/DewfordTown_Gym/scripts.pory"

# 458 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"

# 461 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 464 "data/maps/DewfordTown_Gym/scripts.pory"

# 465 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 467 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 468 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 469 "data/maps/DewfordTown_Gym/scripts.pory"

# 470 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 473 "data/maps/DewfordTown_Gym/scripts.pory"

# 474 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 477 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 478 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 479 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 480 "data/maps/DewfordTown_Gym/scripts.pory"

# 481 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 484 "data/maps/DewfordTown_Gym/scripts.pory"

# 485 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 486 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 487 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 488 "data/maps/DewfordTown_Gym/scripts.pory"

# 489 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 490 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 493 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 494 "data/maps/DewfordTown_Gym/scripts.pory"

# 495 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 497 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 498 "data/maps/DewfordTown_Gym/scripts.pory"

# 499 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 500 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 501 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 502 "data/maps/DewfordTown_Gym/scripts.pory"

# 503 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 505 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 506 "data/maps/DewfordTown_Gym/scripts.pory"

# 507 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 508 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 509 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 510 "data/maps/DewfordTown_Gym/scripts.pory"

# 511 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 512 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 513 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 514 "data/maps/DewfordTown_Gym/scripts.pory"

# 515 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 516 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 517 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 518 "data/maps/DewfordTown_Gym/scripts.pory"

# 519 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 520 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 521 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 522 "data/maps/DewfordTown_Gym/scripts.pory"

# 523 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 524 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 525 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 526 "data/maps/DewfordTown_Gym/scripts.pory"

# 527 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 528 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 529 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 530 "data/maps/DewfordTown_Gym/scripts.pory"

# 531 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 532 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 533 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 534 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 537 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 538 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 539 "data/maps/DewfordTown_Gym/scripts.pory"

# 540 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 541 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 542 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 543 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 544 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 545 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 546 "data/maps/DewfordTown_Gym/scripts.pory"

# 547 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 548 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 549 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 550 "data/maps/DewfordTown_Gym/scripts.pory"

# 551 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 552 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 553 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 554 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 556 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 557 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 558 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 559 "data/maps/DewfordTown_Gym/scripts.pory"

# 560 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 561 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 562 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 564 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 565 "data/maps/DewfordTown_Gym/scripts.pory"

# 566 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 567 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 568 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 569 "data/maps/DewfordTown_Gym/scripts.pory"

# 570 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 571 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 572 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 573 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 574 "data/maps/DewfordTown_Gym/scripts.pory"

# 575 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 576 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 577 "data/maps/DewfordTown_Gym/scripts.pory"

# 578 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 579 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 580 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 581 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 582 "data/maps/DewfordTown_Gym/scripts.pory"

# 583 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 584 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 585 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 586 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 587 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 588 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 589 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 590 "data/maps/DewfordTown_Gym/scripts.pory"

# 591 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 592 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 593 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 594 "data/maps/DewfordTown_Gym/scripts.pory"

# 595 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 596 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 597 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 598 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 599 "data/maps/DewfordTown_Gym/scripts.pory"

# 600 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 601 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 602 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 603 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 604 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 605 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 606 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 607 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 608 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
# 609 "data/maps/DewfordTown_Gym/scripts.pory"

# 610 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReadyToFight:
# 611 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Think you can beat me?$"
# 612 "data/maps/DewfordTown_Gym/scripts.pory"

# 613 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ComeBackWhenReady:
# 614 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hah! Come back when you're ready!$"

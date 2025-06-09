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
	setvar VAR_PARTNER_EMMIE_STATE, 14
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 22 "data/maps/DewfordTown_Gym/scripts.pory"

# 23 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 26 "data/maps/DewfordTown_Gym/scripts.pory"

# 27 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetLightsOn
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 33 "data/maps/DewfordTown_Gym/scripts.pory"

# 34 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 38 "data/maps/DewfordTown_Gym/scripts.pory"

# 39 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 42 "data/maps/DewfordTown_Gym/scripts.pory"

# 43 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 46 "data/maps/DewfordTown_Gym/scripts.pory"

# 47 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 50 "data/maps/DewfordTown_Gym/scripts.pory"

# 51 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 54 "data/maps/DewfordTown_Gym/scripts.pory"

# 55 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 58 "data/maps/DewfordTown_Gym/scripts.pory"

# 59 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 63 "data/maps/DewfordTown_Gym/scripts.pory"

# 64 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 75 "data/maps/DewfordTown_Gym/scripts.pory"

# 76 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 78 "data/maps/DewfordTown_Gym/scripts.pory"

# 79 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 85 "data/maps/DewfordTown_Gym/scripts.pory"

# 86 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 91 "data/maps/DewfordTown_Gym/scripts.pory"

# 92 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 97 "data/maps/DewfordTown_Gym/scripts.pory"

# 98 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 103 "data/maps/DewfordTown_Gym/scripts.pory"

# 104 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 109 "data/maps/DewfordTown_Gym/scripts.pory"

# 110 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 115 "data/maps/DewfordTown_Gym/scripts.pory"

# 116 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 121 "data/maps/DewfordTown_Gym/scripts.pory"

# 122 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 143 "data/maps/DewfordTown_Gym/scripts.pory"

# 144 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly2::
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrawlyIntro, MSGBOX_AUTOCLOSE
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_BrawlyDoMultiBattle
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_ComeBackWhenReady, MSGBOX_DEFAULT
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
closemessage
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 154 "data/maps/DewfordTown_Gym/scripts.pory"

# 155 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDoMultiBattle::
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat, PARTNER_EMMIE
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_BrawlyVictory
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 163 "data/maps/DewfordTown_Gym/scripts.pory"

# 164 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyVictory::
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_DEWFORD_TOWN_STATE, 1
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 46
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 15
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyDefeated
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 170 "data/maps/DewfordTown_Gym/scripts.pory"

# 171 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Movement_Brawly_NotReady:
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
walk_down
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
step_end
# 174 "data/maps/DewfordTown_Gym/scripts.pory"

# 175 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly2
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 181 "data/maps/DewfordTown_Gym/scripts.pory"

# 182 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 196 "data/maps/DewfordTown_Gym/scripts.pory"

# 197 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 203 "data/maps/DewfordTown_Gym/scripts.pory"

# 204 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 211 "data/maps/DewfordTown_Gym/scripts.pory"

# 212 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 216 "data/maps/DewfordTown_Gym/scripts.pory"

# 217 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 221 "data/maps/DewfordTown_Gym/scripts.pory"

# 222 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 226 "data/maps/DewfordTown_Gym/scripts.pory"

# 227 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 231 "data/maps/DewfordTown_Gym/scripts.pory"

# 232 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 236 "data/maps/DewfordTown_Gym/scripts.pory"

# 237 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrenden::
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_LAURA
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LauraIntro MSGBOX_AUTOCLOSE
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_BRENDEN
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrendenIntro, MSGBOX_AUTOCLOSE
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_LauraBrendenDoMultiBattle
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 258 "data/maps/DewfordTown_Gym/scripts.pory"

# 259 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrendenDoMultiBattle::
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_LAURA, DewfordTown_Gym_Text_LauraDefeat, TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenDefeat, PARTNER_EMMIE
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_LauraBrendenVictory
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 267 "data/maps/DewfordTown_Gym/scripts.pory"

# 268 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrendenVictory::
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 277 "data/maps/DewfordTown_Gym/scripts.pory"

# 278 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 282 "data/maps/DewfordTown_Gym/scripts.pory"

# 283 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 287 "data/maps/DewfordTown_Gym/scripts.pory"

# 288 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 292 "data/maps/DewfordTown_Gym/scripts.pory"

# 293 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 297 "data/maps/DewfordTown_Gym/scripts.pory"

# 298 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakao::
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_CRISTIAN
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_CristianIntro MSGBOX_AUTOCLOSE
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_TAKAO
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_TakaoIntro, MSGBOX_AUTOCLOSE
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_CristianTakaoDoMultiBattle
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 319 "data/maps/DewfordTown_Gym/scripts.pory"

# 320 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakaoDoMultiBattle::
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianDefeat, TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoDefeat, PARTNER_EMMIE
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_CristianTakaoVictory
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 328 "data/maps/DewfordTown_Gym/scripts.pory"

# 329 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakaoVictory::
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 338 "data/maps/DewfordTown_Gym/scripts.pory"

# 339 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 343 "data/maps/DewfordTown_Gym/scripts.pory"

# 344 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 348 "data/maps/DewfordTown_Gym/scripts.pory"

# 349 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelyn::
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_LILITH
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LilithIntro MSGBOX_AUTOCLOSE
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JOCELYN
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_JocelynIntro, MSGBOX_AUTOCLOSE
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_LilithJocelynDoMultiBattle
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 370 "data/maps/DewfordTown_Gym/scripts.pory"

# 371 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelynDoMultiBattle::
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_LILITH, DewfordTown_Gym_Text_LilithDefeat, TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynDefeat, PARTNER_EMMIE
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_LilithJocelynVictory
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 379 "data/maps/DewfordTown_Gym/scripts.pory"

# 380 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelynVictory::
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 389 "data/maps/DewfordTown_Gym/scripts.pory"

# 390 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 394 "data/maps/DewfordTown_Gym/scripts.pory"

# 395 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 399 "data/maps/DewfordTown_Gym/scripts.pory"

# 400 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 407 "data/maps/DewfordTown_Gym/scripts.pory"

# 408 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 412 "data/maps/DewfordTown_Gym/scripts.pory"

# 413 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 418 "data/maps/DewfordTown_Gym/scripts.pory"

# 419 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 424 "data/maps/DewfordTown_Gym/scripts.pory"

# 425 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 429 "data/maps/DewfordTown_Gym/scripts.pory"

# 430 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 434 "data/maps/DewfordTown_Gym/scripts.pory"

# 435 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 448 "data/maps/DewfordTown_Gym/scripts.pory"

# 449 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"

# 453 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"

# 457 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"

# 460 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 463 "data/maps/DewfordTown_Gym/scripts.pory"

# 464 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 465 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 467 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 468 "data/maps/DewfordTown_Gym/scripts.pory"

# 469 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 470 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 472 "data/maps/DewfordTown_Gym/scripts.pory"

# 473 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 474 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 477 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 478 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 479 "data/maps/DewfordTown_Gym/scripts.pory"

# 480 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 483 "data/maps/DewfordTown_Gym/scripts.pory"

# 484 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 485 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 486 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 487 "data/maps/DewfordTown_Gym/scripts.pory"

# 488 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 489 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 490 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 493 "data/maps/DewfordTown_Gym/scripts.pory"

# 494 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 495 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 497 "data/maps/DewfordTown_Gym/scripts.pory"

# 498 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 499 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 500 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 501 "data/maps/DewfordTown_Gym/scripts.pory"

# 502 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 503 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 505 "data/maps/DewfordTown_Gym/scripts.pory"

# 506 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 507 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 508 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 509 "data/maps/DewfordTown_Gym/scripts.pory"

# 510 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 511 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 512 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 513 "data/maps/DewfordTown_Gym/scripts.pory"

# 514 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 515 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 516 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 517 "data/maps/DewfordTown_Gym/scripts.pory"

# 518 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 519 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 520 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 521 "data/maps/DewfordTown_Gym/scripts.pory"

# 522 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 523 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 524 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 525 "data/maps/DewfordTown_Gym/scripts.pory"

# 526 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 527 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 528 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 529 "data/maps/DewfordTown_Gym/scripts.pory"

# 530 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 531 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 532 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 533 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 534 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 537 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 538 "data/maps/DewfordTown_Gym/scripts.pory"

# 539 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 540 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 541 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 542 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 543 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 544 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 545 "data/maps/DewfordTown_Gym/scripts.pory"

# 546 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 547 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 548 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 549 "data/maps/DewfordTown_Gym/scripts.pory"

# 550 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 551 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 552 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 553 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 554 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 556 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 557 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 558 "data/maps/DewfordTown_Gym/scripts.pory"

# 559 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 560 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 561 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 562 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 564 "data/maps/DewfordTown_Gym/scripts.pory"

# 565 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 566 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 567 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 568 "data/maps/DewfordTown_Gym/scripts.pory"

# 569 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 570 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 571 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 572 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 573 "data/maps/DewfordTown_Gym/scripts.pory"

# 574 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 575 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 576 "data/maps/DewfordTown_Gym/scripts.pory"

# 577 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 578 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 579 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 580 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 581 "data/maps/DewfordTown_Gym/scripts.pory"

# 582 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 583 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 584 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 585 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 586 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 587 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 588 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 589 "data/maps/DewfordTown_Gym/scripts.pory"

# 590 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 591 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 592 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 593 "data/maps/DewfordTown_Gym/scripts.pory"

# 594 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 595 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 596 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 597 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 598 "data/maps/DewfordTown_Gym/scripts.pory"

# 599 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 600 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 601 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 602 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 603 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 604 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 605 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 606 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 607 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
# 608 "data/maps/DewfordTown_Gym/scripts.pory"

# 609 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReadyToFight:
# 610 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Think you can beat me?$"
# 611 "data/maps/DewfordTown_Gym/scripts.pory"

# 612 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ComeBackWhenReady:
# 613 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hah! Come back when you're ready!$"

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
	.byte 0
# 13 "data/maps/DewfordTown_Gym/scripts.pory"

# 14 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 17 "data/maps/DewfordTown_Gym/scripts.pory"

# 18 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetLightsOn
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 24 "data/maps/DewfordTown_Gym/scripts.pory"

# 25 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 29 "data/maps/DewfordTown_Gym/scripts.pory"

# 30 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 33 "data/maps/DewfordTown_Gym/scripts.pory"

# 34 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 37 "data/maps/DewfordTown_Gym/scripts.pory"

# 38 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 41 "data/maps/DewfordTown_Gym/scripts.pory"

# 42 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 45 "data/maps/DewfordTown_Gym/scripts.pory"

# 46 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 49 "data/maps/DewfordTown_Gym/scripts.pory"

# 50 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 54 "data/maps/DewfordTown_Gym/scripts.pory"

# 55 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 66 "data/maps/DewfordTown_Gym/scripts.pory"

# 67 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 69 "data/maps/DewfordTown_Gym/scripts.pory"

# 70 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 76 "data/maps/DewfordTown_Gym/scripts.pory"

# 77 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 82 "data/maps/DewfordTown_Gym/scripts.pory"

# 83 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 88 "data/maps/DewfordTown_Gym/scripts.pory"

# 89 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 94 "data/maps/DewfordTown_Gym/scripts.pory"

# 95 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 100 "data/maps/DewfordTown_Gym/scripts.pory"

# 101 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 106 "data/maps/DewfordTown_Gym/scripts.pory"

# 107 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 112 "data/maps/DewfordTown_Gym/scripts.pory"

# 113 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 134 "data/maps/DewfordTown_Gym/scripts.pory"

# 135 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly2::
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrawlyIntro, MSGBOX_AUTOCLOSE
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_BrawlyDoMultiBattle
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_ComeBackWhenReady, MSGBOX_DEFAULT
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
closemessage
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 145 "data/maps/DewfordTown_Gym/scripts.pory"

# 146 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDoMultiBattle::
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat, PARTNER_EMMIE
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_BrawlyVictory
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 154 "data/maps/DewfordTown_Gym/scripts.pory"

# 155 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyVictory::
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 46
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_BrawlyDefeated
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 160 "data/maps/DewfordTown_Gym/scripts.pory"

# 161 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Movement_Brawly_NotReady:
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
walk_down
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
step_end
# 164 "data/maps/DewfordTown_Gym/scripts.pory"

# 165 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly2
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 171 "data/maps/DewfordTown_Gym/scripts.pory"

# 172 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 186 "data/maps/DewfordTown_Gym/scripts.pory"

# 187 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 193 "data/maps/DewfordTown_Gym/scripts.pory"

# 194 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 201 "data/maps/DewfordTown_Gym/scripts.pory"

# 202 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 206 "data/maps/DewfordTown_Gym/scripts.pory"

# 207 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 210 "data/maps/DewfordTown_Gym/scripts.pory"

# 211 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 215 "data/maps/DewfordTown_Gym/scripts.pory"

# 216 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 219 "data/maps/DewfordTown_Gym/scripts.pory"

# 220 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 224 "data/maps/DewfordTown_Gym/scripts.pory"

# 225 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrenden::
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_LAURA
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LauraIntro MSGBOX_AUTOCLOSE
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_BRENDEN
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrendenIntro, MSGBOX_AUTOCLOSE
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_LauraBrendenDoMultiBattle
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 246 "data/maps/DewfordTown_Gym/scripts.pory"

# 247 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrendenDoMultiBattle::
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_LAURA, DewfordTown_Gym_Text_LauraDefeat, TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenDefeat, PARTNER_EMMIE
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_LauraBrendenVictory
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 255 "data/maps/DewfordTown_Gym/scripts.pory"

# 256 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrendenVictory::
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 265 "data/maps/DewfordTown_Gym/scripts.pory"

# 266 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 269 "data/maps/DewfordTown_Gym/scripts.pory"

# 270 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 274 "data/maps/DewfordTown_Gym/scripts.pory"

# 275 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 278 "data/maps/DewfordTown_Gym/scripts.pory"

# 279 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 283 "data/maps/DewfordTown_Gym/scripts.pory"

# 284 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakao::
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_CRISTIAN
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_CristianIntro MSGBOX_AUTOCLOSE
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_TAKAO
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_TakaoIntro, MSGBOX_AUTOCLOSE
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_CristianTakaoDoMultiBattle
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 305 "data/maps/DewfordTown_Gym/scripts.pory"

# 306 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakaoDoMultiBattle::
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianDefeat, TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoDefeat, PARTNER_EMMIE
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_CristianTakaoVictory
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 314 "data/maps/DewfordTown_Gym/scripts.pory"

# 315 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakaoVictory::
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 324 "data/maps/DewfordTown_Gym/scripts.pory"

# 325 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 328 "data/maps/DewfordTown_Gym/scripts.pory"

# 329 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 333 "data/maps/DewfordTown_Gym/scripts.pory"

# 334 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelyn::
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_LILITH
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LilithIntro MSGBOX_AUTOCLOSE
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JOCELYN
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_JocelynIntro, MSGBOX_AUTOCLOSE
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_LilithJocelynDoMultiBattle
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 355 "data/maps/DewfordTown_Gym/scripts.pory"

# 356 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelynDoMultiBattle::
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_LILITH, DewfordTown_Gym_Text_LilithDefeat, TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynDefeat, PARTNER_EMMIE
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_LilithJocelynVictory
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 364 "data/maps/DewfordTown_Gym/scripts.pory"

# 365 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelynVictory::
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 374 "data/maps/DewfordTown_Gym/scripts.pory"

# 375 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 378 "data/maps/DewfordTown_Gym/scripts.pory"

# 379 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 383 "data/maps/DewfordTown_Gym/scripts.pory"

# 384 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 391 "data/maps/DewfordTown_Gym/scripts.pory"

# 392 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 396 "data/maps/DewfordTown_Gym/scripts.pory"

# 397 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 402 "data/maps/DewfordTown_Gym/scripts.pory"

# 403 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 408 "data/maps/DewfordTown_Gym/scripts.pory"

# 409 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 413 "data/maps/DewfordTown_Gym/scripts.pory"

# 414 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 418 "data/maps/DewfordTown_Gym/scripts.pory"

# 419 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 432 "data/maps/DewfordTown_Gym/scripts.pory"

# 433 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 436 "data/maps/DewfordTown_Gym/scripts.pory"

# 437 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 440 "data/maps/DewfordTown_Gym/scripts.pory"

# 441 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 443 "data/maps/DewfordTown_Gym/scripts.pory"

# 444 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"

# 448 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"

# 453 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"

# 457 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 463 "data/maps/DewfordTown_Gym/scripts.pory"

# 464 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 465 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 467 "data/maps/DewfordTown_Gym/scripts.pory"

# 468 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 469 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 470 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 471 "data/maps/DewfordTown_Gym/scripts.pory"

# 472 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 473 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 474 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 477 "data/maps/DewfordTown_Gym/scripts.pory"

# 478 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 479 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 480 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 481 "data/maps/DewfordTown_Gym/scripts.pory"

# 482 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 484 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 485 "data/maps/DewfordTown_Gym/scripts.pory"

# 486 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 487 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 488 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 489 "data/maps/DewfordTown_Gym/scripts.pory"

# 490 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 493 "data/maps/DewfordTown_Gym/scripts.pory"

# 494 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 495 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 497 "data/maps/DewfordTown_Gym/scripts.pory"

# 498 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 499 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 500 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 501 "data/maps/DewfordTown_Gym/scripts.pory"

# 502 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 503 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 505 "data/maps/DewfordTown_Gym/scripts.pory"

# 506 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 507 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 508 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 509 "data/maps/DewfordTown_Gym/scripts.pory"

# 510 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 511 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 512 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 513 "data/maps/DewfordTown_Gym/scripts.pory"

# 514 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 515 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 516 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 517 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 518 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 519 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 520 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 521 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 522 "data/maps/DewfordTown_Gym/scripts.pory"

# 523 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 524 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 525 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 526 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 527 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 528 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 529 "data/maps/DewfordTown_Gym/scripts.pory"

# 530 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 531 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 532 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 533 "data/maps/DewfordTown_Gym/scripts.pory"

# 534 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 537 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 538 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 539 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 540 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 541 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 542 "data/maps/DewfordTown_Gym/scripts.pory"

# 543 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 544 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 545 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 546 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 547 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 548 "data/maps/DewfordTown_Gym/scripts.pory"

# 549 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 550 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 551 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 552 "data/maps/DewfordTown_Gym/scripts.pory"

# 553 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 554 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 556 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 557 "data/maps/DewfordTown_Gym/scripts.pory"

# 558 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 559 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 560 "data/maps/DewfordTown_Gym/scripts.pory"

# 561 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 562 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 564 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 565 "data/maps/DewfordTown_Gym/scripts.pory"

# 566 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 567 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 568 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 569 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 570 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 571 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 572 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 573 "data/maps/DewfordTown_Gym/scripts.pory"

# 574 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 575 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 576 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 577 "data/maps/DewfordTown_Gym/scripts.pory"

# 578 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 579 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 580 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 581 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 582 "data/maps/DewfordTown_Gym/scripts.pory"

# 583 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 584 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 585 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 586 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 587 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 588 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 589 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 590 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 591 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
# 592 "data/maps/DewfordTown_Gym/scripts.pory"

# 593 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReadyToFight:
# 594 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Think you can beat me?$"
# 595 "data/maps/DewfordTown_Gym/scripts.pory"

# 596 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ComeBackWhenReady:
# 597 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hah! Come back when you're ready!$"

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
goto DewfordTown_Gym_EventScript_BrawlyDefeated
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 159 "data/maps/DewfordTown_Gym/scripts.pory"

# 160 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Movement_Brawly_NotReady:
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
walk_down
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
step_end
# 163 "data/maps/DewfordTown_Gym/scripts.pory"

# 164 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly2
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 170 "data/maps/DewfordTown_Gym/scripts.pory"

# 171 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 185 "data/maps/DewfordTown_Gym/scripts.pory"

# 186 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 192 "data/maps/DewfordTown_Gym/scripts.pory"

# 193 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 200 "data/maps/DewfordTown_Gym/scripts.pory"

# 201 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 205 "data/maps/DewfordTown_Gym/scripts.pory"

# 206 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 209 "data/maps/DewfordTown_Gym/scripts.pory"

# 210 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 214 "data/maps/DewfordTown_Gym/scripts.pory"

# 215 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 218 "data/maps/DewfordTown_Gym/scripts.pory"

# 219 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 223 "data/maps/DewfordTown_Gym/scripts.pory"

# 224 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrenden::
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_LAURA
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LauraIntro MSGBOX_AUTOCLOSE
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_BRENDEN
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrendenIntro, MSGBOX_AUTOCLOSE
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_LauraBrendenDoMultiBattle
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 245 "data/maps/DewfordTown_Gym/scripts.pory"

# 246 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrendenDoMultiBattle::
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_LAURA, DewfordTown_Gym_Text_LauraDefeat, TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenDefeat, PARTNER_EMMIE
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_LauraBrendenVictory
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 254 "data/maps/DewfordTown_Gym/scripts.pory"

# 255 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrendenVictory::
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 264 "data/maps/DewfordTown_Gym/scripts.pory"

# 265 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 268 "data/maps/DewfordTown_Gym/scripts.pory"

# 269 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 273 "data/maps/DewfordTown_Gym/scripts.pory"

# 274 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 277 "data/maps/DewfordTown_Gym/scripts.pory"

# 278 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 282 "data/maps/DewfordTown_Gym/scripts.pory"

# 283 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakao::
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_CRISTIAN
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_CristianIntro MSGBOX_AUTOCLOSE
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_TAKAO
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_TakaoIntro, MSGBOX_AUTOCLOSE
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_CristianTakaoDoMultiBattle
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 304 "data/maps/DewfordTown_Gym/scripts.pory"

# 305 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakaoDoMultiBattle::
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianDefeat, TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoDefeat, PARTNER_EMMIE
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_CristianTakaoVictory
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 313 "data/maps/DewfordTown_Gym/scripts.pory"

# 314 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakaoVictory::
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 323 "data/maps/DewfordTown_Gym/scripts.pory"

# 324 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 327 "data/maps/DewfordTown_Gym/scripts.pory"

# 328 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 332 "data/maps/DewfordTown_Gym/scripts.pory"

# 333 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelyn::
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_LILITH
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LilithIntro MSGBOX_AUTOCLOSE
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JOCELYN
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_JocelynIntro, MSGBOX_AUTOCLOSE
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_LilithJocelynDoMultiBattle
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 354 "data/maps/DewfordTown_Gym/scripts.pory"

# 355 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelynDoMultiBattle::
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_LILITH, DewfordTown_Gym_Text_LilithDefeat, TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynDefeat, PARTNER_EMMIE
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_LilithJocelynVictory
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 363 "data/maps/DewfordTown_Gym/scripts.pory"

# 364 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelynVictory::
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 373 "data/maps/DewfordTown_Gym/scripts.pory"

# 374 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 377 "data/maps/DewfordTown_Gym/scripts.pory"

# 378 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 382 "data/maps/DewfordTown_Gym/scripts.pory"

# 383 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 390 "data/maps/DewfordTown_Gym/scripts.pory"

# 391 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 395 "data/maps/DewfordTown_Gym/scripts.pory"

# 396 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 401 "data/maps/DewfordTown_Gym/scripts.pory"

# 402 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 407 "data/maps/DewfordTown_Gym/scripts.pory"

# 408 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 412 "data/maps/DewfordTown_Gym/scripts.pory"

# 413 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 417 "data/maps/DewfordTown_Gym/scripts.pory"

# 418 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"

# 432 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 435 "data/maps/DewfordTown_Gym/scripts.pory"

# 436 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 438 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 439 "data/maps/DewfordTown_Gym/scripts.pory"

# 440 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 442 "data/maps/DewfordTown_Gym/scripts.pory"

# 443 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"

# 447 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 451 "data/maps/DewfordTown_Gym/scripts.pory"

# 452 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 453 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"

# 456 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 462 "data/maps/DewfordTown_Gym/scripts.pory"

# 463 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 464 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 465 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 466 "data/maps/DewfordTown_Gym/scripts.pory"

# 467 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 468 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 469 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 470 "data/maps/DewfordTown_Gym/scripts.pory"

# 471 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 473 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 474 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 476 "data/maps/DewfordTown_Gym/scripts.pory"

# 477 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 478 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 479 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 480 "data/maps/DewfordTown_Gym/scripts.pory"

# 481 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 484 "data/maps/DewfordTown_Gym/scripts.pory"

# 485 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 486 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 487 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 488 "data/maps/DewfordTown_Gym/scripts.pory"

# 489 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 490 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 492 "data/maps/DewfordTown_Gym/scripts.pory"

# 493 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 494 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 495 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 496 "data/maps/DewfordTown_Gym/scripts.pory"

# 497 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 498 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 499 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 500 "data/maps/DewfordTown_Gym/scripts.pory"

# 501 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 502 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 503 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 504 "data/maps/DewfordTown_Gym/scripts.pory"

# 505 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 506 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 507 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 508 "data/maps/DewfordTown_Gym/scripts.pory"

# 509 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 510 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 511 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 512 "data/maps/DewfordTown_Gym/scripts.pory"

# 513 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 514 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 515 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 516 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 517 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 518 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 519 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 520 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 521 "data/maps/DewfordTown_Gym/scripts.pory"

# 522 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 523 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 524 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 525 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 526 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 527 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 528 "data/maps/DewfordTown_Gym/scripts.pory"

# 529 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 530 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 531 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 532 "data/maps/DewfordTown_Gym/scripts.pory"

# 533 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 534 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 537 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 538 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 539 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 540 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 541 "data/maps/DewfordTown_Gym/scripts.pory"

# 542 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 543 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 544 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 545 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 546 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 547 "data/maps/DewfordTown_Gym/scripts.pory"

# 548 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 549 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 550 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 551 "data/maps/DewfordTown_Gym/scripts.pory"

# 552 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 553 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 554 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 556 "data/maps/DewfordTown_Gym/scripts.pory"

# 557 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 558 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 559 "data/maps/DewfordTown_Gym/scripts.pory"

# 560 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 561 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 562 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 564 "data/maps/DewfordTown_Gym/scripts.pory"

# 565 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 566 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 567 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 568 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 569 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 570 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 571 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 572 "data/maps/DewfordTown_Gym/scripts.pory"

# 573 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 574 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 575 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 576 "data/maps/DewfordTown_Gym/scripts.pory"

# 577 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 578 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 579 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 580 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 581 "data/maps/DewfordTown_Gym/scripts.pory"

# 582 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 583 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 584 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 585 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 586 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 587 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 588 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 589 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 590 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
# 591 "data/maps/DewfordTown_Gym/scripts.pory"

# 592 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReadyToFight:
# 593 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Think you can beat me?$"
# 594 "data/maps/DewfordTown_Gym/scripts.pory"

# 595 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ComeBackWhenReady:
# 596 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hah! Come back when you're ready!$"

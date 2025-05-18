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
msgbox DewfordTown_Gym_Text_BrawlyIntro MSGBOX_AUTOCLOSE
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
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_BrawlyDefeated
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 161 "data/maps/DewfordTown_Gym/scripts.pory"

# 162 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Movement_Brawly_NotReady:
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
walk_down
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
step_end
# 165 "data/maps/DewfordTown_Gym/scripts.pory"

# 166 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly2
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 172 "data/maps/DewfordTown_Gym/scripts.pory"

# 173 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 187 "data/maps/DewfordTown_Gym/scripts.pory"

# 188 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 194 "data/maps/DewfordTown_Gym/scripts.pory"

# 195 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 202 "data/maps/DewfordTown_Gym/scripts.pory"

# 203 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 207 "data/maps/DewfordTown_Gym/scripts.pory"

# 208 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 211 "data/maps/DewfordTown_Gym/scripts.pory"

# 212 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 216 "data/maps/DewfordTown_Gym/scripts.pory"

# 217 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 220 "data/maps/DewfordTown_Gym/scripts.pory"

# 221 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 225 "data/maps/DewfordTown_Gym/scripts.pory"

# 226 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrenden::
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_LAURA
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LauraIntro MSGBOX_AUTOCLOSE
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_BRENDEN
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrendenIntro MSGBOX_AUTOCLOSE
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_LauraBrendenDoMultiBattle
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 247 "data/maps/DewfordTown_Gym/scripts.pory"

# 248 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrendenDoMultiBattle::
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_LAURA, DewfordTown_Gym_Text_LauraDefeat, TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenDefeat, PARTNER_EMMIE
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_LauraBrendenVictory
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 256 "data/maps/DewfordTown_Gym/scripts.pory"

# 257 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrendenVictory::
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 266 "data/maps/DewfordTown_Gym/scripts.pory"

# 267 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 270 "data/maps/DewfordTown_Gym/scripts.pory"

# 271 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 275 "data/maps/DewfordTown_Gym/scripts.pory"

# 276 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 279 "data/maps/DewfordTown_Gym/scripts.pory"

# 280 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 284 "data/maps/DewfordTown_Gym/scripts.pory"

# 285 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakao::
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_CRISTIAN
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_CristianIntro MSGBOX_AUTOCLOSE
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_TAKAO
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_TakaoIntro MSGBOX_AUTOCLOSE
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_CristianTakaoDoMultiBattle
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 306 "data/maps/DewfordTown_Gym/scripts.pory"

# 307 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakaoDoMultiBattle::
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianDefeat, TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoDefeat, PARTNER_EMMIE
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_CristianTakaoVictory
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 315 "data/maps/DewfordTown_Gym/scripts.pory"

# 316 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianTakaoVictory::
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 325 "data/maps/DewfordTown_Gym/scripts.pory"

# 326 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 329 "data/maps/DewfordTown_Gym/scripts.pory"

# 330 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 334 "data/maps/DewfordTown_Gym/scripts.pory"

# 335 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelyn::
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
lockall
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_LILITH
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 340 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LilithIntro MSGBOX_AUTOCLOSE
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JOCELYN
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
playse SE_PIN
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_JocelynIntro MSGBOX_AUTOCLOSE
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
goto DewfordTown_Gym_EventScript_LilithJocelynDoMultiBattle
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
releaseall
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 356 "data/maps/DewfordTown_Gym/scripts.pory"

# 357 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelynDoMultiBattle::
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_LILITH, DewfordTown_Gym_Text_LilithDefeat, TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynDefeat, PARTNER_EMMIE
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
switch VAR_RESULT
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
case 1, DewfordTown_Gym_EventScript_LilithJocelynVictory
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
special SetCB2WhiteOut
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
waitstate
# 365 "data/maps/DewfordTown_Gym/scripts.pory"

# 366 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithJocelynVictory::
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
waitmovement 0
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
addvar VAR_DEWFORD_TOWN_STATE, 1
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
end
# 375 "data/maps/DewfordTown_Gym/scripts.pory"

# 376 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 378 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 379 "data/maps/DewfordTown_Gym/scripts.pory"

# 380 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 382 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 384 "data/maps/DewfordTown_Gym/scripts.pory"

# 385 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 392 "data/maps/DewfordTown_Gym/scripts.pory"

# 393 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 395 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 397 "data/maps/DewfordTown_Gym/scripts.pory"

# 398 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 402 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 403 "data/maps/DewfordTown_Gym/scripts.pory"

# 404 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 409 "data/maps/DewfordTown_Gym/scripts.pory"

# 410 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 414 "data/maps/DewfordTown_Gym/scripts.pory"

# 415 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 419 "data/maps/DewfordTown_Gym/scripts.pory"

# 420 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 433 "data/maps/DewfordTown_Gym/scripts.pory"

# 434 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 437 "data/maps/DewfordTown_Gym/scripts.pory"

# 438 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"

# 442 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 444 "data/maps/DewfordTown_Gym/scripts.pory"

# 445 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 447 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 448 "data/maps/DewfordTown_Gym/scripts.pory"

# 449 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 450 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 453 "data/maps/DewfordTown_Gym/scripts.pory"

# 454 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 457 "data/maps/DewfordTown_Gym/scripts.pory"

# 458 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 464 "data/maps/DewfordTown_Gym/scripts.pory"

# 465 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 467 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 468 "data/maps/DewfordTown_Gym/scripts.pory"

# 469 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 470 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 472 "data/maps/DewfordTown_Gym/scripts.pory"

# 473 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 474 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 477 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 478 "data/maps/DewfordTown_Gym/scripts.pory"

# 479 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 480 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 482 "data/maps/DewfordTown_Gym/scripts.pory"

# 483 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 484 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 485 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 486 "data/maps/DewfordTown_Gym/scripts.pory"

# 487 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 488 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 489 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 490 "data/maps/DewfordTown_Gym/scripts.pory"

# 491 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 493 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 494 "data/maps/DewfordTown_Gym/scripts.pory"

# 495 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 497 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 498 "data/maps/DewfordTown_Gym/scripts.pory"

# 499 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 500 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 501 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 502 "data/maps/DewfordTown_Gym/scripts.pory"

# 503 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 505 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 506 "data/maps/DewfordTown_Gym/scripts.pory"

# 507 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 508 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 509 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 510 "data/maps/DewfordTown_Gym/scripts.pory"

# 511 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 512 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 513 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 514 "data/maps/DewfordTown_Gym/scripts.pory"

# 515 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 516 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 517 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 518 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 519 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 520 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 521 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 522 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 523 "data/maps/DewfordTown_Gym/scripts.pory"

# 524 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 525 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 526 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 527 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 528 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 529 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 530 "data/maps/DewfordTown_Gym/scripts.pory"

# 531 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 532 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 533 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 534 "data/maps/DewfordTown_Gym/scripts.pory"

# 535 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 537 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 538 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 539 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 540 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 541 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 542 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 543 "data/maps/DewfordTown_Gym/scripts.pory"

# 544 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 545 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 546 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 547 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 548 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 549 "data/maps/DewfordTown_Gym/scripts.pory"

# 550 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 551 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 552 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 553 "data/maps/DewfordTown_Gym/scripts.pory"

# 554 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 556 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 557 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 558 "data/maps/DewfordTown_Gym/scripts.pory"

# 559 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 560 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 561 "data/maps/DewfordTown_Gym/scripts.pory"

# 562 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 564 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 565 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 566 "data/maps/DewfordTown_Gym/scripts.pory"

# 567 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 568 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 569 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 570 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 571 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 572 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 573 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 574 "data/maps/DewfordTown_Gym/scripts.pory"

# 575 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 576 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 577 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 578 "data/maps/DewfordTown_Gym/scripts.pory"

# 579 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 580 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 581 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 582 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 583 "data/maps/DewfordTown_Gym/scripts.pory"

# 584 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 585 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 586 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 587 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 588 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 589 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 590 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 591 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 592 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
# 593 "data/maps/DewfordTown_Gym/scripts.pory"

# 594 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReadyToFight:
# 595 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Think you can beat me?$"
# 596 "data/maps/DewfordTown_Gym/scripts.pory"

# 597 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ComeBackWhenReady:
# 598 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hah! Come back when you're ready!$"

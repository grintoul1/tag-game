# 1 "data/maps/MauvilleCity_Gym/scripts.pory"

# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
.set LOCALID_WATTSON, 1
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
.set LOCALID_SHAWN, 2
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"
.set LOCALID_ANGELO, 6
# 5 "data/maps/MauvilleCity_Gym/scripts.pory"
.set LOCALID_KIRK, 4
# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
.set LOCALID_VIVIAN, 3
# 7 "data/maps/MauvilleCity_Gym/scripts.pory"

# 8 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts::
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"

# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad:
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_MAUVILLE_GYM_STATE
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_Gym/scripts.pory"

# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"

# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"

# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"

# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"

# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"

# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"

# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"

# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson2::
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle MSGBOX_AUTOCLOSE
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"

# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonPostBattle::
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle MSGBOX_AUTOCLOSE
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"

# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_WattsonPostBattle
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_WATTSON
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_WattsonIntro MSGBOX_AUTOCLOSE
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ReadyToFight MSGBOX_YESNO
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
goto_if_eq VAR_RESULT, YES, MauvilleCity_Gym_EventScript_WattsonDoMultiBattle
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ComeBackWhenReady, MSGBOX_DEFAULT
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
closemessage
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Gym_Movement_Wattson_NotReady
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"

# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDoMultiBattle::
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeated, PARTNER_EMMIE
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_WattsonVictory
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"

# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonVictory::
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_WattsonDefeated
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"

# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_Wattson_NotReady:
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
walk_down
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
step_end
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"

# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_ROUTE110_STATE, 1
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"

# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"

# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"

# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"

# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeated, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"

# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"

# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"

# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"

# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"

# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"

# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"

# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"

# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"

# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivian::
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_KIRK
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_KirkIntro MSGBOX_AUTOCLOSE
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_VIVIAN
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_VivianIntro MSGBOX_AUTOCLOSE
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_KirkVivianDoMultiBattle
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"

# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivianDoMultiBattle::
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_KIRK, MauvilleCity_Gym_Text_KirkDefeated, TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianDefeated, PARTNER_EMMIE
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_KirkVivianVictory
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"

# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivianVictory::
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"

# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"

# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngelo::
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_SHAWN
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ShawnIntro MSGBOX_AUTOCLOSE
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ANGELO
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_AngeloIntro MSGBOX_AUTOCLOSE
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_ShawnAngeloDoMultiBattle
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"

# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngeloDoMultiBattle::
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnDefeated, TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloDefeated, PARTNER_EMMIE
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_ShawnAngeloVictory
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"

# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngeloVictory::
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"

# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"

# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeated
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"

# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"

# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"

# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"

# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"

# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"

# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"

# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"

# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"

# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"

# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"

# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"

# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeated:
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"

# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"

# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"

# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeated:
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"

# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"

# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"

# 430 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeated:
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 432 "data/maps/MauvilleCity_Gym/scripts.pory"

# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 436 "data/maps/MauvilleCity_Gym/scripts.pory"

# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"

# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeated:
# 442 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 443 "data/maps/MauvilleCity_Gym/scripts.pory"

# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 449 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 450 "data/maps/MauvilleCity_Gym/scripts.pory"

# 451 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"

# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeated:
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 456 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 457 "data/maps/MauvilleCity_Gym/scripts.pory"

# 458 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 459 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 460 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 461 "data/maps/MauvilleCity_Gym/scripts.pory"

# 462 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 463 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 464 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 465 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 466 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 467 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 468 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 470 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 471 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 472 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 473 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 474 "data/maps/MauvilleCity_Gym/scripts.pory"

# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeated:
# 476 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 477 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 478 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 479 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"

# 481 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 482 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 483 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 484 "data/maps/MauvilleCity_Gym/scripts.pory"

# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 486 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 487 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 488 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 489 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 491 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 492 "data/maps/MauvilleCity_Gym/scripts.pory"

# 493 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 494 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains SHOCK WAVE.\p"
# 495 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 496 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 497 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 498 "data/maps/MauvilleCity_Gym/scripts.pory"

# 499 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 501 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 502 "data/maps/MauvilleCity_Gym/scripts.pory"

# 503 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 504 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 505 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 506 "data/maps/MauvilleCity_Gym/scripts.pory"

# 507 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 508 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 509 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 510 "data/maps/MauvilleCity_Gym/scripts.pory"

# 511 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 512 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 513 "data/maps/MauvilleCity_Gym/scripts.pory"

# 514 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 515 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 516 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 517 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 518 "data/maps/MauvilleCity_Gym/scripts.pory"

# 519 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 520 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 521 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 522 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 523 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 524 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 525 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 526 "data/maps/MauvilleCity_Gym/scripts.pory"

# 527 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeated:
# 528 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 529 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 530 "data/maps/MauvilleCity_Gym/scripts.pory"

# 531 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 532 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 533 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 534 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 535 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 536 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 537 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 538 "data/maps/MauvilleCity_Gym/scripts.pory"

# 539 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 540 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 541 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 542 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 543 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 544 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 545 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 546 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 547 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"
# 548 "data/maps/MauvilleCity_Gym/scripts.pory"

# 549 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReadyToFight:
# 550 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Are you ready, kids?$"
# 551 "data/maps/MauvilleCity_Gym/scripts.pory"

# 552 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ComeBackWhenReady:
# 553 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha! Okay!\n"
# 554 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come back when you're ready!$"

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
applymovement VAR_0x8008, Common_Movement_FacePlayer
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_WattsonIntro MSGBOX_AUTOCLOSE
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_WattsonDoMultiBattle
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"

# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDoMultiBattle::
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeated, PARTNER_EMMIE
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_WattsonVictory
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"

# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonVictory::
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_WattsonDefeated
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"

# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_Wattson_NotReady:
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
walk_down
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
step_end
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"

# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_ROUTE110_STATE, 1
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"

# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"

# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"

# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"

# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeated, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"

# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"

# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"

# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"

# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"

# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"

# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"

# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"

# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"

# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivian::
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_KIRK
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_KirkIntro MSGBOX_AUTOCLOSE
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_VIVIAN
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_VivianIntro MSGBOX_AUTOCLOSE
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_KirkVivianDoMultiBattle
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"

# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivianDoMultiBattle::
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_KIRK, MauvilleCity_Gym_Text_KirkDefeated, TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianDefeated, PARTNER_EMMIE
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_KirkVivianVictory
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"

# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivianVictory::
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"

# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"

# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngelo::
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_SHAWN
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ShawnIntro MSGBOX_AUTOCLOSE
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ANGELO
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_AngeloIntro MSGBOX_AUTOCLOSE
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_ShawnAngeloDoMultiBattle
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"

# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngeloDoMultiBattle::
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnDefeated, TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloDefeated, PARTNER_EMMIE
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_ShawnAngeloVictory
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"

# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngeloVictory::
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"

# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"

# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeated
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"

# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"

# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"

# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"

# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"

# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"

# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"

# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"

# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"

# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"

# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"

# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"

# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeated:
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"

# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"

# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"

# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeated:
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"

# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"

# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"

# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeated:
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"

# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"

# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"

# 431 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeated:
# 432 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"

# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 436 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"

# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 442 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 443 "data/maps/MauvilleCity_Gym/scripts.pory"

# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeated:
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"

# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 449 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 450 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 451 "data/maps/MauvilleCity_Gym/scripts.pory"

# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 456 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 457 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 458 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 459 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 460 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 461 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 462 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 463 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 464 "data/maps/MauvilleCity_Gym/scripts.pory"

# 465 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeated:
# 466 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 467 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 468 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 470 "data/maps/MauvilleCity_Gym/scripts.pory"

# 471 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 472 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 473 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 474 "data/maps/MauvilleCity_Gym/scripts.pory"

# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 476 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 477 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 478 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 479 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 481 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 482 "data/maps/MauvilleCity_Gym/scripts.pory"

# 483 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 484 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains SHOCK WAVE.\p"
# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 486 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 487 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 488 "data/maps/MauvilleCity_Gym/scripts.pory"

# 489 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 491 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 492 "data/maps/MauvilleCity_Gym/scripts.pory"

# 493 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 494 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 495 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 496 "data/maps/MauvilleCity_Gym/scripts.pory"

# 497 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 498 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 499 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"

# 501 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 502 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 503 "data/maps/MauvilleCity_Gym/scripts.pory"

# 504 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 505 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 506 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 507 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 508 "data/maps/MauvilleCity_Gym/scripts.pory"

# 509 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 510 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 511 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 512 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 513 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 514 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 515 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 516 "data/maps/MauvilleCity_Gym/scripts.pory"

# 517 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeated:
# 518 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 519 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 520 "data/maps/MauvilleCity_Gym/scripts.pory"

# 521 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 522 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 523 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 524 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 525 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 526 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 527 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 528 "data/maps/MauvilleCity_Gym/scripts.pory"

# 529 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 530 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 531 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 532 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 533 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 534 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 535 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 536 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 537 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"
# 538 "data/maps/MauvilleCity_Gym/scripts.pory"

# 539 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReadyToFight:
# 540 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Are you ready, kids?$"
# 541 "data/maps/MauvilleCity_Gym/scripts.pory"

# 542 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ComeBackWhenReady:
# 543 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha! Okay!\n"
# 544 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come back when you're ready!$"

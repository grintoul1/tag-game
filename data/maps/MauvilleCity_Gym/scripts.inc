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
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_Gym_OnFrame
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"

# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad:
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_MAUVILLE_GYM_STATE
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"

# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnFrame:
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 2, MauvilleCity_Gym_EventScript_ProgressEmmieState
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	.2byte 0
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"

# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ProgressEmmieState::
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 3
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"

# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"

# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"

# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"

# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"

# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"

# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 87 "data/maps/MauvilleCity_Gym/scripts.pory"

# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"

# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson2::
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle MSGBOX_AUTOCLOSE
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"

# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonPostBattle::
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle MSGBOX_AUTOCLOSE
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"

# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_WattsonPostBattle
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_WATTSON
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_FacePlayer
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_WattsonIntro, MSGBOX_AUTOCLOSE
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_WattsonDoMultiBattle
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"

# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDoMultiBattle::
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeated, PARTNER_EMMIE
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_WattsonVictory
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"

# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonVictory::
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 35
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_PARTNER_EMMIE_STATE, 4
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_WattsonDefeated
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"

# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_Wattson_NotReady:
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
walk_down
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
step_end
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"

# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_ROUTE110_STATE, 1
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"

# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"

# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"

# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"

# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeated, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"

# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"

# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"

# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"

# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"

# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"

# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"

# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"

# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"

# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivian::
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_KIRK
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_KirkIntro MSGBOX_AUTOCLOSE
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_VIVIAN
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_VivianIntro, MSGBOX_AUTOCLOSE
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_KirkVivianDoMultiBattle
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"

# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivianDoMultiBattle::
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_KIRK, MauvilleCity_Gym_Text_KirkDefeated, TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianDefeated, PARTNER_EMMIE
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_KirkVivianVictory
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"

# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivianVictory::
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"

# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"

# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngelo::
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_SHAWN
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ShawnIntro MSGBOX_AUTOCLOSE
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ANGELO
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_AngeloIntro, MSGBOX_AUTOCLOSE
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_ShawnAngeloDoMultiBattle
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"

# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngeloDoMultiBattle::
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnDefeated, TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloDefeated, PARTNER_EMMIE
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_ShawnAngeloVictory
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"

# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngeloVictory::
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"

# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"

# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeated
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"

# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"

# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"

# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"

# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"

# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
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
MauvilleCity_Gym_EventScript_RightGymStatue::
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"

# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"

# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"

# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"

# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"

# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"

# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeated:
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"

# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"

# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"

# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeated:
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"

# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"

# 432 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"

# 436 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeated:
# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"

# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 442 "data/maps/MauvilleCity_Gym/scripts.pory"

# 443 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"

# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeated:
# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 449 "data/maps/MauvilleCity_Gym/scripts.pory"

# 450 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 451 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 456 "data/maps/MauvilleCity_Gym/scripts.pory"

# 457 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 458 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 459 "data/maps/MauvilleCity_Gym/scripts.pory"

# 460 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeated:
# 461 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 462 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 463 "data/maps/MauvilleCity_Gym/scripts.pory"

# 464 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 465 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 466 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 467 "data/maps/MauvilleCity_Gym/scripts.pory"

# 468 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 470 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 471 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 472 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 473 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 474 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 476 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 477 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 478 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 479 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"

# 481 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeated:
# 482 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 483 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 484 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 486 "data/maps/MauvilleCity_Gym/scripts.pory"

# 487 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 488 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 489 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"

# 491 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 492 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 493 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 494 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 495 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 496 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 497 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 498 "data/maps/MauvilleCity_Gym/scripts.pory"

# 499 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains SHOCK WAVE.\p"
# 501 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 502 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 503 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 504 "data/maps/MauvilleCity_Gym/scripts.pory"

# 505 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 506 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 507 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 508 "data/maps/MauvilleCity_Gym/scripts.pory"

# 509 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 510 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 511 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 512 "data/maps/MauvilleCity_Gym/scripts.pory"

# 513 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 514 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 515 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 516 "data/maps/MauvilleCity_Gym/scripts.pory"

# 517 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 518 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 519 "data/maps/MauvilleCity_Gym/scripts.pory"

# 520 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 521 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 522 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 523 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 524 "data/maps/MauvilleCity_Gym/scripts.pory"

# 525 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 526 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 527 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 528 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 529 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 530 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 531 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 532 "data/maps/MauvilleCity_Gym/scripts.pory"

# 533 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeated:
# 534 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 535 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 536 "data/maps/MauvilleCity_Gym/scripts.pory"

# 537 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 538 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 539 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 540 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 541 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 542 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 543 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 544 "data/maps/MauvilleCity_Gym/scripts.pory"

# 545 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 546 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 547 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 548 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 549 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 550 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 551 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 552 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 553 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"
# 554 "data/maps/MauvilleCity_Gym/scripts.pory"

# 555 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReadyToFight:
# 556 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Are you ready, kids?$"
# 557 "data/maps/MauvilleCity_Gym/scripts.pory"

# 558 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ComeBackWhenReady:
# 559 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha! Okay!\n"
# 560 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come back when you're ready!$"

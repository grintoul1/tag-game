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
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 3
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"

# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"

# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"

# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"

# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"

# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"

# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"

# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"

# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson2::
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle MSGBOX_AUTOCLOSE
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"

# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonPostBattle::
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle MSGBOX_AUTOCLOSE
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"

# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_WattsonPostBattle
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_WATTSON
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_FacePlayer
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_WattsonIntro, MSGBOX_AUTOCLOSE
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_WattsonDoMultiBattle
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"

# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDoMultiBattle::
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeated, PARTNER_EMMIE
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_WattsonVictory
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"

# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonVictory::
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 35
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_PARTNER_EMMIE_STATE, 4
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_WattsonDefeated
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"

# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_Wattson_NotReady:
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
walk_down
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
step_end
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"

# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_ROUTE110_STATE, 1
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"

# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"

# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"

# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"

# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeated, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"

# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"

# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"

# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"

# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"

# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"

# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"

# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"

# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"

# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivian::
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_KIRK
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_KirkIntro MSGBOX_AUTOCLOSE
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_VIVIAN
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_VivianIntro, MSGBOX_AUTOCLOSE
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_KirkVivianDoMultiBattle
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"

# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivianDoMultiBattle::
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_KIRK, MauvilleCity_Gym_Text_KirkDefeated, TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianDefeated, PARTNER_EMMIE
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_KirkVivianVictory
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"

# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivianVictory::
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"

# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"

# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngelo::
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_SHAWN
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ShawnIntro MSGBOX_AUTOCLOSE
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ANGELO
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_AngeloIntro, MSGBOX_AUTOCLOSE
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_ShawnAngeloDoMultiBattle
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"

# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngeloDoMultiBattle::
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnDefeated, TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloDefeated, PARTNER_EMMIE
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_ShawnAngeloVictory
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"

# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngeloVictory::
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"

# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"

# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeated
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"

# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"

# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"

# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"

# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"

# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"

# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"

# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"

# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"

# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"

# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"

# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"

# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeated:
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"

# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"

# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"

# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeated:
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"

# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 432 "data/maps/MauvilleCity_Gym/scripts.pory"

# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 436 "data/maps/MauvilleCity_Gym/scripts.pory"

# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeated:
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"

# 440 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 442 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 443 "data/maps/MauvilleCity_Gym/scripts.pory"

# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"

# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeated:
# 449 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 450 "data/maps/MauvilleCity_Gym/scripts.pory"

# 451 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 456 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 457 "data/maps/MauvilleCity_Gym/scripts.pory"

# 458 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 459 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 460 "data/maps/MauvilleCity_Gym/scripts.pory"

# 461 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeated:
# 462 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 463 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 464 "data/maps/MauvilleCity_Gym/scripts.pory"

# 465 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 466 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 467 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 468 "data/maps/MauvilleCity_Gym/scripts.pory"

# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 470 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 471 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 472 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 473 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 474 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 476 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 477 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 478 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 479 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 481 "data/maps/MauvilleCity_Gym/scripts.pory"

# 482 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeated:
# 483 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 484 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 486 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 487 "data/maps/MauvilleCity_Gym/scripts.pory"

# 488 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 489 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 491 "data/maps/MauvilleCity_Gym/scripts.pory"

# 492 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 493 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 494 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 495 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 496 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 497 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 498 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 499 "data/maps/MauvilleCity_Gym/scripts.pory"

# 500 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 501 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains SHOCK WAVE.\p"
# 502 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 503 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 504 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 505 "data/maps/MauvilleCity_Gym/scripts.pory"

# 506 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 507 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 508 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 509 "data/maps/MauvilleCity_Gym/scripts.pory"

# 510 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 511 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 512 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 513 "data/maps/MauvilleCity_Gym/scripts.pory"

# 514 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 515 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 516 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 517 "data/maps/MauvilleCity_Gym/scripts.pory"

# 518 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 519 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 520 "data/maps/MauvilleCity_Gym/scripts.pory"

# 521 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 522 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 523 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 524 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 525 "data/maps/MauvilleCity_Gym/scripts.pory"

# 526 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 527 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 528 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 529 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 530 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 531 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 532 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 533 "data/maps/MauvilleCity_Gym/scripts.pory"

# 534 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeated:
# 535 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 536 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 537 "data/maps/MauvilleCity_Gym/scripts.pory"

# 538 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 539 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 540 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 541 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 542 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 543 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 544 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 545 "data/maps/MauvilleCity_Gym/scripts.pory"

# 546 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 547 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 548 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 549 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 550 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 551 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 552 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 553 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 554 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"
# 555 "data/maps/MauvilleCity_Gym/scripts.pory"

# 556 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReadyToFight:
# 557 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Are you ready, kids?$"
# 558 "data/maps/MauvilleCity_Gym/scripts.pory"

# 559 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ComeBackWhenReady:
# 560 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha! Okay!\n"
# 561 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come back when you're ready!$"

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
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_WattsonDefeated
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"

# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Movement_Wattson_NotReady:
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
walk_down
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
step_end
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"

# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_ROUTE110_STATE, 1
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"

# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"

# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"

# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"

# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeated, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"

# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"

# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"

# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"

# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"

# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"

# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"

# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"

# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"

# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivian::
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_KIRK
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_KirkIntro MSGBOX_AUTOCLOSE
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_VIVIAN
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_VivianIntro MSGBOX_AUTOCLOSE
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_KirkVivianDoMultiBattle
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"

# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivianDoMultiBattle::
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_KIRK, MauvilleCity_Gym_Text_KirkDefeated, TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianDefeated, PARTNER_EMMIE
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_KirkVivianVictory
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"

# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_KirkVivianVictory::
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"

# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"

# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngelo::
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
lockall
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_SHAWN
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ShawnIntro MSGBOX_AUTOCLOSE
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ANGELO
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
playse SE_PIN
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_AngeloIntro MSGBOX_AUTOCLOSE
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
goto MauvilleCity_Gym_EventScript_ShawnAngeloDoMultiBattle
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
releaseall
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"

# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngeloDoMultiBattle::
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnDefeated, TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloDefeated, PARTNER_EMMIE
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
switch VAR_RESULT
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
case 1, MauvilleCity_Gym_EventScript_ShawnAngeloVictory
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
waitstate
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"

# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ShawnAngeloVictory::
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
waitmovement 0
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
addvar VAR_MAUVILLECITY_GYM_STATE, 1
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
end
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"

# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"

# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeated
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"

# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"

# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"

# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"

# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"

# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"

# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"

# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"

# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"

# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"

# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"

# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"

# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeated:
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"

# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"

# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"

# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeated:
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"

# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"

# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"

# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeated:
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"

# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"

# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 432 "data/maps/MauvilleCity_Gym/scripts.pory"

# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeated:
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 435 "data/maps/MauvilleCity_Gym/scripts.pory"

# 436 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 442 "data/maps/MauvilleCity_Gym/scripts.pory"

# 443 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 444 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 445 "data/maps/MauvilleCity_Gym/scripts.pory"

# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeated:
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 449 "data/maps/MauvilleCity_Gym/scripts.pory"

# 450 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 451 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"

# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 456 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 457 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 458 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 459 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 460 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 461 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 462 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 463 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 464 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 465 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 466 "data/maps/MauvilleCity_Gym/scripts.pory"

# 467 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeated:
# 468 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 470 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 471 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 472 "data/maps/MauvilleCity_Gym/scripts.pory"

# 473 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 474 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 476 "data/maps/MauvilleCity_Gym/scripts.pory"

# 477 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 478 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 479 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 481 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 482 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 483 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 484 "data/maps/MauvilleCity_Gym/scripts.pory"

# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 486 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains SHOCK WAVE.\p"
# 487 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 488 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 489 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"

# 491 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 492 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 493 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 494 "data/maps/MauvilleCity_Gym/scripts.pory"

# 495 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 496 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 497 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 498 "data/maps/MauvilleCity_Gym/scripts.pory"

# 499 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 501 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 502 "data/maps/MauvilleCity_Gym/scripts.pory"

# 503 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 504 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 505 "data/maps/MauvilleCity_Gym/scripts.pory"

# 506 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 507 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 508 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 509 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 510 "data/maps/MauvilleCity_Gym/scripts.pory"

# 511 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 512 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 513 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 514 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 515 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 516 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 517 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 518 "data/maps/MauvilleCity_Gym/scripts.pory"

# 519 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeated:
# 520 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 521 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 522 "data/maps/MauvilleCity_Gym/scripts.pory"

# 523 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 524 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 525 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 526 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 527 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 528 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 529 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 530 "data/maps/MauvilleCity_Gym/scripts.pory"

# 531 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 532 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 533 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 534 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 535 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 536 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 537 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 538 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 539 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"
# 540 "data/maps/MauvilleCity_Gym/scripts.pory"

# 541 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReadyToFight:
# 542 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Are you ready, kids?$"
# 543 "data/maps/MauvilleCity_Gym/scripts.pory"

# 544 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ComeBackWhenReady:
# 545 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha! Okay!\n"
# 546 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come back when you're ready!$"

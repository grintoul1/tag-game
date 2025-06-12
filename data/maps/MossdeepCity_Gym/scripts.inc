# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_PRESTON, 2
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_MAURA, 4
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_BLAKE, 3
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_SAMANTHA, 5
# 6 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_VIRGIL, 6
# 7 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_NATE, 17
# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_HANNAH, 7
# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_SYLVIA, 18
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_KATHLEEN, 28
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_NICHOLAS, 32
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_CLIFFORD, 25
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
	.set LOCALID_MACEY, 27
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"

# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_Gym_OnFrame
# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"

# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnFrame:
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 51, MossdeepCity_Gym_EventScript_ProgressEmmieState
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
	.2byte 0
# 24 "data/maps/MossdeepCity_Gym/scripts.pory"

# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ProgressEmmieState::
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 52
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"

# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"

# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"

# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad:
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"

# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2::
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"

# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3::
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"

# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4::
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"

# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below set metatile scripts are leftover from RS and are functionally unused
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"

# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"

# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"

# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"

# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza2::
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_TateAndLizaIntro MSGBOX_AUTOCLOSE
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_TateAndLizaDoMultiBattle
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"

# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDoMultiBattle::
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat, PARTNER_EMMIE
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_TateAndLizaVictory
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"

# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaVictory::
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 83
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
setvar VAR_PARTNER_EMMIE_STATE, 53
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_TateAndLizaDefeated
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"

# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza2
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"

# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"

# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"

# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"

# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"

# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"

# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"

# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"

# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"

# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"

# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"

# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"

# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"

# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"

# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"

# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PrestonMaura::
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_PRESTON, Common_Movement_ExclamationMark
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_PrestonIntro MSGBOX_AUTOCLOSE
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_MAURA, Common_Movement_ExclamationMark
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MauraIntro MSGBOX_AUTOCLOSE
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_PrestonMauraDoMultiBattle
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"

# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PrestonMauraDoMultiBattle::
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonDefeat, TRAINER_MAURA, MossdeepCity_Gym_Text_MauraDefeat, PARTNER_EMMIE
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_PrestonMauraVictory
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"

# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PrestonMauraVictory::
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"

# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlakeSamantha::
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_BLAKE, Common_Movement_ExclamationMark
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_BlakeIntro MSGBOX_AUTOCLOSE
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_SAMANTHA, Common_Movement_ExclamationMark
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SamanthaIntro MSGBOX_AUTOCLOSE
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_BlakeSamanthaDoMultiBattle
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"

# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlakeSamanthaDoMultiBattle::
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeDefeat, TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaDefeat, PARTNER_EMMIE
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_BlakeSamanthaVictory
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"

# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlakeSamanthaVictory::
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"

# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_VirgilNate::
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_VIRGIL, Common_Movement_ExclamationMark
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_VirgilIntro MSGBOX_AUTOCLOSE
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_NATE, Common_Movement_ExclamationMark
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NateIntro MSGBOX_AUTOCLOSE
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_VirgilNateDoMultiBattle
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"

# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_VirgilNateDoMultiBattle::
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilDefeat, TRAINER_NATE, MossdeepCity_Gym_Text_NateDefeat, PARTNER_EMMIE
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_VirgilNateVictory
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"

# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_VirgilNateVictory::
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"

# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_HannahSylvia::
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_HANNAH, Common_Movement_ExclamationMark
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_HannahIntro MSGBOX_AUTOCLOSE
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_SYLVIA, Common_Movement_ExclamationMark
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SylviaIntro MSGBOX_AUTOCLOSE
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_HannahSylviaDoMultiBattle
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"

# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_HannahSylviaDoMultiBattle::
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahDefeat, TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaDefeat, PARTNER_EMMIE
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_HannahSylviaVictory
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"

# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_HannahSylviaVictory::
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"

# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_KathleenNicholas::
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_KATHLEEN, Common_Movement_ExclamationMark
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_KathleenIntro MSGBOX_AUTOCLOSE
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_NICHOLAS, Common_Movement_ExclamationMark
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NicholasIntro MSGBOX_AUTOCLOSE
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_KathleenNicholasDoMultiBattle
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"

# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_KathleenNicholasDoMultiBattle::
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenDefeat, TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasDefeat, PARTNER_EMMIE
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_KathleenNicholasVictory
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"

# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_KathleenNicholasVictory::
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"

# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CliffordMacey::
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_CLIFFORD, Common_Movement_ExclamationMark
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_CliffordIntro MSGBOX_AUTOCLOSE
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_MACEY, Common_Movement_ExclamationMark
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MaceyIntro MSGBOX_AUTOCLOSE
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_CliffordMaceyDoMultiBattle
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"

# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CliffordMaceyDoMultiBattle::
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordDefeat, TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyDefeat, PARTNER_EMMIE
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_CliffordMaceyVictory
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"

# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CliffordMaceyVictory::
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"

# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"

# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"

# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"

# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"

# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"

# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"

# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"

# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"

# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 531 "data/maps/MossdeepCity_Gym/scripts.pory"

# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 536 "data/maps/MossdeepCity_Gym/scripts.pory"

# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"

# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"

# 547 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"

# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"

# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"

# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"

# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 577 "data/maps/MossdeepCity_Gym/scripts.pory"

# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"

# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"

# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 0, MossdeepCity_Gym_EventScript_PrestonMaura
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"

# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 2, MossdeepCity_Gym_EventScript_VirgilNate
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"

# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"

# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 4, MossdeepCity_Gym_EventScript_KathleenNicholas
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"

# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 3, MossdeepCity_Gym_EventScript_HannahSylvia
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 651 "data/maps/MossdeepCity_Gym/scripts.pory"

# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type POKéMON.\p"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type POKéMON,\l"
# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON. Go for it!$"
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"

# 666 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"

# 670 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"

# 674 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 677 "data/maps/MossdeepCity_Gym/scripts.pory"

# 678 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 679 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 681 "data/maps/MossdeepCity_Gym/scripts.pory"

# 682 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 683 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 684 "data/maps/MossdeepCity_Gym/scripts.pory"

# 685 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 686 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 687 "data/maps/MossdeepCity_Gym/scripts.pory"

# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 690 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our GYM LEADERS are them!\p"
# 691 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 692 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 693 "data/maps/MossdeepCity_Gym/scripts.pory"

# 694 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 695 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 696 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 697 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 698 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 699 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 700 "data/maps/MossdeepCity_Gym/scripts.pory"

# 701 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 702 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My POKéMON battling skills are out\n"
# 703 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 704 "data/maps/MossdeepCity_Gym/scripts.pory"

# 705 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 706 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 707 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 708 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 709 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 710 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 711 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 712 "data/maps/MossdeepCity_Gym/scripts.pory"

# 713 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 714 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 715 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 716 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 717 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 718 "data/maps/MossdeepCity_Gym/scripts.pory"

# 719 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 720 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 721 "data/maps/MossdeepCity_Gym/scripts.pory"

# 722 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 723 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 724 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 725 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 726 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 727 "data/maps/MossdeepCity_Gym/scripts.pory"

# 728 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 729 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 730 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 731 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 732 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 733 "data/maps/MossdeepCity_Gym/scripts.pory"

# 734 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 735 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 736 "data/maps/MossdeepCity_Gym/scripts.pory"

# 737 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 738 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 739 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our GYM LEADERS…\p"
# 740 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 741 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 742 "data/maps/MossdeepCity_Gym/scripts.pory"

# 743 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 744 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 745 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 746 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 747 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 748 "data/maps/MossdeepCity_Gym/scripts.pory"

# 749 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 750 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 751 "data/maps/MossdeepCity_Gym/scripts.pory"

# 752 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 753 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 754 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 755 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 756 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 757 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 758 "data/maps/MossdeepCity_Gym/scripts.pory"

# 759 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 760 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 761 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 762 "data/maps/MossdeepCity_Gym/scripts.pory"

# 763 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 764 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 765 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 766 "data/maps/MossdeepCity_Gym/scripts.pory"

# 767 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 768 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 769 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 770 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 771 "data/maps/MossdeepCity_Gym/scripts.pory"

# 772 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 773 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 774 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 775 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 776 "data/maps/MossdeepCity_Gym/scripts.pory"

# 777 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 778 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 779 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 780 "data/maps/MossdeepCity_Gym/scripts.pory"

# 781 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 782 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 783 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 784 "data/maps/MossdeepCity_Gym/scripts.pory"

# 785 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 786 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 787 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 788 "data/maps/MossdeepCity_Gym/scripts.pory"

# 789 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 790 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 791 "data/maps/MossdeepCity_Gym/scripts.pory"

# 792 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 793 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 794 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 795 "data/maps/MossdeepCity_Gym/scripts.pory"

# 796 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 797 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 798 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 799 "data/maps/MossdeepCity_Gym/scripts.pory"

# 800 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 801 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 802 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 803 "data/maps/MossdeepCity_Gym/scripts.pory"

# 804 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 805 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 806 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 807 "data/maps/MossdeepCity_Gym/scripts.pory"

# 808 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 809 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 810 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 811 "data/maps/MossdeepCity_Gym/scripts.pory"

# 812 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 813 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 814 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 815 "data/maps/MossdeepCity_Gym/scripts.pory"

# 816 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 817 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 818 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 819 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 820 "data/maps/MossdeepCity_Gym/scripts.pory"

# 821 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 822 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 823 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON hard-battling power!$"
# 824 "data/maps/MossdeepCity_Gym/scripts.pory"

# 825 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 826 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 827 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 828 "data/maps/MossdeepCity_Gym/scripts.pory"

# 829 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 830 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 831 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible POKéMON power next.$"
# 832 "data/maps/MossdeepCity_Gym/scripts.pory"

# 833 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 834 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 835 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Fufufu… Were you surprised?\p"
# 836 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That there are two GYM LEADERS?\n"
# 837 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 838 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We're twins!\n"
# 839 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We're twins!\p"
# 840 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We don't need to talk because…\n"
# 841 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We can each determine what…\p"
# 842 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The other is thinking…\n"
# 843 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: All in our minds!\p"
# 844 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: This combination of ours…\n"
# 845 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Can you beat it?$"
# 846 "data/maps/MossdeepCity_Gym/scripts.pory"

# 847 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 848 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
# 849 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Was shattered!\p"
# 850 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It can't be helped. You've won…\n"
# 851 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: So, in recognition, take this.$"
# 852 "data/maps/MossdeepCity_Gym/scripts.pory"

# 853 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 854 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 855 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from TATE and LIZA.$"
# 856 "data/maps/MossdeepCity_Gym/scripts.pory"

# 857 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 858 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
# 859 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
# 860 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It also lets you use the HM move\n"
# 861 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "DIVE outside of battle.\p"
# 862 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You should also take this, too.$"
# 863 "data/maps/MossdeepCity_Gym/scripts.pory"

# 864 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 865 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM04 contains…\n"
# 866 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: CALM MIND!\p"
# 867 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It raises SP. ATK and…\n"
# 868 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It raises SP. DEF!\p"
# 869 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It's a move that's perfect…\n"
# 870 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For PSYCHIC POKéMON!\p"
# 871 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 872 "data/maps/MossdeepCity_Gym/scripts.pory"

# 873 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 874 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
# 875 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 876 "data/maps/MossdeepCity_Gym/scripts.pory"

# 877 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 878 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
# 879 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your POKéMON is far stronger than\l"
# 880 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 881 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You will become even stronger!\n"
# 882 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 883 "data/maps/MossdeepCity_Gym/scripts.pory"

# 884 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 885 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 886 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 887 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Oops, you have only one…\n"
# 888 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON that can battle.\p"
# 889 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We can't battle that way!\p"
# 890 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: If you want to challenge us,\n"
# 891 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more POKéMON.$"
# 892 "data/maps/MossdeepCity_Gym/scripts.pory"

# 893 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 894 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 895 "data/maps/MossdeepCity_Gym/scripts.pory"

# 896 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 897 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 898 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 899 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 900 "data/maps/MossdeepCity_Gym/scripts.pory"

# 901 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 902 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: POKéMON…\n"
# 903 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON…\p"
# 904 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 905 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 906 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 907 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 908 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 909 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 910 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 911 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 912 "data/maps/MossdeepCity_Gym/scripts.pory"

# 913 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 914 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your POKéMON…\n"
# 915 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 916 "data/maps/MossdeepCity_Gym/scripts.pory"

# 917 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 918 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 919 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 920 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 921 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 922 "data/maps/MossdeepCity_Gym/scripts.pory"

# 923 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 924 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 925 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 926 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 927 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 928 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 929 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 930 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one POKéMON!\n"
# 931 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one POKéMON!\p"
# 932 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 933 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two POKéMON when you come back.$"

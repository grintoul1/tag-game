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
	setvar VAR_PARTNER_EMMIE_STATE, 52
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"

# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"

# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"

# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad:
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"

# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2::
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"

# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3::
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"

# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4::
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"

# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below set metatile scripts are leftover from RS and are functionally unused
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"

# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"

# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"

# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"

# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza2::
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_TateAndLizaIntro MSGBOX_AUTOCLOSE
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_TateAndLizaDoMultiBattle
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"

# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDoMultiBattle::
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat, PARTNER_EMMIE
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_TateAndLizaVictory
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"

# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaVictory::
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 65
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
setvar VAR_PARTNER_EMMIE_STATE, 53
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_TateAndLizaDefeated
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"

# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza2
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"

# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"

# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"

# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"

# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"

# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"

# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"

# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"

# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"

# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"

# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"

# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"

# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"

# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"

# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"

# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PrestonMaura::
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_PRESTON, Common_Movement_ExclamationMark
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_PrestonIntro MSGBOX_AUTOCLOSE
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_MAURA, Common_Movement_ExclamationMark
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MauraIntro MSGBOX_AUTOCLOSE
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_PrestonMauraDoMultiBattle
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"

# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PrestonMauraDoMultiBattle::
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonDefeat, TRAINER_MAURA, MossdeepCity_Gym_Text_MauraDefeat, PARTNER_EMMIE
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_PrestonMauraVictory
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"

# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PrestonMauraVictory::
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"

# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlakeSamantha::
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_BLAKE, Common_Movement_ExclamationMark
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_BlakeIntro MSGBOX_AUTOCLOSE
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_SAMANTHA, Common_Movement_ExclamationMark
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SamanthaIntro MSGBOX_AUTOCLOSE
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_BlakeSamanthaDoMultiBattle
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"

# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlakeSamanthaDoMultiBattle::
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeDefeat, TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaDefeat, PARTNER_EMMIE
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_BlakeSamanthaVictory
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"

# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlakeSamanthaVictory::
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"

# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_VirgilNate::
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_VIRGIL, Common_Movement_ExclamationMark
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_VirgilIntro MSGBOX_AUTOCLOSE
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_NATE, Common_Movement_ExclamationMark
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NateIntro MSGBOX_AUTOCLOSE
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_VirgilNateDoMultiBattle
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"

# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_VirgilNateDoMultiBattle::
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilDefeat, TRAINER_NATE, MossdeepCity_Gym_Text_NateDefeat, PARTNER_EMMIE
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_VirgilNateVictory
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"

# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_VirgilNateVictory::
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"

# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_HannahSylvia::
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_HANNAH, Common_Movement_ExclamationMark
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_HannahIntro MSGBOX_AUTOCLOSE
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_SYLVIA, Common_Movement_ExclamationMark
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SylviaIntro MSGBOX_AUTOCLOSE
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_HannahSylviaDoMultiBattle
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"

# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_HannahSylviaDoMultiBattle::
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahDefeat, TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaDefeat, PARTNER_EMMIE
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_HannahSylviaVictory
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"

# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_HannahSylviaVictory::
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"

# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_KathleenNicholas::
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_KATHLEEN, Common_Movement_ExclamationMark
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_KathleenIntro MSGBOX_AUTOCLOSE
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_NICHOLAS, Common_Movement_ExclamationMark
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NicholasIntro MSGBOX_AUTOCLOSE
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_KathleenNicholasDoMultiBattle
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"

# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_KathleenNicholasDoMultiBattle::
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenDefeat, TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasDefeat, PARTNER_EMMIE
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_KathleenNicholasVictory
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"

# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_KathleenNicholasVictory::
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"

# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CliffordMacey::
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_CLIFFORD, Common_Movement_ExclamationMark
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_CliffordIntro MSGBOX_AUTOCLOSE
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_MACEY, Common_Movement_ExclamationMark
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MaceyIntro MSGBOX_AUTOCLOSE
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_CliffordMaceyDoMultiBattle
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"

# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CliffordMaceyDoMultiBattle::
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordDefeat, TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyDefeat, PARTNER_EMMIE
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_CliffordMaceyVictory
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"

# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CliffordMaceyVictory::
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"

# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"

# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"

# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"

# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"

# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"

# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"

# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"

# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"

# 526 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"

# 531 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"

# 536 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"

# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"

# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"

# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"

# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"

# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"

# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"

# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"

# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"

# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 0, MossdeepCity_Gym_EventScript_PrestonMaura
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"

# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 2, MossdeepCity_Gym_EventScript_VirgilNate
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"

# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"

# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 4, MossdeepCity_Gym_EventScript_KathleenNicholas
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"

# 638 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 3, MossdeepCity_Gym_EventScript_HannahSylvia
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"

# 651 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type POKéMON.\p"
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type POKéMON,\l"
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON. Go for it!$"
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"

# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"

# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 670 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"

# 673 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 674 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"

# 677 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 678 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 679 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"

# 681 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 682 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 683 "data/maps/MossdeepCity_Gym/scripts.pory"

# 684 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 685 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 686 "data/maps/MossdeepCity_Gym/scripts.pory"

# 687 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our GYM LEADERS are them!\p"
# 690 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 691 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 692 "data/maps/MossdeepCity_Gym/scripts.pory"

# 693 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 694 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 695 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 696 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 697 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 698 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 699 "data/maps/MossdeepCity_Gym/scripts.pory"

# 700 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 701 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My POKéMON battling skills are out\n"
# 702 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 703 "data/maps/MossdeepCity_Gym/scripts.pory"

# 704 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 705 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 706 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 707 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 708 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 709 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 710 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 711 "data/maps/MossdeepCity_Gym/scripts.pory"

# 712 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 713 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 714 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 715 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 716 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 717 "data/maps/MossdeepCity_Gym/scripts.pory"

# 718 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 719 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 720 "data/maps/MossdeepCity_Gym/scripts.pory"

# 721 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 722 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 723 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 724 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 725 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 726 "data/maps/MossdeepCity_Gym/scripts.pory"

# 727 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 728 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 729 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 730 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 731 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 732 "data/maps/MossdeepCity_Gym/scripts.pory"

# 733 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 734 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 735 "data/maps/MossdeepCity_Gym/scripts.pory"

# 736 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 737 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 738 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our GYM LEADERS…\p"
# 739 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 740 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 741 "data/maps/MossdeepCity_Gym/scripts.pory"

# 742 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 743 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 744 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 745 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 746 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 747 "data/maps/MossdeepCity_Gym/scripts.pory"

# 748 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 749 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 750 "data/maps/MossdeepCity_Gym/scripts.pory"

# 751 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 752 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 753 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 754 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 755 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 756 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 757 "data/maps/MossdeepCity_Gym/scripts.pory"

# 758 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 759 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 760 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 761 "data/maps/MossdeepCity_Gym/scripts.pory"

# 762 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 763 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 764 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 765 "data/maps/MossdeepCity_Gym/scripts.pory"

# 766 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 767 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 768 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 769 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 770 "data/maps/MossdeepCity_Gym/scripts.pory"

# 771 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 772 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 773 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 774 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 775 "data/maps/MossdeepCity_Gym/scripts.pory"

# 776 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 777 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 778 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 779 "data/maps/MossdeepCity_Gym/scripts.pory"

# 780 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 781 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 782 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 783 "data/maps/MossdeepCity_Gym/scripts.pory"

# 784 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 785 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 786 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 787 "data/maps/MossdeepCity_Gym/scripts.pory"

# 788 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 789 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 790 "data/maps/MossdeepCity_Gym/scripts.pory"

# 791 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 792 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 793 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 794 "data/maps/MossdeepCity_Gym/scripts.pory"

# 795 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 796 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 797 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 798 "data/maps/MossdeepCity_Gym/scripts.pory"

# 799 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 800 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 801 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 802 "data/maps/MossdeepCity_Gym/scripts.pory"

# 803 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 804 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 805 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 806 "data/maps/MossdeepCity_Gym/scripts.pory"

# 807 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 808 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 809 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 810 "data/maps/MossdeepCity_Gym/scripts.pory"

# 811 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 812 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 813 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 814 "data/maps/MossdeepCity_Gym/scripts.pory"

# 815 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 816 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 817 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 818 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 819 "data/maps/MossdeepCity_Gym/scripts.pory"

# 820 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 821 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 822 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON hard-battling power!$"
# 823 "data/maps/MossdeepCity_Gym/scripts.pory"

# 824 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 825 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 826 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 827 "data/maps/MossdeepCity_Gym/scripts.pory"

# 828 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 829 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 830 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible POKéMON power next.$"
# 831 "data/maps/MossdeepCity_Gym/scripts.pory"

# 832 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 833 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 834 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Fufufu… Were you surprised?\p"
# 835 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That there are two GYM LEADERS?\n"
# 836 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 837 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We're twins!\n"
# 838 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We're twins!\p"
# 839 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We don't need to talk because…\n"
# 840 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We can each determine what…\p"
# 841 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The other is thinking…\n"
# 842 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: All in our minds!\p"
# 843 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: This combination of ours…\n"
# 844 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Can you beat it?$"
# 845 "data/maps/MossdeepCity_Gym/scripts.pory"

# 846 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 847 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
# 848 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Was shattered!\p"
# 849 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It can't be helped. You've won…\n"
# 850 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: So, in recognition, take this.$"
# 851 "data/maps/MossdeepCity_Gym/scripts.pory"

# 852 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 853 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 854 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from TATE and LIZA.$"
# 855 "data/maps/MossdeepCity_Gym/scripts.pory"

# 856 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 857 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
# 858 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
# 859 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It also lets you use the HM move\n"
# 860 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "DIVE outside of battle.\p"
# 861 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You should also take this, too.$"
# 862 "data/maps/MossdeepCity_Gym/scripts.pory"

# 863 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 864 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM04 contains…\n"
# 865 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: CALM MIND!\p"
# 866 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It raises SP. ATK and…\n"
# 867 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It raises SP. DEF!\p"
# 868 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It's a move that's perfect…\n"
# 869 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For PSYCHIC POKéMON!\p"
# 870 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 871 "data/maps/MossdeepCity_Gym/scripts.pory"

# 872 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 873 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
# 874 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 875 "data/maps/MossdeepCity_Gym/scripts.pory"

# 876 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 877 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
# 878 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your POKéMON is far stronger than\l"
# 879 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 880 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You will become even stronger!\n"
# 881 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 882 "data/maps/MossdeepCity_Gym/scripts.pory"

# 883 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 884 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 885 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 886 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Oops, you have only one…\n"
# 887 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON that can battle.\p"
# 888 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We can't battle that way!\p"
# 889 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: If you want to challenge us,\n"
# 890 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more POKéMON.$"
# 891 "data/maps/MossdeepCity_Gym/scripts.pory"

# 892 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 893 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 894 "data/maps/MossdeepCity_Gym/scripts.pory"

# 895 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 896 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 897 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 898 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 899 "data/maps/MossdeepCity_Gym/scripts.pory"

# 900 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 901 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: POKéMON…\n"
# 902 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON…\p"
# 903 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 904 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 905 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 906 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 907 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 908 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 909 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 910 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 911 "data/maps/MossdeepCity_Gym/scripts.pory"

# 912 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 913 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your POKéMON…\n"
# 914 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 915 "data/maps/MossdeepCity_Gym/scripts.pory"

# 916 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 917 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 918 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 919 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 920 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 921 "data/maps/MossdeepCity_Gym/scripts.pory"

# 922 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 923 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 924 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 925 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 926 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 927 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 928 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 929 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one POKéMON!\n"
# 930 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one POKéMON!\p"
# 931 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 932 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two POKéMON when you come back.$"

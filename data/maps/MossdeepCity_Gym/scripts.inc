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
	.byte 0
# 19 "data/maps/MossdeepCity_Gym/scripts.pory"

# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"

# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"

# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad:
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"

# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2::
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"

# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3::
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"

# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4::
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"

# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below set metatile scripts are leftover from RS and are functionally unused
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"

# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"

# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"

# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"

# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza2::
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_TateAndLizaIntro MSGBOX_AUTOCLOSE
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_TateAndLizaDoMultiBattle
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"

# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDoMultiBattle::
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat, PARTNER_EMMIE
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_TateAndLizaVictory
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"

# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaVictory::
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 65
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_TateAndLizaDefeated
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"

# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza2
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"

# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"

# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"

# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"

# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"

# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"

# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"

# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"

# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"

# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"

# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"

# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"

# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"

# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"

# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"

# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PrestonMaura::
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_PRESTON, Common_Movement_ExclamationMark
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_PrestonIntro MSGBOX_AUTOCLOSE
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_MAURA, Common_Movement_ExclamationMark
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MauraIntro MSGBOX_AUTOCLOSE
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_PrestonMauraDoMultiBattle
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"

# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PrestonMauraDoMultiBattle::
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonDefeat, TRAINER_MAURA, MossdeepCity_Gym_Text_MauraDefeat, PARTNER_EMMIE
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_PrestonMauraVictory
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"

# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PrestonMauraVictory::
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"

# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlakeSamantha::
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_BLAKE, Common_Movement_ExclamationMark
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_BlakeIntro MSGBOX_AUTOCLOSE
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_SAMANTHA, Common_Movement_ExclamationMark
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SamanthaIntro MSGBOX_AUTOCLOSE
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_BlakeSamanthaDoMultiBattle
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"

# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlakeSamanthaDoMultiBattle::
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeDefeat, TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaDefeat, PARTNER_EMMIE
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_BlakeSamanthaVictory
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"

# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlakeSamanthaVictory::
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"

# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_VirgilNate::
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_VIRGIL, Common_Movement_ExclamationMark
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_VirgilIntro MSGBOX_AUTOCLOSE
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_NATE, Common_Movement_ExclamationMark
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NateIntro MSGBOX_AUTOCLOSE
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_VirgilNateDoMultiBattle
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"

# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_VirgilNateDoMultiBattle::
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilDefeat, TRAINER_NATE, MossdeepCity_Gym_Text_NateDefeat, PARTNER_EMMIE
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_VirgilNateVictory
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"

# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_VirgilNateVictory::
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"

# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_HannahSylvia::
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_HANNAH, Common_Movement_ExclamationMark
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_HannahIntro MSGBOX_AUTOCLOSE
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_SYLVIA, Common_Movement_ExclamationMark
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SylviaIntro MSGBOX_AUTOCLOSE
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_HannahSylviaDoMultiBattle
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"

# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_HannahSylviaDoMultiBattle::
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahDefeat, TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaDefeat, PARTNER_EMMIE
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_HannahSylviaVictory
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"

# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_HannahSylviaVictory::
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"

# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_KathleenNicholas::
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
delay 4
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_KATHLEEN, Common_Movement_ExclamationMark
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_SUSPICIOUS, TRUE
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_KathleenIntro MSGBOX_AUTOCLOSE
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_NICHOLAS, Common_Movement_ExclamationMark
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NicholasIntro MSGBOX_AUTOCLOSE
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_KathleenNicholasDoMultiBattle
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"

# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_KathleenNicholasDoMultiBattle::
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenDefeat, TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasDefeat, PARTNER_EMMIE
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_KathleenNicholasVictory
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"

# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_KathleenNicholasVictory::
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"

# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CliffordMacey::
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
lockall
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement LOCALID_CLIFFORD, Common_Movement_ExclamationMark
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_CliffordIntro MSGBOX_AUTOCLOSE
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
playse SE_PIN
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement  LOCALID_MACEY, Common_Movement_ExclamationMark
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MaceyIntro MSGBOX_AUTOCLOSE
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
goto MossdeepCity_Gym_EventScript_CliffordMaceyDoMultiBattle
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
releaseall
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"

# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CliffordMaceyDoMultiBattle::
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordDefeat, TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyDefeat, PARTNER_EMMIE
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
switch VAR_RESULT
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
case 1, MossdeepCity_Gym_EventScript_CliffordMaceyVictory
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
waitstate
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"

# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CliffordMaceyVictory::
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
waitmovement 0
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
addvar VAR_MOSSDEEP_CITY_GYM_STATE, 1
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
end
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"

# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"

# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"

# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"

# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"

# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"

# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"

# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"

# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"

# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"

# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"

# 526 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"

# 531 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"

# 536 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"

# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"

# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"

# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"

# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"

# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"

# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"

# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 0, MossdeepCity_Gym_EventScript_PrestonMaura
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"

# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 2, MossdeepCity_Gym_EventScript_VirgilNate
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"

# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"

# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 4, MossdeepCity_Gym_EventScript_KathleenNicholas
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"

# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_GYM_STATE, 3, MossdeepCity_Gym_EventScript_HannahSylvia
# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"

# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type POKéMON.\p"
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type POKéMON,\l"
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 651 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON. Go for it!$"
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"

# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"

# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"

# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"

# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 670 "data/maps/MossdeepCity_Gym/scripts.pory"

# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"

# 674 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"

# 677 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 678 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 679 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our GYM LEADERS are them!\p"
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 681 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 682 "data/maps/MossdeepCity_Gym/scripts.pory"

# 683 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 684 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 685 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 686 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 687 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"

# 690 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 691 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My POKéMON battling skills are out\n"
# 692 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 693 "data/maps/MossdeepCity_Gym/scripts.pory"

# 694 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 695 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 696 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 697 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 698 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 699 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 700 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 701 "data/maps/MossdeepCity_Gym/scripts.pory"

# 702 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 703 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 704 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 705 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 706 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 707 "data/maps/MossdeepCity_Gym/scripts.pory"

# 708 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 709 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 710 "data/maps/MossdeepCity_Gym/scripts.pory"

# 711 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 712 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 713 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 714 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 715 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 716 "data/maps/MossdeepCity_Gym/scripts.pory"

# 717 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 718 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 719 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 720 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 721 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 722 "data/maps/MossdeepCity_Gym/scripts.pory"

# 723 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 724 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 725 "data/maps/MossdeepCity_Gym/scripts.pory"

# 726 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 727 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 728 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our GYM LEADERS…\p"
# 729 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 730 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 731 "data/maps/MossdeepCity_Gym/scripts.pory"

# 732 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 733 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 734 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 735 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 736 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 737 "data/maps/MossdeepCity_Gym/scripts.pory"

# 738 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 739 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 740 "data/maps/MossdeepCity_Gym/scripts.pory"

# 741 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 742 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 743 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 744 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 745 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 746 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 747 "data/maps/MossdeepCity_Gym/scripts.pory"

# 748 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 749 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 750 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 751 "data/maps/MossdeepCity_Gym/scripts.pory"

# 752 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 753 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 754 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 755 "data/maps/MossdeepCity_Gym/scripts.pory"

# 756 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 757 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 758 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 759 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 760 "data/maps/MossdeepCity_Gym/scripts.pory"

# 761 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 762 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 763 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 764 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 765 "data/maps/MossdeepCity_Gym/scripts.pory"

# 766 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 767 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 768 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 769 "data/maps/MossdeepCity_Gym/scripts.pory"

# 770 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 771 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 772 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 773 "data/maps/MossdeepCity_Gym/scripts.pory"

# 774 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 775 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 776 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 777 "data/maps/MossdeepCity_Gym/scripts.pory"

# 778 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 779 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 780 "data/maps/MossdeepCity_Gym/scripts.pory"

# 781 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 782 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 783 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 784 "data/maps/MossdeepCity_Gym/scripts.pory"

# 785 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 786 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 787 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 788 "data/maps/MossdeepCity_Gym/scripts.pory"

# 789 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 790 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 791 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 792 "data/maps/MossdeepCity_Gym/scripts.pory"

# 793 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 794 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 795 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 796 "data/maps/MossdeepCity_Gym/scripts.pory"

# 797 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 798 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 799 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 800 "data/maps/MossdeepCity_Gym/scripts.pory"

# 801 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 802 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 803 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 804 "data/maps/MossdeepCity_Gym/scripts.pory"

# 805 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 806 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 807 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 808 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 809 "data/maps/MossdeepCity_Gym/scripts.pory"

# 810 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 811 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 812 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON hard-battling power!$"
# 813 "data/maps/MossdeepCity_Gym/scripts.pory"

# 814 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 815 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 816 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 817 "data/maps/MossdeepCity_Gym/scripts.pory"

# 818 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 819 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 820 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible POKéMON power next.$"
# 821 "data/maps/MossdeepCity_Gym/scripts.pory"

# 822 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 823 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 824 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Fufufu… Were you surprised?\p"
# 825 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That there are two GYM LEADERS?\n"
# 826 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 827 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We're twins!\n"
# 828 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We're twins!\p"
# 829 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We don't need to talk because…\n"
# 830 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We can each determine what…\p"
# 831 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The other is thinking…\n"
# 832 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: All in our minds!\p"
# 833 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: This combination of ours…\n"
# 834 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Can you beat it?$"
# 835 "data/maps/MossdeepCity_Gym/scripts.pory"

# 836 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 837 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
# 838 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Was shattered!\p"
# 839 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It can't be helped. You've won…\n"
# 840 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: So, in recognition, take this.$"
# 841 "data/maps/MossdeepCity_Gym/scripts.pory"

# 842 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 843 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 844 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from TATE and LIZA.$"
# 845 "data/maps/MossdeepCity_Gym/scripts.pory"

# 846 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 847 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
# 848 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
# 849 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It also lets you use the HM move\n"
# 850 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "DIVE outside of battle.\p"
# 851 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You should also take this, too.$"
# 852 "data/maps/MossdeepCity_Gym/scripts.pory"

# 853 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 854 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM04 contains…\n"
# 855 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: CALM MIND!\p"
# 856 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It raises SP. ATK and…\n"
# 857 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It raises SP. DEF!\p"
# 858 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It's a move that's perfect…\n"
# 859 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For PSYCHIC POKéMON!\p"
# 860 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 861 "data/maps/MossdeepCity_Gym/scripts.pory"

# 862 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 863 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
# 864 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 865 "data/maps/MossdeepCity_Gym/scripts.pory"

# 866 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 867 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
# 868 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your POKéMON is far stronger than\l"
# 869 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 870 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You will become even stronger!\n"
# 871 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 872 "data/maps/MossdeepCity_Gym/scripts.pory"

# 873 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 874 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 875 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 876 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Oops, you have only one…\n"
# 877 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON that can battle.\p"
# 878 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We can't battle that way!\p"
# 879 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: If you want to challenge us,\n"
# 880 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more POKéMON.$"
# 881 "data/maps/MossdeepCity_Gym/scripts.pory"

# 882 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 883 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 884 "data/maps/MossdeepCity_Gym/scripts.pory"

# 885 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 886 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 887 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 888 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 889 "data/maps/MossdeepCity_Gym/scripts.pory"

# 890 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 891 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: POKéMON…\n"
# 892 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON…\p"
# 893 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 894 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 895 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 896 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 897 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 898 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 899 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 900 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 901 "data/maps/MossdeepCity_Gym/scripts.pory"

# 902 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 903 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your POKéMON…\n"
# 904 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 905 "data/maps/MossdeepCity_Gym/scripts.pory"

# 906 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 907 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 908 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 909 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 910 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 911 "data/maps/MossdeepCity_Gym/scripts.pory"

# 912 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 913 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 914 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 915 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 916 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 917 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 918 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 919 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one POKéMON!\n"
# 920 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one POKéMON!\p"
# 921 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 922 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two POKéMON when you come back.$"

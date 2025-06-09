# 1 "data/maps/FortreeCity_Gym/scripts.pory"

# 2 "data/maps/FortreeCity_Gym/scripts.pory"
.set LOCALID_DARIUS, 8
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
.set LOCALID_HUMBERTO, 7
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
.set LOCALID_FLINT, 3
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
.set LOCALID_EDWARDO, 5
# 6 "data/maps/FortreeCity_Gym/scripts.pory"
.set LOCALID_ASHLEY, 4
# 7 "data/maps/FortreeCity_Gym/scripts.pory"
.set LOCALID_JARED, 2
# 8 "data/maps/FortreeCity_Gym/scripts.pory"
.set LOCALID_WINONA, 1
# 9 "data/maps/FortreeCity_Gym/scripts.pory"

# 10 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 11 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 12 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FortreeCity_Gym_OnFrame
# 14 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 15 "data/maps/FortreeCity_Gym/scripts.pory"

# 16 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnFrame:
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 37, FortreeCity_Gym_EventScript_ProgressEmmieState
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 19 "data/maps/FortreeCity_Gym/scripts.pory"

# 20 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_ProgressEmmieState::
# 21 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 38
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 23 "data/maps/FortreeCity_Gym/scripts.pory"

# 24 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 28 "data/maps/FortreeCity_Gym/scripts.pory"

# 29 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 30 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 32 "data/maps/FortreeCity_Gym/scripts.pory"

# 33 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 37 "data/maps/FortreeCity_Gym/scripts.pory"

# 38 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona2:
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_WINONA
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_WinonaIntro, MSGBOX_AUTOCLOSE
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_WinonaDoMultiBattle
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
closemessage
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 48 "data/maps/FortreeCity_Gym/scripts.pory"

# 49 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDoMultiBattle::
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat, PARTNER_EMMIE
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_WinonaVictory
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 57 "data/maps/FortreeCity_Gym/scripts.pory"

# 58 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaVictory::
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 73
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_PARTNER_EMMIE_STATE, 39
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_WinonaDefeated
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 64 "data/maps/FortreeCity_Gym/scripts.pory"

# 65 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona2
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 71 "data/maps/FortreeCity_Gym/scripts.pory"

# 72 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_FORTREE_SHELLY
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_TEAM_MAGMA
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 88 "data/maps/FortreeCity_Gym/scripts.pory"

# 89 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 96 "data/maps/FortreeCity_Gym/scripts.pory"

# 97 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 103 "data/maps/FortreeCity_Gym/scripts.pory"

# 104 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 108 "data/maps/FortreeCity_Gym/scripts.pory"

# 109 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshley::
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JARED
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_JaredIntro MSGBOX_AUTOCLOSE
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ASHLEY
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_AshleyIntro, MSGBOX_AUTOCLOSE
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_JaredAshleyDoMultiBattle
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 130 "data/maps/FortreeCity_Gym/scripts.pory"

# 131 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshleyDoMultiBattle::
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_JARED, FortreeCity_Gym_Text_JaredDefeat, TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyDefeat, PARTNER_EMMIE
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_JaredAshleyVictory
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 139 "data/maps/FortreeCity_Gym/scripts.pory"

# 140 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshleyVictory::
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 149 "data/maps/FortreeCity_Gym/scripts.pory"

# 150 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 154 "data/maps/FortreeCity_Gym/scripts.pory"

# 155 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlint::
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_EDWARDO
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_EdwardoIntro MSGBOX_AUTOCLOSE
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_FLINT
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_FlintIntro, MSGBOX_AUTOCLOSE
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_EdwardoFlintDoMultiBattle
# 174 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 176 "data/maps/FortreeCity_Gym/scripts.pory"

# 177 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlintDoMultiBattle::
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoDefeat, TRAINER_FLINT, FortreeCity_Gym_Text_FlintDefeat, PARTNER_EMMIE
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_EdwardoFlintVictory
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 185 "data/maps/FortreeCity_Gym/scripts.pory"

# 186 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlintVictory::
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 188 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 189 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 195 "data/maps/FortreeCity_Gym/scripts.pory"

# 196 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 197 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 200 "data/maps/FortreeCity_Gym/scripts.pory"

# 201 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 205 "data/maps/FortreeCity_Gym/scripts.pory"

# 206 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 210 "data/maps/FortreeCity_Gym/scripts.pory"

# 211 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumberto::
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_DARIUS
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 218 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 219 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_DariusIntro MSGBOX_AUTOCLOSE
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_HUMBERTO
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_HumbertoIntro, MSGBOX_AUTOCLOSE
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_DariusHumbertoDoMultiBattle
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 232 "data/maps/FortreeCity_Gym/scripts.pory"

# 233 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumbertoDoMultiBattle::
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_DARIUS, FortreeCity_Gym_Text_DariusDefeat, TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoDefeat, PARTNER_EMMIE
# 236 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_DariusHumbertoVictory
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 241 "data/maps/FortreeCity_Gym/scripts.pory"

# 242 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumbertoVictory::
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 251 "data/maps/FortreeCity_Gym/scripts.pory"

# 252 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 256 "data/maps/FortreeCity_Gym/scripts.pory"

# 257 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 261 "data/maps/FortreeCity_Gym/scripts.pory"

# 262 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 269 "data/maps/FortreeCity_Gym/scripts.pory"

# 270 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 274 "data/maps/FortreeCity_Gym/scripts.pory"

# 275 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 280 "data/maps/FortreeCity_Gym/scripts.pory"

# 281 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 286 "data/maps/FortreeCity_Gym/scripts.pory"

# 287 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 291 "data/maps/FortreeCity_Gym/scripts.pory"

# 292 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 296 "data/maps/FortreeCity_Gym/scripts.pory"

# 297 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type POKéMON.\p"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"

# 308 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"

# 312 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD POKéMON!$"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"

# 316 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"

# 320 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"

# 326 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 327 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\n"
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 331 "data/maps/FortreeCity_Gym/scripts.pory"

# 332 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"

# 336 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 340 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 341 "data/maps/FortreeCity_Gym/scripts.pory"

# 342 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 343 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 344 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 345 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 346 "data/maps/FortreeCity_Gym/scripts.pory"

# 347 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 348 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 350 "data/maps/FortreeCity_Gym/scripts.pory"

# 351 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 355 "data/maps/FortreeCity_Gym/scripts.pory"

# 356 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 357 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 358 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 359 "data/maps/FortreeCity_Gym/scripts.pory"

# 360 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 361 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 362 "data/maps/FortreeCity_Gym/scripts.pory"

# 363 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 364 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 365 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 366 "data/maps/FortreeCity_Gym/scripts.pory"

# 367 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 368 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 369 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 370 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 371 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 372 "data/maps/FortreeCity_Gym/scripts.pory"

# 373 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 374 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 375 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 376 "data/maps/FortreeCity_Gym/scripts.pory"

# 377 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 378 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 379 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 380 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 381 "data/maps/FortreeCity_Gym/scripts.pory"

# 382 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 383 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 384 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type POKéMON.\p"
# 385 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 386 "data/maps/FortreeCity_Gym/scripts.pory"

# 387 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 388 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 389 "data/maps/FortreeCity_Gym/scripts.pory"

# 390 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 391 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 392 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 393 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's POKéMON are all business.$"
# 394 "data/maps/FortreeCity_Gym/scripts.pory"

# 395 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 396 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 397 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 398 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD POKéMON\n"
# 399 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 400 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 401 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 402 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 403 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD POKéMON and I!$"
# 404 "data/maps/FortreeCity_Gym/scripts.pory"

# 405 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 406 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 407 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command POKéMON with more grace\l"
# 408 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 409 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 410 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 411 "data/maps/FortreeCity_Gym/scripts.pory"

# 412 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 413 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 414 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 415 "data/maps/FortreeCity_Gym/scripts.pory"

# 416 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 417 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 418 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 419 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 420 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 421 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 422 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 423 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 424 "data/maps/FortreeCity_Gym/scripts.pory"

# 425 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 426 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
# 427 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Its speed…\n"
# 428 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No POKéMON should be able to avoid it.\p"
# 429 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 430 "data/maps/FortreeCity_Gym/scripts.pory"

# 431 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 432 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 433 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 434 "data/maps/FortreeCity_Gym/scripts.pory"

# 435 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 436 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 437 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD POKéMON.$"
# 438 "data/maps/FortreeCity_Gym/scripts.pory"

# 439 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 440 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 441 "data/maps/FortreeCity_Gym/scripts.pory"

# 442 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 443 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 444 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 445 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 446 "data/maps/FortreeCity_Gym/scripts.pory"

# 447 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 448 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 449 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 450 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 451 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 452 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 453 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 454 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 455 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 456 "data/maps/FortreeCity_Gym/scripts.pory"

# 457 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 458 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 459 "data/maps/FortreeCity_Gym/scripts.pory"

# 460 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 461 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
# 462 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 463 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 464 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 465 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 466 "data/maps/FortreeCity_Gym/scripts.pory"

# 467 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 468 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 469 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 470 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 471 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 472 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 473 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 474 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 475 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 476 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 477 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 478 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 479 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"

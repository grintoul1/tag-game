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
	.byte 0
# 14 "data/maps/FortreeCity_Gym/scripts.pory"

# 15 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 16 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 19 "data/maps/FortreeCity_Gym/scripts.pory"

# 20 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 21 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 23 "data/maps/FortreeCity_Gym/scripts.pory"

# 24 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 28 "data/maps/FortreeCity_Gym/scripts.pory"

# 29 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona2:
# 30 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_WINONA
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_ELITE_FOUR, TRUE
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_WinonaIntro, MSGBOX_AUTOCLOSE
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_WinonaDoMultiBattle
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
closemessage
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 39 "data/maps/FortreeCity_Gym/scripts.pory"

# 40 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDoMultiBattle::
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat, PARTNER_EMMIE
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_WinonaVictory
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 48 "data/maps/FortreeCity_Gym/scripts.pory"

# 49 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaVictory::
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_LEVEL_CAP, 73
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_WinonaDefeated
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 54 "data/maps/FortreeCity_Gym/scripts.pory"

# 55 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona2
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 61 "data/maps/FortreeCity_Gym/scripts.pory"

# 62 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_FORTREE_SHELLY
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_TEAM_MAGMA
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 78 "data/maps/FortreeCity_Gym/scripts.pory"

# 79 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 86 "data/maps/FortreeCity_Gym/scripts.pory"

# 87 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 93 "data/maps/FortreeCity_Gym/scripts.pory"

# 94 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 98 "data/maps/FortreeCity_Gym/scripts.pory"

# 99 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshley::
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JARED
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_JaredIntro MSGBOX_AUTOCLOSE
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ASHLEY
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_AshleyIntro, MSGBOX_AUTOCLOSE
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_JaredAshleyDoMultiBattle
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 120 "data/maps/FortreeCity_Gym/scripts.pory"

# 121 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshleyDoMultiBattle::
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_JARED, FortreeCity_Gym_Text_JaredDefeat, TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyDefeat, PARTNER_EMMIE
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_JaredAshleyVictory
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 129 "data/maps/FortreeCity_Gym/scripts.pory"

# 130 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshleyVictory::
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 139 "data/maps/FortreeCity_Gym/scripts.pory"

# 140 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 143 "data/maps/FortreeCity_Gym/scripts.pory"

# 144 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlint::
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_EDWARDO
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_EdwardoIntro MSGBOX_AUTOCLOSE
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_FLINT
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_FlintIntro, MSGBOX_AUTOCLOSE
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_EdwardoFlintDoMultiBattle
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 165 "data/maps/FortreeCity_Gym/scripts.pory"

# 166 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlintDoMultiBattle::
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoDefeat, TRAINER_FLINT, FortreeCity_Gym_Text_FlintDefeat, PARTNER_EMMIE
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_EdwardoFlintVictory
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 174 "data/maps/FortreeCity_Gym/scripts.pory"

# 175 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlintVictory::
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 184 "data/maps/FortreeCity_Gym/scripts.pory"

# 185 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 192 "data/maps/FortreeCity_Gym/scripts.pory"

# 193 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 196 "data/maps/FortreeCity_Gym/scripts.pory"

# 197 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumberto::
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_DARIUS
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 205 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_DariusIntro MSGBOX_AUTOCLOSE
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_HUMBERTO
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 209 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_HumbertoIntro, MSGBOX_AUTOCLOSE
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_DariusHumbertoDoMultiBattle
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 218 "data/maps/FortreeCity_Gym/scripts.pory"

# 219 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumbertoDoMultiBattle::
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_DARIUS, FortreeCity_Gym_Text_DariusDefeat, TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoDefeat, PARTNER_EMMIE
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_DariusHumbertoVictory
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 227 "data/maps/FortreeCity_Gym/scripts.pory"

# 228 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumbertoVictory::
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 236 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 237 "data/maps/FortreeCity_Gym/scripts.pory"

# 238 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 241 "data/maps/FortreeCity_Gym/scripts.pory"

# 242 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 245 "data/maps/FortreeCity_Gym/scripts.pory"

# 246 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 253 "data/maps/FortreeCity_Gym/scripts.pory"

# 254 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 258 "data/maps/FortreeCity_Gym/scripts.pory"

# 259 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 264 "data/maps/FortreeCity_Gym/scripts.pory"

# 265 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 270 "data/maps/FortreeCity_Gym/scripts.pory"

# 271 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 275 "data/maps/FortreeCity_Gym/scripts.pory"

# 276 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 280 "data/maps/FortreeCity_Gym/scripts.pory"

# 281 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type POKéMON.\p"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"

# 292 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"

# 296 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD POKéMON!$"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"

# 300 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 301 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"

# 304 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"

# 310 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\n"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"

# 316 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"

# 320 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"

# 326 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 327 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"

# 331 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"

# 335 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 336 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"

# 340 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 341 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 343 "data/maps/FortreeCity_Gym/scripts.pory"

# 344 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 345 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 346 "data/maps/FortreeCity_Gym/scripts.pory"

# 347 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 348 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 350 "data/maps/FortreeCity_Gym/scripts.pory"

# 351 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 355 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 356 "data/maps/FortreeCity_Gym/scripts.pory"

# 357 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 358 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 360 "data/maps/FortreeCity_Gym/scripts.pory"

# 361 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 362 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 364 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 365 "data/maps/FortreeCity_Gym/scripts.pory"

# 366 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 367 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 368 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type POKéMON.\p"
# 369 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 370 "data/maps/FortreeCity_Gym/scripts.pory"

# 371 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 372 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 373 "data/maps/FortreeCity_Gym/scripts.pory"

# 374 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 375 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 376 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 377 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's POKéMON are all business.$"
# 378 "data/maps/FortreeCity_Gym/scripts.pory"

# 379 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 380 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 381 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 382 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD POKéMON\n"
# 383 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 384 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 385 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 386 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 387 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD POKéMON and I!$"
# 388 "data/maps/FortreeCity_Gym/scripts.pory"

# 389 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 390 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 391 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command POKéMON with more grace\l"
# 392 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 393 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 394 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 395 "data/maps/FortreeCity_Gym/scripts.pory"

# 396 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 397 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 398 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 399 "data/maps/FortreeCity_Gym/scripts.pory"

# 400 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 401 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 402 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 403 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 404 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 405 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 406 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 407 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 408 "data/maps/FortreeCity_Gym/scripts.pory"

# 409 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 410 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
# 411 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Its speed…\n"
# 412 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No POKéMON should be able to avoid it.\p"
# 413 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 414 "data/maps/FortreeCity_Gym/scripts.pory"

# 415 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 416 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 417 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 418 "data/maps/FortreeCity_Gym/scripts.pory"

# 419 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 420 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 421 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD POKéMON.$"
# 422 "data/maps/FortreeCity_Gym/scripts.pory"

# 423 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 424 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 425 "data/maps/FortreeCity_Gym/scripts.pory"

# 426 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 427 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 428 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 429 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 430 "data/maps/FortreeCity_Gym/scripts.pory"

# 431 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 432 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 433 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 434 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 435 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 436 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 437 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 438 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 439 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 440 "data/maps/FortreeCity_Gym/scripts.pory"

# 441 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 442 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 443 "data/maps/FortreeCity_Gym/scripts.pory"

# 444 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 445 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
# 446 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 447 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 448 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 449 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 450 "data/maps/FortreeCity_Gym/scripts.pory"

# 451 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 452 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 453 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 454 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 455 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 456 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 457 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 458 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 459 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 460 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 461 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 462 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 463 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"

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
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_WinonaIntro, MSGBOX_AUTOCLOSE
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_WinonaDoMultiBattle
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
closemessage
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 41 "data/maps/FortreeCity_Gym/scripts.pory"

# 42 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDoMultiBattle::
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_1 TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat, PARTNER_EMMIE
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_WinonaVictory
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 50 "data/maps/FortreeCity_Gym/scripts.pory"

# 51 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaVictory::
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_WinonaDefeated
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 55 "data/maps/FortreeCity_Gym/scripts.pory"

# 56 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona2
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 62 "data/maps/FortreeCity_Gym/scripts.pory"

# 63 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_FORTREE_SHELLY
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_TEAM_MAGMA
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 79 "data/maps/FortreeCity_Gym/scripts.pory"

# 80 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 87 "data/maps/FortreeCity_Gym/scripts.pory"

# 88 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 94 "data/maps/FortreeCity_Gym/scripts.pory"

# 95 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 99 "data/maps/FortreeCity_Gym/scripts.pory"

# 100 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshley::
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JARED
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_JaredIntro MSGBOX_AUTOCLOSE
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ASHLEY
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_AshleyIntro, MSGBOX_AUTOCLOSE
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_JaredAshleyDoMultiBattle
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 121 "data/maps/FortreeCity_Gym/scripts.pory"

# 122 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshleyDoMultiBattle::
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_JARED, FortreeCity_Gym_Text_JaredDefeat, TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyDefeat, PARTNER_EMMIE
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_JaredAshleyVictory
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 130 "data/maps/FortreeCity_Gym/scripts.pory"

# 131 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshleyVictory::
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 140 "data/maps/FortreeCity_Gym/scripts.pory"

# 141 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 144 "data/maps/FortreeCity_Gym/scripts.pory"

# 145 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlint::
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_EDWARDO
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_EdwardoIntro MSGBOX_AUTOCLOSE
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_FLINT
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_FlintIntro, MSGBOX_AUTOCLOSE
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_EdwardoFlintDoMultiBattle
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 166 "data/maps/FortreeCity_Gym/scripts.pory"

# 167 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlintDoMultiBattle::
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoDefeat, TRAINER_FLINT, FortreeCity_Gym_Text_FlintDefeat, PARTNER_EMMIE
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_EdwardoFlintVictory
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 174 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 175 "data/maps/FortreeCity_Gym/scripts.pory"

# 176 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlintVictory::
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 185 "data/maps/FortreeCity_Gym/scripts.pory"

# 186 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 189 "data/maps/FortreeCity_Gym/scripts.pory"

# 190 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 193 "data/maps/FortreeCity_Gym/scripts.pory"

# 194 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 197 "data/maps/FortreeCity_Gym/scripts.pory"

# 198 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumberto::
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_DARIUS
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 205 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_DariusIntro MSGBOX_AUTOCLOSE
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_HUMBERTO
# 209 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_HumbertoIntro, MSGBOX_AUTOCLOSE
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_DariusHumbertoDoMultiBattle
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 218 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 219 "data/maps/FortreeCity_Gym/scripts.pory"

# 220 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumbertoDoMultiBattle::
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_DARIUS, FortreeCity_Gym_Text_DariusDefeat, TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoDefeat, PARTNER_EMMIE
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_DariusHumbertoVictory
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 228 "data/maps/FortreeCity_Gym/scripts.pory"

# 229 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumbertoVictory::
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 236 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 238 "data/maps/FortreeCity_Gym/scripts.pory"

# 239 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 242 "data/maps/FortreeCity_Gym/scripts.pory"

# 243 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 246 "data/maps/FortreeCity_Gym/scripts.pory"

# 247 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 254 "data/maps/FortreeCity_Gym/scripts.pory"

# 255 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 259 "data/maps/FortreeCity_Gym/scripts.pory"

# 260 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 265 "data/maps/FortreeCity_Gym/scripts.pory"

# 266 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 271 "data/maps/FortreeCity_Gym/scripts.pory"

# 272 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 276 "data/maps/FortreeCity_Gym/scripts.pory"

# 277 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 281 "data/maps/FortreeCity_Gym/scripts.pory"

# 282 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type POKéMON.\p"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"

# 293 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"

# 297 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD POKéMON!$"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"

# 301 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"

# 305 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"

# 311 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\n"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"

# 317 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"

# 321 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"

# 327 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 331 "data/maps/FortreeCity_Gym/scripts.pory"

# 332 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"

# 336 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 340 "data/maps/FortreeCity_Gym/scripts.pory"

# 341 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 343 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 344 "data/maps/FortreeCity_Gym/scripts.pory"

# 345 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 346 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 347 "data/maps/FortreeCity_Gym/scripts.pory"

# 348 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 350 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 351 "data/maps/FortreeCity_Gym/scripts.pory"

# 352 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 355 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 356 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 357 "data/maps/FortreeCity_Gym/scripts.pory"

# 358 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 360 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 361 "data/maps/FortreeCity_Gym/scripts.pory"

# 362 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 364 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 365 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 366 "data/maps/FortreeCity_Gym/scripts.pory"

# 367 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 368 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 369 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type POKéMON.\p"
# 370 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 371 "data/maps/FortreeCity_Gym/scripts.pory"

# 372 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 373 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 374 "data/maps/FortreeCity_Gym/scripts.pory"

# 375 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 376 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 377 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 378 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's POKéMON are all business.$"
# 379 "data/maps/FortreeCity_Gym/scripts.pory"

# 380 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 381 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 382 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 383 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD POKéMON\n"
# 384 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 385 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 386 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 387 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 388 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD POKéMON and I!$"
# 389 "data/maps/FortreeCity_Gym/scripts.pory"

# 390 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 391 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 392 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command POKéMON with more grace\l"
# 393 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 394 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 395 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 396 "data/maps/FortreeCity_Gym/scripts.pory"

# 397 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 398 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 399 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 400 "data/maps/FortreeCity_Gym/scripts.pory"

# 401 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 402 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 403 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 404 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 405 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 406 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 407 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 408 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 409 "data/maps/FortreeCity_Gym/scripts.pory"

# 410 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 411 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
# 412 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Its speed…\n"
# 413 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No POKéMON should be able to avoid it.\p"
# 414 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 415 "data/maps/FortreeCity_Gym/scripts.pory"

# 416 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 417 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 418 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 419 "data/maps/FortreeCity_Gym/scripts.pory"

# 420 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 421 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 422 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD POKéMON.$"
# 423 "data/maps/FortreeCity_Gym/scripts.pory"

# 424 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 425 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 426 "data/maps/FortreeCity_Gym/scripts.pory"

# 427 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 428 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 429 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 430 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 431 "data/maps/FortreeCity_Gym/scripts.pory"

# 432 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 433 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 434 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 435 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 436 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 437 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 438 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 439 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 440 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 441 "data/maps/FortreeCity_Gym/scripts.pory"

# 442 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 443 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 444 "data/maps/FortreeCity_Gym/scripts.pory"

# 445 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 446 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
# 447 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 448 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 449 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 450 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 451 "data/maps/FortreeCity_Gym/scripts.pory"

# 452 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 453 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 454 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 455 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 456 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 457 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 458 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 459 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 460 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 461 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 462 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 463 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 464 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"

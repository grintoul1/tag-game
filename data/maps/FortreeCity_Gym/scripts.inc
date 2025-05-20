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
goto FortreeCity_Gym_EventScript_WinonaDefeated
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 53 "data/maps/FortreeCity_Gym/scripts.pory"

# 54 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona2
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 60 "data/maps/FortreeCity_Gym/scripts.pory"

# 61 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_FORTREE_SHELLY
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_TEAM_MAGMA
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 77 "data/maps/FortreeCity_Gym/scripts.pory"

# 78 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 85 "data/maps/FortreeCity_Gym/scripts.pory"

# 86 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 92 "data/maps/FortreeCity_Gym/scripts.pory"

# 93 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 97 "data/maps/FortreeCity_Gym/scripts.pory"

# 98 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshley::
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_JARED
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_JaredIntro MSGBOX_AUTOCLOSE
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_ASHLEY
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_AshleyIntro, MSGBOX_AUTOCLOSE
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_JaredAshleyDoMultiBattle
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 119 "data/maps/FortreeCity_Gym/scripts.pory"

# 120 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshleyDoMultiBattle::
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_JARED, FortreeCity_Gym_Text_JaredDefeat, TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyDefeat, PARTNER_EMMIE
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_JaredAshleyVictory
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 128 "data/maps/FortreeCity_Gym/scripts.pory"

# 129 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_JaredAshleyVictory::
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 138 "data/maps/FortreeCity_Gym/scripts.pory"

# 139 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 142 "data/maps/FortreeCity_Gym/scripts.pory"

# 143 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlint::
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_EDWARDO
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_EdwardoIntro MSGBOX_AUTOCLOSE
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_FLINT
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_FlintIntro, MSGBOX_AUTOCLOSE
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_EdwardoFlintDoMultiBattle
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 164 "data/maps/FortreeCity_Gym/scripts.pory"

# 165 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlintDoMultiBattle::
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoDefeat, TRAINER_FLINT, FortreeCity_Gym_Text_FlintDefeat, PARTNER_EMMIE
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_EdwardoFlintVictory
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 173 "data/maps/FortreeCity_Gym/scripts.pory"

# 174 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_EdwardoFlintVictory::
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 183 "data/maps/FortreeCity_Gym/scripts.pory"

# 184 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 187 "data/maps/FortreeCity_Gym/scripts.pory"

# 188 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 189 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 191 "data/maps/FortreeCity_Gym/scripts.pory"

# 192 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 195 "data/maps/FortreeCity_Gym/scripts.pory"

# 196 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumberto::
# 197 "data/maps/FortreeCity_Gym/scripts.pory"
lockall
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_DARIUS
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 205 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_DariusIntro MSGBOX_AUTOCLOSE
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
setvar VAR_0x8008, LOCALID_HUMBERTO
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
playse SE_PIN
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 209 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_ENCOUNTER_INTENSE, TRUE
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_HumbertoIntro, MSGBOX_AUTOCLOSE
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
goto FortreeCity_Gym_EventScript_DariusHumbertoDoMultiBattle
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
releaseall
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 217 "data/maps/FortreeCity_Gym/scripts.pory"

# 218 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumbertoDoMultiBattle::
# 219 "data/maps/FortreeCity_Gym/scripts.pory"
playbgm MUS_GYM, TRUE
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
multi_2p_vs_2 TRAINER_DARIUS, FortreeCity_Gym_Text_DariusDefeat, TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoDefeat, PARTNER_EMMIE
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
switch VAR_RESULT
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
case 1, FortreeCity_Gym_EventScript_DariusHumbertoVictory
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
fadescreen FADE_TO_BLACK
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
special SetCB2WhiteOut
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
waitstate
# 226 "data/maps/FortreeCity_Gym/scripts.pory"

# 227 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_DariusHumbertoVictory::
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
waitmovement 0
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
addvar VAR_FORTREE_CITY_STATE, 1
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
end
# 236 "data/maps/FortreeCity_Gym/scripts.pory"

# 237 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 240 "data/maps/FortreeCity_Gym/scripts.pory"

# 241 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 244 "data/maps/FortreeCity_Gym/scripts.pory"

# 245 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 252 "data/maps/FortreeCity_Gym/scripts.pory"

# 253 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 257 "data/maps/FortreeCity_Gym/scripts.pory"

# 258 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 263 "data/maps/FortreeCity_Gym/scripts.pory"

# 264 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 269 "data/maps/FortreeCity_Gym/scripts.pory"

# 270 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 274 "data/maps/FortreeCity_Gym/scripts.pory"

# 275 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 279 "data/maps/FortreeCity_Gym/scripts.pory"

# 280 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type POKéMON.\p"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"

# 291 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"

# 295 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD POKéMON!$"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"

# 299 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"

# 303 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"

# 309 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\n"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"

# 315 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"

# 319 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"

# 325 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 326 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 327 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 329 "data/maps/FortreeCity_Gym/scripts.pory"

# 330 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 331 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 333 "data/maps/FortreeCity_Gym/scripts.pory"

# 334 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 335 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 336 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"

# 339 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 340 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 341 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 342 "data/maps/FortreeCity_Gym/scripts.pory"

# 343 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 344 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 345 "data/maps/FortreeCity_Gym/scripts.pory"

# 346 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 347 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 348 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 349 "data/maps/FortreeCity_Gym/scripts.pory"

# 350 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 351 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 355 "data/maps/FortreeCity_Gym/scripts.pory"

# 356 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 357 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 358 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 359 "data/maps/FortreeCity_Gym/scripts.pory"

# 360 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 361 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 362 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 364 "data/maps/FortreeCity_Gym/scripts.pory"

# 365 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 366 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 367 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type POKéMON.\p"
# 368 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 369 "data/maps/FortreeCity_Gym/scripts.pory"

# 370 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 371 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 372 "data/maps/FortreeCity_Gym/scripts.pory"

# 373 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 374 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 375 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 376 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's POKéMON are all business.$"
# 377 "data/maps/FortreeCity_Gym/scripts.pory"

# 378 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 379 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 380 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 381 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD POKéMON\n"
# 382 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 383 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 384 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 385 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 386 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD POKéMON and I!$"
# 387 "data/maps/FortreeCity_Gym/scripts.pory"

# 388 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 389 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 390 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command POKéMON with more grace\l"
# 391 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 392 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 393 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 394 "data/maps/FortreeCity_Gym/scripts.pory"

# 395 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 396 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 397 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 398 "data/maps/FortreeCity_Gym/scripts.pory"

# 399 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 400 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 401 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 402 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 403 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 404 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 405 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 406 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 407 "data/maps/FortreeCity_Gym/scripts.pory"

# 408 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 409 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
# 410 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Its speed…\n"
# 411 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No POKéMON should be able to avoid it.\p"
# 412 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 413 "data/maps/FortreeCity_Gym/scripts.pory"

# 414 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 415 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 416 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 417 "data/maps/FortreeCity_Gym/scripts.pory"

# 418 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 419 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 420 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD POKéMON.$"
# 421 "data/maps/FortreeCity_Gym/scripts.pory"

# 422 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 423 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 424 "data/maps/FortreeCity_Gym/scripts.pory"

# 425 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 426 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 427 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 428 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 429 "data/maps/FortreeCity_Gym/scripts.pory"

# 430 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 431 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 432 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 433 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 434 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 435 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 436 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 437 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 438 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 439 "data/maps/FortreeCity_Gym/scripts.pory"

# 440 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 441 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 442 "data/maps/FortreeCity_Gym/scripts.pory"

# 443 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 444 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
# 445 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 446 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 447 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 448 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 449 "data/maps/FortreeCity_Gym/scripts.pory"

# 450 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 451 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 452 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 453 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 454 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 455 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 456 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 457 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 458 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 459 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 460 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 461 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 462 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"

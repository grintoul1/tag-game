# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"
.set LOCALID_WALLY_ENTRANCE, 4
# 3 "data/maps/VictoryRoad_1F/scripts.pory"

# 4 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 5 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 6 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 7 "data/maps/VictoryRoad_1F/scripts.pory"

# 8 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition:
# 9 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 10 "data/maps/VictoryRoad_1F/scripts.pory"

# 11 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
# 12 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 2, 24
# 13 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 15 "data/maps/VictoryRoad_1F/scripts.pory"

# 16 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
# 17 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 3, 24
# 18 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 20 "data/maps/VictoryRoad_1F/scripts.pory"

# 21 "data/maps/VictoryRoad_1F/scripts.pory"

# 22 "data/maps/VictoryRoad_1F/scripts.pory"

# 23 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 24 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 35 "data/maps/VictoryRoad_1F/scripts.pory"

# 36 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 38 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterLeft
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 47 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 48 "data/maps/VictoryRoad_1F/scripts.pory"

# 49 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_B1F_EventScript_WallyDoMultiBattle
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 54 "data/maps/VictoryRoad_1F/scripts.pory"

# 55 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_B1F_EventScript_WallyDoMultiBattle::
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	multi_2p_vs_1 TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat, PARTNER_EMMIE
# 58 "data/maps/VictoryRoad_1F/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	case 1, VictoryRoad_B1F_EventScript_WallyVictory
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	special SetCB2WhiteOut
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	waitstate
# 63 "data/maps/VictoryRoad_1F/scripts.pory"

# 64 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_B1F_EventScript_WallyVictory::
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_WALLY_ENTRANCE
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_VICTORY_ROAD, TRUE
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 72 "data/maps/VictoryRoad_1F/scripts.pory"

# 73 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 76 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 78 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 79 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
	face_left
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 87 "data/maps/VictoryRoad_1F/scripts.pory"

# 88 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 89 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 90 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 91 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 94 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 96 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 100 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 101 "data/maps/VictoryRoad_1F/scripts.pory"
	face_right
# 102 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 103 "data/maps/VictoryRoad_1F/scripts.pory"

# 104 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 106 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 107 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 108 "data/maps/VictoryRoad_1F/scripts.pory"

# 109 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 111 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_ROUTE_114, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 112 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 114 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 116 "data/maps/VictoryRoad_1F/scripts.pory"

# 117 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_ROUTE_114, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 121 "data/maps/VictoryRoad_1F/scripts.pory"

# 122 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_AlbertHope::
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
lockall
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
playse SE_PIN
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement LOCALID_ALBERT, Common_Movement_ExclamationMark
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 127 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 128 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_AlbertIntro MSGBOX_AUTOCLOSE
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
playse SE_PIN
# 132 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement  LOCALID_HOPE, Common_Movement_ExclamationMark
# 133 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 134 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 135 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_HopeIntro MSGBOX_AUTOCLOSE
# 138 "data/maps/VictoryRoad_1F/scripts.pory"
goto VictoryRoad_1F_EventScript_AlbertHopeDoMultiBattle
# 139 "data/maps/VictoryRoad_1F/scripts.pory"
releaseall
# 140 "data/maps/VictoryRoad_1F/scripts.pory"
end
# 141 "data/maps/VictoryRoad_1F/scripts.pory"

# 142 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_AlbertHopeDoMultiBattle::
# 143 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_VICTORY_ROAD, TRUE
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
multi_2p_vs_2 TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertDefeat, TRAINER_HOPE, VictoryRoad_1F_Text_HopeDefeat, PARTNER_EMMIE
# 145 "data/maps/VictoryRoad_1F/scripts.pory"
switch VAR_RESULT
# 146 "data/maps/VictoryRoad_1F/scripts.pory"
case 1, VictoryRoad_1F_EventScript_AlbertHopeVictory
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
special SetCB2WhiteOut
# 149 "data/maps/VictoryRoad_1F/scripts.pory"
waitstate
# 150 "data/maps/VictoryRoad_1F/scripts.pory"

# 151 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_AlbertHopeVictory::
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 153 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 156 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 159 "data/maps/VictoryRoad_1F/scripts.pory"
end
# 160 "data/maps/VictoryRoad_1F/scripts.pory"

# 161 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_KatelynnQuincy::
# 162 "data/maps/VictoryRoad_1F/scripts.pory"
lockall
# 163 "data/maps/VictoryRoad_1F/scripts.pory"
playse SE_PIN
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement LOCALID_KATELYNN, Common_Movement_ExclamationMark
# 165 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 166 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 168 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_KatelynnIntro MSGBOX_AUTOCLOSE
# 170 "data/maps/VictoryRoad_1F/scripts.pory"
playse SE_PIN
# 171 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement  LOCALID_QUINCY, Common_Movement_ExclamationMark
# 172 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 173 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 175 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 176 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_QuincyIntro MSGBOX_AUTOCLOSE
# 177 "data/maps/VictoryRoad_1F/scripts.pory"
goto VictoryRoad_1F_EventScript_KatelynnQuincyDoMultiBattle
# 178 "data/maps/VictoryRoad_1F/scripts.pory"
releaseall
# 179 "data/maps/VictoryRoad_1F/scripts.pory"
end
# 180 "data/maps/VictoryRoad_1F/scripts.pory"

# 181 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_KatelynnQuincyDoMultiBattle::
# 182 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_VICTORY_ROAD, TRUE
# 183 "data/maps/VictoryRoad_1F/scripts.pory"
multi_2p_vs_2 TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnDefeat, TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyDefeat, PARTNER_EMMIE
# 184 "data/maps/VictoryRoad_1F/scripts.pory"
switch VAR_RESULT
# 185 "data/maps/VictoryRoad_1F/scripts.pory"
case 1, VictoryRoad_1F_EventScript_KatelynnQuincyVictory
# 186 "data/maps/VictoryRoad_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 187 "data/maps/VictoryRoad_1F/scripts.pory"
special SetCB2WhiteOut
# 188 "data/maps/VictoryRoad_1F/scripts.pory"
waitstate
# 189 "data/maps/VictoryRoad_1F/scripts.pory"

# 190 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_KatelynnQuincyVictory::
# 191 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 192 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 193 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 195 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 196 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/VictoryRoad_1F/scripts.pory"
addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 198 "data/maps/VictoryRoad_1F/scripts.pory"
setvar VAR_EMMIE_BATTLE_STATE, 1
# 199 "data/maps/VictoryRoad_1F/scripts.pory"
setflag FLAG_EMMIE_BATTLE_3
# 200 "data/maps/VictoryRoad_1F/scripts.pory"
end
# 201 "data/maps/VictoryRoad_1F/scripts.pory"

# 202 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 203 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 204 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 206 "data/maps/VictoryRoad_1F/scripts.pory"

# 207 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 208 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 209 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 211 "data/maps/VictoryRoad_1F/scripts.pory"

# 212 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 213 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 214 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 216 "data/maps/VictoryRoad_1F/scripts.pory"

# 217 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 218 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 219 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 221 "data/maps/VictoryRoad_1F/scripts.pory"

# 222 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 223 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 224 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 226 "data/maps/VictoryRoad_1F/scripts.pory"

# 227 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 228 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 229 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I bet you're surprised to see me here!\p"
# 230 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I made it all the way here, and it's\n"
# 231 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "all thanks to you!\p"
# 232 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, losing to you that time\n"
# 233 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "made me stronger!\p"
# 234 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "But I'm not going to lose anymore!\p"
# 235 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to win! For the POKéMON who\n"
# 236 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "gave me courage and strength!\p"
# 237 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 238 "data/maps/VictoryRoad_1F/scripts.pory"

# 239 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat:
# 240 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 241 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 242 "data/maps/VictoryRoad_1F/scripts.pory"

# 243 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 244 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you today,\n"
# 245 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, but one of these days, I'll\l"
# 246 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "catch up to you!$"
# 247 "data/maps/VictoryRoad_1F/scripts.pory"

# 248 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro:
# 249 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 250 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've gotten stronger since that last\n"
# 251 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "time! I wanted to show you, {PLAYER}!\p"
# 252 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 253 "data/maps/VictoryRoad_1F/scripts.pory"

# 254 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat:
# 255 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 256 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 257 "data/maps/VictoryRoad_1F/scripts.pory"

# 258 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle:
# 259 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you this time,\n"
# 260 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "too… But one of these days, {PLAYER},\l"
# 261 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to catch up to you…\p"
# 262 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And challenge the POKéMON LEAGUE!$"
# 263 "data/maps/VictoryRoad_1F/scripts.pory"

# 264 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro:
# 265 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've made it this far a couple times,\n"
# 266 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "but the last stretch is so long…$"
# 267 "data/maps/VictoryRoad_1F/scripts.pory"

# 268 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat:
# 269 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "My dream ends here again…$"
# 270 "data/maps/VictoryRoad_1F/scripts.pory"

# 271 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle:
# 272 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You've made it this far. Keep the\n"
# 273 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "momentum going and become the\l"
# 274 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "CHAMPION! If anyone can, it's you!$"
# 275 "data/maps/VictoryRoad_1F/scripts.pory"

# 276 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 277 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
# 278 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That possibility doesn't exist!$"
# 279 "data/maps/VictoryRoad_1F/scripts.pory"

# 280 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 281 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
# 282 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost?$"
# 283 "data/maps/VictoryRoad_1F/scripts.pory"

# 284 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 285 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
# 286 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That means I lack the qualifications\n"
# 287 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the CHAMPION…$"
# 288 "data/maps/VictoryRoad_1F/scripts.pory"

# 289 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 290 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
# 291 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "lives up to its name of VICTORY.$"
# 292 "data/maps/VictoryRoad_1F/scripts.pory"

# 293 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 294 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"
# 295 "data/maps/VictoryRoad_1F/scripts.pory"

# 296 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 297 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
# 298 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "becoming the CHAMPION.$"
# 299 "data/maps/VictoryRoad_1F/scripts.pory"

# 300 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 301 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the VICTORY ROAD?\n"
# 302 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll tell you if you win!$"
# 303 "data/maps/VictoryRoad_1F/scripts.pory"

# 304 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 305 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 306 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Well done!$"
# 307 "data/maps/VictoryRoad_1F/scripts.pory"

# 308 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 309 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
# 310 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the final test for any TRAINER aiming\l"
# 311 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the POKéMON CHAMPION.\p"
# 312 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That's why it's called the VICTORY\n"
# 313 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ROAD.$"
# 314 "data/maps/VictoryRoad_1F/scripts.pory"

# 315 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 316 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
# 317 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "that's come this far. Come on!$"
# 318 "data/maps/VictoryRoad_1F/scripts.pory"

# 319 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 320 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"
# 321 "data/maps/VictoryRoad_1F/scripts.pory"

# 322 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 323 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
# 324 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "See if I care.$"

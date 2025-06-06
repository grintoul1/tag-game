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
VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 22 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 23 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 24 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 30 "data/maps/VictoryRoad_1F/scripts.pory"

# 31 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_WALLY_ENTRANCE
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 40 "data/maps/VictoryRoad_1F/scripts.pory"

# 41 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_B1F_EventScript_WallyDoMultiBattle
# 46 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 47 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 48 "data/maps/VictoryRoad_1F/scripts.pory"

# 49 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_B1F_EventScript_WallyDoMultiBattle::
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	multi_2p_vs_1 TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat, PARTNER_EMMIE
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	switch VAR_RESULT
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	case 1, VictoryRoad_B1F_EventScript_WallyVictory
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
	special SetCB2WhiteOut
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	waitstate
# 57 "data/maps/VictoryRoad_1F/scripts.pory"

# 58 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_B1F_EventScript_WallyVictory::
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_WALLY_ENTRANCE
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_VICTORY_ROAD, TRUE
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 66 "data/maps/VictoryRoad_1F/scripts.pory"

# 67 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 76 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 78 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 79 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 80 "data/maps/VictoryRoad_1F/scripts.pory"

# 81 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 83 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 89 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 90 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 91 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 93 "data/maps/VictoryRoad_1F/scripts.pory"

# 94 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 96 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 98 "data/maps/VictoryRoad_1F/scripts.pory"

# 99 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 100 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 101 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 102 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 103 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 104 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 106 "data/maps/VictoryRoad_1F/scripts.pory"

# 107 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 108 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 109 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 111 "data/maps/VictoryRoad_1F/scripts.pory"

# 112 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_AlbertHope::
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
lockall
# 114 "data/maps/VictoryRoad_1F/scripts.pory"
playse SE_PIN
# 115 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement LOCALID_ALBERT, Common_Movement_ExclamationMark
# 116 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 117 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_AlbertIntro MSGBOX_AUTOCLOSE
# 121 "data/maps/VictoryRoad_1F/scripts.pory"
playse SE_PIN
# 122 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement  LOCALID_HOPE, Common_Movement_ExclamationMark
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 127 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_HopeIntro MSGBOX_AUTOCLOSE
# 128 "data/maps/VictoryRoad_1F/scripts.pory"
goto VictoryRoad_1F_EventScript_AlbertHopeDoMultiBattle
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
releaseall
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
end
# 131 "data/maps/VictoryRoad_1F/scripts.pory"

# 132 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_AlbertHopeDoMultiBattle::
# 133 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_VICTORY_ROAD, TRUE
# 134 "data/maps/VictoryRoad_1F/scripts.pory"
multi_2p_vs_2 TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertDefeat, TRAINER_HOPE, VictoryRoad_1F_Text_HopeDefeat, PARTNER_EMMIE
# 135 "data/maps/VictoryRoad_1F/scripts.pory"
switch VAR_RESULT
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
case 1, VictoryRoad_1F_EventScript_AlbertHopeVictory
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 138 "data/maps/VictoryRoad_1F/scripts.pory"
special SetCB2WhiteOut
# 139 "data/maps/VictoryRoad_1F/scripts.pory"
waitstate
# 140 "data/maps/VictoryRoad_1F/scripts.pory"

# 141 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_AlbertHopeVictory::
# 142 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 143 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 146 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 149 "data/maps/VictoryRoad_1F/scripts.pory"
end
# 150 "data/maps/VictoryRoad_1F/scripts.pory"

# 151 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_KatelynnQuincy::
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
lockall
# 153 "data/maps/VictoryRoad_1F/scripts.pory"
playse SE_PIN
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement LOCALID_KATELYNN, Common_Movement_ExclamationMark
# 155 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 156 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 159 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_KatelynnIntro MSGBOX_AUTOCLOSE
# 160 "data/maps/VictoryRoad_1F/scripts.pory"
playse SE_PIN
# 161 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement  LOCALID_QUINCY, Common_Movement_ExclamationMark
# 162 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 163 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_ENCOUNTER_COOL, TRUE
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 165 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 166 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_QuincyIntro MSGBOX_AUTOCLOSE
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
goto VictoryRoad_1F_EventScript_KatelynnQuincyDoMultiBattle
# 168 "data/maps/VictoryRoad_1F/scripts.pory"
releaseall
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
end
# 170 "data/maps/VictoryRoad_1F/scripts.pory"

# 171 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_KatelynnQuincyDoMultiBattle::
# 172 "data/maps/VictoryRoad_1F/scripts.pory"
playbgm MUS_VICTORY_ROAD, TRUE
# 173 "data/maps/VictoryRoad_1F/scripts.pory"
multi_2p_vs_2 TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnDefeat, TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyDefeat, PARTNER_EMMIE
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
switch VAR_RESULT
# 175 "data/maps/VictoryRoad_1F/scripts.pory"
case 1, VictoryRoad_1F_EventScript_KatelynnQuincyVictory
# 176 "data/maps/VictoryRoad_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 177 "data/maps/VictoryRoad_1F/scripts.pory"
special SetCB2WhiteOut
# 178 "data/maps/VictoryRoad_1F/scripts.pory"
waitstate
# 179 "data/maps/VictoryRoad_1F/scripts.pory"

# 180 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_KatelynnQuincyVictory::
# 181 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 182 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 183 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/VictoryRoad_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 185 "data/maps/VictoryRoad_1F/scripts.pory"
waitmovement 0
# 186 "data/maps/VictoryRoad_1F/scripts.pory"
msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/VictoryRoad_1F/scripts.pory"
addvar VAR_VICTORY_ROAD_1F_STATE, 1
# 188 "data/maps/VictoryRoad_1F/scripts.pory"
end
# 189 "data/maps/VictoryRoad_1F/scripts.pory"

# 190 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 191 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 192 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 193 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 194 "data/maps/VictoryRoad_1F/scripts.pory"

# 195 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 196 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 197 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 199 "data/maps/VictoryRoad_1F/scripts.pory"

# 200 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 201 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 202 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 204 "data/maps/VictoryRoad_1F/scripts.pory"

# 205 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 206 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 207 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 209 "data/maps/VictoryRoad_1F/scripts.pory"

# 210 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 211 "data/maps/VictoryRoad_1F/scripts.pory"
	faceplayer
# 212 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 214 "data/maps/VictoryRoad_1F/scripts.pory"

# 215 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 216 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 217 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I bet you're surprised to see me here!\p"
# 218 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I made it all the way here, and it's\n"
# 219 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "all thanks to you!\p"
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, losing to you that time\n"
# 221 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "made me stronger!\p"
# 222 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "But I'm not going to lose anymore!\p"
# 223 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to win! For the POKéMON who\n"
# 224 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "gave me courage and strength!\p"
# 225 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 226 "data/maps/VictoryRoad_1F/scripts.pory"

# 227 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat:
# 228 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 229 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 230 "data/maps/VictoryRoad_1F/scripts.pory"

# 231 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 232 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you today,\n"
# 233 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, but one of these days, I'll\l"
# 234 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "catch up to you!$"
# 235 "data/maps/VictoryRoad_1F/scripts.pory"

# 236 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro:
# 237 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
# 238 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've gotten stronger since that last\n"
# 239 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "time! I wanted to show you, {PLAYER}!\p"
# 240 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Here I come!$"
# 241 "data/maps/VictoryRoad_1F/scripts.pory"

# 242 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat:
# 243 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 244 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you are strong, after all!$"
# 245 "data/maps/VictoryRoad_1F/scripts.pory"

# 246 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle:
# 247 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you this time,\n"
# 248 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "too… But one of these days, {PLAYER},\l"
# 249 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'm going to catch up to you…\p"
# 250 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "And challenge the POKéMON LEAGUE!$"
# 251 "data/maps/VictoryRoad_1F/scripts.pory"

# 252 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro:
# 253 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've made it this far a couple times,\n"
# 254 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "but the last stretch is so long…$"
# 255 "data/maps/VictoryRoad_1F/scripts.pory"

# 256 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat:
# 257 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "My dream ends here again…$"
# 258 "data/maps/VictoryRoad_1F/scripts.pory"

# 259 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle:
# 260 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You've made it this far. Keep the\n"
# 261 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "momentum going and become the\l"
# 262 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "CHAMPION! If anyone can, it's you!$"
# 263 "data/maps/VictoryRoad_1F/scripts.pory"

# 264 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 265 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
# 266 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That possibility doesn't exist!$"
# 267 "data/maps/VictoryRoad_1F/scripts.pory"

# 268 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 269 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
# 270 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost?$"
# 271 "data/maps/VictoryRoad_1F/scripts.pory"

# 272 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 273 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
# 274 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That means I lack the qualifications\n"
# 275 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the CHAMPION…$"
# 276 "data/maps/VictoryRoad_1F/scripts.pory"

# 277 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 278 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
# 279 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "lives up to its name of VICTORY.$"
# 280 "data/maps/VictoryRoad_1F/scripts.pory"

# 281 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 282 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"
# 283 "data/maps/VictoryRoad_1F/scripts.pory"

# 284 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 285 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
# 286 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "becoming the CHAMPION.$"
# 287 "data/maps/VictoryRoad_1F/scripts.pory"

# 288 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 289 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the VICTORY ROAD?\n"
# 290 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll tell you if you win!$"
# 291 "data/maps/VictoryRoad_1F/scripts.pory"

# 292 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 293 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 294 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Well done!$"
# 295 "data/maps/VictoryRoad_1F/scripts.pory"

# 296 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 297 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
# 298 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the final test for any TRAINER aiming\l"
# 299 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the POKéMON CHAMPION.\p"
# 300 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That's why it's called the VICTORY\n"
# 301 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ROAD.$"
# 302 "data/maps/VictoryRoad_1F/scripts.pory"

# 303 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 304 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
# 305 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "that's come this far. Come on!$"
# 306 "data/maps/VictoryRoad_1F/scripts.pory"

# 307 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 308 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"
# 309 "data/maps/VictoryRoad_1F/scripts.pory"

# 310 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 311 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
# 312 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "See if I care.$"

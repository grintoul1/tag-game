# 1 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_Youngster::
# 6 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_CharlieDuncan::
# 10 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
lockall
# 11 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
playse SE_PIN
# 12 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
applymovement LOCALID_CHARLIE, Common_Movement_ExclamationMark
# 13 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
waitmovement 0
# 14 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 15 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 16 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
waitmovement 0
# 17 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
msgbox AbandonedShip_Corridors_1F_Text_CharlieIntro MSGBOX_AUTOCLOSE
# 18 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
playse SE_PIN
# 19 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
applymovement  LOCALID_DUNCAN, Common_Movement_ExclamationMark
# 20 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
waitmovement 0
# 21 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 22 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 23 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
waitmovement 0
# 24 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
msgbox AbandonedShip_Corridors_B1F_Text_DuncanIntro MSGBOX_AUTOCLOSE
# 25 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
goto AbandonedShip_Corridors_1F_EventScript_CharlieDuncanDoMultiBattle
# 26 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
releaseall
# 27 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
end
# 28 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 29 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_CharlieDuncanDoMultiBattle::
# 30 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
playbgm MUS_ABANDONED_SHIP, TRUE
# 31 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
multi_2p_vs_2 TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieDefeat, TRAINER_DUNCAN, AbandonedShip_Corridors_B1F_Text_DuncanDefeat, PARTNER_EMMIE
# 32 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
switch VAR_RESULT
# 33 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
case 1, AbandonedShip_Corridors_1F_EventScript_CharlieDuncanVictory
# 34 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 35 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
special SetCB2WhiteOut
# 36 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
waitstate
# 37 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 38 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_CharlieDuncanVictory::
# 39 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 40 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
waitmovement 0
# 41 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 43 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
waitmovement 0
# 44 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
msgbox AbandonedShip_Corridors_B1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
addvar VAR_ABANDONED_SHIP_STATE, 1
# 46 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
end
# 47 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 48 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_Charlie::
# 49 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	faceplayer
# 50 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	end
# 52 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 53 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharlieIntro:
# 54 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "What's so funny about having my inner\n"
# 55 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "tube aboard the ship?$"
# 56 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 57 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharlieDefeat:
# 58 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Whoa, you overwhelmed me!$"
# 59 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 60 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharliePostBattle:
# 61 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "It's not easy throwing POKé BALLS\n"
# 62 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "while hanging on to an inner tube!$"
# 63 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 64 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_IsntItFunHere:
# 65 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Isn't it fun here?\n"
# 66 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "I get excited just being here!$"

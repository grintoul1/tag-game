# 1 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Gentleman::
# 6 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_TakingALookAround, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_DemetriusThalia::
# 10 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
lockall
# 11 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
playse SE_PIN
# 12 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
applymovement LOCALID_DEMETRIUS, Common_Movement_ExclamationMark
# 13 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
waitmovement 0
# 14 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
playbgm MUS_ENCOUNTER_MALE, TRUE
# 15 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 16 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
waitmovement 0
# 17 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
msgbox AbandonedShip_Rooms_1F_Text_DemetriusIntro MSGBOX_AUTOCLOSE
# 18 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
playse SE_PIN
# 19 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
applymovement  LOCALID_THALIA, Common_Movement_ExclamationMark
# 20 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
waitmovement 0
# 21 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 22 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 23 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
waitmovement 0
# 24 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
msgbox AbandonedShip_Rooms_1F_Text_ThaliaIntro MSGBOX_AUTOCLOSE
# 25 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
goto AbandonedShip_Rooms_1F_EventScript_DemetriusThaliaDoMultiBattle
# 26 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
releaseall
# 27 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
end
# 28 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 29 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_DemetriusThaliaDoMultiBattle::
# 30 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
playbgm MUS_ABANDONED_SHIP, TRUE
# 31 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
multi_2p_vs_2 TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_DemetriusDefeat, TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaDefeat, PARTNER_EMMIE
# 32 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
switch VAR_RESULT
# 33 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
case 1, AbandonedShip_Rooms_1F_EventScript_DemetriusThaliaVictory
# 34 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 35 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
special SetCB2WhiteOut
# 36 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
waitstate
# 37 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 38 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_DemetriusThaliaVictory::
# 39 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 40 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
waitmovement 0
# 41 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
waitmovement 0
# 44 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
addvar VAR_ABANDONED_SHIP_MEGA_STATE, 1
# 46 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
end
# 47 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 48 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Demetrius::
# 49 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	faceplayer
# 50 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 52 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 53 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Thalia::
# 54 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	faceplayer
# 55 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_DEFAULT
# 56 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 57 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 58 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 59 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_RegisterThalia::
# 60 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 61 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaRegister, MSGBOX_DEFAULT
# 63 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	register_matchcall TRAINER_THALIA_1
# 64 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 65 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 66 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 67 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_ThaliaRematch::
# 68 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_rematch TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro, AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat
# 69 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostRematch, MSGBOX_AUTOCLOSE
# 70 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 71 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 72 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_TakingALookAround:
# 73 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Ships of this sort are rare, so I'm\n"
# 74 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "taking a look around.\p"
# 75 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Hmhm…\n"
# 76 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "There appear to be other cabins…$"
# 77 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 78 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaIntro:
# 79 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "What on earth would compel you to\n"
# 80 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "come here? You must be curious!$"
# 81 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 82 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaDefeat:
# 83 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Not just curious, but also strong…$"
# 84 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 85 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostBattle:
# 86 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "The man next door…\p"
# 87 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "He says he's just sightseeing,\n"
# 88 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "but I don't know about that.$"
# 89 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 90 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRegister:
# 91 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "You're such a tough TRAINER!\n"
# 92 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Let me register you as a memento!$"
# 93 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 94 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro:
# 95 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "What on earth would compel you to\n"
# 96 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "come back? You must really be curious!$"
# 97 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 98 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat:
# 99 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Aren't you too strong?$"
# 100 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 101 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostRematch:
# 102 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I'm sure that man's up to something!\n"
# 103 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "He just acts so suspiciously!$"
# 104 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 105 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusIntro:
# 106 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Waaah!\n"
# 107 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I've been found! …Huh?$"
# 108 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 109 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusDefeat:
# 110 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Oh, you're not my mom.$"
# 111 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 112 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusPostBattle:
# 113 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "I'm in trouble with my mom, so I ran.\n"
# 114 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Keep it a secret where I am!$"

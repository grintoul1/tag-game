# 1 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraDan::
# 6 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
lockall
# 7 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
playse SE_PIN
# 8 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
applymovement LOCALID_KIRA, Common_Movement_ExclamationMark
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitmovement 0
# 10 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
playbgm MUS_ENCOUNTER_GIRL, TRUE
# 11 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 12 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitmovement 0
# 13 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
msgbox AbandonedShip_Rooms2_1F_Text_KiraIntro MSGBOX_AUTOCLOSE
# 14 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
goto AbandonedShip_Rooms2_1F_EventScript_KiraDanDoMultiBattle
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
releaseall
# 16 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
end
# 17 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 18 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraDanDoMultiBattle::
# 19 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
playbgm MUS_ABANDONED_SHIP, TRUE
# 20 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
multi_2p_vs_1 TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraDefeat, PARTNER_EMMIE
# 21 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
switch VAR_RESULT
# 22 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
case 1, AbandonedShip_Rooms2_1F_EventScript_KiraDanVictory
# 23 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 24 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
special SetCB2WhiteOut
# 25 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitstate
# 26 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 27 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraDanVictory::
# 28 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 29 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitmovement 0
# 30 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
addvar VAR_ABANDONED_SHIP_STATE, 1
# 32 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
end
# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 34 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Dan::
# 35 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	faceplayer
# 36 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
# 37 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 38 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 39 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 40 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
# 41 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
# 42 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 43 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 44 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 45 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 46 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_DanRematch::
# 47 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
# 48 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
# 49 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 50 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 51 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Kira::
# 52 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	faceplayer
# 53 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
# 54 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 55 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 56 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 57 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
# 58 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 59 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 60 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 61 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 62 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 63 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
# 64 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
# 65 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
# 66 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 67 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 68 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_GarrisonJani::
# 69 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
lockall
# 70 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
playse SE_PIN
# 71 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
applymovement LOCALID_GARRISON, Common_Movement_ExclamationMark
# 72 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitmovement 0
# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
playbgm MUS_ENCOUNTER_HIKER, TRUE
# 74 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 75 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitmovement 0
# 76 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
msgbox AbandonedShip_Rooms2_1F_Text_GarrisonIntro MSGBOX_AUTOCLOSE
# 77 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
playse SE_PIN
# 78 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
applymovement  LOCALID_JANI, Common_Movement_ExclamationMark
# 79 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitmovement 0
# 80 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
playbgm MUS_ENCOUNTER_TWINS, TRUE
# 81 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitmovement 0
# 83 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
msgbox AbandonedShip_Rooms2_1F_Text_JaniIntro MSGBOX_AUTOCLOSE
# 84 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
goto AbandonedShip_Rooms2_1F_EventScript_GarrisonJaniDoMultiBattle
# 85 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
releaseall
# 86 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
end
# 87 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 88 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_GarrisonJaniDoMultiBattle::
# 89 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
playbgm MUS_ABANDONED_SHIP, TRUE
# 90 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
multi_2p_vs_2 TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat, TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniDefeat, PARTNER_EMMIE
# 91 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
switch VAR_RESULT
# 92 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
case 1, AbandonedShip_Rooms2_1F_EventScript_GarrisonJaniVictory
# 93 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 94 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
special SetCB2WhiteOut
# 95 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitstate
# 96 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 97 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_GarrisonJaniVictory::
# 98 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 99 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitmovement 0
# 100 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 102 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
waitmovement 0
# 103 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
addvar VAR_ABANDONED_SHIP_STATE, 1
# 105 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
end
# 106 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 107 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Jani::
# 108 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	faceplayer
# 109 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 111 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 112 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Garrison::
# 113 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	faceplayer
# 114 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 116 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 117 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanIntro:
# 118 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: While searching for treasures,\n"
# 119 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we discovered a TRAINER!$"
# 120 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 121 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanDefeat:
# 122 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We couldn't win even though\n"
# 123 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we worked together…$"
# 124 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 125 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostBattle:
# 126 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We can't find any treasures…\n"
# 127 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I wonder if someone got them already?$"
# 128 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 129 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
# 130 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You don't even have two POKéMON.\n"
# 131 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You can't expect to beat us like that.$"
# 132 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 133 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraIntro:
# 134 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh?\n"
# 135 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We were searching for treasures.\l"
# 136 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "But we discovered a TRAINER instead!$"
# 137 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 138 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraDefeat:
# 139 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Ooh, so strong!$"
# 140 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 141 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
# 142 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Where could the treasures be?\p"
# 143 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I've already decided what I'm buying\n"
# 144 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "when we find the treasures!$"
# 145 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 146 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
# 147 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you don't have two POKéMON?\n"
# 148 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We'll have to battle some other time!$"
# 149 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 150 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRegister:
# 151 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you make me so angry!\n"
# 152 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm going to register you for that!$"
# 153 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 154 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
# 155 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We've been searching for\n"
# 156 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "treasures all this time.\p"
# 157 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Our POKéMON have grown stronger, too.\n"
# 158 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Let us show you, okay?$"
# 159 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 160 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
# 161 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You're strong, as usual!$"
# 162 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 163 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostRematch:
# 164 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We can't find any treasures,\n"
# 165 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "we lose at POKéMON…\p"
# 166 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I want to go home… But if I say that,\n"
# 167 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "she gets all angry with me…$"
# 168 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 169 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
# 170 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You don't even have two POKéMON.\n"
# 171 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "You can't expect to beat us like that.$"
# 172 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 173 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
# 174 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh? We meet again!\p"
# 175 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Just like us, you still haven't given up\n"
# 176 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "searching for treasures, have you?\p"
# 177 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Want to make it so the loser has\n"
# 178 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "to give up searching?$"
# 179 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 180 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
# 181 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, we lost again…$"
# 182 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 183 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
# 184 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: We're not leaving until we raise\n"
# 185 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "our POKéMON some more and we find\l"
# 186 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "the treasures here!$"
# 187 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 188 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
# 189 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, you don't have two POKéMON?\n"
# 190 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "We'll have to battle some other time!$"
# 191 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 192 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniIntro:
# 193 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm not good at swimming,\n"
# 194 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "but I am good at battles!$"
# 195 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 196 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniDefeat:
# 197 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Oops.\n"
# 198 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "That didn't go very well.$"
# 199 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 200 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
# 201 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Walking around barefoot in this ship\n"
# 202 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "is kind of gross.$"
# 203 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 204 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
# 205 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Strength and compassion…\n"
# 206 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Those are a TRAINER's treasures!$"
# 207 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 208 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
# 209 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ah, there is something about you\n"
# 210 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "that sparkles.$"
# 211 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 212 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
# 213 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "In a cabin somewhere on board,\n"
# 214 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I saw something sparkle.$"

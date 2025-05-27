# 1 "data/maps/MtPyre_6F/scripts.pory"

# 2 "data/maps/MtPyre_6F/scripts.pory"
.set LOCALID_PYRE_AQUAGRUNT3, 1
# 3 "data/maps/MtPyre_6F/scripts.pory"
.set LOCALID_PYRE_MAGMAGRUNT3, 3
# 4 "data/maps/MtPyre_6F/scripts.pory"

# 5 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_MapScripts::
# 6 "data/maps/MtPyre_6F/scripts.pory"
	.byte 0
# 7 "data/maps/MtPyre_6F/scripts.pory"

# 8 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Pyre_AquaGrunt3Pyre_MagmaGrunt3::
# 9 "data/maps/MtPyre_6F/scripts.pory"
lockall
# 10 "data/maps/MtPyre_6F/scripts.pory"
setvar VAR_0x8008, LOCALID_PYRE_AQUAGRUNT3
# 11 "data/maps/MtPyre_6F/scripts.pory"
playse SE_PIN
# 12 "data/maps/MtPyre_6F/scripts.pory"
setobjectmovementtype LOCALID_PYRE_AQUAGRUNT3, MOVEMENT_TYPE_FACE_RIGHT
# 13 "data/maps/MtPyre_6F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 14 "data/maps/MtPyre_6F/scripts.pory"
waitmovement 0
# 15 "data/maps/MtPyre_6F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 16 "data/maps/MtPyre_6F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 17 "data/maps/MtPyre_6F/scripts.pory"
waitmovement 0
# 18 "data/maps/MtPyre_6F/scripts.pory"
msgbox MtPyre_6F_Text_Pyre_AquaGrunt3Intro MSGBOX_AUTOCLOSE
# 19 "data/maps/MtPyre_6F/scripts.pory"
setvar VAR_0x8008, LOCALID_PYRE_MAGMAGRUNT3
# 20 "data/maps/MtPyre_6F/scripts.pory"
setobjectmovementtype LOCALID_PYRE_MAGMAGRUNT3, MOVEMENT_TYPE_FACE_LEFT
# 21 "data/maps/MtPyre_6F/scripts.pory"
playse SE_PIN
# 22 "data/maps/MtPyre_6F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 23 "data/maps/MtPyre_6F/scripts.pory"
waitmovement 0
# 24 "data/maps/MtPyre_6F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 25 "data/maps/MtPyre_6F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 26 "data/maps/MtPyre_6F/scripts.pory"
waitmovement 0
# 27 "data/maps/MtPyre_6F/scripts.pory"
msgbox MtPyre_6F_Text_Pyre_MagmaGrunt3Intro, MSGBOX_AUTOCLOSE
# 28 "data/maps/MtPyre_6F/scripts.pory"
goto MtPyre_6F_EventScript_Pyre_AquaGrunt3Pyre_MagmaGrunt3DoMultiBattle
# 29 "data/maps/MtPyre_6F/scripts.pory"
releaseall
# 30 "data/maps/MtPyre_6F/scripts.pory"
end
# 31 "data/maps/MtPyre_6F/scripts.pory"

# 32 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Pyre_AquaGrunt3Pyre_MagmaGrunt3DoMultiBattle::
# 33 "data/maps/MtPyre_6F/scripts.pory"
playbgm MUS_MT_PYRE, TRUE
# 34 "data/maps/MtPyre_6F/scripts.pory"
multi_2p_vs_2 TRAINER_PYRE_AQUAGRUNT3, MtPyre_6F_Text_Pyre_AquaGrunt3Defeat, TRAINER_PYRE_MAGMAGRUNT3, MtPyre_6F_Text_Pyre_MagmaGrunt3Defeat, PARTNER_EMMIE
# 35 "data/maps/MtPyre_6F/scripts.pory"
switch VAR_RESULT
# 36 "data/maps/MtPyre_6F/scripts.pory"
case 1, MtPyre_6F_EventScript_Pyre_AquaGrunt3Pyre_MagmaGrunt3Victory
# 37 "data/maps/MtPyre_6F/scripts.pory"
fadescreen FADE_TO_BLACK
# 38 "data/maps/MtPyre_6F/scripts.pory"
special SetCB2WhiteOut
# 39 "data/maps/MtPyre_6F/scripts.pory"
waitstate
# 40 "data/maps/MtPyre_6F/scripts.pory"

# 41 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Pyre_AquaGrunt3Pyre_MagmaGrunt3Victory::
# 42 "data/maps/MtPyre_6F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/MtPyre_6F/scripts.pory"
waitmovement 0
# 44 "data/maps/MtPyre_6F/scripts.pory"
msgbox MtPyre_6F_Text_Pyre_AquaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/MtPyre_6F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 46 "data/maps/MtPyre_6F/scripts.pory"
waitmovement 0
# 47 "data/maps/MtPyre_6F/scripts.pory"
msgbox MtPyre_6F_Text_Pyre_MagmaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/MtPyre_6F/scripts.pory"
addvar VAR_MT_PYRE_STATE, 1
# 49 "data/maps/MtPyre_6F/scripts.pory"
end
# 50 "data/maps/MtPyre_6F/scripts.pory"

# 51 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Pyre_AquaGrunt3::
# 52 "data/maps/MtPyre_6F/scripts.pory"
	faceplayer
# 53 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_Pyre_AquaGrunt3PostBattle, MSGBOX_DEFAULT
# 54 "data/maps/MtPyre_6F/scripts.pory"
	release
# 55 "data/maps/MtPyre_6F/scripts.pory"
	end
# 56 "data/maps/MtPyre_6F/scripts.pory"

# 57 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RegisterValerie::
# 58 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 59 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 60 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 61 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_3
# 62 "data/maps/MtPyre_6F/scripts.pory"
	release
# 63 "data/maps/MtPyre_6F/scripts.pory"
	end
# 64 "data/maps/MtPyre_6F/scripts.pory"

# 65 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RematchValerie::
# 66 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_3, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 67 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
# 68 "data/maps/MtPyre_6F/scripts.pory"
	end
# 69 "data/maps/MtPyre_6F/scripts.pory"

# 70 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Pyre_MagmaGrunt3::
# 71 "data/maps/MtPyre_6F/scripts.pory"
	faceplayer
# 72 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_Pyre_MagmaGrunt3PostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/MtPyre_6F/scripts.pory"
	end
# 74 "data/maps/MtPyre_6F/scripts.pory"

# 75 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_Pyre_AquaGrunt3Intro:
# 76 "data/maps/MtPyre_6F/scripts.pory"
	.string "Hey! You kids need to stay out of\n"
# 77 "data/maps/MtPyre_6F/scripts.pory"
	.string "this!$"
# 78 "data/maps/MtPyre_6F/scripts.pory"

# 79 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_Pyre_AquaGrunt3Defeat:
# 80 "data/maps/MtPyre_6F/scripts.pory"
	.string "Whoa, whoa… Enough already…$"
# 81 "data/maps/MtPyre_6F/scripts.pory"

# 82 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_Pyre_AquaGrunt3PostBattle:
# 83 "data/maps/MtPyre_6F/scripts.pory"
	.string "What are you even doing here?$"
# 84 "data/maps/MtPyre_6F/scripts.pory"

# 85 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRegister:
# 86 "data/maps/MtPyre_6F/scripts.pory"
	.string "Fufufu… I lost the match, but…\n"
# 87 "data/maps/MtPyre_6F/scripts.pory"
	.string "I have this little ability…\p"
# 88 "data/maps/MtPyre_6F/scripts.pory"
	.string "Without ever laying my hands on\n"
# 89 "data/maps/MtPyre_6F/scripts.pory"
	.string "your POKéNAV… Hiyah!$"
# 90 "data/maps/MtPyre_6F/scripts.pory"

# 91 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchIntro:
# 92 "data/maps/MtPyre_6F/scripts.pory"
	.string "Behind you…\n"
# 93 "data/maps/MtPyre_6F/scripts.pory"
	.string "What is it…$"
# 94 "data/maps/MtPyre_6F/scripts.pory"

# 95 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchDefeat:
# 96 "data/maps/MtPyre_6F/scripts.pory"
	.string "Something faded away…$"
# 97 "data/maps/MtPyre_6F/scripts.pory"

# 98 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostRematch:
# 99 "data/maps/MtPyre_6F/scripts.pory"
	.string "The POKéMON at rest here…\n"
# 100 "data/maps/MtPyre_6F/scripts.pory"
	.string "Sometimes, they play…$"
# 101 "data/maps/MtPyre_6F/scripts.pory"

# 102 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_Pyre_MagmaGrunt3Intro:
# 103 "data/maps/MtPyre_6F/scripts.pory"
	.string "Can't you see we're in the middle\n"
# 104 "data/maps/MtPyre_6F/scripts.pory"
	.string "of something!$"
# 105 "data/maps/MtPyre_6F/scripts.pory"

# 106 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_Pyre_MagmaGrunt3Defeat:
# 107 "data/maps/MtPyre_6F/scripts.pory"
	.string "Well that's one way to end things…$"
# 108 "data/maps/MtPyre_6F/scripts.pory"

# 109 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_Pyre_MagmaGrunt3PostBattle:
# 110 "data/maps/MtPyre_6F/scripts.pory"
	.string "You're not with either team…\n"
# 111 "data/maps/MtPyre_6F/scripts.pory"
	.string "What's your stake in all this?$"

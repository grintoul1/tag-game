# 1 "data/maps/MtPyre_3F/scripts.pory"

# 2 "data/maps/MtPyre_3F/scripts.pory"
.set LOCALID_PYRE_MAGMAGRUNT1, 1
# 3 "data/maps/MtPyre_3F/scripts.pory"
.set LOCALID_PYRE_MAGMAGRUNT2, 3
# 4 "data/maps/MtPyre_3F/scripts.pory"

# 5 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_MapScripts::
# 6 "data/maps/MtPyre_3F/scripts.pory"
	.byte 0
# 7 "data/maps/MtPyre_3F/scripts.pory"

# 8 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Pyre_MagmaGrunt1Pyre_MagmaGrunt2::
# 9 "data/maps/MtPyre_3F/scripts.pory"
lockall
# 10 "data/maps/MtPyre_3F/scripts.pory"
setvar VAR_0x8008, LOCALID_PYRE_MAGMAGRUNT1
# 11 "data/maps/MtPyre_3F/scripts.pory"
playse SE_PIN
# 12 "data/maps/MtPyre_3F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 13 "data/maps/MtPyre_3F/scripts.pory"
waitmovement 0
# 14 "data/maps/MtPyre_3F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 15 "data/maps/MtPyre_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 16 "data/maps/MtPyre_3F/scripts.pory"
waitmovement 0
# 17 "data/maps/MtPyre_3F/scripts.pory"
msgbox MtPyre_3F_Text_Pyre_MagmaGrunt1Intro MSGBOX_AUTOCLOSE
# 18 "data/maps/MtPyre_3F/scripts.pory"
setvar VAR_0x8008, LOCALID_PYRE_MAGMAGRUNT2
# 19 "data/maps/MtPyre_3F/scripts.pory"
playse SE_PIN
# 20 "data/maps/MtPyre_3F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 21 "data/maps/MtPyre_3F/scripts.pory"
waitmovement 0
# 22 "data/maps/MtPyre_3F/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 23 "data/maps/MtPyre_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 24 "data/maps/MtPyre_3F/scripts.pory"
waitmovement 0
# 25 "data/maps/MtPyre_3F/scripts.pory"
msgbox MtPyre_3F_Text_Pyre_MagmaGrunt2Intro, MSGBOX_AUTOCLOSE
# 26 "data/maps/MtPyre_3F/scripts.pory"
goto MtPyre_3F_EventScript_Pyre_MagmaGrunt1Pyre_MagmaGrunt2DoMultiBattle
# 27 "data/maps/MtPyre_3F/scripts.pory"
releaseall
# 28 "data/maps/MtPyre_3F/scripts.pory"
end
# 29 "data/maps/MtPyre_3F/scripts.pory"

# 30 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Pyre_MagmaGrunt1Pyre_MagmaGrunt2DoMultiBattle::
# 31 "data/maps/MtPyre_3F/scripts.pory"
playbgm MUS_MT_PYRE, TRUE
# 32 "data/maps/MtPyre_3F/scripts.pory"
multi_2p_vs_2 TRAINER_PYRE_MAGMAGRUNT1, MtPyre_3F_Text_Pyre_MagmaGrunt1Defeat, TRAINER_PYRE_MAGMAGRUNT2, MtPyre_3F_Text_Pyre_MagmaGrunt2Defeat, PARTNER_EMMIE
# 33 "data/maps/MtPyre_3F/scripts.pory"
switch VAR_RESULT
# 34 "data/maps/MtPyre_3F/scripts.pory"
case 1, MtPyre_3F_EventScript_Pyre_MagmaGrunt1Pyre_MagmaGrunt2Victory
# 35 "data/maps/MtPyre_3F/scripts.pory"
fadescreen FADE_TO_BLACK
# 36 "data/maps/MtPyre_3F/scripts.pory"
special SetCB2WhiteOut
# 37 "data/maps/MtPyre_3F/scripts.pory"
waitstate
# 38 "data/maps/MtPyre_3F/scripts.pory"

# 39 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Pyre_MagmaGrunt1Pyre_MagmaGrunt2Victory::
# 40 "data/maps/MtPyre_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 41 "data/maps/MtPyre_3F/scripts.pory"
waitmovement 0
# 42 "data/maps/MtPyre_3F/scripts.pory"
msgbox MtPyre_3F_Text_Pyre_MagmaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/MtPyre_3F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 44 "data/maps/MtPyre_3F/scripts.pory"
waitmovement 0
# 45 "data/maps/MtPyre_3F/scripts.pory"
msgbox MtPyre_3F_Text_Pyre_MagmaGrunt2PostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/MtPyre_3F/scripts.pory"
addvar VAR_MT_PYRE_STATE, 1
# 47 "data/maps/MtPyre_3F/scripts.pory"
end
# 48 "data/maps/MtPyre_3F/scripts.pory"

# 49 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Pyre_MagmaGrunt1::
# 50 "data/maps/MtPyre_3F/scripts.pory"
	faceplayer
# 51 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_Pyre_MagmaGrunt1PostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/MtPyre_3F/scripts.pory"
	end
# 53 "data/maps/MtPyre_3F/scripts.pory"

# 54 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Kayla::
# 55 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
# 56 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/MtPyre_3F/scripts.pory"
	end
# 58 "data/maps/MtPyre_3F/scripts.pory"

# 59 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Pyre_MagmaGrunt2::
# 60 "data/maps/MtPyre_3F/scripts.pory"
	faceplayer
# 61 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_Pyre_MagmaGrunt2PostBattle, MSGBOX_DEFAULT
# 62 "data/maps/MtPyre_3F/scripts.pory"
	release
# 63 "data/maps/MtPyre_3F/scripts.pory"
	end
# 64 "data/maps/MtPyre_3F/scripts.pory"

# 65 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RegisterGabrielle::
# 66 "data/maps/MtPyre_3F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 67 "data/maps/MtPyre_3F/scripts.pory"
	waitmovement 0
# 68 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
# 69 "data/maps/MtPyre_3F/scripts.pory"
	register_matchcall TRAINER_GABRIELLE_2
# 70 "data/maps/MtPyre_3F/scripts.pory"
	release
# 71 "data/maps/MtPyre_3F/scripts.pory"
	end
# 72 "data/maps/MtPyre_3F/scripts.pory"

# 73 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RematchGabrielle::
# 74 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_rematch TRAINER_GABRIELLE_2, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
# 75 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
# 76 "data/maps/MtPyre_3F/scripts.pory"
	end
# 77 "data/maps/MtPyre_3F/scripts.pory"

# 78 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_Pyre_MagmaGrunt1Intro:
# 79 "data/maps/MtPyre_3F/scripts.pory"
	.string "Hehehe! I'm feeling good after we\n"
# 80 "data/maps/MtPyre_3F/scripts.pory"
	.string "battered Team Aqua downstairs!$"
# 81 "data/maps/MtPyre_3F/scripts.pory"

# 82 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_Pyre_MagmaGrunt1Defeat:
# 83 "data/maps/MtPyre_3F/scripts.pory"
	.string "Welp…$"
# 84 "data/maps/MtPyre_3F/scripts.pory"

# 85 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_Pyre_MagmaGrunt1PostBattle:
# 86 "data/maps/MtPyre_3F/scripts.pory"
	.string "Thanks for bursting my bubble!$"
# 87 "data/maps/MtPyre_3F/scripts.pory"

# 88 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaIntro:
# 89 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ahahahaha!\p"
# 90 "data/maps/MtPyre_3F/scripts.pory"
	.string "This is no place for children, least\n"
# 91 "data/maps/MtPyre_3F/scripts.pory"
	.string "of all you!$"
# 92 "data/maps/MtPyre_3F/scripts.pory"

# 93 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaDefeat:
# 94 "data/maps/MtPyre_3F/scripts.pory"
	.string "I lost that cleanly…$"
# 95 "data/maps/MtPyre_3F/scripts.pory"

# 96 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaPostBattle:
# 97 "data/maps/MtPyre_3F/scripts.pory"
	.string "This means my training is still not\n"
# 98 "data/maps/MtPyre_3F/scripts.pory"
	.string "enough…\p"
# 99 "data/maps/MtPyre_3F/scripts.pory"
	.string "I've got to keep working toward the\n"
# 100 "data/maps/MtPyre_3F/scripts.pory"
	.string "summit…\p"
# 101 "data/maps/MtPyre_3F/scripts.pory"
	.string "Go, me!$"
# 102 "data/maps/MtPyre_3F/scripts.pory"

# 103 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_Pyre_MagmaGrunt2Intro:
# 104 "data/maps/MtPyre_3F/scripts.pory"
	.string "Why have you come here?$"
# 105 "data/maps/MtPyre_3F/scripts.pory"

# 106 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_Pyre_MagmaGrunt2Defeat:
# 107 "data/maps/MtPyre_3F/scripts.pory"
	.string "So you just want to cause us problems?$"
# 108 "data/maps/MtPyre_3F/scripts.pory"

# 109 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_Pyre_MagmaGrunt2PostBattle:
# 110 "data/maps/MtPyre_3F/scripts.pory"
	.string "Team Aqua and now you kids?$"
# 111 "data/maps/MtPyre_3F/scripts.pory"

# 112 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRegister:
# 113 "data/maps/MtPyre_3F/scripts.pory"
	.string "I would like to see your POKéMON\n"
# 114 "data/maps/MtPyre_3F/scripts.pory"
	.string "when they grow up some more…\p"
# 115 "data/maps/MtPyre_3F/scripts.pory"
	.string "Please, I need to see your POKéNAV.$"
# 116 "data/maps/MtPyre_3F/scripts.pory"

# 117 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchIntro:
# 118 "data/maps/MtPyre_3F/scripts.pory"
	.string "Oh, it's you…\p"
# 119 "data/maps/MtPyre_3F/scripts.pory"
	.string "Have you come to show me your grown\n"
# 120 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON?$"
# 121 "data/maps/MtPyre_3F/scripts.pory"

# 122 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchDefeat:
# 123 "data/maps/MtPyre_3F/scripts.pory"
	.string "How amazing!\n"
# 124 "data/maps/MtPyre_3F/scripts.pory"
	.string "You are a special person.$"
# 125 "data/maps/MtPyre_3F/scripts.pory"

# 126 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostRematch:
# 127 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON no longer of this world.\n"
# 128 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON that are with you now.\p"
# 129 "data/maps/MtPyre_3F/scripts.pory"
	.string "And the POKéMON that you will meet\n"
# 130 "data/maps/MtPyre_3F/scripts.pory"
	.string "in the future…\p"
# 131 "data/maps/MtPyre_3F/scripts.pory"
	.string "They are all to be equally cherished.\n"
# 132 "data/maps/MtPyre_3F/scripts.pory"
	.string "I see that you've remembered that.$"

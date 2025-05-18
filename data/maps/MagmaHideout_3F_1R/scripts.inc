# 1 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 2 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 3 "data/maps/MagmaHideout_3F_1R/scripts.pory"
.set LOCALID_GRUNT9, 1
# 4 "data/maps/MagmaHideout_3F_1R/scripts.pory"
.set LOCALID_GRUNT16, 2
# 5 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 6 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_MapScripts::
# 7 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.byte 0
# 8 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 9 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9::
# 10 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 12 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 13 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9Grunt16::
# 14 "data/maps/MagmaHideout_3F_1R/scripts.pory"
lockall
# 15 "data/maps/MagmaHideout_3F_1R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT9
# 16 "data/maps/MagmaHideout_3F_1R/scripts.pory"
playse SE_PIN
# 17 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 18 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 19 "data/maps/MagmaHideout_3F_1R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 20 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 21 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 22 "data/maps/MagmaHideout_3F_1R/scripts.pory"
msgbox MagmaHideout_3F_1R_Text_Grunt9Intro MSGBOX_AUTOCLOSE
# 23 "data/maps/MagmaHideout_3F_1R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT16
# 24 "data/maps/MagmaHideout_3F_1R/scripts.pory"
playse SE_PIN
# 25 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 26 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 27 "data/maps/MagmaHideout_3F_1R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 28 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 29 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 30 "data/maps/MagmaHideout_3F_1R/scripts.pory"
msgbox MagmaHideout_3F_1R_Text_Grunt16Intro, MSGBOX_AUTOCLOSE
# 31 "data/maps/MagmaHideout_3F_1R/scripts.pory"
goto MagmaHideout_3F_1R_EventScript_Grunt9Grunt16_ChoosePartyForMultiBattle
# 32 "data/maps/MagmaHideout_3F_1R/scripts.pory"
releaseall
# 33 "data/maps/MagmaHideout_3F_1R/scripts.pory"
end
# 34 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 35 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9Grunt16_ChoosePartyForMultiBattle::
# 36 "data/maps/MagmaHideout_3F_1R/scripts.pory"
special SavePlayerParty
# 37 "data/maps/MagmaHideout_3F_1R/scripts.pory"
fadescreen FADE_TO_BLACK
# 38 "data/maps/MagmaHideout_3F_1R/scripts.pory"
special ChooseHalfPartyForBattle
# 39 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitstate
# 40 "data/maps/MagmaHideout_3F_1R/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_3F_1R_EventScript_Grunt9Grunt16DoMultiBattle
# 41 "data/maps/MagmaHideout_3F_1R/scripts.pory"
goto MagmaHideout_3F_1R_EventScript_Grunt9Grunt16_ChoosePartyForMultiBattle
# 42 "data/maps/MagmaHideout_3F_1R/scripts.pory"
closemessage
# 43 "data/maps/MagmaHideout_3F_1R/scripts.pory"
releaseall
# 44 "data/maps/MagmaHideout_3F_1R/scripts.pory"
end
# 45 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 46 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9Grunt16DoMultiBattle::
# 47 "data/maps/MagmaHideout_3F_1R/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 48 "data/maps/MagmaHideout_3F_1R/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_9, MagmaHideout_3F_1R_Text_Grunt9Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_16, MagmaHideout_3F_1R_Text_Grunt16Defeat, PARTNER_SHELLY
# 49 "data/maps/MagmaHideout_3F_1R/scripts.pory"
special LoadPlayerParty
# 50 "data/maps/MagmaHideout_3F_1R/scripts.pory"
switch VAR_RESULT
# 51 "data/maps/MagmaHideout_3F_1R/scripts.pory"
case 1, MagmaHideout_3F_1R_EventScript_Grunt9Grunt16Victory
# 52 "data/maps/MagmaHideout_3F_1R/scripts.pory"
fadescreen FADE_TO_BLACK
# 53 "data/maps/MagmaHideout_3F_1R/scripts.pory"
special SetCB2WhiteOut
# 54 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitstate
# 55 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 56 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9Grunt16Victory::
# 57 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 58 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 59 "data/maps/MagmaHideout_3F_1R/scripts.pory"
msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 61 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 62 "data/maps/MagmaHideout_3F_1R/scripts.pory"
msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/MagmaHideout_3F_1R/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 64 "data/maps/MagmaHideout_3F_1R/scripts.pory"
end
# 65 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 66 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt16::
# 67 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 69 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 70 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9Intro:
# 71 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "What did I do to deserve this guard\n"
# 72 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "posting?\p"
# 73 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "My left ear is burning up!$"
# 74 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 75 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9Defeat:
# 76 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "I'm getting heat exhaustion…$"
# 77 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 78 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9PostBattle:
# 79 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Do you think it's odd that we're wearing\n"
# 80 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "hoods in this magma-filled volcano?$"
# 81 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 82 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16Intro:
# 83 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "We joined so we can help our leader\n"
# 84 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "achieve his fantastic vision.\p"
# 85 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "I don't care if you're with TEAM AQUA\n"
# 86 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "or if you're just some kid passing by.\p"
# 87 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "No one interferes with us and gets\n"
# 88 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "away with it!$"
# 89 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 90 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16Defeat:
# 91 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Oh, no!\n"
# 92 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "You're not to be trusted at all!$"
# 93 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 94 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16PostBattle:
# 95 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Listen to me.\n"
# 96 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "TEAM MAGMA is right!\p"
# 97 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Don't listen to TEAM AQUA.\n"
# 98 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Don't believe their lies!$"

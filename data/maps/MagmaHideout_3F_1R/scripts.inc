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
	faceplayer
# 11 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 13 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 14 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9Grunt16::
# 15 "data/maps/MagmaHideout_3F_1R/scripts.pory"
lockall
# 16 "data/maps/MagmaHideout_3F_1R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT9
# 17 "data/maps/MagmaHideout_3F_1R/scripts.pory"
playse SE_PIN
# 18 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 19 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 20 "data/maps/MagmaHideout_3F_1R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 21 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 22 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 23 "data/maps/MagmaHideout_3F_1R/scripts.pory"
msgbox MagmaHideout_3F_1R_Text_Grunt9Intro MSGBOX_AUTOCLOSE
# 24 "data/maps/MagmaHideout_3F_1R/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT16
# 25 "data/maps/MagmaHideout_3F_1R/scripts.pory"
playse SE_PIN
# 26 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 27 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 28 "data/maps/MagmaHideout_3F_1R/scripts.pory"
playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 29 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 30 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 31 "data/maps/MagmaHideout_3F_1R/scripts.pory"
msgbox MagmaHideout_3F_1R_Text_Grunt16Intro, MSGBOX_AUTOCLOSE
# 32 "data/maps/MagmaHideout_3F_1R/scripts.pory"
goto MagmaHideout_3F_1R_EventScript_Grunt9Grunt16_ChoosePartyForMultiBattle
# 33 "data/maps/MagmaHideout_3F_1R/scripts.pory"
releaseall
# 34 "data/maps/MagmaHideout_3F_1R/scripts.pory"
end
# 35 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 36 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9Grunt16_ChoosePartyForMultiBattle::
# 37 "data/maps/MagmaHideout_3F_1R/scripts.pory"
special SavePlayerParty
# 38 "data/maps/MagmaHideout_3F_1R/scripts.pory"
fadescreen FADE_TO_BLACK
# 39 "data/maps/MagmaHideout_3F_1R/scripts.pory"
special ChooseHalfPartyForBattle
# 40 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitstate
# 41 "data/maps/MagmaHideout_3F_1R/scripts.pory"
goto_if_ne VAR_RESULT, 0, MagmaHideout_3F_1R_EventScript_Grunt9Grunt16DoMultiBattle
# 42 "data/maps/MagmaHideout_3F_1R/scripts.pory"
goto MagmaHideout_3F_1R_EventScript_Grunt9Grunt16_ChoosePartyForMultiBattle
# 43 "data/maps/MagmaHideout_3F_1R/scripts.pory"
closemessage
# 44 "data/maps/MagmaHideout_3F_1R/scripts.pory"
releaseall
# 45 "data/maps/MagmaHideout_3F_1R/scripts.pory"
end
# 46 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 47 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9Grunt16DoMultiBattle::
# 48 "data/maps/MagmaHideout_3F_1R/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 49 "data/maps/MagmaHideout_3F_1R/scripts.pory"
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_9, MagmaHideout_3F_1R_Text_Grunt9Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_16, MagmaHideout_3F_1R_Text_Grunt16Defeat, PARTNER_SHELLY
# 50 "data/maps/MagmaHideout_3F_1R/scripts.pory"
special LoadPlayerParty
# 51 "data/maps/MagmaHideout_3F_1R/scripts.pory"
switch VAR_RESULT
# 52 "data/maps/MagmaHideout_3F_1R/scripts.pory"
case 1, MagmaHideout_3F_1R_EventScript_Grunt9Grunt16Victory
# 53 "data/maps/MagmaHideout_3F_1R/scripts.pory"
fadescreen FADE_TO_BLACK
# 54 "data/maps/MagmaHideout_3F_1R/scripts.pory"
special SetCB2WhiteOut
# 55 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitstate
# 56 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 57 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9Grunt16Victory::
# 58 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 59 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 60 "data/maps/MagmaHideout_3F_1R/scripts.pory"
msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/MagmaHideout_3F_1R/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 62 "data/maps/MagmaHideout_3F_1R/scripts.pory"
waitmovement 0
# 63 "data/maps/MagmaHideout_3F_1R/scripts.pory"
msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/MagmaHideout_3F_1R/scripts.pory"
addvar VAR_MAGMAHIDEOUT_STATE, 1
# 65 "data/maps/MagmaHideout_3F_1R/scripts.pory"
end
# 66 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 67 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt16::
# 68 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	faceplayer
# 69 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 71 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 72 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9Intro:
# 73 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "What did I do to deserve this guard\n"
# 74 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "posting?\p"
# 75 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "My left ear is burning up!$"
# 76 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 77 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9Defeat:
# 78 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "I'm getting heat exhaustion…$"
# 79 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 80 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9PostBattle:
# 81 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Do you think it's odd that we're wearing\n"
# 82 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "hoods in this magma-filled volcano?$"
# 83 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 84 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16Intro:
# 85 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "We joined so we can help our leader\n"
# 86 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "achieve his fantastic vision.\p"
# 87 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "I don't care if you're with TEAM AQUA\n"
# 88 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "or if you're just some kid passing by.\p"
# 89 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "No one interferes with us and gets\n"
# 90 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "away with it!$"
# 91 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 92 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16Defeat:
# 93 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Oh, no!\n"
# 94 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "You're not to be trusted at all!$"
# 95 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 96 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16PostBattle:
# 97 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Listen to me.\n"
# 98 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "TEAM MAGMA is right!\p"
# 99 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Don't listen to TEAM AQUA.\n"
# 100 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Don't believe their lies!$"

.set LOCALID_GRUNT9, 1
.set LOCALID_GRUNT16, 2

MagmaHideout_3F_1R_MapScripts::
	.byte 0

MagmaHideout_3F_1R_EventScript_Grunt9::
	faceplayer
	msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_EventScript_Grunt9Grunt16::
lockall
setvar VAR_0x8008, LOCALID_GRUNT9
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox MagmaHideout_3F_1R_Text_Grunt9Intro MSGBOX_AUTOCLOSE
setvar VAR_0x8008, LOCALID_GRUNT16
playse SE_PIN
applymovement VAR_0x8008, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, TRUE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox MagmaHideout_3F_1R_Text_Grunt16Intro, MSGBOX_AUTOCLOSE
goto MagmaHideout_3F_1R_EventScript_Grunt9Grunt16_ChoosePartyForMultiBattle
releaseall
end

MagmaHideout_3F_1R_EventScript_Grunt9Grunt16_ChoosePartyForMultiBattle::
special SavePlayerParty
fadescreen FADE_TO_BLACK
special ChooseHalfPartyForBattle
waitstate
goto_if_ne VAR_RESULT, 0, MagmaHideout_3F_1R_EventScript_Grunt9Grunt16DoMultiBattle
goto MagmaHideout_3F_1R_EventScript_Grunt9Grunt16_ChoosePartyForMultiBattle
closemessage
releaseall
end

MagmaHideout_3F_1R_EventScript_Grunt9Grunt16DoMultiBattle::
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_9, MagmaHideout_3F_1R_Text_Grunt9Defeat, TRAINER_GRUNT_MAGMA_HIDEOUT_16, MagmaHideout_3F_1R_Text_Grunt16Defeat, PARTNER_SHELLY
special LoadPlayerParty
switch VAR_RESULT
case 1, MagmaHideout_3F_1R_EventScript_Grunt9Grunt16Victory
fadescreen FADE_TO_BLACK
destroyfollowernpc
setvar VAR_PARTNER_EMMIE_STATE, 42
clearflag FLAG_HIDE_MAGMA_HIDEOUT_SHELLY
setflag FLAG_HIDE_MAGMA_HIDEOUT_EMMIE
createfollowernpc OBJ_EVENT_GFX_GREEN_NORMAL, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie, PARTNER_EMMIE
special SetCB2WhiteOut
waitstate

MagmaHideout_3F_1R_EventScript_Grunt9Grunt16Victory::
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
waitmovement 0
msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
waitmovement 0
msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
addvar VAR_MAGMAHIDEOUT_STATE, 1
end

MagmaHideout_3F_1R_EventScript_Grunt16::
	faceplayer
	msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_Text_Grunt9Intro:
	.string "What did I do to deserve this guard\n"
	.string "posting?\p"
	.string "My left ear is burning up!$"

MagmaHideout_3F_1R_Text_Grunt9Defeat:
	.string "I'm getting heat exhaustion…$"

MagmaHideout_3F_1R_Text_Grunt9PostBattle:
	.string "Do you think it's odd that we're wearing\n"
	.string "hoods in this magma-filled volcano?$"

MagmaHideout_3F_1R_Text_Grunt16Intro:
	.string "We joined so we can help our leader\n"
	.string "achieve his fantastic vision.\p"
	.string "I don't care if you're with TEAM AQUA\n"
	.string "or if you're just some kid passing by.\p"
	.string "No one interferes with us and gets\n"
	.string "away with it!$"

MagmaHideout_3F_1R_Text_Grunt16Defeat:
	.string "Oh, no!\n"
	.string "You're not to be trusted at all!$"

MagmaHideout_3F_1R_Text_Grunt16PostBattle:
	.string "Listen to me.\n"
	.string "TEAM MAGMA is right!\p"
	.string "Don't listen to TEAM AQUA.\n"
	.string "Don't believe their lies!$"

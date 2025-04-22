# 1 "data/maps/AquaHideout_B1F/scripts.pory"

# 2 "data/maps/AquaHideout_B1F/scripts.pory"
.set LOCALID_GRUNT3, 2
# 3 "data/maps/AquaHideout_B1F/scripts.pory"
.set LOCALID_GRUNT5, 4
# 4 "data/maps/AquaHideout_B1F/scripts.pory"
.set LOCALID_GRUNT2, 1
# 5 "data/maps/AquaHideout_B1F/scripts.pory"
.set LOCALID_GRUNT7, 9
# 6 "data/maps/AquaHideout_B1F/scripts.pory"

# 7 "data/maps/AquaHideout_B1F/scripts.pory"

# 8 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_MapScripts::
# 9 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_B1F_OnResume
# 10 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B1F_OnTransition
# 11 "data/maps/AquaHideout_B1F/scripts.pory"
	.byte 0
# 12 "data/maps/AquaHideout_B1F/scripts.pory"

# 13 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnResume:
# 14 "data/maps/AquaHideout_B1F/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AquaHideout_B1F_EventScript_TryRemoveElectrode
# 15 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 16 "data/maps/AquaHideout_B1F/scripts.pory"

# 17 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_TryRemoveElectrode::
# 18 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 19 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 20 "data/maps/AquaHideout_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 21 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 22 "data/maps/AquaHideout_B1F/scripts.pory"

# 23 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnTransition:
# 24 "data/maps/AquaHideout_B1F/scripts.pory"
	call_if_unset FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT, AquaHideout_B1F_EventScript_ShowElectrode1
# 25 "data/maps/AquaHideout_B1F/scripts.pory"
	call_if_unset FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT, AquaHideout_B1F_EventScript_ShowElectrode2
# 26 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 27 "data/maps/AquaHideout_B1F/scripts.pory"

# 28 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_ShowElectrode1::
# 29 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
# 30 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 31 "data/maps/AquaHideout_B1F/scripts.pory"

# 32 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_ShowElectrode2::
# 33 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
# 34 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 35 "data/maps/AquaHideout_B1F/scripts.pory"

# 36 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode1::
# 37 "data/maps/AquaHideout_B1F/scripts.pory"
	lock
# 38 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 39 "data/maps/AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 30
# 40 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 41 "data/maps/AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 42 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 40
# 43 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmoncry
# 44 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 45 "data/maps/AquaHideout_B1F/scripts.pory"
	dowildbattle
# 46 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 47 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 48 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AquaHideout_B1F_EventScript_DefeatedElectrode1
# 49 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AquaHideout_B1F_EventScript_DefeatedElectrode1
# 50 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AquaHideout_B1F_EventScript_DefeatedElectrode1
# 51 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 52 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 53 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 54 "data/maps/AquaHideout_B1F/scripts.pory"

# 55 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_DefeatedElectrode1::
# 56 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 57 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 58 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 59 "data/maps/AquaHideout_B1F/scripts.pory"

# 60 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode2::
# 61 "data/maps/AquaHideout_B1F/scripts.pory"
	lock
# 62 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 63 "data/maps/AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 30
# 64 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 65 "data/maps/AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 66 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 40
# 67 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmoncry
# 68 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/AquaHideout_B1F/scripts.pory"
	dowildbattle
# 70 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 71 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 72 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AquaHideout_B1F_EventScript_DefeatedElectrode2
# 73 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AquaHideout_B1F_EventScript_DefeatedElectrode2
# 74 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AquaHideout_B1F_EventScript_DefeatedElectrode2
# 75 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 76 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 77 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 78 "data/maps/AquaHideout_B1F/scripts.pory"

# 79 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_DefeatedElectrode2::
# 80 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 81 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 82 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 83 "data/maps/AquaHideout_B1F/scripts.pory"

# 84 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt7Grunt2::
# 85 "data/maps/AquaHideout_B1F/scripts.pory"
lockall
# 86 "data/maps/AquaHideout_B1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT7
# 87 "data/maps/AquaHideout_B1F/scripts.pory"
playse SE_PIN
# 88 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 89 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 90 "data/maps/AquaHideout_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 91 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 92 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 93 "data/maps/AquaHideout_B1F/scripts.pory"
msgbox AquaHideout_B1F_Text_Grunt7Intro MSGBOX_AUTOCLOSE
# 94 "data/maps/AquaHideout_B1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT2
# 95 "data/maps/AquaHideout_B1F/scripts.pory"
playse SE_PIN
# 96 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 97 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 98 "data/maps/AquaHideout_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 99 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 100 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 101 "data/maps/AquaHideout_B1F/scripts.pory"
msgbox AquaHideout_B1F_Text_Grunt2Intro MSGBOX_AUTOCLOSE
# 102 "data/maps/AquaHideout_B1F/scripts.pory"
goto AquaHideout_B1F_EventScript_Grunt7Grunt2DoMultiBattle
# 103 "data/maps/AquaHideout_B1F/scripts.pory"
releaseall
# 104 "data/maps/AquaHideout_B1F/scripts.pory"
end
# 105 "data/maps/AquaHideout_B1F/scripts.pory"

# 106 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt7Grunt2DoMultiBattle::
# 107 "data/maps/AquaHideout_B1F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 108 "data/maps/AquaHideout_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_7, AquaHideout_B1F_Text_Grunt7Defeat, TRAINER_GRUNT_AQUA_HIDEOUT_2, AquaHideout_B1F_Text_Grunt2Defeat, PARTNER_TABITHA
# 109 "data/maps/AquaHideout_B1F/scripts.pory"
switch VAR_RESULT
# 110 "data/maps/AquaHideout_B1F/scripts.pory"
case 1, AquaHideout_B1F_EventScript_Grunt7Grunt2Victory
# 111 "data/maps/AquaHideout_B1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 112 "data/maps/AquaHideout_B1F/scripts.pory"
special SetCB2WhiteOut
# 113 "data/maps/AquaHideout_B1F/scripts.pory"
waitstate
# 114 "data/maps/AquaHideout_B1F/scripts.pory"

# 115 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt7Grunt2Victory::
# 116 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 117 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 118 "data/maps/AquaHideout_B1F/scripts.pory"
msgbox AquaHideout_B1F_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 120 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 121 "data/maps/AquaHideout_B1F/scripts.pory"
msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/AquaHideout_B1F/scripts.pory"
addvar VAR_AQUAHIDEOUT_STATE, 1
# 123 "data/maps/AquaHideout_B1F/scripts.pory"
end
# 124 "data/maps/AquaHideout_B1F/scripts.pory"

# 125 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt2::
# 126 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 128 "data/maps/AquaHideout_B1F/scripts.pory"

# 129 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt2Defeated::
# 130 "data/maps/AquaHideout_B1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 131 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmovement 0
# 132 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 133 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 134 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 135 "data/maps/AquaHideout_B1F/scripts.pory"

# 136 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt5Grunt3::
# 137 "data/maps/AquaHideout_B1F/scripts.pory"
lockall
# 138 "data/maps/AquaHideout_B1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT5
# 139 "data/maps/AquaHideout_B1F/scripts.pory"
playse SE_PIN
# 140 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 141 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 142 "data/maps/AquaHideout_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 143 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 144 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 145 "data/maps/AquaHideout_B1F/scripts.pory"
msgbox AquaHideout_B1F_Text_Grunt5Intro MSGBOX_AUTOCLOSE
# 146 "data/maps/AquaHideout_B1F/scripts.pory"
setvar VAR_0x8008, LOCALID_GRUNT3
# 147 "data/maps/AquaHideout_B1F/scripts.pory"
playse SE_PIN
# 148 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 149 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 150 "data/maps/AquaHideout_B1F/scripts.pory"
playbgm MUS_ENCOUNTER_AQUA, TRUE
# 151 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 152 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 153 "data/maps/AquaHideout_B1F/scripts.pory"
msgbox AquaHideout_B1F_Text_Grunt3Intro MSGBOX_AUTOCLOSE
# 154 "data/maps/AquaHideout_B1F/scripts.pory"
goto AquaHideout_B1F_EventScript_Grunt5Grunt3DoMultiBattle
# 155 "data/maps/AquaHideout_B1F/scripts.pory"
releaseall
# 156 "data/maps/AquaHideout_B1F/scripts.pory"
end
# 157 "data/maps/AquaHideout_B1F/scripts.pory"

# 158 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt5Grunt3DoMultiBattle::
# 159 "data/maps/AquaHideout_B1F/scripts.pory"
playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 160 "data/maps/AquaHideout_B1F/scripts.pory"
multi_2p_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_5, AquaHideout_B1F_Text_Grunt5Defeat, TRAINER_GRUNT_AQUA_HIDEOUT_3, AquaHideout_B1F_Text_Grunt3Defeat, PARTNER_TABITHA
# 161 "data/maps/AquaHideout_B1F/scripts.pory"
switch VAR_RESULT
# 162 "data/maps/AquaHideout_B1F/scripts.pory"
case 1, AquaHideout_B1F_EventScript_Grunt5Grunt3Victory
# 163 "data/maps/AquaHideout_B1F/scripts.pory"
fadescreen FADE_TO_BLACK
# 164 "data/maps/AquaHideout_B1F/scripts.pory"
special SetCB2WhiteOut
# 165 "data/maps/AquaHideout_B1F/scripts.pory"
waitstate
# 166 "data/maps/AquaHideout_B1F/scripts.pory"

# 167 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt5Grunt3Victory::
# 168 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 169 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 170 "data/maps/AquaHideout_B1F/scripts.pory"
msgbox AquaHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 171 "data/maps/AquaHideout_B1F/scripts.pory"
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 172 "data/maps/AquaHideout_B1F/scripts.pory"
waitmovement 0
# 173 "data/maps/AquaHideout_B1F/scripts.pory"
msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/AquaHideout_B1F/scripts.pory"
addvar VAR_AQUAHIDEOUT_STATE, 1
# 175 "data/maps/AquaHideout_B1F/scripts.pory"
end
# 176 "data/maps/AquaHideout_B1F/scripts.pory"

# 177 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt3::
# 178 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 180 "data/maps/AquaHideout_B1F/scripts.pory"

# 181 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt3Defeated::
# 182 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_DEFAULT
# 183 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 184 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 185 "data/maps/AquaHideout_B1F/scripts.pory"

# 186 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt5::
# 187 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 189 "data/maps/AquaHideout_B1F/scripts.pory"

# 190 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt7::
# 191 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 193 "data/maps/AquaHideout_B1F/scripts.pory"

# 194 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2Intro:
# 195 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you want to know the secret about\n"
# 196 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "our HIDEOUT, you have me to beat!$"
# 197 "data/maps/AquaHideout_B1F/scripts.pory"

# 198 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2Defeat:
# 199 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I can't win at all…$"
# 200 "data/maps/AquaHideout_B1F/scripts.pory"

# 201 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2PostBattle:
# 202 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Our HIDEOUT's secret?\p"
# 203 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Well, let's just say…\n"
# 204 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "There's a submarine at the far end!\p"
# 205 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "But, by now…\n"
# 206 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Kekekeke…$"
# 207 "data/maps/AquaHideout_B1F/scripts.pory"

# 208 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3Intro:
# 209 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Fuel supply loaded A-OK!\n"
# 210 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "In-cruise snacks loaded A-OK!\p"
# 211 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Nothing left to do but KO a pesky\n"
# 212 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "meddler!$"
# 213 "data/maps/AquaHideout_B1F/scripts.pory"

# 214 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3Defeat:
# 215 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I took a serious licking!$"
# 216 "data/maps/AquaHideout_B1F/scripts.pory"

# 217 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3PostBattle:
# 218 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Humph!\n"
# 219 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "This was supposed to happen!\p"
# 220 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "My mission was to just hold you up!$"
# 221 "data/maps/AquaHideout_B1F/scripts.pory"

# 222 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5Intro:
# 223 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Yawn… Keeping watch over the\n"
# 224 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "HIDEOUT bores me. I'll take you on.$"
# 225 "data/maps/AquaHideout_B1F/scripts.pory"

# 226 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5Defeat:
# 227 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Yawn…\n"
# 228 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Oh, I lost…$"
# 229 "data/maps/AquaHideout_B1F/scripts.pory"

# 230 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5PostBattle:
# 231 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you scurry too much, other TEAM\n"
# 232 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "AQUA members might get you.$"
# 233 "data/maps/AquaHideout_B1F/scripts.pory"

# 234 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7Intro:
# 235 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Hey!\n"
# 236 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "You there!\p"
# 237 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Which do you think is cooler?\n"
# 238 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "TEAM AQUA's uniform or TEAM MAGMA's?$"
# 239 "data/maps/AquaHideout_B1F/scripts.pory"

# 240 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7Defeat:
# 241 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I lost in a cool way…$"
# 242 "data/maps/AquaHideout_B1F/scripts.pory"

# 243 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7PostBattle:
# 244 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you have a cool uniform, you look\n"
# 245 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "good even in a loss, don't you think?$"


AncientTomb_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, AncientTomb_OnResume
	map_script MAP_SCRIPT_ON_LOAD, AncientTomb_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, AncientTomb_OnTransition
	.byte 0

AncientTomb_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientTomb_EventScript_TryRemoveRegisteel
	end

AncientTomb_EventScript_TryRemoveRegisteel::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

AncientTomb_OnTransition:
	setflag FLAG_LANDMARK_ANCIENT_TOMB
	call_if_unset FLAG_DEFEATED_MYTHICAL, AncientTomb_EventScript_ShowRegisteel
	end

AncientTomb_EventScript_ShowRegisteel::
	clearflag FLAG_HIDE_REGISTEEL
	return

AncientTomb_OnLoad:
	call_if_unset FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_HideRegiEntrance
	end

AncientTomb_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

AncientTomb_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_BigHoleInWall
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
	releaseall
	end

AncientTomb_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

AncientTomb_EventScript_CaveEntranceSide::
	lockall
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
	releaseall
	end

AncientTomb_EventScript_Registeel::
	lock
	faceplayer
	random 7
	goto_if_eq VAR_RESULT, 0, AncientTomb_EventScript_MewEncounter
	goto_if_eq VAR_RESULT, 1, AncientTomb_EventScript_CelebiEncounter
	goto_if_eq VAR_RESULT, 2, AncientTomb_EventScript_JirachiEncounter
	goto_if_eq VAR_RESULT, 3, AncientTomb_EventScript_ShayminEncounter
	goto_if_eq VAR_RESULT, 4, AncientTomb_EventScript_VictiniEncounter
	goto_if_eq VAR_RESULT, 5, AncientTomb_EventScript_PecharuntEncounter
	goto_if_eq VAR_RESULT, 6, AncientTomb_EventScript_ManaphyEncounter
	end

AncientTomb_EventScript_ManaphyEncounter::
	waitse
	playmoncry SPECIES_MANAPHY, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MANAPHY, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_MANAPHY
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedDog
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromDog
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromDog
	setflag FLAG_DEFEATED_MYTHICAL
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

AncientTomb_EventScript_PecharuntEncounter::
	waitse
	playmoncry SPECIES_PECHARUNT, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_PECHARUNT, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_PECHARUNT
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedDog
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromDog
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromDog
	setflag FLAG_DEFEATED_MYTHICAL
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

AncientTomb_EventScript_VictiniEncounter::
	waitse
	playmoncry SPECIES_VICTINI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_VICTINI, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_VICTINI
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedDog
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromDog
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromDog
	setflag FLAG_DEFEATED_MYTHICAL
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

AncientTomb_EventScript_ShayminEncounter::
	waitse
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SHAYMIN, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_SHAYMIN
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedDog
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromDog
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromDog
	setflag FLAG_DEFEATED_MYTHICAL
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

AncientTomb_EventScript_MewEncounter::
	waitse
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MEW, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_MEW
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedDog
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromDog
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromDog
	setflag FLAG_DEFEATED_MYTHICAL
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

AncientTomb_EventScript_CelebiEncounter::
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_CELEBI, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_CELEBI
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedDog
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromDog
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromDog
	setflag FLAG_DEFEATED_MYTHICAL
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

AncientTomb_EventScript_JirachiEncounter::
	waitse
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_JIRACHI, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_JIRACHI
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AncientTomb_EventScript_DefeatedDog
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AncientTomb_EventScript_RanFromDog
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_RanFromDog
	setflag FLAG_DEFEATED_MYTHICAL
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

AncientTomb_EventScript_DefeatedDog::
	setflag FLAG_DEFEATED_MYTHICAL
	goto Common_EventScript_RemoveStaticPokemon
	end

AncientTomb_EventScript_RanFromDog::
	goto Common_EventScript_LegendaryFlewAway
	end

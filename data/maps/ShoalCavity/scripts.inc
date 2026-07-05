ShoalCavity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCavity_OnTransition
	.byte 0

ShoalCavity_EventScript_Bird::
	lock
	faceplayer
	random 3
	goto_if_eq VAR_RESULT, 0, ShoalCavity_EventScript_ArticunoEncounter
	goto_if_eq VAR_RESULT, 1, ShoalCavity_EventScript_ZapdosEncounter
	goto_if_eq VAR_RESULT, 2, ShoalCavity_EventScript_MoltresEncounter
	end

ShoalCavity_OnTransition:
	call_if_unset FLAG_DEFEATED_KANTO_BIRD, ShoalCavity_EventScript_ShowBird
	end

ShoalCavity_EventScript_ShowBird::
	clearflag FLAG_HIDE_KANTO_BIRD
	return

ShoalCavity_EventScript_ArticunoEncounter::
	waitse
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_ARTICUNO, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_ARTICUNO
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ShoalCavity_EventScript_DefeatedBird
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ShoalCavity_EventScript_RanFromBird
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ShoalCavity_EventScript_RanFromBird
	setflag FLAG_DEFEATED_KANTO_BIRD
	release
	end

ShoalCavity_EventScript_ZapdosEncounter::
	waitse
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_ZAPDOS, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_ZAPDOS
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ShoalCavity_EventScript_DefeatedBird
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ShoalCavity_EventScript_RanFromBird
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ShoalCavity_EventScript_RanFromBird
	setflag FLAG_DEFEATED_KANTO_BIRD
	release
	end

ShoalCavity_EventScript_MoltresEncounter::
	waitse
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MOLTRES, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_MOLTRES
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ShoalCavity_EventScript_DefeatedBird
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ShoalCavity_EventScript_RanFromBird
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ShoalCavity_EventScript_RanFromBird
	setflag FLAG_DEFEATED_KANTO_BIRD
	release
	end

ShoalCavity_EventScript_DefeatedBird::
	setflag FLAG_DEFEATED_KANTO_BIRD
	goto Common_EventScript_RemoveStaticPokemon
	end

ShoalCavity_EventScript_RanFromBird::
	goto Common_EventScript_LegendaryFlewAway
	end

ShoalHollow_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalHollow_OnTransition
	.byte 0

ShoalHollow_EventScript_Bird::
	lock
	faceplayer
	random 3
	goto_if_eq VAR_RESULT, 0, ShoalHollow_EventScript_ArticunoEncounter
	goto_if_eq VAR_RESULT, 1, ShoalHollow_EventScript_ZapdosEncounter
	goto_if_eq VAR_RESULT, 2, ShoalHollow_EventScript_MoltresEncounter
	end

ShoalHollow_OnTransition:
	call_if_unset FLAG_DEFEATED_GALAR_BIRD, ShoalHollow_EventScript_ShowBird
	end

ShoalHollow_EventScript_ShowBird::
	clearflag FLAG_HIDE_GALAR_BIRD
	return

ShoalHollow_EventScript_ArticunoEncounter::
	waitse
	playmoncry SPECIES_ARTICUNO_GALAR, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_ARTICUNO_GALAR, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_ARTICUNO_GALAR
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ShoalHollow_EventScript_DefeatedBird
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ShoalHollow_EventScript_RanFromBird
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ShoalHollow_EventScript_RanFromBird
	setflag FLAG_DEFEATED_GALAR_BIRD
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

ShoalHollow_EventScript_ZapdosEncounter::
	waitse
	playmoncry SPECIES_ZAPDOS_GALAR, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_ZAPDOS_GALAR, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_ZAPDOS_GALAR
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ShoalHollow_EventScript_DefeatedBird
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ShoalHollow_EventScript_RanFromBird
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ShoalHollow_EventScript_RanFromBird
	setflag FLAG_DEFEATED_GALAR_BIRD
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

ShoalHollow_EventScript_MoltresEncounter::
	waitse
	playmoncry SPECIES_MOLTRES_GALAR, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MOLTRES_GALAR, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_0x8004, SPECIES_MOLTRES_GALAR
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ShoalHollow_EventScript_DefeatedBird
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ShoalHollow_EventScript_RanFromBird
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ShoalHollow_EventScript_RanFromBird
	setflag FLAG_DEFEATED_GALAR_BIRD
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

ShoalHollow_EventScript_DefeatedBird::
	setflag FLAG_DEFEATED_GALAR_BIRD
	goto Common_EventScript_RemoveStaticPokemon
	end

ShoalHollow_EventScript_RanFromBird::
	goto Common_EventScript_LegendaryFlewAway
	end

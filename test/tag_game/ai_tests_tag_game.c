#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

/* Custom AI tests for tag game

Categories:
> TAG TEST: all tag game specific tests
>> MULTI: all 2v2 tests
>> 2VS1: all 2v1 tests
>>> AI: all AI tests
>>> NO AI: all non-AI tests
>>>> OFFENSIVE SETUP: all offensive setup tests
>>>> SWITCHING MOVES: all switching move tests
>>>> TRICK ROOM: all Trick Room tests

*/

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_SONIC_BOOM) == EFFECT_FIXED_HP_DAMAGE);
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will switch into a type immunity when outsped and OHKO'd by one type of move (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_GIGA_IMPACT;    moveB1 = MOVE_HYPER_BEAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;     }
    PARAMETRIZE { moveA1 = MOVE_THUNDER_SHOCK;  moveB1 = MOVE_SHOCK_WAVE;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DONPHAN;      ability = ABILITY_BATTLE_ARMOR; }
    PARAMETRIZE { moveA1 = MOVE_ROCK_SMASH;     moveB1 = MOVE_STORM_THROW;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;     }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_GUNK_SHOT;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EXCADRILL;    ability = ABILITY_SAND_RUSH;    }
    PARAMETRIZE { moveA1 = MOVE_MUD_SLAP;       moveB1 = MOVE_STOMPING_TANTRUM; moveC1 = MOVE_BODY_SLAM;      species = SPECIES_PIDGEOTTO;    ability = ABILITY_KEEN_EYE;     }
    PARAMETRIZE { moveA1 = MOVE_CONFUSION;      moveB1 = MOVE_PSYCHIC;          moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SNEASEL;      ability = ABILITY_PRESSURE;     }
    PARAMETRIZE { moveA1 = MOVE_HEX;            moveB1 = MOVE_SHADOW_BONE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_BEWEAR;       ability = ABILITY_KLUTZ;        }
    PARAMETRIZE { moveA1 = MOVE_DRAGON_PULSE;   moveB1 = MOVE_DRAGON_RUSH;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FLORGES;      ability = ABILITY_FLOWER_VEIL;  }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_ARCEUS) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_ARCEUS) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_SHUCKLE) { Speed(7); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(6); Moves(moveC1); Ability(ability); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); EXPECT_SWITCH(opponentRight, 5); }
        }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will not switch into a type immunity when outsped and OHKO'd by more than one type of move (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_GIGA_IMPACT;    moveB1 = MOVE_DRAGON_PULSE;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;     }
    PARAMETRIZE { moveA1 = MOVE_THUNDER_SHOCK;  moveB1 = MOVE_HYPER_BEAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DONPHAN;      ability = ABILITY_BATTLE_ARMOR; }
    PARAMETRIZE { moveA1 = MOVE_ROCK_SMASH;     moveB1 = MOVE_SHOCK_WAVE;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;     }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_STORM_THROW;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EXCADRILL;    ability = ABILITY_SAND_RUSH;    }
    PARAMETRIZE { moveA1 = MOVE_MUD_SLAP;       moveB1 = MOVE_GUNK_SHOT;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_PIDGEOTTO;    ability = ABILITY_KEEN_EYE;     }
    PARAMETRIZE { moveA1 = MOVE_CONFUSION;      moveB1 = MOVE_STOMPING_TANTRUM; moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SNEASEL;      ability = ABILITY_PRESSURE;     }
    PARAMETRIZE { moveA1 = MOVE_HEX;            moveB1 = MOVE_PSYCHIC;          moveC1 = MOVE_BODY_SLAM;      species = SPECIES_BEWEAR;       ability = ABILITY_KLUTZ;        }
    PARAMETRIZE { moveA1 = MOVE_DRAGON_PULSE;   moveB1 = MOVE_SHADOW_BONE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FLORGES;      ability = ABILITY_FLOWER_VEIL;  }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_ARCEUS) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_ARCEUS) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(6); Moves(moveC1); Ability(ability); }
        MULTI_OPPONENT_B(SPECIES_SHUCKLE) { Speed(7); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); EXPECT_SWITCH(opponentRight, 5); }
            SCENE {
                MESSAGE(AI_TRAINER_2_NAME " withdrew Caterpie!");
                NONE_OF {
                    MESSAGE(AI_TRAINER_2_NAME " sent out Carbink!");
            }
        }
    }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will not switch into a type immunity when the immunity is holding Ring Target (multibattle)")
{
    u32 item = ITEM_NONE, moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE;

    PARAMETRIZE { item = ITEM_NONE;             moveA1 = MOVE_BODY_SLAM;      moveB1 = MOVE_BODY_SLAM;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;       }
    PARAMETRIZE { item = ITEM_NONE;             moveA1 = MOVE_THUNDER_SHOCK;  moveB1 = MOVE_SHOCK_WAVE;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DONPHAN;      ability = ABILITY_BATTLE_ARMOR;   }
    PARAMETRIZE { item = ITEM_NONE;             moveA1 = MOVE_ROCK_SMASH;     moveB1 = MOVE_STORM_THROW;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;       }
    PARAMETRIZE { item = ITEM_NONE;             moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_GUNK_SHOT;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EXCADRILL;    ability = ABILITY_SAND_RUSH;      }
    PARAMETRIZE { item = ITEM_NONE;             moveA1 = MOVE_MUD_SLAP;       moveB1 = MOVE_STOMPING_TANTRUM; moveC1 = MOVE_BODY_SLAM;      species = SPECIES_PIDGEOTTO;    ability = ABILITY_KEEN_EYE;       }
    PARAMETRIZE { item = ITEM_NONE;             moveA1 = MOVE_CONFUSION;      moveB1 = MOVE_PSYCHIC;          moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SNEASEL;      ability = ABILITY_PRESSURE;       }
    PARAMETRIZE { item = ITEM_NONE;             moveA1 = MOVE_HEX;            moveB1 = MOVE_SHADOW_BONE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_BEWEAR;       ability = ABILITY_KLUTZ;          }
    PARAMETRIZE { item = ITEM_NONE;             moveA1 = MOVE_DRAGON_PULSE;   moveB1 = MOVE_DRAGON_RUSH;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FLORGES;      ability = ABILITY_FLOWER_VEIL;    }
    PARAMETRIZE { item = ITEM_RING_TARGET;      moveA1 = MOVE_BODY_SLAM;      moveB1 = MOVE_BODY_SLAM;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;       }
    PARAMETRIZE { item = ITEM_RING_TARGET;      moveA1 = MOVE_THUNDER_SHOCK;  moveB1 = MOVE_SHOCK_WAVE;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DONPHAN;      ability = ABILITY_BATTLE_ARMOR;   }
    PARAMETRIZE { item = ITEM_RING_TARGET;      moveA1 = MOVE_ROCK_SMASH;     moveB1 = MOVE_STORM_THROW;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;       }
    PARAMETRIZE { item = ITEM_RING_TARGET;      moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_GUNK_SHOT;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EXCADRILL;    ability = ABILITY_SAND_RUSH;      }
    PARAMETRIZE { item = ITEM_RING_TARGET;      moveA1 = MOVE_MUD_SLAP;       moveB1 = MOVE_STOMPING_TANTRUM; moveC1 = MOVE_BODY_SLAM;      species = SPECIES_PIDGEOTTO;    ability = ABILITY_KEEN_EYE;       }
    PARAMETRIZE { item = ITEM_RING_TARGET;      moveA1 = MOVE_CONFUSION;      moveB1 = MOVE_PSYCHIC;          moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SNEASEL;      ability = ABILITY_PRESSURE;       }
    PARAMETRIZE { item = ITEM_RING_TARGET;      moveA1 = MOVE_HEX;            moveB1 = MOVE_SHADOW_BONE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_BEWEAR;       ability = ABILITY_KLUTZ;          }
    PARAMETRIZE { item = ITEM_RING_TARGET;      moveA1 = MOVE_DRAGON_PULSE;   moveB1 = MOVE_DRAGON_RUSH;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FLORGES;      ability = ABILITY_FLOWER_VEIL;    }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_ARCEUS) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_ARCEUS) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B((moveA1 == MOVE_HEX ? SPECIES_ARCEUS_FIGHTING : SPECIES_ARCEUS)) { Speed(7); Moves(MOVE_FOCUS_BLAST); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(3); Moves(moveC1); Ability(ability); Item(item); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); (item == ITEM_RING_TARGET ? EXPECT_SWITCH(opponentRight, 4) : EXPECT_SWITCH(opponentRight, 5)); }
        }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will switch into a 4x resist when outsped and OHKO'd by one type of move (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_BLAST_BURN;     moveB1 = MOVE_BLAST_BURN;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_VOLCANION;    ability = ABILITY_WATER_ABSORB;     }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;       moveB1 = MOVE_ICE_BEAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_VOLCANION;    ability = ABILITY_WATER_ABSORB;     }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_VOLCANION;    ability = ABILITY_WATER_ABSORB;     }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ROTOM_HEAT;   ability = ABILITY_LEVITATE;         }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_INFERNAPE;    ability = ABILITY_BLAZE;            }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TALONFLAME;   ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TALONFLAME;   ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_VOLCARONA;    ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_BLAST_BURN;     moveB1 = MOVE_BLAST_BURN;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_MAGCARGO;     ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CHANDELURE;   ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_BLAST_BURN;     moveB1 = MOVE_BLAST_BURN;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_RESHIRAM;     ability = ABILITY_TURBOBLAZE;       }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_RESHIRAM;     ability = ABILITY_TURBOBLAZE;       }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_HEATRAN;      ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;       moveB1 = MOVE_ICE_BEAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_HEATRAN;      ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_HEATRAN;      ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_HEATRAN;      ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_LIGHT_OF_RUIN;  moveB1 = MOVE_MOONBLAST;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_HEATRAN;      ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LANTURN;      ability = ABILITY_VOLT_ABSORB;      }
    PARAMETRIZE { moveA1 = MOVE_WAVE_CRASH;     moveB1 = MOVE_HYDRO_PUMP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LOMBRE;       ability = ABILITY_RAIN_DISH;        }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;       moveB1 = MOVE_ICE_BEAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_WALREIN;      ability = ABILITY_OBLIVIOUS;        }
    PARAMETRIZE { moveA1 = MOVE_BLAST_BURN;     moveB1 = MOVE_BLAST_BURN;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_KABUTOPS;     ability = ABILITY_WEAK_ARMOR;       }
    PARAMETRIZE { moveA1 = MOVE_WAVE_CRASH;     moveB1 = MOVE_HYDRO_PUMP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TATSUGIRI;    ability = ABILITY_COMMANDER;        }
    PARAMETRIZE { moveA1 = MOVE_BLAST_BURN;     moveB1 = MOVE_BLAST_BURN;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TATSUGIRI;    ability = ABILITY_COMMANDER;        }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EMPOLEON;     ability = ABILITY_TORRENT;          }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;       moveB1 = MOVE_ICE_BEAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EMPOLEON;     ability = ABILITY_TORRENT;          }
    PARAMETRIZE { moveA1 = MOVE_WILD_CHARGE;    moveB1 = MOVE_THUNDERBOLT;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ROTOM_MOW;    ability = ABILITY_LEVITATE;         }
    PARAMETRIZE { moveA1 = MOVE_WILD_CHARGE;    moveB1 = MOVE_THUNDERBOLT;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ZEKROM;       ability = ABILITY_TERAVOLT;         }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_MAGNETON;     ability = ABILITY_ANALYTIC;         }
    PARAMETRIZE { moveA1 = MOVE_BRAVE_BIRD;     moveB1 = MOVE_HURRICANE;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_MAGNETON;     ability = ABILITY_ANALYTIC;         }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_VENUSAUR;     ability = ABILITY_OVERGROW;         }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_JUMPLUFF;     ability = ABILITY_CHLOROPHYLL;      }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FERROTHORN;   ability = ABILITY_IRON_BARBS;       }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LEAVANNY;     ability = ABILITY_LEAF_GUARD;       }
    PARAMETRIZE { moveA1 = MOVE_EARTHQUAKE;     moveB1 = MOVE_EARTH_POWER;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LEAVANNY;     ability = ABILITY_LEAF_GUARD;       }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TOXICROAK;    ability = ABILITY_POISON_TOUCH;     }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FLAMIGO;      ability = ABILITY_TANGLED_FEET;     }
    PARAMETRIZE { moveA1 = MOVE_DARKEST_LARIAT; moveB1 = MOVE_DARK_PULSE;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SCRAFTY;      ability = ABILITY_SHED_SKIN;        }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LUCARIO;      ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_ROCK_WRECKER;   moveB1 = MOVE_POWER_GEM;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LUCARIO;      ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_SLUDGE_BOMB;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_NIDOQUEEN;    ability = ABILITY_SHEER_FORCE;      }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CROBAT;       ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CROBAT;       ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CROBAT;       ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SCOLIPEDE;    ability = ABILITY_SPEED_BOOST;      }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SCOLIPEDE;    ability = ABILITY_SPEED_BOOST;      }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_SLUDGE_BOMB;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;         }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;         }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DRAGALGE;     ability = ABILITY_ADAPTABILITY;     }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_SLUDGE_BOMB;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GOLEM;        ability = ABILITY_ROCK_HEAD;        }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_SLUDGE_BOMB;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_PALOSSAND;    ability = ABILITY_SAND_VEIL;        }
    PARAMETRIZE { moveA1 = MOVE_ROCK_WRECKER;   moveB1 = MOVE_POWER_GEM;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EXCADRILL;    ability = ABILITY_SAND_FORCE;       }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SIGILYPH;     ability = ABILITY_MAGIC_GUARD;      }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_BUTTERFREE;   ability = ABILITY_COMPOUND_EYES;    }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_BUTTERFREE;   ability = ABILITY_COMPOUND_EYES;    }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DRIFBLIM;     ability = ABILITY_AFTERMATH;        }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DRAGONITE;    ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CELESTEELA;   ability = ABILITY_BEAST_BOOST;      }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CELESTEELA;   ability = ABILITY_BEAST_BOOST;      }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TOGETIC;      ability = ABILITY_SERENE_GRACE;     }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TOGETIC;      ability = ABILITY_SERENE_GRACE;     }
    PARAMETRIZE { moveA1 = MOVE_PSYCHO_CUT;     moveB1 = MOVE_PSYCHIC;          moveC1 = MOVE_BODY_SLAM;      species = SPECIES_METAGROSS;    ability = ABILITY_CLEAR_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GARDEVOIR;    ability = ABILITY_SYNCHRONIZE;      }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ESCAVALIER;   ability = ABILITY_SHELL_ARMOR;      }
    PARAMETRIZE { moveA1 = MOVE_BLAST_BURN;     moveB1 = MOVE_BLAST_BURN;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TYRANTRUM;    ability = ABILITY_STRONG_JAW;       }
    PARAMETRIZE { moveA1 = MOVE_GIGA_IMPACT;    moveB1 = MOVE_HYPER_BEAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_AGGRON;       ability = ABILITY_ROCK_HEAD;        }
    PARAMETRIZE { moveA1 = MOVE_BRAVE_BIRD;     moveB1 = MOVE_HURRICANE;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_AGGRON;       ability = ABILITY_ROCK_HEAD;        }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DOUBLADE;     ability = ABILITY_NO_GUARD;         }
    PARAMETRIZE { moveA1 = MOVE_FRENZY_PLANT;   moveB1 = MOVE_FRENZY_PLANT;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DIALGA;       ability = ABILITY_PRESSURE;         }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_MAGEARNA;     ability = ABILITY_SOUL_HEART;       }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_ARCEUS) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_ARCEUS) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_CARBINK) { Speed(7); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(6); Moves(moveC1); Ability(ability); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); EXPECT_SWITCH(opponentRight, 5); }
        }   SCENE {
                MESSAGE(AI_TRAINER_2_NAME " withdrew Caterpie!");
                NONE_OF {
                    MESSAGE(AI_TRAINER_2_NAME " sent out Carbink!");
                }
        }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will switch into a Soundproof immunity when outsped and OHKO'd by only one move (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_BUG_BUZZ;       moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_ECHOED_VOICE;    moveB1 = MOVE_ECHOED_VOICE;      moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_BUG_BUZZ;       moveB1 = MOVE_ECHOED_VOICE;      moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_BUG_BUZZ;       moveB1 = MOVE_BODY_SLAM;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_ARCEUS) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_ARCEUS) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(2); Moves(moveC1); Ability(ability); }
        MULTI_OPPONENT_B(SPECIES_CARBINK) { Speed(7); Moves(MOVE_ROCK_WRECKER); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); (moveA1 == moveB1 ? EXPECT_SWITCH(opponentRight, 4) : EXPECT_SWITCH(opponentRight, 5)); }
    }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: AI always chooses highest damaging move (multibattle)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA);
        MULTI_PLAYER(SPECIES_DIANCIE);
        MULTI_PLAYER(SPECIES_ORTHWORM);
        MULTI_PARTNER(SPECIES_KINGDRA);
        MULTI_PARTNER(SPECIES_DIANCIE);
        MULTI_PARTNER(SPECIES_ORTHWORM);
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_DRAGON_ENERGY); EXPECT_MOVE(opponentRight, MOVE_DRAGON_ENERGY); SWITCH(playerLeft, 1); SWITCH(playerRight, 4); }
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_MUDDY_WATER); EXPECT_MOVE(opponentRight, MOVE_MUDDY_WATER); SWITCH(playerLeft, 2); SWITCH(playerRight, 5); }
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_HEAT_WAVE); EXPECT_MOVE(opponentRight, MOVE_HEAT_WAVE); SWITCH(playerLeft, 0); SWITCH(playerRight, 3); } 
        }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: AI always chooses highest damaging move (multibattle)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA);
        MULTI_PLAYER(SPECIES_DIANCIE);
        MULTI_PLAYER(SPECIES_ORTHWORM);
        MULTI_PARTNER(SPECIES_KINGDRA);
        MULTI_PARTNER(SPECIES_DIANCIE);
        MULTI_PARTNER(SPECIES_ORTHWORM);
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_DRAGON_ENERGY); EXPECT_MOVE(opponentRight, MOVE_DRAGON_ENERGY); SWITCH(playerLeft, 1); SWITCH(playerRight, 4); }
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_MUDDY_WATER); EXPECT_MOVE(opponentRight, MOVE_MUDDY_WATER); SWITCH(playerLeft, 2); SWITCH(playerRight, 5); }
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_HEAT_WAVE); EXPECT_MOVE(opponentRight, MOVE_HEAT_WAVE); SWITCH(playerLeft, 0); SWITCH(playerRight, 3); } 
        }   
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: AI always chooses highest damaging move (2v1)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA);
        MULTI_PLAYER(SPECIES_DIANCIE);
        MULTI_PLAYER(SPECIES_ORTHWORM);
        MULTI_PARTNER(SPECIES_KINGDRA);
        MULTI_PARTNER(SPECIES_DIANCIE);
        MULTI_PARTNER(SPECIES_ORTHWORM);
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_DRAGON_ENERGY); EXPECT_MOVE(opponentRight, MOVE_DRAGON_ENERGY); SWITCH(playerLeft, 1); SWITCH(playerRight, 4); }
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_MUDDY_WATER); EXPECT_MOVE(opponentRight, MOVE_MUDDY_WATER); SWITCH(playerLeft, 2); SWITCH(playerRight, 5); }
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_HEAT_WAVE); EXPECT_MOVE(opponentRight, MOVE_HEAT_WAVE); SWITCH(playerLeft, 0); SWITCH(playerRight, 3); } 
        }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OFFENSIVE SETUP: AI always chooses +2 offensive setup over slow kill if both targets are incapacitated (multibattle)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { HP(1); Status1(STATUS1_SLEEP); Speed(4); }
        MULTI_PARTNER(SPECIES_GASTLY) { HP(1); Status1(STATUS1_FREEZE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_SWORDS_DANCE, MOVE_TACKLE); Speed(2); }
        MULTI_OPPONENT_B(SPECIES_WYNAUT) { Moves(MOVE_NASTY_PLOT, MOVE_SHADOW_BALL); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_SWORDS_DANCE); EXPECT_MOVE(opponentRight, MOVE_NASTY_PLOT); }
        }   SCENE {
        MESSAGE("The opposing Wobbuffet used Swords Dance!");
        MESSAGE("The opposing Wynaut used Nasty Plot!");
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OFFENSIVE SETUP: AI sometimes chooses +2 offensive setup over slow kill if one target is incapacitated (multibattle)")
{
    PASSES_RANDOMLY(CUSTOM_AI_FIFTY_PERCENT, 100, RNG_AI_CUSTOM_AI_FIFTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { HP(1); Status1(STATUS1_SLEEP); Speed(4); }
        MULTI_PARTNER(SPECIES_GASTLY) { HP(1); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_SWORDS_DANCE, MOVE_TACKLE); Speed(2); }
        MULTI_OPPONENT_B(SPECIES_WYNAUT) { Moves(MOVE_NASTY_PLOT, MOVE_SHADOW_BALL); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_SWORDS_DANCE); EXPECT_MOVE(opponentRight, MOVE_NASTY_PLOT); }
        }   SCENE {
        MESSAGE("The opposing Wobbuffet used Swords Dance!");
        MESSAGE("The opposing Wynaut used Nasty Plot!");
    }
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OFFENSIVE SETUP: AI always chooses +2 offensive setup over slow kill if both targets are incapacitated (2v1)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { HP(1); Status1(STATUS1_SLEEP); Speed(4); }
        MULTI_PARTNER(SPECIES_GASTLY) { HP(1); Status1(STATUS1_FREEZE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_SWORDS_DANCE, MOVE_TACKLE); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { Moves(MOVE_NASTY_PLOT, MOVE_SHADOW_BALL); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_SWORDS_DANCE); EXPECT_MOVE(opponentRight, MOVE_NASTY_PLOT); }
        }   SCENE {
        MESSAGE("The opposing Wobbuffet used Swords Dance!");
        MESSAGE("The opposing Wynaut used Nasty Plot!");
    }
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OFFENSIVE SETUP: AI sometimes chooses +2 offensive setup over slow kill if one target is incapacitated (2v1)")
{
    PASSES_RANDOMLY(CUSTOM_AI_FIFTY_PERCENT, 100, RNG_AI_CUSTOM_AI_FIFTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { HP(1); Status1(STATUS1_SLEEP); Speed(4); }
        MULTI_PARTNER(SPECIES_GASTLY) { HP(1); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_SWORDS_DANCE, MOVE_TACKLE); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { Moves(MOVE_NASTY_PLOT, MOVE_SHADOW_BALL); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_SWORDS_DANCE); EXPECT_MOVE(opponentRight, MOVE_NASTY_PLOT); }
        }   SCENE {
        MESSAGE("The opposing Wobbuffet used Swords Dance!");
        MESSAGE("The opposing Wynaut used Nasty Plot!");
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is slow OHKO'd (multibattle)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_SANDSLASH) { HP(30); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(3); }
        MULTI_PARTNER(SPECIES_METAGROSS) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(4); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { HP(20); Moves(MOVE_VOLT_SWITCH, MOVE_THUNDERSHOCK); Speed(6); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(20); Moves(MOVE_SONIC_BOOM); Speed(8); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(7); }
        MULTI_OPPONENT_B(SPECIES_RATTATA) { Moves(MOVE_TACKLE); Speed(5); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_VOLT_SWITCH, target:playerRight); }
        } THEN {
            EXPECT_EQ(opponentLeft->species, SPECIES_WYNAUT);
    }
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is slow OHKO'd (2v1)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_SANDSLASH) { HP(30); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(3); }
        MULTI_PARTNER(SPECIES_METAGROSS) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(4); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { HP(20); Moves(MOVE_VOLT_SWITCH, MOVE_THUNDERSHOCK); Speed(6); }
        MULTI_OPPONENT_A(SPECIES_RATTATA) { Moves(MOVE_TACKLE); Speed(5); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(7); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_VOLT_SWITCH, target:playerRight); }
        } THEN {
            EXPECT_EQ(opponentLeft->species, SPECIES_WYNAUT);
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: SWITCHING MOVES: AI will slow Volt Switch into a mon that is slow OHKO'd (multibattle)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_SANDSLASH) { HP(30); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(3); }
        MULTI_PARTNER(SPECIES_METAGROSS) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(4); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { HP(20); Moves(MOVE_VOLT_SWITCH, MOVE_THUNDERSHOCK); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(20); Moves(MOVE_SONIC_BOOM); Speed(7); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(8); }
        MULTI_OPPONENT_B(SPECIES_RATTATA) { Moves(MOVE_TACKLE); Speed(5); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_VOLT_SWITCH, target:playerRight); }
        } THEN {
            EXPECT_EQ(opponentLeft->species, SPECIES_WOBBUFFET);
    }
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: SWITCHING MOVES: AI will slow Volt Switch into a mon that is slow OHKO'd (2v1)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_SANDSLASH) { HP(30); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(3); }
        MULTI_PARTNER(SPECIES_METAGROSS) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(4); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { HP(20); Moves(MOVE_VOLT_SWITCH, MOVE_THUNDERSHOCK); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_RATTATA) { Moves(MOVE_TACKLE); Speed(5); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(20); Moves(MOVE_SONIC_BOOM); Speed(7); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(8); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_VOLT_SWITCH, target:playerRight); }
        } THEN {
            EXPECT_EQ(opponentLeft->species, SPECIES_WOBBUFFET);
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is outsped and 2HKO'd (multibattle)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_SANDSLASH) { HP(30); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(3); }
        MULTI_PARTNER(SPECIES_METAGROSS) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(4); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { HP(20); Moves(MOVE_VOLT_SWITCH, MOVE_THUNDERSHOCK); Speed(6); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(7); }
        MULTI_OPPONENT_B(SPECIES_RATTATA) { Moves(MOVE_TACKLE); Speed(5); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_VOLT_SWITCH, target:playerRight); }
        } THEN {
            EXPECT_EQ(opponentLeft->species, SPECIES_WYNAUT);
    }
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is outsped and 2HKO'd (2v1)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_SANDSLASH) { HP(30); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(3); }
        MULTI_PARTNER(SPECIES_METAGROSS) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(4); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { HP(20); Moves(MOVE_VOLT_SWITCH, MOVE_THUNDERSHOCK); Speed(6); }
        MULTI_OPPONENT_A(SPECIES_RATTATA) { Moves(MOVE_TACKLE); Speed(5); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(20); Moves(MOVE_SONIC_BOOM); Speed(8); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(7); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_VOLT_SWITCH, target:playerRight); }
        } THEN {
            EXPECT_EQ(opponentLeft->species, SPECIES_WYNAUT);
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: SWITCHING MOVES: AI will slow Volt Switch into a mon that is outsped and 2HKO'd (multibattle)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_SANDSLASH) { HP(30); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(3); }
        MULTI_PARTNER(SPECIES_METAGROSS) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(5); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { HP(20); Moves(MOVE_VOLT_SWITCH, MOVE_THUNDERSHOCK); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(1); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(2); }
        MULTI_OPPONENT_B(SPECIES_RATTATA) { Moves(MOVE_TACKLE); Speed(6); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_VOLT_SWITCH, target:playerRight); }
        } THEN {
            EXPECT_EQ(opponentLeft->species, SPECIES_WOBBUFFET);
    }
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: SWITCHING MOVES: AI will slow Volt Switch into a mon that is outsped and 2HKO'd (2v1)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_SANDSLASH) { HP(30); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(3); }
        MULTI_PARTNER(SPECIES_METAGROSS) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(5); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { HP(20); Moves(MOVE_VOLT_SWITCH, MOVE_THUNDERSHOCK); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_RATTATA) { Moves(MOVE_TACKLE); Speed(6); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(1); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(2); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_VOLT_SWITCH, target:playerRight); }
        } THEN {
            EXPECT_EQ(opponentLeft->species, SPECIES_WOBBUFFET);
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: TRICK ROOM: AI uses After You and Trick Room together (multibattle)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Speed(4); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Speed(5); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { Moves(MOVE_DOUBLE_HIT, MOVE_LOW_SWEEP, MOVE_HELPING_HAND, MOVE_AFTER_YOU); Speed(6); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(MOVE_PSYBEAM, MOVE_ACID, MOVE_YAWN, MOVE_TRICK_ROOM); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_AFTER_YOU, target:opponentRight); EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
        } SCENE {
        MESSAGE("The opposing Wynaut used After You!");
        MESSAGE("The opposing Wobbuffet took the kind offer!");
        MESSAGE("The opposing Wobbuffet used Trick Room!");
        MESSAGE("The opposing Wobbuffet twisted the dimensions!");
    }
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: TRICK ROOM: AI uses After You and Trick Room together (2v1)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Speed(4); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Speed(5); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { Moves(MOVE_DOUBLE_HIT, MOVE_LOW_SWEEP, MOVE_HELPING_HAND, MOVE_AFTER_YOU); Speed(6); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_PSYBEAM, MOVE_ACID, MOVE_YAWN, MOVE_TRICK_ROOM); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_AFTER_YOU, target:opponentRight); EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
        } SCENE {
        MESSAGE("The opposing Wynaut used After You!");
        MESSAGE("The opposing Wobbuffet took the kind offer!");
        MESSAGE("The opposing Wobbuffet used Trick Room!");
        MESSAGE("The opposing Wobbuffet twisted the dimensions!");
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: TRICK ROOM: Both opponents use Trick Room on the turn it expires 50% of time (multibattle)")
{
    PASSES_RANDOMLY(DOUBLE_TRICK_ROOM_ON_LAST_TURN_CHANCE, 100, RNG_AI_REFRESH_TRICK_ROOM_ON_LAST_TURN);
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Speed(4); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Speed(5); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { Moves(MOVE_SONIC_BOOM, MOVE_TRICK_ROOM); Speed(6); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(MOVE_SONIC_BOOM, MOVE_TRICK_ROOM); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); NOT_EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
            TURN {  NOT_EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); NOT_EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
            TURN {  NOT_EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); NOT_EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
            TURN {  NOT_EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); NOT_EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: TRICK ROOM: Both opponents use Trick Room on the turn it expires 50% of time (2v1)")
{
    PASSES_RANDOMLY(DOUBLE_TRICK_ROOM_ON_LAST_TURN_CHANCE, 100, RNG_AI_REFRESH_TRICK_ROOM_ON_LAST_TURN);
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Speed(4); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Speed(5); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { Moves(MOVE_SONIC_BOOM, MOVE_TRICK_ROOM); Speed(6); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_SONIC_BOOM, MOVE_TRICK_ROOM); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); NOT_EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
            TURN {  NOT_EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); NOT_EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
            TURN {  NOT_EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); NOT_EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
            TURN {  NOT_EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); NOT_EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM); }
        } 
}

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

    PARAMETRIZE { moveA1 = MOVE_DOUBLE_EDGE;    moveB1 = MOVE_HYPER_BEAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;     }
    PARAMETRIZE { moveA1 = MOVE_THUNDER_SHOCK;  moveB1 = MOVE_SHOCK_WAVE;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DONPHAN;      ability = ABILITY_BATTLE_ARMOR; }
    PARAMETRIZE { moveA1 = MOVE_ROCK_SMASH;     moveB1 = MOVE_STORM_THROW;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;     }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_GUNK_SHOT;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EXCADRILL;    ability = ABILITY_SAND_RUSH;    }
    PARAMETRIZE { moveA1 = MOVE_MUD_SLAP;       moveB1 = MOVE_STOMPING_TANTRUM; moveC1 = MOVE_BODY_SLAM;      species = SPECIES_PIDGEOTTO;    ability = ABILITY_KEEN_EYE;     }
    PARAMETRIZE { moveA1 = MOVE_CONFUSION;      moveB1 = MOVE_PSYCHIC;          moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SNEASEL;      ability = ABILITY_PRESSURE;     }
    PARAMETRIZE { moveA1 = MOVE_HEX;            moveB1 = MOVE_SHADOW_BONE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_BEWEAR;       ability = ABILITY_KLUTZ;        }
    PARAMETRIZE { moveA1 = MOVE_DRAGON_PULSE;   moveB1 = MOVE_DRAGON_RUSH;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FLORGES;      ability = ABILITY_FLOWER_VEIL;  }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
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

    PARAMETRIZE { moveA1 = MOVE_DOUBLE_EDGE;    moveB1 = MOVE_DRAGON_PULSE;     moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;     }
    PARAMETRIZE { moveA1 = MOVE_THUNDER_SHOCK;  moveB1 = MOVE_HYPER_BEAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DONPHAN;      ability = ABILITY_BATTLE_ARMOR; }
    PARAMETRIZE { moveA1 = MOVE_ROCK_SMASH;     moveB1 = MOVE_SHOCK_WAVE;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;     }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_STORM_THROW;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EXCADRILL;    ability = ABILITY_SAND_RUSH;    }
    PARAMETRIZE { moveA1 = MOVE_MUD_SLAP;       moveB1 = MOVE_GUNK_SHOT;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_PIDGEOTTO;    ability = ABILITY_KEEN_EYE;     }
    PARAMETRIZE { moveA1 = MOVE_CONFUSION;      moveB1 = MOVE_STOMPING_TANTRUM; moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SNEASEL;      ability = ABILITY_PRESSURE;     }
    PARAMETRIZE { moveA1 = MOVE_HEX;            moveB1 = MOVE_PSYCHIC;          moveC1 = MOVE_BODY_SLAM;      species = SPECIES_BEWEAR;       ability = ABILITY_KLUTZ;        }
    PARAMETRIZE { moveA1 = MOVE_DRAGON_PULSE;   moveB1 = MOVE_SHADOW_BONE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FLORGES;      ability = ABILITY_FLOWER_VEIL;  }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
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
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
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

    PARAMETRIZE { moveA1 = MOVE_FIRE_BLAST;     moveB1 = MOVE_FIRE_BLAST;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_VOLCANION;    ability = ABILITY_WATER_ABSORB;     }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;       moveB1 = MOVE_ICE_BEAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_VOLCANION;    ability = ABILITY_WATER_ABSORB;     }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_VOLCANION;    ability = ABILITY_WATER_ABSORB;     }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ROTOM_HEAT;   ability = ABILITY_LEVITATE;         }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_INFERNAPE;    ability = ABILITY_BLAZE;            }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TALONFLAME;   ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TALONFLAME;   ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_VOLCARONA;    ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_FIRE_BLAST;     moveB1 = MOVE_FIRE_BLAST;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_MAGCARGO;     ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CHANDELURE;   ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_FIRE_BLAST;     moveB1 = MOVE_FIRE_BLAST;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_RESHIRAM;     ability = ABILITY_TURBOBLAZE;       }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_RESHIRAM;     ability = ABILITY_TURBOBLAZE;       }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_HEATRAN;      ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;       moveB1 = MOVE_ICE_BEAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_HEATRAN;      ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_HEATRAN;      ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_HEATRAN;      ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_LIGHT_OF_RUIN;  moveB1 = MOVE_MOONBLAST;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_HEATRAN;      ability = ABILITY_FLAME_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LANTURN;      ability = ABILITY_VOLT_ABSORB;      }
    PARAMETRIZE { moveA1 = MOVE_WAVE_CRASH;     moveB1 = MOVE_HYDRO_PUMP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LOMBRE;       ability = ABILITY_RAIN_DISH;        }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;       moveB1 = MOVE_ICE_BEAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_WALREIN;      ability = ABILITY_OBLIVIOUS;        }
    PARAMETRIZE { moveA1 = MOVE_FIRE_BLAST;     moveB1 = MOVE_FIRE_BLAST;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_KABUTOPS;     ability = ABILITY_WEAK_ARMOR;       }
    PARAMETRIZE { moveA1 = MOVE_WAVE_CRASH;     moveB1 = MOVE_HYDRO_PUMP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TATSUGIRI;    ability = ABILITY_COMMANDER;        }
    PARAMETRIZE { moveA1 = MOVE_FIRE_BLAST;     moveB1 = MOVE_FIRE_BLAST;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TATSUGIRI;    ability = ABILITY_COMMANDER;        }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EMPOLEON;     ability = ABILITY_TORRENT;          }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;       moveB1 = MOVE_ICE_BEAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EMPOLEON;     ability = ABILITY_TORRENT;          }
    PARAMETRIZE { moveA1 = MOVE_WILD_CHARGE;    moveB1 = MOVE_THUNDERBOLT;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ROTOM_MOW;    ability = ABILITY_LEVITATE;         }
    PARAMETRIZE { moveA1 = MOVE_WILD_CHARGE;    moveB1 = MOVE_THUNDERBOLT;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ZEKROM;       ability = ABILITY_TERAVOLT;         }
    PARAMETRIZE { moveA1 = MOVE_STEEL_BEAM;     moveB1 = MOVE_HEAVY_SLAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_MAGNETON;     ability = ABILITY_ANALYTIC;         }
    PARAMETRIZE { moveA1 = MOVE_BRAVE_BIRD;     moveB1 = MOVE_HURRICANE;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_MAGNETON;     ability = ABILITY_ANALYTIC;         }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_VENUSAUR;     ability = ABILITY_OVERGROW;         }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_JUMPLUFF;     ability = ABILITY_CHLOROPHYLL;      }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FERROTHORN;   ability = ABILITY_IRON_BARBS;       }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LEAVANNY;     ability = ABILITY_LEAF_GUARD;       }
    PARAMETRIZE { moveA1 = MOVE_EARTHQUAKE;     moveB1 = MOVE_EARTH_POWER;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LEAVANNY;     ability = ABILITY_LEAF_GUARD;       }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TOXICROAK;    ability = ABILITY_POISON_TOUCH;     }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FLAMIGO;      ability = ABILITY_TANGLED_FEET;     }
    PARAMETRIZE { moveA1 = MOVE_DARKEST_LARIAT; moveB1 = MOVE_DARK_PULSE;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SCRAFTY;      ability = ABILITY_SHED_SKIN;        }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LUCARIO;      ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_ROCK_WRECKER;   moveB1 = MOVE_POWER_GEM;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LUCARIO;      ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_SLUDGE_BOMB;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_NIDOQUEEN;    ability = ABILITY_SHEER_FORCE;      }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CROBAT;       ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CROBAT;       ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CROBAT;       ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SCOLIPEDE;    ability = ABILITY_SPEED_BOOST;      }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SCOLIPEDE;    ability = ABILITY_SPEED_BOOST;      }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_SLUDGE_BOMB;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;         }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GENGAR;       ability = ABILITY_LEVITATE;         }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DRAGALGE;     ability = ABILITY_ADAPTABILITY;     }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_SLUDGE_BOMB;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GOLEM;        ability = ABILITY_ROCK_HEAD;        }
    PARAMETRIZE { moveA1 = MOVE_GUNK_SHOT;      moveB1 = MOVE_SLUDGE_BOMB;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_PALOSSAND;    ability = ABILITY_SAND_VEIL;        }
    PARAMETRIZE { moveA1 = MOVE_ROCK_WRECKER;   moveB1 = MOVE_POWER_GEM;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_EXCADRILL;    ability = ABILITY_SAND_FORCE;       }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SIGILYPH;     ability = ABILITY_MAGIC_GUARD;      }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_BUTTERFREE;   ability = ABILITY_COMPOUND_EYES;    }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_BUTTERFREE;   ability = ABILITY_COMPOUND_EYES;    }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DRIFBLIM;     ability = ABILITY_AFTERMATH;        }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DRAGONITE;    ability = ABILITY_INNER_FOCUS;      }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CELESTEELA;   ability = ABILITY_BEAST_BOOST;      }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_CELESTEELA;   ability = ABILITY_BEAST_BOOST;      }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TOGETIC;      ability = ABILITY_SERENE_GRACE;     }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TOGETIC;      ability = ABILITY_SERENE_GRACE;     }
    PARAMETRIZE { moveA1 = MOVE_PSYCHO_CUT;     moveB1 = MOVE_PSYCHIC;          moveC1 = MOVE_BODY_SLAM;      species = SPECIES_METAGROSS;    ability = ABILITY_CLEAR_BODY;       }
    PARAMETRIZE { moveA1 = MOVE_CLOSE_COMBAT;   moveB1 = MOVE_AURA_SPHERE;      moveC1 = MOVE_BODY_SLAM;      species = SPECIES_GARDEVOIR;    ability = ABILITY_SYNCHRONIZE;      }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ESCAVALIER;   ability = ABILITY_SHELL_ARMOR;      }
    PARAMETRIZE { moveA1 = MOVE_FIRE_BLAST;     moveB1 = MOVE_FIRE_BLAST;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TYRANTRUM;    ability = ABILITY_STRONG_JAW;       }
    PARAMETRIZE { moveA1 = MOVE_DOUBLE_EDGE;    moveB1 = MOVE_HYPER_BEAM;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_AGGRON;       ability = ABILITY_ROCK_HEAD;        }
    PARAMETRIZE { moveA1 = MOVE_BRAVE_BIRD;     moveB1 = MOVE_HURRICANE;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_AGGRON;       ability = ABILITY_ROCK_HEAD;        }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DOUBLADE;     ability = ABILITY_NO_GUARD;         }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_DIALGA;       ability = ABILITY_PRESSURE;         }
    PARAMETRIZE { moveA1 = MOVE_X_SCISSOR;      moveB1 = MOVE_BUG_BUZZ;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_MAGEARNA;     ability = ABILITY_SOUL_HEART;       }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_ARCEUS) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_ARCEUS) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_CARBINK) { Speed(7); }
        MULTI_OPPONENT_B(species) { Speed(6); Moves(moveC1); Ability(ability); }
    } WHEN {
            TURN {  MOVE(playerLeft, moveA1, target:opponentRight); MOVE(playerRight, moveB1, target:opponentRight); EXPECT_SWITCH(opponentRight, 5); }
        }   SCENE {
                MESSAGE(AI_TRAINER_2_NAME " withdrew Caterpie!");
                NONE_OF {
                    MESSAGE(AI_TRAINER_2_NAME " sent out Carbink!");
                }
        }
}

// Non-matching moves put on battler 2 as battler 3 runs the regular switch AI when immunity fails, meaning sees zero damage if move on battler 2
AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will switch into a absorbing abilities when outsped and OHKO'd by appropriate moves by mons without Moldbreaker (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE, ability1 = ABILITY_NONE, ability2 = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_FIRE_BLAST;     moveB1 = MOVE_FIRE_BLAST;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_RAPIDASH;     ability = ABILITY_FLASH_FIRE;     ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_FIRE_BLAST;     moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_RAPIDASH;     ability = ABILITY_FLASH_FIRE;     ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_FIRE_BLAST;     moveB1 = MOVE_FIRE_BLAST;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_RAPIDASH;     ability = ABILITY_FLASH_FIRE;     ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_FIRE_BLAST;     moveB1 = MOVE_FIRE_BLAST;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_RAPIDASH;     ability = ABILITY_FLASH_FIRE;     ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_HYDRO_PUMP;     moveB1 = MOVE_HYDRO_PUMP;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LANTURN;      ability = ABILITY_WATER_ABSORB;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_HYDRO_PUMP;     moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LANTURN;      ability = ABILITY_WATER_ABSORB;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_HYDRO_PUMP;     moveB1 = MOVE_HYDRO_PUMP;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LANTURN;      ability = ABILITY_WATER_ABSORB;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_HYDRO_PUMP;     moveB1 = MOVE_HYDRO_PUMP;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LANTURN;      ability = ABILITY_WATER_ABSORB;   ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_HYDRO_PUMP;     moveB1 = MOVE_HYDRO_PUMP;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TOXICROAK;    ability = ABILITY_DRY_SKIN;       ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_HYDRO_PUMP;     moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TOXICROAK;    ability = ABILITY_DRY_SKIN;       ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_HYDRO_PUMP;     moveB1 = MOVE_HYDRO_PUMP;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TOXICROAK;    ability = ABILITY_DRY_SKIN;       ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_HYDRO_PUMP;     moveB1 = MOVE_HYDRO_PUMP;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_TOXICROAK;    ability = ABILITY_DRY_SKIN;       ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_THUNDERBOLT;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ELECTIVIRE;   ability = ABILITY_MOTOR_DRIVE;    ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ELECTIVIRE;   ability = ABILITY_MOTOR_DRIVE;    ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_THUNDERBOLT;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ELECTIVIRE;   ability = ABILITY_MOTOR_DRIVE;    ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_THUNDERBOLT;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ELECTIVIRE;   ability = ABILITY_MOTOR_DRIVE;    ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_THUNDERBOLT;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LANTURN;      ability = ABILITY_VOLT_ABSORB;    ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LANTURN;      ability = ABILITY_VOLT_ABSORB;    ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_THUNDERBOLT;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LANTURN;      ability = ABILITY_VOLT_ABSORB;    ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_THUNDERBOLT;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LANTURN;      ability = ABILITY_VOLT_ABSORB;    ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_THUNDERBOLT;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SEAKING;      ability = ABILITY_LIGHTNING_ROD;  ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SEAKING;      ability = ABILITY_LIGHTNING_ROD;  ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_THUNDERBOLT;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SEAKING;      ability = ABILITY_LIGHTNING_ROD;  ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_THUNDERBOLT;    moveB1 = MOVE_THUNDERBOLT;       moveC1 = MOVE_BODY_SLAM;      species = SPECIES_SEAKING;      ability = ABILITY_LIGHTNING_ROD;  ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FARIGIRAF;    ability = ABILITY_SAP_SIPPER;     ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FARIGIRAF;    ability = ABILITY_SAP_SIPPER;     ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FARIGIRAF;    ability = ABILITY_SAP_SIPPER;     ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_POWER_WHIP;     moveB1 = MOVE_POWER_WHIP;        moveC1 = MOVE_BODY_SLAM;      species = SPECIES_FARIGIRAF;    ability = ABILITY_SAP_SIPPER;     ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_DRILL_RUN;      moveB1 = MOVE_DRILL_RUN;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ORTHWORM;     ability = ABILITY_EARTH_EATER;    ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_DRILL_RUN;      moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ORTHWORM;     ability = ABILITY_EARTH_EATER;    ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_DRILL_RUN;      moveB1 = MOVE_DRILL_RUN;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ORTHWORM;     ability = ABILITY_EARTH_EATER;    ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_DRILL_RUN;      moveB1 = MOVE_DRILL_RUN;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_ORTHWORM;     ability = ABILITY_EARTH_EATER;    ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_DRILL_RUN;      moveB1 = MOVE_DRILL_RUN;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LUNATONE;     ability = ABILITY_LEVITATE;       ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_DRILL_RUN;      moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LUNATONE;     ability = ABILITY_LEVITATE;       ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_DRILL_RUN;      moveB1 = MOVE_DRILL_RUN;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LUNATONE;     ability = ABILITY_LEVITATE;       ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_DRILL_RUN;      moveB1 = MOVE_DRILL_RUN;         moveC1 = MOVE_BODY_SLAM;      species = SPECIES_LUNATONE;     ability = ABILITY_LEVITATE;       ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_TINKATON) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); Ability(ability1); }
        MULTI_PARTNER(SPECIES_TINKATON) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); Ability(ability2); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Speed(7); Moves(MOVE_ROCK_WRECKER); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(2); Moves(moveC1); Ability(ability); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); (((moveA1 == MOVE_BODY_SLAM) || (moveB1 == MOVE_BODY_SLAM) || (ability1 == ABILITY_MOLD_BREAKER) || (ability2 == ABILITY_MOLD_BREAKER)) ? EXPECT_SWITCH(opponentRight, 4) : EXPECT_SWITCH(opponentRight, 5)); }
    }   
}

// Non-sound moves put on battler 2 as battler 3 runs the regular switch AI when immunity fails, meaning Soundproof sees zero damage if sound move on battler 2
AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will switch into a Soundproof immunity when outsped and OHKO'd by only sound moves (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_BUG_BUZZ;       moveB1 = MOVE_BUG_BUZZ;          moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_ECHOED_VOICE;   moveB1 = MOVE_ECHOED_VOICE;      moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_BUG_BUZZ;       moveB1 = MOVE_ECHOED_VOICE;      moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_HYPER_VOICE;    moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_BOOMBURST;      moveB1 = MOVE_UPROAR;            moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_BOOMBURST;      moveB1 = MOVE_SPARKLING_ARIA;    moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_PSYCHIC_NOISE;  moveB1 = MOVE_UPROAR;            moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_UPROAR;         moveB1 = MOVE_BRICK_BREAK;       moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_BODY_SLAM;      moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_ARCEUS) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_ARCEUS) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Speed(7); Moves(MOVE_ROCK_WRECKER); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(2); Moves(moveC1); Ability(ability); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); ((IsSoundMove(moveA1) && IsSoundMove(moveB1)) ? EXPECT_SWITCH(opponentRight, 5) : EXPECT_SWITCH(opponentRight, 4)); }
    }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will not switch into a Soundproof immunity when outsped and OHKO'd by sound moves under Moldbreaker (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE, ability1 = ABILITY_NONE, ability2 = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_BUG_BUZZ;       moveB1 = MOVE_BUG_BUZZ;          moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_ECHOED_VOICE;   moveB1 = MOVE_ECHOED_VOICE;      moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_BUG_BUZZ;       moveB1 = MOVE_BUG_BUZZ;          moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_ECHOED_VOICE;   moveB1 = MOVE_ECHOED_VOICE;      moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_BUG_BUZZ;       moveB1 = MOVE_BUG_BUZZ;          moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_ECHOED_VOICE;   moveB1 = MOVE_ECHOED_VOICE;      moveC1 = MOVE_CELEBRATE;      species = SPECIES_ELECTRODE;    ability = ABILITY_SOUNDPROOF;   ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_TINKATON) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); Ability(ability1); }
        MULTI_PARTNER(SPECIES_TINKATON) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); Ability(ability2); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Speed(7); Moves(MOVE_ROCK_WRECKER); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(2); Moves(moveC1); Ability(ability); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); (((ability1 == ABILITY_MOLD_BREAKER) || (ability2 == ABILITY_MOLD_BREAKER)) ? EXPECT_SWITCH(opponentRight, 4) : EXPECT_SWITCH(opponentRight, 5)); }
    }   
}

// Non-ballistic moves put on battler 2 as battler 3 runs the regular switch AI when immunity fails, meaning Bulletproof sees zero damage if ballistic move on battler 2
AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will switch into a Bulletproof immunity when outsped and OHKO'd by only ballistic moves (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_MAGNET_BOMB;    moveB1 = MOVE_MUD_BOMB;          moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_MAGNET_BOMB;    moveB1 = MOVE_MAGNET_BOMB;       moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_MUD_BOMB;       moveB1 = MOVE_ENERGY_BALL;       moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_MUD_BOMB;       moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_OCTAZOOKA;      moveB1 = MOVE_EGG_BOMB;          moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_OCTAZOOKA;      moveB1 = MOVE_ROCK_BLAST;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_SHADOW_BALL;    moveB1 = MOVE_ROCK_BLAST;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_SEARING_SHOT;   moveB1 = MOVE_BRICK_BREAK;       moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   }
    PARAMETRIZE { moveA1 = MOVE_BODY_SLAM;      moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_ARCEUS) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_ARCEUS) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Speed(7); Moves(MOVE_ROCK_WRECKER); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(2); Moves(moveC1); Ability(ability); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); ((IsBallisticMove(moveA1) && IsBallisticMove(moveB1)) ? EXPECT_SWITCH(opponentRight, 5) : EXPECT_SWITCH(opponentRight, 4)); }
    }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will not switch into a Bulletproof immunity when outsped and OHKO'd by ballistic moves under Moldbreaker (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE, ability1 = ABILITY_NONE, ability2 = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_MAGNET_BOMB;    moveB1 = MOVE_MUD_BOMB;          moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_MAGNET_BOMB;    moveB1 = MOVE_MAGNET_BOMB;       moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_MAGNET_BOMB;    moveB1 = MOVE_MUD_BOMB;          moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_MAGNET_BOMB;    moveB1 = MOVE_MAGNET_BOMB;       moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_MAGNET_BOMB;    moveB1 = MOVE_MUD_BOMB;          moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_MAGNET_BOMB;    moveB1 = MOVE_MAGNET_BOMB;       moveC1 = MOVE_CELEBRATE;      species = SPECIES_DUBWOOL;    ability = ABILITY_BULLETPROOF;   ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_TINKATON) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); Ability(ability1); }
        MULTI_PARTNER(SPECIES_TINKATON) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); Ability(ability2); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Speed(7); Moves(MOVE_ROCK_WRECKER); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(2); Moves(moveC1); Ability(ability); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); (((ability1 == ABILITY_MOLD_BREAKER) || (ability2 == ABILITY_MOLD_BREAKER)) ? EXPECT_SWITCH(opponentRight, 4) : EXPECT_SWITCH(opponentRight, 5)); }
    }   
}

// Non-wind moves put on battler 2 as battler 3 runs the regular switch AI when immunity fails, meaning Wind-immune mons sees zero damage if wind move on battler 2
AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will switch into a Wind immunity when outsped and OHKO'd by only wind moves (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;       moveB1 = MOVE_HURRICANE;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   }
    PARAMETRIZE { moveA1 = MOVE_HURRICANE;      moveB1 = MOVE_HURRICANE;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   }
    PARAMETRIZE { moveA1 = MOVE_ICY_WIND;       moveB1 = MOVE_AIR_CUTTER;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   }
    PARAMETRIZE { moveA1 = MOVE_HURRICANE;      moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   }
    PARAMETRIZE { moveA1 = MOVE_GUST;           moveB1 = MOVE_PETAL_BLIZZARD;    moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   }
    PARAMETRIZE { moveA1 = MOVE_GUST;           moveB1 = MOVE_HEAT_WAVE;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   }
    PARAMETRIZE { moveA1 = MOVE_SANDSEAR_STORM; moveB1 = MOVE_PETAL_BLIZZARD;    moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   }
    PARAMETRIZE { moveA1 = MOVE_FAIRY_WIND;     moveB1 = MOVE_BRICK_BREAK;       moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   }
    PARAMETRIZE { moveA1 = MOVE_BODY_SLAM;      moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;       moveB1 = MOVE_HURRICANE;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   }
    PARAMETRIZE { moveA1 = MOVE_HURRICANE;      moveB1 = MOVE_HURRICANE;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   }
    PARAMETRIZE { moveA1 = MOVE_ICY_WIND;       moveB1 = MOVE_AIR_CUTTER;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   }
    PARAMETRIZE { moveA1 = MOVE_HURRICANE;      moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   }
    PARAMETRIZE { moveA1 = MOVE_GUST;           moveB1 = MOVE_PETAL_BLIZZARD;    moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   }
    PARAMETRIZE { moveA1 = MOVE_GUST;           moveB1 = MOVE_HEAT_WAVE;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   }
    PARAMETRIZE { moveA1 = MOVE_SANDSEAR_STORM; moveB1 = MOVE_PETAL_BLIZZARD;    moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   }
    PARAMETRIZE { moveA1 = MOVE_FAIRY_WIND;     moveB1 = MOVE_BRICK_BREAK;       moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   }
    PARAMETRIZE { moveA1 = MOVE_BODY_SLAM;      moveB1 = MOVE_BODY_SLAM;         moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_ARCEUS) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_ARCEUS) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Speed(7); Moves(MOVE_ROCK_WRECKER); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(2); Moves(moveC1); Ability(ability); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); ((IsWindMove(moveA1) && IsWindMove(moveB1)) ? EXPECT_SWITCH(opponentRight, 5) : EXPECT_SWITCH(opponentRight, 4)); }
    }   
}

// Moldbreaker needs to be on opposite battler for regular switch check
AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER IMMUNITY SWITCH: AI_FLAG_PARTNER_TRAINER will not switch into a Wind immunity when outsped and OHKO'd by wind moves under Moldbreaker (multibattle)")
{
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE, moveC1 = MOVE_NONE, species, ability = ABILITY_NONE, ability1 = ABILITY_NONE, ability2 = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_PETAL_BLIZZARD;  moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_BLIZZARD;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_PETAL_BLIZZARD;  moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_BLIZZARD;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_OWN_TEMPO;    }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_PETAL_BLIZZARD;  moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_BLIZZARD;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_PETAL_BLIZZARD;  moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_BLIZZARD;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   ability1 = ABILITY_OWN_TEMPO;     ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_PETAL_BLIZZARD;  moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_BLIZZARD;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_KILOWATTREL;    ability = ABILITY_WIND_POWER;   ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_PETAL_BLIZZARD;  moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }
    PARAMETRIZE { moveA1 = MOVE_BLIZZARD;    moveB1 = MOVE_BLIZZARD;        moveC1 = MOVE_CELEBRATE;      species = SPECIES_SHIFTRY;        ability = ABILITY_WIND_RIDER;   ability1 = ABILITY_MOLD_BREAKER;  ability2 = ABILITY_MOLD_BREAKER; }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_PARTNER_TRAINER);
        MULTI_PLAYER(SPECIES_TINKATON) { Speed(5); Moves(moveA1, MOVE_CELEBRATE); Ability(ability1); }
        MULTI_PARTNER(SPECIES_TINKATON) { Speed(4); Moves(moveB1, MOVE_CELEBRATE); Ability(ability2); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(SPECIES_CATERPIE) { Level(1); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Speed(7); Moves(MOVE_ROCK_WRECKER); }
        MULTI_OPPONENT_B(species) { Level(1); Speed(2); Moves(moveC1); Ability(ability); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); (((ability1 == ABILITY_MOLD_BREAKER) || (ability2 == ABILITY_MOLD_BREAKER)) ? EXPECT_SWITCH(opponentRight, 4) : EXPECT_SWITCH(opponentRight, 5)); }
    }   
}

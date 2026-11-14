#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Drizzle summons rain", s16 damage)
{
    enum Ability ability;
    PARAMETRIZE { ability = ABILITY_DRIZZLE; }
    PARAMETRIZE { ability = ABILITY_DAMP; }

    GIVEN {
        PLAYER(SPECIES_POLITOED) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_BUBBLE); }
    } SCENE {
        if (ability == ABILITY_DRIZZLE) {
            ABILITY_POPUP(player, ABILITY_DRIZZLE);
            MESSAGE("It started to rain!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.5), results[0].damage);
    }
}

SINGLE_BATTLE_TEST("Drizzle sets up rain for 5 turns (Gen6+)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_6);
        PLAYER(SPECIES_POLITOED) { Ability(ABILITY_DRIZZLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("The rain stopped.");
    }
}

SINGLE_BATTLE_TEST("Drizzle sets up rain for 8 turns with Damp Rock (Gen6+)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_6);
        ASSUME(gItemsInfo[ITEM_DAMP_ROCK].holdEffect == HOLD_EFFECT_DAMP_ROCK);
        PLAYER(SPECIES_POLITOED) { Ability(ABILITY_DRIZZLE); Item(ITEM_DAMP_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("The rain stopped.");
    }
}

SINGLE_BATTLE_TEST("Drizzle sets up permanent rain (Gen3-5)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_3);
        PLAYER(SPECIES_POLITOED) { Ability(ABILITY_DRIZZLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        MESSAGE("Rain continues to fall.");
        NOT MESSAGE("The rain stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drizzle sets up rain for one turn on turn 1 (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_PELIPPER) { Ability(ABILITY_DRIZZLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        MESSAGE("The rain stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drizzle sets up rain for one turn on switch in (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_PELIPPER) { Ability(ABILITY_DRIZZLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        MESSAGE("The rain stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drizzle sets up rain for 2 turns with Damp Rock on turn 1 (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_DAMP_ROCK].holdEffect == HOLD_EFFECT_DAMP_ROCK);
        PLAYER(SPECIES_PELIPPER) { Ability(ABILITY_DRIZZLE); Item(ITEM_DAMP_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        MESSAGE("Rain continues to fall.");
        MESSAGE("The rain stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drizzle sets up rain for 2 turns with Damp Rock on switch in (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_DAMP_ROCK].holdEffect == HOLD_EFFECT_DAMP_ROCK);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_PELIPPER) { Ability(ABILITY_DRIZZLE); Item(ITEM_DAMP_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        MESSAGE("Rain continues to fall.");
        MESSAGE("The rain stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drizzle overwrites existing weather with rain for one turn on turn 1 (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_PELIPPER) { Ability(ABILITY_DRIZZLE); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_RAIN_CONTINUES);
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("The sunlight is strong.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The hail is crashing down.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The sunlight faded.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The hail stopped.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drizzle overwrites existing weather with rain for one turn on switch in (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        PLAYER(SPECIES_PELIPPER) { Ability(ABILITY_DRIZZLE); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_RAIN_CONTINUES);
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("The sunlight is strong.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The hail is crashing down.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The sunlight faded.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The hail stopped.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drizzle overwrites existing weather with rain for 2 turns with Damp Rock on turn 1 (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_DAMP_ROCK].holdEffect == HOLD_EFFECT_DAMP_ROCK);
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        PLAYER(SPECIES_PELIPPER) { Ability(ABILITY_DRIZZLE); Item(ITEM_DAMP_ROCK); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_RAIN_CONTINUES);
        MESSAGE("Rain continues to fall.");
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("The sunlight is strong.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The hail is crashing down.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The sunlight faded.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The hail stopped.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drizzle overwrites existing weather with rain for 2 turns with Damp Rock on switch in (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_DAMP_ROCK].holdEffect == HOLD_EFFECT_DAMP_ROCK);
        PLAYER(SPECIES_PELIPPER) { Ability(ABILITY_DRIZZLE); Item(ITEM_DAMP_ROCK); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_DRIZZLE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_RAIN_CONTINUES);
        MESSAGE("Rain continues to fall.");
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("The sunlight is strong.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The hail is crashing down.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The sunlight faded.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The hail stopped.");
            MESSAGE("The snow stopped.");
        }
    }
}

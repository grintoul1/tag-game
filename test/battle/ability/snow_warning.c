#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Hail Warning sets up hail for 5 turns (Gen6-8)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_SNOW_WARNING, GEN_8);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_6);
        PLAYER(SPECIES_ABOMASNOW) { Ability(ABILITY_HAIL_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail stopped.");
    }
}

SINGLE_BATTLE_TEST("Hail Warning sets up hail for 8 turns with Icy Rock (Gen6-8)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_SNOW_WARNING, GEN_8);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_6);
        ASSUME(gItemsInfo[ITEM_ICY_ROCK].holdEffect == HOLD_EFFECT_ICY_ROCK);
        PLAYER(SPECIES_ABOMASNOW) { Ability(ABILITY_HAIL_WARNING); Item(ITEM_ICY_ROCK); }
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
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail stopped.");
    }
}

SINGLE_BATTLE_TEST("Hail Warning sets up permanent hail (Gen4-5)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_SNOW_WARNING, GEN_8);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_ABOMASNOW) { Ability(ABILITY_HAIL_WARNING); }
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
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail is crashing down.");
        NOT MESSAGE("The hail stopped.");
    }
}

SINGLE_BATTLE_TEST("Snow Warning sets up snow for 5 turns (Gen9+)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_SNOW_WARNING, GEN_9);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_9);
        PLAYER(SPECIES_ABOMASNOW) { Ability(ABILITY_SNOW_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("The snow stopped.");
    }
}

SINGLE_BATTLE_TEST("Snow Warning sets up snow for 8 turns with Icy Rock (Gen9+)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_SNOW_WARNING, GEN_9);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_9);
        ASSUME(gItemsInfo[ITEM_ICY_ROCK].holdEffect == HOLD_EFFECT_ICY_ROCK);
        PLAYER(SPECIES_ABOMASNOW) { Ability(ABILITY_SNOW_WARNING); Item(ITEM_ICY_ROCK); }
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
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("Snow continues to fall.");
        MESSAGE("The snow stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Hail Warning sets up hail for one turn on turn 1 (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_HAIL_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        MESSAGE("The hail stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Hail Warning sets up hail for one turn on switch in (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_HAIL_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        MESSAGE("The hail stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Hail Warning sets up hail for 2 turns with Icy Rock on turn 1 (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_ICY_ROCK].holdEffect == HOLD_EFFECT_ICY_ROCK);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_HAIL_WARNING); Item(ITEM_ICY_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Hail Warning sets up hail for 2 turns with Icy Rock on switch in (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_ICY_ROCK].holdEffect == HOLD_EFFECT_ICY_ROCK);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_HAIL_WARNING); Item(ITEM_ICY_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        MESSAGE("The hail is crashing down.");
        MESSAGE("The hail stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Hail Warning overwrites existing weather with hail for one turn on turn 1 (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_HAIL_WARNING); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HAIL_CONTINUES);
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("Rain continues to fall.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The sunlight is strong.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The sun faded.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Hail Warning overwrites existing weather with hail for one turn on switch in (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_HAIL_WARNING); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HAIL_CONTINUES);
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("The sunlight is strong.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("Rain continues to fall.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The sun faded.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Hail Warning overwrites existing weather with hail for 2 turns with Icy Rock on turn 1 (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_ICY_ROCK].holdEffect == HOLD_EFFECT_ICY_ROCK);
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_HAIL_WARNING); Item(ITEM_ICY_ROCK); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HAIL_CONTINUES);
        MESSAGE("The hail is crashing down.");
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("The sunlight is strong.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("Rain continues to fall.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The sun faded.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Hail Warning overwrites existing weather with hail for 2 turns with Icy Rock on switch in (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_ICY_ROCK].holdEffect == HOLD_EFFECT_ICY_ROCK);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_HAIL_WARNING); Item(ITEM_ICY_ROCK); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_HAIL_WARNING);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HAIL_CONTINUES);
        MESSAGE("The hail is crashing down.");
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("The sunlight is strong.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("Rain continues to fall.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The sun faded.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Snow Warning sets up snow for one turn on turn 1 (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_SNOW_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("The snow stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Snow Warning sets up snow for one turn on switch in (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_SNOW_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("The snow stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Snow Warning sets up snow for 2 turns with Icy Rock on turn 1 (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_ICY_ROCK].holdEffect == HOLD_EFFECT_ICY_ROCK);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_SNOW_WARNING); Item(ITEM_ICY_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("Snow continues to fall.");
        MESSAGE("The snow stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Snow Warning sets up snow for 2 turns with Icy Rock on switch in (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_ICY_ROCK].holdEffect == HOLD_EFFECT_ICY_ROCK);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_SNOW_WARNING); Item(ITEM_ICY_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        MESSAGE("Snow continues to fall.");
        MESSAGE("The snow stopped.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Snow Warning overwrites existing weather with hail for one turn on turn 1 (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_SNOW_WARNING); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("Rain continues to fall.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The sunlight is strong.");
            MESSAGE("The hail is crashing down.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The sun faded.");
            MESSAGE("The hail stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Snow Warning overwrites existing weather with hail for one turn on switch in (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_SNOW_WARNING); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("The sunlight is strong.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("Rain continues to fall.");
            MESSAGE("The hail is crashing down.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The sun faded.");
            MESSAGE("The hail stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Snow Warning overwrites existing weather with hail for 2 turns with Icy Rock on turn 1 (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_ICY_ROCK].holdEffect == HOLD_EFFECT_ICY_ROCK);
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_SNOW_WARNING); Item(ITEM_ICY_ROCK); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
        MESSAGE("Snow continues to fall.");
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("The sunlight is strong.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("Rain continues to fall.");
            MESSAGE("The hail is crashing down.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The sun faded.");
            MESSAGE("The hail stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Snow Warning overwrites existing weather with hail for 2 turns with Icy Rock on switch in (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_NINETALES; ability = ABILITY_DROUGHT;      anim = B_ANIM_SUN_CONTINUES;       }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_ICY_ROCK].holdEffect == HOLD_EFFECT_ICY_ROCK);
        PLAYER(SPECIES_SNOVER) { Ability(ABILITY_SNOW_WARNING); Item(ITEM_ICY_ROCK); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_SNOW_WARNING);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
        MESSAGE("Snow continues to fall.");
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("The sunlight is strong.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("Rain continues to fall.");
            MESSAGE("The hail is crashing down.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The sun faded.");
            MESSAGE("The hail stopped.");
        }
    }
}

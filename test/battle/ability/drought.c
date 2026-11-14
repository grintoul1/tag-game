#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Drought sets up sun for 5 turns (Gen6+)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_6);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight faded.");
    }
}

SINGLE_BATTLE_TEST("Drought sets up sun for 8 turns with Heat Rock (Gen6+)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_6);
        ASSUME(gItemsInfo[ITEM_HEAT_ROCK].holdEffect == HOLD_EFFECT_HEAT_ROCK);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); Item(ITEM_HEAT_ROCK); }
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
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight faded.");
    }
}

SINGLE_BATTLE_TEST("Drought sets up permanent sun (Gen3-5)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, FALSE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_3);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); }
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
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight is strong.");
        NOT MESSAGE("The sunlight faded.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drought sets up sun for one turn on turn 1 (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        MESSAGE("The sunlight faded.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drought sets up sun for one turn on switch in (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        MESSAGE("The sunlight faded.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drought sets up sun for 2 turns with Heat Rock on turn 1 (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_HEAT_ROCK].holdEffect == HOLD_EFFECT_HEAT_ROCK);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); Item(ITEM_HEAT_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight faded.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drought sets up sun for 2 turns with Heat Rock on switch in (player)")
{
    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_HEAT_ROCK].holdEffect == HOLD_EFFECT_HEAT_ROCK);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); Item(ITEM_HEAT_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight faded.");
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drought overwrites existing weather with sun for one turn on turn 1 (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SUN_CONTINUES);
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("Rain continues to fall.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The hail is crashing down.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The hail stopped.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drought overwrites existing weather with sun for one turn on switch in (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SUN_CONTINUES);
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("Rain continues to fall.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The hail is crashing down.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The hail stopped.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drought overwrites existing weather with sun for 2 turns with Heat Rock on turn 1 (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_HEAT_ROCK].holdEffect == HOLD_EFFECT_HEAT_ROCK);
        PLAYER(SPECIES_WOBBUFFET) { Speed(3); }
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); Item(ITEM_HEAT_ROCK); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SUN_CONTINUES);
        MESSAGE("The sunlight is strong.");
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("Rain continues to fall.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The hail is crashing down.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The hail stopped.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: Drought overwrites existing weather with sun for 2 turns with Heat Rock on switch in (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        ASSUME(gItemsInfo[ITEM_HEAT_ROCK].holdEffect == HOLD_EFFECT_HEAT_ROCK);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); Item(ITEM_HEAT_ROCK); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
    } WHEN {
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SUN_CONTINUES);
        MESSAGE("The sunlight is strong.");
        ABILITY_POPUP(opponent, ability);
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("Rain continues to fall.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The hail is crashing down.");
            MESSAGE("Snow continues to fall.");
        }
        NONE_OF {
            MESSAGE("The rain stopped.");
            MESSAGE("The sandstorm subsided.");
            MESSAGE("The hail stopped.");
            MESSAGE("The snow stopped.");
        }
    }
}

SINGLE_BATTLE_TEST("Player Weather: overwritten weather restores even in the setter faints (player)")
{
    enum Species species;
    enum Ability ability;
    u32 anim;

    PARAMETRIZE { species = SPECIES_PELIPPER;  ability = ABILITY_DRIZZLE;      anim = B_ANIM_RAIN_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_TYRANITAR; ability = ABILITY_SAND_STREAM;  anim = B_ANIM_SANDSTORM_CONTINUES; }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_HAIL_WARNING; anim = B_ANIM_HAIL_CONTINUES;      }
    PARAMETRIZE { species = SPECIES_SNOVER;    ability = ABILITY_SNOW_WARNING; anim = B_ANIM_SNOW_CONTINUES;      }

    GIVEN {
        WITH_CONFIG(B_ABILITY_WEATHER_PLAYER, TRUE);
        WITH_CONFIG(B_ABILITY_WEATHER, GEN_5);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); Speed(4); }
        OPPONENT(species) { Ability(ability); Speed(5); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(3); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_MEMENTO); SEND_OUT(opponent, 1); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_DROUGHT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SUN_CONTINUES);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEMENTO, opponent);
        NOT ABILITY_POPUP(opponent, ability);
        ONE_OF {
            MESSAGE("It's raining!");
            MESSAGE("The sandstorm is raging!");
            MESSAGE("It's hailing!");
            MESSAGE("It's snowing!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, anim);
        ONE_OF {
            MESSAGE("Rain continues to fall.");
            MESSAGE("The sandstorm is raging.");
            MESSAGE("The hail is crashing down.");
            MESSAGE("Snow continues to fall.");
        }
        NOT MESSAGE("The sunlight faded.");
    }
}


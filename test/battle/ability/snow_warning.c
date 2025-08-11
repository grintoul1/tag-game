#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Snow Warning summons hail (Gen4-8)")
{
    KNOWN_FAILING; // Hail Warning introduced and Snow Warning returns Snow regardless of configs
    GIVEN {
        WITH_CONFIG(GEN_SNOW_WARNING, GEN_8);
        PLAYER(SPECIES_ABOMASNOW) { Ability(ABILITY_SNOW_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        MESSAGE("It started to hail!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HAIL_CONTINUES);
    }
}

SINGLE_BATTLE_TEST("Snow Warning summons snow (Gen9+)")
{
    GIVEN {
        WITH_CONFIG(GEN_SNOW_WARNING, GEN_9);
        PLAYER(SPECIES_ABOMASNOW) { Ability(ABILITY_SNOW_WARNING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        MESSAGE("It started to snow!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
    }
}

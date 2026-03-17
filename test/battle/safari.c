#include "global.h"
#include "test/battle.h"

SAFARI_BATTLE_TEST("Baby's first Safari test")
{
    GIVEN {
        OPPONENT(SPECIES_ZAPDOS);
    } WHEN {
        TURN { 
            SAFARI_BALL();
        }
    } SCENE {
        //MESSAGE("You used Safari Ball!");
        //ANIMATION(ANIM_TYPE_SPECIAL, B_ANIM_BALL_THROW, player);
        //NOT EXPERIENCE_BAR(player);
    }
}


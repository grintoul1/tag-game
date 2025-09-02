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

MULTI_BATTLE_TEST("TAG TEST: Snow Warning and Hail Warning summon the correct weather")
{
    GIVEN {
        MULTI_PLAYER(SPECIES_NINETALES) { Speed(4); Ability(ABILITY_SNOW_WARNING); }
        MULTI_PARTNER(SPECIES_ABOMASNOW) { Speed(3);Ability(ABILITY_HAIL_WARNING); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        TURN {}
    } SCENE {
        MESSAGE("It started to snow!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
        MESSAGE("It started to hail!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HAIL_CONTINUES);
    }
}

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
>>>> OPPONENT: all opponent tests
>>>> PARTNER: all partner tests
>>>>> SCORING: all scoring tests
>>>>> OFFENSIVE SETUP: all offensive setup tests
>>>>> SWITCHING MOVES: all switching move tests
>>>>> TRICK ROOM: all Trick Room tests

*/

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_SONIC_BOOM) == EFFECT_FIXED_HP_DAMAGE);
}

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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER: SCORING: Highest damaging move scores +8 for AI partner on only one target")
{
    u32 speciesA = SPECIES_NONE, speciesB = SPECIES_NONE;

    PARAMETRIZE { speciesA = SPECIES_TATSUGIRI; speciesB = SPECIES_DIALGA; }
    PARAMETRIZE { speciesA = SPECIES_DIALGA; speciesB = SPECIES_TATSUGIRI; }

    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_KINGDRA) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD); }
        MULTI_OPPONENT_A(speciesA) { Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_B(speciesB) { Moves(MOVE_CELEBRATE); }
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_DRAGON_PULSE, target:(speciesA == SPECIES_TATSUGIRI) ? opponentLeft : opponentRight);
                SCORE_EQ_VAL(playerRight, MOVE_DRAGON_PULSE, ((speciesA == SPECIES_TATSUGIRI) ? 108 : 100), target:opponentLeft); 
                SCORE_EQ_VAL(playerRight, MOVE_SCALD, 50, target:opponentLeft); 
                SCORE_EQ_VAL(playerRight, MOVE_DRAGON_PULSE, ((speciesA == SPECIES_TATSUGIRI) ? 100 : 108), target:opponentRight); 
                SCORE_EQ_VAL(playerRight, MOVE_SCALD, 50, target:opponentRight); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: PARTNER: SCORING: Highest damaging move scores +8 for AI partner on only one target")
{
    u32 speciesA = SPECIES_NONE, speciesB = SPECIES_NONE;

    PARAMETRIZE { speciesA = SPECIES_TATSUGIRI; speciesB = SPECIES_DIALGA; }
    PARAMETRIZE { speciesA = SPECIES_DIALGA; speciesB = SPECIES_TATSUGIRI; }

    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_KINGDRA) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD); }
        MULTI_OPPONENT_A(speciesA) { Moves(MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(speciesB) { Moves(MOVE_CELEBRATE); }
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_DRAGON_PULSE, target:(speciesA == SPECIES_TATSUGIRI) ? opponentLeft : opponentRight);
                SCORE_EQ_VAL(playerRight, MOVE_DRAGON_PULSE, ((speciesA == SPECIES_TATSUGIRI) ? 108 : 100), target:opponentLeft); 
                SCORE_EQ_VAL(playerRight, MOVE_SCALD, 50, target:opponentLeft); 
                SCORE_EQ_VAL(playerRight, MOVE_DRAGON_PULSE, ((speciesA == SPECIES_TATSUGIRI) ? 100 : 108), target:opponentRight); 
                SCORE_EQ_VAL(playerRight, MOVE_SCALD, 50, target:opponentRight); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER: SCORING: AI partner always chooses highest damaging move on only one target")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_SEQUENCE_SWITCHING);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_SEQUENCE_SWITCHING);
        MULTI_PLAYER(SPECIES_SILVALLY_WATER) { Speed(2); Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_BLEAKWIND_STORM, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_SILVALLY_WATER) { Speed(1); Moves(MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_SCALD); }
        MULTI_OPPONENT_A(SPECIES_TERAPAGOS_TERASTAL) { Speed(8); Nature(NATURE_CAREFUL); Moves(MOVE_MEMENTO); }
        MULTI_OPPONENT_A(SPECIES_TERAPAGOS_TERASTAL) { Speed(6); Nature(NATURE_CAREFUL); Moves(MOVE_MEMENTO); }
        MULTI_OPPONENT_A(SPECIES_TERAPAGOS_TERASTAL) { Speed(4); Nature(NATURE_CAREFUL); Moves(MOVE_MEMENTO); }
        MULTI_OPPONENT_B(SPECIES_KINGDRA) { Speed(7); Nature(NATURE_LAX); Moves(MOVE_MEMENTO); }
        MULTI_OPPONENT_B(SPECIES_DIANCIE) { Speed(5); Nature(NATURE_LAX); Moves(MOVE_MEMENTO); }
        MULTI_OPPONENT_B(SPECIES_LUDICOLO) { Speed(3); Nature(NATURE_LAX); Moves(MOVE_MEMENTO); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); EXPECT_MOVE(playerRight, MOVE_DRAGON_PULSE, target:opponentRight); }
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); EXPECT_MOVE(playerRight, MOVE_SCALD, target:opponentRight); }
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); EXPECT_MOVE(playerRight, MOVE_AIR_SLASH, target:opponentRight); } 
        }   
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: PARTNER: SCORING: AI partner always chooses highest damaging move")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_SEQUENCE_SWITCHING);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_SEQUENCE_SWITCHING);
        MULTI_PLAYER(SPECIES_SILVALLY_WATER) { Speed(2); Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_BLEAKWIND_STORM, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_SILVALLY_WATER) { Speed(1); Moves(MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_SCALD); }
        MULTI_OPPONENT_A(SPECIES_TERAPAGOS_TERASTAL) { Speed(8); Nature(NATURE_CAREFUL); Moves(MOVE_MEMENTO); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { Speed(7); Nature(NATURE_LAX); Moves(MOVE_MEMENTO); }
        MULTI_OPPONENT_A(SPECIES_TERAPAGOS_TERASTAL) { Speed(6); Nature(NATURE_CAREFUL); Moves(MOVE_MEMENTO); }
        MULTI_OPPONENT_A(SPECIES_DIANCIE) { Speed(5); Nature(NATURE_LAX); Moves(MOVE_MEMENTO); }
        MULTI_OPPONENT_A(SPECIES_TERAPAGOS_TERASTAL) { Speed(4); Nature(NATURE_CAREFUL); Moves(MOVE_MEMENTO); }
        MULTI_OPPONENT_A(SPECIES_LUDICOLO) { Speed(3); Nature(NATURE_LAX); Moves(MOVE_MEMENTO); }
    } WHEN {
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); EXPECT_MOVE(playerRight, MOVE_DRAGON_PULSE, target:opponentRight); }
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); EXPECT_MOVE(playerRight, MOVE_SCALD, target:opponentRight); }
            TURN {  MOVE(playerLeft, MOVE_CELEBRATE); EXPECT_MOVE(playerRight, MOVE_AIR_SLASH, target:opponentRight); } 
        }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER: SCORING: Fast KO scores +20 for AI partner")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(1); Speed(1); };
        MULTI_OPPONENT_B(SPECIES_KINGDRA){ HP(1); Speed(1); };
    } WHEN {
            TURN { SCORE_EQ_VAL(playerRight, MOVE_DRAGON_PULSE, 120, target:opponentLeft); 
                SCORE_EQ_VAL(playerRight, MOVE_SCALD, 120, target:opponentLeft);
                SCORE_EQ_VAL(playerRight, MOVE_FLAMETHROWER, 120, target:opponentLeft); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: PARTNER: SCORING: Fast KO scores +20 for AI partner")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(1); Speed(1); };
        MULTI_OPPONENT_A(SPECIES_KINGDRA){ HP(1); Speed(1); };
    } WHEN {
            TURN { SCORE_EQ_VAL(playerRight, MOVE_DRAGON_PULSE, 120, target:opponentLeft); 
                SCORE_EQ_VAL(playerRight, MOVE_SCALD, 120, target:opponentLeft);
                SCORE_EQ_VAL(playerRight, MOVE_FLAMETHROWER, 120, target:opponentLeft); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER: SCORING: Slow KO scores +14 for AI partner")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(1); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(1); Speed(3); };
        MULTI_OPPONENT_B(SPECIES_KINGDRA){ HP(1); Speed(3); };
    } WHEN {
            TURN { SCORE_EQ_VAL(playerRight, MOVE_DRAGON_PULSE, 114, target:opponentLeft); 
                SCORE_EQ_VAL(playerRight, MOVE_SCALD, 114, target:opponentLeft);
                SCORE_EQ_VAL(playerRight, MOVE_FLAMETHROWER, 114, target:opponentLeft); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: PARTNER: SCORING: Slow KO scores +14 for AI partner")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(1); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(1); Speed(3); };
        MULTI_OPPONENT_A(SPECIES_KINGDRA){ HP(1); Speed(3); };
    } WHEN {
            TURN { SCORE_EQ_VAL(playerRight, MOVE_DRAGON_PULSE, 114, target:opponentLeft); 
                SCORE_EQ_VAL(playerRight, MOVE_SCALD, 114, target:opponentLeft);
                SCORE_EQ_VAL(playerRight, MOVE_FLAMETHROWER, 114, target:opponentLeft); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER: SCORING: AI partner prioritizes fast KO on battler3 over slow KO on battler1")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_SONIC_BOOM); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(20); Speed(3); };
        MULTI_OPPONENT_B(SPECIES_KINGDRA){ HP(20); Speed(1); };
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_SONIC_BOOM, target:opponentRight);
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 120, target:opponentRight); 
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 100, target:opponentLeft); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: PARTNER: SCORING: AI partner prioritizes fast KO on battler3 over slow KO on battler1")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_SONIC_BOOM); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(20); Speed(3); };
        MULTI_OPPONENT_A(SPECIES_KINGDRA){ HP(20); Speed(1); };
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_SONIC_BOOM, target:opponentRight);
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 120, target:opponentRight); 
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 100, target:opponentLeft); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER: SCORING: AI partner prioritizes slow KO on battler3 over highest damaging move on battler1")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_SONIC_BOOM); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(40); Speed(1); };
        MULTI_OPPONENT_B(SPECIES_KINGDRA){ HP(20); Speed(3); };
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_SONIC_BOOM, target:opponentRight);
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 114, target:opponentRight); 
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 100, target:opponentLeft); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: PARTNER: SCORING: AI partner prioritizes slow KO on battler3 over highest damaging move on battler1")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_SONIC_BOOM); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(40); Speed(1); };
        MULTI_OPPONENT_A(SPECIES_KINGDRA){ HP(20); Speed(3); };
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_SONIC_BOOM, target:opponentRight);
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 114, target:opponentRight); 
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 100, target:opponentLeft); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER: SCORING: AI partner prioritizes highest damaging move on battler1 over battler3 during cases of percentage ties")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_SONIC_BOOM); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(40); Speed(1); };
        MULTI_OPPONENT_B(SPECIES_KINGDRA){ HP(40); Speed(3); };
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_SONIC_BOOM, target:opponentLeft);
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 108, target:opponentLeft); }
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 100, target:opponentRight); 
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: PARTNER: SCORING: AI partner prioritizes highest damaging move on battler1 over battler3 during cases of percentage ties")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_SONIC_BOOM); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(40); Speed(1); };
        MULTI_OPPONENT_A(SPECIES_KINGDRA){ HP(40); Speed(3); };
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_SONIC_BOOM, target:opponentLeft);
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 108, target:opponentLeft); }
                SCORE_EQ_VAL(playerRight, MOVE_SONIC_BOOM, 100, target:opponentRight); 
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER: SCORING: AI partner still scores fast KO bonus when friendly fire threshold exceeded")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); HP(1); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_SURF); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(1); Speed(1); };
        MULTI_OPPONENT_B(SPECIES_KINGDRA){ HP(1); Speed(1); };
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_SURF);
                SCORE_EQ_VAL(playerRight, MOVE_SURF, 115, target:opponentLeft); }
                SCORE_EQ_VAL(playerRight, MOVE_SURF, 115, target:opponentRight); 
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: PARTNER: SCORING: AI partner still scores fast KO bonus when friendly fire threshold exceeded")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); HP(1); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_SURF); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(1); Speed(1); };
        MULTI_OPPONENT_A(SPECIES_KINGDRA){ HP(1); Speed(1); };
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_SURF);
                SCORE_EQ_VAL(playerRight, MOVE_SURF, 115, target:opponentLeft); }
                SCORE_EQ_VAL(playerRight, MOVE_SURF, 115, target:opponentRight); 
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: PARTNER: SCORING: AI partner still scores slow KO bonus when friendly fire threshold exceeded")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); HP(1); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_SURF); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(1); Speed(3); };
        MULTI_OPPONENT_B(SPECIES_KINGDRA){ HP(1); Speed(3); };
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_SURF);
                SCORE_EQ_VAL(playerRight, MOVE_SURF, 109, target:opponentLeft); }
                SCORE_EQ_VAL(playerRight, MOVE_SURF, 109, target:opponentRight); 
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: PARTNER: SCORING: AI partner still scores slow KO bonus when friendly fire threshold exceeded")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(2); HP(1); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Moves(MOVE_SURF); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(1); Speed(3); };
        MULTI_OPPONENT_A(SPECIES_KINGDRA){ HP(1); Speed(3); };
    } WHEN {
            TURN { EXPECT_MOVE(playerRight, MOVE_SURF);
                SCORE_EQ_VAL(playerRight, MOVE_SURF, 109, target:opponentLeft); }
                SCORE_EQ_VAL(playerRight, MOVE_SURF, 109, target:opponentRight); 
        } 
}


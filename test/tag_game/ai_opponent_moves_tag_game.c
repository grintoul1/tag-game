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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SCORING: Highest damaging move scores +6 80% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_EIGHTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA);
        MULTI_PARTNER(SPECIES_KINGDRA);
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_ENERGY, 106, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_ENERGY, 106, target:playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_ENERGY, 106, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_ENERGY, 106, target:playerRight); }
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_MUDDY_WATER, 100, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_MUDDY_WATER, 100, target:playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_MUDDY_WATER, 100, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_MUDDY_WATER, 100, target:playerRight); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SCORING: Highest damaging move scores +6 80% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_EIGHTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA);
        MULTI_PARTNER(SPECIES_KINGDRA);
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_ENERGY, 106, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_ENERGY, 106, target:playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_ENERGY, 106, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_ENERGY, 106, target:playerRight); }
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_MUDDY_WATER, 100, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_MUDDY_WATER, 100, target:playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_MUDDY_WATER, 100, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_MUDDY_WATER, 100, target:playerRight); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SCORING: Highest damaging move scores +8 20% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_TWENTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA);
        MULTI_PARTNER(SPECIES_KINGDRA);
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_ENERGY, 108, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_ENERGY, 108, target:playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_ENERGY, 108, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_ENERGY, 108, target:playerRight); }
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_MUDDY_WATER, 100, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_MUDDY_WATER, 100, target:playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_MUDDY_WATER, 100, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_MUDDY_WATER, 100, target:playerRight); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SCORING: Highest damaging move scores +8 20% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_TWENTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA);
        MULTI_PARTNER(SPECIES_KINGDRA);
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_ENERGY, MOVE_MUDDY_WATER, MOVE_HEAT_WAVE); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_ENERGY, 108, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_ENERGY, 108, target:playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_ENERGY, 108, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_ENERGY, 108, target:playerRight); }
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_MUDDY_WATER, 100, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_MUDDY_WATER, 100, target:playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_MUDDY_WATER, 100, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_MUDDY_WATER, 100, target:playerRight); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SCORING: AI always chooses highest damaging move")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SCORING: AI always chooses highest damaging move")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SCORING: Fast KO scores +18 80% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_EIGHTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA) { HP(1); Speed(1); };
        MULTI_PARTNER(SPECIES_KINGDRA){ HP(1); Speed(1); };
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(2); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(3); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 118, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 118, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 118, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 118, target:playerRight); 
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 118, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 118, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 118, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 118, target:playerRight); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SCORING: Fast KO scores +18 80% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_EIGHTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA) { HP(1); Speed(1); };
        MULTI_PARTNER(SPECIES_KINGDRA){ HP(1); Speed(1); };
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(3); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 118, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 118, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 118, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 118, target:playerRight); 
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 118, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 118, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 118, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 118, target:playerRight); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SCORING: Fast KO scores +20 20% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_TWENTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA) { HP(1); Speed(1); };
        MULTI_PARTNER(SPECIES_KINGDRA){ HP(1); Speed(1); };
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(2); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(3); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 120, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 120, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 120, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 120, target:playerRight); 
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 120, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 120, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 120, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 120, target:playerRight); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SCORING: Fast KO scores +20 20% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_TWENTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA) { HP(1); Speed(1); };
        MULTI_PARTNER(SPECIES_KINGDRA){ HP(1); Speed(1); };
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(3); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 120, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 120, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 120, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 120, target:playerRight); 
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 120, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 120, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 120, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 120, target:playerRight); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SCORING: Slow KO scores +12 80% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_EIGHTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA) { HP(1); Speed(3); };
        MULTI_PARTNER(SPECIES_KINGDRA){ HP(1); Speed(3); };
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(2); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(1); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 112, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 112, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 112, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 112, target:playerRight); 
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 112, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 112, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 112, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 112, target:playerRight); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SCORING: Slow KO scores +12 80% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_EIGHTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA) { HP(1); Speed(3); };
        MULTI_PARTNER(SPECIES_KINGDRA){ HP(1); Speed(3); };
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(1); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 112, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 112, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 112, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 112, target:playerRight); 
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 112, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 112, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 112, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 112, target:playerRight); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SCORING: Slow KO scores +14 20% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_TWENTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA) { HP(1); Speed(3); };
        MULTI_PARTNER(SPECIES_KINGDRA){ HP(1); Speed(3); };
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(2); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(1); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 114, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 114, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 114, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 114, target:playerRight); 
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 114, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 114, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 114, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 114, target:playerRight); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SCORING: Slow KO scores +14 20% of the time for opponents")
{
    PASSES_RANDOMLY(CUSTOM_AI_TWENTY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_KINGDRA) { HP(1); Speed(3); };
        MULTI_PARTNER(SPECIES_KINGDRA){ HP(1); Speed(3); };
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_DRAGON_PULSE, MOVE_SCALD, MOVE_FLAMETHROWER); Speed(1); }
    } WHEN {
            TURN { SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 114, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 114, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_PULSE, 114, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_PULSE, 114, target:playerRight); 
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 114, target:playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 114, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_SCALD, 114, target:playerRight); 
                SCORE_EQ_VAL(opponentRight, MOVE_SCALD, 114, target:playerRight); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: OFFENSIVE SETUP: AI always chooses +2 offensive setup over slow kill if both targets are incapacitated")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: OFFENSIVE SETUP: AI sometimes chooses +2 offensive setup over slow kill if one target is incapacitated")
{
    PASSES_RANDOMLY(CUSTOM_AI_FIFTY_PERCENT, 100, RNG_AI_CUSTOM_AI_FIFTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: OFFENSIVE SETUP: AI always chooses +2 offensive setup over slow kill if both targets are incapacitated")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: OFFENSIVE SETUP: AI sometimes chooses +2 offensive setup over slow kill if one target is incapacitated")
{
    PASSES_RANDOMLY(CUSTOM_AI_FIFTY_PERCENT, 100, RNG_AI_CUSTOM_AI_FIFTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is slow OHKO'd")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is slow OHKO'd")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SWITCHING MOVES: AI will slow Volt Switch into a mon that is slow OHKO'd")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SWITCHING MOVES: AI will slow Volt Switch into a mon that is slow OHKO'd")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is outsped and 2HKO'd")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is outsped and 2HKO'd")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SWITCHING MOVES: AI will slow Volt Switch into a mon that is outsped and 2HKO'd")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SWITCHING MOVES: AI will slow Volt Switch into a mon that is outsped and 2HKO'd")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_SANDSLASH) { HP(30); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(3); }
        MULTI_PARTNER(SPECIES_METAGROSS) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(5); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { HP(20); Moves(MOVE_VOLT_SWITCH, MOVE_THUNDERSHOCK); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_RATTATA) { Moves(MOVE_TACKLE); Speed(6); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(1); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(2); }
    } WHEN {
            TURN { MOVE(playerLeft, MOVE_CELEBRATE); }
        } THEN {
            EXPECT_EQ(opponentLeft->species, SPECIES_WOBBUFFET);
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: TRICK ROOM: AI uses After You and Trick Room together")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: TRICK ROOM: AI uses After You and Trick Room together")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: TRICK ROOM: Both opponents use Trick Room on the turn it expires 50% of time")
{
    PASSES_RANDOMLY(DOUBLE_TRICK_ROOM_ON_LAST_TURN_CHANCE, 100, RNG_AI_REFRESH_TRICK_ROOM_ON_LAST_TURN);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: TRICK ROOM: Both opponents use Trick Room on the turn it expires 50% of time")
{
    PASSES_RANDOMLY(DOUBLE_TRICK_ROOM_ON_LAST_TURN_CHANCE, 100, RNG_AI_REFRESH_TRICK_ROOM_ON_LAST_TURN);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
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

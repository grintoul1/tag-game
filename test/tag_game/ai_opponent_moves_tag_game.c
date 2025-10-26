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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: OFFENSIVE SETUP: AI +1 offensive setup is incentivised if both targets are incapacitated")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Status1(STATUS1_SLEEP); Speed(4); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Status1(STATUS1_FREEZE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(2); }
        MULTI_OPPONENT_B(SPECIES_WYNAUT) { Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_MEDITATE); EXPECT_MOVE(opponentRight, MOVE_MEDITATE);
                    SCORE_EQ_VAL(opponentLeft, MOVE_MEDITATE, 112, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_MEDITATE, 112, target:playerRight); }
        }   SCENE {
        MESSAGE("The opposing Wobbuffet used Meditate!");
        MESSAGE("The opposing Wynaut used Meditate!");
    }
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: OFFENSIVE SETUP: AI +1 offensive setup is incentivised if both targets are incapacitated")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Status1(STATUS1_SLEEP); Speed(4); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Status1(STATUS1_FREEZE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_MEDITATE); EXPECT_MOVE(opponentRight, MOVE_MEDITATE);
                    SCORE_EQ_VAL(opponentLeft, MOVE_MEDITATE, 112, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_MEDITATE, 112, target:playerRight); }
        }   SCENE {
        MESSAGE("The opposing Wobbuffet used Meditate!");
        MESSAGE("The opposing Wynaut used Meditate!");
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: OFFENSIVE SETUP: AI +1 offensive setup is incentivised 50% of the time if one target is incapacitated")
{
    PASSES_RANDOMLY(CUSTOM_AI_FIFTY_PERCENT, 100, RNG_AI_CUSTOM_AI_FIFTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Speed(4); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Status1(STATUS1_FREEZE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(2); }
        MULTI_OPPONENT_B(SPECIES_WYNAUT) { Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_MEDITATE); EXPECT_MOVE(opponentRight, MOVE_MEDITATE);
                    SCORE_EQ_VAL(opponentLeft, MOVE_MEDITATE, 112, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_MEDITATE, 112, target:playerRight); }
        }   SCENE {
        MESSAGE("The opposing Wobbuffet used Meditate!");
        MESSAGE("The opposing Wynaut used Meditate!");
    }
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: OFFENSIVE SETUP: AI +1 offensive setup is incentivised 50% of the time if one target is incapacitated")
{
    PASSES_RANDOMLY(CUSTOM_AI_FIFTY_PERCENT, 100, RNG_AI_CUSTOM_AI_FIFTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Speed(4); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Status1(STATUS1_FREEZE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_MEDITATE); EXPECT_MOVE(opponentRight, MOVE_MEDITATE);
                    SCORE_EQ_VAL(opponentLeft, MOVE_MEDITATE, 112, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_MEDITATE, 112, target:playerRight); }
        }   SCENE {
        MESSAGE("The opposing Wobbuffet used Meditate!");
        MESSAGE("The opposing Wynaut used Meditate!");
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: OFFENSIVE SETUP: AI +1 offensive setup is incentivised based on speed and hits to KO user")
{
    u32 hp;
    PARAMETRIZE { hp = 100; }
    PARAMETRIZE { hp = 60; }

    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(1); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(hp); Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(3); }
        MULTI_OPPONENT_B(SPECIES_WYNAUT) { HP(hp); Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(4); }
    } WHEN {
            TURN { 
                    SCORE_EQ_VAL(opponentLeft, MOVE_MEDITATE, (hp == 100) ? 107 : 106, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_MEDITATE, (hp == 100) ? 107 : 106, target:playerRight); 
                    SCORE_EQ_VAL(opponentRight, MOVE_MEDITATE, (hp == 100) ? 107 : 106, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_MEDITATE, (hp == 100) ? 107 : 106, target:playerRight); }
        }  
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: OFFENSIVE SETUP: AI +1 offensive setup is incentivised based on speed and hits to KO user")
{
    u32 hp;
    PARAMETRIZE { hp = 100; }
    PARAMETRIZE { hp = 60; }

    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(1); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(2); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(hp); Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(hp); Moves(MOVE_MEDITATE, MOVE_TACKLE); Speed(4); }
    } WHEN {
            TURN { 
                    SCORE_EQ_VAL(opponentLeft, MOVE_MEDITATE, (hp == 100) ? 107 : 106, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_MEDITATE, (hp == 100) ? 107 : 106, target:playerRight); 
                    SCORE_EQ_VAL(opponentRight, MOVE_MEDITATE, (hp == 100) ? 107 : 106, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_MEDITATE, (hp == 100) ? 107 : 106, target:playerRight); }
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: OFFENSIVE SETUP: Opponent +2 offensive setup is incentivised when the user cannot be fast 3HKO'd")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Speed(2); }
        MULTI_PARTNER(SPECIES_GASTLY) { Speed(1); }
        MULTI_OPPONENT_A(SPECIES_HAUNTER) { HP(60); Moves(MOVE_SWORDS_DANCE, MOVE_TACKLE); Speed(4); }
        MULTI_OPPONENT_B(SPECIES_WYNAUT) { HP(60); Moves(MOVE_NASTY_PLOT, MOVE_SHADOW_BALL); Speed(3); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_SWORDS_DANCE); EXPECT_MOVE(opponentRight, MOVE_NASTY_PLOT);
                    SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 108, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 108, target:playerRight);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 108, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 50, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 108, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 108, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 50, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 108, target:playerRight); }
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_TACKLE, target:playerLeft); EXPECT_MOVE(opponentRight, MOVE_SHADOW_BALL, target:playerRight);
                    SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 100, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 100, target:playerRight);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 108, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 50, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 100, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 100, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 50, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 120, target:playerRight); }
    }   
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: OFFENSIVE SETUP: Opponent +2 offensive setup is incentivised when the user cannot be fast 3HKO'd")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Speed(2); }
        MULTI_PARTNER(SPECIES_GASTLY) { Speed(1); }
        MULTI_OPPONENT_A(SPECIES_HAUNTER) { HP(60); Moves(MOVE_SWORDS_DANCE, MOVE_TACKLE); Speed(4); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(60); Moves(MOVE_NASTY_PLOT, MOVE_SHADOW_BALL); Speed(3); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_SWORDS_DANCE); EXPECT_MOVE(opponentRight, MOVE_NASTY_PLOT);
                    SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 108, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 108, target:playerRight);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 108, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 50, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 108, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 108, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 50, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 108, target:playerRight); }
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_TACKLE, target:playerLeft); EXPECT_MOVE(opponentRight, MOVE_SHADOW_BALL, target:playerRight);
                    SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 100, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 100, target:playerRight);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 108, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 50, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 100, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 100, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 50, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 120, target:playerRight); }
    }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: OFFENSIVE SETUP: Opponent +2 offensive setup is slightly incentivised when the user can be fast 3HKO'd")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Speed(4); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_GASTLY) { Speed(3); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KADABRA) { HP(60); Moves(MOVE_SWORDS_DANCE, MOVE_TACKLE); Speed(1); }
        MULTI_OPPONENT_B(SPECIES_WYNAUT) { HP(60); Moves(MOVE_NASTY_PLOT, MOVE_SHADOW_BALL); Speed(2); }
    } WHEN {
            TURN {  SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 107, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 107, target:playerRight);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 108, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 50, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 107, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 107, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 50, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 108, target:playerRight); }
    }   
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: OFFENSIVE SETUP: Opponent +2 offensive setup is slightly incentivised when the user can be fast 3HKO'd")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Speed(4); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_GASTLY) { Speed(3); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_KADABRA) { HP(60); Moves(MOVE_SWORDS_DANCE, MOVE_TACKLE); Speed(1); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(60); Moves(MOVE_NASTY_PLOT, MOVE_SHADOW_BALL); Speed(2); }
    } WHEN {
            TURN {  SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 107, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_SWORDS_DANCE, 107, target:playerRight);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 108, target:playerLeft);
                    SCORE_EQ_VAL(opponentLeft, MOVE_TACKLE, 50, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 107, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_NASTY_PLOT, 107, target:playerRight);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 50, target:playerLeft);
                    SCORE_EQ_VAL(opponentRight, MOVE_SHADOW_BALL, 108, target:playerRight); }
    }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: DEFENSIVE SETUP: Opponent defensive setup over is incentivised based on the target's moveset")
{
    u32 caseNo, movePlayer1, movePlayer2, movePartner1, movePartner2, moveOpponentA1, moveOpponentA2, moveOpponentB1, moveOpponentB2;
    PARAMETRIZE { caseNo = 0, movePlayer1 = MOVE_TACKLE, movePlayer2 = MOVE_SONIC_BOOM, movePartner1 = MOVE_TACKLE, movePartner2 = MOVE_SONIC_BOOM,
                  moveOpponentA1 = MOVE_DEFENSE_CURL, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_DEFENSE_CURL, moveOpponentB2 = MOVE_TACKLE; } // +1 Def, has Physical moves
    PARAMETRIZE { caseNo = 1, movePlayer1 = MOVE_TACKLE, movePlayer2 = MOVE_SCRATCH, movePartner1 = MOVE_TACKLE, movePartner2 = MOVE_SCRATCH,
                  moveOpponentA1 = MOVE_DEFENSE_CURL, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_DEFENSE_CURL, moveOpponentB2 = MOVE_TACKLE; } // +1 Def, no Special moves
    PARAMETRIZE { caseNo = 2, movePlayer1 = MOVE_TACKLE, movePlayer2 = MOVE_SONIC_BOOM, movePartner1 = MOVE_TACKLE, movePartner2 = MOVE_SONIC_BOOM,
                  moveOpponentA1 = MOVE_IRON_DEFENSE, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_IRON_DEFENSE, moveOpponentB2 = MOVE_TACKLE; } // +2 Def, has Physical moves
    PARAMETRIZE { caseNo = 3, movePlayer1 = MOVE_TACKLE, movePlayer2 = MOVE_SCRATCH, movePartner1 = MOVE_TACKLE, movePartner2 = MOVE_SCRATCH,
                  moveOpponentA1 = MOVE_IRON_DEFENSE, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_IRON_DEFENSE, moveOpponentB2 = MOVE_TACKLE; } // +2 Def, no Special moves
    PARAMETRIZE { caseNo = 4, movePlayer1 = MOVE_TACKLE, movePlayer2 = MOVE_WATER_GUN, movePartner1 = MOVE_TACKLE, movePartner2 = MOVE_WATER_GUN,
                  moveOpponentA1 = MOVE_AMNESIA, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_AMNESIA, moveOpponentB2 = MOVE_TACKLE; } // +2 SpD, has Special moves
    PARAMETRIZE { caseNo = 5, movePlayer1 = MOVE_WATER_GUN, movePlayer2 = MOVE_SONIC_BOOM, movePartner1 = MOVE_WATER_GUN, movePartner2 = MOVE_SONIC_BOOM,
                  moveOpponentA1 = MOVE_AMNESIA, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_AMNESIA, moveOpponentB2 = MOVE_TACKLE; } // +2 SpD, no Physical moves

    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Moves(movePlayer1, movePlayer2, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Moves(movePartner1, movePartner2, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(moveOpponentA1, moveOpponentA2); }
        MULTI_OPPONENT_B(SPECIES_WOBBUFFET) { Moves(moveOpponentB1, moveOpponentB2); }
    } WHEN {
            TURN {  switch(caseNo) 
                {
                    case 0:
                    case 1:
                        SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 106, target:playerLeft);
                        SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 106, target:playerRight);
                        SCORE_EQ_VAL(opponentRight, moveOpponentB1, 106, target:playerLeft);
                        SCORE_EQ_VAL(opponentRight, moveOpponentB1, 106, target:playerRight);
                        break;
                    default:
                        SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 107, target:playerLeft);
                        SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 107, target:playerRight);
                        SCORE_EQ_VAL(opponentRight, moveOpponentB1, 107, target:playerLeft);
                        SCORE_EQ_VAL(opponentRight, moveOpponentB1, 107, target:playerRight);
                        break;
                } 
        }
    }   
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: DEFENSIVE SETUP: Opponent defensive setup over is incentivised based on the target's moveset")
{
    u32 caseNo, movePlayer1, movePlayer2, movePartner1, movePartner2, moveOpponentA1, moveOpponentA2, moveOpponentB1, moveOpponentB2;
    PARAMETRIZE { caseNo = 0, movePlayer1 = MOVE_TACKLE, movePlayer2 = MOVE_SONIC_BOOM, movePartner1 = MOVE_TACKLE, movePartner2 = MOVE_SONIC_BOOM,
                  moveOpponentA1 = MOVE_DEFENSE_CURL, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_DEFENSE_CURL, moveOpponentB2 = MOVE_TACKLE; } // +1 Def, has Physical moves
    PARAMETRIZE { caseNo = 1, movePlayer1 = MOVE_TACKLE, movePlayer2 = MOVE_SCRATCH, movePartner1 = MOVE_TACKLE, movePartner2 = MOVE_SCRATCH,
                  moveOpponentA1 = MOVE_DEFENSE_CURL, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_DEFENSE_CURL, moveOpponentB2 = MOVE_TACKLE; } // +1 Def, no Special moves
    PARAMETRIZE { caseNo = 2, movePlayer1 = MOVE_TACKLE, movePlayer2 = MOVE_SONIC_BOOM, movePartner1 = MOVE_TACKLE, movePartner2 = MOVE_SONIC_BOOM,
                  moveOpponentA1 = MOVE_IRON_DEFENSE, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_IRON_DEFENSE, moveOpponentB2 = MOVE_TACKLE; } // +2 Def, has Physical moves
    PARAMETRIZE { caseNo = 3, movePlayer1 = MOVE_TACKLE, movePlayer2 = MOVE_SCRATCH, movePartner1 = MOVE_TACKLE, movePartner2 = MOVE_SCRATCH,
                  moveOpponentA1 = MOVE_IRON_DEFENSE, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_IRON_DEFENSE, moveOpponentB2 = MOVE_TACKLE; } // +2 Def, no Special moves
    PARAMETRIZE { caseNo = 4, movePlayer1 = MOVE_TACKLE, movePlayer2 = MOVE_WATER_GUN, movePartner1 = MOVE_TACKLE, movePartner2 = MOVE_WATER_GUN,
                  moveOpponentA1 = MOVE_AMNESIA, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_AMNESIA, moveOpponentB2 = MOVE_TACKLE; } // +2 SpD, has Special moves
    PARAMETRIZE { caseNo = 5, movePlayer1 = MOVE_WATER_GUN, movePlayer2 = MOVE_SONIC_BOOM, movePartner1 = MOVE_WATER_GUN, movePartner2 = MOVE_SONIC_BOOM,
                  moveOpponentA1 = MOVE_AMNESIA, moveOpponentA2 = MOVE_TACKLE, moveOpponentB1 = MOVE_AMNESIA, moveOpponentB2 = MOVE_TACKLE; } // +2 SpD, no Physical moves

    GIVEN {
        AI_FLAGS(AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_RATTATA) { Moves(movePlayer1, movePlayer2, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_KANGASKHAN) { Moves(movePartner1, movePartner2, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(moveOpponentA1, moveOpponentA2); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { Moves(moveOpponentB1, moveOpponentB2); }
    } WHEN {
            TURN {  switch(caseNo) 
                {
                    case 0:
                    case 1:
                        SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 106, target:playerLeft);
                        SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 106, target:playerRight);
                        SCORE_EQ_VAL(opponentRight, moveOpponentB1, 106, target:playerLeft);
                        SCORE_EQ_VAL(opponentRight, moveOpponentB1, 106, target:playerRight);
                        break;
                    default:
                        SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 107, target:playerLeft);
                        SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 107, target:playerRight);
                        SCORE_EQ_VAL(opponentRight, moveOpponentB1, 107, target:playerLeft);
                        SCORE_EQ_VAL(opponentRight, moveOpponentB1, 107, target:playerRight);
                        break;
                } 
        }
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SCORING: Opponents choose priority last chance move over highest damaging move")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { HP(80); Speed(3); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_DRAGON_RAGE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(40); Moves(MOVE_DRAGON_RAGE, MOVE_MACH_PUNCH); Speed(2); };
        MULTI_OPPONENT_B(SPECIES_KINGDRA) { HP(40); Moves(MOVE_DRAGON_RAGE, MOVE_MACH_PUNCH); Speed(2); };
    } WHEN {
            TURN { EXPECT_MOVE(opponentLeft, MOVE_MACH_PUNCH, target:playerRight);
                EXPECT_MOVE(opponentRight, MOVE_MACH_PUNCH, target:playerRight);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_RAGE, 108, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_RAGE, 108, target:playerRight);
                SCORE_EQ_VAL(opponentLeft, MOVE_MACH_PUNCH, 100, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_MACH_PUNCH, 114, target:playerRight);
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_RAGE, 108, target:playerLeft);
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_RAGE, 108, target:playerRight);
                SCORE_EQ_VAL(opponentRight, MOVE_MACH_PUNCH, 100, target:playerLeft);
                SCORE_EQ_VAL(opponentRight, MOVE_MACH_PUNCH, 114, target:playerRight); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SCORING: Opponents choose priority last chance move over highest damaging move")
{
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { HP(80); Speed(3); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_DRAGON_RAGE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(40); Moves(MOVE_DRAGON_RAGE, MOVE_MACH_PUNCH); Speed(2); };
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(40); Moves(MOVE_DRAGON_RAGE, MOVE_MACH_PUNCH); Speed(2); };
    } WHEN {
            TURN { EXPECT_MOVE(opponentLeft, MOVE_MACH_PUNCH, target:playerRight);
                EXPECT_MOVE(opponentRight, MOVE_MACH_PUNCH, target:playerRight);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_RAGE, 108, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_DRAGON_RAGE, 108, target:playerRight);
                SCORE_EQ_VAL(opponentLeft, MOVE_MACH_PUNCH, 100, target:playerLeft);
                SCORE_EQ_VAL(opponentLeft, MOVE_MACH_PUNCH, 114, target:playerRight);
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_RAGE, 108, target:playerLeft);
                SCORE_EQ_VAL(opponentRight, MOVE_DRAGON_RAGE, 108, target:playerRight);
                SCORE_EQ_VAL(opponentRight, MOVE_MACH_PUNCH, 100, target:playerLeft);
                SCORE_EQ_VAL(opponentRight, MOVE_MACH_PUNCH, 114, target:playerRight); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SCORING: Opponents choose priority last chance move over slow KO 90% of the time")
{
    KNOWN_FAILING; // Seems Dragon Rage always chosen in case of score tie
    PASSES_RANDOMLY(CUSTOM_AI_NINETY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { HP(80); Speed(3); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { HP(40); Moves(MOVE_DRAGON_RAGE, MOVE_CELEBRATE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(30); Moves(MOVE_DRAGON_RAGE, MOVE_MACH_PUNCH); Speed(2); };
        MULTI_OPPONENT_B(SPECIES_KINGDRA) { HP(30); Moves(MOVE_DRAGON_RAGE, MOVE_MACH_PUNCH); Speed(2); };
    } WHEN {
            TURN { EXPECT_MOVE(opponentRight, MOVE_MACH_PUNCH, target:playerRight); }
        } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SCORING: Opponents choose priority last chance move over slow KO 90% of the time")
{
    KNOWN_FAILING; // Seems Dragon Rage always chosen in case of score tie
    PASSES_RANDOMLY(CUSTOM_AI_NINETY_PERCENT, 100, RNG_AI_CUSTOM_AI_TWENTY_PERCENT);
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { HP(80); Speed(3); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { HP(40); Moves(MOVE_DRAGON_RAGE, MOVE_CELEBRATE); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(30); Moves(MOVE_DRAGON_RAGE, MOVE_MACH_PUNCH); Speed(2); };
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { HP(30); Moves(MOVE_DRAGON_RAGE, MOVE_MACH_PUNCH); Speed(2); };
    } WHEN {
            TURN { EXPECT_MOVE(opponentRight, MOVE_MACH_PUNCH, target:playerRight); }
        } 
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OPPONENT: SCORING: AI opponents can click Coaching/Enlightening")
{
    u32 moveOpponentA1, moveOpponentA2, moveOpponentB1, moveOpponentB2, playerMove, caseNo;
    PARAMETRIZE {   moveOpponentA1 = MOVE_COACHING, moveOpponentA2 = MOVE_TACKLE, 
                    moveOpponentB1 = MOVE_COACHING, moveOpponentB2 = MOVE_TACKLE,
                    playerMove = MOVE_REST, caseNo = 1; } // Coaching: Partner has Physical move
    PARAMETRIZE {   moveOpponentA1 = MOVE_COACHING, moveOpponentA2 = MOVE_WATER_GUN, 
                    moveOpponentB1 = MOVE_COACHING, moveOpponentB2 = MOVE_WATER_GUN,
                    playerMove = MOVE_TACKLE, caseNo = 2; } // Coaching: Opponent has Physical move
    PARAMETRIZE {   moveOpponentA1 = MOVE_COACHING, moveOpponentA2 = MOVE_TACKLE, 
                    moveOpponentB1 = MOVE_COACHING, moveOpponentB2 = MOVE_TACKLE,
                    playerMove = MOVE_TACKLE, caseNo = 3; } // Coaching: Both conditions
    PARAMETRIZE {   moveOpponentA1 = MOVE_ENLIGHTENING, moveOpponentA2 = MOVE_WATER_GUN, 
                    moveOpponentB1 = MOVE_ENLIGHTENING, moveOpponentB2 = MOVE_WATER_GUN,
                    playerMove = MOVE_REST, caseNo = 4; } // Enlightening: Partner has Special move
    PARAMETRIZE {   moveOpponentA1 = MOVE_ENLIGHTENING, moveOpponentA2 = MOVE_TACKLE, 
                    moveOpponentB1 = MOVE_ENLIGHTENING, moveOpponentB2 = MOVE_TACKLE,
                    playerMove = MOVE_WATER_GUN, caseNo = 5; } // Enlightening: Opponent has Special move
    PARAMETRIZE {   moveOpponentA1 = MOVE_ENLIGHTENING, moveOpponentA2 = MOVE_WATER_GUN, 
                    moveOpponentB1 = MOVE_ENLIGHTENING, moveOpponentB2 = MOVE_WATER_GUN,
                    playerMove = MOVE_WATER_GUN, caseNo = 6; } // Enlightening: Both conditions
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Moves(playerMove, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_WOBBUFFET);
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { Moves(moveOpponentA1, moveOpponentA2); }
        MULTI_OPPONENT_B(SPECIES_KINGDRA) { Moves(moveOpponentB1, moveOpponentB2); }
    } WHEN {
            TURN {  switch(caseNo)
                    {
                        case 3:
                        case 6:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 114, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 114, target:opponentLeft);
                            break;
                        default:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 111, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 111, target:opponentLeft);
                            break;
                    }
        } TURN {    switch(caseNo)
                    {
                        case 3:
                        case 6:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 114, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 114, target:opponentLeft);
                            break;
                        default:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 111, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 111, target:opponentLeft);
                            break;
                    }
        } TURN {    switch(caseNo)
                    {
                        case 3:
                        case 6:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 50, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 50, target:opponentLeft);
                            break;
                        default:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 50, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 50, target:opponentLeft);
                            break;
                    }
        }
    } 
}

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OPPONENT: SCORING: AI opponents can click Coaching/Enlightening")
{
    u32 moveOpponentA1, moveOpponentA2, moveOpponentB1, moveOpponentB2, playerMove, caseNo;
    PARAMETRIZE {   moveOpponentA1 = MOVE_COACHING, moveOpponentA2 = MOVE_TACKLE, 
                    moveOpponentB1 = MOVE_COACHING, moveOpponentB2 = MOVE_TACKLE,
                    playerMove = MOVE_REST, caseNo = 1; } // Coaching: Partner has Physical move
    PARAMETRIZE {   moveOpponentA1 = MOVE_COACHING, moveOpponentA2 = MOVE_WATER_GUN, 
                    moveOpponentB1 = MOVE_COACHING, moveOpponentB2 = MOVE_WATER_GUN,
                    playerMove = MOVE_TACKLE, caseNo = 2; } // Coaching: Opponent has Physical move
    PARAMETRIZE {   moveOpponentA1 = MOVE_COACHING, moveOpponentA2 = MOVE_TACKLE, 
                    moveOpponentB1 = MOVE_COACHING, moveOpponentB2 = MOVE_TACKLE,
                    playerMove = MOVE_TACKLE, caseNo = 3; } // Coaching: Both conditions
    PARAMETRIZE {   moveOpponentA1 = MOVE_ENLIGHTENING, moveOpponentA2 = MOVE_WATER_GUN, 
                    moveOpponentB1 = MOVE_ENLIGHTENING, moveOpponentB2 = MOVE_WATER_GUN,
                    playerMove = MOVE_REST, caseNo = 4; } // Enlightening: Partner has Special move
    PARAMETRIZE {   moveOpponentA1 = MOVE_ENLIGHTENING, moveOpponentA2 = MOVE_TACKLE, 
                    moveOpponentB1 = MOVE_ENLIGHTENING, moveOpponentB2 = MOVE_TACKLE,
                    playerMove = MOVE_WATER_GUN, caseNo = 5; } // Enlightening: Opponent has Special move
    PARAMETRIZE {   moveOpponentA1 = MOVE_ENLIGHTENING, moveOpponentA2 = MOVE_WATER_GUN, 
                    moveOpponentB1 = MOVE_ENLIGHTENING, moveOpponentB2 = MOVE_WATER_GUN,
                    playerMove = MOVE_WATER_GUN, caseNo = 6; } // Enlightening: Both conditions
    GIVEN {
        BATTLER_AI_FLAGS(1, AI_FLAG_TAG_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_TAG_TRAINER);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Moves(playerMove, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_WOBBUFFET);
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { Moves(moveOpponentA1, moveOpponentA2); }
        MULTI_OPPONENT_A(SPECIES_KINGDRA) { Moves(moveOpponentB1, moveOpponentB2); }
    } WHEN {
            TURN {  switch(caseNo)
                    {
                        case 3:
                        case 6:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 114, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 114, target:opponentLeft);
                            break;
                        default:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 111, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 111, target:opponentLeft);
                            break;
                    }
        } TURN {    switch(caseNo)
                    {
                        case 3:
                        case 6:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 114, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 114, target:opponentLeft);
                            break;
                        default:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 111, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 111, target:opponentLeft);
                            break;
                    }
        } TURN {    switch(caseNo)
                    {
                        case 3:
                        case 6:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 50, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 50, target:opponentLeft);
                            break;
                        default:
                            SCORE_EQ_VAL(opponentLeft, moveOpponentA1, 50, target:opponentRight); 
                            SCORE_EQ_VAL(opponentRight, moveOpponentB1, 50, target:opponentLeft);
                            break;
                    }
        }
    } 
}


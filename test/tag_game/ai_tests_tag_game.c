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

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_SONIC_BOOM) == EFFECT_FIXED_HP_DAMAGE);
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: Partner will switch into a type immunity when outsped and OHKO'd by one type of move (multibattle)")
{
    KNOWN_FAILING; // Speed for Battler 2 being overwritten by speed for Battler 3
    u32 moveA1 = MOVE_NONE, moveB1 = MOVE_NONE , species, ability = ABILITY_NONE;

    PARAMETRIZE { moveA1 = MOVE_GIGA_IMPACT;    moveB1 = MOVE_HYPER_BEAM;       species = SPECIES_GASTLY;       ability = ABILITY_LEVITATE; }
    PARAMETRIZE { moveA1 = MOVE_THUNDER_SHOCK;  moveB1 = MOVE_SHOCK_WAVE;       species = SPECIES_DONPHAN;      ability = ABILITY_BATTLE_ARMOR; }
    PARAMETRIZE { moveA1 = MOVE_ROCK_SMASH;     moveB1 = MOVE_STORM_THROW;      species = SPECIES_GASTLY;       ability = ABILITY_LEVITATE; }
    PARAMETRIZE { moveA1 = MOVE_POISON_STING;   moveB1 = MOVE_ACID;             species = SPECIES_EXCADRILL;    ability = ABILITY_SAND_RUSH; }
    PARAMETRIZE { moveA1 = MOVE_MUD_SLAP;       moveB1 = MOVE_STOMPING_TANTRUM; species = SPECIES_PIDGEOTTO;    ability = ABILITY_KEEN_EYE; }
    PARAMETRIZE { moveA1 = MOVE_CONFUSION;      moveB1 = MOVE_PSYCHIC;          species = SPECIES_SNEASEL;      ability = ABILITY_PRESSURE; }
    PARAMETRIZE { moveA1 = MOVE_HEX;            moveB1 = MOVE_SHADOW_BONE;      species = SPECIES_BEWEAR;       ability = ABILITY_KLUTZ; }
    PARAMETRIZE { moveA1 = MOVE_BREAKING_SWIPE; moveB1 = MOVE_DRAGON_RUSH;      species = SPECIES_FLORGES;      ability = ABILITY_FLOWER_VEIL; }

    GIVEN {
        AI_FLAGS(0);
        BATTLER_AI_FLAGS(0, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(1, AI_FLAG_SMART_TRAINER);
        BATTLER_AI_FLAGS(2, AI_FLAG_PARTNER_TRAINER);
        BATTLER_AI_FLAGS(3, AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_KANGASKHAN) { Speed(2); Moves(MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_CATERPIE) { Speed(1); Level(1); Moves(MOVE_CELEBRATE, MOVE_CELEBRATE, MOVE_CELEBRATE, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_SHUCKLE) { Speed(3); Speed(3); }
        MULTI_PARTNER(species) { Speed(7); Ability(ability); }
        MULTI_OPPONENT_A(SPECIES_ARCEUS) { Speed(6); Moves(moveA1); }
        MULTI_OPPONENT_B(SPECIES_ARCEUS) { Speed(5); Moves(moveB1); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, moveA1, target:playerRight ); EXPECT_MOVE(opponentRight, moveB1, target:playerRight ); EXPECT_SWITCH(playerRight, 5); }
            TURN { ; }
        }   
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: AI always chooses highest damaging move (multibattle)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: AI always chooses highest damaging move (multibattle)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: AI always chooses highest damaging move (2v1)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OFFENSIVE SETUP: AI always chooses +2 offensive setup over slow kill if both targets are incapacitated (multibattle)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: OFFENSIVE SETUP: AI sometimes chooses +2 offensive setup over slow kill if one target is incapacitated (multibattle)")
{
    PASSES_RANDOMLY(CUSTOM_AI_FIFTY_PERCENT, 100, RNG_AI_CUSTOM_AI_FIFTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OFFENSIVE SETUP: AI always chooses +2 offensive setup over slow kill if both targets are incapacitated (2v1)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: OFFENSIVE SETUP: AI sometimes chooses +2 offensive setup over slow kill if one target is incapacitated (2v1)")
{
    PASSES_RANDOMLY(CUSTOM_AI_FIFTY_PERCENT, 100, RNG_AI_CUSTOM_AI_FIFTY_PERCENT);
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is slow OHKO'd (multibattle)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is slow OHKO'd (2v1)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: SWITCHING MOVES: AI will slow Volt Switch into a mon that is slow OHKO'd (multibattle)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: SWITCHING MOVES: AI will slow Volt Switch into a mon that is slow OHKO'd (2v1)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is outsped and 2HKO'd (multibattle)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: SWITCHING MOVES: AI will not fast Volt Switch into a mon that is outsped and 2HKO'd (2v1)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: SWITCHING MOVES: AI will slow Volt Switch into a mon that is outsped and 2HKO'd (multibattle)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: SWITCHING MOVES: AI will slow Volt Switch into a mon that is outsped and 2HKO'd (2v1)")
{
    GIVEN {
        ASSUME(GetMoveFixedHPDamage(MOVE_SONIC_BOOM) == 20);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        MULTI_PLAYER(SPECIES_SANDSLASH) { HP(30); Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(3); }
        MULTI_PARTNER(SPECIES_METAGROSS) { Moves(MOVE_SONIC_BOOM, MOVE_CELEBRATE); Speed(5); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { HP(20); Moves(MOVE_VOLT_SWITCH, MOVE_THUNDERSHOCK); Speed(3); }
        MULTI_OPPONENT_A(SPECIES_RATTATA) { Moves(MOVE_TACKLE); Speed(6); }
        MULTI_OPPONENT_A(SPECIES_WOBBUFFET) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(1); }
        MULTI_OPPONENT_A(SPECIES_WYNAUT) { HP(40); Moves(MOVE_SONIC_BOOM); Speed(2); }
    } WHEN {
            TURN {  EXPECT_MOVE(opponentLeft, MOVE_VOLT_SWITCH, target:playerRight); }
        } THEN {
            EXPECT_EQ(opponentLeft->species, SPECIES_WOBBUFFET);
    }
}

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: TRICK ROOM: AI uses After You and Trick Room together (multibattle)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: TRICK ROOM: AI uses After You and Trick Room together (2v1)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_MULTI_BATTLE_TEST("TAG TEST: MULTI: AI: TRICK ROOM: Both opponents use Trick Room on the turn it expires 50% of time (multibattle)")
{
    PASSES_RANDOMLY(DOUBLE_TRICK_ROOM_ON_LAST_TURN_CHANCE, 100, RNG_AI_REFRESH_TRICK_ROOM_ON_LAST_TURN);
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

AI_TWO_VS_ONE_BATTLE_TEST("TAG TEST: 2VS1: AI: TRICK ROOM: Both opponents use Trick Room on the turn it expires 50% of time (2v1)")
{
    PASSES_RANDOMLY(DOUBLE_TRICK_ROOM_ON_LAST_TURN_CHANCE, 100, RNG_AI_REFRESH_TRICK_ROOM_ON_LAST_TURN);
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
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

#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_MULTI_BATTLE_TEST("AI will only explode and kill everything on the field with Risky or Will Suicide (multi)")
{
    KNOWN_FAILING; // AI changed
    ASSUME(GetMoveTarget(MOVE_EXPLOSION) == MOVE_TARGET_FOES_AND_ALLY);
    ASSUME(GetMoveEffect(MOVE_EXPLOSION) == EFFECT_EXPLOSION);

    u32 aiFlags;
    u32 battler;

    PARAMETRIZE { aiFlags = 0; battler = 1; }
    PARAMETRIZE { aiFlags = 0; battler = 3; }
    PARAMETRIZE { aiFlags = AI_FLAG_RISKY; battler = 1; }
    PARAMETRIZE { aiFlags = AI_FLAG_RISKY; battler = 3; }
    PARAMETRIZE { aiFlags = AI_FLAG_WILL_SUICIDE; battler = 1; }
    PARAMETRIZE { aiFlags = AI_FLAG_WILL_SUICIDE; battler = 3; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        BATTLER_AI_FLAGS(battler, aiFlags);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { HP(1); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { HP(1); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { Moves(MOVE_EXPLOSION, MOVE_ELECTRO_BALL); HP(1); }
        MULTI_OPPONENT_B(SPECIES_VOLTORB) { Moves(MOVE_EXPLOSION, MOVE_ELECTRO_BALL); HP(1); }
    } WHEN {
        if (aiFlags == 0)
            TURN { EXPECT_MOVE(opponentLeft, MOVE_ELECTRO_BALL, target: playerLeft); EXPECT_MOVE(opponentRight, MOVE_ELECTRO_BALL, target: playerLeft); }
        else
            TURN { EXPECT_MOVE(&gBattleMons[BATTLE_PARTNER(battler)], MOVE_ELECTRO_BALL, target: playerLeft); EXPECT_MOVE(&gBattleMons[battler], MOVE_EXPLOSION); }
    }
}

AI_ONE_VS_TWO_BATTLE_TEST("AI will only explode and kill everything on the field with Risky or Will Suicide (1v2)")
{
    KNOWN_FAILING; // AI changed
    ASSUME(GetMoveTarget(MOVE_EXPLOSION) == MOVE_TARGET_FOES_AND_ALLY);
    ASSUME(GetMoveEffect(MOVE_EXPLOSION) == EFFECT_EXPLOSION);

    u32 aiFlags;
    u32 battler;

    PARAMETRIZE { aiFlags = 0; battler = 1; }
    PARAMETRIZE { aiFlags = 0; battler = 3; }
    PARAMETRIZE { aiFlags = AI_FLAG_RISKY; battler = 3; }
    PARAMETRIZE { aiFlags = AI_FLAG_RISKY; battler = 1; }
    PARAMETRIZE { aiFlags = AI_FLAG_WILL_SUICIDE; battler = 1; }
    PARAMETRIZE { aiFlags = AI_FLAG_WILL_SUICIDE; battler = 3; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        BATTLER_AI_FLAGS(battler, aiFlags);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { HP(1); }
        MULTI_PLAYER(SPECIES_WOBBUFFET) { HP(1); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { Moves(MOVE_EXPLOSION, MOVE_ELECTRO_BALL); HP(1); }
        MULTI_OPPONENT_B(SPECIES_VOLTORB) { Moves(MOVE_EXPLOSION, MOVE_ELECTRO_BALL); HP(1); }
    } WHEN {
        if (aiFlags == 0)
            TURN { EXPECT_MOVE(opponentLeft, MOVE_ELECTRO_BALL, target: playerLeft); EXPECT_MOVE(opponentRight, MOVE_ELECTRO_BALL, target: playerLeft); }
        else
            TURN { EXPECT_MOVE(&gBattleMons[BATTLE_PARTNER(battler)], MOVE_ELECTRO_BALL, target: playerLeft); EXPECT_MOVE(&gBattleMons[battler], MOVE_EXPLOSION); }
    }
}

// Used to test EXPECT_MOVE only on partner
AI_MULTI_BATTLE_TEST("AI partner makes sensible move selections in battle (multi)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        MULTI_PLAYER(SPECIES_HAUNTER);
        MULTI_PLAYER(SPECIES_RATTATA);
        // No moves to damage opponents.
        MULTI_PARTNER(SPECIES_GENGAR) { Moves(MOVE_SHADOW_BALL, MOVE_AURA_SPHERE); }
        MULTI_OPPONENT_A(SPECIES_RATTATA) { Moves(MOVE_CELEBRATE); HP(1); }
        MULTI_OPPONENT_B(SPECIES_KANGASKHAN) { Moves(MOVE_CELEBRATE); }
        
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_AURA_SPHERE, target:opponentRight); EXPECT_MOVE(playerRight, MOVE_AURA_SPHERE, target:opponentLeft); };
    } 
}

// Used to test EXPECT_MOVE only on partner
AI_TWO_VS_ONE_BATTLE_TEST("AI partner makes sensible move selections in battle (2v1)")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        MULTI_PLAYER(SPECIES_HAUNTER);
        MULTI_PLAYER(SPECIES_RATTATA);
        // No moves to damage opponents.
        MULTI_PARTNER(SPECIES_GENGAR) { Moves(MOVE_SHADOW_BALL, MOVE_AURA_SPHERE); }
        MULTI_OPPONENT_A(SPECIES_RATTATA) { Moves(MOVE_CELEBRATE); HP(1); }
        MULTI_OPPONENT_A(SPECIES_KANGASKHAN) { Moves(MOVE_CELEBRATE); }
        
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_AURA_SPHERE, target:opponentRight); EXPECT_MOVE(playerRight, MOVE_AURA_SPHERE, target:opponentLeft); };
    } 
}

AI_TWO_VS_ONE_BATTLE_TEST("Battler 3 has Battler 1 AI flags set correctly (2v1)")
{
    ASSUME(GetMoveTarget(MOVE_EXPLOSION) == MOVE_TARGET_FOES_AND_ALLY);
    ASSUME(GetMoveEffect(MOVE_EXPLOSION) == EFFECT_EXPLOSION);

    u64 aiFlags;
    u32 battler;

    PARAMETRIZE { aiFlags = 0; battler = 1; }
    PARAMETRIZE { aiFlags = 0; battler = 3; }
    PARAMETRIZE { aiFlags = AI_FLAG_TAG_TRAINER; battler = 1; }
    PARAMETRIZE { aiFlags = AI_FLAG_TAG_TRAINER; battler = 3; }

    GIVEN {
        BATTLER_AI_FLAGS(battler, aiFlags);
        MULTI_PLAYER(SPECIES_WOBBUFFET) { Speed(1); HP(1); Moves(MOVE_DRAGON_RAGE, MOVE_CELEBRATE); }
        MULTI_PARTNER(SPECIES_WOBBUFFET) { Speed(3); HP(1); Moves(MOVE_DRAGON_RAGE, MOVE_CELEBRATE); }
        MULTI_OPPONENT_A(SPECIES_VOLTORB) { Speed(2); Moves(MOVE_WATER_GUN, MOVE_AQUA_JET); HP(1); }
        MULTI_OPPONENT_A(SPECIES_ELECTRODE) { Speed(2); Moves(MOVE_WATER_GUN, MOVE_AQUA_JET); HP(1); }
    } WHEN {
        if (aiFlags == 0 || battler == 3)
        {
            TURN { MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE);
                SCORE_EQ_VAL(opponentLeft, MOVE_WATER_GUN, 100, target: playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_WATER_GUN, 100, target: playerRight);
                SCORE_EQ_VAL(opponentRight, MOVE_WATER_GUN, 100, target: playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_WATER_GUN, 100, target: playerRight);
                SCORE_EQ_VAL(opponentLeft, MOVE_AQUA_JET, 100, target: playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_AQUA_JET, 100, target: playerRight);
                SCORE_EQ_VAL(opponentRight, MOVE_AQUA_JET, 100, target: playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_AQUA_JET, 100, target: playerRight); }
        }
        else
        {
            TURN { MOVE(playerLeft, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE);
                SCORE_EQ_VAL(opponentLeft, MOVE_WATER_GUN, 120, target: playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_WATER_GUN, 114, target: playerRight);
                SCORE_EQ_VAL(opponentRight, MOVE_WATER_GUN, 120, target: playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_WATER_GUN, 114, target: playerRight);
                SCORE_EQ_VAL(opponentLeft, MOVE_AQUA_JET, 120, target: playerLeft); 
                SCORE_EQ_VAL(opponentLeft, MOVE_AQUA_JET, 134, target: playerRight);
                SCORE_EQ_VAL(opponentRight, MOVE_AQUA_JET, 120, target: playerLeft); 
                SCORE_EQ_VAL(opponentRight, MOVE_AQUA_JET, 134, target: playerRight); }
        }
    }
}

#include "global.h"
#include "test/battle.h"

static bool32 IsSpeciesMonotypeOf(enum Species species, enum Type type)
{
    return GetSpeciesType(species, 0) == type && GetSpeciesType(species, 1) == type;
}

static u16 GetInverseEffectivenessSound(enum Move move, u32 species)
{
    switch (gTypeEffectivenessTable[GetMoveType(move)][GetSpeciesType(species, 0)])
    {
    case UQ_4_12(2.0):
        return SE_NOT_EFFECTIVE;
    case UQ_4_12(0.0):
    case UQ_4_12(0.5):
        return SE_SUPER_EFFECTIVE;
    case UQ_4_12(1.0):
    default:
        return SE_EFFECTIVE;
    }
}

ASSUMPTIONS
{
    // Pokemon Types
    ASSUME(IsSpeciesMonotypeOf(SPECIES_EEVEE,    TYPE_NORMAL));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_MACHAMP,  TYPE_FIGHTING));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_TORNADUS, TYPE_FLYING));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_ARBOK,    TYPE_POISON));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_DUGTRIO,  TYPE_GROUND));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_SUDOWOODO,TYPE_ROCK));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_PINSIR,   TYPE_BUG));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_DUSKULL,  TYPE_GHOST));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_REGISTEEL,TYPE_STEEL));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_FLAREON,  TYPE_FIRE));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_VAPOREON, TYPE_WATER));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_LEAFEON,  TYPE_GRASS));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_JOLTEON,  TYPE_ELECTRIC));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_ESPEON,   TYPE_PSYCHIC));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_GLACEON,  TYPE_ICE));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_DRUDDIGON,TYPE_DRAGON));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_UMBREON,  TYPE_DARK));
    ASSUME(IsSpeciesMonotypeOf(SPECIES_SYLVEON,  TYPE_FAIRY));

    // Move types
    ASSUME(GetMoveType(MOVE_TACKLE)        == TYPE_NORMAL);
    ASSUME(GetMoveType(MOVE_KARATE_CHOP)   == TYPE_FIGHTING);
    ASSUME(GetMoveType(MOVE_GUST)          == TYPE_FLYING);
    ASSUME(GetMoveType(MOVE_POISON_STING)  == TYPE_POISON);
    ASSUME(GetMoveType(MOVE_MUD_SLAP)      == TYPE_GROUND);
    ASSUME(GetMoveType(MOVE_ROCK_THROW)    == TYPE_ROCK);
    ASSUME(GetMoveType(MOVE_BUG_BITE)      == TYPE_BUG);
    ASSUME(GetMoveType(MOVE_SHADOW_BALL)   == TYPE_GHOST);
    ASSUME(GetMoveType(MOVE_METAL_CLAW)    == TYPE_STEEL);
    ASSUME(GetMoveType(MOVE_EMBER)         == TYPE_FIRE);
    ASSUME(GetMoveType(MOVE_WATER_GUN)     == TYPE_WATER);
    ASSUME(GetMoveType(MOVE_VINE_WHIP)     == TYPE_GRASS);
    ASSUME(GetMoveType(MOVE_THUNDER_SHOCK) == TYPE_ELECTRIC);
    ASSUME(GetMoveType(MOVE_CONFUSION)     == TYPE_PSYCHIC);
    ASSUME(GetMoveType(MOVE_ICE_BEAM)      == TYPE_ICE);
    ASSUME(GetMoveType(MOVE_DRAGON_BREATH) == TYPE_DRAGON);
    ASSUME(GetMoveType(MOVE_BITE)          == TYPE_DARK);
    ASSUME(GetMoveType(MOVE_FAIRY_WIND)    == TYPE_FAIRY);
}

SINGLE_BATTLE_TEST("Inverse battle reverses type matchups")
{
    enum Species species = SPECIES_NONE;
    enum Move move = MOVE_NONE;

    static const u16 monotypeMons[] = {
        SPECIES_EEVEE,
        SPECIES_MACHAMP,
        SPECIES_TORNADUS,
        SPECIES_ARBOK,
        SPECIES_DUGTRIO,
        SPECIES_SUDOWOODO,
        SPECIES_PINSIR,
        SPECIES_DUSKULL,
        SPECIES_REGISTEEL,
        SPECIES_FLAREON,
        SPECIES_VAPOREON,
        SPECIES_LEAFEON,
        SPECIES_JOLTEON,
        SPECIES_ESPEON,
        SPECIES_GLACEON,
        SPECIES_DRUDDIGON,
        SPECIES_UMBREON,
        SPECIES_SYLVEON,
    };

    static const u16 typeMoves[] = {
        MOVE_TACKLE,
        MOVE_KARATE_CHOP,
        MOVE_GUST,
        MOVE_POISON_STING,
        MOVE_MUD_SLAP,
        MOVE_ROCK_THROW,
        MOVE_BUG_BITE,
        MOVE_SHADOW_BALL,
        MOVE_METAL_CLAW,
        MOVE_EMBER,
        MOVE_WATER_GUN,
        MOVE_VINE_WHIP,
        MOVE_THUNDER_SHOCK,
        MOVE_CONFUSION,
        MOVE_ICE_BEAM,
        MOVE_DRAGON_BREATH,
        MOVE_BITE,
        MOVE_FAIRY_WIND,
    };

    for (u32 monIdx = 0; monIdx < ARRAY_COUNT(monotypeMons); monIdx++)
    {
        for (u32 moveIdx = 0; moveIdx < ARRAY_COUNT(typeMoves); moveIdx++)
        {
            PARAMETRIZE { species = monotypeMons[monIdx]; move = typeMoves[moveIdx]; }
        }
    }

    GIVEN {
        FLAG_SET(B_FLAG_INVERSE_BATTLE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species);
    }
    WHEN {
        TURN { MOVE(player, MOVE_WORRY_SEED); }
        TURN { MOVE(player, move); }
    }
    SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WORRY_SEED, player);
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        EFFECTIVENESS_SE(opponent, GetInverseEffectivenessSound(move, species));
        HP_BAR(opponent);
    } THEN {
        EXPECT_EQ(opponent->ability, ABILITY_INSOMNIA);
    }
}

SINGLE_BATTLE_TEST("Inversion Policy reverses type matchups")
{
    enum Species species = SPECIES_NONE;
    enum Move move = MOVE_NONE;
    enum Item itemPlayer = ITEM_NONE, itemOpponent = ITEM_NONE;

    static const u16 monotypeMons[] = {
        SPECIES_EEVEE,
        SPECIES_MACHAMP,
        SPECIES_TORNADUS,
        SPECIES_ARBOK,
        SPECIES_DUGTRIO,
        SPECIES_SUDOWOODO,
        SPECIES_PINSIR,
        SPECIES_DUSKULL,
        SPECIES_REGISTEEL,
        SPECIES_FLAREON,
        SPECIES_VAPOREON,
        SPECIES_LEAFEON,
        SPECIES_JOLTEON,
        SPECIES_ESPEON,
        SPECIES_GLACEON,
        SPECIES_DRUDDIGON,
        SPECIES_UMBREON,
        SPECIES_SYLVEON,
    };

    static const u16 typeMoves[] = {
        MOVE_TACKLE,
        MOVE_KARATE_CHOP,
        MOVE_GUST,
        MOVE_POISON_STING,
        MOVE_MUD_SLAP,
        MOVE_ROCK_THROW,
        MOVE_BUG_BITE,
        MOVE_SHADOW_BALL,
        MOVE_METAL_CLAW,
        MOVE_EMBER,
        MOVE_WATER_GUN,
        MOVE_VINE_WHIP,
        MOVE_THUNDER_SHOCK,
        MOVE_CONFUSION,
        MOVE_ICE_BEAM,
        MOVE_DRAGON_BREATH,
        MOVE_BITE,
        MOVE_FAIRY_WIND,
    };

    for (u32 monIdx = 0; monIdx < ARRAY_COUNT(monotypeMons); monIdx++)
    {
        for (u32 moveIdx = 0; moveIdx < ARRAY_COUNT(typeMoves); moveIdx++)
        {
            PARAMETRIZE { species = monotypeMons[monIdx]; move = typeMoves[moveIdx]; itemPlayer = ITEM_INVERSION_POLICY; itemOpponent = ITEM_NONE; }
            PARAMETRIZE { species = monotypeMons[monIdx]; move = typeMoves[moveIdx]; itemPlayer = ITEM_NONE; itemOpponent = ITEM_INVERSION_POLICY; }
        }
    }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(itemPlayer); }
        OPPONENT(species) { Item(itemOpponent); }
    }
    WHEN {
        TURN { MOVE(player, MOVE_WORRY_SEED); }
        TURN { MOVE(player, move); }
    } SCENE {
        if (itemPlayer == ITEM_INVERSION_POLICY)
            ITEM_POPUP(player, ITEM_INVERSION_POLICY);
        else
            ITEM_POPUP(opponent, ITEM_INVERSION_POLICY);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WORRY_SEED, player);
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        EFFECTIVENESS_SE(opponent, GetInverseEffectivenessSound(move, species));
        HP_BAR(opponent);
    } THEN {
        EXPECT_EQ(opponent->ability, ABILITY_INSOMNIA);
    }
}

SINGLE_BATTLE_TEST("Inversion Policy effect ends when the holding battler switches out (hard switch)")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_INVERSION_POLICY); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_EEVEE);
    }
    WHEN {
        TURN { SWITCH(player, 1); }
        TURN { MOVE(player, MOVE_KARATE_CHOP); }
    } SCENE {
        ITEM_POPUP(player, ITEM_INVERSION_POLICY);
        MESSAGE("Wobbuffet's Inversion Policy changed type match-ups!");
        MESSAGE("The effects of the Inversion Policy wore off!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KARATE_CHOP, player);
        EFFECTIVENESS_SE(opponent, SE_SUPER_EFFECTIVE);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Inversion Policy effect ends when the holding battler switches out (switch move)")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_INVERSION_POLICY); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_CARKOL);
    }
    WHEN {
        TURN { MOVE(player, MOVE_U_TURN); SEND_OUT(player, 1); }
        TURN { MOVE(player, MOVE_KARATE_CHOP); }
    } SCENE {
        ITEM_POPUP(player, ITEM_INVERSION_POLICY);
        MESSAGE("Wobbuffet's Inversion Policy changed type match-ups!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, player);
        EFFECTIVENESS_SE(opponent, SE_SUPER_EFFECTIVE);
        HP_BAR(opponent);
        MESSAGE("The effects of the Inversion Policy wore off!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KARATE_CHOP, player);
        EFFECTIVENESS_SE(opponent, SE_SUPER_EFFECTIVE);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Inversion Policy effect reactivates when a new Policy hits the field (switch move)")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_INVERSION_POLICY); }
        PLAYER(SPECIES_WYNAUT) { Item(ITEM_INVERSION_POLICY); }
        OPPONENT(SPECIES_CARKOL);
    }
    WHEN {
        TURN { MOVE(player, MOVE_U_TURN); SEND_OUT(player, 1); }
        TURN { MOVE(player, MOVE_KARATE_CHOP); }
    } SCENE {
        ITEM_POPUP(player, ITEM_INVERSION_POLICY);
        MESSAGE("Wobbuffet's Inversion Policy changed type match-ups!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, player);
        EFFECTIVENESS_SE(opponent, SE_SUPER_EFFECTIVE);
        HP_BAR(opponent);
        MESSAGE("The effects of the Inversion Policy wore off!");
        MESSAGE("Wynaut's Inversion Policy changed type match-ups!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KARATE_CHOP, player);
        EFFECTIVENESS_SE(opponent, SE_NOT_EFFECTIVE);
        HP_BAR(opponent);
    }
}

DOUBLE_BATTLE_TEST("Inversion Policy effect reactivates when a new Policy hits the field (Doubles)")
{
    GIVEN {
        PLAYER(SPECIES_WYNAUT) { Item(ITEM_INVERSION_POLICY); Speed(4); HP(1); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        PLAYER(SPECIES_HYPNO) { Item(ITEM_INVERSION_POLICY); Speed(4); }
        OPPONENT(SPECIES_CARKOL) {Speed(3); }
        OPPONENT(SPECIES_CARKOL) {Speed(1); }
    }
    WHEN {
        TURN {
            MOVE(playerLeft, MOVE_DOUBLE_EDGE, target: opponentLeft);
            MOVE(opponentLeft, MOVE_KARATE_CHOP, target: playerRight);
            MOVE(playerRight, MOVE_U_TURN, target: opponentLeft);
            SEND_OUT(playerRight, 2);
            MOVE(opponentRight, MOVE_KARATE_CHOP, target: playerRight);
            SEND_OUT(playerLeft, 1);
        }
    } SCENE {
        ITEM_POPUP(playerLeft, ITEM_INVERSION_POLICY);
        MESSAGE("Wynaut's Inversion Policy changed type match-ups!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_EDGE, playerLeft);
        HP_BAR(opponentLeft);
        MESSAGE("The effects of the Inversion Policy wore off!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KARATE_CHOP, opponentLeft);
        EFFECTIVENESS_SE(playerRight, SE_NOT_EFFECTIVE);
        HP_BAR(playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, playerRight);
        EFFECTIVENESS_SE(opponentLeft, SE_NOT_EFFECTIVE);
        ITEM_POPUP(playerRight, ITEM_INVERSION_POLICY);
        MESSAGE("Hypno's Inversion Policy changed type match-ups!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KARATE_CHOP, opponentRight);
        EFFECTIVENESS_SE(playerRight, SE_SUPER_EFFECTIVE);
        HP_BAR(playerRight);
    }
}

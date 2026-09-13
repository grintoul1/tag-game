#include "global.h"
#include "test/battle.h"

TO_DO_BATTLE_TEST("TODO: Write No Guard (Ability) test titles")

SINGLE_BATTLE_TEST("No Guard makes opposing status moves hit")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_SLEEP_POWDER) < 100);
        PLAYER(SPECIES_MACHAMP) { Ability(ABILITY_NO_GUARD); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SLEEP_POWDER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLEEP_POWDER, opponent);
    } THEN {
        EXPECT(player->status1 & STATUS1_SLEEP);
    }
}

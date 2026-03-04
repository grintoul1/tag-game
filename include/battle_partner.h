#ifndef BATTLE_PARTNER_H
#define BATTLE_PARTNER_H

#include "difficulty.h"
#include "constants/battle_partner.h"

extern const struct Trainer gBattlePartners[DIFFICULTY_COUNT][PARTNER_COUNT];
extern u16 gSpecialVar_0x800B;

void FillPartnerParty(u16 trainerId);

static inline bool32 IsStoryMulti(void)
{
    return (gSpecialVar_0x800B > MULTI_PARTY_SIZE && gSpecialVar_0x800B < PARTY_SIZE);
}

#endif // BATTLE_PARTNER_H

//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 9
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 10
        .trainerName = _("STEVEN"),
#line 11
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 15
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 16
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 13
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 18
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 22
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 21
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 20
            .lvl = 42,
#line 19
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 23
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 28
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 32
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 31
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 30
            .lvl = 43,
#line 29
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 33
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 38
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 42
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 41
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 40
            .lvl = 44,
#line 39
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 43
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 48
    [DIFFICULTY_NORMAL][PARTNER_EMMIE] =
    {
#line 49
        .trainerName = _("EMMIE"),
#line 50
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 51
        .trainerPic = TRAINER_PIC_GREEN,
        .encounterMusic_gender =
#line 53
F_TRAINER_FEMALE | 
#line 54
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 55
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 52
        .trainerBackPic = TRAINER_BACK_PIC_GREEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 57
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 61
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 60
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 59
            .lvl = 44,
#line 58
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 62
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 67
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 71
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 70
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 69
            .lvl = 44,
#line 68
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 72
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 77
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 81
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 80
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 79
            .lvl = 44,
#line 78
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 82
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 87
    [DIFFICULTY_NORMAL][PARTNER_TABITHA] =
    {
#line 88
        .trainerName = _("Tabitha"),
#line 89
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 90
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 93
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 94
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 91
        .trainerBackPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 96
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 100
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 99
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 98
            .lvl = 42,
#line 97
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 101
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 106
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 110
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 108
            .lvl = 43,
#line 107
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 111
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 116
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 120
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 119
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 118
            .lvl = 44,
#line 117
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 121
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 126
    [DIFFICULTY_NORMAL][PARTNER_MATT] =
    {
#line 127
        .trainerName = _("Matt"),
#line 128
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 129
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 131
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 132
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .trainerBackPic = TRAINER_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 134
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 138
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 137
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 136
            .lvl = 42,
#line 135
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 139
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 144
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 148
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 146
            .lvl = 43,
#line 145
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 149
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 154
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 158
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 156
            .lvl = 44,
#line 155
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 159
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 164
    [DIFFICULTY_NORMAL][PARTNER_SHELLY] =
    {
#line 165
        .trainerName = _("Shelly"),
#line 166
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 167
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 169
F_TRAINER_FEMALE | 
#line 170
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 171
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 168
        .trainerBackPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 173
            .species = SPECIES_MAGEARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 173
            .heldItem = ITEM_SHUCA_BERRY,
#line 177
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 175
            .lvl = 50,
#line 174
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 178
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 183
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 187
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 185
            .lvl = 43,
#line 184
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 188
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 193
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 197
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 195
            .lvl = 44,
#line 194
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 198
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 203
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_MT_PYRE] =
    {
#line 204
        .trainerName = _("Archie"),
#line 205
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 206
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 209
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 210
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 207
        .trainerBackPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 212
            .species = SPECIES_TORNADUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 212
            .heldItem = ITEM_LIFE_ORB,
#line 216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 213
            .ability = ABILITY_DEFIANT,
#line 214
            .lvl = 65,
#line 215
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 216
                MOVE_FLY,
                MOVE_HEAT_WAVE,
                MOVE_LASH_OUT,
                MOVE_U_TURN,
            },
            },
            {
#line 221
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 221
            .heldItem = ITEM_FOCUS_SASH,
#line 225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 222
            .ability = ABILITY_ROCK_HEAD,
#line 223
            .lvl = 65,
#line 224
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 225
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 230
            .species = SPECIES_BLASTOISE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 230
            .heldItem = ITEM_BLASTOISINITE,
#line 234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 231
            .ability = ABILITY_MEGA_LAUNCHER,
#line 232
            .lvl = 65,
#line 233
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 234
                MOVE_MUDDY_WATER,
                MOVE_ICE_BEAM,
                MOVE_DARK_PULSE,
                MOVE_AURA_SPHERE,
            },
            },
        },
    },
#line 239
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_MT_PYRE] =
    {
#line 240
        .trainerName = _("Maxie"),
#line 241
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 242
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 245
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 246
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 243
        .trainerBackPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 248
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 248
            .heldItem = ITEM_LIFE_ORB,
#line 252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 249
            .ability = ABILITY_SHEER_FORCE,
#line 250
            .lvl = 65,
#line 251
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 252
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 257
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 257
            .heldItem = ITEM_FOCUS_SASH,
#line 261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 258
            .ability = ABILITY_ROCK_HEAD,
#line 259
            .lvl = 65,
#line 260
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 261
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 266
            .species = SPECIES_CHARIZARD_MEGA_X,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 266
            .heldItem = ITEM_CHARIZARDITE_X,
#line 270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 267
            .ability = ABILITY_TOUGH_CLAWS,
#line 268
            .lvl = 65,
#line 269
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 270
                MOVE_FLARE_BLITZ,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_CLAW,
                MOVE_FACADE,
            },
            },
        },
    },
#line 275
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_SKY_PILLAR] =
    {
#line 276
        .trainerName = _("Archie"),
#line 277
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 278
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 281
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 282
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 279
        .trainerBackPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 284
            .species = SPECIES_RAGING_BOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 284
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 285
            .ability = ABILITY_PROTOSYNTHESIS,
#line 286
            .lvl = 87,
#line 287
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 288
                MOVE_THUNDERCLAP,
                MOVE_DRAGON_PULSE,
                MOVE_WEATHER_BALL,
            },
            },
            {
#line 292
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 292
            .heldItem = ITEM_AERODACTYLITE,
#line 296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 293
            .ability = ABILITY_TOUGH_CLAWS,
#line 294
            .lvl = 87,
#line 295
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 296
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 301
            .species = SPECIES_BASCULEGION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 301
            .heldItem = ITEM_FOCUS_SASH,
#line 305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 302
            .ability = ABILITY_SWIFT_SWIM,
#line 303
            .lvl = 86,
#line 304
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 305
                MOVE_LAST_RESPECTS,
                MOVE_FLIP_TURN,
                MOVE_SHADOW_SNEAK,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 310
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_SKY_PILLAR] =
    {
#line 311
        .trainerName = _("Maxie"),
#line 312
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 313
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 316
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 317
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 314
        .trainerBackPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 319
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 319
            .heldItem = ITEM_EJECT_PACK,
#line 322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 320
            .ability = ABILITY_CHLOROPHYLL,
#line 321
            .lvl = 86,
#line 323
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 324
                MOVE_LEAF_STORM,
                MOVE_WEATHER_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_ENTRAINMENT,
            },
            },
            {
#line 329
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 329
            .heldItem = ITEM_AERODACTYLITE,
#line 333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 330
            .ability = ABILITY_TOUGH_CLAWS,
#line 331
            .lvl = 87,
#line 332
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 333
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 338
            .species = SPECIES_WALKING_WAKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 338
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 339
            .ability = ABILITY_PROTOSYNTHESIS,
#line 340
            .lvl = 87,
#line 341
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 342
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_EARTH_POWER,
            },
            },
        },
    },

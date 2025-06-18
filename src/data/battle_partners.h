//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
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
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 14
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 15
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 17
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 21
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 20
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 19
            .lvl = 42,
#line 18
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 22
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 27
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 31
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 30
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 29
            .lvl = 43,
#line 28
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 32
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 37
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 41
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 40
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 39
            .lvl = 44,
#line 38
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 42
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 47
    [DIFFICULTY_NORMAL][PARTNER_EMMIE] =
    {
#line 48
        .trainerName = _("EMMIE"),
#line 49
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 50
        .trainerPic = TRAINER_BACK_PIC_GREEN,
        .encounterMusic_gender =
#line 51
F_TRAINER_FEMALE | 
#line 52
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 53
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 55
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 59
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 58
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 57
            .lvl = 44,
#line 56
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 60
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 65
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 69
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 68
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 67
            .lvl = 44,
#line 66
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 70
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 75
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 79
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 78
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 77
            .lvl = 44,
#line 76
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 80
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 85
    [DIFFICULTY_NORMAL][PARTNER_TABITHA] =
    {
#line 86
        .trainerName = _("Tabitha"),
#line 87
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 88
        .trainerPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 90
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 91
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 97
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 96
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 95
            .lvl = 42,
#line 94
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 98
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 103
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 107
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 105
            .lvl = 43,
#line 104
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 108
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 113
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 117
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 115
            .lvl = 44,
#line 114
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 118
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 123
    [DIFFICULTY_NORMAL][PARTNER_MATT] =
    {
#line 124
        .trainerName = _("Matt"),
#line 125
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 126
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 128
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 129
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 131
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 135
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 133
            .lvl = 42,
#line 132
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 136
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 141
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 145
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 143
            .lvl = 43,
#line 142
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 146
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 151
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 155
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 153
            .lvl = 44,
#line 152
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 156
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 161
    [DIFFICULTY_NORMAL][PARTNER_SHELLY] =
    {
#line 162
        .trainerName = _("Shelly"),
#line 163
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 164
        .trainerPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 165
F_TRAINER_FEMALE | 
#line 166
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 167
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 169
            .species = SPECIES_MAGEARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 169
            .heldItem = ITEM_SHUCA_BERRY,
#line 173
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 171
            .lvl = 50,
#line 170
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 174
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 179
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 183
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 181
            .lvl = 43,
#line 180
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 184
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 189
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 193
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 191
            .lvl = 44,
#line 190
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 194
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 199
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_MT_PYRE] =
    {
#line 200
        .trainerName = _("Archie"),
#line 201
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 202
        .trainerPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 204
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 205
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 207
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 211
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 209
            .lvl = 42,
#line 208
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 212
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 217
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 221
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 219
            .lvl = 43,
#line 218
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 222
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 227
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 231
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 229
            .lvl = 44,
#line 228
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 232
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 237
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_MT_PYRE] =
    {
#line 238
        .trainerName = _("Maxie"),
#line 239
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 240
        .trainerPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 242
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 243
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 245
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 249
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 247
            .lvl = 42,
#line 246
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 250
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 255
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 259
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 257
            .lvl = 43,
#line 256
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 260
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 265
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 269
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 267
            .lvl = 44,
#line 266
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 270
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
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
        .trainerPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 280
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 281
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 283
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 287
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 285
            .lvl = 42,
#line 284
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 288
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 293
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 297
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 295
            .lvl = 43,
#line 294
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 298
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 303
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 307
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 305
            .lvl = 44,
#line 304
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 308
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 313
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_SKY_PILLAR] =
    {
#line 314
        .trainerName = _("Maxie"),
#line 315
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 316
        .trainerPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 318
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 319
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 321
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 325
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 323
            .lvl = 42,
#line 322
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 326
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 331
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 335
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 333
            .lvl = 43,
#line 332
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 336
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 341
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 345
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 343
            .lvl = 44,
#line 342
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 346
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },

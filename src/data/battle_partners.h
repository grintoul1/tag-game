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
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 16
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 20
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 19
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 18
            .lvl = 42,
#line 17
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 21
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 26
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 30
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 29
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 28
            .lvl = 43,
#line 27
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 31
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 36
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 40
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 39
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 38
            .lvl = 44,
#line 37
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 41
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 46
    [DIFFICULTY_NORMAL][PARTNER_EMMIE] =
    {
#line 47
        .trainerName = _("EMMIE"),
#line 48
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 49
        .trainerPic = TRAINER_BACK_PIC_GREEN,
        .encounterMusic_gender =
#line 50
F_TRAINER_FEMALE | 
#line 51
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 52
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 54
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 58
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 57
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 56
            .lvl = 44,
#line 55
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 59
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 64
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 68
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 67
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 66
            .lvl = 44,
#line 65
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 69
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 74
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 78
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 77
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 76
            .lvl = 44,
#line 75
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 79
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 84
    [DIFFICULTY_NORMAL][PARTNER_TABITHA] =
    {
#line 85
        .trainerName = _("Tabitha"),
#line 86
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 87
        .trainerPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 89
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 90
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 92
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 96
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 95
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 94
            .lvl = 42,
#line 93
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 97
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 102
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 106
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 104
            .lvl = 43,
#line 103
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 107
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 112
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 116
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 114
            .lvl = 44,
#line 113
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 117
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 122
    [DIFFICULTY_NORMAL][PARTNER_MATT] =
    {
#line 123
        .trainerName = _("Matt"),
#line 124
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 125
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 127
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 128
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 130
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 134
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 132
            .lvl = 42,
#line 131
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 135
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 140
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 144
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 142
            .lvl = 43,
#line 141
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 145
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 150
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 154
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 152
            .lvl = 44,
#line 151
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 155
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 160
    [DIFFICULTY_NORMAL][PARTNER_SHELLY] =
    {
#line 161
        .trainerName = _("Shelly"),
#line 162
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 163
        .trainerPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 164
F_TRAINER_FEMALE | 
#line 165
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 166
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 168
            .species = SPECIES_MAGEARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 168
            .heldItem = ITEM_SHUCA_BERRY,
#line 172
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 170
            .lvl = 50,
#line 169
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 173
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 178
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 182
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 180
            .lvl = 43,
#line 179
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 183
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 188
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 192
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 190
            .lvl = 44,
#line 189
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 193
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 198
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_MT_PYRE] =
    {
#line 199
        .trainerName = _("Archie"),
#line 200
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 201
        .trainerPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 203
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 204
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 206
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 210
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 208
            .lvl = 42,
#line 207
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 211
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 216
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 220
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 218
            .lvl = 43,
#line 217
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 221
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 226
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 230
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 228
            .lvl = 44,
#line 227
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 231
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 236
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_MT_PYRE] =
    {
#line 237
        .trainerName = _("Maxie"),
#line 238
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 239
        .trainerPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 241
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 242
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 244
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 248
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 246
            .lvl = 42,
#line 245
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 249
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 254
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 258
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 256
            .lvl = 43,
#line 255
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 259
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 264
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 268
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 266
            .lvl = 44,
#line 265
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 269
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 274
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_SKY_PILLAR] =
    {
#line 275
        .trainerName = _("Archie"),
#line 276
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 277
        .trainerPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 279
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 280
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 282
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 286
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 284
            .lvl = 42,
#line 283
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 287
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 292
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 296
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 294
            .lvl = 43,
#line 293
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 297
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 302
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 306
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 304
            .lvl = 44,
#line 303
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 307
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 312
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_SKY_PILLAR] =
    {
#line 313
        .trainerName = _("Maxie"),
#line 314
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 315
        .trainerPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 317
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 318
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 320
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 324
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 322
            .lvl = 42,
#line 321
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 325
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 330
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 334
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 332
            .lvl = 43,
#line 331
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 335
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 340
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 344
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 343
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 342
            .lvl = 44,
#line 341
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 345
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },

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
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 216
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 214
            .lvl = 42,
#line 213
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 217
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 222
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 226
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 224
            .lvl = 43,
#line 223
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 227
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 232
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 236
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 234
            .lvl = 44,
#line 233
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 237
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 242
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_MT_PYRE] =
    {
#line 243
        .trainerName = _("Maxie"),
#line 244
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 245
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 248
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 249
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 246
        .trainerBackPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 251
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 255
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 253
            .lvl = 42,
#line 252
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 256
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 261
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 265
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 263
            .lvl = 43,
#line 262
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 266
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 271
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 275
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 273
            .lvl = 44,
#line 272
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 276
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 281
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_SKY_PILLAR] =
    {
#line 282
        .trainerName = _("Archie"),
#line 283
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 284
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 287
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 288
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 285
        .trainerBackPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 290
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 294
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 292
            .lvl = 42,
#line 291
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 295
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 300
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 304
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 303
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 302
            .lvl = 43,
#line 301
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 305
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 310
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 314
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 312
            .lvl = 44,
#line 311
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 315
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 320
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_SKY_PILLAR] =
    {
#line 321
        .trainerName = _("Maxie"),
#line 322
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 323
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 326
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 327
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 324
        .trainerBackPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 329
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 333
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 331
            .lvl = 42,
#line 330
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 334
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 339
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 343
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 341
            .lvl = 43,
#line 340
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 344
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 349
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 353
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 351
            .lvl = 44,
#line 350
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 354
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },

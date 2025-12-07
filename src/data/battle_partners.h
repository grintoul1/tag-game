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
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 96
            .species = SPECIES_VICTINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 100
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 99
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 98
            .lvl = 44,
#line 97
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 101
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 106
            .species = SPECIES_CHARIZARD,
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
            .species = SPECIES_BLASTOISE,
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
            {
#line 126
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 126
            .heldItem = ITEM_SHUCA_BERRY,
#line 130
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 128
            .lvl = 50,
#line 127
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 131
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 136
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 136
            .heldItem = ITEM_SHUCA_BERRY,
#line 140
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 138
            .lvl = 50,
#line 137
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 141
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 146
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 146
            .heldItem = ITEM_SHUCA_BERRY,
#line 150
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 148
            .lvl = 50,
#line 147
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 151
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },
#line 156
    [DIFFICULTY_NORMAL][PARTNER_MATT] =
    {
#line 157
        .trainerName = _("Matt"),
#line 158
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 159
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 161
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 162
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .trainerBackPic = TRAINER_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 164
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 168
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 166
            .lvl = 42,
#line 165
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 169
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 174
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 178
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 176
            .lvl = 43,
#line 175
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 179
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 184
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 188
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 186
            .lvl = 44,
#line 185
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 189
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 194
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_JAGGED_PASS] =
    {
#line 195
        .trainerName = _("Shelly"),
#line 196
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 197
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 199
F_TRAINER_FEMALE | 
#line 200
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 201
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 198
        .trainerBackPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 203
            .species = SPECIES_MAGEARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 203
            .heldItem = ITEM_SHUCA_BERRY,
#line 207
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 205
            .lvl = 50,
#line 204
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 208
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 213
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 217
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 215
            .lvl = 43,
#line 214
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 218
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 223
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 227
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 225
            .lvl = 44,
#line 224
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 228
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 233
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_MT_PYRE] =
    {
#line 234
        .trainerName = _("Archie"),
#line 235
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 236
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 239
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 240
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 237
        .trainerBackPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 242
            .species = SPECIES_TORNADUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 242
            .heldItem = ITEM_LIFE_ORB,
#line 246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 243
            .ability = ABILITY_DEFIANT,
#line 244
            .lvl = 65,
#line 245
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 246
                MOVE_FLY,
                MOVE_HEAT_WAVE,
                MOVE_LASH_OUT,
                MOVE_U_TURN,
            },
            },
            {
#line 251
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 251
            .heldItem = ITEM_FOCUS_SASH,
#line 255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 252
            .ability = ABILITY_ROCK_HEAD,
#line 253
            .lvl = 65,
#line 254
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 255
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 260
            .species = SPECIES_BLASTOISE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 260
            .heldItem = ITEM_BLASTOISINITE,
#line 264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 261
            .ability = ABILITY_MEGA_LAUNCHER,
#line 262
            .lvl = 65,
#line 263
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 264
                MOVE_MUDDY_WATER,
                MOVE_ICE_BEAM,
                MOVE_DARK_PULSE,
                MOVE_AURA_SPHERE,
            },
            },
        },
    },
#line 269
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_MT_PYRE] =
    {
#line 270
        .trainerName = _("Maxie"),
#line 271
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 272
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 275
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 276
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 273
        .trainerBackPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 278
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 278
            .heldItem = ITEM_LIFE_ORB,
#line 282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 279
            .ability = ABILITY_SHEER_FORCE,
#line 280
            .lvl = 65,
#line 281
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 282
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 287
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 287
            .heldItem = ITEM_FOCUS_SASH,
#line 291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 288
            .ability = ABILITY_ROCK_HEAD,
#line 289
            .lvl = 65,
#line 290
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 291
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 296
            .species = SPECIES_CHARIZARD_MEGA_X,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 296
            .heldItem = ITEM_CHARIZARDITE_X,
#line 300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 297
            .ability = ABILITY_TOUGH_CLAWS,
#line 298
            .lvl = 65,
#line 299
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 300
                MOVE_FLARE_BLITZ,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_CLAW,
                MOVE_FACADE,
            },
            },
        },
    },
#line 305
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_SKY_PILLAR] =
    {
#line 306
        .trainerName = _("Archie"),
#line 307
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 308
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 311
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 312
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 309
        .trainerBackPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 314
            .species = SPECIES_RAGING_BOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 314
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 315
            .ability = ABILITY_PROTOSYNTHESIS,
#line 316
            .lvl = 87,
#line 317
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 318
                MOVE_THUNDERCLAP,
                MOVE_DRAGON_PULSE,
                MOVE_WEATHER_BALL,
            },
            },
            {
#line 322
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 322
            .heldItem = ITEM_AERODACTYLITE,
#line 326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 323
            .ability = ABILITY_TOUGH_CLAWS,
#line 324
            .lvl = 87,
#line 325
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 326
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 331
            .species = SPECIES_BASCULEGION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 331
            .heldItem = ITEM_FOCUS_SASH,
#line 335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 332
            .ability = ABILITY_ADAPTABILITY,
#line 333
            .lvl = 86,
#line 334
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 335
                MOVE_LAST_RESPECTS,
                MOVE_FLIP_TURN,
                MOVE_SHADOW_SNEAK,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 340
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_SKY_PILLAR] =
    {
#line 341
        .trainerName = _("Maxie"),
#line 342
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 343
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 346
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 347
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 344
        .trainerBackPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 349
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 349
            .heldItem = ITEM_EJECT_PACK,
#line 352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 350
            .ability = ABILITY_CHLOROPHYLL,
#line 351
            .lvl = 86,
#line 353
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 354
                MOVE_LEAF_STORM,
                MOVE_WEATHER_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_ENTRAINMENT,
            },
            },
            {
#line 359
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 359
            .heldItem = ITEM_AERODACTYLITE,
#line 363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 360
            .ability = ABILITY_TOUGH_CLAWS,
#line 361
            .lvl = 87,
#line 362
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 363
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 368
            .species = SPECIES_WALKING_WAKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 368
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 369
            .ability = ABILITY_PROTOSYNTHESIS,
#line 370
            .lvl = 87,
#line 371
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 372
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_EARTH_POWER,
            },
            },
        },
    },
#line 376
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_MHO] =
    {
#line 377
        .trainerName = _("Shelly"),
#line 378
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 379
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 381
F_TRAINER_FEMALE | 
#line 382
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 383
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 380
        .trainerBackPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 385
            .species = SPECIES_MAGEARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 385
            .heldItem = ITEM_SHUCA_BERRY,
#line 389
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 387
            .lvl = 50,
#line 386
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 390
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 395
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 399
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 398
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 397
            .lvl = 43,
#line 396
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 400
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 405
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 409
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 407
            .lvl = 44,
#line 406
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 410
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 415
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 415
            .heldItem = ITEM_SHUCA_BERRY,
#line 419
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 417
            .lvl = 50,
#line 416
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 420
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 425
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 425
            .heldItem = ITEM_SHUCA_BERRY,
#line 429
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 427
            .lvl = 50,
#line 426
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 430
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 435
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 435
            .heldItem = ITEM_SHUCA_BERRY,
#line 439
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 437
            .lvl = 50,
#line 436
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 440
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },

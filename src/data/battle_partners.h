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
        .trainerPic = TRAINER_PIC_FRONT_BRENDAN,
#line 6
        .gender = TRAINER_GENDER_MALE,
#line 7
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5
        .trainerBackPic = TRAINER_PIC_BACK_BRENDAN,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 9
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 10
        .trainerName = _("Steven"),
#line 11
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12
        .trainerPic = TRAINER_PIC_FRONT_STEVEN,
#line 14
        .gender = TRAINER_GENDER_MALE,
#line 15
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 16
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 13
        .trainerBackPic = TRAINER_PIC_BACK_STEVEN,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 18
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 18
            .heldItem = ITEM_NORMAL_GEM,
#line 22
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 19
            .ability = ABILITY_JUSTIFIED,
#line 20
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 21
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 22
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 27
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 27
            .heldItem = ITEM_POWER_HERB,
#line 31
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 28
            .ability = ABILITY_WEAK_ARMOR,
#line 29
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 30
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 31
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 36
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 36
            .heldItem = ITEM_CHOPLE_BERRY,
#line 40
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 37
            .ability = ABILITY_ANALYTIC,
#line 38
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 39
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 40
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 45
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 45
            .heldItem = ITEM_FOCUS_SASH,
#line 49
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 46
            .ability = ABILITY_SYNCHRONIZE,
#line 47
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 48
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 49
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 54
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 54
            .heldItem = ITEM_WIDE_LENS,
#line 58
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 55
            .ability = ABILITY_SLUSH_RUSH,
#line 56
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 57
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 58
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 63
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 63
            .heldItem = ITEM_PIDGEOTITE,
#line 67
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 64
            .ability = ABILITY_NO_GUARD,
#line 65
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 66
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 68
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 73
    [DIFFICULTY_NORMAL][PARTNER_EMMIE] =
    {
#line 74
        .trainerName = _("Emmie"),
#line 75
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 76
        .trainerPic = TRAINER_PIC_FRONT_GREEN,
#line 78
        .gender = TRAINER_GENDER_FEMALE,
#line 79
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 80
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 77
        .trainerBackPic = TRAINER_PIC_BACK_GREEN,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 82
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 86
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 85
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 84
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 83
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 87
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 92
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 96
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 95
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 94
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 93
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 97
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 102
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 106
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 104
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 103
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 107
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 112
    [DIFFICULTY_NORMAL][PARTNER_TABITHA] =
    {
#line 113
        .trainerName = _("Tabitha"),
#line 114
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 115
        .trainerPic = TRAINER_PIC_FRONT_MAGMA_ADMIN,
#line 117
        .gender = TRAINER_GENDER_MALE,
#line 118
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 119
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 116
        .trainerBackPic = TRAINER_PIC_BACK_MAGMA_ADMIN,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 121
            .species = SPECIES_VICTINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 125
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 123
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 122
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 126
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 131
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 135
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 133
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 132
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 136
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 141
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 145
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 143
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 142
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 146
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 151
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 151
            .heldItem = ITEM_SHUCA_BERRY,
#line 155
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 153
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 152
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 156
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 161
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 161
            .heldItem = ITEM_SHUCA_BERRY,
#line 165
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 163
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 162
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 166
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 171
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 171
            .heldItem = ITEM_SHUCA_BERRY,
#line 175
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 173
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 172
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 176
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },
#line 181
    [DIFFICULTY_NORMAL][PARTNER_MATT] =
    {
#line 182
        .trainerName = _("Matt"),
#line 183
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 184
        .trainerPic = TRAINER_PIC_FRONT_STEVEN,
#line 185
        .gender = TRAINER_GENDER_MALE,
#line 186
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 187
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .trainerBackPic = TRAINER_PIC_FRONT_STEVEN,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 189
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 193
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 191
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 190
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 194
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 199
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 203
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 201
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 200
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 204
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 209
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 213
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 211
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 210
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 214
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 219
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_JAGGED_PASS] =
    {
#line 220
        .trainerName = _("Shelly"),
#line 221
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 222
        .trainerPic = TRAINER_PIC_FRONT_AQUA_ADMIN_F,
#line 224
        .gender = TRAINER_GENDER_FEMALE,
#line 225
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 226
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 223
        .trainerBackPic = TRAINER_PIC_BACK_AQUA_LEADER_ARCHIE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 228
            .species = SPECIES_MAGEARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 228
            .heldItem = ITEM_SHUCA_BERRY,
#line 232
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 230
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 229
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 233
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 238
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 242
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 240
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 239
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 243
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 248
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 252
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 250
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 249
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 253
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 258
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_MT_PYRE] =
    {
#line 259
        .trainerName = _("Archie"),
#line 260
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 261
        .trainerPic = TRAINER_PIC_FRONT_AQUA_LEADER_ARCHIE,
#line 263
        .gender = TRAINER_GENDER_MALE,
#line 264
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 265
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 262
        .trainerBackPic = TRAINER_PIC_BACK_AQUA_LEADER_ARCHIE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 267
            .species = SPECIES_TORNADUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 267
            .heldItem = ITEM_LIFE_ORB,
#line 271
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 268
            .ability = ABILITY_DEFIANT,
#line 269
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 270
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 271
                MOVE_FLY,
                MOVE_HEAT_WAVE,
                MOVE_LASH_OUT,
                MOVE_U_TURN,
            },
            },
            {
#line 276
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 276
            .heldItem = ITEM_FOCUS_SASH,
#line 280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 277
            .ability = ABILITY_ROCK_HEAD,
#line 278
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 279
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 280
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 285
            .species = SPECIES_BLASTOISE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 285
            .heldItem = ITEM_BLASTOISINITE,
#line 289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 286
            .ability = ABILITY_MEGA_LAUNCHER,
#line 287
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 288
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 289
                MOVE_MUDDY_WATER,
                MOVE_ICE_BEAM,
                MOVE_DARK_PULSE,
                MOVE_AURA_SPHERE,
            },
            },
        },
    },
#line 294
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_MT_PYRE] =
    {
#line 295
        .trainerName = _("Maxie"),
#line 296
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 297
        .trainerPic = TRAINER_PIC_FRONT_MAGMA_LEADER_MAXIE,
#line 299
        .gender = TRAINER_GENDER_MALE,
#line 300
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 301
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 298
        .trainerBackPic = TRAINER_PIC_BACK_MAGMA_LEADER_MAXIE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 303
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 303
            .heldItem = ITEM_LIFE_ORB,
#line 307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 304
            .ability = ABILITY_SHEER_FORCE,
#line 305
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 306
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 307
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 312
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 312
            .heldItem = ITEM_FOCUS_SASH,
#line 316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 313
            .ability = ABILITY_ROCK_HEAD,
#line 314
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 315
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 316
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 321
            .species = SPECIES_CHARIZARD_MEGA_X,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 321
            .heldItem = ITEM_CHARIZARDITE_X,
#line 325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 322
            .ability = ABILITY_TOUGH_CLAWS,
#line 323
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 324
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 325
                MOVE_FLARE_BLITZ,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_CLAW,
                MOVE_FACADE,
            },
            },
        },
    },
#line 330
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_SKY_PILLAR] =
    {
#line 331
        .trainerName = _("Archie"),
#line 332
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 333
        .trainerPic = TRAINER_PIC_FRONT_AQUA_LEADER_ARCHIE,
#line 335
        .gender = TRAINER_GENDER_MALE,
#line 336
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 337
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 334
        .trainerBackPic = TRAINER_PIC_BACK_AQUA_LEADER_ARCHIE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 339
            .species = SPECIES_RAGING_BOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 339
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 343
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 340
            .ability = ABILITY_PROTOSYNTHESIS,
#line 341
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 342
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 343
                MOVE_THUNDERCLAP,
                MOVE_DRAGON_PULSE,
                MOVE_WEATHER_BALL,
            },
            },
            {
#line 347
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 347
            .heldItem = ITEM_AERODACTYLITE,
#line 351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 348
            .ability = ABILITY_TOUGH_CLAWS,
#line 349
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 350
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 351
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 356
            .species = SPECIES_BASCULEGION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 356
            .heldItem = ITEM_FOCUS_SASH,
#line 360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 357
            .ability = ABILITY_ADAPTABILITY,
#line 358
            .lvl = 86,
            .ball = POKEBALL_COUNT,
#line 359
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 360
                MOVE_LAST_RESPECTS,
                MOVE_FLIP_TURN,
                MOVE_SHADOW_SNEAK,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 365
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_SKY_PILLAR] =
    {
#line 366
        .trainerName = _("Maxie"),
#line 367
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 368
        .trainerPic = TRAINER_PIC_FRONT_MAGMA_LEADER_MAXIE,
#line 370
        .gender = TRAINER_GENDER_MALE,
#line 371
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 372
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 369
        .trainerBackPic = TRAINER_PIC_BACK_MAGMA_LEADER_MAXIE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 374
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 374
            .heldItem = ITEM_EJECT_PACK,
#line 377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 375
            .ability = ABILITY_CHLOROPHYLL,
#line 376
            .lvl = 86,
            .ball = POKEBALL_COUNT,
#line 378
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 379
                MOVE_LEAF_STORM,
                MOVE_WEATHER_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_ENTRAINMENT,
            },
            },
            {
#line 384
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 384
            .heldItem = ITEM_AERODACTYLITE,
#line 388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 385
            .ability = ABILITY_TOUGH_CLAWS,
#line 386
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 387
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 388
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 393
            .species = SPECIES_WALKING_WAKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 393
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 397
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 394
            .ability = ABILITY_PROTOSYNTHESIS,
#line 395
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 396
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 397
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_EARTH_POWER,
            },
            },
        },
    },
#line 401
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_MHO] =
    {
#line 402
        .trainerName = _("Shelly"),
#line 403
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 404
        .trainerPic = TRAINER_PIC_FRONT_AQUA_ADMIN_F,
#line 406
        .gender = TRAINER_GENDER_FEMALE,
#line 407
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 408
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 405
        .trainerBackPic = TRAINER_PIC_BACK_AQUA_LEADER_ARCHIE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 410
            .species = SPECIES_MAGEARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 410
            .heldItem = ITEM_SHUCA_BERRY,
#line 414
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 412
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 411
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 415
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 420
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 424
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 422
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 421
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 425
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 430
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 434
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 432
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 431
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 435
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 440
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 440
            .heldItem = ITEM_SHUCA_BERRY,
#line 444
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 442
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 441
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 445
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 450
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 450
            .heldItem = ITEM_SHUCA_BERRY,
#line 454
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 452
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 451
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 455
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 460
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 460
            .heldItem = ITEM_SHUCA_BERRY,
#line 464
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 462
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 461
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 465
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },

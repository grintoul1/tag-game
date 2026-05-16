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
#line 5
        .gender = TRAINER_GENDER_MALE,
#line 6
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("Steven"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_PIC_STEVEN,
#line 12
        .gender = TRAINER_GENDER_MALE,
#line 13
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 16
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 16
            .heldItem = ITEM_NORMAL_GEM,
#line 20
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .ability = ABILITY_JUSTIFIED,
#line 18
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 19
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 20
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 25
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 25
            .heldItem = ITEM_POWER_HERB,
#line 29
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 26
            .ability = ABILITY_WEAK_ARMOR,
#line 27
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 28
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 29
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 34
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 34
            .heldItem = ITEM_CHOPLE_BERRY,
#line 38
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 35
            .ability = ABILITY_ANALYTIC,
#line 36
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 37
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 38
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 43
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 43
            .heldItem = ITEM_FOCUS_SASH,
#line 47
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 44
            .ability = ABILITY_SYNCHRONIZE,
#line 45
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 46
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 47
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 52
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 52
            .heldItem = ITEM_WIDE_LENS,
#line 56
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 53
            .ability = ABILITY_SLUSH_RUSH,
#line 54
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 55
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 56
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 61
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 61
            .heldItem = ITEM_PIDGEOTITE,
#line 65
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 62
            .ability = ABILITY_NO_GUARD,
#line 63
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 64
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 66
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 71
    [DIFFICULTY_NORMAL][PARTNER_EMMIE] =
    {
#line 72
        .trainerName = _("Emmie"),
#line 73
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 74
        .trainerPic = TRAINER_PIC_GREEN,
#line 75
        .gender = TRAINER_GENDER_FEMALE,
#line 76
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 77
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 79
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 83
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 82
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 81
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 80
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 84
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 89
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 93
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 92
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 91
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 90
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 94
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 99
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 103
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 101
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 100
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 104
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 109
    [DIFFICULTY_NORMAL][PARTNER_TABITHA] =
    {
#line 110
        .trainerName = _("Tabitha"),
#line 111
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 112
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
#line 113
        .gender = TRAINER_GENDER_MALE,
#line 114
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 115
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 117
            .species = SPECIES_VICTINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 121
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 119
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 118
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 122
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 127
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 131
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 129
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 128
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 132
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 137
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 141
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 139
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 138
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 142
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 147
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 147
            .heldItem = ITEM_SHUCA_BERRY,
#line 151
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 149
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 148
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 152
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 157
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 157
            .heldItem = ITEM_SHUCA_BERRY,
#line 161
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 159
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 158
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 162
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 167
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 167
            .heldItem = ITEM_SHUCA_BERRY,
#line 171
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 169
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 168
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 172
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },
#line 177
    [DIFFICULTY_NORMAL][PARTNER_TABITHA_AHO_BOSS] =
    {
#line 178
        .trainerName = _("Tabitha"),
#line 179
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 180
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
#line 181
        .gender = TRAINER_GENDER_MALE,
#line 182
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 183
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 185
            .species = SPECIES_VICTINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 189
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 187
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 186
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 190
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 195
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 199
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 197
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 196
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 200
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 205
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 209
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 207
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 206
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 210
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 215
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 215
            .heldItem = ITEM_SHUCA_BERRY,
#line 219
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 217
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 216
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 220
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 225
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 225
            .heldItem = ITEM_SHUCA_BERRY,
#line 229
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 227
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 226
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 230
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 235
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 235
            .heldItem = ITEM_SHUCA_BERRY,
#line 239
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 237
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 236
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 240
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
        },
    },
#line 245
    [DIFFICULTY_NORMAL][PARTNER_MATT] =
    {
#line 246
        .trainerName = _("Matt"),
#line 247
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 248
        .trainerPic = TRAINER_PIC_STEVEN,
#line 249
        .gender = TRAINER_GENDER_MALE,
#line 250
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 251
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 253
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 257
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 255
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 254
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 258
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 263
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 267
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 265
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 264
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 268
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 273
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 277
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 275
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 274
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 278
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 283
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_JAGGED_PASS] =
    {
#line 284
        .trainerName = _("Shelly"),
#line 285
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 286
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
#line 287
        .gender = TRAINER_GENDER_FEMALE,
#line 288
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 289
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 291
            .species = SPECIES_AUDINO_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 291
            .heldItem = ITEM_AUDINITE,
#line 295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 292
            .ability = ABILITY_HEALER,
#line 293
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 294
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 296
                MOVE_MOONBLAST,
                MOVE_AFTER_YOU,
                MOVE_HELPING_HAND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 301
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 301
            .heldItem = ITEM_POWER_HERB,
#line 305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 302
            .ability = ABILITY_STEELWORKER,
#line 303
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 304
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 306
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SEED_BOMB,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 311
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 311
            .heldItem = ITEM_EXPERT_BELT,
#line 315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 312
            .ability = ABILITY_TECHNICIAN,
#line 313
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 314
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 315
                MOVE_U_TURN,
                MOVE_KNOCK_OFF,
                MOVE_DUAL_CHOP,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 320
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_MT_PYRE] =
    {
#line 321
        .trainerName = _("Archie"),
#line 322
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 323
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
#line 324
        .gender = TRAINER_GENDER_MALE,
#line 325
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 326
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 328
            .species = SPECIES_TORNADUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 328
            .heldItem = ITEM_LIFE_ORB,
#line 332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 329
            .ability = ABILITY_DEFIANT,
#line 330
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 331
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 332
                MOVE_FLY,
                MOVE_HEAT_WAVE,
                MOVE_LASH_OUT,
                MOVE_U_TURN,
            },
            },
            {
#line 337
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 337
            .heldItem = ITEM_FOCUS_SASH,
#line 341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 338
            .ability = ABILITY_ROCK_HEAD,
#line 339
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 340
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 341
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 346
            .species = SPECIES_BLASTOISE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 346
            .heldItem = ITEM_BLASTOISINITE,
#line 350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 347
            .ability = ABILITY_MEGA_LAUNCHER,
#line 348
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 349
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 350
                MOVE_MUDDY_WATER,
                MOVE_ICE_BEAM,
                MOVE_DARK_PULSE,
                MOVE_AURA_SPHERE,
            },
            },
        },
    },
#line 355
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_MT_PYRE] =
    {
#line 356
        .trainerName = _("Maxie"),
#line 357
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 358
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
#line 359
        .gender = TRAINER_GENDER_MALE,
#line 360
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 361
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 363
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 363
            .heldItem = ITEM_LIFE_ORB,
#line 367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 364
            .ability = ABILITY_SHEER_FORCE,
#line 365
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 366
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 367
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 372
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 372
            .heldItem = ITEM_FOCUS_SASH,
#line 376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 373
            .ability = ABILITY_ROCK_HEAD,
#line 374
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 375
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 376
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 381
            .species = SPECIES_CHARIZARD_MEGA_X,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 381
            .heldItem = ITEM_CHARIZARDITE_X,
#line 385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 382
            .ability = ABILITY_TOUGH_CLAWS,
#line 383
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 384
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 385
                MOVE_FLARE_BLITZ,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_CLAW,
                MOVE_FACADE,
            },
            },
        },
    },
#line 390
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_SKY_PILLAR] =
    {
#line 391
        .trainerName = _("Archie"),
#line 392
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 393
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
#line 394
        .gender = TRAINER_GENDER_MALE,
#line 395
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 396
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 398
            .species = SPECIES_RAGING_BOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 398
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 399
            .ability = ABILITY_PROTOSYNTHESIS,
#line 400
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 401
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 402
                MOVE_THUNDERCLAP,
                MOVE_DRAGON_PULSE,
                MOVE_WEATHER_BALL,
            },
            },
            {
#line 406
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 406
            .heldItem = ITEM_AERODACTYLITE,
#line 410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 407
            .ability = ABILITY_TOUGH_CLAWS,
#line 408
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 409
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 410
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 415
            .species = SPECIES_BASCULEGION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 415
            .heldItem = ITEM_FOCUS_SASH,
#line 419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 416
            .ability = ABILITY_ADAPTABILITY,
#line 417
            .lvl = 86,
            .ball = POKEBALL_COUNT,
#line 418
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 419
                MOVE_LAST_RESPECTS,
                MOVE_FLIP_TURN,
                MOVE_SHADOW_SNEAK,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 424
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_SKY_PILLAR] =
    {
#line 425
        .trainerName = _("Maxie"),
#line 426
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 427
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
#line 428
        .gender = TRAINER_GENDER_MALE,
#line 429
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 430
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 432
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 432
            .heldItem = ITEM_EJECT_PACK,
#line 435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 433
            .ability = ABILITY_CHLOROPHYLL,
#line 434
            .lvl = 86,
            .ball = POKEBALL_COUNT,
#line 436
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 437
                MOVE_LEAF_STORM,
                MOVE_WEATHER_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_ENTRAINMENT,
            },
            },
            {
#line 442
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 442
            .heldItem = ITEM_AERODACTYLITE,
#line 446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 443
            .ability = ABILITY_TOUGH_CLAWS,
#line 444
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 445
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 446
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 451
            .species = SPECIES_WALKING_WAKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 451
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 452
            .ability = ABILITY_PROTOSYNTHESIS,
#line 453
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 454
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 455
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_EARTH_POWER,
            },
            },
        },
    },
#line 459
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_MHO] =
    {
#line 460
        .trainerName = _("Shelly"),
#line 461
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 462
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
#line 463
        .gender = TRAINER_GENDER_FEMALE,
#line 464
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 465
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 467
            .species = SPECIES_AUDINO_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 467
            .heldItem = ITEM_AUDINITE,
#line 471
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 468
            .ability = ABILITY_HEALER,
#line 469
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 470
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 472
                MOVE_MOONBLAST,
                MOVE_AFTER_YOU,
                MOVE_HELPING_HAND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 477
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 477
            .heldItem = ITEM_EXPERT_BELT,
#line 481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 478
            .ability = ABILITY_TECHNICIAN,
#line 479
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 480
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 481
                MOVE_U_TURN,
                MOVE_KNOCK_OFF,
                MOVE_DUAL_CHOP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 486
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 486
            .heldItem = ITEM_SHARP_BEAK,
#line 490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 487
            .ability = ABILITY_TINTED_LENS,
#line 488
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 489
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 490
                MOVE_SYNCHRONOISE,
                MOVE_AIR_SLASH,
                MOVE_IMPRISON,
                MOVE_TAILWIND,
            },
            },
            {
#line 495
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 495
            .heldItem = ITEM_LEFTOVERS,
#line 499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 496
            .ability = ABILITY_COMPETITIVE,
#line 497
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 498
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 499
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_ICY_WIND,
                MOVE_DEFOG,
            },
            },
            {
#line 504
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 504
            .heldItem = ITEM_POWER_HERB,
#line 508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 505
            .ability = ABILITY_STEELWORKER,
#line 506
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 507
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 509
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SEED_BOMB,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 514
            .species = SPECIES_MUK_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 514
            .heldItem = ITEM_ZOOM_LENS,
#line 518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 515
            .ability = ABILITY_POWER_OF_ALCHEMY,
#line 516
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 517
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 518
                MOVE_POISON_JAB,
                MOVE_KNOCK_OFF,
                MOVE_HELPING_HAND,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 523
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_MHO_BOSS] =
    {
#line 524
        .trainerName = _("Shelly"),
#line 525
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 526
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
#line 527
        .gender = TRAINER_GENDER_FEMALE,
#line 528
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 529
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 531
            .species = SPECIES_AUDINO_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 531
            .heldItem = ITEM_AUDINITE,
#line 535
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 532
            .ability = ABILITY_HEALER,
#line 533
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 534
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 536
                MOVE_MOONBLAST,
                MOVE_AFTER_YOU,
                MOVE_HELPING_HAND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 541
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 541
            .heldItem = ITEM_EXPERT_BELT,
#line 545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 542
            .ability = ABILITY_TECHNICIAN,
#line 543
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 544
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 545
                MOVE_U_TURN,
                MOVE_KNOCK_OFF,
                MOVE_DUAL_CHOP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 550
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 550
            .heldItem = ITEM_SHARP_BEAK,
#line 554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 551
            .ability = ABILITY_TINTED_LENS,
#line 552
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 553
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 554
                MOVE_SYNCHRONOISE,
                MOVE_AIR_SLASH,
                MOVE_IMPRISON,
                MOVE_TAILWIND,
            },
            },
            {
#line 559
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 559
            .heldItem = ITEM_LEFTOVERS,
#line 563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 560
            .ability = ABILITY_COMPETITIVE,
#line 561
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 562
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 563
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_ICY_WIND,
                MOVE_DEFOG,
            },
            },
            {
#line 568
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 568
            .heldItem = ITEM_POWER_HERB,
#line 572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 569
            .ability = ABILITY_STEELWORKER,
#line 570
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 571
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 573
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SEED_BOMB,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 578
            .species = SPECIES_MUK_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 578
            .heldItem = ITEM_ZOOM_LENS,
#line 582
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 579
            .ability = ABILITY_POWER_OF_ALCHEMY,
#line 580
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 581
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 582
                MOVE_POISON_JAB,
                MOVE_KNOCK_OFF,
                MOVE_HELPING_HAND,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 587
    [DIFFICULTY_NORMAL][PARTNER_STEVEN_TWELVE] =
    {
#line 588
        .trainerName = _("Steven"),
#line 589
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 590
        .trainerPic = TRAINER_PIC_STEVEN,
#line 591
        .gender = TRAINER_GENDER_MALE,
#line 592
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 593
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 595
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 595
            .heldItem = ITEM_NORMAL_GEM,
#line 599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 596
            .ability = ABILITY_JUSTIFIED,
#line 597
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 598
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 599
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 604
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 604
            .heldItem = ITEM_POWER_HERB,
#line 608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 605
            .ability = ABILITY_WEAK_ARMOR,
#line 606
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 607
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 608
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 613
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 613
            .heldItem = ITEM_CHOPLE_BERRY,
#line 617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 614
            .ability = ABILITY_ANALYTIC,
#line 615
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 616
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 617
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 622
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 622
            .heldItem = ITEM_FOCUS_SASH,
#line 626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 623
            .ability = ABILITY_SYNCHRONIZE,
#line 624
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 625
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 626
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 631
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 631
            .heldItem = ITEM_WIDE_LENS,
#line 635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 632
            .ability = ABILITY_SLUSH_RUSH,
#line 633
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 634
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 635
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 640
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 640
            .heldItem = ITEM_PIDGEOTITE,
#line 644
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 641
            .ability = ABILITY_NO_GUARD,
#line 642
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 643
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 645
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 650
    [DIFFICULTY_NORMAL][PARTNER_STEVEN_B2B] =
    {
#line 651
        .trainerName = _("Steven"),
#line 652
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 653
        .trainerPic = TRAINER_PIC_STEVEN,
#line 654
        .gender = TRAINER_GENDER_MALE,
#line 655
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 656
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 658
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 658
            .heldItem = ITEM_NORMAL_GEM,
#line 662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 659
            .ability = ABILITY_JUSTIFIED,
#line 660
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 661
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 662
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 667
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 667
            .heldItem = ITEM_POWER_HERB,
#line 671
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 668
            .ability = ABILITY_WEAK_ARMOR,
#line 669
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 670
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 671
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 676
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 676
            .heldItem = ITEM_CHOPLE_BERRY,
#line 680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 677
            .ability = ABILITY_ANALYTIC,
#line 678
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 679
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 680
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 685
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 685
            .heldItem = ITEM_FOCUS_SASH,
#line 689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 686
            .ability = ABILITY_SYNCHRONIZE,
#line 687
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 688
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 689
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 694
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 694
            .heldItem = ITEM_WIDE_LENS,
#line 698
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 695
            .ability = ABILITY_SLUSH_RUSH,
#line 696
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 697
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 698
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 703
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 703
            .heldItem = ITEM_PIDGEOTITE,
#line 707
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 704
            .ability = ABILITY_NO_GUARD,
#line 705
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 706
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 708
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 713
    [DIFFICULTY_NORMAL][PARTNER_BLUE_TWELVE] =
    {
#line 714
        .trainerName = _("Blue"),
#line 715
        .trainerClass = TRAINER_CLASS_KANTONIAN,
#line 716
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL_FRLG,
#line 717
        .gender = TRAINER_GENDER_MALE,
#line 718
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 719
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 721
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 721
            .heldItem = ITEM_NORMAL_GEM,
#line 725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 722
            .ability = ABILITY_JUSTIFIED,
#line 723
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 724
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 725
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 730
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 730
            .heldItem = ITEM_POWER_HERB,
#line 734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 731
            .ability = ABILITY_WEAK_ARMOR,
#line 732
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 733
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 734
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 739
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 739
            .heldItem = ITEM_CHOPLE_BERRY,
#line 743
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 740
            .ability = ABILITY_ANALYTIC,
#line 741
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 742
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 743
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 748
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 748
            .heldItem = ITEM_FOCUS_SASH,
#line 752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 749
            .ability = ABILITY_SYNCHRONIZE,
#line 750
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 751
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 752
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 757
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 757
            .heldItem = ITEM_WIDE_LENS,
#line 761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 758
            .ability = ABILITY_SLUSH_RUSH,
#line 759
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 760
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 761
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 766
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 766
            .heldItem = ITEM_PIDGEOTITE,
#line 770
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 767
            .ability = ABILITY_NO_GUARD,
#line 768
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 769
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 771
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 776
    [DIFFICULTY_NORMAL][PARTNER_BLUE_B2B] =
    {
#line 777
        .trainerName = _("Blue"),
#line 778
        .trainerClass = TRAINER_CLASS_KANTONIAN,
#line 779
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL_FRLG,
#line 780
        .gender = TRAINER_GENDER_MALE,
#line 781
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 782
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 784
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 784
            .heldItem = ITEM_NORMAL_GEM,
#line 788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 785
            .ability = ABILITY_JUSTIFIED,
#line 786
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 787
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 788
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 793
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 793
            .heldItem = ITEM_POWER_HERB,
#line 797
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 794
            .ability = ABILITY_WEAK_ARMOR,
#line 795
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 796
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 797
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 802
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 802
            .heldItem = ITEM_CHOPLE_BERRY,
#line 806
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 803
            .ability = ABILITY_ANALYTIC,
#line 804
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 805
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 806
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 811
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 811
            .heldItem = ITEM_FOCUS_SASH,
#line 815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 812
            .ability = ABILITY_SYNCHRONIZE,
#line 813
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 814
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 815
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 820
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 820
            .heldItem = ITEM_WIDE_LENS,
#line 824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 821
            .ability = ABILITY_SLUSH_RUSH,
#line 822
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 823
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 824
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 829
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 829
            .heldItem = ITEM_PIDGEOTITE,
#line 833
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 830
            .ability = ABILITY_NO_GUARD,
#line 831
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 832
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 834
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 839
    [DIFFICULTY_NORMAL][PARTNER_BROCK_MOSSDEEP] =
    {
#line 840
        .trainerName = _("Brock"),
#line 841
        .trainerClass = TRAINER_CLASS_KANTONIAN,
#line 842
        .trainerPic = TRAINER_PIC_STEVEN,
#line 843
        .gender = TRAINER_GENDER_MALE,
#line 844
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 845
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 847
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 851
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 849
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 848
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 852
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 857
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 861
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 859
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 858
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 862
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 867
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 871
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 870
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 869
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 868
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 872
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 877
    [DIFFICULTY_NORMAL][PARTNER_MISTY_MOSSDEEP] =
    {
#line 878
        .trainerName = _("Misty"),
#line 879
        .trainerClass = TRAINER_CLASS_KANTONIAN,
#line 880
        .trainerPic = TRAINER_PIC_STEVEN,
#line 881
        .gender = TRAINER_GENDER_FEMALE,
#line 882
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 883
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 885
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 889
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 887
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 886
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 890
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 895
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 899
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 898
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 897
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 896
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 900
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 905
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 909
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 907
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 906
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 910
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 915
    [DIFFICULTY_NORMAL][PARTNER_SURGE_MOSSDEEP] =
    {
#line 916
        .trainerName = _("Lt. Surge"),
#line 917
        .trainerClass = TRAINER_CLASS_KANTONIAN,
#line 918
        .trainerPic = TRAINER_PIC_STEVEN,
#line 919
        .gender = TRAINER_GENDER_MALE,
#line 920
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 921
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 923
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 927
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 925
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 924
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 928
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 933
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 937
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 935
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 934
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 938
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 943
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 947
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 946
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 945
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 944
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 948
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 953
    [DIFFICULTY_NORMAL][PARTNER_SABRINA_MOSSDEEP] =
    {
#line 954
        .trainerName = _("Sabrina"),
#line 955
        .trainerClass = TRAINER_CLASS_KANTONIAN,
#line 956
        .trainerPic = TRAINER_PIC_LEADER_SABRINA_FRLG,
#line 957
        .gender = TRAINER_GENDER_MALE,
#line 958
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 959
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 961
            .species = SPECIES_ALAKAZAM_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 961
            .heldItem = ITEM_ALAKAZITE,
#line 965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 962
            .ability = ABILITY_TRACE,
#line 963
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 964
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 965
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_TACHYON_CUTTER,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 970
            .species = SPECIES_MR_RIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 971
            .lvl = 100,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 971
                MOVE_PSYCHIC,
                MOVE_HYPER_VOICE,
                MOVE_TACHYON_CUTTER,
                MOVE_TACHYON_CUTTER,
            },
            },
            {
#line 976
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 976
            .heldItem = ITEM_THROAT_SPRAY,
#line 980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 977
            .ability = ABILITY_ARMOR_TAIL,
#line 978
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 979
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 980
                MOVE_EXPANDING_FORCE,
                MOVE_HYPER_VOICE,
                MOVE_ENERGY_BALL,
                MOVE_PSYCHIC_TERRAIN,
            },
            },
        },
    },
#line 985
    [DIFFICULTY_NORMAL][PARTNER_TATE_MOSSDEEP] =
    {
#line 986
        .trainerName = _("Tate"),
#line 987
        .trainerClass = TRAINER_CLASS_LEADER,
#line 988
        .trainerPic = TRAINER_PIC_LEADER_TATE,
#line 989
        .gender = TRAINER_GENDER_MALE,
#line 990
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 991
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 992
        .aiFlags = AI_FLAG_TAG_TRAINER,
#line 993
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 995
            .species = SPECIES_GALLADE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 995
            .heldItem = ITEM_GALLADITE,
#line 999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 996
            .ability = ABILITY_SHARPNESS,
#line 997
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 998
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 999
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_LEAF_BLADE,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 1004
            .species = SPECIES_BRAVIARY_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1004
            .heldItem = ITEM_LIFE_ORB,
#line 1008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1005
            .ability = ABILITY_SHEER_FORCE,
#line 1006
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 1007
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1008
                MOVE_AIR_SLASH,
                MOVE_ESPER_WING,
                MOVE_HEAT_WAVE,
                MOVE_HYPER_VOICE,
            },
            },
            {
#line 1013
            .species = SPECIES_MELOETTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1013
            .heldItem = ITEM_BUG_GEM,
#line 1017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1014
            .ability = ABILITY_SERENE_GRACE,
#line 1015
            .lvl = 80,
            .ball = POKEBALL_COUNT,
#line 1016
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1017
                MOVE_RELIC_SONG,
                MOVE_ZEN_HEADBUTT,
                MOVE_CLOSE_COMBAT,
                MOVE_U_TURN,
            },
            },
        },
    },
#line 1022
    [DIFFICULTY_NORMAL][PARTNER_LIZA_MOSSDEEP] =
    {
#line 1023
        .trainerName = _("Liza"),
#line 1024
        .trainerClass = TRAINER_CLASS_LEADER,
#line 1025
        .trainerPic = TRAINER_PIC_LEADER_LIZA,
#line 1026
        .gender = TRAINER_GENDER_FEMALE,
#line 1027
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1028
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1029
        .aiFlags = AI_FLAG_TAG_TRAINER,
#line 1030
        .multiTeamSize = MULTI_TEAM_SIZE_HALF,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1032
            .species = SPECIES_GARDEVOIR_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1032
            .heldItem = ITEM_GARDEVOIRITE,
#line 1036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1033
            .ability = ABILITY_PIXILATE,
#line 1034
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 1035
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1036
                MOVE_PSYCHIC,
                MOVE_MOONBLAST,
                MOVE_SHADOW_BALL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 1041
            .species = SPECIES_MUNKIDORI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1041
            .heldItem = ITEM_FOCUS_SASH,
#line 1045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1042
            .ability = ABILITY_TOXIC_CHAIN,
#line 1043
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 1044
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1045
                MOVE_FAKE_OUT,
                MOVE_FUTURE_SIGHT,
                MOVE_HELPING_HAND,
                MOVE_PARTING_SHOT,
            },
            },
            {
#line 1050
            .species = SPECIES_FARIGIRAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1050
            .heldItem = ITEM_THROAT_SPRAY,
#line 1054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1051
            .ability = ABILITY_ARMOR_TAIL,
#line 1052
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 1053
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1054
                MOVE_EXPANDING_FORCE,
                MOVE_HYPER_VOICE,
                MOVE_ENERGY_BALL,
                MOVE_PSYCHIC_TERRAIN,
            },
            },
        },
    },

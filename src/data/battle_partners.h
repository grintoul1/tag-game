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
            .nature = NATURE_ADAMANT,
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
    [DIFFICULTY_NORMAL][PARTNER_MATT] =
    {
#line 178
        .trainerName = _("Matt"),
#line 179
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 180
        .trainerPic = TRAINER_PIC_STEVEN,
#line 181
        .gender = TRAINER_GENDER_MALE,
#line 182
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 183
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 185
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 189
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 187
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 186
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 190
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 195
            .species = SPECIES_SKARMORY,
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
            .species = SPECIES_AGGRON,
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
        },
    },
#line 215
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_JAGGED_PASS] =
    {
#line 216
        .trainerName = _("Shelly"),
#line 217
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 218
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
#line 219
        .gender = TRAINER_GENDER_FEMALE,
#line 220
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 221
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 223
            .species = SPECIES_MAGEARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 223
            .heldItem = ITEM_SHUCA_BERRY,
#line 227
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 225
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 224
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 228
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 233
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 237
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 235
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 234
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 238
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 243
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 247
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 245
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 244
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 248
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 253
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_MT_PYRE] =
    {
#line 254
        .trainerName = _("Archie"),
#line 255
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 256
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
#line 257
        .gender = TRAINER_GENDER_MALE,
#line 258
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 259
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 261
            .species = SPECIES_TORNADUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 261
            .heldItem = ITEM_LIFE_ORB,
#line 265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 262
            .ability = ABILITY_DEFIANT,
#line 263
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 264
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 265
                MOVE_FLY,
                MOVE_HEAT_WAVE,
                MOVE_LASH_OUT,
                MOVE_U_TURN,
            },
            },
            {
#line 270
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 270
            .heldItem = ITEM_FOCUS_SASH,
#line 274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 271
            .ability = ABILITY_ROCK_HEAD,
#line 272
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 273
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 274
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 279
            .species = SPECIES_BLASTOISE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 279
            .heldItem = ITEM_BLASTOISINITE,
#line 283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 280
            .ability = ABILITY_MEGA_LAUNCHER,
#line 281
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 282
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 283
                MOVE_MUDDY_WATER,
                MOVE_ICE_BEAM,
                MOVE_DARK_PULSE,
                MOVE_AURA_SPHERE,
            },
            },
        },
    },
#line 288
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_MT_PYRE] =
    {
#line 289
        .trainerName = _("Maxie"),
#line 290
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 291
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
#line 292
        .gender = TRAINER_GENDER_MALE,
#line 293
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 294
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 296
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 296
            .heldItem = ITEM_LIFE_ORB,
#line 300
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 297
            .ability = ABILITY_SHEER_FORCE,
#line 298
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 299
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 300
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 305
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 305
            .heldItem = ITEM_FOCUS_SASH,
#line 309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 306
            .ability = ABILITY_ROCK_HEAD,
#line 307
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 308
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 309
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 314
            .species = SPECIES_CHARIZARD_MEGA_X,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 314
            .heldItem = ITEM_CHARIZARDITE_X,
#line 318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 315
            .ability = ABILITY_TOUGH_CLAWS,
#line 316
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 317
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 318
                MOVE_FLARE_BLITZ,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_CLAW,
                MOVE_FACADE,
            },
            },
        },
    },
#line 323
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_SKY_PILLAR] =
    {
#line 324
        .trainerName = _("Archie"),
#line 325
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 326
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
#line 327
        .gender = TRAINER_GENDER_MALE,
#line 328
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 329
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 331
            .species = SPECIES_RAGING_BOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 331
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 332
            .ability = ABILITY_PROTOSYNTHESIS,
#line 333
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 334
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 335
                MOVE_THUNDERCLAP,
                MOVE_DRAGON_PULSE,
                MOVE_WEATHER_BALL,
            },
            },
            {
#line 339
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 339
            .heldItem = ITEM_AERODACTYLITE,
#line 343
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 340
            .ability = ABILITY_TOUGH_CLAWS,
#line 341
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 342
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 343
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 348
            .species = SPECIES_BASCULEGION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 348
            .heldItem = ITEM_FOCUS_SASH,
#line 352
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 349
            .ability = ABILITY_ADAPTABILITY,
#line 350
            .lvl = 86,
            .ball = POKEBALL_COUNT,
#line 351
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 352
                MOVE_LAST_RESPECTS,
                MOVE_FLIP_TURN,
                MOVE_SHADOW_SNEAK,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 357
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_SKY_PILLAR] =
    {
#line 358
        .trainerName = _("Maxie"),
#line 359
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 360
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
#line 361
        .gender = TRAINER_GENDER_MALE,
#line 362
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 363
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 365
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 365
            .heldItem = ITEM_EJECT_PACK,
#line 368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 366
            .ability = ABILITY_CHLOROPHYLL,
#line 367
            .lvl = 86,
            .ball = POKEBALL_COUNT,
#line 369
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 370
                MOVE_LEAF_STORM,
                MOVE_WEATHER_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_ENTRAINMENT,
            },
            },
            {
#line 375
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 375
            .heldItem = ITEM_AERODACTYLITE,
#line 379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 376
            .ability = ABILITY_TOUGH_CLAWS,
#line 377
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 378
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 379
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 384
            .species = SPECIES_WALKING_WAKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 384
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 385
            .ability = ABILITY_PROTOSYNTHESIS,
#line 386
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 387
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 388
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_EARTH_POWER,
            },
            },
        },
    },
#line 392
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_MHO] =
    {
#line 393
        .trainerName = _("Shelly"),
#line 394
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 395
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
#line 396
        .gender = TRAINER_GENDER_FEMALE,
#line 397
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 398
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 400
            .species = SPECIES_MAGEARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 400
            .heldItem = ITEM_SHUCA_BERRY,
#line 404
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 402
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 401
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 405
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 410
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 414
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 412
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 411
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 415
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 420
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 424
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 422
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 421
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 425
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 430
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 430
            .heldItem = ITEM_SHUCA_BERRY,
#line 434
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 432
            .lvl = 50,
            .ball = POKEBALL_COUNT,
#line 431
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 435
                MOVE_TRICK_ROOM,
                MOVE_MOONBLAST,
                MOVE_LIGHT_SCREEN,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 440
            .species = SPECIES_MEGANIUM,
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
            .species = SPECIES_SWAMPERT,
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
        },
    },
#line 460
    [DIFFICULTY_NORMAL][PARTNER_STEVEN_TWELVE] =
    {
#line 461
        .trainerName = _("Steven"),
#line 462
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 463
        .trainerPic = TRAINER_PIC_STEVEN,
#line 464
        .gender = TRAINER_GENDER_MALE,
#line 465
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 466
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 468
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 468
            .heldItem = ITEM_NORMAL_GEM,
#line 472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 469
            .ability = ABILITY_JUSTIFIED,
#line 470
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 471
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 472
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 477
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 477
            .heldItem = ITEM_POWER_HERB,
#line 481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 478
            .ability = ABILITY_WEAK_ARMOR,
#line 479
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 480
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 481
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 486
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 486
            .heldItem = ITEM_CHOPLE_BERRY,
#line 490
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 487
            .ability = ABILITY_ANALYTIC,
#line 488
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 489
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 490
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 495
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 495
            .heldItem = ITEM_FOCUS_SASH,
#line 499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 496
            .ability = ABILITY_SYNCHRONIZE,
#line 497
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 498
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 499
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 504
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 504
            .heldItem = ITEM_WIDE_LENS,
#line 508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 505
            .ability = ABILITY_SLUSH_RUSH,
#line 506
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 507
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 508
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 513
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 513
            .heldItem = ITEM_PIDGEOTITE,
#line 517
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 514
            .ability = ABILITY_NO_GUARD,
#line 515
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 516
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 518
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 523
    [DIFFICULTY_NORMAL][PARTNER_STEVEN_B2B] =
    {
#line 524
        .trainerName = _("Steven"),
#line 525
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 526
        .trainerPic = TRAINER_PIC_STEVEN,
#line 527
        .gender = TRAINER_GENDER_MALE,
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
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 531
            .heldItem = ITEM_NORMAL_GEM,
#line 535
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 532
            .ability = ABILITY_JUSTIFIED,
#line 533
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 534
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 535
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 540
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 540
            .heldItem = ITEM_POWER_HERB,
#line 544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 541
            .ability = ABILITY_WEAK_ARMOR,
#line 542
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 543
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 544
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 549
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 549
            .heldItem = ITEM_CHOPLE_BERRY,
#line 553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 550
            .ability = ABILITY_ANALYTIC,
#line 551
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 552
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 553
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 558
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 558
            .heldItem = ITEM_FOCUS_SASH,
#line 562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 559
            .ability = ABILITY_SYNCHRONIZE,
#line 560
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 561
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 562
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 567
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 567
            .heldItem = ITEM_WIDE_LENS,
#line 571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 568
            .ability = ABILITY_SLUSH_RUSH,
#line 569
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 570
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 571
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 576
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 576
            .heldItem = ITEM_PIDGEOTITE,
#line 580
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 577
            .ability = ABILITY_NO_GUARD,
#line 578
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 579
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 581
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 586
    [DIFFICULTY_NORMAL][PARTNER_BLUE_TWELVE] =
    {
#line 587
        .trainerName = _("Blue"),
#line 588
        .trainerClass = TRAINER_CLASS_KANTONIAN,
#line 589
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL_FRLG,
#line 590
        .gender = TRAINER_GENDER_MALE,
#line 591
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 592
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 594
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 594
            .heldItem = ITEM_NORMAL_GEM,
#line 598
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 595
            .ability = ABILITY_JUSTIFIED,
#line 596
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 597
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 598
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 603
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 603
            .heldItem = ITEM_POWER_HERB,
#line 607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 604
            .ability = ABILITY_WEAK_ARMOR,
#line 605
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 606
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 607
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 612
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 612
            .heldItem = ITEM_CHOPLE_BERRY,
#line 616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 613
            .ability = ABILITY_ANALYTIC,
#line 614
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 615
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 616
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 621
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 621
            .heldItem = ITEM_FOCUS_SASH,
#line 625
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 622
            .ability = ABILITY_SYNCHRONIZE,
#line 623
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 624
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 625
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 630
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 630
            .heldItem = ITEM_WIDE_LENS,
#line 634
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 631
            .ability = ABILITY_SLUSH_RUSH,
#line 632
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 633
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 634
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 639
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 639
            .heldItem = ITEM_PIDGEOTITE,
#line 643
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 640
            .ability = ABILITY_NO_GUARD,
#line 641
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 642
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 644
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 649
    [DIFFICULTY_NORMAL][PARTNER_BLUE_B2B] =
    {
#line 650
        .trainerName = _("Blue"),
#line 651
        .trainerClass = TRAINER_CLASS_KANTONIAN,
#line 652
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL_FRLG,
#line 653
        .gender = TRAINER_GENDER_MALE,
#line 654
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 655
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 657
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 657
            .heldItem = ITEM_NORMAL_GEM,
#line 661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 658
            .ability = ABILITY_JUSTIFIED,
#line 659
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 660
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 661
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 666
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 666
            .heldItem = ITEM_POWER_HERB,
#line 670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 667
            .ability = ABILITY_WEAK_ARMOR,
#line 668
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 669
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 670
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 675
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 675
            .heldItem = ITEM_CHOPLE_BERRY,
#line 679
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 676
            .ability = ABILITY_ANALYTIC,
#line 677
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 678
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 679
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 684
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 684
            .heldItem = ITEM_FOCUS_SASH,
#line 688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 685
            .ability = ABILITY_SYNCHRONIZE,
#line 686
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 687
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 688
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 693
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 693
            .heldItem = ITEM_WIDE_LENS,
#line 697
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 694
            .ability = ABILITY_SLUSH_RUSH,
#line 695
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 696
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 697
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 702
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 702
            .heldItem = ITEM_PIDGEOTITE,
#line 706
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 703
            .ability = ABILITY_NO_GUARD,
#line 704
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 705
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 707
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },

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
            .species = SPECIES_AUDINO_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 223
            .heldItem = ITEM_AUDINITE,
#line 227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 224
            .ability = ABILITY_HEALER,
#line 225
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 226
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 228
                MOVE_MOONBLAST,
                MOVE_AFTER_YOU,
                MOVE_HELPING_HAND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 233
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 233
            .heldItem = ITEM_POWER_HERB,
#line 237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 234
            .ability = ABILITY_STEELWORKER,
#line 235
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 236
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 238
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SEED_BOMB,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 243
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 243
            .heldItem = ITEM_EXPERT_BELT,
#line 247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 244
            .ability = ABILITY_TECHNICIAN,
#line 245
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 246
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 247
                MOVE_U_TURN,
                MOVE_KNOCK_OFF,
                MOVE_DUAL_CHOP,
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 252
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_MT_PYRE] =
    {
#line 253
        .trainerName = _("Archie"),
#line 254
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 255
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
#line 256
        .gender = TRAINER_GENDER_MALE,
#line 257
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 258
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 260
            .species = SPECIES_TORNADUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 260
            .heldItem = ITEM_LIFE_ORB,
#line 264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 261
            .ability = ABILITY_DEFIANT,
#line 262
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 263
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 264
                MOVE_FLY,
                MOVE_HEAT_WAVE,
                MOVE_LASH_OUT,
                MOVE_U_TURN,
            },
            },
            {
#line 269
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 269
            .heldItem = ITEM_FOCUS_SASH,
#line 273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 270
            .ability = ABILITY_ROCK_HEAD,
#line 271
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 272
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 273
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 278
            .species = SPECIES_BLASTOISE_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 278
            .heldItem = ITEM_BLASTOISINITE,
#line 282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 279
            .ability = ABILITY_MEGA_LAUNCHER,
#line 280
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 281
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 282
                MOVE_MUDDY_WATER,
                MOVE_ICE_BEAM,
                MOVE_DARK_PULSE,
                MOVE_AURA_SPHERE,
            },
            },
        },
    },
#line 287
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_MT_PYRE] =
    {
#line 288
        .trainerName = _("Maxie"),
#line 289
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 290
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
#line 291
        .gender = TRAINER_GENDER_MALE,
#line 292
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 293
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 295
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 295
            .heldItem = ITEM_LIFE_ORB,
#line 299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 296
            .ability = ABILITY_SHEER_FORCE,
#line 297
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 298
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 299
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_ROCK_SLIDE,
                MOVE_U_TURN,
            },
            },
            {
#line 304
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 304
            .heldItem = ITEM_FOCUS_SASH,
#line 308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 305
            .ability = ABILITY_ROCK_HEAD,
#line 306
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 307
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 308
                MOVE_BRAVE_BIRD,
                MOVE_ROCK_SLIDE,
                MOVE_PURSUIT,
                MOVE_TAILWIND,
            },
            },
            {
#line 313
            .species = SPECIES_CHARIZARD_MEGA_X,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 313
            .heldItem = ITEM_CHARIZARDITE_X,
#line 317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 314
            .ability = ABILITY_TOUGH_CLAWS,
#line 315
            .lvl = 65,
            .ball = POKEBALL_COUNT,
#line 316
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 317
                MOVE_FLARE_BLITZ,
                MOVE_HIGH_HORSEPOWER,
                MOVE_DRAGON_CLAW,
                MOVE_FACADE,
            },
            },
        },
    },
#line 322
    [DIFFICULTY_NORMAL][PARTNER_ARCHIE_SKY_PILLAR] =
    {
#line 323
        .trainerName = _("Archie"),
#line 324
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 325
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
#line 326
        .gender = TRAINER_GENDER_MALE,
#line 327
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 328
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 330
            .species = SPECIES_RAGING_BOLT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 330
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 331
            .ability = ABILITY_PROTOSYNTHESIS,
#line 332
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 333
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 334
                MOVE_THUNDERCLAP,
                MOVE_DRAGON_PULSE,
                MOVE_WEATHER_BALL,
            },
            },
            {
#line 338
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 338
            .heldItem = ITEM_AERODACTYLITE,
#line 342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 339
            .ability = ABILITY_TOUGH_CLAWS,
#line 340
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 341
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 342
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 347
            .species = SPECIES_BASCULEGION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 347
            .heldItem = ITEM_FOCUS_SASH,
#line 351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 348
            .ability = ABILITY_ADAPTABILITY,
#line 349
            .lvl = 86,
            .ball = POKEBALL_COUNT,
#line 350
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 351
                MOVE_LAST_RESPECTS,
                MOVE_FLIP_TURN,
                MOVE_SHADOW_SNEAK,
                MOVE_AGILITY,
            },
            },
        },
    },
#line 356
    [DIFFICULTY_NORMAL][PARTNER_MAXIE_SKY_PILLAR] =
    {
#line 357
        .trainerName = _("Maxie"),
#line 358
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 359
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
#line 360
        .gender = TRAINER_GENDER_MALE,
#line 361
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 362
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 364
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 364
            .heldItem = ITEM_EJECT_PACK,
#line 367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
#line 365
            .ability = ABILITY_CHLOROPHYLL,
#line 366
            .lvl = 86,
            .ball = POKEBALL_COUNT,
#line 368
            .nature = NATURE_RASH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 369
                MOVE_LEAF_STORM,
                MOVE_WEATHER_BALL,
                MOVE_HIDDEN_POWER,
                MOVE_ENTRAINMENT,
            },
            },
            {
#line 374
            .species = SPECIES_AERODACTYL_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 374
            .heldItem = ITEM_AERODACTYLITE,
#line 378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 375
            .ability = ABILITY_TOUGH_CLAWS,
#line 376
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 377
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 378
                MOVE_ROCK_SLIDE,
                MOVE_DUAL_WINGBEAT,
                MOVE_PROTECT,
                MOVE_TAILWIND,
            },
            },
            {
#line 383
            .species = SPECIES_WALKING_WAKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 383
            .heldItem = ITEM_BOOSTER_ENERGY,
#line 387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 384
            .ability = ABILITY_PROTOSYNTHESIS,
#line 385
            .lvl = 87,
            .ball = POKEBALL_COUNT,
#line 386
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 387
                MOVE_HURRICANE,
                MOVE_WEATHER_BALL,
                MOVE_EARTH_POWER,
            },
            },
        },
    },
#line 391
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_MHO] =
    {
#line 392
        .trainerName = _("Shelly"),
#line 393
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 394
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
#line 395
        .gender = TRAINER_GENDER_FEMALE,
#line 396
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 397
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 399
            .species = SPECIES_AUDINO_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 399
            .heldItem = ITEM_AUDINITE,
#line 403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 400
            .ability = ABILITY_HEALER,
#line 401
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 402
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 404
                MOVE_MOONBLAST,
                MOVE_AFTER_YOU,
                MOVE_HELPING_HAND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 409
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 409
            .heldItem = ITEM_EXPERT_BELT,
#line 413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 410
            .ability = ABILITY_TECHNICIAN,
#line 411
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 412
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 413
                MOVE_U_TURN,
                MOVE_KNOCK_OFF,
                MOVE_DUAL_CHOP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 418
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 418
            .heldItem = ITEM_SHARP_BEAK,
#line 422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 419
            .ability = ABILITY_TINTED_LENS,
#line 420
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 421
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 422
                MOVE_SYNCHRONOISE,
                MOVE_AIR_SLASH,
                MOVE_IMPRISON,
                MOVE_TAILWIND,
            },
            },
            {
#line 427
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 427
            .heldItem = ITEM_LEFTOVERS,
#line 431
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 428
            .ability = ABILITY_COMPETITIVE,
#line 429
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 430
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 431
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_ICY_WIND,
                MOVE_DEFOG,
            },
            },
            {
#line 436
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 436
            .heldItem = ITEM_POWER_HERB,
#line 440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 437
            .ability = ABILITY_STEELWORKER,
#line 438
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 439
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 441
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SEED_BOMB,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 446
            .species = SPECIES_MUK_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 446
            .heldItem = ITEM_ZOOM_LENS,
#line 450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 447
            .ability = ABILITY_POWER_OF_ALCHEMY,
#line 448
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 449
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 450
                MOVE_POISON_JAB,
                MOVE_KNOCK_OFF,
                MOVE_HELPING_HAND,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 455
    [DIFFICULTY_NORMAL][PARTNER_SHELLY_MHO_BOSS] =
    {
#line 456
        .trainerName = _("Shelly"),
#line 457
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 458
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
#line 459
        .gender = TRAINER_GENDER_FEMALE,
#line 460
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 461
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 463
            .species = SPECIES_AUDINO_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 463
            .heldItem = ITEM_AUDINITE,
#line 467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 464
            .ability = ABILITY_HEALER,
#line 465
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 466
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 468
                MOVE_MOONBLAST,
                MOVE_AFTER_YOU,
                MOVE_HELPING_HAND,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 473
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 473
            .heldItem = ITEM_EXPERT_BELT,
#line 477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 474
            .ability = ABILITY_TECHNICIAN,
#line 475
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 476
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 477
                MOVE_U_TURN,
                MOVE_KNOCK_OFF,
                MOVE_DUAL_CHOP,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 482
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 482
            .heldItem = ITEM_SHARP_BEAK,
#line 486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 483
            .ability = ABILITY_TINTED_LENS,
#line 484
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 485
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 486
                MOVE_SYNCHRONOISE,
                MOVE_AIR_SLASH,
                MOVE_IMPRISON,
                MOVE_TAILWIND,
            },
            },
            {
#line 491
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 491
            .heldItem = ITEM_LEFTOVERS,
#line 495
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 492
            .ability = ABILITY_COMPETITIVE,
#line 493
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 494
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 495
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_ICY_WIND,
                MOVE_DEFOG,
            },
            },
            {
#line 500
            .species = SPECIES_DHELMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 500
            .heldItem = ITEM_POWER_HERB,
#line 504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 501
            .ability = ABILITY_STEELWORKER,
#line 502
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 503
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 505
                MOVE_PHANTOM_FORCE,
                MOVE_ANCHOR_SHOT,
                MOVE_SEED_BOMB,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 510
            .species = SPECIES_MUK_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 510
            .heldItem = ITEM_ZOOM_LENS,
#line 514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 511
            .ability = ABILITY_POWER_OF_ALCHEMY,
#line 512
            .lvl = 73,
            .ball = POKEBALL_COUNT,
#line 513
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 514
                MOVE_POISON_JAB,
                MOVE_KNOCK_OFF,
                MOVE_HELPING_HAND,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 519
    [DIFFICULTY_NORMAL][PARTNER_STEVEN_TWELVE] =
    {
#line 520
        .trainerName = _("Steven"),
#line 521
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 522
        .trainerPic = TRAINER_PIC_STEVEN,
#line 523
        .gender = TRAINER_GENDER_MALE,
#line 524
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 525
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 527
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 527
            .heldItem = ITEM_NORMAL_GEM,
#line 531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 528
            .ability = ABILITY_JUSTIFIED,
#line 529
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 530
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 531
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 536
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 536
            .heldItem = ITEM_POWER_HERB,
#line 540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 537
            .ability = ABILITY_WEAK_ARMOR,
#line 538
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 539
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 540
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 545
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 545
            .heldItem = ITEM_CHOPLE_BERRY,
#line 549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 546
            .ability = ABILITY_ANALYTIC,
#line 547
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 548
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 549
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 554
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 554
            .heldItem = ITEM_FOCUS_SASH,
#line 558
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 555
            .ability = ABILITY_SYNCHRONIZE,
#line 556
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 557
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 558
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 563
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 563
            .heldItem = ITEM_WIDE_LENS,
#line 567
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 564
            .ability = ABILITY_SLUSH_RUSH,
#line 565
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 566
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 567
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 572
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 572
            .heldItem = ITEM_PIDGEOTITE,
#line 576
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 573
            .ability = ABILITY_NO_GUARD,
#line 574
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 575
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 577
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 582
    [DIFFICULTY_NORMAL][PARTNER_STEVEN_B2B] =
    {
#line 583
        .trainerName = _("Steven"),
#line 584
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 585
        .trainerPic = TRAINER_PIC_STEVEN,
#line 586
        .gender = TRAINER_GENDER_MALE,
#line 587
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 588
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 590
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 590
            .heldItem = ITEM_NORMAL_GEM,
#line 594
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 591
            .ability = ABILITY_JUSTIFIED,
#line 592
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 593
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 594
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 599
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 599
            .heldItem = ITEM_POWER_HERB,
#line 603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 600
            .ability = ABILITY_WEAK_ARMOR,
#line 601
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 602
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 603
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 608
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 608
            .heldItem = ITEM_CHOPLE_BERRY,
#line 612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 609
            .ability = ABILITY_ANALYTIC,
#line 610
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 611
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 612
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 617
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 617
            .heldItem = ITEM_FOCUS_SASH,
#line 621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 618
            .ability = ABILITY_SYNCHRONIZE,
#line 619
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 620
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 621
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 626
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 626
            .heldItem = ITEM_WIDE_LENS,
#line 630
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 627
            .ability = ABILITY_SLUSH_RUSH,
#line 628
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 629
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 630
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 635
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 635
            .heldItem = ITEM_PIDGEOTITE,
#line 639
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 636
            .ability = ABILITY_NO_GUARD,
#line 637
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 638
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 640
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 645
    [DIFFICULTY_NORMAL][PARTNER_BLUE_TWELVE] =
    {
#line 646
        .trainerName = _("Blue"),
#line 647
        .trainerClass = TRAINER_CLASS_KANTONIAN,
#line 648
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL_FRLG,
#line 649
        .gender = TRAINER_GENDER_MALE,
#line 650
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 651
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 653
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 653
            .heldItem = ITEM_NORMAL_GEM,
#line 657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 654
            .ability = ABILITY_JUSTIFIED,
#line 655
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 656
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 657
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 662
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 662
            .heldItem = ITEM_POWER_HERB,
#line 666
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 663
            .ability = ABILITY_WEAK_ARMOR,
#line 664
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 665
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 666
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 671
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 671
            .heldItem = ITEM_CHOPLE_BERRY,
#line 675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 672
            .ability = ABILITY_ANALYTIC,
#line 673
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 674
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 675
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 680
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 680
            .heldItem = ITEM_FOCUS_SASH,
#line 684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 681
            .ability = ABILITY_SYNCHRONIZE,
#line 682
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 683
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 684
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 689
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 689
            .heldItem = ITEM_WIDE_LENS,
#line 693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 690
            .ability = ABILITY_SLUSH_RUSH,
#line 691
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 692
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 693
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 698
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 698
            .heldItem = ITEM_PIDGEOTITE,
#line 702
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 699
            .ability = ABILITY_NO_GUARD,
#line 700
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 701
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 703
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 708
    [DIFFICULTY_NORMAL][PARTNER_BLUE_B2B] =
    {
#line 709
        .trainerName = _("Blue"),
#line 710
        .trainerClass = TRAINER_CLASS_KANTONIAN,
#line 711
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL_FRLG,
#line 712
        .gender = TRAINER_GENDER_MALE,
#line 713
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 714
        .aiFlags = AI_FLAG_PARTNER_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 716
            .species = SPECIES_ARCANINE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 716
            .heldItem = ITEM_NORMAL_GEM,
#line 720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 717
            .ability = ABILITY_JUSTIFIED,
#line 718
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 719
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 720
                MOVE_FLARE_BLITZ,
                MOVE_EXTREME_SPEED,
                MOVE_ROCK_SLIDE,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 725
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 725
            .heldItem = ITEM_POWER_HERB,
#line 729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 726
            .ability = ABILITY_WEAK_ARMOR,
#line 727
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 728
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 729
                MOVE_METEOR_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SCALD,
                MOVE_POWER_GEM,
            },
            },
            {
#line 734
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 734
            .heldItem = ITEM_CHOPLE_BERRY,
#line 738
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 735
            .ability = ABILITY_ANALYTIC,
#line 736
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 737
            .nature = NATURE_SERIOUS,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 738
                MOVE_EXPLOSION,
                MOVE_FLASH_CANNON,
                MOVE_THUNDERBOLT,
                MOVE_ALLY_SWITCH,
            },
            },
            {
#line 743
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 743
            .heldItem = ITEM_FOCUS_SASH,
#line 747
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 744
            .ability = ABILITY_SYNCHRONIZE,
#line 745
            .lvl = 81,
            .ball = POKEBALL_COUNT,
#line 746
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 747
                MOVE_PSYCHIC,
                MOVE_SHADOW_BALL,
                MOVE_AURA_SPHERE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 752
            .species = SPECIES_SANDSLASH_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 752
            .heldItem = ITEM_WIDE_LENS,
#line 756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 753
            .ability = ABILITY_SLUSH_RUSH,
#line 754
            .lvl = 82,
            .ball = POKEBALL_COUNT,
#line 755
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 756
                MOVE_IRON_HEAD,
                MOVE_TRIPLE_AXEL,
                MOVE_DRILL_RUN,
                MOVE_HONE_CLAWS,
            },
            },
            {
#line 761
            .species = SPECIES_PIDGEOT_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 761
            .heldItem = ITEM_PIDGEOTITE,
#line 765
            .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 31, 30),
#line 762
            .ability = ABILITY_NO_GUARD,
#line 763
            .lvl = 83,
            .ball = POKEBALL_COUNT,
#line 764
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 766
                MOVE_HURRICANE,
                MOVE_HYPER_VOICE,
                MOVE_HIDDEN_POWER,
                MOVE_TAILWIND,
            },
            },
        },
    },

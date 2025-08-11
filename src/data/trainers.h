//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/trainers.party"

#line 1
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12
                MOVE_TACKLE,
            },
            },
        },
    },
#line 14
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_1] =
    {
#line 15
        .trainerName = _("SAWYER"),
#line 16
        .trainerClass = TRAINER_CLASS_HIKER,
#line 17
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 19
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 20
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 21
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 23
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 25
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 24
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 26
                MOVE_TACKLE,
            },
            },
        },
    },
#line 28
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
#line 29
        .trainerName = _("GRUNT"),
#line 30
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 31
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 33
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 34
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 35
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 37
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 39
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 38
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 41
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
#line 42
        .trainerName = _("GRUNT"),
#line 43
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 44
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 46
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 47
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 48
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 50
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 52
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 51
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 54
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 56
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 55
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 58
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
#line 59
        .trainerName = _("GRUNT"),
#line 60
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 61
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 63
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 64
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 65
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 67
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 69
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 68
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 71
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
#line 72
        .trainerName = _("GRUNT"),
#line 73
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 74
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 76
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 77
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 78
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 80
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 82
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 81
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 84
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
#line 85
        .trainerName = _("GRUNT"),
#line 86
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 87
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 89
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 90
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 91
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 95
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 94
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 97
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
#line 98
        .trainerName = _("GRUNT"),
#line 99
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 100
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 102
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 103
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 104
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 106
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 107
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 110
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
#line 111
        .trainerName = _("GRUNT"),
#line 112
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 113
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 115
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 116
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 117
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 119
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 120
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 123
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT2] =
    {
#line 124
        .trainerName = _("Grunt"),
#line 125
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 126
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 127
F_TRAINER_FEMALE | 
#line 128
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 129
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 130
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 132
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 133
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 136
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 137
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 140
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 141
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 144
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 145
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 148
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 149
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 152
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 153
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 156
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_PETALBURG_WOODS] =
    {
#line 157
        .trainerName = _("GRUNT"),
#line 158
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 159
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 161
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 162
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 163
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 165
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 166
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 169
    [DIFFICULTY_NORMAL][TRAINER_MARCEL] =
    {
#line 170
        .trainerName = _("MARCEL"),
#line 171
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 172
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 174
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 175
        .items = { ITEM_HYPER_POTION },
#line 176
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 177
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 179
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 181
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 180
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 183
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 185
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 184
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 187
    [DIFFICULTY_NORMAL][TRAINER_ALBERTO] =
    {
#line 188
        .trainerName = _("ALBERTO"),
#line 189
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 190
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 192
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 193
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 194
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 196
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 197
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 200
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 201
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 204
    [DIFFICULTY_NORMAL][TRAINER_ED] =
    {
#line 205
        .trainerName = _("ED"),
#line 206
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 207
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 209
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 210
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 211
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 213
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 214
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 217
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 218
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 221
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
#line 222
        .trainerName = _("GRUNT"),
#line 223
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 224
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 225
F_TRAINER_FEMALE | 
#line 226
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 227
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 228
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 230
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 231
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 234
    [DIFFICULTY_NORMAL][TRAINER_DECLAN] =
    {
#line 235
        .trainerName = _("DECLAN"),
#line 236
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 237
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 239
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 240
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 241
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 243
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 244
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 247
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
#line 248
        .trainerName = _("GRUNT"),
#line 249
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 250
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 252
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 253
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 254
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 256
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 257
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 260
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_1] =
    {
#line 261
        .trainerName = _("GRUNT"),
#line 262
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 263
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 265
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 266
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 267
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 269
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 270
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 273
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 274
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 277
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_2] =
    {
#line 278
        .trainerName = _("GRUNT"),
#line 279
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 280
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 282
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 283
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 284
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 286
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 287
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 290
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 291
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 294
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_3] =
    {
#line 295
        .trainerName = _("GRUNT"),
#line 296
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 297
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 299
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 300
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 301
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 303
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 304
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 307
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 308
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 311
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 312
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 315
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_1] =
    {
#line 316
        .trainerName = _("GRUNT"),
#line 317
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 318
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 320
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 321
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 322
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 324
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 325
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 328
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_2] =
    {
#line 329
        .trainerName = _("GRUNT"),
#line 330
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 331
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 333
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 334
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 335
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 337
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 338
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 341
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 342
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 345
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_1] =
    {
#line 346
        .trainerName = _("GRUNT"),
#line 347
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 348
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 350
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 351
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 352
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 354
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 355
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 358
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_1] =
    {
#line 359
        .trainerName = _("Grunt"),
#line 360
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 361
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 363
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 364
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 365
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 367
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 368
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 371
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_2] =
    {
#line 372
        .trainerName = _("Grunt"),
#line 373
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 374
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 376
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 377
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 378
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 380
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 381
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 384
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_3] =
    {
#line 385
        .trainerName = _("Grunt"),
#line 386
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 387
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 389
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 390
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 391
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 393
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 394
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 397
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 398
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 401
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_4] =
    {
#line 402
        .trainerName = _("GRUNT"),
#line 403
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 404
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 405
F_TRAINER_FEMALE | 
#line 406
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 407
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 408
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 410
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 411
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 414
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
#line 415
        .trainerName = _("GRUNT"),
#line 416
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 417
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 418
F_TRAINER_FEMALE | 
#line 419
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 420
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 421
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 423
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 424
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 427
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
#line 428
        .trainerName = _("GRUNT"),
#line 429
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 430
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 431
F_TRAINER_FEMALE | 
#line 432
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 433
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 434
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 436
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 437
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 440
    [DIFFICULTY_NORMAL][TRAINER_FREDRICK] =
    {
#line 441
        .trainerName = _("FREDRICK"),
#line 442
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 443
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 445
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 446
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 447
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 449
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 451
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 450
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 453
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 455
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 454
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 457
    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
#line 458
        .trainerName = _("MATT"),
#line 459
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 460
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 463
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 464
        .items = { ITEM_SUPER_POTION },
#line 465
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 466
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 462
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 468
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 470
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 469
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 472
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 474
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 473
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 476
    [DIFFICULTY_NORMAL][TRAINER_MATT_PETALBURG_WOODS] =
    {
#line 477
        .trainerName = _("MATT"),
#line 478
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 479
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 482
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 483
        .items = { ITEM_SUPER_POTION },
#line 484
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 485
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 481
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 487
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 489
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 488
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 491
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 493
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 492
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 495
    [DIFFICULTY_NORMAL][TRAINER_PYRE_AQUAGRUNT1] =
    {
#line 496
        .trainerName = _("Grunt"),
#line 497
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 498
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 500
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 501
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 502
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 504
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 505
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 508
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 509
        .trainerName = _("SHELLY"),
#line 510
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 511
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 513
F_TRAINER_FEMALE | 
#line 514
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 515
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 516
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 512
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 518
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 520
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 519
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 522
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 524
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 523
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 526
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_PETALBURG_WOODS] =
    {
#line 527
        .trainerName = _("SHELLY"),
#line 528
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 529
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 531
F_TRAINER_FEMALE | 
#line 532
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 533
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 534
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 530
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 536
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 538
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 537
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 540
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 542
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 541
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 544
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 545
        .trainerName = _("SHELLY"),
#line 546
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 547
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 549
F_TRAINER_FEMALE | 
#line 550
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 551
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 552
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 548
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 554
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 556
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 555
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 558
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 560
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 559
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 562
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
    {
#line 563
        .trainerName = _("ARCHIE"),
#line 564
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 565
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 568
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 569
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 570
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 566
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 572
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 574
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 573
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 576
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 578
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 577
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 580
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 582
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 581
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 584
    [DIFFICULTY_NORMAL][TRAINER_PYRE_AQUAGRUNT2] =
    {
#line 585
        .trainerName = _("Grunt"),
#line 586
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 587
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 588
F_TRAINER_FEMALE | 
#line 589
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 590
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 591
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 593
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 594
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 597
    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
#line 598
        .trainerName = _("DAISY"),
#line 599
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 600
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 601
F_TRAINER_FEMALE | 
#line 602
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 603
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 604
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 606
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 607
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 610
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 611
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 614
    [DIFFICULTY_NORMAL][TRAINER_ROSE_1] =
    {
#line 615
        .trainerName = _("ROSE"),
#line 616
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 617
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 618
F_TRAINER_FEMALE | 
#line 619
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 620
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 621
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 623
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 624
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 627
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 628
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 631
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 632
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 635
    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
#line 636
        .trainerName = _("FELIX"),
#line 637
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 638
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 640
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 641
        .items = { ITEM_FULL_RESTORE },
#line 642
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 643
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 645
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 646
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 648
                MOVE_PSYCHIC,
            },
            },
            {
#line 650
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 651
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 653
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 656
    [DIFFICULTY_NORMAL][TRAINER_VIOLET] =
    {
#line 657
        .trainerName = _("VIOLET"),
#line 658
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 659
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 660
F_TRAINER_FEMALE | 
#line 661
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 662
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 663
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 665
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 666
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 669
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 670
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 673
    [DIFFICULTY_NORMAL][TRAINER_MATT_MT_PYRE] =
    {
#line 674
        .trainerName = _("Matt"),
#line 675
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN_MIXED,
#line 676
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 678
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 679
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 680
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 682
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 682
            .heldItem = ITEM_EJECT_BUTTON,
#line 685
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 683
            .ability = ABILITY_DRIZZLE,
#line 684
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 687
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 690
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 688
            .ability = ABILITY_SWIFT_SWIM,
#line 689
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 692
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 695
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 693
            .ability = ABILITY_SWIFT_SWIM,
#line 694
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 697
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_PYRE] =
    {
#line 698
        .trainerName = _("Tabitha"),
#line 699
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN_MIXED,
#line 700
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 703
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 704
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 705
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 701
        .mugshotColor = MUGSHOT_COLOR_AQUAMAGMA,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 707
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 707
            .heldItem = ITEM_EJECT_PACK,
#line 710
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 708
            .ability = ABILITY_DROUGHT,
#line 709
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 712
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 715
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 713
            .ability = ABILITY_CHLOROPHYLL,
#line 714
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 717
            .species = SPECIES_LILLIGANT_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 720
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 718
            .ability = ABILITY_CHLOROPHYLL,
#line 719
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 722
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_1] =
    {
#line 723
        .trainerName = _("DUSTY"),
#line 724
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 725
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 727
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 728
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 729
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 731
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 733
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 732
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 734
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 739
    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
#line 740
        .trainerName = _("CHIP"),
#line 741
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 742
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 744
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 745
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 746
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 748
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 750
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 749
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 751
                MOVE_PSYBEAM,
                MOVE_SELF_DESTRUCT,
                MOVE_SANDSTORM,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 756
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 758
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 757
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 759
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 764
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 766
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 765
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 767
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 772
    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
#line 773
        .trainerName = _("FOSTER"),
#line 774
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 775
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 777
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 778
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 779
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 781
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 783
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 782
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 784
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 789
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 791
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 790
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 792
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 797
    [DIFFICULTY_NORMAL][TRAINER_EMMIE_1] =
    {
#line 798
        .trainerName = _("Emmie"),
#line 799
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#line 800
        .trainerPic = TRAINER_PIC_GREEN,
        .encounterMusic_gender =
#line 801
F_TRAINER_FEMALE | 
#line 803
            TRAINER_ENCOUNTER_MUSIC_PKMN_TRAINER_2,
#line 804
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 805
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 802
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 807
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 809
            .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
#line 808
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 810
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 815
    [DIFFICULTY_NORMAL][TRAINER_EMMIE_2] =
    {
#line 816
        .trainerName = _("Emmie"),
#line 817
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#line 818
        .trainerPic = TRAINER_PIC_GREEN,
        .encounterMusic_gender =
#line 819
F_TRAINER_FEMALE | 
#line 821
            TRAINER_ENCOUNTER_MUSIC_PKMN_TRAINER_2,
#line 822
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 823
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 820
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 825
            .species = SPECIES_THUNDURUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 827
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 826
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 828
                MOVE_TAUNT,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 833
            .species = SPECIES_TORNADUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 835
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 834
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 836
                MOVE_TAILWIND,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 841
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 842
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 844
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 849
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 851
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 850
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 852
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 857
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 859
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 858
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 860
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 865
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 867
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 866
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 868
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 873
    [DIFFICULTY_NORMAL][TRAINER_EMMIE_3] =
    {
#line 874
        .trainerName = _("Emmie"),
#line 875
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#line 876
        .trainerPic = TRAINER_PIC_GREEN,
        .encounterMusic_gender =
#line 877
F_TRAINER_FEMALE | 
#line 879
            TRAINER_ENCOUNTER_MUSIC_PKMN_TRAINER_2,
#line 880
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 881
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 878
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 883
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 885
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 884
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 886
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 891
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE109_3] =
    {
#line 892
        .trainerName = _("Grunt"),
#line 893
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 894
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 895
F_TRAINER_FEMALE | 
#line 896
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 897
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 898
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 900
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 902
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 901
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 904
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 906
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 905
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 908
    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
#line 909
        .trainerName = _("AUSTINA"),
#line 910
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 911
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 912
F_TRAINER_FEMALE | 
#line 913
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 914
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 915
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 917
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 918
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 921
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 922
        .trainerName = _("GWEN"),
#line 923
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 924
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 925
F_TRAINER_FEMALE | 
#line 926
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 927
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 928
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 930
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 931
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 934
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE_MT_PYRE] =
    {
#line 935
        .trainerName = _("Archie"),
#line 936
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 937
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 940
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 941
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 942
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 938
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 944
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 946
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 945
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 948
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 950
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 949
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 952
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_PYRE] =
    {
#line 953
        .trainerName = _("Maxie"),
#line 954
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 955
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 958
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 959
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 960
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 956
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 962
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 964
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 963
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 966
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 968
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 967
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 970
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE109_2] =
    {
#line 971
        .trainerName = _("Grunt"),
#line 972
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 973
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 975
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 976
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 977
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 979
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 981
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 980
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 982
                MOVE_SAND_ATTACK,
                MOVE_HEADBUTT,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 987
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 988
        .trainerName = _("SIMON"),
#line 989
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 990
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 992
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 993
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 994
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 996
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 997
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1000
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1001
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1004
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 1005
        .trainerName = _("CHARLIE"),
#line 1006
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1007
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1009
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1010
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1011
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1013
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1014
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1017
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 1018
        .trainerName = _("RANDALL"),
#line 1019
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1020
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1022
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1023
        .items = { ITEM_HYPER_POTION },
#line 1024
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1025
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1027
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1028
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1030
                MOVE_QUICK_ATTACK,
                MOVE_AGILITY,
                MOVE_WING_ATTACK,
            },
            },
        },
    },
#line 1034
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 1035
        .trainerName = _("PARKER"),
#line 1036
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1037
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1039
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1040
        .items = { ITEM_HYPER_POTION },
#line 1041
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1042
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1044
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1045
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1047
                MOVE_TEETER_DANCE,
                MOVE_DIZZY_PUNCH,
                MOVE_FOCUS_PUNCH,
            },
            },
        },
    },
#line 1051
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 1052
        .trainerName = _("GEORGE"),
#line 1053
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1054
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1056
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1057
        .items = { ITEM_HYPER_POTION },
#line 1058
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1059
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1061
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1061
            .heldItem = ITEM_SITRUS_BERRY,
#line 1063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1062
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1064
                MOVE_SLACK_OFF,
                MOVE_COUNTER,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1068
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 1069
        .trainerName = _("BERKE"),
#line 1070
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1071
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1073
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1074
        .items = { ITEM_HYPER_POTION },
#line 1075
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1076
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1078
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1079
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1081
                MOVE_FOCUS_ENERGY,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1084
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
#line 1085
        .trainerName = _("BRAXTON"),
#line 1086
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1087
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1089
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1090
        .items = { ITEM_HYPER_POTION },
#line 1091
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1092
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1094
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1096
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1095
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1097
                MOVE_FOCUS_ENERGY,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_ENDEAVOR,
            },
            },
            {
#line 1102
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1104
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1103
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1105
                MOVE_BITE,
                MOVE_DIG,
                MOVE_FEINT_ATTACK,
                MOVE_SAND_TOMB,
            },
            },
            {
#line 1110
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1112
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1111
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1113
                MOVE_ROLLOUT,
                MOVE_WHIRLPOOL,
                MOVE_ASTONISH,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1118
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1120
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1119
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1121
                MOVE_THUNDERBOLT,
                MOVE_SUPERSONIC,
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
            },
            },
            {
#line 1126
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1128
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1127
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1129
                MOVE_GIGA_DRAIN,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
            },
            },
        },
    },
#line 1134
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 1135
        .trainerName = _("VINCENT"),
#line 1136
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1137
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1139
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1140
        .items = { ITEM_FULL_RESTORE },
#line 1141
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1142
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1144
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1146
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1145
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1148
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1150
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1149
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1152
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1154
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1153
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1156
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 1157
        .trainerName = _("LEROY"),
#line 1158
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1159
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1161
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1162
        .items = { ITEM_FULL_RESTORE },
#line 1163
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1164
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1166
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1168
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1167
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1170
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1172
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1171
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1174
    [DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
    {
#line 1175
        .trainerName = _("WILTON"),
#line 1176
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1177
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1179
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1180
        .items = { ITEM_SUPER_POTION },
#line 1181
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1182
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1184
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1186
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1185
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1188
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1190
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1189
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1192
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1194
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1193
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1196
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 1197
        .trainerName = _("EDGAR"),
#line 1198
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1199
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1201
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1202
        .items = { ITEM_FULL_RESTORE },
#line 1203
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1204
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1206
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1208
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1207
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1210
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1212
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1211
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1214
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 1215
        .trainerName = _("ALBERT"),
#line 1216
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1217
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1219
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1220
        .items = { ITEM_FULL_RESTORE },
#line 1221
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1222
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1224
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1226
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1225
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1228
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1230
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1229
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1232
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
#line 1233
        .trainerName = _("SAMUEL"),
#line 1234
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1235
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1237
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1238
        .items = { ITEM_FULL_RESTORE },
#line 1239
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1240
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1242
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1244
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1243
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1246
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1248
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1247
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1250
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1252
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1251
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1254
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 1255
        .trainerName = _("VITO"),
#line 1256
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 1257
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1260
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1261
        .items = { ITEM_FULL_RESTORE },
#line 1262
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1263
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 1258
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1265
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1267
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1266
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1269
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1271
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1270
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1273
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1275
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1274
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1277
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1279
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1278
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1281
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 1282
        .trainerName = _("OWEN"),
#line 1283
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1284
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1286
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1287
        .items = { ITEM_FULL_RESTORE },
#line 1288
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1289
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1291
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1293
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1292
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1295
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1297
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1296
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1299
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1301
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1300
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1303
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 1304
        .trainerName = _("WARREN"),
#line 1305
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1306
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1308
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1309
        .items = { ITEM_FULL_RESTORE },
#line 1310
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1311
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1313
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1315
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1314
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1317
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1319
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1318
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1321
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 1322
        .trainerName = _("MARY"),
#line 1323
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1324
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1325
F_TRAINER_FEMALE | 
#line 1326
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1327
        .items = { ITEM_HYPER_POTION },
#line 1328
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1329
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1331
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1332
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1334
                MOVE_FEINT_ATTACK,
                MOVE_SHOCK_WAVE,
            },
            },
        },
    },
#line 1337
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 1338
        .trainerName = _("ALEXIA"),
#line 1339
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1340
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1341
F_TRAINER_FEMALE | 
#line 1342
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1343
        .items = { ITEM_HYPER_POTION },
#line 1344
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1345
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1347
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1348
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1350
                MOVE_DEFENSE_CURL,
                MOVE_DOUBLE_EDGE,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1354
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 1355
        .trainerName = _("JODY"),
#line 1356
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1357
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1358
F_TRAINER_FEMALE | 
#line 1359
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1360
        .items = { ITEM_HYPER_POTION },
#line 1361
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1362
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1364
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1365
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1367
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1370
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 1371
        .trainerName = _("WENDY"),
#line 1372
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1373
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1374
F_TRAINER_FEMALE | 
#line 1375
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1376
        .items = { ITEM_FULL_RESTORE },
#line 1377
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1378
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1380
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1382
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1381
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1383
                MOVE_BATON_PASS,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_TEARS,
                MOVE_BITE,
            },
            },
            {
#line 1388
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1390
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1389
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1391
                MOVE_MEGA_DRAIN,
                MOVE_MAGICAL_LEAF,
                MOVE_GRASS_WHISTLE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1396
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1398
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1397
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1399
                MOVE_FLY,
                MOVE_WATER_GUN,
                MOVE_MIST,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 1404
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 1405
        .trainerName = _("KEIRA"),
#line 1406
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1407
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1408
F_TRAINER_FEMALE | 
#line 1409
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1410
        .items = { ITEM_FULL_RESTORE },
#line 1411
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1412
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1414
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1416
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1415
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1418
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1420
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1419
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1422
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_1] =
    {
#line 1423
        .trainerName = _("BROOKE"),
#line 1424
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1425
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1426
F_TRAINER_FEMALE | 
#line 1427
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1428
        .items = { ITEM_SUPER_POTION },
#line 1429
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1430
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1432
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1434
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1433
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1436
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1438
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1437
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1440
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1442
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1441
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1444
    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
#line 1445
        .trainerName = _("JENNIFER"),
#line 1446
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1447
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1448
F_TRAINER_FEMALE | 
#line 1449
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1450
        .items = { ITEM_FULL_RESTORE },
#line 1451
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1452
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1454
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1456
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1455
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1458
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 1459
        .trainerName = _("HOPE"),
#line 1460
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1461
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1462
F_TRAINER_FEMALE | 
#line 1463
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1464
        .items = { ITEM_FULL_RESTORE },
#line 1465
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1466
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1468
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1470
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1469
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1472
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1473
        .trainerName = _("SHANNON"),
#line 1474
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1475
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1476
F_TRAINER_FEMALE | 
#line 1477
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1478
        .items = { ITEM_FULL_RESTORE },
#line 1479
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1480
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1482
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1484
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1483
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1486
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1487
        .trainerName = _("MICHELLE"),
#line 1488
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1489
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1490
F_TRAINER_FEMALE | 
#line 1491
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1492
        .items = { ITEM_FULL_RESTORE },
#line 1493
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1494
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1496
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1498
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1497
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1500
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1502
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1501
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1504
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1506
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1505
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1508
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1509
        .trainerName = _("CAROLINE"),
#line 1510
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1511
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1512
F_TRAINER_FEMALE | 
#line 1513
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1514
        .items = { ITEM_FULL_RESTORE },
#line 1515
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1516
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1518
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1520
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1519
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1522
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1524
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1523
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1526
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1527
        .trainerName = _("JULIE"),
#line 1528
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1529
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1530
F_TRAINER_FEMALE | 
#line 1531
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1532
        .items = { ITEM_FULL_RESTORE },
#line 1533
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1534
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1536
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1538
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1537
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1540
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1542
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1541
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1544
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1546
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1545
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1548
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 1549
        .trainerName = _("PATRICIA"),
#line 1550
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1551
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1552
F_TRAINER_FEMALE | 
#line 1553
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1554
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1555
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1557
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1558
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1561
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1562
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1565
    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
#line 1566
        .trainerName = _("KINDRA"),
#line 1567
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1568
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1569
F_TRAINER_FEMALE | 
#line 1570
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1571
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1572
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1574
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1575
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1578
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1579
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1582
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 1583
        .trainerName = _("TAMMY"),
#line 1584
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1585
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1586
F_TRAINER_FEMALE | 
#line 1587
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1588
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1589
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1591
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1592
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1595
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1596
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1599
    [DIFFICULTY_NORMAL][TRAINER_PYRE_AQUAGRUNT3] =
    {
#line 1600
        .trainerName = _("Grunt"),
#line 1601
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 1602
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 1603
F_TRAINER_FEMALE | 
#line 1604
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1605
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1606
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1608
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1609
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1612
    [DIFFICULTY_NORMAL][TRAINER_PYRE_AQUAGRUNT4] =
    {
#line 1613
        .trainerName = _("Grunt"),
#line 1614
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 1615
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1616
F_TRAINER_FEMALE | 
#line 1617
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1618
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1619
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1621
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1622
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1625
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 1626
        .trainerName = _("TASHA"),
#line 1627
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1628
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1629
F_TRAINER_FEMALE | 
#line 1630
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1631
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1632
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1634
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1636
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1635
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1638
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT5] =
    {
#line 1639
        .trainerName = _("Grunt"),
#line 1640
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1641
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1642
F_TRAINER_FEMALE | 
#line 1643
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1644
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1645
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1647
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1649
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1648
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1651
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1653
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1652
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1655
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT6] =
    {
#line 1656
        .trainerName = _("Grunt"),
#line 1657
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 1658
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1659
F_TRAINER_FEMALE | 
#line 1660
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1661
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1662
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1664
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1666
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1665
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1668
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1670
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1669
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1672
    [DIFFICULTY_NORMAL][TRAINER_CINDY_1] =
    {
#line 1673
        .trainerName = _("CINDY"),
#line 1674
        .trainerClass = TRAINER_CLASS_LADY,
#line 1675
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1676
F_TRAINER_FEMALE | 
#line 1677
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1678
        .items = { ITEM_FULL_RESTORE },
#line 1679
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1680
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1682
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1682
            .heldItem = ITEM_NUGGET,
#line 1684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1683
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1686
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 1687
        .trainerName = _("DAPHNE"),
#line 1688
        .trainerClass = TRAINER_CLASS_LADY,
#line 1689
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1690
F_TRAINER_FEMALE | 
#line 1691
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1692
        .items = { ITEM_FULL_RESTORE },
#line 1693
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1694
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1696
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1696
            .heldItem = ITEM_NUGGET,
#line 1698
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1697
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1699
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1704
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1704
            .heldItem = ITEM_NUGGET,
#line 1706
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1705
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1707
                MOVE_ATTRACT,
                MOVE_SAFEGUARD,
                MOVE_TAKE_DOWN,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1712
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1713
        .trainerName = _("GRUNT"),
#line 1714
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1715
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1717
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1718
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1719
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1721
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1722
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1725
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1726
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1729
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1730
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1733
    [DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
    {
#line 1734
        .trainerName = _("BRIANNA"),
#line 1735
        .trainerClass = TRAINER_CLASS_LADY,
#line 1736
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1737
F_TRAINER_FEMALE | 
#line 1738
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1739
        .items = { ITEM_FULL_RESTORE },
#line 1740
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1741
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1743
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1743
            .heldItem = ITEM_NUGGET,
#line 1745
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1744
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1747
    [DIFFICULTY_NORMAL][TRAINER_NAOMI] =
    {
#line 1748
        .trainerName = _("NAOMI"),
#line 1749
        .trainerClass = TRAINER_CLASS_LADY,
#line 1750
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1751
F_TRAINER_FEMALE | 
#line 1752
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1753
        .items = { ITEM_FULL_RESTORE },
#line 1754
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1755
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1757
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1757
            .heldItem = ITEM_NUGGET,
#line 1759
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1758
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1761
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 1762
        .trainerName = _("MELISSA"),
#line 1763
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1764
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1765
F_TRAINER_FEMALE | 
#line 1766
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1767
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1768
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1770
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1771
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1774
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 1775
        .trainerName = _("SHEILA"),
#line 1776
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1777
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1778
F_TRAINER_FEMALE | 
#line 1779
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1780
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1781
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1783
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1784
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1787
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 1788
        .trainerName = _("SHIRLEY"),
#line 1789
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1790
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1791
F_TRAINER_FEMALE | 
#line 1792
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1793
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1794
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1796
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1797
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1800
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_1] =
    {
#line 1801
        .trainerName = _("JESSICA"),
#line 1802
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1803
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1804
F_TRAINER_FEMALE | 
#line 1805
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1806
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1807
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1809
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1810
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1812
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1817
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1818
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1820
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 1825
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 1826
        .trainerName = _("CONNIE"),
#line 1827
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1828
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1829
F_TRAINER_FEMALE | 
#line 1830
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1831
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1832
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1834
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1836
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1835
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1838
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 1839
        .trainerName = _("BRIDGET"),
#line 1840
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1841
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1842
F_TRAINER_FEMALE | 
#line 1843
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1844
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1845
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1847
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1849
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1848
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1851
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1852
        .trainerName = _("OLIVIA"),
#line 1853
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1854
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1855
F_TRAINER_FEMALE | 
#line 1856
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1857
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1858
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1860
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1862
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1861
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1863
                MOVE_IRON_DEFENSE,
                MOVE_WHIRLPOOL,
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1868
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1870
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1869
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1871
                MOVE_TAUNT,
                MOVE_CRABHAMMER,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1875
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1877
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1876
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1878
                MOVE_UPROAR,
                MOVE_FURY_SWIPES,
                MOVE_FAKE_OUT,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1883
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 1884
        .trainerName = _("TIFFANY"),
#line 1885
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1886
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1887
F_TRAINER_FEMALE | 
#line 1888
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1889
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1890
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1892
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1894
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1893
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1896
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1898
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1897
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1900
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_1] =
    {
#line 1901
        .trainerName = _("WINSTON"),
#line 1902
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1903
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1905
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1906
        .items = { ITEM_FULL_RESTORE },
#line 1907
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1908
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1910
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1910
            .heldItem = ITEM_NUGGET,
#line 1912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1911
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1914
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 1915
        .trainerName = _("MOLLIE"),
#line 1916
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1917
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1918
F_TRAINER_FEMALE | 
#line 1919
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1920
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1921
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1923
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1924
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1927
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1929
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1928
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1931
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 1932
        .trainerName = _("GARRET"),
#line 1933
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1934
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1936
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1937
        .items = { ITEM_FULL_RESTORE },
#line 1938
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1939
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1941
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1941
            .heldItem = ITEM_NUGGET,
#line 1943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1942
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1945
    [DIFFICULTY_NORMAL][TRAINER_STEVE_1] =
    {
#line 1946
        .trainerName = _("STEVE"),
#line 1947
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1948
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1950
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1951
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1952
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1954
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1955
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1958
    [DIFFICULTY_NORMAL][TRAINER_THALIA_1] =
    {
#line 1959
        .trainerName = _("THALIA"),
#line 1960
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1961
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1962
F_TRAINER_FEMALE | 
#line 1963
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1964
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1965
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1967
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1968
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1971
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1972
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1975
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 1976
        .trainerName = _("MARK"),
#line 1977
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1978
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1980
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1981
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1982
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1984
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1985
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1988
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 1989
        .trainerName = _("GRUNT"),
#line 1990
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1991
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1992
F_TRAINER_FEMALE | 
#line 1993
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1994
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1995
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1997
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1998
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2001
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 2002
        .trainerName = _("LUIS"),
#line 2003
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 2004
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 2006
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2007
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2008
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2010
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2011
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2014
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 2015
        .trainerName = _("DOMINIK"),
#line 2016
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2017
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2019
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2020
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2021
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2023
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2024
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2027
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 2028
        .trainerName = _("DOUGLAS"),
#line 2029
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2030
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2032
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2033
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2034
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2036
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2038
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2037
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2040
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2042
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2041
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2044
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 2045
        .trainerName = _("DARRIN"),
#line 2046
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2047
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2049
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2050
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2051
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2053
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2055
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2054
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2057
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2059
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2058
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2061
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2063
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2062
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2065
    [DIFFICULTY_NORMAL][TRAINER_TONY_1] =
    {
#line 2066
        .trainerName = _("TONY"),
#line 2067
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2068
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2070
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2071
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2072
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2074
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2075
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2078
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 2079
        .trainerName = _("JEROME"),
#line 2080
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2081
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2083
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2084
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2085
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2087
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2088
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2091
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 2092
        .trainerName = _("MATTHEW"),
#line 2093
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2094
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2096
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2097
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2098
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2100
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2101
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2104
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 2105
        .trainerName = _("DAVID"),
#line 2106
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2107
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2109
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2110
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2111
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2113
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2114
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2117
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2118
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2121
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 2122
        .trainerName = _("SPENCER"),
#line 2123
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2124
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2126
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2127
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2128
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2130
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2131
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2134
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2135
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2138
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 2139
        .trainerName = _("ROLAND"),
#line 2140
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2141
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2143
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2144
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2145
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2147
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2148
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2151
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 2152
        .trainerName = _("NOLEN"),
#line 2153
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2154
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2156
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2157
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2158
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2160
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2161
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2164
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 2165
        .trainerName = _("STAN"),
#line 2166
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2167
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2169
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2170
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2171
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2173
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2174
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2177
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 2178
        .trainerName = _("BARRY"),
#line 2179
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2180
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2182
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2183
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2184
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2186
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2187
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2190
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 2191
        .trainerName = _("DEAN"),
#line 2192
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2193
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2195
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2196
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2197
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2199
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2200
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2203
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2204
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2207
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2208
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2211
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 2212
        .trainerName = _("RODNEY"),
#line 2213
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2214
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2216
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2217
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2218
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2220
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2221
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2224
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 2225
        .trainerName = _("RICHARD"),
#line 2226
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2227
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2229
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2230
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2231
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2233
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2234
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2237
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 2238
        .trainerName = _("HERMAN"),
#line 2239
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2240
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2242
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2243
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2244
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2246
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2247
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2250
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2251
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2254
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 2255
        .trainerName = _("SANTIAGO"),
#line 2256
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2257
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2259
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2260
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2261
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2263
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2264
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2267
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2268
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2271
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 2272
        .trainerName = _("GILBERT"),
#line 2273
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2274
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2276
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2277
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2278
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2280
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2281
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2284
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 2285
        .trainerName = _("FRANKLIN"),
#line 2286
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2287
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2289
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2290
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2291
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2293
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2294
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2297
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 2298
        .trainerName = _("KEVIN"),
#line 2299
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2300
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2302
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2303
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2304
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2306
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2307
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2310
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 2311
        .trainerName = _("JACK"),
#line 2312
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2313
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2315
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2316
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2317
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2319
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2320
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2323
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2324
        .trainerName = _("DUDLEY"),
#line 2325
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2326
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2328
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2329
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2330
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2332
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2333
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2336
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2337
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2340
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2341
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2344
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 2345
        .trainerName = _("CHAD"),
#line 2346
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2347
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2349
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2350
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2351
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2353
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2354
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2357
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2358
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2361
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2362
        .trainerName = _("TAKAO"),
#line 2363
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2364
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2366
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2367
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2368
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2370
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2372
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2371
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2374
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 2375
        .trainerName = _("HITOSHI"),
#line 2376
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2377
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2379
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2380
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2381
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2383
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2385
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2384
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2387
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2389
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2388
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2391
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 2392
        .trainerName = _("KIYO"),
#line 2393
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2394
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2396
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2397
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2398
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2400
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2402
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2401
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2404
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 2405
        .trainerName = _("KOICHI"),
#line 2406
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2407
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2409
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2410
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2411
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2413
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2415
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2414
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2417
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2419
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2418
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2421
    [DIFFICULTY_NORMAL][TRAINER_NOB_1] =
    {
#line 2422
        .trainerName = _("NOB"),
#line 2423
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2424
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2426
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2427
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2428
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2430
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2432
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2431
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2434
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2435
        .trainerName = _("YUJI"),
#line 2436
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2437
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2439
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2440
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2441
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2443
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2445
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2444
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2447
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2449
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2448
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2451
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 2452
        .trainerName = _("DAISUKE"),
#line 2453
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2454
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2456
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2457
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2458
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2460
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2462
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2461
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2464
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2465
        .trainerName = _("ATSUSHI"),
#line 2466
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2467
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2469
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2470
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2471
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2473
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2475
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2474
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2477
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2478
        .trainerName = _("KIRK"),
#line 2479
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2480
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2482
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2483
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2484
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2486
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2488
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2487
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2489
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_LEER,
            },
            },
            {
#line 2494
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2496
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2495
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2497
                MOVE_CHARGE,
                MOVE_SHOCK_WAVE,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 2501
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2502
        .trainerName = _("GRUNT"),
#line 2503
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2504
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2505
F_TRAINER_FEMALE | 
#line 2506
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2507
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2508
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2510
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2511
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2514
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2515
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2518
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2519
        .trainerName = _("GRUNT"),
#line 2520
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2521
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2523
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2524
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2525
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2527
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2528
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2531
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2532
        .trainerName = _("SHAWN"),
#line 2533
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2534
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2536
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2537
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2538
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2540
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2542
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2541
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2544
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2546
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2545
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2548
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_1] =
    {
#line 2549
        .trainerName = _("FERNANDO"),
#line 2550
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2551
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2553
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2554
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2555
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2557
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2558
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2561
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2562
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2565
    [DIFFICULTY_NORMAL][TRAINER_DALTON_1] =
    {
#line 2566
        .trainerName = _("DALTON"),
#line 2567
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2568
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2570
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2571
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2572
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2574
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2575
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2578
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2579
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2582
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2583
        .trainerName = _("COLE"),
#line 2584
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2585
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2587
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2588
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2589
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2591
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2593
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2592
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2595
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2596
        .trainerName = _("JEFF"),
#line 2597
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2598
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2600
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2601
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2602
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2604
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2606
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2605
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2608
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2610
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2609
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2612
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2613
        .trainerName = _("AXLE"),
#line 2614
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2615
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2617
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2618
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2619
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2621
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2623
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2622
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2625
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2626
        .trainerName = _("JACE"),
#line 2627
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2628
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2630
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2631
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2632
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2634
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2636
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2635
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2638
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2639
        .trainerName = _("KEEGAN"),
#line 2640
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2641
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2643
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2644
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2645
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2647
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2649
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2648
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2651
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_1] =
    {
#line 2652
        .trainerName = _("Grunt"),
#line 2653
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2654
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 2656
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2657
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2658
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2660
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2661
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2664
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2665
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2668
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 2669
        .trainerName = _("DREW"),
#line 2670
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2671
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2673
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2674
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2675
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2677
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2678
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2680
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
        },
    },
#line 2685
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 2686
        .trainerName = _("BEAU"),
#line 2687
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2688
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2690
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2691
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2692
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2694
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2695
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2697
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 2702
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2703
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2705
                MOVE_POISON_STING,
                MOVE_SAND_ATTACK,
                MOVE_SCRATCH,
                MOVE_DIG,
            },
            },
            {
#line 2710
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2711
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2713
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2718
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2719
        .trainerName = _("LARRY"),
#line 2720
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2721
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2723
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2724
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2725
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2727
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2728
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2731
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_6] =
    {
#line 2732
        .trainerName = _("Grunt"),
#line 2733
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2734
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 2735
F_TRAINER_FEMALE | 
#line 2736
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2737
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2738
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2740
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2741
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2744
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2745
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2748
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 2749
        .trainerName = _("JUSTIN"),
#line 2750
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2751
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2753
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2754
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2755
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2757
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2758
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2761
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_1] =
    {
#line 2762
        .trainerName = _("ETHAN"),
#line 2763
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2764
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2766
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2767
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2768
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2770
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2771
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2774
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2775
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2778
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 2779
        .trainerName = _("AUTUMN"),
#line 2780
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2781
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2782
F_TRAINER_FEMALE | 
#line 2783
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2784
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2785
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2787
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2788
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2791
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 2792
        .trainerName = _("TRAVIS"),
#line 2793
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2794
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2796
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2797
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2798
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2800
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2801
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2804
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2805
        .trainerName = _("BRENT"),
#line 2806
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2807
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2809
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2810
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2811
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2813
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2815
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2814
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2817
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2818
        .trainerName = _("DONALD"),
#line 2819
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2820
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2822
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2823
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2824
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2826
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2828
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2827
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2830
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2832
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2831
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2834
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2836
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2835
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2838
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 2839
        .trainerName = _("TAYLOR"),
#line 2840
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2841
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2843
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2844
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2845
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2847
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2849
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2848
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2851
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2853
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2852
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2855
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2857
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2856
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2859
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_1] =
    {
#line 2860
        .trainerName = _("JEFFREY"),
#line 2861
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2862
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2864
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2865
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2866
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2868
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2869
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2872
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2873
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2876
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2877
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2880
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 2881
        .trainerName = _("DEREK"),
#line 2882
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2883
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2885
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2886
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2887
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2889
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2891
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2890
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2893
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2895
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2894
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2897
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2898
        .trainerName = _("EDWARD"),
#line 2899
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2900
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2902
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2903
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2904
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2906
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2906
            .heldItem = ITEM_EJECT_PACK,
#line 2911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2907
            .ability = ABILITY_SAND_STREAM,
#line 2908
            .lvl = 29,
#line 2910
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 2909
            .teraType = TYPE_GROUND,
            .moves = {
#line 2911
                MOVE_BULLDOZE,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 2916
            .species = SPECIES_AMAURA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2916
            .heldItem = ITEM_ICY_ROCK,
#line 2921
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2917
            .ability = ABILITY_SNOW_WARNING,
#line 2918
            .lvl = 29,
#line 2920
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 2919
            .teraType = TYPE_ROCK,
            .moves = {
#line 2921
                MOVE_ROCK_SLIDE,
                MOVE_ICY_WIND,
                MOVE_AURORA_VEIL,
                MOVE_CHILLY_RECEPTION,
            },
            },
            {
#line 2926
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2926
            .heldItem = ITEM_OCCA_BERRY,
#line 2931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2927
            .ability = ABILITY_HAIL_WARNING,
#line 2928
            .lvl = 29,
#line 2930
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 2929
            .teraType = TYPE_GRASS,
            .moves = {
#line 2931
                MOVE_SEED_BOMB,
                MOVE_ICE_PUNCH,
                MOVE_AURORA_VEIL,
                MOVE_FROZEN_RECEPTION,
            },
            },
        },
    },
#line 2936
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2937
        .trainerName = _("PRESTON"),
#line 2938
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2939
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2941
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2942
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2943
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2945
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2947
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2946
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2949
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2950
        .trainerName = _("VIRGIL"),
#line 2951
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2952
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2954
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2955
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2956
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2958
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2960
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2959
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2962
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 2963
        .trainerName = _("BLAKE"),
#line 2964
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2965
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2967
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2968
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2969
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2971
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2973
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2972
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2975
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT1] =
    {
#line 2976
        .trainerName = _("Grunt"),
#line 2977
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2978
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 2980
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2981
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2982
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2984
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2985
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2988
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2989
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2992
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2993
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2996
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 2997
        .trainerName = _("JOSHUA"),
#line 2998
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2999
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3001
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3002
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3003
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3005
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3006
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3009
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3010
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3013
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_1] =
    {
#line 3014
        .trainerName = _("CAMERON"),
#line 3015
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3016
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3018
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3019
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3020
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3022
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3023
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3026
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 3027
        .trainerName = _("JACLYN"),
#line 3028
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3029
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3030
F_TRAINER_FEMALE | 
#line 3031
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3032
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3033
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3035
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3036
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3038
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 3040
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 3041
        .trainerName = _("HANNAH"),
#line 3042
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3043
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3044
F_TRAINER_FEMALE | 
#line 3045
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3046
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3047
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3049
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3051
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3050
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3053
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 3054
        .trainerName = _("SAMANTHA"),
#line 3055
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3056
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3057
F_TRAINER_FEMALE | 
#line 3058
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3059
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3060
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3062
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3064
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3063
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3066
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 3067
        .trainerName = _("MAURA"),
#line 3068
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3069
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3070
F_TRAINER_FEMALE | 
#line 3071
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3072
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3073
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3075
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3077
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3076
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3079
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 3080
        .trainerName = _("KAYLA"),
#line 3081
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3082
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3083
F_TRAINER_FEMALE | 
#line 3084
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3085
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3086
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3088
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3089
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3092
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3093
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3096
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3097
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3100
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 3101
        .trainerName = _("ALEXIS"),
#line 3102
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3103
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3104
F_TRAINER_FEMALE | 
#line 3105
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3106
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3107
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3109
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3110
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3113
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3114
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3117
    [DIFFICULTY_NORMAL][TRAINER_JACKI_1] =
    {
#line 3118
        .trainerName = _("JACKI"),
#line 3119
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3120
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3121
F_TRAINER_FEMALE | 
#line 3122
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3123
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3124
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3126
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3127
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3130
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3131
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3134
    [DIFFICULTY_NORMAL][TRAINER_WALTER_1] =
    {
#line 3135
        .trainerName = _("WALTER"),
#line 3136
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3137
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3139
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3140
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3141
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3143
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3144
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3147
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 3148
        .trainerName = _("MICAH"),
#line 3149
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3150
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3152
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3153
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3154
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3156
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3157
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3160
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3161
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3164
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 3165
        .trainerName = _("THOMAS"),
#line 3166
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3167
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3169
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3170
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3171
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3173
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3174
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3177
    [DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
    {
#line 3178
        .trainerName = _("SIDNEY"),
#line 3179
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3180
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender =
#line 3182
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3183
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3184
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3185
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3186
        .mugshotColor = MUGSHOT_COLOR_BLACK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3188
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3190
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3189
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3191
                MOVE_ROAR,
                MOVE_DOUBLE_EDGE,
                MOVE_SAND_ATTACK,
                MOVE_CRUNCH,
            },
            },
            {
#line 3196
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3198
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3197
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3199
                MOVE_TORMENT,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3204
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3206
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3205
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3207
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 3212
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3214
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3213
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3215
                MOVE_SURF,
                MOVE_SWORDS_DANCE,
                MOVE_STRENGTH,
                MOVE_FACADE,
            },
            },
            {
#line 3220
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3220
            .heldItem = ITEM_SITRUS_BERRY,
#line 3222
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3221
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3223
                MOVE_AERIAL_ACE,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3228
    [DIFFICULTY_NORMAL][TRAINER_PHOEBE] =
    {
#line 3229
        .trainerName = _("PHOEBE"),
#line 3230
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3231
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .encounterMusic_gender =
#line 3232
F_TRAINER_FEMALE | 
#line 3233
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3234
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3235
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3236
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3237
        .mugshotColor = MUGSHOT_COLOR_DARKPURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3239
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3241
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3240
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3242
                MOVE_SHADOW_PUNCH,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_PROTECT,
            },
            },
            {
#line 3247
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3249
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3248
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3250
                MOVE_SHADOW_BALL,
                MOVE_GRUDGE,
                MOVE_WILL_O_WISP,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3255
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3257
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3256
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3258
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_TEAM,
                MOVE_NIGHT_SHADE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3263
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3265
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3264
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3266
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FACADE,
            },
            },
            {
#line 3271
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3271
            .heldItem = ITEM_SITRUS_BERRY,
#line 3273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3272
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3274
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3279
    [DIFFICULTY_NORMAL][TRAINER_GLACIA] =
    {
#line 3280
        .trainerName = _("GLACIA"),
#line 3281
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3282
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .encounterMusic_gender =
#line 3283
F_TRAINER_FEMALE | 
#line 3284
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3285
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3286
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3287
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3288
        .mugshotColor = MUGSHOT_COLOR_WHITE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3290
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3292
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3291
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3293
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_HAIL,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3298
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3300
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3299
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3301
                MOVE_LIGHT_SCREEN,
                MOVE_CRUNCH,
                MOVE_ICY_WIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3306
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3308
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3307
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3309
                MOVE_ATTRACT,
                MOVE_DOUBLE_EDGE,
                MOVE_HAIL,
                MOVE_BLIZZARD,
            },
            },
            {
#line 3314
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3316
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3315
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3317
                MOVE_SHADOW_BALL,
                MOVE_EXPLOSION,
                MOVE_HAIL,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3322
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3322
            .heldItem = ITEM_SITRUS_BERRY,
#line 3324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3323
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3325
                MOVE_SURF,
                MOVE_BODY_SLAM,
                MOVE_ICE_BEAM,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 3330
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3331
        .trainerName = _("DRAKE"),
#line 3332
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3333
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3335
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3336
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3337
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3338
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3339
        .mugshotColor = MUGSHOT_COLOR_DRAKE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3341
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3343
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3342
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3344
                MOVE_ROCK_TOMB,
                MOVE_DRAGON_CLAW,
                MOVE_PROTECT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 3349
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3351
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3350
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3352
                MOVE_DOUBLE_EDGE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3357
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3359
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3358
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3360
                MOVE_SMOKESCREEN,
                MOVE_DRAGON_DANCE,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 3365
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3367
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3366
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3368
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_DRAGON_BREATH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3373
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3373
            .heldItem = ITEM_SITRUS_BERRY,
#line 3375
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3374
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3376
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 3381
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_1] =
    {
#line 3382
        .trainerName = _("ROXANNE"),
#line 3383
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3385
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 3386
F_TRAINER_FEMALE | 
#line 3387
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3388
        .items = { ITEM_POTION, ITEM_POTION },
#line 3389
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3390
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3384
        .mugshotColor = MUGSHOT_COLOR_BROWN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3392
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3394
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3393
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3395
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3400
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3402
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3401
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3403
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3408
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3408
            .heldItem = ITEM_ORAN_BERRY,
#line 3410
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3409
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3411
                MOVE_BLOCK,
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3416
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_1] =
    {
#line 3417
        .trainerName = _("BRAWLY"),
#line 3418
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3420
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3422
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3423
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3424
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3419
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3426
            .species = SPECIES_KUBFU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3426
            .heldItem = ITEM_IAPAPA_BERRY,
#line 3428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3427
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3429
                MOVE_BRICK_BREAK,
                MOVE_FAINT_ATTACK,
                MOVE_ZEN_HEADBUTT,
                MOVE_MEGA_PUNCH,
            },
            },
            {
#line 3434
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3434
            .heldItem = ITEM_WISE_GLASSES,
#line 3437
            .iv = TRAINER_PARTY_IVS(30, 31, 31, 31, 30, 31),
#line 3436
            .ability = ABILITY_WATER_ABSORB,
#line 3435
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3438
                MOVE_BUBBLE_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SUPERPOWER,
                MOVE_HIDDEN_POWER,
            },
            },
            {
#line 3443
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3443
            .heldItem = ITEM_EJECT_BUTTON,
#line 3446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3445
            .ability = ABILITY_LIMBER,
#line 3444
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3447
                MOVE_DRAIN_PUNCH,
                MOVE_RETALIATE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 3451
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3451
            .heldItem = ITEM_MUSCLE_BAND,
#line 3454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3453
            .ability = ABILITY_INTIMIDATE,
#line 3452
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3455
                MOVE_MACH_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_COUNTER,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 3460
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3460
            .heldItem = ITEM_EXPERT_BELT,
#line 3463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3462
            .ability = ABILITY_SPEED_BOOST,
#line 3461
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3464
                MOVE_INCINERATE,
                MOVE_THUNDER_PUNCH,
                MOVE_DOUBLE_KICK,
                MOVE_WORK_UP,
            },
            },
            {
#line 3469
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3469
            .heldItem = ITEM_EVIOLITE,
#line 3472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3471
            .ability = ABILITY_SHED_SKIN,
#line 3470
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3473
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BRICK_BREAK,
                MOVE_FAINT_ATTACK,
            },
            },
        },
    },
#line 3478
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_1] =
    {
#line 3479
        .trainerName = _("WATTSON"),
#line 3480
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3482
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3484
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3485
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3486
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3481
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3488
            .species = SPECIES_MANECTRIC_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3488
            .heldItem = ITEM_MANECTITE,
#line 3492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3489
            .ability = ABILITY_INTIMIDATE,
#line 3490
            .lvl = 29,
#line 3491
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3492
                MOVE_HYPER_VOICE,
                MOVE_SIGNAL_BEAM,
                MOVE_VOLT_SWITCH,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3497
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3497
            .heldItem = ITEM_ROCKY_HELMET,
#line 3501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3498
            .ability = ABILITY_IRON_BARBS,
#line 3499
            .lvl = 30,
#line 3500
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3501
                MOVE_SMART_STRIKE,
                MOVE_SPARK,
                MOVE_ELECTRIC_TERRAIN,
                MOVE_ENCORE,
            },
            },
            {
#line 3506
            .species = SPECIES_VOLTORB_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3506
            .heldItem = ITEM_EVIOLITE,
#line 3510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3507
            .ability = ABILITY_STATIC,
#line 3508
            .lvl = 31,
#line 3509
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3510
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 3512
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3512
            .heldItem = ITEM_WIDE_LENS,
#line 3516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3513
            .ability = ABILITY_LEVITATE,
#line 3514
            .lvl = 31,
#line 3515
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3516
                MOVE_HEX,
                MOVE_THUNDER_WAVE,
                MOVE_TOXIC,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 3521
            .species = SPECIES_RAICHU_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3521
            .heldItem = ITEM_FOCUS_SASH,
#line 3525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3522
            .ability = ABILITY_SURGE_SURFER,
#line 3523
            .lvl = 30,
#line 3524
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3525
                MOVE_FAKE_OUT,
                MOVE_VOLT_SWITCH,
                MOVE_GRASS_KNOT,
                MOVE_PSYBEAM,
            },
            },
            {
#line 3530
            .species = SPECIES_IRON_THORNS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3530
            .heldItem = ITEM_SALAC_BERRY,
#line 3534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3531
            .ability = ABILITY_QUARK_DRIVE,
#line 3532
            .lvl = 29,
#line 3533
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3534
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_ELECTRIC_TERRAIN,
            },
            },
        },
    },
#line 3539
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_1] =
    {
#line 3540
        .trainerName = _("FLANNERY"),
#line 3541
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3543
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 3544
F_TRAINER_FEMALE | 
#line 3545
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3546
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3547
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3548
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3542
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3550
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3552
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3551
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3553
                MOVE_OVERHEAT,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3558
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3560
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3559
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3561
                MOVE_OVERHEAT,
                MOVE_SMOG,
                MOVE_LIGHT_SCREEN,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3566
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3568
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3567
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3569
                MOVE_OVERHEAT,
                MOVE_TACKLE,
                MOVE_SUNNY_DAY,
                MOVE_ATTRACT,
            },
            },
            {
#line 3574
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3574
            .heldItem = ITEM_WHITE_HERB,
#line 3576
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3575
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3577
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_BODY_SLAM,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 3582
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_1] =
    {
#line 3583
        .trainerName = _("NORMAN"),
#line 3584
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3586
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 3588
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3589
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3590
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3591
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3585
        .mugshotColor = MUGSHOT_COLOR_GREY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3593
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3595
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3594
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3596
                MOVE_TEETER_DANCE,
                MOVE_PSYBEAM,
                MOVE_FACADE,
                MOVE_ENCORE,
            },
            },
            {
#line 3601
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3603
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3602
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3604
                MOVE_SLASH,
                MOVE_FACADE,
                MOVE_ENCORE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3609
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3611
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3610
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3612
                MOVE_SLASH,
                MOVE_BELLY_DRUM,
                MOVE_FACADE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 3617
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3617
            .heldItem = ITEM_SITRUS_BERRY,
#line 3619
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3618
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3620
                MOVE_COUNTER,
                MOVE_YAWN,
                MOVE_FACADE,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 3625
    [DIFFICULTY_NORMAL][TRAINER_WINONA_1] =
    {
#line 3626
        .trainerName = _("WINONA"),
#line 3627
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3629
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3630
F_TRAINER_FEMALE | 
#line 3631
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3632
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3633
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3634
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3628
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3636
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3638
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3637
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3639
                MOVE_PERISH_SONG,
                MOVE_MIRROR_MOVE,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3644
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3646
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3645
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3647
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 3652
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3654
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3653
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3655
                MOVE_WATER_GUN,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3660
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3662
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3661
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3663
                MOVE_SAND_ATTACK,
                MOVE_FURY_ATTACK,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3668
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3668
            .heldItem = ITEM_ORAN_BERRY,
#line 3670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3669
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3671
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 3676
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_1] =
    {
#line 3677
        .trainerName = _("TATE&LIZA"),
#line 3678
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3680
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 3682
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3683
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3684
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3685
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3679
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3687
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3689
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3688
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3690
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3695
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3697
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3696
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3698
                MOVE_PSYCHIC,
                MOVE_SUNNY_DAY,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3703
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3703
            .heldItem = ITEM_SITRUS_BERRY,
#line 3705
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3704
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3706
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3711
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3711
            .heldItem = ITEM_SITRUS_BERRY,
#line 3713
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3712
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3714
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 3719
    [DIFFICULTY_NORMAL][TRAINER_JUAN_1] =
    {
#line 3720
        .trainerName = _("JUAN"),
#line 3721
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3723
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 3725
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3726
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3727
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3728
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3722
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3730
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3732
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3731
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3733
                MOVE_WATER_PULSE,
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
            },
            },
            {
#line 3738
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3740
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3739
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3741
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3746
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3748
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3747
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3749
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_AURORA_BEAM,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3754
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3755
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3757
                MOVE_WATER_PULSE,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_LEER,
            },
            },
            {
#line 3762
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3762
            .heldItem = ITEM_CHESTO_BERRY,
#line 3764
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3763
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3765
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 3770
    [DIFFICULTY_NORMAL][TRAINER_JERRY_1] =
    {
#line 3771
        .trainerName = _("JERRY"),
#line 3772
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3773
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3775
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3776
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3777
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3779
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3781
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3780
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3783
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3784
        .trainerName = _("TED"),
#line 3785
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3786
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3788
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3789
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3790
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3792
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3794
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3793
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3796
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3797
        .trainerName = _("PAUL"),
#line 3798
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3799
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3801
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3802
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3803
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3805
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3807
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3806
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3809
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3811
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3810
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3813
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3815
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3814
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3817
    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
#line 3818
        .trainerName = _("KAREN"),
#line 3819
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3820
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3821
F_TRAINER_FEMALE | 
#line 3822
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3823
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3824
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3826
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3828
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3827
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3830
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3831
        .trainerName = _("GEORGIA"),
#line 3832
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3833
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3834
F_TRAINER_FEMALE | 
#line 3835
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3836
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3837
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3839
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3841
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3840
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3843
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3845
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3844
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3847
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3848
        .trainerName = _("KATE & JOY"),
#line 3849
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3850
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3852
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3853
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3854
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3856
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3857
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3859
                MOVE_HYPNOSIS,
                MOVE_PSYBEAM,
                MOVE_DIZZY_PUNCH,
                MOVE_TEETER_DANCE,
            },
            },
            {
#line 3864
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3865
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3867
                MOVE_FOCUS_PUNCH,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 3872
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_1] =
    {
#line 3873
        .trainerName = _("ANNA & MEG"),
#line 3874
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3875
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3877
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3878
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3879
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3881
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3881
            .heldItem = ITEM_MUSCLE_BAND,
#line 3885
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3882
            .ability = ABILITY_LIMBER,
#line 3883
            .lvl = 30,
#line 3884
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3885
                MOVE_FAKE_OUT,
                MOVE_TRAILBLAZE,
                MOVE_METAL_CLAW,
                MOVE_ASSURANCE,
            },
            },
            {
#line 3890
            .species = SPECIES_BRAMBLEGHAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3890
            .heldItem = ITEM_FOCUS_SASH,
#line 3894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3891
            .ability = ABILITY_WIND_RIDER,
#line 3892
            .lvl = 29,
#line 3893
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3894
                MOVE_HEX,
                MOVE_MEGA_DRAIN,
                MOVE_SHADOW_SNEAK,
                MOVE_SPIKES,
            },
            },
            {
#line 3899
            .species = SPECIES_CARKOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3899
            .heldItem = ITEM_PASSHO_BERRY,
#line 3903
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3900
            .ability = ABILITY_STEAM_ENGINE,
#line 3901
            .lvl = 29,
#line 3902
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3903
                MOVE_BODY_PRESS,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_IRON_DEFENSE,
            },
            },
            {
#line 3908
            .species = SPECIES_HAKAMO_O,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3908
            .heldItem = ITEM_MUSCLE_BAND,
#line 3912
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3909
            .ability = ABILITY_OVERCOAT,
#line 3910
            .lvl = 30,
#line 3911
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3912
                MOVE_BREAKING_SWIPE,
                MOVE_METAL_CLAW,
                MOVE_REVERSAL,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3917
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3918
        .trainerName = _("VICTOR"),
#line 3919
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3920
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3922
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3923
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3924
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3926
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3926
            .heldItem = ITEM_ORAN_BERRY,
#line 3928
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3927
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3930
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3930
            .heldItem = ITEM_ORAN_BERRY,
#line 3932
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3931
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3934
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_1] =
    {
#line 3935
        .trainerName = _("MIGUEL"),
#line 3936
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3937
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3939
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3940
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3941
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3943
            .species = SPECIES_VIVILLON_OCEAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3943
            .heldItem = ITEM_ROCKY_HELMET,
#line 3947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3944
            .ability = ABILITY_COMPOUND_EYES,
#line 3945
            .lvl = 27,
#line 3946
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3947
                MOVE_BUG_BITE,
                MOVE_STRUGGLE_BUG,
                MOVE_AIR_CUTTER,
                MOVE_PROTECT,
            },
            },
            {
#line 3952
            .species = SPECIES_WORMADAM_TRASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3952
            .heldItem = ITEM_COVERT_CLOAK,
#line 3956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3953
            .ability = ABILITY_OVERCOAT,
#line 3954
            .lvl = 28,
#line 3955
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3956
                MOVE_BUG_BITE,
                MOVE_CONFUSION,
                MOVE_INFESTATION,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3961
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3962
        .trainerName = _("COLTON"),
#line 3963
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3964
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3966
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3967
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3968
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3970
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3970
            .heldItem = ITEM_ORAN_BERRY,
#line 3972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3971
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3973
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3978
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .heldItem = ITEM_ORAN_BERRY,
#line 3980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3979
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3981
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3986
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3986
            .heldItem = ITEM_ORAN_BERRY,
#line 3988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3987
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3989
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3994
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3994
            .heldItem = ITEM_ORAN_BERRY,
#line 3996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3995
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3997
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4002
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .heldItem = ITEM_ORAN_BERRY,
#line 4004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4003
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4005
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4010
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4010
            .heldItem = ITEM_ORAN_BERRY,
#line 4012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4011
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4013
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4018
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 4019
        .trainerName = _("VICTORIA"),
#line 4020
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4021
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4022
F_TRAINER_FEMALE | 
#line 4023
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4024
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4025
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4027
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4027
            .heldItem = ITEM_ORAN_BERRY,
#line 4029
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4028
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4031
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 4032
        .trainerName = _("VANESSA"),
#line 4033
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4034
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4035
F_TRAINER_FEMALE | 
#line 4036
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4037
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4038
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4040
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4040
            .heldItem = ITEM_ORAN_BERRY,
#line 4042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4041
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4044
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 4045
        .trainerName = _("BETHANY"),
#line 4046
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4047
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4048
F_TRAINER_FEMALE | 
#line 4049
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4050
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4051
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4053
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4053
            .heldItem = ITEM_ORAN_BERRY,
#line 4055
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4054
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4057
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4057
            .heldItem = ITEM_ORAN_BERRY,
#line 4059
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4058
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4061
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4061
            .heldItem = ITEM_ORAN_BERRY,
#line 4063
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4062
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4065
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_1] =
    {
#line 4066
        .trainerName = _("ISABEL"),
#line 4067
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4068
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4069
F_TRAINER_FEMALE | 
#line 4070
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4071
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4072
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4074
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4074
            .heldItem = ITEM_ORAN_BERRY,
#line 4076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4075
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4078
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4078
            .heldItem = ITEM_ORAN_BERRY,
#line 4080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4079
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4082
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_1] =
    {
#line 4083
        .trainerName = _("TIMOTHY"),
#line 4084
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4085
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4087
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4088
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4089
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4091
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4093
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4092
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4095
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 4096
        .trainerName = _("VICKY"),
#line 4097
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4098
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4099
F_TRAINER_FEMALE | 
#line 4100
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4101
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4102
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4104
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4106
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4105
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4107
                MOVE_HIGH_JUMP_KICK,
                MOVE_MEDITATE,
                MOVE_CONFUSION,
                MOVE_DETECT,
            },
            },
        },
    },
#line 4112
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_1] =
    {
#line 4113
        .trainerName = _("SHELBY"),
#line 4114
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4115
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4116
F_TRAINER_FEMALE | 
#line 4117
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4118
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4119
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4121
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4123
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4122
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4125
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4127
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4126
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4129
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_1] =
    {
#line 4130
        .trainerName = _("Calvin"),
#line 4131
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4132
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4134
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4135
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4136
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4138
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4138
            .heldItem = ITEM_ORAN_BERRY,
#line 4142
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4139
            .ability = ABILITY_STEADFAST,
#line 4140
            .lvl = 26,
#line 4141
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4142
                MOVE_VACUUM_WAVE,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 4146
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4146
            .heldItem = ITEM_ORAN_BERRY,
#line 4150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4147
            .ability = ABILITY_UNBURDEN,
#line 4148
            .lvl = 26,
#line 4149
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4150
                MOVE_ASSURANCE,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 4154
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4155
        .trainerName = _("BILLY"),
#line 4156
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4157
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4159
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4160
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4161
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4163
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4164
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4167
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4168
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4171
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4172
        .trainerName = _("JOSH"),
#line 4173
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4174
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4176
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4177
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4178
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4180
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4182
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4181
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4183
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4185
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4186
        .trainerName = _("TOMMY"),
#line 4187
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4188
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4190
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4191
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4192
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4194
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4196
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4195
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4198
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4200
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4199
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4202
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4203
        .trainerName = _("JOEY"),
#line 4204
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4205
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4207
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4208
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4209
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4211
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4212
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4215
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4216
        .trainerName = _("BEN"),
#line 4217
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4218
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4220
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4221
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4222
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4224
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4225
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4227
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4232
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4234
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4233
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4235
                MOVE_AMNESIA,
                MOVE_SLUDGE,
                MOVE_YAWN,
                MOVE_POUND,
            },
            },
        },
    },
#line 4240
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4241
        .trainerName = _("QUINCY"),
#line 4242
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4243
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4245
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4246
        .items = { ITEM_FULL_RESTORE },
#line 4247
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4248
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4250
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4252
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4251
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4253
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 4258
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4260
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4259
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4261
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4266
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4267
        .trainerName = _("KATELYNN"),
#line 4268
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4269
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4270
F_TRAINER_FEMALE | 
#line 4271
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4272
        .items = { ITEM_FULL_RESTORE },
#line 4273
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4274
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4276
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4278
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4277
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4279
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4284
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4286
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4285
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4287
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4292
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4293
        .trainerName = _("JAYLEN"),
#line 4294
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4295
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4297
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4298
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4299
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4301
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4302
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4305
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4306
        .trainerName = _("DILLON"),
#line 4307
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4308
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4310
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4311
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4312
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4314
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4315
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4318
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4319
        .trainerName = _("EDDIE"),
#line 4320
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4321
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4323
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4324
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4325
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4327
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4328
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4331
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4332
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4335
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4336
        .trainerName = _("ALLEN"),
#line 4337
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4338
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4340
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4341
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4342
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4344
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4344
            .heldItem = ITEM_PETAYA_BERRY,
#line 4348
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4345
            .ability = ABILITY_CHEEK_POUCH,
#line 4346
            .lvl = 26,
#line 4347
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4348
                MOVE_BELCH,
                MOVE_BITE,
                MOVE_SUPER_FANG,
                MOVE_STUFF_CHEEKS,
            },
            },
            {
#line 4353
            .species = SPECIES_GRIMER_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4353
            .heldItem = ITEM_LIECHI_BERRY,
#line 4357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4354
            .ability = ABILITY_GLUTTONY,
#line 4355
            .lvl = 27,
#line 4356
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4357
                MOVE_THIEF,
                MOVE_ROCK_TOMB,
                MOVE_PAYBACK,
            },
            },
        },
    },
#line 4361
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4362
        .trainerName = _("TIMMY"),
#line 4363
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4364
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4366
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4367
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4368
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4370
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4370
            .heldItem = ITEM_EJECT_BUTTON,
#line 4374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4371
            .ability = ABILITY_DRIZZLE,
#line 4372
            .lvl = 29,
#line 4373
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4374
                MOVE_WING_ATTACK,
                MOVE_WATER_PULSE,
                MOVE_U_TURN,
            },
            },
            {
#line 4378
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4378
            .heldItem = ITEM_CHARCOAL,
#line 4382
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4379
            .ability = ABILITY_DROUGHT,
#line 4380
            .lvl = 29,
#line 4381
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4382
                MOVE_INCINERATE,
                MOVE_HEX,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 4387
    [DIFFICULTY_NORMAL][TRAINER_WALLACE] =
    {
#line 4388
        .trainerName = _("WALLACE"),
#line 4389
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4390
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender =
#line 4392
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4393
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 4394
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4395
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 4396
        .mugshotColor = MUGSHOT_COLOR_CHAMPION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4398
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4399
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4401
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 4406
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4407
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4409
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 4414
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4415
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4417
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 4422
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4424
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4423
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4425
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 4430
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4432
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4431
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4433
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 4438
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4438
            .heldItem = ITEM_SITRUS_BERRY,
#line 4440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4439
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4441
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4446
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4447
        .trainerName = _("ANDREW"),
#line 4448
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4449
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4451
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4452
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4453
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4455
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4455
            .heldItem = ITEM_EVIOLITE,
#line 4459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4456
            .ability = ABILITY_WATER_VEIL,
#line 4457
            .lvl = 28,
#line 4458
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4459
                MOVE_FAKE_OUT,
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
                MOVE_FLIP_TURN,
            },
            },
            {
#line 4464
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4464
            .heldItem = ITEM_IAPAPA_BERRY,
#line 4468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4465
            .ability = ABILITY_TORRENT,
#line 4466
            .lvl = 27,
#line 4467
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4468
                MOVE_FAKE_OUT,
                MOVE_ICY_WIND,
                MOVE_PROTECT,
                MOVE_FOLLOW_ME,
            },
            },
        },
    },
#line 4473
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4474
        .trainerName = _("IVAN"),
#line 4475
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4476
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4478
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4479
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4480
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4482
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4483
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4486
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4487
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4490
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4491
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4494
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4495
        .trainerName = _("CLAUDE"),
#line 4496
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4497
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4499
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4500
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4501
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4503
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4504
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4507
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4508
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4511
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4512
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4515
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
    {
#line 4516
        .trainerName = _("ELLIOT"),
#line 4517
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4518
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4520
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4521
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4522
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4524
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4525
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4528
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4529
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4532
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4533
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4536
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4537
        .trainerName = _("NED"),
#line 4538
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4539
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4541
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4542
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4543
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4545
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4547
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4546
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4549
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4550
        .trainerName = _("DALE"),
#line 4551
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4552
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4554
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4555
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4556
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4558
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4559
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4562
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4563
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4566
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4567
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4570
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4571
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4574
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4575
        .trainerName = _("NOLAN"),
#line 4576
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4577
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4579
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4580
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4581
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4583
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4584
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4587
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4588
        .trainerName = _("BARNY"),
#line 4589
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4590
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4592
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4593
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4594
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4596
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4597
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4600
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4601
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4604
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4605
        .trainerName = _("WADE"),
#line 4606
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4607
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4609
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4610
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4611
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4613
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4614
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4617
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4618
        .trainerName = _("CARTER"),
#line 4619
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4620
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4622
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4623
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4624
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4626
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4628
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4627
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4630
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4632
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4631
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4634
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4635
        .trainerName = _("RONALD"),
#line 4636
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4637
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4639
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4640
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4641
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4643
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4644
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4647
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4648
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4651
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4652
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4655
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4656
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4659
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4660
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4663
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4664
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4667
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4668
        .trainerName = _("JACOB"),
#line 4669
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4670
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4672
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4673
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4674
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4676
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4678
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4677
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4680
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4682
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4681
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4684
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4686
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4685
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4688
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4689
        .trainerName = _("ANTHONY"),
#line 4690
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4691
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4693
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4694
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4695
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4697
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4698
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4701
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4702
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4705
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
    {
#line 4706
        .trainerName = _("BENJAMIN"),
#line 4707
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4708
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4710
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4711
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4712
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4714
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4715
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4718
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_1] =
    {
#line 4719
        .trainerName = _("ABIGAIL"),
#line 4720
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4721
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4722
F_TRAINER_FEMALE | 
#line 4723
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4724
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4725
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4727
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4728
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4731
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4732
        .trainerName = _("JASMINE"),
#line 4733
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4734
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4735
F_TRAINER_FEMALE | 
#line 4736
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4737
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4738
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4740
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4742
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4741
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4744
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4746
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4745
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4748
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4749
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4752
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
    {
#line 4753
        .trainerName = _("DYLAN"),
#line 4754
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4755
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4757
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4758
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4759
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4761
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4761
            .heldItem = ITEM_WISE_GLASSES,
#line 4765
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4762
            .ability = ABILITY_TANGLED_FEET,
#line 4763
            .lvl = 30,
#line 4764
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4765
                MOVE_HYPER_VOICE,
                MOVE_AIR_CUTTER,
                MOVE_ROOST,
            },
            },
            {
#line 4769
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4769
            .heldItem = ITEM_POWER_HERB,
#line 4773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4770
            .ability = ABILITY_BATTERY,
#line 4771
            .lvl = 30,
#line 4772
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4773
                MOVE_DIG,
                MOVE_SKITTER_SMACK,
                MOVE_ELECTROWEB,
            },
            },
        },
    },
#line 4777
    [DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
    {
#line 4778
        .trainerName = _("MARIA"),
#line 4779
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4780
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4781
F_TRAINER_FEMALE | 
#line 4782
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4783
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4784
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4786
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4786
            .heldItem = ITEM_TOXIC_ORB,
#line 4790
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4787
            .ability = ABILITY_MARVEL_SCALE,
#line 4788
            .lvl = 30,
#line 4789
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4790
                MOVE_FACADE,
                MOVE_BREAKING_SWIPE,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 4795
            .species = SPECIES_BRAIXEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4795
            .heldItem = ITEM_MIRACLE_SEED,
#line 4799
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4796
            .ability = ABILITY_BLAZE,
#line 4797
            .lvl = 30,
#line 4798
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4799
                MOVE_BURNING_JEALOUSY,
                MOVE_PSYBEAM,
                MOVE_GRASS_KNOT,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4804
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4804
            .heldItem = ITEM_WISE_GLASSES,
#line 4808
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4805
            .ability = ABILITY_EFFECT_SPORE,
#line 4806
            .lvl = 30,
#line 4807
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4808
                MOVE_DREAM_EATER,
                MOVE_DRAINING_KISS,
                MOVE_MEGA_DRAIN,
                MOVE_SLEEP_POWDER,
            },
            },
        },
    },
#line 4813
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4814
        .trainerName = _("CAMDEN"),
#line 4815
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4816
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4818
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4819
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4820
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4822
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4823
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4826
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4827
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4830
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4831
        .trainerName = _("DEMETRIUS"),
#line 4832
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4833
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4835
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4836
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4837
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4839
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4840
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4843
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4844
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4847
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_1] =
    {
#line 4848
        .trainerName = _("ISAIAH"),
#line 4849
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4850
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4852
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4853
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4854
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4856
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4857
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4860
    [DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
    {
#line 4861
        .trainerName = _("PABLO"),
#line 4862
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4863
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4865
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4866
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4867
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4869
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4870
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4873
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4874
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4877
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4878
        .trainerName = _("CHASE"),
#line 4879
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4880
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4882
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4883
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4884
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4886
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4887
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4890
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4892
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4891
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4894
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4895
        .trainerName = _("ISOBEL"),
#line 4896
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4897
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4898
F_TRAINER_FEMALE | 
#line 4899
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4900
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4901
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4903
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4904
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4907
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4908
        .trainerName = _("DONNY"),
#line 4909
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4910
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4911
F_TRAINER_FEMALE | 
#line 4912
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4913
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4914
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4916
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4917
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4920
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4922
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4921
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4924
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4925
        .trainerName = _("TALIA"),
#line 4926
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4927
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4928
F_TRAINER_FEMALE | 
#line 4929
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4930
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4931
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4933
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4934
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4937
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_1] =
    {
#line 4938
        .trainerName = _("KATELYN"),
#line 4939
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4940
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4941
F_TRAINER_FEMALE | 
#line 4942
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4943
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4944
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4946
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4947
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4950
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4951
        .trainerName = _("ALLISON"),
#line 4952
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4953
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4954
F_TRAINER_FEMALE | 
#line 4955
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4956
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4957
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4959
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4960
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4963
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4965
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4964
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4967
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
    {
#line 4968
        .trainerName = _("NICOLAS"),
#line 4969
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4970
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4972
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4973
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4974
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4976
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4978
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4977
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4980
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4982
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4981
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4984
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4985
        .trainerName = _("AARON"),
#line 4986
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4987
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4989
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4990
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4991
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4993
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4994
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4996
                MOVE_DRAGON_BREATH,
                MOVE_HEADBUTT,
                MOVE_FOCUS_ENERGY,
                MOVE_EMBER,
            },
            },
        },
    },
#line 5001
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 5002
        .trainerName = _("PERRY"),
#line 5003
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5004
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5006
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5007
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5008
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5010
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5011
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5014
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 5015
        .trainerName = _("HUGH"),
#line 5016
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5017
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5019
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5020
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5021
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5023
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5024
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5027
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5028
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5031
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 5032
        .trainerName = _("PHIL"),
#line 5033
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5034
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5036
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5037
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5038
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5040
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5041
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5044
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 5045
        .trainerName = _("JARED"),
#line 5046
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5047
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5049
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5050
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5051
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5053
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5055
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5054
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5057
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5059
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5058
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5061
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5063
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5062
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5065
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 5066
        .trainerName = _("HUMBERTO"),
#line 5067
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5068
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5070
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5071
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5072
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5074
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5076
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5075
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5078
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 5079
        .trainerName = _("PRESLEY"),
#line 5080
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5081
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5083
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5084
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5085
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5087
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5088
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5091
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5092
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5095
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 5096
        .trainerName = _("EDWARDO"),
#line 5097
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5098
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5100
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5101
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5102
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5104
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5106
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5105
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5108
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5110
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5109
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5112
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 5113
        .trainerName = _("COLIN"),
#line 5114
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5115
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5117
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5118
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5119
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5121
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5122
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5125
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5126
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5129
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
    {
#line 5130
        .trainerName = _("ROBERT"),
#line 5131
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5132
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5134
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5135
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5136
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5138
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5139
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5142
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 5143
        .trainerName = _("BENNY"),
#line 5144
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5145
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5147
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5148
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5149
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5151
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5152
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5155
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5156
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5159
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5160
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5163
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 5164
        .trainerName = _("CHESTER"),
#line 5165
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5166
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5168
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5169
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5170
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5172
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5173
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5176
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5177
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5180
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 5181
        .trainerName = _("ALEX"),
#line 5182
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5183
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5185
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5186
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5187
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5189
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5191
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5190
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5193
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5195
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5194
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5197
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 5198
        .trainerName = _("BECK"),
#line 5199
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5200
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5202
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5203
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5204
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5206
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5207
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5210
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 5211
        .trainerName = _("YASU"),
#line 5212
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5213
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5215
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5216
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5217
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5219
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5220
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5223
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5224
        .trainerName = _("TAKASHI"),
#line 5225
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5226
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5228
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5229
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5230
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5232
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5233
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5236
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5237
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5240
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5241
        .trainerName = _("DIANNE"),
#line 5242
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5243
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5244
F_TRAINER_FEMALE | 
#line 5245
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5246
        .items = { ITEM_FULL_RESTORE },
#line 5247
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5248
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5250
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5251
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5253
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5256
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5257
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5259
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5262
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5263
        .trainerName = _("JANI"),
#line 5264
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5265
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5266
F_TRAINER_FEMALE | 
#line 5267
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5268
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5269
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5271
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5272
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5275
    [DIFFICULTY_NORMAL][TRAINER_LAO_1] =
    {
#line 5276
        .trainerName = _("LAO"),
#line 5277
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5278
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5280
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5281
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5282
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5284
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5285
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5287
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5292
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5293
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5295
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5300
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5301
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5303
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 5308
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5309
        .trainerName = _("LUNG"),
#line 5310
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5311
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5313
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5314
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5315
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5317
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5318
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5321
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5322
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5325
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5326
        .trainerName = _("JOCELYN"),
#line 5327
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5328
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5329
F_TRAINER_FEMALE | 
#line 5330
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5331
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5332
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5334
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5336
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5335
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5338
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5339
        .trainerName = _("LAURA"),
#line 5340
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5341
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5342
F_TRAINER_FEMALE | 
#line 5343
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5344
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5345
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5347
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5349
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5348
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5351
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
    {
#line 5352
        .trainerName = _("CYNDY"),
#line 5353
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5354
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5355
F_TRAINER_FEMALE | 
#line 5356
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5357
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5358
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5360
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5362
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5361
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5364
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5366
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5365
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5368
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5369
        .trainerName = _("CORA"),
#line 5370
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5371
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5372
F_TRAINER_FEMALE | 
#line 5373
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5374
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5375
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5377
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5379
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5378
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5381
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5382
        .trainerName = _("PAULA"),
#line 5383
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5384
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5385
F_TRAINER_FEMALE | 
#line 5386
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5387
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5388
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5390
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5392
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5391
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5394
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
    {
#line 5395
        .trainerName = _("MADELINE"),
#line 5396
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5397
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5398
F_TRAINER_FEMALE | 
#line 5399
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5400
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5401
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5403
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5404
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5406
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 5411
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5412
        .trainerName = _("CLARISSA"),
#line 5413
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5414
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5415
F_TRAINER_FEMALE | 
#line 5416
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5417
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5418
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5420
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5421
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5424
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5425
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5428
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5429
        .trainerName = _("ANGELICA"),
#line 5430
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5431
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5432
F_TRAINER_FEMALE | 
#line 5433
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5434
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5435
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5437
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5439
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5438
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5440
                MOVE_RAIN_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_THUNDER,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 5445
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5446
        .trainerName = _("BEVERLY"),
#line 5447
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5448
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5449
F_TRAINER_FEMALE | 
#line 5450
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5451
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5452
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5454
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5455
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5458
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5459
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5462
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5463
        .trainerName = _("IMANI"),
#line 5464
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5465
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5466
F_TRAINER_FEMALE | 
#line 5467
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5468
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5469
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5471
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5472
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5475
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5476
        .trainerName = _("KYLA"),
#line 5477
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5478
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5479
F_TRAINER_FEMALE | 
#line 5480
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5481
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5482
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5484
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5485
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5488
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5489
        .trainerName = _("DENISE"),
#line 5490
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5491
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5492
F_TRAINER_FEMALE | 
#line 5493
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5494
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5495
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5497
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5498
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5501
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5502
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5505
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5506
        .trainerName = _("BETH"),
#line 5507
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5508
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5509
F_TRAINER_FEMALE | 
#line 5510
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5511
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5512
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5514
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5515
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5518
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5519
        .trainerName = _("TARA"),
#line 5520
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5521
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5522
F_TRAINER_FEMALE | 
#line 5523
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5524
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5525
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5527
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5528
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5531
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5532
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5535
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5536
        .trainerName = _("MISSY"),
#line 5537
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5538
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5539
F_TRAINER_FEMALE | 
#line 5540
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5541
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5542
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5544
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5545
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5548
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5549
        .trainerName = _("ALICE"),
#line 5550
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5551
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5552
F_TRAINER_FEMALE | 
#line 5553
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5554
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5555
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5557
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5558
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5561
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5562
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5565
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5566
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5569
    [DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
    {
#line 5570
        .trainerName = _("JENNY"),
#line 5571
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5572
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5573
F_TRAINER_FEMALE | 
#line 5574
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5575
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5576
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5578
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5579
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5582
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5583
        .trainerName = _("GRACE"),
#line 5584
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5585
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5586
F_TRAINER_FEMALE | 
#line 5587
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5588
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5589
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5591
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5592
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5595
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5596
        .trainerName = _("TANYA"),
#line 5597
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5598
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5599
F_TRAINER_FEMALE | 
#line 5600
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5601
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5602
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5604
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5605
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5608
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5609
        .trainerName = _("SHARON"),
#line 5610
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5611
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5612
F_TRAINER_FEMALE | 
#line 5613
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5614
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5615
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5617
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5618
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5621
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5622
        .trainerName = _("NIKKI"),
#line 5623
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5624
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5625
F_TRAINER_FEMALE | 
#line 5626
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5627
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5628
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5630
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5631
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5634
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5635
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5638
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5639
        .trainerName = _("BRENDA"),
#line 5640
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5641
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5642
F_TRAINER_FEMALE | 
#line 5643
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5644
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5645
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5647
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5648
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5651
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5652
        .trainerName = _("KATIE"),
#line 5653
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5654
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5655
F_TRAINER_FEMALE | 
#line 5656
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5657
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5658
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5660
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5661
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5664
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5665
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5668
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5669
        .trainerName = _("SUSIE"),
#line 5670
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5671
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5672
F_TRAINER_FEMALE | 
#line 5673
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5674
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5675
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5677
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5678
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5681
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5682
        .trainerName = _("KARA"),
#line 5683
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5684
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5685
F_TRAINER_FEMALE | 
#line 5686
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5687
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5688
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5690
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5691
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5694
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5695
        .trainerName = _("DANA"),
#line 5696
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5697
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5698
F_TRAINER_FEMALE | 
#line 5699
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5700
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5701
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5703
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5704
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5707
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5708
        .trainerName = _("SIENNA"),
#line 5709
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5710
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5711
F_TRAINER_FEMALE | 
#line 5712
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5713
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5714
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5716
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5717
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5720
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5721
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5724
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5725
        .trainerName = _("DEBRA"),
#line 5726
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5727
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5728
F_TRAINER_FEMALE | 
#line 5729
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5730
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5731
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5733
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5734
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5737
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5738
        .trainerName = _("LINDA"),
#line 5739
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5740
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5741
F_TRAINER_FEMALE | 
#line 5742
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5743
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5744
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5746
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5747
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5750
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5751
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5754
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5755
        .trainerName = _("KAYLEE"),
#line 5756
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5757
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5758
F_TRAINER_FEMALE | 
#line 5759
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5760
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5761
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5763
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5764
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5767
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5768
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5771
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5772
        .trainerName = _("LAUREL"),
#line 5773
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5774
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5775
F_TRAINER_FEMALE | 
#line 5776
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5777
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5778
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5780
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5781
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5784
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5785
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5788
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5789
        .trainerName = _("CARLEE"),
#line 5790
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5791
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5792
F_TRAINER_FEMALE | 
#line 5793
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5794
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5795
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5797
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5798
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5801
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5802
        .trainerName = _("HEIDI"),
#line 5803
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5804
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5805
F_TRAINER_FEMALE | 
#line 5806
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5807
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5808
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5810
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5811
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5813
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 5818
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5819
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5821
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 5826
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5827
        .trainerName = _("BECKY"),
#line 5828
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5829
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5830
F_TRAINER_FEMALE | 
#line 5831
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5832
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5833
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5835
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5836
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5838
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 5843
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5844
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5846
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 5851
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5852
        .trainerName = _("CAROL"),
#line 5853
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5854
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5855
F_TRAINER_FEMALE | 
#line 5856
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5857
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5858
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5860
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5861
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5864
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5865
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5868
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_5] =
    {
#line 5869
        .trainerName = _("Grunt"),
#line 5870
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 5871
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 5873
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5874
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5875
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5877
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5878
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5881
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5882
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5885
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5886
        .trainerName = _("MARTHA"),
#line 5887
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5888
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5889
F_TRAINER_FEMALE | 
#line 5890
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5891
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5892
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5894
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5895
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5898
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5899
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5902
    [DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
    {
#line 5903
        .trainerName = _("DIANA"),
#line 5904
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5905
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5906
F_TRAINER_FEMALE | 
#line 5907
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5908
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5909
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5911
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5912
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5915
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5916
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5919
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5920
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5923
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT3] =
    {
#line 5924
        .trainerName = _("Grunt"),
#line 5925
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 5926
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 5928
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5929
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5930
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5932
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5933
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5935
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 5940
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5941
        .trainerName = _("IRENE"),
#line 5942
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5943
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5944
F_TRAINER_FEMALE | 
#line 5945
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5946
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5947
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5949
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5950
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5953
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5954
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5957
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
    {
#line 5958
        .trainerName = _("AMY & LIV"),
#line 5959
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5960
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5962
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5963
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5964
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5966
            .species = SPECIES_THWACKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5966
            .heldItem = ITEM_EJECT_BUTTON,
#line 5970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5967
            .ability = ABILITY_GRASSY_SURGE,
#line 5968
            .lvl = 27,
#line 5969
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5970
                MOVE_FAKE_OUT,
                MOVE_GRASSY_GLIDE,
                MOVE_FACADE,
                MOVE_THIEF,
            },
            },
            {
#line 5975
            .species = SPECIES_FLABEBE_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5975
            .heldItem = ITEM_TERRAIN_EXTENDER,
#line 5979
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5976
            .ability = ABILITY_SYMBIOSIS,
#line 5977
            .lvl = 28,
#line 5978
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5979
                MOVE_MAGICAL_LEAF,
                MOVE_FAIRY_WIND,
                MOVE_AROMATHERAPY,
                MOVE_MISTY_TERRAIN,
            },
            },
            {
#line 5984
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5984
            .heldItem = ITEM_TERRAIN_EXTENDER,
#line 5988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5985
            .ability = ABILITY_INNER_FOCUS,
#line 5986
            .lvl = 27,
#line 5987
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5988
                MOVE_CONFUSION,
                MOVE_SEISMIC_TOSS,
                MOVE_TELEKINESIS,
                MOVE_PSYCHIC_TERRAIN,
            },
            },
            {
#line 5993
            .species = SPECIES_PINCURCHIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5993
            .heldItem = ITEM_JABOCA_BERRY,
#line 5997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5994
            .ability = ABILITY_ELECTRIC_SURGE,
#line 5995
            .lvl = 28,
#line 5996
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5997
                MOVE_SPARK,
                MOVE_ELECTROWEB,
                MOVE_WATER_GUN,
                MOVE_TOXIC_SPIKES,
            },
            },
        },
    },
#line 6002
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
    {
#line 6003
        .trainerName = _("GINA & MIA"),
#line 6004
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6005
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6007
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6008
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6009
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6011
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6012
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6015
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6016
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6019
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 6020
        .trainerName = _("MIU & YUKI"),
#line 6021
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6022
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6024
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6025
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6026
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6028
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6029
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6032
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6033
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6036
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 6037
        .trainerName = _("HUEY"),
#line 6038
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6039
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6041
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6042
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6043
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6045
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6047
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6046
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6049
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6051
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6050
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6053
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 6054
        .trainerName = _("EDMOND"),
#line 6055
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6056
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6058
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6059
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6060
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6062
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6063
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6066
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
    {
#line 6067
        .trainerName = _("ERNEST"),
#line 6068
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6069
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6071
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6072
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6073
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6075
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6076
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6079
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6080
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6083
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 6084
        .trainerName = _("DWAYNE"),
#line 6085
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6086
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6088
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6089
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6090
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6092
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6093
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6096
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6097
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6100
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6101
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6104
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 6105
        .trainerName = _("PHILLIP"),
#line 6106
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6107
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6109
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6110
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6111
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6113
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6114
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6117
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6118
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6121
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 6122
        .trainerName = _("LEONARD"),
#line 6123
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6124
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6126
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6127
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6128
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6130
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6131
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6134
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6135
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6138
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6139
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6142
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6143
        .trainerName = _("DUNCAN"),
#line 6144
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6145
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6147
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6148
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6149
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6151
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6152
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6155
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6156
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6159
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 6160
        .trainerName = _("ELI"),
#line 6161
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6162
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6164
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6165
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6166
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6168
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6170
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6169
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6172
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 6173
        .trainerName = _("ANNIKA"),
#line 6174
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6175
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 6176
F_TRAINER_FEMALE | 
#line 6177
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6178
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6179
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6181
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6181
            .heldItem = ITEM_ORAN_BERRY,
#line 6183
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6182
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6184
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
            {
#line 6189
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6189
            .heldItem = ITEM_ORAN_BERRY,
#line 6191
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6190
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6192
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 6197
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 6198
        .trainerName = _("JAZMYN"),
#line 6199
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 6200
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6201
F_TRAINER_FEMALE | 
#line 6202
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6203
        .items = { ITEM_HYPER_POTION },
#line 6204
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6205
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6207
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6208
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6211
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 6212
        .trainerName = _("JONAS"),
#line 6213
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6214
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6216
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6217
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6218
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6220
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6221
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6223
                MOVE_TOXIC,
                MOVE_THUNDER,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 6228
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 6229
        .trainerName = _("KAYLEY"),
#line 6230
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6231
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6232
F_TRAINER_FEMALE | 
#line 6233
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6234
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6235
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6237
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6238
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6240
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
            },
            },
        },
    },
#line 6245
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 6246
        .trainerName = _("AURON"),
#line 6247
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6248
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6250
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6251
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6252
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6254
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6255
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6258
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6259
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6262
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 6263
        .trainerName = _("KELVIN"),
#line 6264
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6265
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6267
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6268
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6269
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6271
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6273
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6272
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6275
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6277
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6276
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6279
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 6280
        .trainerName = _("MARLEY"),
#line 6281
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6282
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6283
F_TRAINER_FEMALE | 
#line 6284
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6285
        .items = { ITEM_HYPER_POTION },
#line 6286
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6287
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6289
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6290
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6292
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 6297
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6298
        .trainerName = _("REYNA"),
#line 6299
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6300
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6301
F_TRAINER_FEMALE | 
#line 6302
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6303
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6304
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6306
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6308
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6307
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6310
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6312
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6311
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6314
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6315
        .trainerName = _("HUDSON"),
#line 6316
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6317
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6319
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6320
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6321
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6323
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6324
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6327
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6328
        .trainerName = _("CONOR"),
#line 6329
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6330
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6332
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6333
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6334
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6336
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6337
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6340
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6342
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6341
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6344
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
#line 6345
        .trainerName = _("EDWIN"),
#line 6346
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6347
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6349
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6350
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6351
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6353
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6353
            .heldItem = ITEM_SOFT_SAND,
#line 6357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6354
            .ability = ABILITY_LEVITATE,
#line 6355
            .lvl = 29,
#line 6356
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6357
                MOVE_EARTH_POWER,
                MOVE_SHADOW_BALL,
                MOVE_STORED_POWER,
                MOVE_COSMIC_POWER,
            },
            },
            {
#line 6362
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6362
            .heldItem = ITEM_FLAME_ORB,
#line 6366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6363
            .ability = ABILITY_INNER_FOCUS,
#line 6364
            .lvl = 28,
#line 6365
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6366
                MOVE_FIRE_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_GYRO_BALL,
                MOVE_FLING,
            },
            },
            {
#line 6371
            .species = SPECIES_DARUMAKA_GALAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6371
            .heldItem = ITEM_CHARTI_BERRY,
#line 6375
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6372
            .ability = ABILITY_INNER_FOCUS,
#line 6373
            .lvl = 28,
#line 6374
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6375
                MOVE_ICE_PUNCH,
                MOVE_MEGA_PUNCH,
                MOVE_THIEF,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6380
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6381
        .trainerName = _("HECTOR"),
#line 6382
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6383
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6385
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6386
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6387
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6389
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6390
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6393
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6394
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6397
    [DIFFICULTY_NORMAL][TRAINER_COURTNEY_MOSSDEEP] =
    {
#line 6398
        .trainerName = _("Courtney"),
#line 6399
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6400
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
        .encounterMusic_gender =
#line 6401
F_TRAINER_FEMALE | 
#line 6402
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6404
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6405
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6403
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6407
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6409
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6408
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6411
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6413
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6412
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6415
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6417
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6416
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6419
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 6420
        .trainerName = _("WALLY"),
#line 6421
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6422
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 6425
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6426
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6427
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6428
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6423
        .mugshotColor = MUGSHOT_COLOR_WHITE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6430
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6432
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6431
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6433
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 6438
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6440
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6439
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6441
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 6446
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6448
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6447
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6449
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 6454
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6456
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6455
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6457
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 6462
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6464
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6463
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6465
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 6470
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6471
        .trainerName = _("Brendan"),
#line 6472
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6473
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6475
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6476
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6477
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6478
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6480
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6480
            .heldItem = ITEM_SITRUS_BERRY,
#line 6482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6481
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6483
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_ICY_WIND,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 6488
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6489
        .trainerName = _("Brendan"),
#line 6490
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6491
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6493
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6494
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6495
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6496
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6498
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6500
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6499
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6502
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6504
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6503
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6506
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6508
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6507
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6510
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 6511
        .trainerName = _("Brendan"),
#line 6512
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6513
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6515
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6516
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6517
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6518
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6520
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6522
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6521
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6524
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6526
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6525
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6528
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6530
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6529
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6532
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6533
        .trainerName = _("Brendan"),
#line 6534
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6535
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6537
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6538
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6539
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6540
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6542
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6542
            .heldItem = ITEM_SITRUS_BERRY,
#line 6544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6543
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6545
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_ICY_WIND,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 6550
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 6551
        .trainerName = _("Brendan"),
#line 6552
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6553
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6555
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6556
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6557
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6558
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6560
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6562
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6561
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6564
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6566
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6565
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6568
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6570
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6569
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6572
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6573
        .trainerName = _("Brendan"),
#line 6574
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6575
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6577
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6578
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6579
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6580
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6582
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6584
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6583
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6586
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6588
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6587
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6590
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6592
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6591
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6594
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6595
        .trainerName = _("Brendan"),
#line 6596
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6597
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6599
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6600
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6601
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6602
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6604
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6604
            .heldItem = ITEM_SITRUS_BERRY,
#line 6606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6605
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6607
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_ICY_WIND,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 6612
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6613
        .trainerName = _("Brendan"),
#line 6614
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6615
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6617
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6618
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6619
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6620
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6622
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6624
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6623
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6626
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6628
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6627
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6630
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6632
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6631
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6634
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6635
        .trainerName = _("Brendan"),
#line 6636
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6637
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6639
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6640
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6641
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6642
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6644
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6646
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6645
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6648
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6650
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6649
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6652
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6654
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6653
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6656
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 6657
        .trainerName = _("May"),
#line 6658
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6659
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6660
F_TRAINER_FEMALE | 
#line 6661
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6662
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6663
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6664
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6666
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6666
            .heldItem = ITEM_FLAME_ORB,
#line 6668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6667
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6669
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 6671
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6672
        .trainerName = _("May"),
#line 6673
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6674
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6675
F_TRAINER_FEMALE | 
#line 6676
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6677
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6678
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6679
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6681
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6683
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6682
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6685
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6687
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6686
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6689
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6691
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6690
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6693
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 6694
        .trainerName = _("May"),
#line 6695
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6696
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6697
F_TRAINER_FEMALE | 
#line 6698
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6699
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6700
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6701
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6703
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6705
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6704
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6707
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6709
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6708
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6711
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6713
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6712
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6715
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 6716
        .trainerName = _("May"),
#line 6717
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6718
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6719
F_TRAINER_FEMALE | 
#line 6720
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6721
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6722
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6723
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6725
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6725
            .heldItem = ITEM_FLAME_ORB,
#line 6727
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6726
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6728
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 6730
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6731
        .trainerName = _("May"),
#line 6732
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6733
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6734
F_TRAINER_FEMALE | 
#line 6735
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6736
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6737
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6738
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6740
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6742
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6741
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6744
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6746
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6745
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6748
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6750
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6749
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6752
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6753
        .trainerName = _("May"),
#line 6754
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6755
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6756
F_TRAINER_FEMALE | 
#line 6757
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6758
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6759
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6760
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6762
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6764
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6763
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6766
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6768
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6767
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6770
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6772
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6771
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6774
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 6775
        .trainerName = _("May"),
#line 6776
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6777
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6778
F_TRAINER_FEMALE | 
#line 6779
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6780
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6781
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6782
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6784
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6784
            .heldItem = ITEM_FLAME_ORB,
#line 6786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6785
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6787
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 6789
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6790
        .trainerName = _("May"),
#line 6791
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6792
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6793
F_TRAINER_FEMALE | 
#line 6794
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6795
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6796
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6797
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6799
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6801
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6800
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6803
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6805
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6804
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6807
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6809
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6808
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6811
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6812
        .trainerName = _("May"),
#line 6813
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6814
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6815
F_TRAINER_FEMALE | 
#line 6816
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6817
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6818
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6819
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6821
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6823
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6822
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6825
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6827
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6826
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6829
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6831
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6830
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6833
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
    {
#line 6834
        .trainerName = _("ISAAC"),
#line 6835
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6836
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6838
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6839
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6840
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6842
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6843
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6846
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6847
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6850
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6851
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6854
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6855
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6858
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6859
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6862
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6863
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6866
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6867
        .trainerName = _("DAVIS"),
#line 6868
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6869
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6871
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6872
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6873
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6875
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6876
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6879
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6880
        .trainerName = _("MITCHELL"),
#line 6881
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6882
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6884
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6885
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6886
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6888
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6889
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6891
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 6896
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6897
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6899
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 6904
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_SKY_PILLAR_1] =
    {
#line 6905
        .trainerName = _("Grunt"),
#line 6906
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 6907
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6909
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6910
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6911
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6913
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6915
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6914
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6917
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6919
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6918
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6921
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6923
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6922
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6925
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6927
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6926
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6929
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6931
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6930
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6933
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6935
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6934
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6937
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_SKY_PILLAR_2] =
    {
#line 6938
        .trainerName = _("Grunt"),
#line 6939
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 6940
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 6941
F_TRAINER_FEMALE | 
#line 6942
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6943
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6944
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6946
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6948
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6947
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6950
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6952
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6951
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6954
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6956
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6955
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6958
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6960
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6959
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6962
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6964
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6963
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6966
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6968
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6967
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6970
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_SKY_PILLAR_3] =
    {
#line 6971
        .trainerName = _("Grunt"),
#line 6972
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 6973
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 6974
F_TRAINER_FEMALE | 
#line 6975
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6976
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6977
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6979
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6981
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6980
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6983
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6985
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6984
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6987
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6989
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6988
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6991
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6993
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6992
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6995
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6997
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 6996
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6999
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7001
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7000
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7003
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
    {
#line 7004
        .trainerName = _("LYDIA"),
#line 7005
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7006
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7007
F_TRAINER_FEMALE | 
#line 7008
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7009
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7010
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7012
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7013
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7016
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7017
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7020
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7022
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7021
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7024
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7025
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7028
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7029
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7032
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7033
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7036
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 7037
        .trainerName = _("HALLE"),
#line 7038
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7039
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7040
F_TRAINER_FEMALE | 
#line 7041
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7042
        .items = { ITEM_FULL_RESTORE },
#line 7043
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7044
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7046
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7047
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7050
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7051
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7054
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 7055
        .trainerName = _("GARRISON"),
#line 7056
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 7057
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 7059
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7060
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7061
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7063
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7064
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7067
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_SKY_PILLAR_4] =
    {
#line 7068
        .trainerName = _("Grunt"),
#line 7069
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 7070
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7072
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7073
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7074
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7076
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7078
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7077
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7080
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7082
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7081
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7084
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7086
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7085
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7088
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7090
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7089
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7092
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7094
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7093
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7096
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7098
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7097
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7100
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_SKY_PILLAR_1] =
    {
#line 7101
        .trainerName = _("Grunt"),
#line 7102
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 7103
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 7105
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7106
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7107
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7109
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7111
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7110
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7113
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7115
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7114
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7117
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7119
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7118
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7121
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7123
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7122
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7125
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7127
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7126
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7129
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7131
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7130
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7133
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_SKY_PILLAR_2] =
    {
#line 7134
        .trainerName = _("Grunt"),
#line 7135
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 7136
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7137
F_TRAINER_FEMALE | 
#line 7138
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7139
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7140
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7142
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7144
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7143
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7146
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7148
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7147
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7150
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7152
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7151
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7154
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7156
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7155
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7158
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7160
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7159
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7162
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7164
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7163
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7166
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
    {
#line 7167
        .trainerName = _("JACKSON"),
#line 7168
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7169
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7171
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7172
        .items = { ITEM_FULL_RESTORE },
#line 7173
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7174
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7176
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7178
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7177
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7180
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 7181
        .trainerName = _("LORENZO"),
#line 7182
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7183
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7185
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7186
        .items = { ITEM_FULL_RESTORE },
#line 7187
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7188
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7190
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7192
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7191
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7194
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7196
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7195
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7198
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7200
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7199
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7202
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 7203
        .trainerName = _("SEBASTIAN"),
#line 7204
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7205
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7207
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7208
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7209
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7211
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7213
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7212
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7215
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_SKY_PILLAR_3] =
    {
#line 7216
        .trainerName = _("Grunt"),
#line 7217
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 7218
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 7220
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7221
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7222
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7224
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7226
            .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
#line 7225
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7228
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_SKY_PILLAR_4] =
    {
#line 7229
        .trainerName = _("Grunt"),
#line 7230
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 7231
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7233
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7234
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7235
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7237
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7239
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 7238
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7241
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_SKY_PILLAR] =
    {
#line 7242
        .trainerName = _("Tabitha"),
#line 7243
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7244
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7247
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7248
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7249
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7245
        .mugshotColor = MUGSHOT_COLOR_AQUAMAGMA,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7251
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7251
            .heldItem = ITEM_EJECT_PACK,
#line 7255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7254
            .ability = ABILITY_SAND_STREAM,
#line 7252
            .lvl = 87,
#line 7253
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7255
                MOVE_HIGH_HORSEPOWER,
                MOVE_SUPERPOWER,
                MOVE_CRUNCH,
                MOVE_STONE_EDGE,
            },
            },
            {
#line 7260
            .species = SPECIES_HELIOLISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7260
            .heldItem = ITEM_SILK_SCARF,
#line 7264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7263
            .ability = ABILITY_SAND_VEIL,
#line 7261
            .lvl = 86,
#line 7262
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7264
                MOVE_FOCUS_BLAST,
                MOVE_THUNDERBOLT,
                MOVE_WEATHER_BALL,
                MOVE_HYPER_VOICE,
            },
            },
            {
#line 7269
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7269
            .heldItem = ITEM_YACHE_BERRY,
#line 7273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7272
            .ability = ABILITY_SAND_FORCE,
#line 7270
            .lvl = 86,
#line 7271
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7273
                MOVE_EARTH_POWER,
                MOVE_IRON_TAIL,
                MOVE_WEATHER_BALL,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 7278
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
    {
#line 7279
        .trainerName = _("CATHERINE"),
#line 7280
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7281
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7282
F_TRAINER_FEMALE | 
#line 7283
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7284
        .items = { ITEM_FULL_RESTORE },
#line 7285
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7286
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7288
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7290
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7289
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7292
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7294
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7293
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7296
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 7297
        .trainerName = _("JENNA"),
#line 7298
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7299
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7300
F_TRAINER_FEMALE | 
#line 7301
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7302
        .items = { ITEM_FULL_RESTORE },
#line 7303
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7304
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7306
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7308
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7307
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7310
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7312
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7311
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7314
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7316
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7315
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7318
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 7319
        .trainerName = _("SOPHIA"),
#line 7320
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7321
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7322
F_TRAINER_FEMALE | 
#line 7323
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7324
        .items = { ITEM_FULL_RESTORE },
#line 7325
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7326
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7328
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7330
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7329
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7332
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7334
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7333
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7336
    [DIFFICULTY_NORMAL][TRAINER_MATT_SKY_PILLAR] =
    {
#line 7337
        .trainerName = _("Matt"),
#line 7338
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 7339
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 7342
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7343
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7344
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7340
        .mugshotColor = MUGSHOT_COLOR_AQUAMAGMA,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7346
            .species = SPECIES_NINETALES_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7346
            .heldItem = ITEM_EJECT_BUTTON,
#line 7350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7349
            .ability = ABILITY_SNOW_WARNING,
#line 7347
            .lvl = 87,
#line 7348
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7350
                MOVE_MOONBLAST,
                MOVE_ICE_BEAM,
                MOVE_WEATHER_BALL,
                MOVE_AURORA_VEIL,
            },
            },
            {
#line 7355
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7355
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 7359
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7358
            .ability = ABILITY_SNOW_CLOAK,
#line 7356
            .lvl = 86,
#line 7357
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7359
                MOVE_HIGH_HORSEPOWER,
                MOVE_ICICLE_CRASH,
                MOVE_ROCK_SLIDE,
                MOVE_HARD_PRESS,
            },
            },
            {
#line 7364
            .species = SPECIES_ARTICUNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7364
            .heldItem = ITEM_CHARTI_BERRY,
#line 7368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7367
            .ability = ABILITY_PRESSURE,
#line 7365
            .lvl = 86,
#line 7366
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7368
                MOVE_AIR_SLASH,
                MOVE_FREEZE_DRY,
                MOVE_WEATHER_BALL,
                MOVE_EXTRASENSORY,
            },
            },
        },
    },
#line 7373
    [DIFFICULTY_NORMAL][TRAINER_COURTNEY_SKY_PILLAR] =
    {
#line 7374
        .trainerName = _("Courtney"),
#line 7375
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7376
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
        .encounterMusic_gender =
#line 7378
F_TRAINER_FEMALE | 
#line 7379
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7380
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7381
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7377
        .mugshotColor = MUGSHOT_COLOR_AQUAMAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7383
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7385
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 7384
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7387
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7389
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 7388
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7391
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SKY_PILLAR] =
    {
#line 7392
        .trainerName = _("Shelly"),
#line 7393
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 7394
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 7396
F_TRAINER_FEMALE | 
#line 7397
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7398
        .items = { ITEM_FULL_RESTORE },
#line 7399
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7400
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7395
        .mugshotColor = MUGSHOT_COLOR_AQUAMAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7402
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7404
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 7403
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7406
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7408
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 7407
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7410
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 7411
        .trainerName = _("JULIO"),
#line 7412
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7413
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 7415
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7416
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7417
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7419
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7420
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7423
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 7424
        .trainerName = _("GRUNT"),
#line 7425
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7426
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 7428
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7429
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7430
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7432
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7434
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7433
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7436
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7438
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7437
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7440
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 7441
        .trainerName = _("GRUNT"),
#line 7442
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7443
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7444
F_TRAINER_FEMALE | 
#line 7445
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7446
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7447
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7449
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7450
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7453
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7454
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7457
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 7458
        .trainerName = _("Grunt"),
#line 7459
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 7460
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7462
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7463
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7464
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7466
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7467
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7470
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7471
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7474
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 7475
        .trainerName = _("GRUNT"),
#line 7476
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7477
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7479
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7480
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7481
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7483
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7485
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7484
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7487
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7489
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7488
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7491
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 7492
        .trainerName = _("MARC"),
#line 7493
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7494
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7496
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7497
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7498
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7500
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7502
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7501
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7504
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7506
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7505
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7508
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7509
        .trainerName = _("BRENDEN"),
#line 7510
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7511
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7513
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7514
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7515
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7517
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7519
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7518
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7521
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7522
        .trainerName = _("LILITH"),
#line 7523
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7524
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7525
F_TRAINER_FEMALE | 
#line 7526
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7527
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7528
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7530
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7532
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7531
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7534
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7535
        .trainerName = _("CRISTIAN"),
#line 7536
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7537
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7539
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7540
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7541
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7543
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7545
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7544
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7547
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7548
        .trainerName = _("SYLVIA"),
#line 7549
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7550
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7551
F_TRAINER_FEMALE | 
#line 7552
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7553
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7554
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7556
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7558
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7557
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7560
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7561
        .trainerName = _("LEONARDO"),
#line 7562
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7563
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7565
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7566
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7567
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7569
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7570
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7573
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7574
        .trainerName = _("ATHENA"),
#line 7575
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7576
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7577
F_TRAINER_FEMALE | 
#line 7578
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7579
        .items = { ITEM_HYPER_POTION },
#line 7580
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7581
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7583
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7585
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7584
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7586
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 7590
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7592
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7591
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7593
                MOVE_SURF,
                MOVE_THIEF,
            },
            },
        },
    },
#line 7596
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7597
        .trainerName = _("HARRISON"),
#line 7598
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7599
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7601
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7602
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7603
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7605
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7606
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7609
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7610
        .trainerName = _("GRUNT"),
#line 7611
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7612
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7614
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7615
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7616
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7618
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7619
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7622
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7623
        .trainerName = _("CLARENCE"),
#line 7624
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7625
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7627
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7628
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7629
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7631
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7632
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7635
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7636
        .trainerName = _("TERRY"),
#line 7637
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7638
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7639
F_TRAINER_FEMALE | 
#line 7640
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7641
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7642
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7644
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7645
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7648
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7649
        .trainerName = _("NATE"),
#line 7650
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7651
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7653
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7654
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7655
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7657
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7659
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7658
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7661
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7662
        .trainerName = _("KATHLEEN"),
#line 7663
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7664
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7665
F_TRAINER_FEMALE | 
#line 7666
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7667
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7668
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7670
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7672
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7671
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7674
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7675
        .trainerName = _("CLIFFORD"),
#line 7676
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7677
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7679
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7680
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7681
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7683
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7684
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7687
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7688
        .trainerName = _("NICHOLAS"),
#line 7689
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7690
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7692
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7693
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7694
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7696
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7697
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7700
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7701
        .trainerName = _("GRUNT"),
#line 7702
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7703
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7704
F_TRAINER_FEMALE | 
#line 7705
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7706
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7707
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7709
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7710
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7713
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7714
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7717
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7718
        .trainerName = _("GRUNT"),
#line 7719
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7720
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7722
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7723
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7724
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7726
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7727
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7730
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7731
        .trainerName = _("GRUNT"),
#line 7732
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7733
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7734
F_TRAINER_FEMALE | 
#line 7735
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7736
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7737
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7739
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7740
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7743
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7744
        .trainerName = _("GRUNT"),
#line 7745
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7746
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7747
F_TRAINER_FEMALE | 
#line 7748
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7749
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7750
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7752
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7753
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7756
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 7757
        .trainerName = _("Tabitha"),
#line 7758
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7759
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7762
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7763
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7764
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7760
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7766
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7767
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7770
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7771
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7774
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7775
        .trainerName = _("MACEY"),
#line 7776
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7777
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7778
F_TRAINER_FEMALE | 
#line 7779
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7780
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7781
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7783
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7784
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7787
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 7788
        .trainerName = _("Brendan"),
#line 7789
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7790
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7792
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7793
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7794
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7795
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7797
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7799
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7798
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7801
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7803
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7802
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7805
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7806
        .trainerName = _("Brendan"),
#line 7807
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7808
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7810
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7811
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7812
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7813
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7815
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7817
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7816
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7819
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7821
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7820
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7823
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7824
        .trainerName = _("PAXTON"),
#line 7825
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7826
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7828
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7829
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7830
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7832
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7833
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7836
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7837
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7840
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7841
        .trainerName = _("ISABELLA"),
#line 7842
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7843
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7844
F_TRAINER_FEMALE | 
#line 7845
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7846
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7847
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7849
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7849
            .heldItem = ITEM_EVIOLITE,
#line 7853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7850
            .ability = ABILITY_OWN_TEMPO,
#line 7851
            .lvl = 29,
#line 7852
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7853
                MOVE_DOUBLE_HIT,
                MOVE_LOW_SWEEP,
                MOVE_HELPING_HAND,
                MOVE_AFTER_YOU,
            },
            },
            {
#line 7858
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7858
            .heldItem = ITEM_CHARTI_BERRY,
#line 7862
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7859
            .ability = ABILITY_SERENE_GRACE,
#line 7860
            .lvl = 28,
#line 7861
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7862
                MOVE_AIR_CUTTER,
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
                MOVE_AFTER_YOU,
            },
            },
        },
    },
#line 7867
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7868
        .trainerName = _("GRUNT"),
#line 7869
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7870
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7871
F_TRAINER_FEMALE | 
#line 7872
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7873
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7874
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7876
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7877
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7880
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7881
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7884
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7885
        .trainerName = _("TABITHA"),
#line 7886
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7887
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7890
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7891
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7892
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7889
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7894
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7896
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7895
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7898
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7900
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7899
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7902
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7904
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7903
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7906
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7907
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7910
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7911
        .trainerName = _("JONATHAN"),
#line 7912
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7913
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7915
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7916
        .items = { ITEM_HYPER_POTION },
#line 7917
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7918
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7920
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7921
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7924
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7925
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7928
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7929
        .trainerName = _("Brendan"),
#line 7930
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7931
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7933
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7934
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7935
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7936
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7938
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7940
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7939
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7942
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7944
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7943
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7946
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7947
        .trainerName = _("May"),
#line 7948
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7949
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7950
F_TRAINER_FEMALE | 
#line 7951
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7952
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7953
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7954
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7956
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7958
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7957
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7960
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7962
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7961
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7964
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7965
        .trainerName = _("MAXIE"),
#line 7966
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7967
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7970
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7971
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7972
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7973
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7968
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7975
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7977
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7976
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7979
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7981
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7980
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7983
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7985
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7984
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7987
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7988
        .trainerName = _("MAXIE"),
#line 7989
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7990
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7993
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7994
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 7995
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7996
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7991
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7998
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8000
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7999
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8002
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8004
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8003
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8006
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8008
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8007
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8010
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 8011
        .trainerName = _("TIANA"),
#line 8012
        .trainerClass = TRAINER_CLASS_LASS,
#line 8013
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8014
F_TRAINER_FEMALE | 
#line 8015
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8016
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8017
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8019
            .species = SPECIES_GOSSIFLEUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8019
            .heldItem = ITEM_OCCA_BERRY,
#line 8023
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8020
            .ability = ABILITY_COTTON_DOWN,
#line 8021
            .lvl = 26,
#line 8022
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8023
                MOVE_RAZOR_LEAF,
                MOVE_RAPID_SPIN,
                MOVE_LEAFAGE,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 8028
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8028
            .heldItem = ITEM_PASSHO_BERRY,
#line 8032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8029
            .ability = ABILITY_OWN_TEMPO,
#line 8030
            .lvl = 27,
#line 8031
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8032
                MOVE_INCINERATE,
                MOVE_ROCK_TOMB,
                MOVE_MUD_SHOT,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 8037
    [DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
    {
#line 8038
        .trainerName = _("HALEY"),
#line 8039
        .trainerClass = TRAINER_CLASS_LASS,
#line 8040
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8041
F_TRAINER_FEMALE | 
#line 8042
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8043
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8044
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8046
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8047
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8050
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8051
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8054
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 8055
        .trainerName = _("JANICE"),
#line 8056
        .trainerClass = TRAINER_CLASS_LASS,
#line 8057
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8058
F_TRAINER_FEMALE | 
#line 8059
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8060
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8061
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8063
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8064
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8067
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 8068
        .trainerName = _("VIVI"),
#line 8069
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 8070
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8071
F_TRAINER_FEMALE | 
#line 8072
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8073
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8074
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8076
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8078
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8077
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8080
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8082
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8081
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8084
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8086
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8085
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8088
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_SKY_PILLAR] =
    {
#line 8089
        .trainerName = _("Maxie"),
#line 8090
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8091
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8094
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8095
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8096
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8092
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8098
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8098
            .heldItem = ITEM_DRAGON_GEM,
#line 8102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8101
            .ability = ABILITY_AIR_LOCK,
#line 8099
            .lvl = 87,
#line 8100
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8102
                MOVE_DRACO_METEOR,
                MOVE_TAILWIND,
                MOVE_FLAMETHROWER,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 8107
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8107
            .heldItem = ITEM_CHARIZARDITE_Y,
#line 8111
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8110
            .ability = ABILITY_BLAZE,
#line 8108
            .lvl = 87,
#line 8109
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8111
                MOVE_HEAT_WAVE,
                MOVE_AIR_SLASH,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_PULSE,
            },
            },
            {
#line 8116
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8116
            .heldItem = ITEM_FIRE_GEM,
#line 8120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8119
            .ability = ABILITY_SHELL_ARMOR,
#line 8117
            .lvl = 86,
#line 8118
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8120
                MOVE_PROTECT,
                MOVE_ERUPTION,
                MOVE_SOLAR_BEAM,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 8125
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8125
            .heldItem = ITEM_FOCUS_SASH,
#line 8129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8128
            .ability = ABILITY_CHLOROPHYLL,
#line 8126
            .lvl = 86,
#line 8127
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8129
                MOVE_AFTER_YOU,
                MOVE_LEAF_STORM,
                MOVE_WEATHER_BALL,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 8134
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE_SKY_PILLAR] =
    {
#line 8135
        .trainerName = _("Archie"),
#line 8136
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 8137
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 8140
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8141
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8142
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8138
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8144
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8144
            .heldItem = ITEM_DRAGON_GEM,
#line 8148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8147
            .ability = ABILITY_AIR_LOCK,
#line 8145
            .lvl = 87,
#line 8146
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8148
                MOVE_DRACO_METEOR,
                MOVE_TAILWIND,
                MOVE_FLAMETHROWER,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 8153
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8153
            .heldItem = ITEM_SWAMPERTITE,
#line 8157
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8156
            .ability = ABILITY_DAMP,
#line 8154
            .lvl = 87,
#line 8155
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8157
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_POISON_JAB,
            },
            },
            {
#line 8162
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8162
            .heldItem = ITEM_ASSAULT_VEST,
#line 8166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8165
            .ability = ABILITY_STAMINA,
#line 8163
            .lvl = 86,
#line 8164
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8166
                MOVE_BODY_PRESS,
                MOVE_FLASH_CANNON,
                MOVE_ELECTRO_SHOT,
                MOVE_DRAGON_PULSE,
            },
            },
        },
    },
#line 8171
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_114_TREECKO] =
    {
#line 8172
        .trainerName = _("May"),
#line 8173
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8174
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8175
F_TRAINER_FEMALE | 
#line 8176
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8177
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8178
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8179
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8181
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8183
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8182
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8185
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8187
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8186
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8189
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 8190
        .trainerName = _("SALLY"),
#line 8191
        .trainerClass = TRAINER_CLASS_LASS,
#line 8192
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8193
F_TRAINER_FEMALE | 
#line 8194
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8195
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8196
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8198
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8199
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8202
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 8203
        .trainerName = _("ROBIN"),
#line 8204
        .trainerClass = TRAINER_CLASS_LASS,
#line 8205
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8206
F_TRAINER_FEMALE | 
#line 8207
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8208
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8209
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8211
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8212
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8215
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8216
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8219
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8220
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8223
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 8224
        .trainerName = _("ANDREA"),
#line 8225
        .trainerClass = TRAINER_CLASS_LASS,
#line 8226
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8227
F_TRAINER_FEMALE | 
#line 8228
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8229
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8230
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8232
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8234
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8233
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8236
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 8237
        .trainerName = _("CRISSY"),
#line 8238
        .trainerClass = TRAINER_CLASS_LASS,
#line 8239
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8240
F_TRAINER_FEMALE | 
#line 8241
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8242
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8243
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8245
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8247
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8246
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8249
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8251
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8250
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8253
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 8254
        .trainerName = _("RICK"),
#line 8255
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8256
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8258
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8259
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8260
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8262
            .species = SPECIES_YUNGOOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8262
            .heldItem = ITEM_BERRY_JUICE,
#line 8266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8263
            .ability = ABILITY_STAKEOUT,
#line 8264
            .lvl = 26,
#line 8265
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8266
                MOVE_BITE,
                MOVE_TACKLE,
                MOVE_LEER,
            },
            },
            {
#line 8270
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8270
            .heldItem = ITEM_ORAN_BERRY,
#line 8274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8271
            .ability = ABILITY_SWARM,
#line 8272
            .lvl = 26,
#line 8273
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8274
                MOVE_POUNCE,
                MOVE_SHADOW_SNEAK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 8278
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 8279
        .trainerName = _("LYLE"),
#line 8280
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8281
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8283
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8284
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8285
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8287
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8288
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8291
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8292
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8295
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8296
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8299
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8300
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8303
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 8304
        .trainerName = _("JOSE"),
#line 8305
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8306
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8308
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8309
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8310
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8312
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8314
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8313
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8316
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8318
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8317
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8320
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 8321
        .trainerName = _("DOUG"),
#line 8322
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8323
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8325
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8326
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8327
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8329
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8330
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8333
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8334
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8337
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 8338
        .trainerName = _("GREG"),
#line 8339
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8340
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8342
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8343
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8344
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8346
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8347
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8350
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8351
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8354
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 8355
        .trainerName = _("KENT"),
#line 8356
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8357
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8359
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8360
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8361
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8363
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8364
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8367
    [DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
    {
#line 8368
        .trainerName = _("JAMES"),
#line 8369
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8370
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8372
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8374
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8375
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8378
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8379
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8382
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_114_MUDKIP] =
    {
#line 8383
        .trainerName = _("May"),
#line 8384
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8385
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8386
F_TRAINER_FEMALE | 
#line 8387
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8388
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8389
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8390
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8392
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8394
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8393
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8396
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_114_TREECKO] =
    {
#line 8397
        .trainerName = _("Brendan"),
#line 8398
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8399
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8401
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8402
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8403
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8404
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8406
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8408
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8407
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8410
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8412
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8411
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8414
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_114_TORCHIC] =
    {
#line 8415
        .trainerName = _("Brendan"),
#line 8416
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8417
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8419
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8420
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8421
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8422
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8424
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8426
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8425
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8428
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8430
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8429
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8432
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8434
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8433
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8436
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 8437
        .trainerName = _("BRICE"),
#line 8438
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8439
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8441
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8442
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8443
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8445
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8446
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8449
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8450
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8453
    [DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
    {
#line 8454
        .trainerName = _("TRENT"),
#line 8455
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8456
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8458
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8459
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8460
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8462
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8463
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8466
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8467
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8470
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8471
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8474
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_3] =
    {
#line 8475
        .trainerName = _("Grunt"),
#line 8476
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8477
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8478
F_TRAINER_FEMALE | 
#line 8479
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8480
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8481
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8483
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8484
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8487
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8488
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8491
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_2] =
    {
#line 8492
        .trainerName = _("Grunt"),
#line 8493
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8494
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8496
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8497
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8498
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8500
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8501
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8504
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8505
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8508
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 8509
        .trainerName = _("ALAN"),
#line 8510
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8511
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8513
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8514
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8515
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8517
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8518
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8521
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8522
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8525
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8526
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8529
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 8530
        .trainerName = _("CLARK"),
#line 8531
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8532
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8534
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8535
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8536
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8538
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8539
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8542
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 8543
        .trainerName = _("ERIC"),
#line 8544
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8545
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8547
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8548
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8549
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8551
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8552
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8555
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8556
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8559
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_114_MUDKIP] =
    {
#line 8560
        .trainerName = _("Brendan"),
#line 8561
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8562
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8564
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8565
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8566
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8567
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8569
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8570
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8572
                MOVE_GUST,
                MOVE_GROWL,
            },
            },
            {
#line 8575
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8576
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8578
                MOVE_BITE,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 8581
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_114_TORCHIC] =
    {
#line 8582
        .trainerName = _("May"),
#line 8583
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8584
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8585
F_TRAINER_FEMALE | 
#line 8586
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8587
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8588
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8589
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8591
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8593
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8592
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8595
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8597
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8596
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8599
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8601
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8600
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8603
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8605
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8604
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8607
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT4] =
    {
#line 8608
        .trainerName = _("Grunt"),
#line 8609
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8610
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8612
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8613
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8614
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8616
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8617
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8620
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8621
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8624
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8625
        .trainerName = _("LEA & JED"),
#line 8626
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8627
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8629
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8630
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8631
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8633
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8634
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8637
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8638
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8641
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
    {
#line 8642
        .trainerName = _("KIRA & DAN"),
#line 8643
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8644
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8646
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8647
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8648
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8650
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8651
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8654
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8655
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8658
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8659
        .trainerName = _("JOHANNA"),
#line 8660
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8661
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8662
F_TRAINER_FEMALE | 
#line 8663
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8664
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8665
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8667
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8668
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8671
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8672
        .trainerName = _("GERALD"),
#line 8673
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8674
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8676
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8677
        .items = { ITEM_HYPER_POTION },
#line 8678
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8679
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8681
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8682
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8684
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 8689
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8690
        .trainerName = _("VIVIAN"),
#line 8691
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8692
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8693
F_TRAINER_FEMALE | 
#line 8694
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8695
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8696
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8698
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8700
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8699
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8701
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 8706
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8708
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8707
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8709
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 8714
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8715
        .trainerName = _("DANIELLE"),
#line 8716
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8717
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8718
F_TRAINER_FEMALE | 
#line 8719
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8720
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8721
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8723
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8725
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8724
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8726
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 8731
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8732
        .trainerName = _("HIDEO"),
#line 8733
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8734
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8736
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8737
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8738
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8740
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8741
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8743
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 8748
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8749
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8751
                MOVE_TACKLE,
                MOVE_POISON_GAS,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 8756
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8757
        .trainerName = _("KEIGO"),
#line 8758
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8759
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8761
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8762
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8763
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8765
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8766
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8768
                MOVE_POISON_GAS,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 8773
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8774
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8776
                MOVE_SAND_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_FURY_CUTTER,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 8781
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8782
        .trainerName = _("RILEY"),
#line 8783
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8784
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8786
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8787
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8788
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8790
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8791
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8793
                MOVE_LEECH_LIFE,
                MOVE_FURY_SWIPES,
                MOVE_MIND_READER,
                MOVE_DIG,
            },
            },
            {
#line 8798
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8799
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8801
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 8806
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8807
        .trainerName = _("FLINT"),
#line 8808
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8809
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8811
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8812
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8813
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8815
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8817
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8816
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8819
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8821
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8820
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8823
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8824
        .trainerName = _("ASHLEY"),
#line 8825
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8826
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8827
F_TRAINER_FEMALE | 
#line 8828
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8829
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8830
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8832
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8834
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8833
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8836
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8838
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8837
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8840
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8842
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8841
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8844
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8845
        .trainerName = _("WALLY"),
#line 8846
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8847
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8850
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8851
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8852
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8848
        .mugshotColor = MUGSHOT_COLOR_WHITE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8854
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8856
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8855
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8858
    [DIFFICULTY_NORMAL][TRAINER_WALLY_ROUTE_114] =
    {
#line 8859
        .trainerName = _("Wally"),
#line 8860
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8861
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8863
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8864
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8865
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8867
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8869
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8868
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8870
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 8875
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8877
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8876
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8878
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 8883
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8885
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8884
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8886
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 8891
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8893
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8892
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8894
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 8899
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8901
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 8900
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8902
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 8907
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 8908
        .trainerName = _("Brendan"),
#line 8909
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8910
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8912
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8913
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8914
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8915
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8917
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8919
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8918
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8921
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8923
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8922
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8925
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8927
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8926
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8929
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8931
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8930
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8933
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8934
        .trainerName = _("Brendan"),
#line 8935
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8936
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8938
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8939
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8940
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8941
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8943
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8945
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8944
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8947
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8949
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8948
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8951
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8953
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8952
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8955
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8957
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8956
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8959
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8960
        .trainerName = _("Brendan"),
#line 8961
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8962
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8964
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8965
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8966
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8967
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8969
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8971
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8970
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8973
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8975
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8974
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8977
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8979
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8978
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8981
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8983
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8982
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8985
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8986
        .trainerName = _("May"),
#line 8987
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8988
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8989
F_TRAINER_FEMALE | 
#line 8990
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8991
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8992
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8993
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8995
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8997
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8996
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8999
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9001
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9000
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9003
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9005
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9004
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9007
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9009
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9008
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9011
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 9012
        .trainerName = _("May"),
#line 9013
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9014
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9015
F_TRAINER_FEMALE | 
#line 9016
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9017
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9018
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 9019
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9021
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9023
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9022
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9025
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9027
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9026
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9029
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9031
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9030
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9033
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9035
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9034
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9037
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 9038
        .trainerName = _("May"),
#line 9039
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9040
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9041
F_TRAINER_FEMALE | 
#line 9042
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9043
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9044
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 9045
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9047
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9049
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9048
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9051
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9053
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9052
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9055
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9057
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9056
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9059
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9061
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9060
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9063
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 9064
        .trainerName = _("JONAH"),
#line 9065
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9066
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9068
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9069
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9070
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9072
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9073
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9076
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9077
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9080
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9081
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9084
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 9085
        .trainerName = _("HENRY"),
#line 9086
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9087
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9089
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9090
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9091
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9093
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9094
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9097
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9098
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9101
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 9102
        .trainerName = _("ROGER"),
#line 9103
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9104
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9106
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9107
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9108
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9110
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9111
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9114
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9115
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9118
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9119
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9122
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 9123
        .trainerName = _("ALEXA"),
#line 9124
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9125
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9126
F_TRAINER_FEMALE | 
#line 9127
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9128
        .items = { ITEM_FULL_RESTORE },
#line 9129
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9130
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9132
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9134
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9133
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9136
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9138
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9137
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9140
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 9141
        .trainerName = _("RUBEN"),
#line 9142
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9143
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9145
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9146
        .items = { ITEM_HYPER_POTION },
#line 9147
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9148
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9150
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9152
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9151
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9154
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9156
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9155
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9158
    [DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
    {
#line 9159
        .trainerName = _("KOJI"),
#line 9160
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9161
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 9163
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9164
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9165
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9167
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9168
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9171
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 9172
        .trainerName = _("WAYNE"),
#line 9173
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9174
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9176
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9177
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9178
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9180
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9181
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9184
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9185
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9188
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9189
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9192
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 9193
        .trainerName = _("AIDAN"),
#line 9194
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9195
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9197
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9198
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9199
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9201
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9202
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9205
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9206
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9209
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 9210
        .trainerName = _("REED"),
#line 9211
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9212
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9214
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9215
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9216
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9218
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9219
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9222
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9224
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9223
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9226
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 9227
        .trainerName = _("TISHA"),
#line 9228
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9229
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9230
F_TRAINER_FEMALE | 
#line 9231
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9232
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9233
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9235
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9237
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9236
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9239
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 9240
        .trainerName = _("TORI & TIA"),
#line 9241
        .trainerClass = TRAINER_CLASS_TWINS,
#line 9242
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 9244
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9245
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9246
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9248
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9249
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9252
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9253
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9256
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 9257
        .trainerName = _("KIM & IRIS"),
#line 9258
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 9259
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 9261
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9262
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9263
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9265
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9266
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9268
                MOVE_SING,
                MOVE_FURY_ATTACK,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 9273
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9274
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9276
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9281
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 9282
        .trainerName = _("TYRA & IVY"),
#line 9283
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 9284
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 9286
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9287
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9288
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9290
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9291
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9293
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 9298
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9299
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9301
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_MUD_SPORT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 9306
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 9307
        .trainerName = _("MEL & PAUL"),
#line 9308
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9309
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9311
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9312
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9313
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9315
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9316
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9318
                MOVE_GUST,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 9323
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9324
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9326
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 9331
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
    {
#line 9332
        .trainerName = _("JOHN & JAY"),
#line 9333
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9334
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9336
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9337
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9338
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9340
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9342
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9341
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9343
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9348
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9350
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9349
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9351
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9356
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 9357
        .trainerName = _("RELI & IAN"),
#line 9358
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9359
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9361
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9362
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9363
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9365
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9366
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9369
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9370
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9373
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
    {
#line 9374
        .trainerName = _("LILA & ROY"),
#line 9375
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9376
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9378
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9379
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9380
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9382
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9383
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9386
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9387
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9390
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 9391
        .trainerName = _("LISA & RAY"),
#line 9392
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9393
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9395
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9396
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9397
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9399
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9400
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9403
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9404
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9407
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 9408
        .trainerName = _("CHRIS"),
#line 9409
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9410
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9412
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9413
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9414
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9416
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9417
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9420
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9421
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9424
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9425
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9428
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9430
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9429
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9432
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 9433
        .trainerName = _("DAWSON"),
#line 9434
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 9435
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 9437
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9438
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9439
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9441
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9441
            .heldItem = ITEM_NUGGET,
#line 9443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9442
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9445
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9446
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9449
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 9450
        .trainerName = _("SARAH"),
#line 9451
        .trainerClass = TRAINER_CLASS_LADY,
#line 9452
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 9453
F_TRAINER_FEMALE | 
#line 9454
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9455
        .items = { ITEM_FULL_RESTORE },
#line 9456
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9457
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9459
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9460
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9463
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9463
            .heldItem = ITEM_NUGGET,
#line 9465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9464
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9467
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 9468
        .trainerName = _("DARIAN"),
#line 9469
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9470
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9472
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9473
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9474
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9476
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9477
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9480
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE109_1] =
    {
#line 9481
        .trainerName = _("Grunt"),
#line 9482
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 9483
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 9484
F_TRAINER_FEMALE | 
#line 9485
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9486
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9487
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9489
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9490
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9493
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE109_4] =
    {
#line 9494
        .trainerName = _("Grunt"),
#line 9495
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 9496
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 9498
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9499
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9500
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9502
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9503
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9506
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9507
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9510
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 9511
        .trainerName = _("KALEB"),
#line 9512
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 9513
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 9515
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9516
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9517
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9519
            .species = SPECIES_SLOWPOKE_GALAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9519
            .heldItem = ITEM_COVERT_CLOAK,
#line 9523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9520
            .ability = ABILITY_OWN_TEMPO,
#line 9521
            .lvl = 29,
#line 9522
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9523
                MOVE_PSYBEAM,
                MOVE_ACID,
                MOVE_YAWN,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 9528
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9528
            .heldItem = ITEM_ROOM_SERVICE,
#line 9532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9529
            .ability = ABILITY_TRACE,
#line 9530
            .lvl = 28,
#line 9531
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9532
                MOVE_PSYBEAM,
                MOVE_ICY_WIND,
                MOVE_THUNDER_SHOCK,
                MOVE_TRICK_ROOM,
            },
            },
        },
    },
#line 9537
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 9538
        .trainerName = _("JOSEPH"),
#line 9539
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9540
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9542
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9543
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9544
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9546
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9546
            .heldItem = ITEM_SHARP_BEAK,
#line 9550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9547
            .ability = ABILITY_PRANKSTER,
#line 9548
            .lvl = 28,
#line 9549
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9550
                MOVE_WING_ATTACK,
                MOVE_ASSURANCE,
                MOVE_NIGHT_SHADE,
                MOVE_TAILWIND,
            },
            },
            {
#line 9555
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9555
            .heldItem = ITEM_WIDE_LENS,
#line 9559
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9556
            .ability = ABILITY_SWIFT_SWIM,
#line 9557
            .lvl = 29,
#line 9558
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9559
                MOVE_WATERFALL,
                MOVE_BOUNCE,
                MOVE_U_TURN,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 9564
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 9565
        .trainerName = _("ALYSSA"),
#line 9566
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9567
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9568
F_TRAINER_FEMALE | 
#line 9569
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9570
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9571
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9573
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9574
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9577
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 9578
        .trainerName = _("MARCOS"),
#line 9579
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9580
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9582
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9583
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9584
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9586
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9588
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9587
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9590
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 9591
        .trainerName = _("RHETT"),
#line 9592
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9593
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 9595
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9596
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9597
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9599
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9601
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9600
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9603
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 9604
        .trainerName = _("TYRON"),
#line 9605
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9606
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9608
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9609
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9610
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9612
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9613
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9616
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 9617
        .trainerName = _("CELINA"),
#line 9618
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9619
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9620
F_TRAINER_FEMALE | 
#line 9621
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9622
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9623
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9625
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9626
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9629
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 9630
        .trainerName = _("BIANCA"),
#line 9631
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9632
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9633
F_TRAINER_FEMALE | 
#line 9634
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9635
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9636
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9638
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9639
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9642
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 9643
        .trainerName = _("HAYDEN"),
#line 9644
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9645
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9647
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9648
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9649
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9651
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9652
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9655
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 9656
        .trainerName = _("SOPHIE"),
#line 9657
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9658
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9659
F_TRAINER_FEMALE | 
#line 9660
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9661
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9662
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9664
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9665
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9668
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9669
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9672
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 9673
        .trainerName = _("COBY"),
#line 9674
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9675
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9677
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9678
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9679
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9681
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9682
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9685
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9686
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9689
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 9690
        .trainerName = _("LAWRENCE"),
#line 9691
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9692
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9694
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9695
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9696
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9698
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9699
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9702
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9703
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9706
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 9707
        .trainerName = _("WYATT"),
#line 9708
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 9709
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 9711
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9712
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9713
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9715
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9716
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9719
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9720
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9723
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_4] =
    {
#line 9724
        .trainerName = _("Grunt"),
#line 9725
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9726
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9727
F_TRAINER_FEMALE | 
#line 9728
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9729
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9730
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9732
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9733
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9736
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9737
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9740
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 9741
        .trainerName = _("KAI"),
#line 9742
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9743
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9745
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9746
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9747
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9749
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9750
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9753
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9754
        .trainerName = _("CHARLOTTE"),
#line 9755
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9756
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9757
F_TRAINER_FEMALE | 
#line 9758
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9759
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9760
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9762
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9763
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9766
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9767
        .trainerName = _("DEANDRE"),
#line 9768
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9769
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9771
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9772
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9773
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9775
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9776
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9779
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9780
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9783
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9784
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9787
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9788
        .trainerName = _("GRUNT"),
#line 9789
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9790
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9792
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9793
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9794
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9796
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9797
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9800
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9801
        .trainerName = _("GRUNT"),
#line 9802
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9803
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9805
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9806
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9807
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9809
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9810
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9813
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9814
        .trainerName = _("GRUNT"),
#line 9815
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9816
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9818
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9819
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9820
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9822
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9823
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9826
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9827
        .trainerName = _("GRUNT"),
#line 9828
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9829
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9831
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9832
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9833
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9835
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9836
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9839
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9840
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9843
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9844
        .trainerName = _("GRUNT"),
#line 9845
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9846
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9848
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9849
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9850
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9852
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9853
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9856
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9857
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9860
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9861
        .trainerName = _("GRUNT"),
#line 9862
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9863
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9865
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9866
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9867
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9869
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9870
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9873
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9874
        .trainerName = _("GRUNT"),
#line 9875
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9876
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9878
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9879
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9880
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9882
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9883
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9886
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9887
        .trainerName = _("GRUNT"),
#line 9888
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9889
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9891
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9892
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9893
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9895
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9896
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9899
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9900
        .trainerName = _("GRUNT"),
#line 9901
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9902
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9904
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9905
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9906
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9908
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9909
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9912
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9913
        .trainerName = _("GRUNT"),
#line 9914
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9915
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9917
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9918
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9919
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9921
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9922
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9925
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9926
        .trainerName = _("GRUNT"),
#line 9927
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9928
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9930
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9931
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9932
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9934
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9935
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9938
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9939
        .trainerName = _("GRUNT"),
#line 9940
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9941
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9943
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9944
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9945
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9947
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9948
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9951
    [DIFFICULTY_NORMAL][TRAINER_COURTNEY_MAGMA_HIDEOUT] =
    {
#line 9952
        .trainerName = _("Courtney"),
#line 9953
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9954
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
        .encounterMusic_gender =
#line 9956
F_TRAINER_FEMALE | 
#line 9957
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9958
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9959
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 9955
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9961
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9962
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9965
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9966
        .trainerName = _("GRUNT"),
#line 9967
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9968
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9969
F_TRAINER_FEMALE | 
#line 9970
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9971
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9972
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9974
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9975
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9978
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9979
        .trainerName = _("GRUNT"),
#line 9980
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9981
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9982
F_TRAINER_FEMALE | 
#line 9983
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9984
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9985
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9987
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9988
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9991
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9992
        .trainerName = _("GRUNT"),
#line 9993
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9994
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9995
F_TRAINER_FEMALE | 
#line 9996
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9997
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9998
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10000
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10001
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10004
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 10005
        .trainerName = _("TABITHA"),
#line 10006
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 10007
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 10010
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10011
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10012
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10008
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10014
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10016
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10015
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10018
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10020
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10019
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10022
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10024
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10023
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10026
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10028
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10027
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10030
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 10031
        .trainerName = _("DARCY"),
#line 10032
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10033
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10034
F_TRAINER_FEMALE | 
#line 10035
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10036
        .items = { ITEM_HYPER_POTION },
#line 10037
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10038
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10040
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10041
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10044
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10045
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10048
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 10049
        .trainerName = _("MAXIE"),
#line 10050
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 10051
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 10054
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10055
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10056
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10052
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10058
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10060
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10059
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10062
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10064
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10063
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10066
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10068
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10067
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10070
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 10071
        .trainerName = _("PETE"),
#line 10072
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 10073
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 10075
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10076
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10077
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10079
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10080
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10083
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 10084
        .trainerName = _("ISABELLE"),
#line 10085
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 10086
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 10087
F_TRAINER_FEMALE | 
#line 10088
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10089
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10090
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10092
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10093
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10096
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
    {
#line 10097
        .trainerName = _("ANDRES"),
#line 10098
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 10099
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 10101
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10102
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10103
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10105
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10107
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10106
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10109
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10111
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10110
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10113
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 10114
        .trainerName = _("JOSUE"),
#line 10115
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10116
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10118
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10119
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10120
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10122
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10124
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10123
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10126
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10128
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10127
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10130
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 10131
        .trainerName = _("CAMRON"),
#line 10132
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10133
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 10135
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10136
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10137
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10139
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10141
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10140
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10143
    [DIFFICULTY_NORMAL][TRAINER_CORY_1] =
    {
#line 10144
        .trainerName = _("CORY"),
#line 10145
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10146
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10148
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10149
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10150
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10152
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10153
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10156
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10157
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10160
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10161
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10164
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 10165
        .trainerName = _("CAROLINA"),
#line 10166
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10167
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10168
F_TRAINER_FEMALE | 
#line 10169
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10170
        .items = { ITEM_HYPER_POTION },
#line 10171
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10172
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10174
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10176
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10175
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10178
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10180
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10179
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10182
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10184
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10183
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10186
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 10187
        .trainerName = _("ELIJAH"),
#line 10188
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10189
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10191
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10192
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10193
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10195
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10196
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10199
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10200
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10203
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 10204
        .trainerName = _("CELIA"),
#line 10205
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10206
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 10207
F_TRAINER_FEMALE | 
#line 10208
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10209
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10210
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10212
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10213
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10216
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10217
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10220
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 10221
        .trainerName = _("BRYAN"),
#line 10222
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 10223
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 10225
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10226
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10227
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10229
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10230
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10233
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10234
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10237
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 10238
        .trainerName = _("BRANDEN"),
#line 10239
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10240
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 10242
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10243
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10244
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10246
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10247
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10250
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10251
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10254
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 10255
        .trainerName = _("BRYANT"),
#line 10256
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10257
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 10259
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10260
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10261
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10263
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10264
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10267
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10268
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10271
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 10272
        .trainerName = _("SHAYLA"),
#line 10273
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 10274
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 10275
F_TRAINER_FEMALE | 
#line 10276
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10277
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10278
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10280
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10281
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10284
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10285
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10288
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 10289
        .trainerName = _("KYRA"),
#line 10290
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10291
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 10292
F_TRAINER_FEMALE | 
#line 10293
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10294
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10295
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10297
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10298
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10301
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10302
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10305
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 10306
        .trainerName = _("JAIDEN"),
#line 10307
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10308
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 10310
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10311
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10312
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10314
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10315
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10318
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10320
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10319
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10322
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 10323
        .trainerName = _("ALIX"),
#line 10324
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10325
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10326
F_TRAINER_FEMALE | 
#line 10327
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10328
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10329
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10331
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10332
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10335
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10336
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10339
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 10340
        .trainerName = _("HELENE"),
#line 10341
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10342
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10343
F_TRAINER_FEMALE | 
#line 10344
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10345
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10346
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10348
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10349
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10352
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10353
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10356
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 10357
        .trainerName = _("MARLENE"),
#line 10358
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10359
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10360
F_TRAINER_FEMALE | 
#line 10361
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10362
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10363
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10365
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10366
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10369
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10370
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10373
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 10374
        .trainerName = _("DEVAN"),
#line 10375
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10376
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10378
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10379
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10380
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10382
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10383
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10386
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10387
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10390
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 10391
        .trainerName = _("JOHNSON"),
#line 10392
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 10393
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 10395
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10396
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10397
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10399
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10400
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10403
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10404
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10407
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 10408
        .trainerName = _("MELINA"),
#line 10409
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10410
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 10411
F_TRAINER_FEMALE | 
#line 10412
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10413
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10414
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10416
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10417
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10420
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 10421
        .trainerName = _("BRANDI"),
#line 10422
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10423
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10424
F_TRAINER_FEMALE | 
#line 10425
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10426
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10427
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10429
            .species = SPECIES_TATSUGIRI_DROOPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10429
            .heldItem = ITEM_AIR_BALLOON,
#line 10433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10430
            .ability = ABILITY_STORM_DRAIN,
#line 10431
            .lvl = 31,
#line 10432
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10433
                MOVE_WATER_PULSE,
                MOVE_DRAGON_BREATH,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 10438
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10438
            .heldItem = ITEM_SITRUS_BERRY,
#line 10442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10439
            .ability = ABILITY_LEVITATE,
#line 10440
            .lvl = 30,
#line 10441
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10442
                MOVE_VOLT_SWITCH,
                MOVE_GIGA_DRAIN,
                MOVE_KNOCK_OFF,
                MOVE_ACID_SPRAY,
            },
            },
            {
#line 10447
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10447
            .heldItem = ITEM_LIGHT_CLAY,
#line 10451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10448
            .ability = ABILITY_LEVITATE,
#line 10449
            .lvl = 30,
#line 10450
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10451
                MOVE_PSYCHIC_NOISE,
                MOVE_DRAINING_KISS,
                MOVE_GRASS_KNOT,
                MOVE_REFLECT,
            },
            },
        },
    },
#line 10456
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 10457
        .trainerName = _("AISHA"),
#line 10458
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10459
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10460
F_TRAINER_FEMALE | 
#line 10461
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10462
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10463
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10465
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10465
            .heldItem = ITEM_SOFT_SAND,
#line 10469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10466
            .ability = ABILITY_INTIMIDATE,
#line 10467
            .lvl = 31,
#line 10468
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10469
                MOVE_DIG,
                MOVE_ICE_FANG,
                MOVE_BULLDOZE,
                MOVE_BITE,
            },
            },
            {
#line 10474
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10474
            .heldItem = ITEM_SOFT_SAND,
#line 10478
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10475
            .ability = ABILITY_INTIMIDATE,
#line 10476
            .lvl = 30,
#line 10477
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10478
                MOVE_STOMPING_TANTRUM,
                MOVE_MUD_SHOT,
                MOVE_FIRE_FANG,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 10483
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 10484
        .trainerName = _("MAKAYLA"),
#line 10485
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 10486
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 10487
F_TRAINER_FEMALE | 
#line 10488
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10489
        .items = { ITEM_HYPER_POTION },
#line 10490
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10491
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10493
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10494
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10497
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10498
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10501
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 10502
        .trainerName = _("FABIAN"),
#line 10503
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10504
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 10506
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10507
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10508
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10510
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10511
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10514
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 10515
        .trainerName = _("DAYTON"),
#line 10516
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10517
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 10519
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10520
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10521
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10523
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10524
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10527
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10528
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10531
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 10532
        .trainerName = _("RACHEL"),
#line 10533
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 10534
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 10535
F_TRAINER_FEMALE | 
#line 10536
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10537
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10538
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10540
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10541
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10544
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 10545
        .trainerName = _("LEONEL"),
#line 10546
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10547
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 10549
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10550
        .items = { ITEM_HYPER_POTION },
#line 10551
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10552
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10554
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10556
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10555
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10557
                MOVE_THUNDER,
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 10561
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 10562
        .trainerName = _("CALLIE"),
#line 10563
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10564
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10565
F_TRAINER_FEMALE | 
#line 10566
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10567
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10568
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10570
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10571
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10574
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10575
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10578
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 10579
        .trainerName = _("CALE"),
#line 10580
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10581
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10583
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10584
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10585
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10587
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10588
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10591
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10592
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10595
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 10596
        .trainerName = _("MYLES"),
#line 10597
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 10598
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 10600
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10601
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10602
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10604
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10606
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10605
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10608
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10610
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10609
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10612
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10614
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10613
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10616
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10618
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10617
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10620
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10622
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10621
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10624
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10626
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10625
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10628
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 10629
        .trainerName = _("PAT"),
#line 10630
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 10631
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 10632
F_TRAINER_FEMALE | 
#line 10633
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10634
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10635
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10637
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10639
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10638
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10641
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10643
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10642
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10645
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10647
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10646
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10649
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10651
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10650
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10653
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10655
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10654
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10657
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10659
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10658
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10661
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
    {
#line 10662
        .trainerName = _("CRISTIN"),
#line 10663
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10664
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10665
F_TRAINER_FEMALE | 
#line 10666
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10667
        .items = { ITEM_HYPER_POTION },
#line 10668
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10669
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10671
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10673
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10672
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10675
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10677
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10676
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10679
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 10680
        .trainerName = _("May"),
#line 10681
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10682
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10683
F_TRAINER_FEMALE | 
#line 10684
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10685
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10686
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10687
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10689
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10691
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10690
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10693
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10695
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10694
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10697
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 10698
        .trainerName = _("May"),
#line 10699
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10700
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10701
F_TRAINER_FEMALE | 
#line 10702
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10703
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10704
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10705
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10707
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10709
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10708
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10711
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10713
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10712
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10715
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10716
        .trainerName = _("ANGELO"),
#line 10717
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10718
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10720
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10721
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10722
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10724
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10726
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10725
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10727
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 10731
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10733
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10732
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10734
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 10738
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10739
        .trainerName = _("DARIUS"),
#line 10740
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10741
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10743
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10744
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10745
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10747
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10749
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10748
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10751
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10752
        .trainerName = _("STEVEN"),
#line 10753
        .trainerClass = TRAINER_CLASS_FORMER_CHAMPION,
#line 10754
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10756
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10757
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10758
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10759
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10761
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10763
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10762
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10764
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10769
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10771
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10770
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10772
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10777
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10778
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10780
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10785
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10787
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10786
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10788
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10793
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10794
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10796
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10801
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10801
            .heldItem = ITEM_SITRUS_BERRY,
#line 10803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10802
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10804
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10809
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10810
        .trainerName = _("Anabel"),
#line 10811
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10812
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender =
#line 10814
F_TRAINER_FEMALE | 
#line 10815
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10816
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10817
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10813
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10819
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10819
            .heldItem = ITEM_LIECHI_BERRY,
#line 10823
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10822
            .ability = ABILITY_SLOW_START,
#line 10820
            .lvl = 97,
#line 10821
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10823
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 10828
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10828
            .heldItem = ITEM_CHOPLE_BERRY,
#line 10832
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10831
            .ability = ABILITY_CLEAR_BODY,
#line 10829
            .lvl = 95,
#line 10830
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10832
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 10837
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10837
            .heldItem = ITEM_ELECTRIC_GEM,
#line 10841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10840
            .ability = ABILITY_TRANSISTOR,
#line 10838
            .lvl = 97,
#line 10839
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10841
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10846
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10846
            .heldItem = ITEM_STEEL_GEM,
#line 10850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10849
            .ability = ABILITY_CLEAR_BODY,
#line 10847
            .lvl = 95,
#line 10848
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10850
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 10855
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10855
            .heldItem = ITEM_CUSTAP_BERRY,
#line 10859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10858
            .ability = ABILITY_DRAGONS_MAW,
#line 10856
            .lvl = 96,
#line 10857
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10859
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 10864
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10864
            .heldItem = ITEM_LIFE_ORB,
#line 10868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10867
            .ability = ABILITY_CLEAR_BODY,
#line 10865
            .lvl = 95,
#line 10866
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10868
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 10873
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10874
        .trainerName = _("Tucker"),
#line 10875
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10876
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 10879
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10880
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10881
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10877
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10883
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10883
            .heldItem = ITEM_LIECHI_BERRY,
#line 10887
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10886
            .ability = ABILITY_SLOW_START,
#line 10884
            .lvl = 97,
#line 10885
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10887
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 10892
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10892
            .heldItem = ITEM_CHOPLE_BERRY,
#line 10896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10895
            .ability = ABILITY_CLEAR_BODY,
#line 10893
            .lvl = 95,
#line 10894
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10896
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 10901
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10901
            .heldItem = ITEM_ELECTRIC_GEM,
#line 10905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10904
            .ability = ABILITY_TRANSISTOR,
#line 10902
            .lvl = 97,
#line 10903
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10905
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10910
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10910
            .heldItem = ITEM_STEEL_GEM,
#line 10914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10913
            .ability = ABILITY_CLEAR_BODY,
#line 10911
            .lvl = 95,
#line 10912
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10914
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 10919
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10919
            .heldItem = ITEM_CUSTAP_BERRY,
#line 10923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10922
            .ability = ABILITY_DRAGONS_MAW,
#line 10920
            .lvl = 96,
#line 10921
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10923
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 10928
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10928
            .heldItem = ITEM_LIFE_ORB,
#line 10932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10931
            .ability = ABILITY_CLEAR_BODY,
#line 10929
            .lvl = 95,
#line 10930
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10932
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 10937
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10938
        .trainerName = _("Spenser"),
#line 10939
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10940
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender =
#line 10943
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10944
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10945
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10941
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10947
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10947
            .heldItem = ITEM_LIECHI_BERRY,
#line 10951
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10950
            .ability = ABILITY_SLOW_START,
#line 10948
            .lvl = 97,
#line 10949
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10951
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 10956
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10956
            .heldItem = ITEM_CHOPLE_BERRY,
#line 10960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10959
            .ability = ABILITY_CLEAR_BODY,
#line 10957
            .lvl = 95,
#line 10958
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10960
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 10965
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10965
            .heldItem = ITEM_ELECTRIC_GEM,
#line 10969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10968
            .ability = ABILITY_TRANSISTOR,
#line 10966
            .lvl = 97,
#line 10967
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10969
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10974
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10974
            .heldItem = ITEM_STEEL_GEM,
#line 10978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10977
            .ability = ABILITY_CLEAR_BODY,
#line 10975
            .lvl = 95,
#line 10976
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10978
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 10983
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10983
            .heldItem = ITEM_CUSTAP_BERRY,
#line 10987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10986
            .ability = ABILITY_DRAGONS_MAW,
#line 10984
            .lvl = 96,
#line 10985
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10987
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 10992
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10992
            .heldItem = ITEM_LIFE_ORB,
#line 10996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10995
            .ability = ABILITY_CLEAR_BODY,
#line 10993
            .lvl = 95,
#line 10994
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10996
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 11001
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 11002
        .trainerName = _("Greta"),
#line 11003
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 11004
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender =
#line 11006
F_TRAINER_FEMALE | 
#line 11007
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11008
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11009
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 11005
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11011
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11011
            .heldItem = ITEM_LIECHI_BERRY,
#line 11015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11014
            .ability = ABILITY_SLOW_START,
#line 11012
            .lvl = 97,
#line 11013
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11015
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 11020
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11020
            .heldItem = ITEM_CHOPLE_BERRY,
#line 11024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11023
            .ability = ABILITY_CLEAR_BODY,
#line 11021
            .lvl = 95,
#line 11022
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11024
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 11029
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11029
            .heldItem = ITEM_ELECTRIC_GEM,
#line 11033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11032
            .ability = ABILITY_TRANSISTOR,
#line 11030
            .lvl = 97,
#line 11031
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11033
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11038
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11038
            .heldItem = ITEM_STEEL_GEM,
#line 11042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11041
            .ability = ABILITY_CLEAR_BODY,
#line 11039
            .lvl = 95,
#line 11040
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11042
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 11047
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11047
            .heldItem = ITEM_CUSTAP_BERRY,
#line 11051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11050
            .ability = ABILITY_DRAGONS_MAW,
#line 11048
            .lvl = 96,
#line 11049
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11051
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 11056
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11056
            .heldItem = ITEM_LIFE_ORB,
#line 11060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11059
            .ability = ABILITY_CLEAR_BODY,
#line 11057
            .lvl = 95,
#line 11058
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11060
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 11065
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 11066
        .trainerName = _("Noland"),
#line 11067
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 11068
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 11071
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11072
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11073
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 11069
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11075
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11075
            .heldItem = ITEM_LIECHI_BERRY,
#line 11079
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11078
            .ability = ABILITY_SLOW_START,
#line 11076
            .lvl = 97,
#line 11077
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11079
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 11084
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11084
            .heldItem = ITEM_CHOPLE_BERRY,
#line 11088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11087
            .ability = ABILITY_CLEAR_BODY,
#line 11085
            .lvl = 95,
#line 11086
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11088
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 11093
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11093
            .heldItem = ITEM_ELECTRIC_GEM,
#line 11097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11096
            .ability = ABILITY_TRANSISTOR,
#line 11094
            .lvl = 97,
#line 11095
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11097
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11102
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11102
            .heldItem = ITEM_STEEL_GEM,
#line 11106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11105
            .ability = ABILITY_CLEAR_BODY,
#line 11103
            .lvl = 95,
#line 11104
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11106
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 11111
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11111
            .heldItem = ITEM_CUSTAP_BERRY,
#line 11115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11114
            .ability = ABILITY_DRAGONS_MAW,
#line 11112
            .lvl = 96,
#line 11113
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11115
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 11120
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11120
            .heldItem = ITEM_LIFE_ORB,
#line 11124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11123
            .ability = ABILITY_CLEAR_BODY,
#line 11121
            .lvl = 95,
#line 11122
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11124
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 11129
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 11130
        .trainerName = _("Lucy"),
#line 11131
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 11132
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 11134
F_TRAINER_FEMALE | 
#line 11135
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11136
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11137
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 11133
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11139
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11139
            .heldItem = ITEM_LIECHI_BERRY,
#line 11143
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11142
            .ability = ABILITY_SLOW_START,
#line 11140
            .lvl = 97,
#line 11141
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11143
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 11148
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11148
            .heldItem = ITEM_CHOPLE_BERRY,
#line 11152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11151
            .ability = ABILITY_CLEAR_BODY,
#line 11149
            .lvl = 95,
#line 11150
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11152
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 11157
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11157
            .heldItem = ITEM_ELECTRIC_GEM,
#line 11161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11160
            .ability = ABILITY_TRANSISTOR,
#line 11158
            .lvl = 97,
#line 11159
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11161
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11166
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11166
            .heldItem = ITEM_STEEL_GEM,
#line 11170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11169
            .ability = ABILITY_CLEAR_BODY,
#line 11167
            .lvl = 95,
#line 11168
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11170
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 11175
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11175
            .heldItem = ITEM_CUSTAP_BERRY,
#line 11179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11178
            .ability = ABILITY_DRAGONS_MAW,
#line 11176
            .lvl = 96,
#line 11177
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11179
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 11184
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11184
            .heldItem = ITEM_LIFE_ORB,
#line 11188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11187
            .ability = ABILITY_CLEAR_BODY,
#line 11185
            .lvl = 95,
#line 11186
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11188
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 11193
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 11194
        .trainerName = _("Brandon"),
#line 11195
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 11196
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 11199
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11200
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11201
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 11197
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11203
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11203
            .heldItem = ITEM_LIECHI_BERRY,
#line 11207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11206
            .ability = ABILITY_SLOW_START,
#line 11204
            .lvl = 97,
#line 11205
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11207
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 11212
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11212
            .heldItem = ITEM_CHOPLE_BERRY,
#line 11216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11215
            .ability = ABILITY_CLEAR_BODY,
#line 11213
            .lvl = 95,
#line 11214
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11216
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 11221
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11221
            .heldItem = ITEM_ELECTRIC_GEM,
#line 11225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11224
            .ability = ABILITY_TRANSISTOR,
#line 11222
            .lvl = 97,
#line 11223
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11225
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11230
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11230
            .heldItem = ITEM_STEEL_GEM,
#line 11234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11233
            .ability = ABILITY_CLEAR_BODY,
#line 11231
            .lvl = 95,
#line 11232
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11234
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 11239
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11239
            .heldItem = ITEM_CUSTAP_BERRY,
#line 11243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11242
            .ability = ABILITY_DRAGONS_MAW,
#line 11240
            .lvl = 96,
#line 11241
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11243
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 11248
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11248
            .heldItem = ITEM_LIFE_ORB,
#line 11252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11251
            .ability = ABILITY_CLEAR_BODY,
#line 11249
            .lvl = 95,
#line 11250
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11252
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 11257
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 11258
        .trainerName = _("MARIELA"),
#line 11259
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11260
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 11261
F_TRAINER_FEMALE | 
#line 11262
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11263
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11264
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11266
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11267
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11270
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 11271
        .trainerName = _("ALVARO"),
#line 11272
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11273
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 11275
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11276
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11277
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11279
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11280
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11283
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11284
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11287
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 11288
        .trainerName = _("EVERETT"),
#line 11289
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 11290
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 11292
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 11293
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11294
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11296
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11297
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11300
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 11301
        .trainerName = _("RED"),
#line 11302
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11303
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 11305
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11306
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11308
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11309
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11312
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 11313
        .trainerName = _("LEAF"),
#line 11314
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11315
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 11316
F_TRAINER_FEMALE | 
#line 11317
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11318
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11320
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11321
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11324
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 11325
        .trainerName = _("Brendan"),
#line 11326
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11327
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 11329
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11330
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11331
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11333
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11334
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11337
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 11338
        .trainerName = _("May"),
#line 11339
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11340
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 11341
F_TRAINER_FEMALE | 
#line 11342
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11343
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11344
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11346
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11347
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

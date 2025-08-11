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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Sawyer"),
#line 16
        .trainerClass = TRAINER_CLASS_HIKER,
#line 17
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 19
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 20
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 30
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 31
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 33
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 34
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 43
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 44
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 46
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 47
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 60
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 61
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 63
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 64
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 73
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 74
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 76
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 77
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 86
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 87
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 89
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 90
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 99
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 100
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 102
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 103
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 112
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 113
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 115
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 116
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 158
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 159
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 161
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 162
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Marcel"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Alberto"),
#line 189
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 190
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 192
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 193
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Ed"),
#line 206
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 207
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 209
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 210
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Declan"),
#line 236
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 237
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 239
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 240
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 249
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 250
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 252
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 253
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 262
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 263
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 265
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 266
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 279
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 280
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 282
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 283
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 296
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 297
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 299
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 300
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 317
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 318
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 320
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 321
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 330
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 331
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 333
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 334
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
#line 347
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 348
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 350
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 351
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Grunt"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Fredrick"),
#line 442
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 443
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 445
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 446
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Matt"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Matt"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Shelly"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Shelly"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
        .trainerName = _("Shelly"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE_SLATEPORT_CITY] =
    {
#line 563
        .trainerName = _("Archie"),
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
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE_SEAFLOOR_CAVERN] =
    {
#line 585
        .trainerName = _("Archie"),
#line 586
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 587
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 590
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 591
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 592
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 588
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 594
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 596
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 595
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 598
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 600
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 599
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 602
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 604
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 603
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 606
    [DIFFICULTY_NORMAL][TRAINER_PYRE_AQUAGRUNT2] =
    {
#line 607
        .trainerName = _("Grunt"),
#line 608
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 609
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 610
F_TRAINER_FEMALE | 
#line 611
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 612
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 613
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 615
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 616
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 619
    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
#line 620
        .trainerName = _("Daisy"),
#line 621
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 622
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 623
F_TRAINER_FEMALE | 
#line 624
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 625
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 626
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 628
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 629
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 632
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 633
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 636
    [DIFFICULTY_NORMAL][TRAINER_ROSE_1] =
    {
#line 637
        .trainerName = _("Rose"),
#line 638
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 639
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 640
F_TRAINER_FEMALE | 
#line 641
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 642
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 643
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 645
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 646
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 649
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 650
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 653
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 654
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 657
    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
#line 658
        .trainerName = _("Felix"),
#line 659
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 660
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 662
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 663
        .items = { ITEM_FULL_RESTORE },
#line 664
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 665
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 667
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 668
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 670
                MOVE_PSYCHIC,
            },
            },
            {
#line 672
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 673
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 675
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 678
    [DIFFICULTY_NORMAL][TRAINER_VIOLET] =
    {
#line 679
        .trainerName = _("Violet"),
#line 680
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 681
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 682
F_TRAINER_FEMALE | 
#line 683
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 684
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 685
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 687
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 688
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 691
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 692
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 695
    [DIFFICULTY_NORMAL][TRAINER_MATT_MT_PYRE] =
    {
#line 696
        .trainerName = _("Matt"),
#line 697
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN_MIXED,
#line 698
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 700
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 701
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 702
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 704
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 704
            .heldItem = ITEM_EJECT_BUTTON,
#line 707
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 705
            .ability = ABILITY_DRIZZLE,
#line 706
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 709
            .species = SPECIES_BARRASKEWDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 712
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 710
            .ability = ABILITY_SWIFT_SWIM,
#line 711
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 714
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 717
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 715
            .ability = ABILITY_SWIFT_SWIM,
#line 716
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 719
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_PYRE] =
    {
#line 720
        .trainerName = _("Tabitha"),
#line 721
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN_MIXED,
#line 722
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 725
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 726
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 727
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 723
        .mugshotColor = MUGSHOT_COLOR_AQUAMAGMA,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 729
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 729
            .heldItem = ITEM_EJECT_PACK,
#line 732
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 730
            .ability = ABILITY_DROUGHT,
#line 731
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 734
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 737
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 735
            .ability = ABILITY_CHLOROPHYLL,
#line 736
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 739
            .species = SPECIES_LILLIGANT_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 742
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 740
            .ability = ABILITY_CHLOROPHYLL,
#line 741
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 744
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_1] =
    {
#line 745
        .trainerName = _("Dusty"),
#line 746
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 747
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 749
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 750
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 751
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 753
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 755
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 754
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 756
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 761
    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
#line 762
        .trainerName = _("Chip"),
#line 763
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 764
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 766
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 767
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 768
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 770
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 772
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 771
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 773
                MOVE_PSYBEAM,
                MOVE_SELF_DESTRUCT,
                MOVE_SANDSTORM,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 778
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 780
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 779
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 781
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 786
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 788
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 787
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 789
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 794
    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
#line 795
        .trainerName = _("Foster"),
#line 796
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 797
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 799
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 800
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 801
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 803
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 805
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 804
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 806
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 811
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 813
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 812
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 814
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 819
    [DIFFICULTY_NORMAL][TRAINER_EMMIE_1] =
    {
#line 820
        .trainerName = _("Emmie"),
#line 821
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#line 822
        .trainerPic = TRAINER_PIC_GREEN,
        .encounterMusic_gender =
#line 823
F_TRAINER_FEMALE | 
#line 825
            TRAINER_ENCOUNTER_MUSIC_PKMN_TRAINER_2,
#line 826
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 827
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 824
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 829
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 831
            .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
#line 830
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 832
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 837
    [DIFFICULTY_NORMAL][TRAINER_EMMIE_2] =
    {
#line 838
        .trainerName = _("Emmie"),
#line 839
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#line 840
        .trainerPic = TRAINER_PIC_GREEN,
        .encounterMusic_gender =
#line 841
F_TRAINER_FEMALE | 
#line 843
            TRAINER_ENCOUNTER_MUSIC_PKMN_TRAINER_2,
#line 844
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 845
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 842
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 847
            .species = SPECIES_THUNDURUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 848
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 850
                MOVE_TAUNT,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 855
            .species = SPECIES_TORNADUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 856
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 858
                MOVE_TAILWIND,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 863
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 864
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 866
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 871
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 873
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 872
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 874
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 879
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 881
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 880
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 882
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 887
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 889
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 888
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 890
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 895
    [DIFFICULTY_NORMAL][TRAINER_EMMIE_3] =
    {
#line 896
        .trainerName = _("Emmie"),
#line 897
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#line 898
        .trainerPic = TRAINER_PIC_GREEN,
        .encounterMusic_gender =
#line 899
F_TRAINER_FEMALE | 
#line 901
            TRAINER_ENCOUNTER_MUSIC_PKMN_TRAINER_2,
#line 902
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 903
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 900
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 905
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 907
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 906
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 908
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 913
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE109_3] =
    {
#line 914
        .trainerName = _("Grunt"),
#line 915
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 916
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 917
F_TRAINER_FEMALE | 
#line 918
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 919
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 920
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 922
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 924
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 923
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 926
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 928
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 927
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 930
    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
#line 931
        .trainerName = _("Austina"),
#line 932
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 933
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 934
F_TRAINER_FEMALE | 
#line 935
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 936
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 937
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 939
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 940
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 943
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 944
        .trainerName = _("Gwen"),
#line 945
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 946
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 947
F_TRAINER_FEMALE | 
#line 948
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 949
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 950
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 952
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 953
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 956
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE_MT_PYRE] =
    {
#line 957
        .trainerName = _("Archie"),
#line 958
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 959
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 962
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 963
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 964
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 960
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 966
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 968
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 967
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 970
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 972
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 971
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 974
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_PYRE] =
    {
#line 975
        .trainerName = _("Maxie"),
#line 976
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 977
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 980
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 981
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 982
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 978
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 984
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 986
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 985
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 988
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 990
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 989
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 992
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE109_2] =
    {
#line 993
        .trainerName = _("Grunt"),
#line 994
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 995
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 997
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 998
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 999
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1001
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1003
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1002
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1004
                MOVE_SAND_ATTACK,
                MOVE_HEADBUTT,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1009
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 1010
        .trainerName = _("Simon"),
#line 1011
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1012
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1014
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1015
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1016
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1018
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1019
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1022
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1023
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1026
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 1027
        .trainerName = _("Charlie"),
#line 1028
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1029
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1031
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1032
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1033
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1035
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1036
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1039
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 1040
        .trainerName = _("Randall"),
#line 1041
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1042
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1044
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1045
        .items = { ITEM_HYPER_POTION },
#line 1046
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1047
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1049
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1050
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1052
                MOVE_QUICK_ATTACK,
                MOVE_AGILITY,
                MOVE_WING_ATTACK,
            },
            },
        },
    },
#line 1056
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 1057
        .trainerName = _("Parker"),
#line 1058
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1059
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1061
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1062
        .items = { ITEM_HYPER_POTION },
#line 1063
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1064
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1066
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1067
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1069
                MOVE_TEETER_DANCE,
                MOVE_DIZZY_PUNCH,
                MOVE_FOCUS_PUNCH,
            },
            },
        },
    },
#line 1073
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 1074
        .trainerName = _("George"),
#line 1075
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1076
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1078
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1079
        .items = { ITEM_HYPER_POTION },
#line 1080
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1081
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1083
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1083
            .heldItem = ITEM_SITRUS_BERRY,
#line 1085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1084
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1086
                MOVE_SLACK_OFF,
                MOVE_COUNTER,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1090
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 1091
        .trainerName = _("Berke"),
#line 1092
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1093
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1095
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1096
        .items = { ITEM_HYPER_POTION },
#line 1097
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1098
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1100
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1101
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1103
                MOVE_FOCUS_ENERGY,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1106
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
#line 1107
        .trainerName = _("Braxton"),
#line 1108
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1109
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1111
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1112
        .items = { ITEM_HYPER_POTION },
#line 1113
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1114
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1116
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1118
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1117
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1119
                MOVE_FOCUS_ENERGY,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_ENDEAVOR,
            },
            },
            {
#line 1124
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1126
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1125
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1127
                MOVE_BITE,
                MOVE_DIG,
                MOVE_FEINT_ATTACK,
                MOVE_SAND_TOMB,
            },
            },
            {
#line 1132
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1134
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1133
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1135
                MOVE_ROLLOUT,
                MOVE_WHIRLPOOL,
                MOVE_ASTONISH,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1140
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1142
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1141
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1143
                MOVE_THUNDERBOLT,
                MOVE_SUPERSONIC,
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
            },
            },
            {
#line 1148
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1150
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1149
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1151
                MOVE_GIGA_DRAIN,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
            },
            },
        },
    },
#line 1156
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 1157
        .trainerName = _("Vincent"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1164
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1166
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1168
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1167
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1170
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1172
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1171
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1174
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1176
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1175
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1178
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 1179
        .trainerName = _("Leroy"),
#line 1180
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1181
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1183
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1184
        .items = { ITEM_FULL_RESTORE },
#line 1185
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1186
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1188
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1190
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1189
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1192
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1194
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1193
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1196
    [DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
    {
#line 1197
        .trainerName = _("Wilton"),
#line 1198
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1199
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1201
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1202
        .items = { ITEM_SUPER_POTION },
#line 1203
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1204
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1206
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1208
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1207
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1210
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1212
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1211
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1214
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1216
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1215
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1218
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 1219
        .trainerName = _("Edgar"),
#line 1220
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1221
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1223
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1224
        .items = { ITEM_FULL_RESTORE },
#line 1225
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1226
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1228
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1230
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1229
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1232
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1234
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1233
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1236
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 1237
        .trainerName = _("Albert"),
#line 1238
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1239
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1241
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1242
        .items = { ITEM_FULL_RESTORE },
#line 1243
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1244
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1246
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1248
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1247
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1250
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1252
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1251
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1254
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
#line 1255
        .trainerName = _("Samuel"),
#line 1256
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1257
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1259
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1260
        .items = { ITEM_FULL_RESTORE },
#line 1261
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1262
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1264
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1266
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1265
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1268
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1270
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1269
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1272
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1274
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1273
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1276
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 1277
        .trainerName = _("Vito"),
#line 1278
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 1279
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1282
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1283
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1284
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 1280
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1286
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1288
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1287
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1290
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1292
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1291
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1294
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1296
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1295
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1298
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1300
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1299
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1302
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 1303
        .trainerName = _("Owen"),
#line 1304
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1305
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1307
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1308
        .items = { ITEM_FULL_RESTORE },
#line 1309
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1310
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1312
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1314
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1313
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1316
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1318
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1317
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1320
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1322
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1321
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1324
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 1325
        .trainerName = _("Warren"),
#line 1326
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1327
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1329
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1330
        .items = { ITEM_FULL_RESTORE },
#line 1331
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1332
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1334
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1336
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1335
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1338
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1340
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1339
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1342
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 1343
        .trainerName = _("Mary"),
#line 1344
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1345
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1346
F_TRAINER_FEMALE | 
#line 1347
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1348
        .items = { ITEM_HYPER_POTION },
#line 1349
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1350
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1352
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1353
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1355
                MOVE_FEINT_ATTACK,
                MOVE_SHOCK_WAVE,
            },
            },
        },
    },
#line 1358
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 1359
        .trainerName = _("Alexia"),
#line 1360
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1361
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1362
F_TRAINER_FEMALE | 
#line 1363
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1364
        .items = { ITEM_HYPER_POTION },
#line 1365
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1366
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1368
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1369
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1371
                MOVE_DEFENSE_CURL,
                MOVE_DOUBLE_EDGE,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1375
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 1376
        .trainerName = _("Jody"),
#line 1377
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1378
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1379
F_TRAINER_FEMALE | 
#line 1380
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1381
        .items = { ITEM_HYPER_POTION },
#line 1382
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 1383
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1385
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1386
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1388
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1391
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 1392
        .trainerName = _("Wendy"),
#line 1393
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1394
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1395
F_TRAINER_FEMALE | 
#line 1396
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1397
        .items = { ITEM_FULL_RESTORE },
#line 1398
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1399
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1401
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1403
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1402
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1404
                MOVE_BATON_PASS,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_TEARS,
                MOVE_BITE,
            },
            },
            {
#line 1409
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1411
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1410
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1412
                MOVE_MEGA_DRAIN,
                MOVE_MAGICAL_LEAF,
                MOVE_GRASS_WHISTLE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1417
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1419
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1418
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1420
                MOVE_FLY,
                MOVE_WATER_GUN,
                MOVE_MIST,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 1425
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 1426
        .trainerName = _("Keira"),
#line 1427
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1428
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1429
F_TRAINER_FEMALE | 
#line 1430
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1431
        .items = { ITEM_FULL_RESTORE },
#line 1432
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1433
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1435
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1437
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1436
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1439
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1441
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1440
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1443
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_1] =
    {
#line 1444
        .trainerName = _("Brooke"),
#line 1445
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1446
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1447
F_TRAINER_FEMALE | 
#line 1448
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1449
        .items = { ITEM_SUPER_POTION },
#line 1450
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1451
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1453
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1455
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1454
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1457
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1459
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1458
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1461
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1463
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1462
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1465
    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
#line 1466
        .trainerName = _("Jennifer"),
#line 1467
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1468
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1469
F_TRAINER_FEMALE | 
#line 1470
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1471
        .items = { ITEM_FULL_RESTORE },
#line 1472
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1473
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1475
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1477
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1476
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1479
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 1480
        .trainerName = _("Hope"),
#line 1481
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1482
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1483
F_TRAINER_FEMALE | 
#line 1484
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1485
        .items = { ITEM_FULL_RESTORE },
#line 1486
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1487
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1489
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1491
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1490
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1493
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1494
        .trainerName = _("Shannon"),
#line 1495
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1496
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1497
F_TRAINER_FEMALE | 
#line 1498
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1499
        .items = { ITEM_FULL_RESTORE },
#line 1500
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1501
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1503
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1505
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1504
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1507
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1508
        .trainerName = _("Michelle"),
#line 1509
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1510
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1511
F_TRAINER_FEMALE | 
#line 1512
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1513
        .items = { ITEM_FULL_RESTORE },
#line 1514
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1515
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1517
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1519
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1518
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1521
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1523
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1522
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1525
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1527
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1526
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1529
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1530
        .trainerName = _("Caroline"),
#line 1531
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1532
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1533
F_TRAINER_FEMALE | 
#line 1534
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1535
        .items = { ITEM_FULL_RESTORE },
#line 1536
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1537
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1539
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1541
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1540
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1543
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1545
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1544
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1547
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1548
        .trainerName = _("Julie"),
#line 1549
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1550
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1551
F_TRAINER_FEMALE | 
#line 1552
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1553
        .items = { ITEM_FULL_RESTORE },
#line 1554
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1555
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1557
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1559
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1558
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1561
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1563
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1562
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1565
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1567
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1566
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1569
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 1570
        .trainerName = _("Patricia"),
#line 1571
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1572
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1573
F_TRAINER_FEMALE | 
#line 1574
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1575
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1576
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1578
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1579
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1582
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1583
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1586
    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
#line 1587
        .trainerName = _("Kindra"),
#line 1588
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1589
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1590
F_TRAINER_FEMALE | 
#line 1591
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1592
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1593
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1595
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1596
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1599
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1600
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1603
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 1604
        .trainerName = _("Tammy"),
#line 1605
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1606
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1607
F_TRAINER_FEMALE | 
#line 1608
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1609
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1610
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1612
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1613
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1616
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1617
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1620
    [DIFFICULTY_NORMAL][TRAINER_PYRE_AQUAGRUNT3] =
    {
#line 1621
        .trainerName = _("Grunt"),
#line 1622
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 1623
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 1624
F_TRAINER_FEMALE | 
#line 1625
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1626
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1627
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1629
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1630
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1633
    [DIFFICULTY_NORMAL][TRAINER_PYRE_AQUAGRUNT4] =
    {
#line 1634
        .trainerName = _("Grunt"),
#line 1635
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 1636
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 1637
F_TRAINER_FEMALE | 
#line 1638
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1639
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1640
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1642
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1643
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1646
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 1647
        .trainerName = _("Tasha"),
#line 1648
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1649
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1650
F_TRAINER_FEMALE | 
#line 1651
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1652
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1653
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1655
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1657
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1656
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1659
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT5] =
    {
#line 1660
        .trainerName = _("Grunt"),
#line 1661
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1662
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1663
F_TRAINER_FEMALE | 
#line 1664
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1665
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1666
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1668
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1670
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1669
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1672
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1674
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1673
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1676
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT6] =
    {
#line 1677
        .trainerName = _("Grunt"),
#line 1678
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 1679
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1680
F_TRAINER_FEMALE | 
#line 1681
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1682
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1683
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1685
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1687
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1686
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1689
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1691
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1690
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1693
    [DIFFICULTY_NORMAL][TRAINER_CINDY_1] =
    {
#line 1694
        .trainerName = _("Cindy"),
#line 1695
        .trainerClass = TRAINER_CLASS_LADY,
#line 1696
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1697
F_TRAINER_FEMALE | 
#line 1698
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1699
        .items = { ITEM_FULL_RESTORE },
#line 1700
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1701
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1703
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1703
            .heldItem = ITEM_NUGGET,
#line 1705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1704
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1707
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 1708
        .trainerName = _("Daphne"),
#line 1709
        .trainerClass = TRAINER_CLASS_LADY,
#line 1710
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1711
F_TRAINER_FEMALE | 
#line 1712
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1713
        .items = { ITEM_FULL_RESTORE },
#line 1714
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1715
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1717
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1717
            .heldItem = ITEM_NUGGET,
#line 1719
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1718
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1720
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1725
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1725
            .heldItem = ITEM_NUGGET,
#line 1727
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1726
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1728
                MOVE_ATTRACT,
                MOVE_SAFEGUARD,
                MOVE_TAKE_DOWN,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1733
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1734
        .trainerName = _("Grunt"),
#line 1735
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1736
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1738
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1739
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1740
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1742
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1743
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1746
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1747
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1750
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1751
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1754
    [DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
    {
#line 1755
        .trainerName = _("Brianna"),
#line 1756
        .trainerClass = TRAINER_CLASS_LADY,
#line 1757
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1758
F_TRAINER_FEMALE | 
#line 1759
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1760
        .items = { ITEM_FULL_RESTORE },
#line 1761
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1762
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1764
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1764
            .heldItem = ITEM_NUGGET,
#line 1766
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1765
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1768
    [DIFFICULTY_NORMAL][TRAINER_NAOMI] =
    {
#line 1769
        .trainerName = _("Naomi"),
#line 1770
        .trainerClass = TRAINER_CLASS_LADY,
#line 1771
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1772
F_TRAINER_FEMALE | 
#line 1773
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1774
        .items = { ITEM_FULL_RESTORE },
#line 1775
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1776
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1778
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1778
            .heldItem = ITEM_NUGGET,
#line 1780
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1779
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1782
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 1783
        .trainerName = _("Melissa"),
#line 1784
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1785
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1786
F_TRAINER_FEMALE | 
#line 1787
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1788
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1789
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1791
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1792
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1795
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 1796
        .trainerName = _("Sheila"),
#line 1797
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1798
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1799
F_TRAINER_FEMALE | 
#line 1800
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1801
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1802
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1804
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1805
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1808
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 1809
        .trainerName = _("Shirley"),
#line 1810
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1811
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1812
F_TRAINER_FEMALE | 
#line 1813
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1814
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1815
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1817
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1818
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1821
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_1] =
    {
#line 1822
        .trainerName = _("Jessica"),
#line 1823
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1824
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1825
F_TRAINER_FEMALE | 
#line 1826
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1827
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1828
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1830
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1831
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1833
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1838
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1839
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1841
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 1846
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 1847
        .trainerName = _("Connie"),
#line 1848
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1849
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1850
F_TRAINER_FEMALE | 
#line 1851
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1852
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1853
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1855
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1857
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1856
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1859
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 1860
        .trainerName = _("Bridget"),
#line 1861
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1862
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1863
F_TRAINER_FEMALE | 
#line 1864
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1865
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1866
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1868
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1870
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1869
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1872
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1873
        .trainerName = _("Olivia"),
#line 1874
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1875
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1876
F_TRAINER_FEMALE | 
#line 1877
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1878
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1879
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1881
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1883
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1882
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1884
                MOVE_IRON_DEFENSE,
                MOVE_WHIRLPOOL,
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1889
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1891
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1890
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1892
                MOVE_TAUNT,
                MOVE_CRABHAMMER,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1896
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1898
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1897
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1899
                MOVE_UPROAR,
                MOVE_FURY_SWIPES,
                MOVE_FAKE_OUT,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1904
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 1905
        .trainerName = _("Tiffany"),
#line 1906
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1907
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1908
F_TRAINER_FEMALE | 
#line 1909
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1910
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1911
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1913
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1915
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1914
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1917
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1919
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1918
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1921
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_1] =
    {
#line 1922
        .trainerName = _("Winston"),
#line 1923
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1924
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1926
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1927
        .items = { ITEM_FULL_RESTORE },
#line 1928
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1929
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1931
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1931
            .heldItem = ITEM_NUGGET,
#line 1933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1932
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1935
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 1936
        .trainerName = _("Mollie"),
#line 1937
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1938
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1939
F_TRAINER_FEMALE | 
#line 1940
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1941
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1942
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1944
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1945
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1948
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1950
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1949
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1952
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 1953
        .trainerName = _("Garret"),
#line 1954
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1955
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1957
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1958
        .items = { ITEM_FULL_RESTORE },
#line 1959
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1960
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1962
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1962
            .heldItem = ITEM_NUGGET,
#line 1964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1963
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1966
    [DIFFICULTY_NORMAL][TRAINER_STEVE_1] =
    {
#line 1967
        .trainerName = _("Steve"),
#line 1968
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1969
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1971
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1972
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1973
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1975
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1977
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1976
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1979
    [DIFFICULTY_NORMAL][TRAINER_THALIA_1] =
    {
#line 1980
        .trainerName = _("Thalia"),
#line 1981
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1982
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1983
F_TRAINER_FEMALE | 
#line 1984
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1985
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 1986
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1988
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1989
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1992
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1993
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1996
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 1997
        .trainerName = _("Mark"),
#line 1998
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1999
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2001
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2002
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2003
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2005
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2006
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2009
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 2010
        .trainerName = _("Grunt"),
#line 2011
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2012
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 2013
F_TRAINER_FEMALE | 
#line 2014
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2015
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2016
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2018
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2019
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2022
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 2023
        .trainerName = _("Luis"),
#line 2024
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 2025
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 2027
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2028
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2029
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2031
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2032
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2035
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 2036
        .trainerName = _("Dominik"),
#line 2037
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2038
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2040
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2041
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2042
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2044
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2045
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2048
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 2049
        .trainerName = _("Douglas"),
#line 2050
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2051
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2053
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2054
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2055
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2057
            .species = SPECIES_TENTACOOL,
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
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 2066
        .trainerName = _("Darrin"),
#line 2067
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2068
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2070
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2071
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2072
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2074
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2076
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2075
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2078
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2080
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2079
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2082
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2084
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2083
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2086
    [DIFFICULTY_NORMAL][TRAINER_TONY_1] =
    {
#line 2087
        .trainerName = _("Tony"),
#line 2088
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2089
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2091
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2092
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2093
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2095
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2096
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2099
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 2100
        .trainerName = _("Jerome"),
#line 2101
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2102
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2104
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2105
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2106
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2108
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2109
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2112
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 2113
        .trainerName = _("Matthew"),
#line 2114
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2115
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2117
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2118
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2119
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2121
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2122
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2125
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 2126
        .trainerName = _("David"),
#line 2127
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2128
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2130
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2131
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2132
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2134
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2135
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2138
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2139
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2142
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 2143
        .trainerName = _("Spencer"),
#line 2144
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2145
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2147
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2148
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2149
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2151
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2152
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2155
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2156
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2159
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 2160
        .trainerName = _("Roland"),
#line 2161
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2162
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2164
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2165
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2166
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2168
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2169
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2172
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 2173
        .trainerName = _("Nolen"),
#line 2174
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2175
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2177
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2178
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2179
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2181
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2182
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2185
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 2186
        .trainerName = _("Stan"),
#line 2187
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2188
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2190
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2191
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2192
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2194
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2195
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2198
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 2199
        .trainerName = _("Barry"),
#line 2200
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2201
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2203
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2204
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2205
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2207
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2208
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2211
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 2212
        .trainerName = _("Dean"),
#line 2213
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2214
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2216
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2217
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2218
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2220
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2221
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2224
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2225
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2228
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2229
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2232
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 2233
        .trainerName = _("Rodney"),
#line 2234
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2235
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2237
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2238
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2239
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2241
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2242
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2245
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 2246
        .trainerName = _("Richard"),
#line 2247
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2248
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2250
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2251
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2252
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2254
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2255
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2258
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 2259
        .trainerName = _("Herman"),
#line 2260
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2261
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2263
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2264
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2265
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2267
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2268
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2271
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2272
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2275
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 2276
        .trainerName = _("Santiago"),
#line 2277
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2278
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2280
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2281
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2282
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2284
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2285
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2288
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2289
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2292
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 2293
        .trainerName = _("Gilbert"),
#line 2294
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2295
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2297
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2298
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2299
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2301
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2302
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2305
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 2306
        .trainerName = _("Franklin"),
#line 2307
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2308
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2310
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2311
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2312
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2314
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2315
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2318
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 2319
        .trainerName = _("Kevin"),
#line 2320
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2321
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2323
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2324
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2325
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2327
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2328
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2331
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 2332
        .trainerName = _("Jack"),
#line 2333
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2334
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2336
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2337
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2338
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2340
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2341
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2344
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2345
        .trainerName = _("Dudley"),
#line 2346
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2347
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2349
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2350
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2351
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
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
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2358
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2361
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2362
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2365
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 2366
        .trainerName = _("Chad"),
#line 2367
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2368
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2370
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2371
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2372
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2374
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2375
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2378
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2379
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2382
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2383
        .trainerName = _("Takao"),
#line 2384
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2385
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2387
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2388
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2389
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2391
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2393
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2392
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2395
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 2396
        .trainerName = _("Hitoshi"),
#line 2397
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2398
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2400
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2401
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2402
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2404
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2406
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2405
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2408
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2410
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2409
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2412
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 2413
        .trainerName = _("Kiyo"),
#line 2414
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2415
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2417
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2418
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2419
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2421
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2423
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2422
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2425
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 2426
        .trainerName = _("Koichi"),
#line 2427
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2428
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2430
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2431
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 2432
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2434
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2436
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2435
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2438
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2440
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2439
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2442
    [DIFFICULTY_NORMAL][TRAINER_NOB_1] =
    {
#line 2443
        .trainerName = _("Nob"),
#line 2444
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2445
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2447
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2448
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2449
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2451
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2453
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2452
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2455
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2456
        .trainerName = _("Yuji"),
#line 2457
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2458
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2460
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2461
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2462
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2464
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2466
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2465
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2468
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2470
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2469
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2472
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 2473
        .trainerName = _("Daisuke"),
#line 2474
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2475
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2477
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2478
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2479
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2481
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2483
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2482
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2485
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2486
        .trainerName = _("Atsushi"),
#line 2487
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2488
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2490
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2491
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2492
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2494
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2496
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2495
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2498
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2499
        .trainerName = _("Kirk"),
#line 2500
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2501
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2503
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2504
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2505
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2507
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2509
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2508
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2510
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_LEER,
            },
            },
            {
#line 2515
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2517
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2516
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2518
                MOVE_CHARGE,
                MOVE_SHOCK_WAVE,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 2522
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2523
        .trainerName = _("Grunt"),
#line 2524
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2525
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2526
F_TRAINER_FEMALE | 
#line 2527
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2528
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2529
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2531
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2532
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2535
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2537
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2536
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2539
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2540
        .trainerName = _("Grunt"),
#line 2541
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2542
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2544
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2545
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2546
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2548
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2549
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2552
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2553
        .trainerName = _("Shawn"),
#line 2554
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2555
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2557
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2558
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2559
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2561
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2563
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2562
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2565
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2567
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2566
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2569
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_1] =
    {
#line 2570
        .trainerName = _("Fernando"),
#line 2571
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2572
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2574
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2575
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2576
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2578
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2579
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2582
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2583
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2586
    [DIFFICULTY_NORMAL][TRAINER_DALTON_1] =
    {
#line 2587
        .trainerName = _("Dalton"),
#line 2588
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2589
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2591
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2592
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2593
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2595
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2596
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2599
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2600
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2603
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2604
        .trainerName = _("Cole"),
#line 2605
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2606
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2608
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2609
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2610
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2612
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2614
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2613
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2616
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2617
        .trainerName = _("Jeff"),
#line 2618
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2619
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2621
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2622
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2623
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2625
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2627
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2626
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2629
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2631
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2630
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2633
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2634
        .trainerName = _("Axle"),
#line 2635
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2636
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2638
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2639
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2640
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2642
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2644
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2643
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2646
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2647
        .trainerName = _("Jace"),
#line 2648
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2649
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2651
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2652
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2653
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2655
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2657
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2656
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2659
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2660
        .trainerName = _("Keegan"),
#line 2661
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2662
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2664
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2665
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2666
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2668
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2670
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2669
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2672
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_1] =
    {
#line 2673
        .trainerName = _("Grunt"),
#line 2674
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2675
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 2677
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2678
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2679
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2681
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2682
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2685
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2686
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2689
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 2690
        .trainerName = _("Drew"),
#line 2691
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2692
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2694
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2695
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2696
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2698
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2699
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2701
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
        },
    },
#line 2706
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 2707
        .trainerName = _("Beau"),
#line 2708
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2709
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2711
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2712
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2713
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2715
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2716
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2718
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 2723
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2724
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2726
                MOVE_POISON_STING,
                MOVE_SAND_ATTACK,
                MOVE_SCRATCH,
                MOVE_DIG,
            },
            },
            {
#line 2731
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2732
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2734
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2739
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2740
        .trainerName = _("Larry"),
#line 2741
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2742
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2744
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2745
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2746
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2748
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2749
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2752
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_6] =
    {
#line 2753
        .trainerName = _("Grunt"),
#line 2754
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2755
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 2756
F_TRAINER_FEMALE | 
#line 2757
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2758
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2759
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2761
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2762
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2765
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2766
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2769
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 2770
        .trainerName = _("Justin"),
#line 2771
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2772
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2774
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2775
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2776
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2778
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2779
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2782
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_1] =
    {
#line 2783
        .trainerName = _("Ethan"),
#line 2784
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2785
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2787
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2788
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2789
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2791
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2792
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2795
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2796
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2799
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 2800
        .trainerName = _("Autumn"),
#line 2801
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2802
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2803
F_TRAINER_FEMALE | 
#line 2804
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2805
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2806
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2808
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2809
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2812
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 2813
        .trainerName = _("Travis"),
#line 2814
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2815
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2817
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2818
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2819
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2821
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2822
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2825
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2826
        .trainerName = _("Brent"),
#line 2827
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2828
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2830
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2831
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2832
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2834
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2836
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2835
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2838
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2839
        .trainerName = _("Donald"),
#line 2840
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2841
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2843
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2844
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2851
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2853
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2852
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2855
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2857
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2856
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2859
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 2860
        .trainerName = _("Taylor"),
#line 2861
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2862
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2864
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2865
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2866
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2868
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2870
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2869
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2872
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2874
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2873
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2876
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2878
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2877
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2880
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_1] =
    {
#line 2881
        .trainerName = _("Jeffrey"),
#line 2882
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2883
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2885
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2886
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2887
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2889
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2890
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2893
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2894
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2897
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2898
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2901
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 2902
        .trainerName = _("Derek"),
#line 2903
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2904
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2906
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2907
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2908
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2910
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2912
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2911
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2914
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2916
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2915
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2918
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2919
        .trainerName = _("Edward"),
#line 2920
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2921
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2923
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2924
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2925
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2927
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2927
            .heldItem = ITEM_EJECT_PACK,
#line 2932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2928
            .ability = ABILITY_SAND_STREAM,
#line 2929
            .lvl = 29,
#line 2931
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 2930
            .teraType = TYPE_GROUND,
            .moves = {
#line 2932
                MOVE_BULLDOZE,
                MOVE_THUNDER_FANG,
                MOVE_ROCK_TOMB,
                MOVE_PROTECT,
            },
            },
            {
#line 2937
            .species = SPECIES_AMAURA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2937
            .heldItem = ITEM_ICY_ROCK,
#line 2942
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2938
            .ability = ABILITY_SNOW_WARNING,
#line 2939
            .lvl = 29,
#line 2941
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 2940
            .teraType = TYPE_ROCK,
            .moves = {
#line 2942
                MOVE_ROCK_SLIDE,
                MOVE_ICY_WIND,
                MOVE_AURORA_VEIL,
                MOVE_CHILLY_RECEPTION,
            },
            },
            {
#line 2947
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2947
            .heldItem = ITEM_OCCA_BERRY,
#line 2952
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2948
            .ability = ABILITY_HAIL_WARNING,
#line 2949
            .lvl = 29,
#line 2951
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 2950
            .teraType = TYPE_GRASS,
            .moves = {
#line 2952
                MOVE_SEED_BOMB,
                MOVE_ICE_PUNCH,
                MOVE_AURORA_VEIL,
                MOVE_FROZEN_RECEPTION,
            },
            },
        },
    },
#line 2957
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2958
        .trainerName = _("Preston"),
#line 2959
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2960
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2962
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2963
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2964
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2966
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2968
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2967
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2970
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2971
        .trainerName = _("Virgil"),
#line 2972
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2973
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2975
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2976
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2977
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2979
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2981
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2980
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2983
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 2984
        .trainerName = _("Blake"),
#line 2985
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2986
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2988
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2989
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 2990
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2992
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2994
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2993
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2996
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT1] =
    {
#line 2997
        .trainerName = _("Grunt"),
#line 2998
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2999
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 3001
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3002
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3003
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3005
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3006
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3009
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3010
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3013
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3014
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3017
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 3018
        .trainerName = _("Joshua"),
#line 3019
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3020
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3022
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3023
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3024
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3026
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3028
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3027
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3030
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3031
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3034
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_1] =
    {
#line 3035
        .trainerName = _("Cameron"),
#line 3036
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3037
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3039
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3040
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3041
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3043
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3044
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3047
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 3048
        .trainerName = _("Jaclyn"),
#line 3049
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3050
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3051
F_TRAINER_FEMALE | 
#line 3052
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3053
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3054
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3056
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3057
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3059
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 3061
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 3062
        .trainerName = _("Hannah"),
#line 3063
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3064
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3065
F_TRAINER_FEMALE | 
#line 3066
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3067
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3068
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3070
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3072
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3071
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3074
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 3075
        .trainerName = _("Samantha"),
#line 3076
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3077
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3078
F_TRAINER_FEMALE | 
#line 3079
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3080
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3081
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3083
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3085
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3084
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3087
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 3088
        .trainerName = _("Maura"),
#line 3089
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3090
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3091
F_TRAINER_FEMALE | 
#line 3092
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3093
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3094
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3096
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3098
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3097
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3100
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 3101
        .trainerName = _("Kayla"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3107
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3109
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3110
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3113
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3114
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3117
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3118
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3121
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 3122
        .trainerName = _("Alexis"),
#line 3123
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3124
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3125
F_TRAINER_FEMALE | 
#line 3126
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3127
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3128
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3130
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3131
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3134
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3135
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3138
    [DIFFICULTY_NORMAL][TRAINER_JACKI_1] =
    {
#line 3139
        .trainerName = _("Jacki"),
#line 3140
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3141
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3142
F_TRAINER_FEMALE | 
#line 3143
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3144
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3145
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3147
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3148
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3151
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3152
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3155
    [DIFFICULTY_NORMAL][TRAINER_WALTER_1] =
    {
#line 3156
        .trainerName = _("Walter"),
#line 3157
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3158
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3160
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3161
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3162
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3164
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3165
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3168
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 3169
        .trainerName = _("Micah"),
#line 3170
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3171
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3173
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3174
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3175
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3177
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3178
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3181
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3182
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3185
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 3186
        .trainerName = _("Thomas"),
#line 3187
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3188
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3190
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3191
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3192
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3194
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3195
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3198
    [DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
    {
#line 3199
        .trainerName = _("Sidney"),
#line 3200
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3201
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender =
#line 3203
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3204
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3205
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3206
        .mugshotColor = MUGSHOT_COLOR_BLACK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3208
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3210
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3209
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3211
                MOVE_ROAR,
                MOVE_DOUBLE_EDGE,
                MOVE_SAND_ATTACK,
                MOVE_CRUNCH,
            },
            },
            {
#line 3216
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3218
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3217
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3219
                MOVE_TORMENT,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3224
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3226
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3225
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3227
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 3232
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3234
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3233
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3235
                MOVE_SURF,
                MOVE_SWORDS_DANCE,
                MOVE_STRENGTH,
                MOVE_FACADE,
            },
            },
            {
#line 3240
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3240
            .heldItem = ITEM_SITRUS_BERRY,
#line 3242
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3241
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3243
                MOVE_AERIAL_ACE,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3248
    [DIFFICULTY_NORMAL][TRAINER_PHOEBE] =
    {
#line 3249
        .trainerName = _("Phoebe"),
#line 3250
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3251
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .encounterMusic_gender =
#line 3252
F_TRAINER_FEMALE | 
#line 3253
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3254
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3255
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3256
        .mugshotColor = MUGSHOT_COLOR_DARKPURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3258
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3260
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3259
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3261
                MOVE_SHADOW_PUNCH,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_PROTECT,
            },
            },
            {
#line 3266
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3268
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3267
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3269
                MOVE_SHADOW_BALL,
                MOVE_GRUDGE,
                MOVE_WILL_O_WISP,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3274
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3276
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3275
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3277
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_TEAM,
                MOVE_NIGHT_SHADE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3282
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3284
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3283
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3285
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FACADE,
            },
            },
            {
#line 3290
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3290
            .heldItem = ITEM_SITRUS_BERRY,
#line 3292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3291
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3293
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3298
    [DIFFICULTY_NORMAL][TRAINER_GLACIA] =
    {
#line 3299
        .trainerName = _("Glacia"),
#line 3300
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3301
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .encounterMusic_gender =
#line 3302
F_TRAINER_FEMALE | 
#line 3303
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3304
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3305
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3306
        .mugshotColor = MUGSHOT_COLOR_WHITE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3308
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3310
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3309
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3311
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_HAIL,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3316
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3318
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3317
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3319
                MOVE_LIGHT_SCREEN,
                MOVE_CRUNCH,
                MOVE_ICY_WIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3324
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3326
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3325
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3327
                MOVE_ATTRACT,
                MOVE_DOUBLE_EDGE,
                MOVE_HAIL,
                MOVE_BLIZZARD,
            },
            },
            {
#line 3332
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3334
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3333
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3335
                MOVE_SHADOW_BALL,
                MOVE_EXPLOSION,
                MOVE_HAIL,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3340
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3340
            .heldItem = ITEM_SITRUS_BERRY,
#line 3342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3341
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3343
                MOVE_SURF,
                MOVE_BODY_SLAM,
                MOVE_ICE_BEAM,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 3348
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3349
        .trainerName = _("Drake"),
#line 3350
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3351
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3353
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3354
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3355
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3356
        .mugshotColor = MUGSHOT_COLOR_DRAKE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3358
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3360
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3359
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3361
                MOVE_ROCK_TOMB,
                MOVE_DRAGON_CLAW,
                MOVE_PROTECT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 3366
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3368
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3367
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3369
                MOVE_DOUBLE_EDGE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3374
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3376
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3375
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3377
                MOVE_SMOKESCREEN,
                MOVE_DRAGON_DANCE,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 3382
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3384
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3383
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3385
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_DRAGON_BREATH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3390
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3390
            .heldItem = ITEM_SITRUS_BERRY,
#line 3392
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3391
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3393
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 3398
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_1] =
    {
#line 3399
        .trainerName = _("Roxanne"),
#line 3400
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3402
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 3403
F_TRAINER_FEMALE | 
#line 3404
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3405
        .items = { ITEM_POTION, ITEM_POTION },
#line 3406
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3407
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3401
        .mugshotColor = MUGSHOT_COLOR_BROWN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3409
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3411
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3410
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3412
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3417
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3419
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3418
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3420
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3425
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3425
            .heldItem = ITEM_ORAN_BERRY,
#line 3427
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3426
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3428
                MOVE_BLOCK,
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3433
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_1] =
    {
#line 3434
        .trainerName = _("Brawly"),
#line 3435
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3437
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3439
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3440
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3441
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3436
        .mugshotColor = MUGSHOT_COLOR_ORANGE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3443
            .species = SPECIES_KUBFU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3443
            .heldItem = ITEM_IAPAPA_BERRY,
#line 3445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3444
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3446
                MOVE_BRICK_BREAK,
                MOVE_FAINT_ATTACK,
                MOVE_ZEN_HEADBUTT,
                MOVE_MEGA_PUNCH,
            },
            },
            {
#line 3451
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3451
            .heldItem = ITEM_WISE_GLASSES,
#line 3454
            .iv = TRAINER_PARTY_IVS(30, 31, 31, 31, 30, 31),
#line 3453
            .ability = ABILITY_WATER_ABSORB,
#line 3452
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3455
                MOVE_BUBBLE_BEAM,
                MOVE_ICE_BEAM,
                MOVE_SUPERPOWER,
                MOVE_HIDDEN_POWER,
            },
            },
            {
#line 3460
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3460
            .heldItem = ITEM_EJECT_BUTTON,
#line 3463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3462
            .ability = ABILITY_LIMBER,
#line 3461
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3464
                MOVE_DRAIN_PUNCH,
                MOVE_RETALIATE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 3468
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3468
            .heldItem = ITEM_MUSCLE_BAND,
#line 3471
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3470
            .ability = ABILITY_INTIMIDATE,
#line 3469
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3472
                MOVE_MACH_PUNCH,
                MOVE_FAKE_OUT,
                MOVE_COUNTER,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 3477
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3477
            .heldItem = ITEM_EXPERT_BELT,
#line 3480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3479
            .ability = ABILITY_SPEED_BOOST,
#line 3478
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3481
                MOVE_INCINERATE,
                MOVE_THUNDER_PUNCH,
                MOVE_DOUBLE_KICK,
                MOVE_WORK_UP,
            },
            },
            {
#line 3486
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3486
            .heldItem = ITEM_EVIOLITE,
#line 3489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3488
            .ability = ABILITY_SHED_SKIN,
#line 3487
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3490
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BRICK_BREAK,
                MOVE_FAINT_ATTACK,
            },
            },
        },
    },
#line 3495
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_1] =
    {
#line 3496
        .trainerName = _("Wattson"),
#line 3497
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3499
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3501
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3502
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3503
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3498
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3505
            .species = SPECIES_MANECTRIC_MEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3505
            .heldItem = ITEM_MANECTITE,
#line 3509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3506
            .ability = ABILITY_INTIMIDATE,
#line 3507
            .lvl = 29,
#line 3508
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3509
                MOVE_HYPER_VOICE,
                MOVE_VOLT_SWITCH,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3513
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3513
            .heldItem = ITEM_ROCKY_HELMET,
#line 3517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3514
            .ability = ABILITY_IRON_BARBS,
#line 3515
            .lvl = 30,
#line 3516
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3517
                MOVE_SMART_STRIKE,
                MOVE_SPARK,
                MOVE_ELECTRIC_TERRAIN,
                MOVE_ENCORE,
            },
            },
            {
#line 3522
            .species = SPECIES_VOLTORB_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3522
            .heldItem = ITEM_EVIOLITE,
#line 3526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3523
            .ability = ABILITY_STATIC,
#line 3524
            .lvl = 31,
#line 3525
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3526
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 3528
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3528
            .heldItem = ITEM_WIDE_LENS,
#line 3532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3529
            .ability = ABILITY_LEVITATE,
#line 3530
            .lvl = 31,
#line 3531
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3532
                MOVE_HEX,
                MOVE_THUNDER_WAVE,
                MOVE_TOXIC,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 3537
            .species = SPECIES_RAICHU_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3537
            .heldItem = ITEM_FOCUS_SASH,
#line 3541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3538
            .ability = ABILITY_SURGE_SURFER,
#line 3539
            .lvl = 30,
#line 3540
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3541
                MOVE_FAKE_OUT,
                MOVE_VOLT_SWITCH,
                MOVE_GRASS_KNOT,
                MOVE_PSYBEAM,
            },
            },
            {
#line 3546
            .species = SPECIES_IRON_THORNS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3546
            .heldItem = ITEM_SALAC_BERRY,
#line 3550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3547
            .ability = ABILITY_QUARK_DRIVE,
#line 3548
            .lvl = 29,
#line 3549
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3550
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_ELECTRIC_TERRAIN,
            },
            },
        },
    },
#line 3555
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_1] =
    {
#line 3556
        .trainerName = _("Flannery"),
#line 3557
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3559
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 3560
F_TRAINER_FEMALE | 
#line 3561
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3562
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3563
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3558
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3565
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3567
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3566
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3568
                MOVE_OVERHEAT,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3573
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3575
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3574
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3576
                MOVE_OVERHEAT,
                MOVE_SMOG,
                MOVE_LIGHT_SCREEN,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3581
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3583
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3582
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3584
                MOVE_OVERHEAT,
                MOVE_TACKLE,
                MOVE_SUNNY_DAY,
                MOVE_ATTRACT,
            },
            },
            {
#line 3589
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3589
            .heldItem = ITEM_WHITE_HERB,
#line 3591
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3590
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3592
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_BODY_SLAM,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 3597
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_1] =
    {
#line 3598
        .trainerName = _("Norman"),
#line 3599
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3601
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 3603
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3604
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3605
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3600
        .mugshotColor = MUGSHOT_COLOR_GREY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3607
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3609
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3608
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3610
                MOVE_TEETER_DANCE,
                MOVE_PSYBEAM,
                MOVE_FACADE,
                MOVE_ENCORE,
            },
            },
            {
#line 3615
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3617
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3616
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3618
                MOVE_SLASH,
                MOVE_FACADE,
                MOVE_ENCORE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3623
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3625
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3624
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3626
                MOVE_SLASH,
                MOVE_BELLY_DRUM,
                MOVE_FACADE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 3631
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3631
            .heldItem = ITEM_SITRUS_BERRY,
#line 3633
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3632
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3634
                MOVE_COUNTER,
                MOVE_YAWN,
                MOVE_FACADE,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 3639
    [DIFFICULTY_NORMAL][TRAINER_WINONA_1] =
    {
#line 3640
        .trainerName = _("Winona"),
#line 3641
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3643
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3644
F_TRAINER_FEMALE | 
#line 3645
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3646
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3647
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3648
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3642
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3650
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3652
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3651
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3653
                MOVE_PERISH_SONG,
                MOVE_MIRROR_MOVE,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3658
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3660
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3659
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3661
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 3666
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3668
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3667
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3669
                MOVE_WATER_GUN,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3674
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3676
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3675
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3677
                MOVE_SAND_ATTACK,
                MOVE_FURY_ATTACK,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3682
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3682
            .heldItem = ITEM_ORAN_BERRY,
#line 3684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3683
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3685
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 3690
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_1] =
    {
#line 3691
        .trainerName = _("Tate&Liza"),
#line 3692
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3694
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 3696
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3697
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3698
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3699
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3693
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3701
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3703
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3702
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3704
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3709
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3711
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3710
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3712
                MOVE_PSYCHIC,
                MOVE_SUNNY_DAY,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3717
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3717
            .heldItem = ITEM_SITRUS_BERRY,
#line 3719
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3718
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3720
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3725
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3725
            .heldItem = ITEM_SITRUS_BERRY,
#line 3727
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3726
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3728
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 3733
    [DIFFICULTY_NORMAL][TRAINER_JUAN_1] =
    {
#line 3734
        .trainerName = _("Juan"),
#line 3735
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3737
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 3739
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3740
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3741
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3742
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 3736
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3744
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3746
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3745
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3747
                MOVE_WATER_PULSE,
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
            },
            },
            {
#line 3752
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3754
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3753
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3755
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3760
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3762
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3761
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3763
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_AURORA_BEAM,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3768
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3770
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3769
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3771
                MOVE_WATER_PULSE,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_LEER,
            },
            },
            {
#line 3776
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3776
            .heldItem = ITEM_CHESTO_BERRY,
#line 3778
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3777
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3779
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 3784
    [DIFFICULTY_NORMAL][TRAINER_JERRY_1] =
    {
#line 3785
        .trainerName = _("Jerry"),
#line 3786
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3787
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3789
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3790
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3791
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3793
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3795
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3794
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3797
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3798
        .trainerName = _("Ted"),
#line 3799
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3800
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3802
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3803
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3804
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3806
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3808
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3807
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3810
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3811
        .trainerName = _("Paul"),
#line 3812
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3813
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3815
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3816
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3817
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3819
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3821
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3820
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3823
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3825
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3824
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3827
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3829
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3828
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3831
    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
#line 3832
        .trainerName = _("Karen"),
#line 3833
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3834
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3835
F_TRAINER_FEMALE | 
#line 3836
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3837
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3838
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3840
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3842
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3841
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3844
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3845
        .trainerName = _("Georgia"),
#line 3846
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3847
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3848
F_TRAINER_FEMALE | 
#line 3849
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3850
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3851
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3853
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3855
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3854
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3857
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3859
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3858
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3861
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3862
        .trainerName = _("Kate & Joy"),
#line 3863
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3864
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3866
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3867
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 3868
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3870
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3871
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3873
                MOVE_HYPNOSIS,
                MOVE_PSYBEAM,
                MOVE_DIZZY_PUNCH,
                MOVE_TEETER_DANCE,
            },
            },
            {
#line 3878
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3879
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3881
                MOVE_FOCUS_PUNCH,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 3886
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_1] =
    {
#line 3887
        .trainerName = _("Anna & Meg"),
#line 3888
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3889
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3891
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3892
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3893
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3895
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3895
            .heldItem = ITEM_MUSCLE_BAND,
#line 3899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3896
            .ability = ABILITY_LIMBER,
#line 3897
            .lvl = 30,
#line 3898
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3899
                MOVE_FAKE_OUT,
                MOVE_TRAILBLAZE,
                MOVE_METAL_CLAW,
                MOVE_ASSURANCE,
            },
            },
            {
#line 3904
            .species = SPECIES_BRAMBLEGHAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3904
            .heldItem = ITEM_FOCUS_SASH,
#line 3908
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3905
            .ability = ABILITY_WIND_RIDER,
#line 3906
            .lvl = 29,
#line 3907
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3908
                MOVE_HEX,
                MOVE_MEGA_DRAIN,
                MOVE_SHADOW_SNEAK,
                MOVE_SPIKES,
            },
            },
            {
#line 3913
            .species = SPECIES_CARKOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3913
            .heldItem = ITEM_PASSHO_BERRY,
#line 3917
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3914
            .ability = ABILITY_STEAM_ENGINE,
#line 3915
            .lvl = 29,
#line 3916
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3917
                MOVE_BODY_PRESS,
                MOVE_BULLDOZE,
                MOVE_ROCK_TOMB,
                MOVE_IRON_DEFENSE,
            },
            },
            {
#line 3922
            .species = SPECIES_HAKAMO_O,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3922
            .heldItem = ITEM_MUSCLE_BAND,
#line 3926
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3923
            .ability = ABILITY_OVERCOAT,
#line 3924
            .lvl = 30,
#line 3925
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3926
                MOVE_BREAKING_SWIPE,
                MOVE_METAL_CLAW,
                MOVE_REVERSAL,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3931
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3932
        .trainerName = _("Victor"),
#line 3933
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3934
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3936
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3937
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3938
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3940
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3940
            .heldItem = ITEM_ORAN_BERRY,
#line 3942
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3941
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3944
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3944
            .heldItem = ITEM_ORAN_BERRY,
#line 3946
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3945
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3948
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_1] =
    {
#line 3949
        .trainerName = _("Miguel"),
#line 3950
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3951
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3953
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3954
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3955
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3957
            .species = SPECIES_VIVILLON_OCEAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3957
            .heldItem = ITEM_ROCKY_HELMET,
#line 3961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3958
            .ability = ABILITY_COMPOUND_EYES,
#line 3959
            .lvl = 27,
#line 3960
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3961
                MOVE_BUG_BITE,
                MOVE_STRUGGLE_BUG,
                MOVE_AIR_CUTTER,
                MOVE_PROTECT,
            },
            },
            {
#line 3966
            .species = SPECIES_WORMADAM_TRASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3966
            .heldItem = ITEM_COVERT_CLOAK,
#line 3970
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3967
            .ability = ABILITY_OVERCOAT,
#line 3968
            .lvl = 28,
#line 3969
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3970
                MOVE_BUG_BITE,
                MOVE_CONFUSION,
                MOVE_INFESTATION,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3975
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3976
        .trainerName = _("Colton"),
#line 3977
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3978
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3980
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3981
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 3982
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3984
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3984
            .heldItem = ITEM_ORAN_BERRY,
#line 3986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3985
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3987
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3992
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3992
            .heldItem = ITEM_ORAN_BERRY,
#line 3994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3993
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3995
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4000
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4000
            .heldItem = ITEM_ORAN_BERRY,
#line 4002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4001
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4003
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4008
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4008
            .heldItem = ITEM_ORAN_BERRY,
#line 4010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4009
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4011
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4016
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4016
            .heldItem = ITEM_ORAN_BERRY,
#line 4018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4017
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4019
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4024
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4024
            .heldItem = ITEM_ORAN_BERRY,
#line 4026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4025
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4027
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4032
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 4033
        .trainerName = _("Victoria"),
#line 4034
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4035
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4036
F_TRAINER_FEMALE | 
#line 4037
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4038
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4039
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4041
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4041
            .heldItem = ITEM_ORAN_BERRY,
#line 4043
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4042
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4045
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 4046
        .trainerName = _("Vanessa"),
#line 4047
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4048
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4049
F_TRAINER_FEMALE | 
#line 4050
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4051
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4052
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4054
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4054
            .heldItem = ITEM_ORAN_BERRY,
#line 4056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4055
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4058
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 4059
        .trainerName = _("Bethany"),
#line 4060
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4061
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4062
F_TRAINER_FEMALE | 
#line 4063
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4064
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4065
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4067
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4067
            .heldItem = ITEM_ORAN_BERRY,
#line 4069
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4068
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4071
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4071
            .heldItem = ITEM_ORAN_BERRY,
#line 4073
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4072
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4075
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4075
            .heldItem = ITEM_ORAN_BERRY,
#line 4077
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4076
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4079
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_1] =
    {
#line 4080
        .trainerName = _("Isabel"),
#line 4081
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4082
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4083
F_TRAINER_FEMALE | 
#line 4084
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4085
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4086
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4088
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4088
            .heldItem = ITEM_ORAN_BERRY,
#line 4090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4089
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4092
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4092
            .heldItem = ITEM_ORAN_BERRY,
#line 4094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4093
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4096
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_1] =
    {
#line 4097
        .trainerName = _("Timothy"),
#line 4098
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4099
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4101
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4102
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4103
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4105
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4107
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4106
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4109
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 4110
        .trainerName = _("Vicky"),
#line 4111
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4112
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4113
F_TRAINER_FEMALE | 
#line 4114
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4115
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4116
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4118
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4120
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4119
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4121
                MOVE_HIGH_JUMP_KICK,
                MOVE_MEDITATE,
                MOVE_CONFUSION,
                MOVE_DETECT,
            },
            },
        },
    },
#line 4126
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_1] =
    {
#line 4127
        .trainerName = _("Shelby"),
#line 4128
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4129
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4130
F_TRAINER_FEMALE | 
#line 4131
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4132
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4133
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4135
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4137
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4136
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4139
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4141
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4140
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4143
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_1] =
    {
#line 4144
        .trainerName = _("Calvin"),
#line 4145
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4146
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4148
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4149
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4150
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4152
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4152
            .heldItem = ITEM_ORAN_BERRY,
#line 4156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4153
            .ability = ABILITY_STEADFAST,
#line 4154
            .lvl = 26,
#line 4155
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4156
                MOVE_VACUUM_WAVE,
                MOVE_BULLET_PUNCH,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 4160
            .species = SPECIES_NICKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4160
            .heldItem = ITEM_ORAN_BERRY,
#line 4164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4161
            .ability = ABILITY_UNBURDEN,
#line 4162
            .lvl = 26,
#line 4163
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4164
                MOVE_ASSURANCE,
                MOVE_SNARL,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 4168
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4169
        .trainerName = _("Billy"),
#line 4170
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4171
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4173
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4174
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4175
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4177
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4178
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4181
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4182
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4185
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4186
        .trainerName = _("Josh"),
#line 4187
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4188
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4190
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4191
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4192
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4194
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4196
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4195
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4197
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4199
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4200
        .trainerName = _("Tommy"),
#line 4201
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4202
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4204
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4205
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4206
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4208
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4210
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4209
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4212
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4214
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4213
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4216
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4217
        .trainerName = _("Joey"),
#line 4218
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4219
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4221
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4222
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4223
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4225
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4226
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4229
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4230
        .trainerName = _("Ben"),
#line 4231
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4232
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4234
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4235
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4236
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4238
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4240
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4239
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4241
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4246
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4248
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4247
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4249
                MOVE_AMNESIA,
                MOVE_SLUDGE,
                MOVE_YAWN,
                MOVE_POUND,
            },
            },
        },
    },
#line 4254
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4255
        .trainerName = _("Quincy"),
#line 4256
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4257
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4259
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4260
        .items = { ITEM_FULL_RESTORE },
#line 4261
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4262
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4264
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4266
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4265
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4267
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 4272
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4274
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4273
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4275
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4280
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4281
        .trainerName = _("Katelynn"),
#line 4282
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4283
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4284
F_TRAINER_FEMALE | 
#line 4285
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4286
        .items = { ITEM_FULL_RESTORE },
#line 4287
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4288
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4290
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4292
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4291
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4293
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4298
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4300
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4299
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4301
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4306
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4307
        .trainerName = _("Jaylen"),
#line 4308
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4309
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4311
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4312
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4313
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4315
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4316
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4319
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4320
        .trainerName = _("Dillon"),
#line 4321
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4322
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4324
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4325
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4326
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4328
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4329
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4332
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4333
        .trainerName = _("Eddie"),
#line 4334
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4335
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4337
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4338
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4339
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4341
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4342
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4345
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4346
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4349
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4350
        .trainerName = _("Allen"),
#line 4351
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4352
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4354
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4355
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4356
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4358
            .species = SPECIES_SKWOVET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4358
            .heldItem = ITEM_PETAYA_BERRY,
#line 4362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4359
            .ability = ABILITY_CHEEK_POUCH,
#line 4360
            .lvl = 26,
#line 4361
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4362
                MOVE_BELCH,
                MOVE_BITE,
                MOVE_SUPER_FANG,
                MOVE_STUFF_CHEEKS,
            },
            },
            {
#line 4367
            .species = SPECIES_GRIMER_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4367
            .heldItem = ITEM_LIECHI_BERRY,
#line 4371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4368
            .ability = ABILITY_GLUTTONY,
#line 4369
            .lvl = 27,
#line 4370
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4371
                MOVE_THIEF,
                MOVE_ROCK_TOMB,
                MOVE_PAYBACK,
            },
            },
        },
    },
#line 4375
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4376
        .trainerName = _("Timmy"),
#line 4377
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4378
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4380
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4381
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4382
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4384
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4384
            .heldItem = ITEM_EJECT_BUTTON,
#line 4388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4385
            .ability = ABILITY_DRIZZLE,
#line 4386
            .lvl = 29,
#line 4387
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4388
                MOVE_WING_ATTACK,
                MOVE_WATER_PULSE,
                MOVE_U_TURN,
            },
            },
            {
#line 4392
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4392
            .heldItem = ITEM_CHARCOAL,
#line 4396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4393
            .ability = ABILITY_DROUGHT,
#line 4394
            .lvl = 29,
#line 4395
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4396
                MOVE_INCINERATE,
                MOVE_HEX,
                MOVE_WEATHER_BALL,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 4401
    [DIFFICULTY_NORMAL][TRAINER_WALLACE] =
    {
#line 4402
        .trainerName = _("Wallace"),
#line 4403
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4404
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender =
#line 4406
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4407
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4408
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 4409
        .mugshotColor = MUGSHOT_COLOR_CHAMPION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4411
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4412
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4414
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 4419
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4420
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4422
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 4427
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4428
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4430
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 4435
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4436
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4438
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 4443
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4444
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4446
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 4451
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4451
            .heldItem = ITEM_SITRUS_BERRY,
#line 4453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4452
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4454
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4459
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4460
        .trainerName = _("Andrew"),
#line 4461
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4462
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4464
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4465
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4466
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4468
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4468
            .heldItem = ITEM_EVIOLITE,
#line 4472
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4469
            .ability = ABILITY_WATER_VEIL,
#line 4470
            .lvl = 28,
#line 4471
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4472
                MOVE_FAKE_OUT,
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
                MOVE_FLIP_TURN,
            },
            },
            {
#line 4477
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4477
            .heldItem = ITEM_IAPAPA_BERRY,
#line 4481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4478
            .ability = ABILITY_TORRENT,
#line 4479
            .lvl = 27,
#line 4480
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4481
                MOVE_FAKE_OUT,
                MOVE_ICY_WIND,
                MOVE_PROTECT,
                MOVE_FOLLOW_ME,
            },
            },
        },
    },
#line 4486
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4487
        .trainerName = _("Ivan"),
#line 4488
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4489
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4491
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4492
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4493
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4495
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4496
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4499
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4500
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4503
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4504
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4507
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4508
        .trainerName = _("Claude"),
#line 4509
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4510
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4512
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4513
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4514
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4516
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4517
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4520
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4521
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4524
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4525
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4528
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
    {
#line 4529
        .trainerName = _("Elliot"),
#line 4530
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4531
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4533
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4534
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4535
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4537
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4538
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4541
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4542
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4545
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4546
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4549
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4550
        .trainerName = _("Ned"),
#line 4551
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4552
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4554
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4555
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4556
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4558
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4560
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4559
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4562
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4563
        .trainerName = _("Dale"),
#line 4564
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4565
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4567
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4568
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4569
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4571
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4572
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4575
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4576
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4579
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4580
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4583
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4584
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4587
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4588
        .trainerName = _("Nolan"),
#line 4589
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4590
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4592
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4593
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4594
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4596
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4597
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4600
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4601
        .trainerName = _("Barny"),
#line 4602
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4603
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4605
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4606
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4607
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4609
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4610
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4613
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4614
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4617
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4618
        .trainerName = _("Wade"),
#line 4619
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4620
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4622
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4623
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4624
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4626
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4627
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4630
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4631
        .trainerName = _("Carter"),
#line 4632
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4633
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4635
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4636
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4637
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4639
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4641
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4640
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4643
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4645
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4644
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4647
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4648
        .trainerName = _("Ronald"),
#line 4649
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4650
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4652
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4653
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4654
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4656
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4657
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4660
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4661
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4664
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4665
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4668
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4669
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4672
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4673
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4676
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4677
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4680
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4681
        .trainerName = _("Jacob"),
#line 4682
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4683
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4685
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4686
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4687
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4689
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4691
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4690
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4693
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4695
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4694
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4697
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4699
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4698
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4701
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4702
        .trainerName = _("Anthony"),
#line 4703
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4704
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4706
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4707
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4708
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4710
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4711
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4714
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4715
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4718
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
    {
#line 4719
        .trainerName = _("Benjamin"),
#line 4720
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4721
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4723
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4724
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_1] =
    {
#line 4732
        .trainerName = _("Abigail"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4738
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4740
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4741
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4744
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4745
        .trainerName = _("Jasmine"),
#line 4746
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4747
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4748
F_TRAINER_FEMALE | 
#line 4749
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4750
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4751
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4753
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4755
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4754
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4757
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4759
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4758
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4761
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4762
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4765
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
    {
#line 4766
        .trainerName = _("Dylan"),
#line 4767
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4768
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4770
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4771
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4772
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4774
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4774
            .heldItem = ITEM_WISE_GLASSES,
#line 4778
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4775
            .ability = ABILITY_TANGLED_FEET,
#line 4776
            .lvl = 30,
#line 4777
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4778
                MOVE_HYPER_VOICE,
                MOVE_AIR_CUTTER,
                MOVE_ROOST,
            },
            },
            {
#line 4782
            .species = SPECIES_CHARJABUG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4782
            .heldItem = ITEM_POWER_HERB,
#line 4786
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4783
            .ability = ABILITY_BATTERY,
#line 4784
            .lvl = 30,
#line 4785
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4786
                MOVE_DIG,
                MOVE_SKITTER_SMACK,
                MOVE_ELECTROWEB,
            },
            },
        },
    },
#line 4790
    [DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
    {
#line 4791
        .trainerName = _("Maria"),
#line 4792
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4793
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4794
F_TRAINER_FEMALE | 
#line 4795
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4796
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4797
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4799
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4799
            .heldItem = ITEM_TOXIC_ORB,
#line 4803
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4800
            .ability = ABILITY_MARVEL_SCALE,
#line 4801
            .lvl = 30,
#line 4802
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4803
                MOVE_FACADE,
                MOVE_BREAKING_SWIPE,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 4808
            .species = SPECIES_BRAIXEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4808
            .heldItem = ITEM_MIRACLE_SEED,
#line 4812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4809
            .ability = ABILITY_BLAZE,
#line 4810
            .lvl = 30,
#line 4811
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4812
                MOVE_BURNING_JEALOUSY,
                MOVE_PSYBEAM,
                MOVE_GRASS_KNOT,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 4817
            .species = SPECIES_SHIINOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4817
            .heldItem = ITEM_WISE_GLASSES,
#line 4821
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4818
            .ability = ABILITY_EFFECT_SPORE,
#line 4819
            .lvl = 30,
#line 4820
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4821
                MOVE_DREAM_EATER,
                MOVE_DRAINING_KISS,
                MOVE_MEGA_DRAIN,
                MOVE_SLEEP_POWDER,
            },
            },
        },
    },
#line 4826
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4827
        .trainerName = _("Camden"),
#line 4828
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4829
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4831
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4832
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4833
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4835
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4836
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4839
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4840
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4843
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4844
        .trainerName = _("Demetrius"),
#line 4845
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4846
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4848
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4849
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4850
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4852
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4853
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4856
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4857
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4860
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_1] =
    {
#line 4861
        .trainerName = _("Isaiah"),
#line 4862
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4863
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4865
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4866
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4867
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4869
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4870
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4873
    [DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
    {
#line 4874
        .trainerName = _("Pablo"),
#line 4875
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4876
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4878
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4879
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4880
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4882
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4883
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4886
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4887
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4890
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4891
        .trainerName = _("Chase"),
#line 4892
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4893
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4895
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4896
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4897
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4899
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4900
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4903
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4905
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4904
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4907
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4908
        .trainerName = _("Isobel"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4914
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4916
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4917
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4920
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4921
        .trainerName = _("Donny"),
#line 4922
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4923
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4924
F_TRAINER_FEMALE | 
#line 4925
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4926
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4927
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4929
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4930
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4933
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4935
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4934
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4937
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4938
        .trainerName = _("Talia"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4950
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_1] =
    {
#line 4951
        .trainerName = _("Katelyn"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4957
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4959
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4960
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4963
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4964
        .trainerName = _("Allison"),
#line 4965
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4966
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4967
F_TRAINER_FEMALE | 
#line 4968
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4969
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 4970
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4972
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4973
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4976
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4978
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4977
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4980
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
    {
#line 4981
        .trainerName = _("Nicolas"),
#line 4982
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4983
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4985
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4986
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 4987
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4989
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4991
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4990
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4993
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4995
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4994
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4997
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4998
        .trainerName = _("Aaron"),
#line 4999
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5000
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5002
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5003
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5004
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5006
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5007
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5009
                MOVE_DRAGON_BREATH,
                MOVE_HEADBUTT,
                MOVE_FOCUS_ENERGY,
                MOVE_EMBER,
            },
            },
        },
    },
#line 5014
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 5015
        .trainerName = _("Perry"),
#line 5016
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5017
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5019
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5020
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5021
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5023
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5024
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5027
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 5028
        .trainerName = _("Hugh"),
#line 5029
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5030
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5032
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5033
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5034
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5036
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5037
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5040
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5041
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5044
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 5045
        .trainerName = _("Phil"),
#line 5046
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5047
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5049
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5050
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5051
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5053
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5054
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5057
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 5058
        .trainerName = _("Jared"),
#line 5059
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5060
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5062
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5063
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5064
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5066
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5068
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5067
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5070
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5072
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5071
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5074
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5076
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5075
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5078
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 5079
        .trainerName = _("Humberto"),
#line 5080
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5081
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5083
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5084
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5085
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5087
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5089
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5088
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5091
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 5092
        .trainerName = _("Presley"),
#line 5093
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5094
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5096
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5097
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5098
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5100
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5101
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5104
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5105
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5108
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 5109
        .trainerName = _("Edwardo"),
#line 5110
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5111
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5113
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5114
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5115
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5117
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5119
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5118
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5121
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5123
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5122
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5125
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 5126
        .trainerName = _("Colin"),
#line 5127
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5128
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5130
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5131
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5132
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5134
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5135
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5138
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5139
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5142
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
    {
#line 5143
        .trainerName = _("Robert"),
#line 5144
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5145
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5147
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5148
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5149
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5151
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5152
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5155
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 5156
        .trainerName = _("Benny"),
#line 5157
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5158
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5160
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5161
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5162
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5164
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5165
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5168
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5169
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5172
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5173
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5176
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 5177
        .trainerName = _("Chester"),
#line 5178
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5179
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5181
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5182
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5183
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5185
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5186
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5189
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5191
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5190
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5193
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 5194
        .trainerName = _("Alex"),
#line 5195
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5196
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5198
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5199
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5200
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5202
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5204
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5203
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5206
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5208
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5207
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5210
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 5211
        .trainerName = _("Beck"),
#line 5212
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5213
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5215
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5216
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5217
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5219
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5220
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5223
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 5224
        .trainerName = _("Yasu"),
#line 5225
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5226
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5228
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5229
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5230
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5232
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5233
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5236
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5237
        .trainerName = _("Takashi"),
#line 5238
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5239
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5241
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5242
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5243
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5245
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5246
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5249
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5250
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5253
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5254
        .trainerName = _("Dianne"),
#line 5255
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5256
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5257
F_TRAINER_FEMALE | 
#line 5258
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5259
        .items = { ITEM_FULL_RESTORE },
#line 5260
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5261
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5263
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5264
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5266
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5269
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5270
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5272
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5275
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5276
        .trainerName = _("Jani"),
#line 5277
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5278
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5279
F_TRAINER_FEMALE | 
#line 5280
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5281
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5282
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5284
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5285
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5288
    [DIFFICULTY_NORMAL][TRAINER_LAO_1] =
    {
#line 5289
        .trainerName = _("Lao"),
#line 5290
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5291
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5293
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5294
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5295
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5297
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5298
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5300
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5305
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5306
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5308
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5313
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5314
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5316
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 5321
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5322
        .trainerName = _("Lung"),
#line 5323
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5324
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5326
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5327
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5328
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5330
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5331
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5334
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5335
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5338
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5339
        .trainerName = _("Jocelyn"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
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
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5348
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5351
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5352
        .trainerName = _("Laura"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5358
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5360
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5362
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5361
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5364
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
    {
#line 5365
        .trainerName = _("Cyndy"),
#line 5366
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5367
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5368
F_TRAINER_FEMALE | 
#line 5369
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5370
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5371
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5373
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5375
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5374
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5377
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5379
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5378
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5381
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5382
        .trainerName = _("Cora"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5388
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5390
            .species = SPECIES_MEDITITE,
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
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5395
        .trainerName = _("Paula"),
#line 5396
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5397
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5398
F_TRAINER_FEMALE | 
#line 5399
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5400
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5401
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5403
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5404
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5407
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
    {
#line 5408
        .trainerName = _("Madeline"),
#line 5409
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5410
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5411
F_TRAINER_FEMALE | 
#line 5412
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5413
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5414
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5416
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5417
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5419
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 5424
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5425
        .trainerName = _("Clarissa"),
#line 5426
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5427
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5428
F_TRAINER_FEMALE | 
#line 5429
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5430
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5431
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5433
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5434
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5437
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5438
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5441
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5442
        .trainerName = _("Angelica"),
#line 5443
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5444
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5445
F_TRAINER_FEMALE | 
#line 5446
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5447
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5448
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5450
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5452
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5451
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5453
                MOVE_RAIN_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_THUNDER,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 5458
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5459
        .trainerName = _("Beverly"),
#line 5460
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5461
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5462
F_TRAINER_FEMALE | 
#line 5463
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5464
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5465
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5467
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5468
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5471
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5472
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5475
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5476
        .trainerName = _("Imani"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5482
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5484
            .species = SPECIES_MARILL,
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
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5489
        .trainerName = _("Kyla"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5495
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5497
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5498
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5501
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5502
        .trainerName = _("Denise"),
#line 5503
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5504
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5505
F_TRAINER_FEMALE | 
#line 5506
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5507
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5508
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5510
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5511
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5514
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5515
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5518
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5519
        .trainerName = _("Beth"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5525
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5527
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5528
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5531
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5532
        .trainerName = _("Tara"),
#line 5533
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5534
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5535
F_TRAINER_FEMALE | 
#line 5536
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5537
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5538
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5540
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5541
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5544
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5545
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5548
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5549
        .trainerName = _("Missy"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5555
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5557
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5558
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5561
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5562
        .trainerName = _("Alice"),
#line 5563
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5564
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5565
F_TRAINER_FEMALE | 
#line 5566
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5567
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5568
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5570
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5571
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5574
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5575
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5578
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5579
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5582
    [DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
    {
#line 5583
        .trainerName = _("Jenny"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5589
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5591
            .species = SPECIES_WAILMER,
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
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5596
        .trainerName = _("Grace"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5602
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5604
            .species = SPECIES_MARILL,
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
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5609
        .trainerName = _("Tanya"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5615
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5617
            .species = SPECIES_LUVDISC,
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
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5622
        .trainerName = _("Sharon"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5628
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5630
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5631
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5634
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5635
        .trainerName = _("Nikki"),
#line 5636
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5637
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5638
F_TRAINER_FEMALE | 
#line 5639
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5640
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5641
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5643
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5644
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5647
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5648
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5651
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5652
        .trainerName = _("Brenda"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5658
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5660
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5661
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5664
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5665
        .trainerName = _("Katie"),
#line 5666
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5667
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5668
F_TRAINER_FEMALE | 
#line 5669
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5670
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5671
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5673
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5674
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5677
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5678
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5681
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5682
        .trainerName = _("Susie"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5688
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5690
            .species = SPECIES_LUVDISC,
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
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5695
        .trainerName = _("Kara"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5701
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5703
            .species = SPECIES_SEAKING,
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
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5708
        .trainerName = _("Dana"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5714
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5716
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5717
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5720
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5721
        .trainerName = _("Sienna"),
#line 5722
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5723
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5724
F_TRAINER_FEMALE | 
#line 5725
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5726
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5727
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5729
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5730
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5733
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5734
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5737
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5738
        .trainerName = _("Debra"),
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
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5744
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5746
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5747
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5750
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5751
        .trainerName = _("Linda"),
#line 5752
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5753
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5754
F_TRAINER_FEMALE | 
#line 5755
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5756
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5757
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5759
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5760
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5763
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5764
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5767
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5768
        .trainerName = _("Kaylee"),
#line 5769
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5770
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5771
F_TRAINER_FEMALE | 
#line 5772
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5773
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5774
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5776
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5777
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5780
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5781
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5784
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5785
        .trainerName = _("Laurel"),
#line 5786
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5787
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5788
F_TRAINER_FEMALE | 
#line 5789
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5790
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5791
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5793
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5794
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5797
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5798
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5801
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5802
        .trainerName = _("Carlee"),
#line 5803
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5804
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5805
F_TRAINER_FEMALE | 
#line 5806
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5807
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5808
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5810
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5811
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5814
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5815
        .trainerName = _("Heidi"),
#line 5816
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5817
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5818
F_TRAINER_FEMALE | 
#line 5819
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5820
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5821
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5823
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5824
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5826
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 5831
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5832
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5834
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 5839
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5840
        .trainerName = _("Becky"),
#line 5841
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5842
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5843
F_TRAINER_FEMALE | 
#line 5844
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5845
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5846
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5848
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5849
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5851
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 5856
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5857
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5859
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 5864
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5865
        .trainerName = _("Carol"),
#line 5866
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5867
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5868
F_TRAINER_FEMALE | 
#line 5869
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5870
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5871
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5873
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5874
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5877
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5878
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5881
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_5] =
    {
#line 5882
        .trainerName = _("Grunt"),
#line 5883
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 5884
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 5886
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5887
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5888
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5890
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5891
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5894
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5895
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5898
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5899
        .trainerName = _("Martha"),
#line 5900
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5901
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5902
F_TRAINER_FEMALE | 
#line 5903
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5904
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5905
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5907
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5908
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5911
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5912
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5915
    [DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
    {
#line 5916
        .trainerName = _("Diana"),
#line 5917
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5918
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5919
F_TRAINER_FEMALE | 
#line 5920
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5921
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5922
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5924
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5925
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5928
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5929
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5932
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5933
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5936
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT3] =
    {
#line 5937
        .trainerName = _("Grunt"),
#line 5938
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 5939
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 5941
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5942
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5943
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5945
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5946
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5948
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 5953
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5954
        .trainerName = _("Irene"),
#line 5955
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5956
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5957
F_TRAINER_FEMALE | 
#line 5958
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5959
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 5960
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5962
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5963
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5966
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5967
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5970
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
    {
#line 5971
        .trainerName = _("Amy & Liv"),
#line 5972
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5973
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5975
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5976
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 5977
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5979
            .species = SPECIES_THWACKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5979
            .heldItem = ITEM_EJECT_BUTTON,
#line 5983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5980
            .ability = ABILITY_GRASSY_SURGE,
#line 5981
            .lvl = 27,
#line 5982
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5983
                MOVE_FAKE_OUT,
                MOVE_GRASSY_GLIDE,
                MOVE_FACADE,
                MOVE_THIEF,
            },
            },
            {
#line 5988
            .species = SPECIES_FLABEBE_BLUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5988
            .heldItem = ITEM_TERRAIN_EXTENDER,
#line 5992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5989
            .ability = ABILITY_SYMBIOSIS,
#line 5990
            .lvl = 28,
#line 5991
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5992
                MOVE_MAGICAL_LEAF,
                MOVE_FAIRY_WIND,
                MOVE_AROMATHERAPY,
                MOVE_MISTY_TERRAIN,
            },
            },
            {
#line 5997
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5997
            .heldItem = ITEM_TERRAIN_EXTENDER,
#line 6001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5998
            .ability = ABILITY_INNER_FOCUS,
#line 5999
            .lvl = 27,
#line 6000
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6001
                MOVE_CONFUSION,
                MOVE_SEISMIC_TOSS,
                MOVE_TELEKINESIS,
                MOVE_PSYCHIC_TERRAIN,
            },
            },
            {
#line 6006
            .species = SPECIES_PINCURCHIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6006
            .heldItem = ITEM_JABOCA_BERRY,
#line 6010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6007
            .ability = ABILITY_ELECTRIC_SURGE,
#line 6008
            .lvl = 28,
#line 6009
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6010
                MOVE_SPARK,
                MOVE_ELECTROWEB,
                MOVE_WATER_GUN,
                MOVE_TOXIC_SPIKES,
            },
            },
        },
    },
#line 6015
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
    {
#line 6016
        .trainerName = _("Gina & Mia"),
#line 6017
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6018
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6020
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6021
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6022
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6024
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6025
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6028
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6029
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6032
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 6033
        .trainerName = _("Miu & Yuki"),
#line 6034
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6035
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6037
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6038
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6039
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6041
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6043
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6042
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6045
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6046
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6049
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 6050
        .trainerName = _("Huey"),
#line 6051
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6052
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6054
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6055
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6056
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6058
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6060
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6059
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6062
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6064
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6063
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6066
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 6067
        .trainerName = _("Edmond"),
#line 6068
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6069
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6071
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6072
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6073
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6075
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6076
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6079
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
    {
#line 6080
        .trainerName = _("Ernest"),
#line 6081
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6082
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6084
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6085
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6086
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6088
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6089
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6092
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6093
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6096
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 6097
        .trainerName = _("Dwayne"),
#line 6098
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6099
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6101
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6102
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6103
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6105
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6107
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6106
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6109
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6110
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6113
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6114
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6117
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 6118
        .trainerName = _("Phillip"),
#line 6119
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6120
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6122
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6123
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6124
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6126
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6127
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6130
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6131
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6134
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 6135
        .trainerName = _("Leonard"),
#line 6136
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6137
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6139
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6140
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6141
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6143
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6144
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6147
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6148
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6151
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6152
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6155
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6156
        .trainerName = _("Duncan"),
#line 6157
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6158
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6160
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6161
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6162
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6164
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6165
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6168
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6169
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6172
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 6173
        .trainerName = _("Eli"),
#line 6174
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6175
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6177
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6178
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6179
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6181
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6183
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6182
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6185
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 6186
        .trainerName = _("Annika"),
#line 6187
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6188
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 6189
F_TRAINER_FEMALE | 
#line 6190
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6191
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6192
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6194
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6194
            .heldItem = ITEM_ORAN_BERRY,
#line 6196
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6195
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6197
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
            {
#line 6202
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6202
            .heldItem = ITEM_ORAN_BERRY,
#line 6204
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6203
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6205
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 6210
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 6211
        .trainerName = _("Jazmyn"),
#line 6212
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 6213
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6214
F_TRAINER_FEMALE | 
#line 6215
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6216
        .items = { ITEM_HYPER_POTION },
#line 6217
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6218
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6220
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6221
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6224
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 6225
        .trainerName = _("Jonas"),
#line 6226
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6227
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6229
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6230
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6231
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6233
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6234
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6236
                MOVE_TOXIC,
                MOVE_THUNDER,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 6241
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 6242
        .trainerName = _("Kayley"),
#line 6243
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6244
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6245
F_TRAINER_FEMALE | 
#line 6246
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6247
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6248
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6250
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6251
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6253
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
            },
            },
        },
    },
#line 6258
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 6259
        .trainerName = _("Auron"),
#line 6260
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6261
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6263
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6264
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6265
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6267
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6268
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6271
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6272
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6275
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 6276
        .trainerName = _("Kelvin"),
#line 6277
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6278
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6280
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6281
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6282
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6284
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6286
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6285
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6288
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6290
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6289
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6292
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 6293
        .trainerName = _("Marley"),
#line 6294
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6295
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6296
F_TRAINER_FEMALE | 
#line 6297
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6298
        .items = { ITEM_HYPER_POTION },
#line 6299
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6300
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6302
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6303
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6305
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 6310
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6311
        .trainerName = _("Reyna"),
#line 6312
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6313
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6314
F_TRAINER_FEMALE | 
#line 6315
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6316
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6317
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6319
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6321
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6320
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6323
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6325
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6324
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6327
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6328
        .trainerName = _("Hudson"),
#line 6329
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6330
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6332
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6333
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6334
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6336
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6337
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6340
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6341
        .trainerName = _("Conor"),
#line 6342
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6343
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6345
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6346
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6347
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6349
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6350
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6353
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6355
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6354
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6357
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
#line 6358
        .trainerName = _("Edwin"),
#line 6359
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6360
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6362
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6363
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6364
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6366
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6366
            .heldItem = ITEM_SOFT_SAND,
#line 6370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6367
            .ability = ABILITY_LEVITATE,
#line 6368
            .lvl = 29,
#line 6369
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6370
                MOVE_EARTH_POWER,
                MOVE_SHADOW_BALL,
                MOVE_STORED_POWER,
                MOVE_COSMIC_POWER,
            },
            },
            {
#line 6375
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6375
            .heldItem = ITEM_FLAME_ORB,
#line 6379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6376
            .ability = ABILITY_INNER_FOCUS,
#line 6377
            .lvl = 28,
#line 6378
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6379
                MOVE_FIRE_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_GYRO_BALL,
                MOVE_FLING,
            },
            },
            {
#line 6384
            .species = SPECIES_DARUMAKA_GALAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6384
            .heldItem = ITEM_CHARTI_BERRY,
#line 6388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6385
            .ability = ABILITY_INNER_FOCUS,
#line 6386
            .lvl = 28,
#line 6387
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6388
                MOVE_ICE_PUNCH,
                MOVE_MEGA_PUNCH,
                MOVE_THIEF,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6393
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6394
        .trainerName = _("Hector"),
#line 6395
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6396
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6398
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6399
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6400
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6402
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6403
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6406
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6407
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6410
    [DIFFICULTY_NORMAL][TRAINER_COURTNEY_MOSSDEEP] =
    {
#line 6411
        .trainerName = _("Courtney"),
#line 6412
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6413
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
        .encounterMusic_gender =
#line 6414
F_TRAINER_FEMALE | 
#line 6415
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6417
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6418
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6416
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6420
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6422
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6421
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6424
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6426
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6425
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6428
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6430
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6429
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6432
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 6433
        .trainerName = _("Wally"),
#line 6434
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6435
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 6438
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6439
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6440
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6436
        .mugshotColor = MUGSHOT_COLOR_WHITE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6442
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6444
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6443
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6445
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 6450
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6452
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6451
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6453
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 6458
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6460
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6459
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6461
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 6466
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6468
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6467
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6469
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 6474
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6476
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 6475
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6477
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 6482
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6483
        .trainerName = _("Brendan"),
#line 6484
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6485
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6487
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6488
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6489
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6490
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6492
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6492
            .heldItem = ITEM_SITRUS_BERRY,
#line 6494
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6493
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6495
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_ICY_WIND,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 6500
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6501
        .trainerName = _("Brendan"),
#line 6502
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6503
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6505
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6506
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6507
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6508
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6510
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6512
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6511
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6514
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6516
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6515
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6518
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6520
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6519
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6522
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 6523
        .trainerName = _("Brendan"),
#line 6524
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6525
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6527
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6528
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6529
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6530
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6532
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6534
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6533
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6536
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6538
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6537
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6540
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6542
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6541
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6544
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6545
        .trainerName = _("Brendan"),
#line 6546
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6547
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6549
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6550
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6551
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6552
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6554
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6554
            .heldItem = ITEM_SITRUS_BERRY,
#line 6556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6555
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6557
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_ICY_WIND,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 6562
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 6563
        .trainerName = _("Brendan"),
#line 6564
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6565
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6567
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6568
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6569
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6570
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6572
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6574
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6573
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6576
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6578
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6577
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6580
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6582
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6581
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6584
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6585
        .trainerName = _("Brendan"),
#line 6586
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6587
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6589
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6590
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6591
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6592
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6594
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6596
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6595
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6598
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6600
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6599
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6602
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6604
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6603
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6606
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6607
        .trainerName = _("Brendan"),
#line 6608
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6609
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6611
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6612
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6613
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6614
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6616
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6616
            .heldItem = ITEM_SITRUS_BERRY,
#line 6618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6617
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6619
                MOVE_FAKE_OUT,
                MOVE_SUCKER_PUNCH,
                MOVE_ICY_WIND,
                MOVE_ENCORE,
            },
            },
        },
    },
#line 6624
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6625
        .trainerName = _("Brendan"),
#line 6626
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6627
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6629
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6630
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6631
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6632
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6634
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6636
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6635
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6638
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6640
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6639
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6642
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6644
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6643
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6646
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6647
        .trainerName = _("Brendan"),
#line 6648
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6649
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6651
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6652
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6653
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6654
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6656
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6658
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6657
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6660
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6662
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6661
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6664
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6666
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6665
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6668
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 6669
        .trainerName = _("May"),
#line 6670
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6671
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6672
F_TRAINER_FEMALE | 
#line 6673
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6674
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6675
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6676
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6678
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6678
            .heldItem = ITEM_FLAME_ORB,
#line 6680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6679
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6681
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 6683
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6684
        .trainerName = _("May"),
#line 6685
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6686
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6687
F_TRAINER_FEMALE | 
#line 6688
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6689
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6690
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6691
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6693
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6695
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6694
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6697
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6699
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6698
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6701
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6703
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6702
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6705
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 6706
        .trainerName = _("May"),
#line 6707
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6708
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6709
F_TRAINER_FEMALE | 
#line 6710
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6711
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6712
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6713
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6715
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6717
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6716
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6719
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6721
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6720
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6723
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6725
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6724
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6727
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 6728
        .trainerName = _("May"),
#line 6729
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6730
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6731
F_TRAINER_FEMALE | 
#line 6732
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6733
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6734
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6735
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6737
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6737
            .heldItem = ITEM_FLAME_ORB,
#line 6739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6738
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6740
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 6742
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6743
        .trainerName = _("May"),
#line 6744
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6745
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6746
F_TRAINER_FEMALE | 
#line 6747
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6748
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6749
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6750
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6752
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6754
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6753
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6756
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6758
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6757
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6760
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6762
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6761
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6764
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6765
        .trainerName = _("May"),
#line 6766
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6767
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6768
F_TRAINER_FEMALE | 
#line 6769
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6770
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6771
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6772
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6774
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6776
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6775
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6778
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6780
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6779
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6782
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6784
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6783
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6786
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 6787
        .trainerName = _("May"),
#line 6788
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6789
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6790
F_TRAINER_FEMALE | 
#line 6791
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6792
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6793
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6794
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6796
            .species = SPECIES_TOGEDEMARU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6796
            .heldItem = ITEM_FLAME_ORB,
#line 6798
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6797
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6799
                MOVE_FAKE_OUT,
            },
            },
        },
    },
#line 6801
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6802
        .trainerName = _("May"),
#line 6803
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6804
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6805
F_TRAINER_FEMALE | 
#line 6806
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6807
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 6808
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6809
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6811
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6813
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6812
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6815
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6817
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6816
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6819
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6821
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6820
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6823
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6824
        .trainerName = _("May"),
#line 6825
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6826
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6827
F_TRAINER_FEMALE | 
#line 6828
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6829
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6830
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 6831
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6833
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6835
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6834
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6837
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6839
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6838
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6841
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6843
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6842
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6845
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
    {
#line 6846
        .trainerName = _("Isaac"),
#line 6847
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6848
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6850
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6851
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6852
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6854
            .species = SPECIES_WHISMUR,
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
            .species = SPECIES_ZIGZAGOON,
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
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6863
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6866
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6867
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6870
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6871
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6874
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6875
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6878
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6879
        .trainerName = _("Davis"),
#line 6880
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6881
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6883
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6884
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6885
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6887
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6888
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6891
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6892
        .trainerName = _("Mitchell"),
#line 6893
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6894
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6896
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6897
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6898
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6900
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6901
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6903
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 6908
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6909
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6911
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 6916
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_SKY_PILLAR_1] =
    {
#line 6917
        .trainerName = _("Grunt"),
#line 6918
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 6919
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6921
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6922
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6923
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6925
            .species = SPECIES_LOUDRED,
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
            .species = SPECIES_LINOONE,
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
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6935
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6934
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6937
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6938
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6941
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6943
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6942
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6945
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6947
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6946
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6949
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_SKY_PILLAR_2] =
    {
#line 6950
        .trainerName = _("Grunt"),
#line 6951
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 6952
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 6953
F_TRAINER_FEMALE | 
#line 6954
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6955
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6956
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6958
            .species = SPECIES_LOUDRED,
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
            .species = SPECIES_LINOONE,
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
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6968
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6967
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6970
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6972
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6971
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6974
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6976
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6975
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6978
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6980
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 6979
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6982
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_SKY_PILLAR_3] =
    {
#line 6983
        .trainerName = _("Grunt"),
#line 6984
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 6985
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 6986
F_TRAINER_FEMALE | 
#line 6987
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6988
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 6989
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6991
            .species = SPECIES_LOUDRED,
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
            .species = SPECIES_LINOONE,
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
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7001
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7000
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7003
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7005
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7004
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7007
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7009
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7008
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7011
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7013
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7012
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7015
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
    {
#line 7016
        .trainerName = _("Lydia"),
#line 7017
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7018
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7019
F_TRAINER_FEMALE | 
#line 7020
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7021
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7022
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7024
            .species = SPECIES_WINGULL,
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
            .species = SPECIES_SHROOMISH,
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
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7033
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7036
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7037
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7040
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7041
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7044
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7045
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7048
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 7049
        .trainerName = _("Halle"),
#line 7050
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7051
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7052
F_TRAINER_FEMALE | 
#line 7053
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7054
        .items = { ITEM_FULL_RESTORE },
#line 7055
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7056
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7058
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7059
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7062
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7063
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7066
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 7067
        .trainerName = _("Garrison"),
#line 7068
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 7069
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 7071
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7072
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7073
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7075
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7076
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7079
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_SKY_PILLAR_4] =
    {
#line 7080
        .trainerName = _("Grunt"),
#line 7081
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 7082
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7084
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7085
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7086
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7088
            .species = SPECIES_WINGULL,
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
            .species = SPECIES_SHROOMISH,
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
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7098
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7097
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7100
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7102
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7101
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7104
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7106
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7105
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7108
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7110
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 7109
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7112
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_SKY_PILLAR_1] =
    {
#line 7113
        .trainerName = _("Grunt"),
#line 7114
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 7115
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 7117
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7118
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7119
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7121
            .species = SPECIES_PELIPPER,
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
            .species = SPECIES_BRELOOM,
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
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7131
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7130
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7133
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7135
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7134
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7137
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7139
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7138
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7141
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7143
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 7142
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7145
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_SKY_PILLAR_2] =
    {
#line 7146
        .trainerName = _("Grunt"),
#line 7147
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 7148
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7149
F_TRAINER_FEMALE | 
#line 7150
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7151
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7152
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7154
            .species = SPECIES_PELIPPER,
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
            .species = SPECIES_BRELOOM,
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
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7164
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7163
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7166
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7168
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7167
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7170
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7172
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7171
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7174
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7176
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7175
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7178
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
    {
#line 7179
        .trainerName = _("Jackson"),
#line 7180
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7181
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7183
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7184
        .items = { ITEM_FULL_RESTORE },
#line 7185
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7186
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7188
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7190
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7189
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7192
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 7193
        .trainerName = _("Lorenzo"),
#line 7194
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7195
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7197
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7198
        .items = { ITEM_FULL_RESTORE },
#line 7199
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7200
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7202
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7204
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7203
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7206
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7208
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7207
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7210
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7212
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7211
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7214
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 7215
        .trainerName = _("Sebastian"),
#line 7216
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7217
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7219
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7220
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7221
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7223
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7225
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7224
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7227
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_SKY_PILLAR_3] =
    {
#line 7228
        .trainerName = _("Grunt"),
#line 7229
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 7230
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 7232
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7233
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7234
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7236
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7238
            .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
#line 7237
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7240
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_SKY_PILLAR_4] =
    {
#line 7241
        .trainerName = _("Grunt"),
#line 7242
        .trainerClass = TRAINER_CLASS_TEAM_AQUA_MIXED,
#line 7243
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7245
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7246
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7247
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7249
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7251
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 7250
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7253
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_SKY_PILLAR] =
    {
#line 7254
        .trainerName = _("Tabitha"),
#line 7255
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7256
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7259
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7260
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7261
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7257
        .mugshotColor = MUGSHOT_COLOR_AQUAMAGMA,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7263
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7263
            .heldItem = ITEM_EJECT_PACK,
#line 7267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7266
            .ability = ABILITY_SAND_STREAM,
#line 7264
            .lvl = 87,
#line 7265
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7267
                MOVE_HIGH_HORSEPOWER,
                MOVE_SUPERPOWER,
                MOVE_CRUNCH,
                MOVE_STONE_EDGE,
            },
            },
            {
#line 7272
            .species = SPECIES_HELIOLISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7272
            .heldItem = ITEM_SILK_SCARF,
#line 7276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7275
            .ability = ABILITY_SAND_VEIL,
#line 7273
            .lvl = 86,
#line 7274
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7276
                MOVE_FOCUS_BLAST,
                MOVE_THUNDERBOLT,
                MOVE_WEATHER_BALL,
                MOVE_HYPER_VOICE,
            },
            },
            {
#line 7281
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7281
            .heldItem = ITEM_YACHE_BERRY,
#line 7285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7284
            .ability = ABILITY_SAND_FORCE,
#line 7282
            .lvl = 86,
#line 7283
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7285
                MOVE_EARTH_POWER,
                MOVE_IRON_TAIL,
                MOVE_WEATHER_BALL,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 7290
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
    {
#line 7291
        .trainerName = _("Catherine"),
#line 7292
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7293
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7294
F_TRAINER_FEMALE | 
#line 7295
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7296
        .items = { ITEM_FULL_RESTORE },
#line 7297
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7298
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7300
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7302
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7301
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7304
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7306
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7305
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7308
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 7309
        .trainerName = _("Jenna"),
#line 7310
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7311
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7312
F_TRAINER_FEMALE | 
#line 7313
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7314
        .items = { ITEM_FULL_RESTORE },
#line 7315
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7316
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7318
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7320
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7319
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7322
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7324
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7323
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7326
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7328
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7327
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7330
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 7331
        .trainerName = _("Sophia"),
#line 7332
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7333
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7334
F_TRAINER_FEMALE | 
#line 7335
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7336
        .items = { ITEM_FULL_RESTORE },
#line 7337
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7338
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7340
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7342
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7341
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7344
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7346
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7345
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7348
    [DIFFICULTY_NORMAL][TRAINER_MATT_SKY_PILLAR] =
    {
#line 7349
        .trainerName = _("Matt"),
#line 7350
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 7351
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 7354
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7355
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7356
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7352
        .mugshotColor = MUGSHOT_COLOR_AQUAMAGMA,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7358
            .species = SPECIES_NINETALES_ALOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7358
            .heldItem = ITEM_EJECT_BUTTON,
#line 7362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7361
            .ability = ABILITY_SNOW_WARNING,
#line 7359
            .lvl = 87,
#line 7360
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7362
                MOVE_MOONBLAST,
                MOVE_ICE_BEAM,
                MOVE_WEATHER_BALL,
                MOVE_AURORA_VEIL,
            },
            },
            {
#line 7367
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7367
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 7371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7370
            .ability = ABILITY_SNOW_CLOAK,
#line 7368
            .lvl = 86,
#line 7369
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7371
                MOVE_HIGH_HORSEPOWER,
                MOVE_ICICLE_CRASH,
                MOVE_ROCK_SLIDE,
                MOVE_HARD_PRESS,
            },
            },
            {
#line 7376
            .species = SPECIES_ARTICUNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7376
            .heldItem = ITEM_CHARTI_BERRY,
#line 7380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7379
            .ability = ABILITY_PRESSURE,
#line 7377
            .lvl = 86,
#line 7378
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7380
                MOVE_AIR_SLASH,
                MOVE_FREEZE_DRY,
                MOVE_WEATHER_BALL,
                MOVE_EXTRASENSORY,
            },
            },
        },
    },
#line 7385
    [DIFFICULTY_NORMAL][TRAINER_COURTNEY_SKY_PILLAR] =
    {
#line 7386
        .trainerName = _("Courtney"),
#line 7387
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7388
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
        .encounterMusic_gender =
#line 7390
F_TRAINER_FEMALE | 
#line 7391
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7392
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7393
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7389
        .mugshotColor = MUGSHOT_COLOR_AQUAMAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7395
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7397
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 7396
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7399
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7401
            .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
#line 7400
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7403
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SKY_PILLAR] =
    {
#line 7404
        .trainerName = _("Shelly"),
#line 7405
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 7406
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 7408
F_TRAINER_FEMALE | 
#line 7409
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7410
        .items = { ITEM_FULL_RESTORE },
#line 7411
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7412
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7407
        .mugshotColor = MUGSHOT_COLOR_AQUAMAGMA,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7414
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7416
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 7415
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7418
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7420
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 7419
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7422
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 7423
        .trainerName = _("Julio"),
#line 7424
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7425
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 7427
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7428
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7429
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7431
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7432
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7435
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 7436
        .trainerName = _("Grunt"),
#line 7437
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7438
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 7440
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7441
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7442
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7444
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7446
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7445
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7448
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7450
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7449
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7452
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 7453
        .trainerName = _("Grunt"),
#line 7454
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7455
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7456
F_TRAINER_FEMALE | 
#line 7457
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7458
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7459
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7461
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7462
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7465
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7466
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7469
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 7470
        .trainerName = _("Grunt"),
#line 7471
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA_MIXED,
#line 7472
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7474
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7475
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7476
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7478
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7479
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7482
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7483
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7486
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 7487
        .trainerName = _("Grunt"),
#line 7488
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7489
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7491
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7492
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7493
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7495
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7497
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7496
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7499
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7501
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7500
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7503
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 7504
        .trainerName = _("Marc"),
#line 7505
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7506
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7508
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7509
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7510
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7512
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7514
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7513
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7516
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7518
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7517
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7520
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7521
        .trainerName = _("Brenden"),
#line 7522
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7523
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7525
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7526
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7527
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7529
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7531
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7530
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7533
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7534
        .trainerName = _("Lilith"),
#line 7535
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7536
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7537
F_TRAINER_FEMALE | 
#line 7538
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7539
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7540
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7542
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7544
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7543
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7546
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7547
        .trainerName = _("Cristian"),
#line 7548
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7549
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7551
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7552
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7553
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7555
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7557
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7556
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7559
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7560
        .trainerName = _("Sylvia"),
#line 7561
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7562
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7563
F_TRAINER_FEMALE | 
#line 7564
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7565
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7566
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7568
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7570
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7569
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7572
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7573
        .trainerName = _("Leonardo"),
#line 7574
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7575
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7577
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7578
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7579
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7581
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7582
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7585
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7586
        .trainerName = _("Athena"),
#line 7587
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7588
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7589
F_TRAINER_FEMALE | 
#line 7590
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7591
        .items = { ITEM_HYPER_POTION },
#line 7592
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7593
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7595
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7597
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7596
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7598
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 7602
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7604
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7603
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7605
                MOVE_SURF,
                MOVE_THIEF,
            },
            },
        },
    },
#line 7608
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7609
        .trainerName = _("Harrison"),
#line 7610
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7611
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7613
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7614
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7615
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7617
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7618
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7621
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7622
        .trainerName = _("Grunt"),
#line 7623
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7624
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7626
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7627
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7628
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7630
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7631
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7634
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7635
        .trainerName = _("Clarence"),
#line 7636
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7637
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7639
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7640
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7641
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7643
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7644
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7647
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7648
        .trainerName = _("Terry"),
#line 7649
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7650
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7651
F_TRAINER_FEMALE | 
#line 7652
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7653
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7654
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7656
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7657
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7660
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7661
        .trainerName = _("Nate"),
#line 7662
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7663
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7665
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7666
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7667
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7669
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7671
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7670
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7673
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7674
        .trainerName = _("Kathleen"),
#line 7675
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7676
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7677
F_TRAINER_FEMALE | 
#line 7678
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7679
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7680
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7682
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7684
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7683
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7686
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7687
        .trainerName = _("Clifford"),
#line 7688
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7689
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7691
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7692
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7693
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7695
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7696
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7699
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7700
        .trainerName = _("Nicholas"),
#line 7701
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7702
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7704
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7705
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7706
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7708
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7709
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7712
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7713
        .trainerName = _("Grunt"),
#line 7714
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7715
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7716
F_TRAINER_FEMALE | 
#line 7717
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7718
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7719
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7721
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7722
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7725
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7726
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7729
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7730
        .trainerName = _("Grunt"),
#line 7731
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7732
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7734
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7735
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7736
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7738
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7739
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7742
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7743
        .trainerName = _("Grunt"),
#line 7744
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7745
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7746
F_TRAINER_FEMALE | 
#line 7747
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7748
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7749
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7751
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7752
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7755
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7756
        .trainerName = _("Grunt"),
#line 7757
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7758
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7759
F_TRAINER_FEMALE | 
#line 7760
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7761
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7762
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7764
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7765
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7768
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 7769
        .trainerName = _("Tabitha"),
#line 7770
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7771
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7774
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7775
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7776
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7772
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7778
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7779
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7782
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7783
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7786
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7787
        .trainerName = _("Macey"),
#line 7788
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7789
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7790
F_TRAINER_FEMALE | 
#line 7791
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7792
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7793
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7795
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7796
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7799
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 7800
        .trainerName = _("Brendan"),
#line 7801
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7802
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7804
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7805
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7806
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7807
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7809
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7811
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7810
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7813
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7815
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7814
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7817
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7818
        .trainerName = _("Brendan"),
#line 7819
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7820
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7822
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7823
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7824
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7825
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7827
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7829
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7828
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7831
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7833
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7832
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7835
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7836
        .trainerName = _("Paxton"),
#line 7837
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7838
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7840
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7841
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7842
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7844
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7845
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7848
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7849
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7852
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7853
        .trainerName = _("Isabella"),
#line 7854
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7855
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7856
F_TRAINER_FEMALE | 
#line 7857
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7858
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7859
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7861
            .species = SPECIES_TANDEMAUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7861
            .heldItem = ITEM_EVIOLITE,
#line 7865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7862
            .ability = ABILITY_OWN_TEMPO,
#line 7863
            .lvl = 29,
#line 7864
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7865
                MOVE_DOUBLE_HIT,
                MOVE_LOW_SWEEP,
                MOVE_HELPING_HAND,
                MOVE_AFTER_YOU,
            },
            },
            {
#line 7870
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7870
            .heldItem = ITEM_CHARTI_BERRY,
#line 7874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7871
            .ability = ABILITY_SERENE_GRACE,
#line 7872
            .lvl = 28,
#line 7873
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7874
                MOVE_AIR_CUTTER,
                MOVE_STORED_POWER,
                MOVE_CALM_MIND,
                MOVE_AFTER_YOU,
            },
            },
        },
    },
#line 7879
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7880
        .trainerName = _("Grunt"),
#line 7881
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7882
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7883
F_TRAINER_FEMALE | 
#line 7884
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7885
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7886
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7888
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7889
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7892
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7893
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7896
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7897
        .trainerName = _("Tabitha"),
#line 7898
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7899
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7902
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7903
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7904
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7901
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7906
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7907
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7910
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7912
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7911
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7914
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7916
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7915
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7918
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7920
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7919
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7922
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7923
        .trainerName = _("Jonathan"),
#line 7924
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7925
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7927
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7928
        .items = { ITEM_HYPER_POTION },
#line 7929
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7930
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7932
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7933
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7936
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7937
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7940
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7941
        .trainerName = _("Brendan"),
#line 7942
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7943
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7945
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7946
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7947
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7948
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7950
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7952
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7951
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7954
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7956
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7955
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7958
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7959
        .trainerName = _("May"),
#line 7960
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7961
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7962
F_TRAINER_FEMALE | 
#line 7963
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7964
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 7965
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7966
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7968
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7970
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7969
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7972
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7974
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7973
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7976
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7977
        .trainerName = _("Maxie"),
#line 7978
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7979
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7982
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7983
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 7984
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 7980
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7986
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7988
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7987
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7990
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7992
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7991
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7994
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7996
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7995
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7998
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7999
        .trainerName = _("Maxie"),
#line 8000
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8001
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8004
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8005
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8006
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8002
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8008
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8010
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8009
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8012
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8014
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8013
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8016
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8018
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8017
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8020
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 8021
        .trainerName = _("Tiana"),
#line 8022
        .trainerClass = TRAINER_CLASS_LASS,
#line 8023
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8024
F_TRAINER_FEMALE | 
#line 8025
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8026
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8027
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8029
            .species = SPECIES_GOSSIFLEUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8029
            .heldItem = ITEM_OCCA_BERRY,
#line 8033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8030
            .ability = ABILITY_COTTON_DOWN,
#line 8031
            .lvl = 26,
#line 8032
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8033
                MOVE_RAZOR_LEAF,
                MOVE_RAPID_SPIN,
                MOVE_LEAFAGE,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 8038
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8038
            .heldItem = ITEM_PASSHO_BERRY,
#line 8042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8039
            .ability = ABILITY_OWN_TEMPO,
#line 8040
            .lvl = 27,
#line 8041
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8042
                MOVE_INCINERATE,
                MOVE_ROCK_TOMB,
                MOVE_MUD_SHOT,
                MOVE_MUD_SLAP,
            },
            },
        },
    },
#line 8047
    [DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
    {
#line 8048
        .trainerName = _("Haley"),
#line 8049
        .trainerClass = TRAINER_CLASS_LASS,
#line 8050
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8051
F_TRAINER_FEMALE | 
#line 8052
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8053
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8054
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8056
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8057
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8060
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8061
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8064
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 8065
        .trainerName = _("Janice"),
#line 8066
        .trainerClass = TRAINER_CLASS_LASS,
#line 8067
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8068
F_TRAINER_FEMALE | 
#line 8069
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8070
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8071
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8073
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8074
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8077
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 8078
        .trainerName = _("Vivi"),
#line 8079
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 8080
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8081
F_TRAINER_FEMALE | 
#line 8082
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8083
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8084
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8086
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8088
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8087
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8090
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8092
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8091
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8094
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8096
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8095
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8098
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_SKY_PILLAR] =
    {
#line 8099
        .trainerName = _("Maxie"),
#line 8100
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8101
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8104
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8105
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8106
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8102
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8108
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8108
            .heldItem = ITEM_DRAGON_GEM,
#line 8112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8111
            .ability = ABILITY_AIR_LOCK,
#line 8109
            .lvl = 87,
#line 8110
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8112
                MOVE_DRACO_METEOR,
                MOVE_TAILWIND,
                MOVE_FLAMETHROWER,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 8117
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8117
            .heldItem = ITEM_CHARIZARDITE_Y,
#line 8121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8120
            .ability = ABILITY_BLAZE,
#line 8118
            .lvl = 87,
#line 8119
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8121
                MOVE_HEAT_WAVE,
                MOVE_AIR_SLASH,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_PULSE,
            },
            },
            {
#line 8126
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8126
            .heldItem = ITEM_FIRE_GEM,
#line 8130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8129
            .ability = ABILITY_SHELL_ARMOR,
#line 8127
            .lvl = 86,
#line 8128
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8130
                MOVE_PROTECT,
                MOVE_ERUPTION,
                MOVE_SOLAR_BEAM,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 8135
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8135
            .heldItem = ITEM_FOCUS_SASH,
#line 8139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8138
            .ability = ABILITY_CHLOROPHYLL,
#line 8136
            .lvl = 86,
#line 8137
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8139
                MOVE_AFTER_YOU,
                MOVE_LEAF_STORM,
                MOVE_WEATHER_BALL,
                MOVE_SYNTHESIS,
            },
            },
        },
    },
#line 8144
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE_SKY_PILLAR] =
    {
#line 8145
        .trainerName = _("Archie"),
#line 8146
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 8147
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 8150
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8151
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 8152
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8148
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8154
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8154
            .heldItem = ITEM_DRAGON_GEM,
#line 8158
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8157
            .ability = ABILITY_AIR_LOCK,
#line 8155
            .lvl = 87,
#line 8156
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8158
                MOVE_DRACO_METEOR,
                MOVE_TAILWIND,
                MOVE_FLAMETHROWER,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 8163
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8163
            .heldItem = ITEM_SWAMPERTITE,
#line 8167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8166
            .ability = ABILITY_DAMP,
#line 8164
            .lvl = 87,
#line 8165
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8167
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
                MOVE_HIGH_HORSEPOWER,
                MOVE_POISON_JAB,
            },
            },
            {
#line 8172
            .species = SPECIES_ARCHALUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8172
            .heldItem = ITEM_ASSAULT_VEST,
#line 8176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8175
            .ability = ABILITY_STAMINA,
#line 8173
            .lvl = 86,
#line 8174
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8176
                MOVE_BODY_PRESS,
                MOVE_FLASH_CANNON,
                MOVE_ELECTRO_SHOT,
                MOVE_DRAGON_PULSE,
            },
            },
        },
    },
#line 8181
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_114_TREECKO] =
    {
#line 8182
        .trainerName = _("May"),
#line 8183
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8184
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8185
F_TRAINER_FEMALE | 
#line 8186
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8187
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8188
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8189
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8191
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8193
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8192
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8195
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8197
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8196
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8199
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 8200
        .trainerName = _("Sally"),
#line 8201
        .trainerClass = TRAINER_CLASS_LASS,
#line 8202
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8203
F_TRAINER_FEMALE | 
#line 8204
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8205
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8206
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8208
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8209
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8212
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 8213
        .trainerName = _("Robin"),
#line 8214
        .trainerClass = TRAINER_CLASS_LASS,
#line 8215
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8216
F_TRAINER_FEMALE | 
#line 8217
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8218
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8219
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8221
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8222
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8225
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8226
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8229
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8230
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8233
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 8234
        .trainerName = _("Andrea"),
#line 8235
        .trainerClass = TRAINER_CLASS_LASS,
#line 8236
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8237
F_TRAINER_FEMALE | 
#line 8238
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8239
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8240
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8242
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8244
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8243
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8246
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 8247
        .trainerName = _("Crissy"),
#line 8248
        .trainerClass = TRAINER_CLASS_LASS,
#line 8249
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8250
F_TRAINER_FEMALE | 
#line 8251
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8252
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8253
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8255
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8257
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8256
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8259
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8261
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8260
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8263
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 8264
        .trainerName = _("Rick"),
#line 8265
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8266
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8268
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8269
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8270
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8272
            .species = SPECIES_YUNGOOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8272
            .heldItem = ITEM_BERRY_JUICE,
#line 8276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8273
            .ability = ABILITY_STAKEOUT,
#line 8274
            .lvl = 26,
#line 8275
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8276
                MOVE_BITE,
                MOVE_TACKLE,
                MOVE_LEER,
            },
            },
            {
#line 8280
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8280
            .heldItem = ITEM_ORAN_BERRY,
#line 8284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8281
            .ability = ABILITY_SWARM,
#line 8282
            .lvl = 26,
#line 8283
            .nature = NATURE_BASHFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8284
                MOVE_POUNCE,
                MOVE_SHADOW_SNEAK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 8288
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 8289
        .trainerName = _("Lyle"),
#line 8290
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8291
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8293
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8294
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8295
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8297
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8298
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8301
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8302
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8305
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8306
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8309
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8311
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8310
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8313
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 8314
        .trainerName = _("Jose"),
#line 8315
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8316
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8318
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8319
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8320
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8322
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8324
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8323
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8326
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8328
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8327
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8330
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 8331
        .trainerName = _("Doug"),
#line 8332
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8333
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8335
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8336
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8337
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8339
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8340
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8343
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8344
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8347
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 8348
        .trainerName = _("Greg"),
#line 8349
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8350
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8352
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8353
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8354
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8356
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8357
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8360
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8361
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8364
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 8365
        .trainerName = _("Kent"),
#line 8366
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8367
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8369
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8370
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8371
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8373
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8374
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8377
    [DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
    {
#line 8378
        .trainerName = _("James"),
#line 8379
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8380
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8382
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8384
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8385
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8388
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8389
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8392
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_114_MUDKIP] =
    {
#line 8393
        .trainerName = _("May"),
#line 8394
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8395
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8396
F_TRAINER_FEMALE | 
#line 8397
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8398
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8399
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8400
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8402
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8404
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8403
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8406
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_114_TREECKO] =
    {
#line 8407
        .trainerName = _("Brendan"),
#line 8408
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8409
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8411
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8412
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8413
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8414
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8416
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8418
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8417
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8420
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8422
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 8421
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8424
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_114_TORCHIC] =
    {
#line 8425
        .trainerName = _("Brendan"),
#line 8426
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8427
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8429
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8430
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8431
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8432
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8434
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8436
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8435
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8438
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8440
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8439
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8442
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8444
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8443
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8446
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 8447
        .trainerName = _("Brice"),
#line 8448
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8449
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8451
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8452
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8453
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8455
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8456
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8459
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8460
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8463
    [DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
    {
#line 8464
        .trainerName = _("Trent"),
#line 8465
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8466
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8468
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8469
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8470
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8472
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8473
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8476
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8477
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8480
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8481
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8484
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_3] =
    {
#line 8485
        .trainerName = _("Grunt"),
#line 8486
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8487
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8488
F_TRAINER_FEMALE | 
#line 8489
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8490
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8491
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8493
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8494
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8497
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8498
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8501
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_2] =
    {
#line 8502
        .trainerName = _("Grunt"),
#line 8503
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8504
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8506
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8507
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8508
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8510
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8511
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8514
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8515
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8518
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 8519
        .trainerName = _("Alan"),
#line 8520
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8521
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8523
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8524
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8525
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8527
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8528
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8531
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8532
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8535
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8537
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8536
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8539
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 8540
        .trainerName = _("Clark"),
#line 8541
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8542
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8544
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8545
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8546
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8548
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8549
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8552
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 8553
        .trainerName = _("Eric"),
#line 8554
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8555
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8557
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8558
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8559
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8561
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8562
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8565
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8566
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8569
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_114_MUDKIP] =
    {
#line 8570
        .trainerName = _("Brendan"),
#line 8571
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8572
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8574
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8575
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8576
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8577
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8579
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8580
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8582
                MOVE_GUST,
                MOVE_GROWL,
            },
            },
            {
#line 8585
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8586
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8588
                MOVE_BITE,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 8591
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_114_TORCHIC] =
    {
#line 8592
        .trainerName = _("May"),
#line 8593
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8594
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8595
F_TRAINER_FEMALE | 
#line 8596
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8597
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8598
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8599
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8601
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8603
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8602
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8605
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8607
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8606
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8609
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8611
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8610
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8613
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8615
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 8614
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8617
    [DIFFICULTY_NORMAL][TRAINER_PYRE_MAGMAGRUNT4] =
    {
#line 8618
        .trainerName = _("Grunt"),
#line 8619
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8620
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8622
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8623
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8624
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8626
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8627
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8630
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8631
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8634
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8635
        .trainerName = _("Lea & Jed"),
#line 8636
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8637
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8639
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8640
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8641
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8643
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8644
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8647
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8648
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8651
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
    {
#line 8652
        .trainerName = _("Kira & Dan"),
#line 8653
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8654
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8656
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8657
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8658
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8660
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8661
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8664
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8665
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8668
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8669
        .trainerName = _("Johanna"),
#line 8670
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8671
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8672
F_TRAINER_FEMALE | 
#line 8673
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8674
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8675
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8677
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8678
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8681
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8682
        .trainerName = _("Gerald"),
#line 8683
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8684
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8686
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8687
        .items = { ITEM_HYPER_POTION },
#line 8688
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8689
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8691
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8693
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8692
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8694
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 8699
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8700
        .trainerName = _("Vivian"),
#line 8701
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8702
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8703
F_TRAINER_FEMALE | 
#line 8704
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8705
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8706
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8708
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8710
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8709
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8711
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 8716
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8718
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8717
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8719
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 8724
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8725
        .trainerName = _("Danielle"),
#line 8726
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8727
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8728
F_TRAINER_FEMALE | 
#line 8729
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8730
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8731
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8733
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8735
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8734
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8736
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 8741
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8742
        .trainerName = _("Hideo"),
#line 8743
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8744
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8746
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8747
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8748
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8750
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8751
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8753
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 8758
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8759
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8761
                MOVE_TACKLE,
                MOVE_POISON_GAS,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 8766
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8767
        .trainerName = _("Keigo"),
#line 8768
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8769
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8771
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8772
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8773
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8775
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8776
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8778
                MOVE_POISON_GAS,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 8783
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8784
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8786
                MOVE_SAND_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_FURY_CUTTER,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 8791
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8792
        .trainerName = _("Riley"),
#line 8793
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8794
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8796
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8797
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8798
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8800
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8801
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8803
                MOVE_LEECH_LIFE,
                MOVE_FURY_SWIPES,
                MOVE_MIND_READER,
                MOVE_DIG,
            },
            },
            {
#line 8808
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8809
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8811
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 8816
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8817
        .trainerName = _("Flint"),
#line 8818
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8819
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8821
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8822
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8823
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8825
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8827
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8826
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8829
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8831
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8830
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8833
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8834
        .trainerName = _("Ashley"),
#line 8835
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8836
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8837
F_TRAINER_FEMALE | 
#line 8838
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8839
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8840
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8842
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8844
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8843
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8846
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8848
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8847
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8850
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8852
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8851
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8854
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8855
        .trainerName = _("Wally"),
#line 8856
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8857
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8860
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8861
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8862
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8858
        .mugshotColor = MUGSHOT_COLOR_WHITE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8864
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8866
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8865
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8868
    [DIFFICULTY_NORMAL][TRAINER_WALLY_ROUTE_114] =
    {
#line 8869
        .trainerName = _("Wally"),
#line 8870
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8871
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8873
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8874
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8875
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8877
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8879
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8878
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8880
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 8885
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8887
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8886
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8888
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 8893
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8895
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8894
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8896
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 8901
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8903
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8902
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8904
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 8909
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8911
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 8910
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8912
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 8917
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 8918
        .trainerName = _("Brendan"),
#line 8919
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8920
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8922
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8923
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8924
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8925
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8927
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8929
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8928
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8931
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8933
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8932
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8935
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8937
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8936
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8939
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8941
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8940
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8943
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8944
        .trainerName = _("Brendan"),
#line 8945
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8946
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8948
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8949
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8950
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8951
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8953
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8955
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8954
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8957
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8959
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8958
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8961
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8963
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8962
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8965
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8967
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8966
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8969
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8970
        .trainerName = _("Brendan"),
#line 8971
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8972
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8974
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8975
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 8976
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 8977
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8979
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8981
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8980
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8983
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8985
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8984
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8987
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8989
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8988
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8991
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8993
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8992
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8995
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8996
        .trainerName = _("May"),
#line 8997
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8998
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8999
F_TRAINER_FEMALE | 
#line 9000
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9001
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9002
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 9003
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9005
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9007
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9006
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9009
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9011
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9010
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9013
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9015
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9014
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9017
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9019
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9018
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9021
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 9022
        .trainerName = _("May"),
#line 9023
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9024
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9025
F_TRAINER_FEMALE | 
#line 9026
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9027
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9028
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 9029
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9031
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9033
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9032
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9035
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9037
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9036
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9039
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9041
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9040
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9043
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9045
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9044
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9047
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 9048
        .trainerName = _("May"),
#line 9049
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9050
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9051
F_TRAINER_FEMALE | 
#line 9052
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9053
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9054
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 9055
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9057
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9059
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9058
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9061
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9063
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9062
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9065
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9067
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9066
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9069
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9071
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9070
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9073
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 9074
        .trainerName = _("Jonah"),
#line 9075
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9076
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9078
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9079
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9080
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9082
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9083
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9086
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9087
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9090
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9091
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9094
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 9095
        .trainerName = _("Henry"),
#line 9096
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9097
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9099
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9100
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9101
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9103
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9104
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9107
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9108
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9111
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 9112
        .trainerName = _("Roger"),
#line 9113
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9114
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9116
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9117
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9118
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9120
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9121
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9124
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9125
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9128
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9129
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9132
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 9133
        .trainerName = _("Alexa"),
#line 9134
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9135
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9136
F_TRAINER_FEMALE | 
#line 9137
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9138
        .items = { ITEM_FULL_RESTORE },
#line 9139
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9140
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9142
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9144
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9143
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9146
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9148
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9147
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9150
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 9151
        .trainerName = _("Ruben"),
#line 9152
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9153
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9155
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9156
        .items = { ITEM_HYPER_POTION },
#line 9157
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9158
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9160
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9162
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9161
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9164
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9166
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9165
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9168
    [DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
    {
#line 9169
        .trainerName = _("Koji"),
#line 9170
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9171
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 9173
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9174
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9175
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9177
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9178
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9181
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 9182
        .trainerName = _("Wayne"),
#line 9183
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9184
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9186
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9187
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9188
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9190
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9191
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9194
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9195
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9198
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9199
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9202
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 9203
        .trainerName = _("Aidan"),
#line 9204
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9205
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9207
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9208
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9209
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9211
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9212
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9215
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9216
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9219
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 9220
        .trainerName = _("Reed"),
#line 9221
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9222
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9224
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9225
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9226
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9228
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9229
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9232
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9233
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9236
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 9237
        .trainerName = _("Tisha"),
#line 9238
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9239
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9240
F_TRAINER_FEMALE | 
#line 9241
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9242
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9243
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9245
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9246
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9249
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 9250
        .trainerName = _("Tori & Tia"),
#line 9251
        .trainerClass = TRAINER_CLASS_TWINS,
#line 9252
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 9254
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9255
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9256
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9258
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9259
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9262
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9263
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9266
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 9267
        .trainerName = _("Kim & Iris"),
#line 9268
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 9269
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 9271
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9272
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9273
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9275
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9276
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9278
                MOVE_SING,
                MOVE_FURY_ATTACK,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 9283
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9284
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9286
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9291
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 9292
        .trainerName = _("Tyra & Ivy"),
#line 9293
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 9294
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 9296
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9297
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9298
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9300
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9301
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9303
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 9308
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9309
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9311
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_MUD_SPORT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 9316
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 9317
        .trainerName = _("Mel & Paul"),
#line 9318
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9319
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9321
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9322
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9323
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9325
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9326
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9328
                MOVE_GUST,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 9333
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9334
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9336
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 9341
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
    {
#line 9342
        .trainerName = _("John & Jay"),
#line 9343
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9344
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9346
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9347
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9348
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9350
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9352
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9351
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9353
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9358
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9360
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9359
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9361
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9366
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 9367
        .trainerName = _("Reli & Ian"),
#line 9368
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9369
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9371
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9372
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9373
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9375
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9376
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9379
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9380
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9383
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
    {
#line 9384
        .trainerName = _("Lila & Roy"),
#line 9385
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9386
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9388
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9389
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9390
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9392
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9393
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9396
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9397
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9400
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 9401
        .trainerName = _("Lisa & Ray"),
#line 9402
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9403
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9405
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9406
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9407
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9409
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9410
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9413
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9414
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9417
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 9418
        .trainerName = _("Chris"),
#line 9419
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9420
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9422
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9423
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 9424
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9426
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9427
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9430
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9431
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9434
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9435
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9438
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9439
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9442
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 9443
        .trainerName = _("Dawson"),
#line 9444
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 9445
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 9447
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9448
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9449
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9451
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9451
            .heldItem = ITEM_NUGGET,
#line 9453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9452
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9455
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9456
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9459
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 9460
        .trainerName = _("Sarah"),
#line 9461
        .trainerClass = TRAINER_CLASS_LADY,
#line 9462
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 9463
F_TRAINER_FEMALE | 
#line 9464
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9465
        .items = { ITEM_FULL_RESTORE },
#line 9466
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9467
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9469
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9470
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9473
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9473
            .heldItem = ITEM_NUGGET,
#line 9475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9474
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9477
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 9478
        .trainerName = _("Darian"),
#line 9479
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9480
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9482
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9483
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9484
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9486
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9487
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9490
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE109_1] =
    {
#line 9491
        .trainerName = _("Grunt"),
#line 9492
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 9493
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 9494
F_TRAINER_FEMALE | 
#line 9495
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9496
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9497
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9499
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9500
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9503
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE109_4] =
    {
#line 9504
        .trainerName = _("Grunt"),
#line 9505
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 9506
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 9508
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9509
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9510
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9512
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9513
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9516
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9517
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9520
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 9521
        .trainerName = _("Kaleb"),
#line 9522
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 9523
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 9525
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9526
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9527
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9529
            .species = SPECIES_SLOWPOKE_GALAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9529
            .heldItem = ITEM_COVERT_CLOAK,
#line 9533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9530
            .ability = ABILITY_OWN_TEMPO,
#line 9531
            .lvl = 29,
#line 9532
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9533
                MOVE_PSYBEAM,
                MOVE_ACID,
                MOVE_YAWN,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 9538
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9538
            .heldItem = ITEM_ROOM_SERVICE,
#line 9542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9539
            .ability = ABILITY_TRACE,
#line 9540
            .lvl = 28,
#line 9541
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9542
                MOVE_PSYBEAM,
                MOVE_ICY_WIND,
                MOVE_THUNDER_SHOCK,
                MOVE_TRICK_ROOM,
            },
            },
        },
    },
#line 9547
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 9548
        .trainerName = _("Joseph"),
#line 9549
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9550
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9552
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9553
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9554
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9556
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9556
            .heldItem = ITEM_SHARP_BEAK,
#line 9560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9557
            .ability = ABILITY_PRANKSTER,
#line 9558
            .lvl = 28,
#line 9559
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9560
                MOVE_WING_ATTACK,
                MOVE_ASSURANCE,
                MOVE_NIGHT_SHADE,
                MOVE_TAILWIND,
            },
            },
            {
#line 9565
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .heldItem = ITEM_WIDE_LENS,
#line 9569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9566
            .ability = ABILITY_SWIFT_SWIM,
#line 9567
            .lvl = 29,
#line 9568
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9569
                MOVE_WATERFALL,
                MOVE_BOUNCE,
                MOVE_U_TURN,
                MOVE_TAILWIND,
            },
            },
        },
    },
#line 9574
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 9575
        .trainerName = _("Alyssa"),
#line 9576
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9577
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9578
F_TRAINER_FEMALE | 
#line 9579
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9580
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9581
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9583
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9584
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9587
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 9588
        .trainerName = _("Marcos"),
#line 9589
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9590
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9592
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9593
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9594
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9596
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9598
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9597
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9600
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 9601
        .trainerName = _("Rhett"),
#line 9602
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9603
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 9605
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9606
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9607
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9609
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9611
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9610
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9613
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 9614
        .trainerName = _("Tyron"),
#line 9615
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9616
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9618
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9619
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9620
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9622
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9623
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9626
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 9627
        .trainerName = _("Celina"),
#line 9628
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9629
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9630
F_TRAINER_FEMALE | 
#line 9631
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9632
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9633
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9635
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9636
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9639
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 9640
        .trainerName = _("Bianca"),
#line 9641
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9642
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9643
F_TRAINER_FEMALE | 
#line 9644
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9645
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9646
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9648
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9649
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9652
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 9653
        .trainerName = _("Hayden"),
#line 9654
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9655
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9657
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9658
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9659
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9661
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9662
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9665
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 9666
        .trainerName = _("Sophie"),
#line 9667
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9668
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9669
F_TRAINER_FEMALE | 
#line 9670
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9671
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9672
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9674
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9675
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9678
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9679
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9682
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 9683
        .trainerName = _("Coby"),
#line 9684
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9685
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9687
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9688
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9689
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9691
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9692
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9695
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9696
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9699
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 9700
        .trainerName = _("Lawrence"),
#line 9701
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9702
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9704
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9705
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9706
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9708
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9709
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9712
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9713
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9716
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 9717
        .trainerName = _("Wyatt"),
#line 9718
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 9719
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 9721
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9722
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9723
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9725
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9726
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9729
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9730
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9733
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_ROUTE_114_4] =
    {
#line 9734
        .trainerName = _("Grunt"),
#line 9735
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9736
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9737
F_TRAINER_FEMALE | 
#line 9738
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9739
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9740
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9742
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9743
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9746
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9747
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9750
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 9751
        .trainerName = _("Kai"),
#line 9752
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9753
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9755
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9756
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9757
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9759
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9760
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9763
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9764
        .trainerName = _("Charlotte"),
#line 9765
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9766
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9767
F_TRAINER_FEMALE | 
#line 9768
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9769
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9770
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9772
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9773
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9776
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9777
        .trainerName = _("Deandre"),
#line 9778
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9779
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9781
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9782
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9783
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9785
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9786
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9789
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9790
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9793
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9794
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9797
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9798
        .trainerName = _("Grunt"),
#line 9799
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9800
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9802
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9803
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9804
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9806
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9807
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9810
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9811
        .trainerName = _("Grunt"),
#line 9812
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9813
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9815
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9816
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9817
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9819
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9820
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9823
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9824
        .trainerName = _("Grunt"),
#line 9825
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9826
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9828
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9829
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9830
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9832
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9833
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9836
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9837
        .trainerName = _("Grunt"),
#line 9838
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9839
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9841
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9842
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9843
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9845
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9846
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9849
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9850
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9853
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9854
        .trainerName = _("Grunt"),
#line 9855
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9856
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9858
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9859
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9860
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9862
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9863
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9866
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9867
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9870
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9871
        .trainerName = _("Grunt"),
#line 9872
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9873
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9875
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9876
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9877
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9879
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9880
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9883
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9884
        .trainerName = _("Grunt"),
#line 9885
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9886
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9888
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9889
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9890
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9892
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9893
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9896
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9897
        .trainerName = _("Grunt"),
#line 9898
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9899
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9901
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9902
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9903
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9905
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9906
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9909
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9910
        .trainerName = _("Grunt"),
#line 9911
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9912
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9914
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9915
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9916
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9918
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9919
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9922
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9923
        .trainerName = _("Grunt"),
#line 9924
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9925
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9927
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9928
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9929
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9931
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9932
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9935
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9936
        .trainerName = _("Grunt"),
#line 9937
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9938
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9940
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9941
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9942
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9944
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9945
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9948
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9949
        .trainerName = _("Grunt"),
#line 9950
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9951
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9953
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9954
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9955
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9957
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9958
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9961
    [DIFFICULTY_NORMAL][TRAINER_COURTNEY_MAGMA_HIDEOUT] =
    {
#line 9962
        .trainerName = _("Courtney"),
#line 9963
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9964
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
        .encounterMusic_gender =
#line 9966
F_TRAINER_FEMALE | 
#line 9967
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9968
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9969
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 9965
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9971
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9972
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9975
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9976
        .trainerName = _("Grunt"),
#line 9977
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9978
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9979
F_TRAINER_FEMALE | 
#line 9980
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9981
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9982
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9984
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9985
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9988
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9989
        .trainerName = _("Grunt"),
#line 9990
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9991
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9992
F_TRAINER_FEMALE | 
#line 9993
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9994
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 9995
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9997
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9998
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10001
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 10002
        .trainerName = _("Grunt"),
#line 10003
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10004
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 10005
F_TRAINER_FEMALE | 
#line 10006
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10007
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10008
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10010
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10011
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10014
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 10015
        .trainerName = _("Tabitha"),
#line 10016
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 10017
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 10020
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10021
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10022
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10018
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10024
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10026
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10025
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10028
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10030
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10029
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10032
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10034
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10033
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10036
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10038
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10037
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10040
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 10041
        .trainerName = _("Darcy"),
#line 10042
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10043
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10044
F_TRAINER_FEMALE | 
#line 10045
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10046
        .items = { ITEM_HYPER_POTION },
#line 10047
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10048
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10050
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10051
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10054
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10055
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10058
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 10059
        .trainerName = _("Maxie"),
#line 10060
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 10061
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 10064
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10065
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10066
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10062
        .mugshotColor = MUGSHOT_COLOR_MISTY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10068
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10070
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10069
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10072
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10074
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10073
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10076
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10078
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10077
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10080
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 10081
        .trainerName = _("Pete"),
#line 10082
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 10083
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 10085
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10086
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10087
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10089
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10090
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10093
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 10094
        .trainerName = _("Isabelle"),
#line 10095
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 10096
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 10097
F_TRAINER_FEMALE | 
#line 10098
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10099
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10100
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10102
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10103
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10106
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
    {
#line 10107
        .trainerName = _("Andres"),
#line 10108
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 10109
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 10111
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10112
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10113
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10115
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10117
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10116
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10119
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10121
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10120
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10123
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 10124
        .trainerName = _("Josue"),
#line 10125
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10126
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10128
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10129
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10130
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10132
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10134
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10133
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10136
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10138
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10137
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10140
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 10141
        .trainerName = _("Camron"),
#line 10142
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10143
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 10145
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10146
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10147
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10149
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10150
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10153
    [DIFFICULTY_NORMAL][TRAINER_CORY_1] =
    {
#line 10154
        .trainerName = _("Cory"),
#line 10155
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10156
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10158
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10159
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10160
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10162
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10163
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10166
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10167
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10170
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10171
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10174
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 10175
        .trainerName = _("Carolina"),
#line 10176
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10177
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10178
F_TRAINER_FEMALE | 
#line 10179
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10180
        .items = { ITEM_HYPER_POTION },
#line 10181
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10182
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10184
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10186
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10185
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10188
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10190
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10189
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10192
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10194
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10193
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10196
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 10197
        .trainerName = _("Elijah"),
#line 10198
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10199
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10201
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10202
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10203
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10205
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10206
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10209
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10210
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10213
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 10214
        .trainerName = _("Celia"),
#line 10215
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10216
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 10217
F_TRAINER_FEMALE | 
#line 10218
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10219
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10220
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10222
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10224
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10223
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10226
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10227
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10230
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 10231
        .trainerName = _("Bryan"),
#line 10232
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 10233
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 10235
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10236
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10237
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10239
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10241
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10240
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10243
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10244
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10247
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 10248
        .trainerName = _("Branden"),
#line 10249
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10250
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 10252
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10253
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10254
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10256
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10257
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10260
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10261
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10264
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 10265
        .trainerName = _("Bryant"),
#line 10266
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10267
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 10269
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10270
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10271
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10273
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10274
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10277
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10278
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10281
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 10282
        .trainerName = _("Shayla"),
#line 10283
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 10284
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 10285
F_TRAINER_FEMALE | 
#line 10286
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10287
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10288
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10290
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10291
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10294
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10295
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10298
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 10299
        .trainerName = _("Kyra"),
#line 10300
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10301
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 10302
F_TRAINER_FEMALE | 
#line 10303
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10304
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10305
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10307
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10308
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10311
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10312
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10315
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 10316
        .trainerName = _("Jaiden"),
#line 10317
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10318
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 10320
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10321
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10322
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10324
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10325
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10328
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10329
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10332
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 10333
        .trainerName = _("Alix"),
#line 10334
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10335
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10336
F_TRAINER_FEMALE | 
#line 10337
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10338
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10339
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10341
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10342
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10345
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10346
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10349
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 10350
        .trainerName = _("Helene"),
#line 10351
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10352
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10353
F_TRAINER_FEMALE | 
#line 10354
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10355
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10356
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10358
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10359
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10362
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10363
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10366
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 10367
        .trainerName = _("Marlene"),
#line 10368
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10369
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10370
F_TRAINER_FEMALE | 
#line 10371
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10372
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10373
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10375
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10376
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10379
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10380
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10383
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 10384
        .trainerName = _("Devan"),
#line 10385
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10386
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10388
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10389
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10390
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10392
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10393
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10396
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10397
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10400
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 10401
        .trainerName = _("Johnson"),
#line 10402
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 10403
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 10405
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10406
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10407
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10409
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10410
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10413
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10414
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10417
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 10418
        .trainerName = _("Melina"),
#line 10419
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10420
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 10421
F_TRAINER_FEMALE | 
#line 10422
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10423
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10424
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10426
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10427
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10430
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 10431
        .trainerName = _("Brandi"),
#line 10432
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10433
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10434
F_TRAINER_FEMALE | 
#line 10435
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10436
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10437
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10439
            .species = SPECIES_TATSUGIRI_DROOPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10439
            .heldItem = ITEM_AIR_BALLOON,
#line 10443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10440
            .ability = ABILITY_STORM_DRAIN,
#line 10441
            .lvl = 31,
#line 10442
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10443
                MOVE_WATER_PULSE,
                MOVE_DRAGON_BREATH,
                MOVE_ICY_WIND,
                MOVE_CHILLING_WATER,
            },
            },
            {
#line 10448
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10448
            .heldItem = ITEM_SITRUS_BERRY,
#line 10452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10449
            .ability = ABILITY_LEVITATE,
#line 10450
            .lvl = 30,
#line 10451
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10452
                MOVE_VOLT_SWITCH,
                MOVE_GIGA_DRAIN,
                MOVE_KNOCK_OFF,
                MOVE_ACID_SPRAY,
            },
            },
            {
#line 10457
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10457
            .heldItem = ITEM_LIGHT_CLAY,
#line 10461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10458
            .ability = ABILITY_LEVITATE,
#line 10459
            .lvl = 30,
#line 10460
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10461
                MOVE_PSYCHIC_NOISE,
                MOVE_DRAINING_KISS,
                MOVE_GRASS_KNOT,
                MOVE_REFLECT,
            },
            },
        },
    },
#line 10466
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 10467
        .trainerName = _("Aisha"),
#line 10468
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10469
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10470
F_TRAINER_FEMALE | 
#line 10471
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10472
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10473
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10475
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10475
            .heldItem = ITEM_SOFT_SAND,
#line 10479
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10476
            .ability = ABILITY_INTIMIDATE,
#line 10477
            .lvl = 31,
#line 10478
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10479
                MOVE_DIG,
                MOVE_ICE_FANG,
                MOVE_BULLDOZE,
                MOVE_BITE,
            },
            },
            {
#line 10484
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10484
            .heldItem = ITEM_SOFT_SAND,
#line 10488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10485
            .ability = ABILITY_INTIMIDATE,
#line 10486
            .lvl = 30,
#line 10487
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10488
                MOVE_STOMPING_TANTRUM,
                MOVE_MUD_SHOT,
                MOVE_FIRE_FANG,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 10493
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 10494
        .trainerName = _("Makayla"),
#line 10495
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 10496
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 10497
F_TRAINER_FEMALE | 
#line 10498
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10499
        .items = { ITEM_HYPER_POTION },
#line 10500
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10501
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10503
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10504
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10507
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10508
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10511
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 10512
        .trainerName = _("Fabian"),
#line 10513
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10514
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 10516
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10517
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10518
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10520
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10521
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10524
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 10525
        .trainerName = _("Dayton"),
#line 10526
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10527
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 10529
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10530
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10531
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10533
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10534
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10537
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10538
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10541
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 10542
        .trainerName = _("Rachel"),
#line 10543
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 10544
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 10545
F_TRAINER_FEMALE | 
#line 10546
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10547
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10548
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10550
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10551
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10554
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 10555
        .trainerName = _("Leonel"),
#line 10556
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10557
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 10559
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10560
        .items = { ITEM_HYPER_POTION },
#line 10561
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10562
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10564
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10566
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10565
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10567
                MOVE_THUNDER,
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 10571
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 10572
        .trainerName = _("Callie"),
#line 10573
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10574
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10575
F_TRAINER_FEMALE | 
#line 10576
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10577
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10578
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10580
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10581
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10584
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10585
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10588
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 10589
        .trainerName = _("Cale"),
#line 10590
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10591
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10593
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10594
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10595
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10597
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10598
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10601
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10602
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10605
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 10606
        .trainerName = _("Myles"),
#line 10607
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 10608
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 10610
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10611
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10612
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10614
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10616
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10615
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10618
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10620
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10619
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10622
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10624
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10623
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10626
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10628
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10627
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10630
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10632
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10631
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10634
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10636
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10635
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10638
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 10639
        .trainerName = _("Pat"),
#line 10640
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 10641
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 10642
F_TRAINER_FEMALE | 
#line 10643
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10644
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10645
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10647
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10649
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10648
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10651
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10653
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10652
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10655
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10657
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10656
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10659
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10661
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10660
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10663
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10665
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10664
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10667
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10669
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10668
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10671
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
    {
#line 10672
        .trainerName = _("Cristin"),
#line 10673
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10674
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10675
F_TRAINER_FEMALE | 
#line 10676
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10677
        .items = { ITEM_HYPER_POTION },
#line 10678
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10679
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10681
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10683
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10682
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10685
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10687
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10686
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10689
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 10690
        .trainerName = _("May"),
#line 10691
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10692
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10693
F_TRAINER_FEMALE | 
#line 10694
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10695
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10696
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10697
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10699
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10701
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10700
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10703
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10705
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10704
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10707
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 10708
        .trainerName = _("May"),
#line 10709
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10710
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10711
F_TRAINER_FEMALE | 
#line 10712
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10713
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10714
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10715
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10717
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10719
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10718
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10721
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10723
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10722
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10725
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10726
        .trainerName = _("Angelo"),
#line 10727
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10728
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10730
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10731
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10732
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10734
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10736
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10735
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10737
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 10741
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10743
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10742
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10744
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 10748
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10749
        .trainerName = _("Darius"),
#line 10750
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10751
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10753
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10754
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10755
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10757
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10759
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10758
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10761
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10762
        .trainerName = _("Steven"),
#line 10763
        .trainerClass = TRAINER_CLASS_FORMER_CHAMPION,
#line 10764
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10766
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10767
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 10768
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10770
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10772
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10771
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10773
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10778
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10780
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10779
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10781
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10786
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10787
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10789
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10794
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10796
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10795
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10797
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10802
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10804
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10803
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10805
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10810
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10810
            .heldItem = ITEM_SITRUS_BERRY,
#line 10812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10811
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10813
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10818
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10819
        .trainerName = _("Anabel"),
#line 10820
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10821
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender =
#line 10823
F_TRAINER_FEMALE | 
#line 10824
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10825
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10826
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10822
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10828
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10828
            .heldItem = ITEM_LIECHI_BERRY,
#line 10832
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10831
            .ability = ABILITY_SLOW_START,
#line 10829
            .lvl = 97,
#line 10830
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10832
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 10837
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10837
            .heldItem = ITEM_CHOPLE_BERRY,
#line 10841
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10840
            .ability = ABILITY_CLEAR_BODY,
#line 10838
            .lvl = 95,
#line 10839
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10841
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 10846
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10846
            .heldItem = ITEM_ELECTRIC_GEM,
#line 10850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10849
            .ability = ABILITY_TRANSISTOR,
#line 10847
            .lvl = 97,
#line 10848
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10850
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10855
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10855
            .heldItem = ITEM_STEEL_GEM,
#line 10859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10858
            .ability = ABILITY_CLEAR_BODY,
#line 10856
            .lvl = 95,
#line 10857
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10859
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 10864
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10864
            .heldItem = ITEM_CUSTAP_BERRY,
#line 10868
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10867
            .ability = ABILITY_DRAGONS_MAW,
#line 10865
            .lvl = 96,
#line 10866
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10868
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 10873
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10873
            .heldItem = ITEM_LIFE_ORB,
#line 10877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10876
            .ability = ABILITY_CLEAR_BODY,
#line 10874
            .lvl = 95,
#line 10875
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10877
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 10882
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10883
        .trainerName = _("Tucker"),
#line 10884
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10885
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 10888
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10889
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10890
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10886
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10892
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10892
            .heldItem = ITEM_LIECHI_BERRY,
#line 10896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10895
            .ability = ABILITY_SLOW_START,
#line 10893
            .lvl = 97,
#line 10894
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10896
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 10901
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10901
            .heldItem = ITEM_CHOPLE_BERRY,
#line 10905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10904
            .ability = ABILITY_CLEAR_BODY,
#line 10902
            .lvl = 95,
#line 10903
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10905
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 10910
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10910
            .heldItem = ITEM_ELECTRIC_GEM,
#line 10914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10913
            .ability = ABILITY_TRANSISTOR,
#line 10911
            .lvl = 97,
#line 10912
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10914
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10919
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10919
            .heldItem = ITEM_STEEL_GEM,
#line 10923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10922
            .ability = ABILITY_CLEAR_BODY,
#line 10920
            .lvl = 95,
#line 10921
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10923
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 10928
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10928
            .heldItem = ITEM_CUSTAP_BERRY,
#line 10932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10931
            .ability = ABILITY_DRAGONS_MAW,
#line 10929
            .lvl = 96,
#line 10930
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10932
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 10937
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10937
            .heldItem = ITEM_LIFE_ORB,
#line 10941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10940
            .ability = ABILITY_CLEAR_BODY,
#line 10938
            .lvl = 95,
#line 10939
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10941
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 10946
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10947
        .trainerName = _("Spenser"),
#line 10948
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10949
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender =
#line 10952
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10953
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 10954
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 10950
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10956
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10956
            .heldItem = ITEM_LIECHI_BERRY,
#line 10960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10959
            .ability = ABILITY_SLOW_START,
#line 10957
            .lvl = 97,
#line 10958
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10960
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 10965
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10965
            .heldItem = ITEM_CHOPLE_BERRY,
#line 10969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10968
            .ability = ABILITY_CLEAR_BODY,
#line 10966
            .lvl = 95,
#line 10967
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10969
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 10974
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10974
            .heldItem = ITEM_ELECTRIC_GEM,
#line 10978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10977
            .ability = ABILITY_TRANSISTOR,
#line 10975
            .lvl = 97,
#line 10976
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10978
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10983
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10983
            .heldItem = ITEM_STEEL_GEM,
#line 10987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10986
            .ability = ABILITY_CLEAR_BODY,
#line 10984
            .lvl = 95,
#line 10985
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10987
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 10992
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10992
            .heldItem = ITEM_CUSTAP_BERRY,
#line 10996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10995
            .ability = ABILITY_DRAGONS_MAW,
#line 10993
            .lvl = 96,
#line 10994
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10996
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 11001
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11001
            .heldItem = ITEM_LIFE_ORB,
#line 11005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11004
            .ability = ABILITY_CLEAR_BODY,
#line 11002
            .lvl = 95,
#line 11003
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11005
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 11010
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 11011
        .trainerName = _("Greta"),
#line 11012
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 11013
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender =
#line 11015
F_TRAINER_FEMALE | 
#line 11016
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11017
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11018
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 11014
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11020
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11020
            .heldItem = ITEM_LIECHI_BERRY,
#line 11024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11023
            .ability = ABILITY_SLOW_START,
#line 11021
            .lvl = 97,
#line 11022
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11024
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 11029
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11029
            .heldItem = ITEM_CHOPLE_BERRY,
#line 11033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11032
            .ability = ABILITY_CLEAR_BODY,
#line 11030
            .lvl = 95,
#line 11031
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11033
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 11038
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11038
            .heldItem = ITEM_ELECTRIC_GEM,
#line 11042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11041
            .ability = ABILITY_TRANSISTOR,
#line 11039
            .lvl = 97,
#line 11040
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11042
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11047
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11047
            .heldItem = ITEM_STEEL_GEM,
#line 11051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11050
            .ability = ABILITY_CLEAR_BODY,
#line 11048
            .lvl = 95,
#line 11049
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11051
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 11056
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11056
            .heldItem = ITEM_CUSTAP_BERRY,
#line 11060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11059
            .ability = ABILITY_DRAGONS_MAW,
#line 11057
            .lvl = 96,
#line 11058
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11060
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 11065
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11065
            .heldItem = ITEM_LIFE_ORB,
#line 11069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11068
            .ability = ABILITY_CLEAR_BODY,
#line 11066
            .lvl = 95,
#line 11067
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11069
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 11074
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 11075
        .trainerName = _("Noland"),
#line 11076
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 11077
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 11080
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11081
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11082
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 11078
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11084
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11084
            .heldItem = ITEM_LIECHI_BERRY,
#line 11088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11087
            .ability = ABILITY_SLOW_START,
#line 11085
            .lvl = 97,
#line 11086
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11088
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 11093
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11093
            .heldItem = ITEM_CHOPLE_BERRY,
#line 11097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11096
            .ability = ABILITY_CLEAR_BODY,
#line 11094
            .lvl = 95,
#line 11095
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11097
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 11102
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11102
            .heldItem = ITEM_ELECTRIC_GEM,
#line 11106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11105
            .ability = ABILITY_TRANSISTOR,
#line 11103
            .lvl = 97,
#line 11104
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11106
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11111
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11111
            .heldItem = ITEM_STEEL_GEM,
#line 11115
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11114
            .ability = ABILITY_CLEAR_BODY,
#line 11112
            .lvl = 95,
#line 11113
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11115
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 11120
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11120
            .heldItem = ITEM_CUSTAP_BERRY,
#line 11124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11123
            .ability = ABILITY_DRAGONS_MAW,
#line 11121
            .lvl = 96,
#line 11122
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11124
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 11129
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11129
            .heldItem = ITEM_LIFE_ORB,
#line 11133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11132
            .ability = ABILITY_CLEAR_BODY,
#line 11130
            .lvl = 95,
#line 11131
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11133
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 11138
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 11139
        .trainerName = _("Lucy"),
#line 11140
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 11141
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 11143
F_TRAINER_FEMALE | 
#line 11144
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11145
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11146
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 11142
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11148
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11148
            .heldItem = ITEM_LIECHI_BERRY,
#line 11152
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11151
            .ability = ABILITY_SLOW_START,
#line 11149
            .lvl = 97,
#line 11150
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11152
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 11157
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11157
            .heldItem = ITEM_CHOPLE_BERRY,
#line 11161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11160
            .ability = ABILITY_CLEAR_BODY,
#line 11158
            .lvl = 95,
#line 11159
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11161
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 11166
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11166
            .heldItem = ITEM_ELECTRIC_GEM,
#line 11170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11169
            .ability = ABILITY_TRANSISTOR,
#line 11167
            .lvl = 97,
#line 11168
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11170
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11175
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11175
            .heldItem = ITEM_STEEL_GEM,
#line 11179
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11178
            .ability = ABILITY_CLEAR_BODY,
#line 11176
            .lvl = 95,
#line 11177
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11179
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 11184
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11184
            .heldItem = ITEM_CUSTAP_BERRY,
#line 11188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11187
            .ability = ABILITY_DRAGONS_MAW,
#line 11185
            .lvl = 96,
#line 11186
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11188
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 11193
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11193
            .heldItem = ITEM_LIFE_ORB,
#line 11197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11196
            .ability = ABILITY_CLEAR_BODY,
#line 11194
            .lvl = 95,
#line 11195
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11197
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 11202
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 11203
        .trainerName = _("Brandon"),
#line 11204
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 11205
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 11208
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11209
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
#line 11210
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 11206
        .mugshotColor = MUGSHOT_COLOR_RED,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11212
            .species = SPECIES_REGIGIGAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11212
            .heldItem = ITEM_LIECHI_BERRY,
#line 11216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11215
            .ability = ABILITY_SLOW_START,
#line 11213
            .lvl = 97,
#line 11214
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11216
                MOVE_FACADE,
                MOVE_ZEN_HEADBUTT,
                MOVE_AVALANCHE,
                MOVE_DRAIN_PUNCH,
            },
            },
            {
#line 11221
            .species = SPECIES_REGIROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11221
            .heldItem = ITEM_CHOPLE_BERRY,
#line 11225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11224
            .ability = ABILITY_CLEAR_BODY,
#line 11222
            .lvl = 95,
#line 11223
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11225
                MOVE_STONE_EDGE,
                MOVE_HAMMER_ARM,
                MOVE_EXPLOSION,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 11230
            .species = SPECIES_REGIELEKI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11230
            .heldItem = ITEM_ELECTRIC_GEM,
#line 11234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11233
            .ability = ABILITY_TRANSISTOR,
#line 11231
            .lvl = 97,
#line 11232
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11234
                MOVE_THUNDER_CAGE,
                MOVE_VOLT_SWITCH,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11239
            .species = SPECIES_REGISTEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11239
            .heldItem = ITEM_STEEL_GEM,
#line 11243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11242
            .ability = ABILITY_CLEAR_BODY,
#line 11240
            .lvl = 95,
#line 11241
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11243
                MOVE_HARD_PRESS,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_PROTECT,
            },
            },
            {
#line 11248
            .species = SPECIES_REGIDRAGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11248
            .heldItem = ITEM_CUSTAP_BERRY,
#line 11252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11251
            .ability = ABILITY_DRAGONS_MAW,
#line 11249
            .lvl = 96,
#line 11250
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11252
                MOVE_DRACO_METEOR,
                MOVE_CRUNCH,
                MOVE_REVERSAL,
                MOVE_EARTH_POWER,
            },
            },
            {
#line 11257
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11257
            .heldItem = ITEM_LIFE_ORB,
#line 11261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11260
            .ability = ABILITY_CLEAR_BODY,
#line 11258
            .lvl = 95,
#line 11259
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11261
                MOVE_ZAP_CANNON,
                MOVE_ICE_BEAM,
                MOVE_SNOWSCAPE,
                MOVE_ANCIENT_POWER,
            },
            },
        },
    },
#line 11266
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 11267
        .trainerName = _("Mariela"),
#line 11268
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11269
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 11270
F_TRAINER_FEMALE | 
#line 11271
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11272
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11273
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11275
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11276
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11279
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 11280
        .trainerName = _("Alvaro"),
#line 11281
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11282
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 11284
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11285
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11286
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11288
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11289
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11292
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11293
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11296
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 11297
        .trainerName = _("Everett"),
#line 11298
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 11299
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 11301
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 11302
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11303
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11305
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11306
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11309
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 11310
        .trainerName = _("Red"),
#line 11311
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11312
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 11314
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11315
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11317
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11318
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11321
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 11322
        .trainerName = _("Leaf"),
#line 11323
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11324
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 11325
F_TRAINER_FEMALE | 
#line 11326
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11327
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11329
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11330
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11333
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 11334
        .trainerName = _("Brendan"),
#line 11335
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11336
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 11338
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11339
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11340
        .mugshotColor = MUGSHOT_COLOR_LIGHTBLUE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11342
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11343
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11346
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 11347
        .trainerName = _("May"),
#line 11348
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11349
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 11350
F_TRAINER_FEMALE | 
#line 11351
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11352
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
#line 11353
        .mugshotColor = MUGSHOT_COLOR_MAYPINK,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11355
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11356
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },

//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [PARTNER_NONE] =
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
    [PARTNER_STEVEN] =
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 19
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 18
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .lvl = 42,
#line 16
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 20
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 25
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 29
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 28
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .lvl = 43,
#line 26
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 30
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 35
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 39
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 38
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 37
            .lvl = 44,
#line 36
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 40
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 45
    [PARTNER_EMMIE] =
    {
#line 46
        .trainerName = _("EMMIE"),
#line 47
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 48
        .trainerPic = TRAINER_BACK_PIC_LEAF,
        .encounterMusic_gender =
#line 49
F_TRAINER_FEMALE | 
#line 50
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 52
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 56
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 55
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 54
            .lvl = 44,
#line 53
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 57
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 62
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 66
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 65
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 64
            .lvl = 44,
#line 63
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 67
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 72
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 76
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 75
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 74
            .lvl = 44,
#line 73
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 77
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 82
    [PARTNER_TABITHA] =
    {
#line 83
        .trainerName = _("Tabitha"),
#line 84
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 85
        .trainerPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 87
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 89
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 93
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 92
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 91
            .lvl = 42,
#line 90
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 94
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 99
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 103
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 101
            .lvl = 43,
#line 100
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 104
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 109
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 113
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 111
            .lvl = 44,
#line 110
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 114
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 119
    [PARTNER_MATT] =
    {
#line 120
        .trainerName = _("Matt"),
#line 121
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 122
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 124
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 126
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 130
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 128
            .lvl = 42,
#line 127
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 131
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 136
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 140
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 138
            .lvl = 43,
#line 137
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 141
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 146
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 150
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 149
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 148
            .lvl = 44,
#line 147
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 151
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 156
    [PARTNER_SHELLY] =
    {
#line 157
        .trainerName = _("Shelly"),
#line 158
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 159
        .trainerPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 160
F_TRAINER_FEMALE | 
#line 161
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 163
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 167
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 165
            .lvl = 42,
#line 164
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 168
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 173
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 177
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 176
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 175
            .lvl = 43,
#line 174
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 178
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 183
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 187
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 185
            .lvl = 44,
#line 184
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 188
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 193
    [PARTNER_ARCHIE] =
    {
#line 194
        .trainerName = _("Archie"),
#line 195
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 196
        .trainerPic = TRAINER_BACK_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 198
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 200
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 204
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 202
            .lvl = 42,
#line 201
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 205
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 210
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 214
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 212
            .lvl = 43,
#line 211
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 215
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 220
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 224
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 222
            .lvl = 44,
#line 221
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 225
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 230
    [PARTNER_MAXIE] =
    {
#line 231
        .trainerName = _("Maxie"),
#line 232
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 233
        .trainerPic = TRAINER_BACK_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 235
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 237
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 241
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 239
            .lvl = 42,
#line 238
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 242
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 247
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 251
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 249
            .lvl = 43,
#line 248
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 252
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 257
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 261
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 259
            .lvl = 44,
#line 258
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 262
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },

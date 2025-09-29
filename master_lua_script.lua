-- you do not need this lua script, though it will allow you to with mgba 0.10 to export your pokemon to the calc
-- to use download this file on mgba select tools->scripting then file->open and open this file

-- The below configs should be set to false if you want lua_update_script.py to not parse them to the
-- public_lua_script.lua

local configOverlayPokemon = true
local configCompanion = false
local configPokemonEditing = true
local configPreDamage = true
local configPreStatus = true
local configRandomize = true

local overlayConfig = {}
overlayConfig.enabled = false
overlayConfig.processParty = true
overlayConfig.processBoxes = false
overlayConfig.frameCounter = 0
overlayConfig.checkInterval = 300
overlayConfig.debug = true

local companionConfig = {}
companionConfig.enabled = false
companionConfig.processParty = true
companionConfig.processBoxes = true
companionConfig.frameCounter = 0
companionConfig.checkInterval = 300
companionConfig.debug = true

--Start configOverlayPokemon

-- GF HEADER
local gfHeaderAdr = 0x08000100 -- 0x104 src/rom_header_gf.o

local GFRomHeader = {
    version                = 0x00, -- u32 version
    language               = 0x04, -- u32 language
    gameName               = 0x08, -- 32 bytes -- u8 gameName[32]
    monFrontPics           = 0x28, -- const struct CompressedSpriteSheet *monFrontPics
    monBackPics            = 0x2C, -- const struct CompressedSpriteSheet *monBackPics
    monNormalPalettes      = 0x30, -- const struct SpritePalette *monNormalPalettes
    monShinyPalettes       = 0x34, -- const struct SpritePalette *monShinyPalettes
    monIcons               = 0x38, -- const u8 *const *monIcons
    monIconPaletteIds      = 0x3C, -- const u8 *monIconPaletteIds
    monIconPalettes        = 0x40, -- const struct SpritePalette *monIconPalettes
    monSpeciesNames        = 0x44, -- const u8 (*monSpeciesNames)[]
    moveNames              = 0x48, -- const u8 (*moveNames)[]
    decorations            = 0x4C, -- const struct Decoration *decorations
    flagsOffset            = 0x50, -- u32 flagsOffset
    varsOffset             = 0x54, -- u32 varsOffset
    pokedexOffset          = 0x58, -- u32 pokedexOffset
    seen1Offset            = 0x5C, -- u32 seen1Offset
    seen2Offset            = 0x60, -- u32 seen2Offset
    pokedexVar             = 0x64, -- u32 pokedexVar
    pokedexFlag            = 0x68, -- u32 pokedexFlag
    mysteryEventFlag       = 0x6C, -- u32 mysteryEventFlag
    pokedexCount           = 0x70, -- u32 pokedexCount
    playerNameLength       = 0x74, -- u8 playerNameLength
    trainerNameLength      = 0x75, -- u8 trainerNameLength
    pokemonNameLength1     = 0x76, -- u8 pokemonNameLength1
    pokemonNameLength2     = 0x77, -- u8 pokemonNameLength2
    unk5                   = 0x78, -- u8 unk5
    unk6                   = 0x79, -- u8 unk6
    unk7                   = 0x7A, -- u8 unk7
    unk8                   = 0x7B, -- u8 unk8
    unk9                   = 0x7C, -- u8 unk9
    unk10                  = 0x7D, -- u8 unk10
    unk11                  = 0x7E, -- u8 unk11
    unk12                  = 0x7F, -- u8 unk12
    unk13                  = 0x80, -- u8 unk13
    unk14                  = 0x81, -- u8 unk14
    unk15                  = 0x82, -- u8 unk15
    unk16                  = 0x83, -- u8 unk16
    unk17                  = 0x84, -- u8 unk17
    gfPadding              = 0x85, -- (padding: 3 bytes for alignment)
    saveBlock2Size         = 0x88, -- u32 saveBlock2Size
    saveBlock1Size         = 0x8C, -- u32 saveBlock1Size
    partyCountOffset       = 0x90, -- u32 partyCountOffset
    partyOffset            = 0x94, -- u32 partyOffset
    warpFlagsOffset        = 0x98, -- u32 warpFlagsOffset
    trainerIdOffset        = 0x9C, -- u32 trainerIdOffset
    playerNameOffset       = 0xA0, -- u32 playerNameOffset
    playerGenderOffset     = 0xA4, -- u32 playerGenderOffset
    frontierStatusOffset   = 0xA8,
    frontierStatusOffset2  = 0xAC,
    externalEventFlagsOffset = 0xB0,
    externalEventDataOffset  = 0xB4,
    unk18                  = 0xB8,
    speciesInfo            = 0xBC,
    abilityNames           = 0xC0,
    abilityDescriptions    = 0xC4,
    items                  = 0xC8,
    moves                  = 0xCC,
    ballGfx                = 0xD0,
    ballPalettes           = 0xD4,
    gcnLinkFlagsOffset     = 0xD8,
    gameClearFlag          = 0xDC,
    ribbonFlag             = 0xE0,
    bagCountItems          = 0xE4, -- u8 bagCountItems
    bagCountKeyItems       = 0xE5, -- u8 bagCountKeyItems
    bagCountPokeballs      = 0xE6, -- u8 bagCountPokeballs
    bagCountTMHMs          = 0xE7, -- u8 bagCountTMHMs
    bagCountBerries        = 0xE8, -- u8 bagCountBerries
    pcItemsCount           = 0xE9,
    pcItemsOffset          = 0xEC,
    giftRibbonsOffset      = 0xF0,
    enigmaBerryOffset      = 0xF4,  -- only if FREE_ENIGMA_BERRY == FALSE
    enigmaBerrySize        = 0xF8,  -- same condition
    moveDescriptions       = 0xFC,
    unk20                  = 0x100,
}

-- RHH HEADER
local rhhHeaderAdr = 0x08000204 -- 0x18 src/rom_header_rhh.o

local RHHRomHeader = {
    rhhMagic                = 0x00,
    expansionVersionMajor   = 0x06,
    expansionVersionMinor   = 0x07,
    expansionVersionPatch   = 0x08,
    expansionVersionFlags   = 0x09,
    movesCount              = 0x0A, -- u16
    numSpecies              = 0x0C, -- u16
    abilitiesCount          = 0x0E, -- u16
    abilitiesPtr            = 0x10,
    itemsCount              = 0x14,
    itemNameLength          = 0x16,
    moveNameLength          = 0x17,
    pokemonStorage          = 0x18,
    regionMapEntries        = 0x1C,
    playerParty             = 0x20,
    playerPartyCount        = 0x24, -- u8
    boxPokemonSize          = 0x28, -- u32
    partyPokemonSize        = 0x2C, -- u32
    speciesSize             = 0x30, -- u32
    movesSize               = 0x34, -- u32
    abilitySize             = 0x38, -- u32
    regionMapEntrySize      = 0x3C, -- u32
    itemSize                = 0x40, -- u32
    speciesNameOffset       = 0x44, -- u32
    mapNameOffset           = 0x48, -- u32
    itemNameOffset          = 0x4C, -- u32
    metLocationCount        = 0x50, -- u16
    abilityNameLength       = 0x52, -- u8
}

-- From header
-- local saveBlock1Adr = emu:read32(rhhHeaderAdr + RHHRomHeader.saveBlock1)
-- local saveBlock2Adr = emu:read32(rhhHeaderAdr + RHHRomHeader.saveBlock2)
-- local saveBlock3Adr = emu:read32(rhhHeaderAdr + RHHRomHeader.saveBlock3)

local terminator=0xFF
local monNameLength = emu:read8(gfHeaderAdr + GFRomHeader.pokemonNameLength1) -- POKEMON_NAME_LENGTH
local playerNameLength = emu:read8(gfHeaderAdr + GFRomHeader.playerNameLength) -- PLAYER_NAME_LENGTH
local boxMonSize = emu:read32(rhhHeaderAdr + RHHRomHeader.boxPokemonSize) -- sizeof(struct BoxPokemon)
local partyMonSize = emu:read32(rhhHeaderAdr + RHHRomHeader.partyPokemonSize) -- sizeof(struct Pokemon)
local speciesStructSize = emu:read32(rhhHeaderAdr + RHHRomHeader.speciesSize) -- sizeof(struct SpeciesInfo)

-- Used for mon exporting
local partyCount = emu:read32(rhhHeaderAdr + RHHRomHeader.playerPartyCount) -- gPlayerPartyCount
local partyloc = emu:read32(rhhHeaderAdr + RHHRomHeader.playerParty) -- gPlayerParty
local storageLoc = emu:read32(rhhHeaderAdr + RHHRomHeader.pokemonStorage) -- gPokemonStorage
local speciesInfo = emu:read32(gfHeaderAdr + GFRomHeader.speciesInfo) -- gSpeciesInfo

-- Used for table generation
-- Moves
local movesInfo = emu:read32(gfHeaderAdr + GFRomHeader.moves) -- gMovesInfo
local movesSize = emu:read32(rhhHeaderAdr + RHHRomHeader.movesSize) -- sizeof(struct MoveInfo)
local movesCount = emu:read16(rhhHeaderAdr + RHHRomHeader.movesCount) -- MOVES_COUNT
local moveNameLength = emu:read8(rhhHeaderAdr + RHHRomHeader.moveNameLength) -- MOVE_NAME_LENGTH

-- Abilities
local abilityInfo = emu:read32(rhhHeaderAdr + RHHRomHeader.abilitiesPtr) -- gAbilitiesInfo
local abilitySize = emu:read32(rhhHeaderAdr + RHHRomHeader.abilitySize) -- sizeof(struct Ability)
local abilitiesCount = emu:read16(rhhHeaderAdr + RHHRomHeader.abilitiesCount) -- ABILITIES_COUNT
local abilityNameLength = emu:read8(rhhHeaderAdr + RHHRomHeader.abilityNameLength) -- ABILITY_NAME_LENGTH

-- Met Locations
local regionMapEntries = emu:read32(rhhHeaderAdr + RHHRomHeader.regionMapEntries) -- gRegionMapEntries
local regionMapEntrySize = emu:read32(rhhHeaderAdr + RHHRomHeader.regionMapEntrySize) -- sizeof(struct RegionMapLocation)
local mapNameOffset = emu:read32(rhhHeaderAdr + RHHRomHeader.mapNameOffset) -- offsetof(struct RegionMapLocation, name)
local metLocationCount = emu:read8(rhhHeaderAdr + RHHRomHeader.metLocationCount) -- MET_LOCATION_COUNT

-- Items
local itemsInfo = emu:read32(gfHeaderAdr + GFRomHeader.items) -- gItemsInfo
local itemSize = emu:read32(rhhHeaderAdr + RHHRomHeader.itemSize) -- sizeof(struct Item)
local itemNameOffset = emu:read32(rhhHeaderAdr + RHHRomHeader.itemNameOffset) -- offsetof(struct Item, name)
local itemsCount = emu:read16(rhhHeaderAdr + RHHRomHeader.itemsCount) -- ITEMS_COUNT
local itemNameLength = emu:read8(rhhHeaderAdr + RHHRomHeader.itemNameLength) -- ITEM_NAME_LENGTH

-- Species
local numSpecies = emu:read16(rhhHeaderAdr + RHHRomHeader.numSpecies)
local speciesNameOffset = emu:read32(rhhHeaderAdr + RHHRomHeader.speciesNameOffset)

function readPointer(addr)
    local ptr = emu:read32(addr)

    if ptr >= 0x08000000 and ptr <= 0x09FFFFFF then 
        return ptr 
    end
    if ptr >= 0x02000000 and ptr <= 0x03007FFF then 
        return ptr 
    end

    console:log(string.format("Warning: Invalid pointer read at 0x%08X → 0x%08X", addr, ptr))
    return nil
end

function getMoveName(n)
    local moveStructAddr = movesInfo + (movesSize * n)
    local namePtr = readPointer(moveStructAddr)
    if not namePtr then
        console:log(string.format("Invalid name pointer for move %d", n))
        return nil
    end

    local nameBytes = emu:readRange(namePtr, moveNameLength)
    local name = toString(nameBytes)
    return name
end

--function getMonsName(n)
--    local speciesAdr = speciesInfo + (speciesStructSize * n) + speciesNameOffset
--
--    local nameBytes = emu:readRange(speciesAdr, monNameLength)
--    local name = toString(nameBytes)
--    console:log(string.format("Species name: %s", name))
--    return name
--end

function getAbilityName(n)
    local abilityInfoAddr = abilityInfo + (abilitySize * n)

    local nameBytes = emu:readRange(abilityInfoAddr, abilityNameLength)
    local name = toString(nameBytes)
    return name
end

function getMetLocationName(n)
    local mapStructAddr = regionMapEntries + (regionMapEntrySize * n) + mapNameOffset
    local namePtr = readPointer(mapStructAddr)
    if not namePtr then
        console:log(string.format("Invalid name pointer for map %d", n))
        return nil
    end

    local nameBytes = emu:readRange(namePtr, abilityNameLength)
    local name = toString(nameBytes)
    return name
end

function getItemName(n)
    local itemStructAddr = itemsInfo + (itemSize * n) + itemNameOffset
    local namePtr = readPointer(itemStructAddr)
    if not namePtr then
        console:log(string.format("Invalid name pointer for item %d", n))
        return nil
    end

    local nameBytes = emu:readRange(namePtr, itemNameLength)
    local name = toString(nameBytes)
    return name
end

move = {}

function getMoveTable()
    move[0] = ""
    i = 1
    while i < movesCount do
        move[i] = string.format("%s",getMoveName(i))
        i = i + 1
    end
end

--mons2 = {}
--
---- sort of works but doesn't do forms
--function getMonsTable()
--    mons2[0] = ""
--    monsTableBuffer:print(mons2[0])
--    i = 1
--    while i < numSpecies do
--        mons2[i] = string.format("%s",getMonsName(i))
--        monsTableBuffer:print(mons2[i])
--        i = i + 1
--    end
--end

abilities = {}

function getAbilityTable()
    abilities[0] = ""
    i = 1
    while i < abilitiesCount do
        abilities[i] = string.format("%s",getAbilityName(i))
        i = i + 1
    end
end

metLocation = {}

function getMetLocationsTable()
    i = 0
    while i < (metLocationCount - 1) do -- Removes MAPSEC_NONE
        metLocation[i] = string.format("%s",getMetLocationName(i))
        i = i + 1
    end
    metLocation[0xFD] = "Special Egg"
    metLocation[0xFE] = "Trade"
    metLocation[0xFF] = "Fateful Encounter"
end

item = {}

function getItemTable()
    item[0] = ""
    i = 1
    while i < itemsCount do
        item[i] = string.format("%s",getItemName(i))
        i = i + 1
    end
end

mons = {
    "Bulbasaur",
    "Ivysaur",
    "Venusaur",
    "Charmander",
    "Charmeleon",
    "Charizard",
    "Squirtle",
    "Wartortle",
    "Blastoise",
    "Caterpie",
    "Metapod",
    "Butterfree",
    "Weedle",
    "Kakuna",
    "Beedrill",
    "Pidgey",
    "Pidgeotto",
    "Pidgeot",
    "Rattata",
    "Raticate",
    "Spearow",
    "Fearow",
    "Ekans",
    "Arbok",
    "Pikachu",
    "Raichu",
    "Sandshrew",
    "Sandslash",
    "Nidoran-F",
    "Nidorina",
    "Nidoqueen",
    "Nidoran-M",
    "Nidorino",
    "Nidoking",
    "Clefairy",
    "Clefable",
    "Vulpix",
    "Ninetales",
    "Jigglypuff",
    "Wigglytuff",
    "Zubat",
    "Golbat",
    "Oddish",
    "Gloom",
    "Vileplume",
    "Paras",
    "Parasect",
    "Venonat",
    "Venomoth",
    "Diglett",
    "Dugtrio",
    "Meowth",
    "Persian",
    "Psyduck",
    "Golduck",
    "Mankey",
    "Primeape",
    "Growlithe",
    "Arcanine",
    "Poliwag",
    "Poliwhirl",
    "Poliwrath",
    "Abra",
    "Kadabra",
    "Alakazam",
    "Machop",
    "Machoke",
    "Machamp",
    "Bellsprout",
    "Weepinbell",
    "Victreebel",
    "Tentacool",
    "Tentacruel",
    "Geodude",
    "Graveler",
    "Golem",
    "Ponyta",
    "Rapidash",
    "Slowpoke",
    "Slowbro",
    "Magnemite",
    "Magneton",
    "Farfetchd",
    "Doduo",
    "Dodrio",
    "Seel",
    "Dewgong",
    "Grimer",
    "Muk",
    "Shellder",
    "Cloyster",
    "Gastly",
    "Haunter",
    "Gengar",
    "Onix",
    "Drowzee",
    "Hypno",
    "Krabby",
    "Kingler",
    "Voltorb",
    "Electrode",
    "Exeggcute",
    "Exeggutor",
    "Cubone",
    "Marowak",
    "Hitmonlee",
    "Hitmonchan",
    "Lickitung",
    "Koffing",
    "Weezing",
    "Rhyhorn",
    "Rhydon",
    "Chansey",
    "Tangela",
    "Kangaskhan",
    "Horsea",
    "Seadra",
    "Goldeen",
    "Seaking",
    "Staryu",
    "Starmie",
    "Mr. Mime",
    "Scyther",
    "Jynx",
    "Electabuzz",
    "Magmar",
    "Pinsir",
    "Tauros",
    "Magikarp",
    "Gyarados",
    "Lapras",
    "Ditto",
    "Eevee",
    "Vaporeon",
    "Jolteon",
    "Flareon",
    "Porygon",
    "Omanyte",
    "Omastar",
    "Kabuto",
    "Kabutops",
    "Aerodactyl",
    "Snorlax",
    "Articuno",
    "Zapdos",
    "Moltres",
    "Dratini",
    "Dragonair",
    "Dragonite",
    "Mewtwo",
    "Mew",
    "Chikorita",
    "Bayleef",
    "Meganium",
    "Cyndaquil",
    "Quilava",
    "Typhlosion",
    "Totodile",
    "Croconaw",
    "Feraligatr",
    "Sentret",
    "Furret",
    "Hoothoot",
    "Noctowl",
    "Ledyba",
    "Ledian",
    "Spinarak",
    "Ariados",
    "Crobat",
    "Chinchou",
    "Lanturn",
    "Pichu",
    "Cleffa",
    "Igglybuff",
    "Togepi",
    "Togetic",
    "Natu",
    "Xatu",
    "Mareep",
    "Flaaffy",
    "Ampharos",
    "Bellossom",
    "Marill",
    "Azumarill",
    "Sudowoodo",
    "Politoed",
    "Hoppip",
    "Skiploom",
    "Jumpluff",
    "Aipom",
    "Sunkern",
    "Sunflora",
    "Yanma",
    "Wooper",
    "Quagsire",
    "Espeon",
    "Umbreon",
    "Murkrow",
    "Slowking",
    "Misdreavus",
    "Unown",
    "Wobbuffet",
    "Girafarig",
    "Pineco",
    "Forretress",
    "Dunsparce",
    "Gligar",
    "Steelix",
    "Snubbull",
    "Granbull",
    "Qwilfish",
    "Scizor",
    "Shuckle",
    "Heracross",
    "Sneasel",
    "Teddiursa",
    "Ursaring",
    "Slugma",
    "Magcargo",
    "Swinub",
    "Piloswine",
    "Corsola",
    "Remoraid",
    "Octillery",
    "Delibird",
    "Mantine",
    "Skarmory",
    "Houndour",
    "Houndoom",
    "Kingdra",
    "Phanpy",
    "Donphan",
    "Porygon2",
    "Stantler",
    "Smeargle",
    "Tyrogue",
    "Hitmontop",
    "Smoochum",
    "Elekid",
    "Magby",
    "Miltank",
    "Blissey",
    "Raikou",
    "Entei",
    "Suicune",
    "Larvitar",
    "Pupitar",
    "Tyranitar",
    "Lugia",
    "Ho-Oh",
    "Celebi",
    "Treecko",
    "Grovyle",
    "Sceptile",
    "Torchic",
    "Combusken",
    "Blaziken",
    "Mudkip",
    "Marshtomp",
    "Swampert",
    "Poochyena",
    "Mightyena",
    "Zigzagoon",
    "Linoone",
    "Wurmple",
    "Silcoon",
    "Beautifly",
    "Cascoon",
    "Dustox",
    "Lotad",
    "Lombre",
    "Ludicolo",
    "Seedot",
    "Nuzleaf",
    "Shiftry",
    "Taillow",
    "Swellow",
    "Wingull",
    "Pelipper",
    "Ralts",
    "Kirlia",
    "Gardevoir",
    "Surskit",
    "Masquerain",
    "Shroomish",
    "Breloom",
    "Slakoth",
    "Vigoroth",
    "Slaking",
    "Nincada",
    "Ninjask",
    "Shedinja",
    "Whismur",
    "Loudred",
    "Exploud",
    "Makuhita",
    "Hariyama",
    "Azurill",
    "Nosepass",
    "Skitty",
    "Delcatty",
    "Sableye",
    "Mawile",
    "Aron",
    "Lairon",
    "Aggron",
    "Meditite",
    "Medicham",
    "Electrike",
    "Manectric",
    "Plusle",
    "Minun",
    "Volbeat",
    "Illumise",
    "Roselia",
    "Gulpin",
    "Swalot",
    "Carvanha",
    "Sharpedo",
    "Wailmer",
    "Wailord",
    "Numel",
    "Camerupt",
    "Torkoal",
    "Spoink",
    "Grumpig",
    "Spinda",
    "Trapinch",
    "Vibrava",
    "Flygon",
    "Cacnea",
    "Cacturne",
    "Swablu",
    "Altaria",
    "Zangoose",
    "Seviper",
    "Lunatone",
    "Solrock",
    "Barboach",
    "Whiscash",
    "Corphish",
    "Crawdaunt",
    "Baltoy",
    "Claydol",
    "Lileep",
    "Cradily",
    "Anorith",
    "Armaldo",
    "Feebas",
    "Milotic",
    "Castform-Normal",
    "Kecleon",
    "Shuppet",
    "Banette",
    "Duskull",
    "Dusclops",
    "Tropius",
    "Chimecho",
    "Absol",
    "Wynaut",
    "Snorunt",
    "Glalie",
    "Spheal",
    "Sealeo",
    "Walrein",
    "Clamperl",
    "Huntail",
    "Gorebyss",
    "Relicanth",
    "Luvdisc",
    "Bagon",
    "Shelgon",
    "Salamence",
    "Beldum",
    "Metang",
    "Metagross",
    "Regirock",
    "Regice",
    "Registeel",
    "Latias",
    "Latios",
    "Kyogre",
    "Groudon",
    "Rayquaza",
    "Jirachi",
    "Deoxys-Normal",
    "Turtwig",
    "Grotle",
    "Torterra",
    "Chimchar",
    "Monferno",
    "Infernape",
    "Piplup",
    "Prinplup",
    "Empoleon",
    "Starly",
    "Staravia",
    "Staraptor",
    "Bidoof",
    "Bibarel",
    "Kricketot",
    "Kricketune",
    "Shinx",
    "Luxio",
    "Luxray",
    "Budew",
    "Roserade",
    "Cranidos",
    "Rampardos",
    "Shieldon",
    "Bastiodon",
    "Burmy-Plant-Cloak",
    "Wormadam-Plant-Cloak",
    "Mothim",
    "Combee",
    "Vespiquen",
    "Pachirisu",
    "Buizel",
    "Floatzel",
    "Cherubi",
    "Cherrim-Overcast",
    "Shellos",
    "Gastrodon",
    "Ambipom",
    "Drifloon",
    "Drifblim",
    "Buneary",
    "Lopunny",
    "Mismagius",
    "Honchkrow",
    "Glameow",
    "Purugly",
    "Chingling",
    "Stunky",
    "Skuntank",
    "Bronzor",
    "Bronzong",
    "Bonsly",
    "Mime Jr.",
    "Happiny",
    "Chatot",
    "Spiritomb",
    "Gible",
    "Gabite",
    "Garchomp",
    "Munchlax",
    "Riolu",
    "Lucario",
    "Hippopotas",
    "Hippowdon",
    "Skorupi",
    "Drapion",
    "Croagunk",
    "Toxicroak",
    "Carnivine",
    "Finneon",
    "Lumineon",
    "Mantyke",
    "Snover",
    "Abomasnow",
    "Weavile",
    "Magnezone",
    "Lickilicky",
    "Rhyperior",
    "Tangrowth",
    "Electivire",
    "Magmortar",
    "Togekiss",
    "Yanmega",
    "Leafeon",
    "Glaceon",
    "Gliscor",
    "Mamoswine",
    "Porygon-Z",
    "Gallade",
    "Probopass",
    "Dusknoir",
    "Froslass",
    "Rotom",
    "Uxie",
    "Mesprit",
    "Azelf",
    "Dialga",
    "Palkia",
    "Heatran",
    "Regigigas",
    "Giratina-Altered",
    "Cresselia",
    "Phione",
    "Manaphy",
    "Darkrai",
    "Shaymin-Land",
    "Arceus-Normal",
    "Victini",
    "Snivy",
    "Servine",
    "Serperior",
    "Tepig",
    "Pignite",
    "Emboar",
    "Oshawott",
    "Dewott",
    "Samurott",
    "Patrat",
    "Watchog",
    "Lillipup",
    "Herdier",
    "Stoutland",
    "Purrloin",
    "Liepard",
    "Pansage",
    "Simisage",
    "Pansear",
    "Simisear",
    "Panpour",
    "Simipour",
    "Munna",
    "Musharna",
    "Pidove",
    "Tranquill",
    "Unfezant",
    "Blitzle",
    "Zebstrika",
    "Roggenrola",
    "Boldore",
    "Gigalith",
    "Woobat",
    "Swoobat",
    "Drilbur",
    "Excadrill",
    "Audino",
    "Timburr",
    "Gurdurr",
    "Conkeldurr",
    "Tympole",
    "Palpitoad",
    "Seismitoad",
    "Throh",
    "Sawk",
    "Sewaddle",
    "Swadloon",
    "Leavanny",
    "Venipede",
    "Whirlipede",
    "Scolipede",
    "Cottonee",
    "Whimsicott",
    "Petilil",
    "Lilligant",
    "Basculin",
    "Sandile",
    "Krokorok",
    "Krookodile",
    "Darumaka",
    "Darmanitan-Standard-Mode",
    "Maractus",
    "Dwebble",
    "Crustle",
    "Scraggy",
    "Scrafty",
    "Sigilyph",
    "Yamask",
    "Cofagrigus",
    "Tirtouga",
    "Carracosta",
    "Archen",
    "Archeops",
    "Trubbish",
    "Garbodor",
    "Zorua",
    "Zoroark",
    "Minccino",
    "Cinccino",
    "Gothita",
    "Gothorita",
    "Gothitelle",
    "Solosis",
    "Duosion",
    "Reuniclus",
    "Ducklett",
    "Swanna",
    "Vanillite",
    "Vanillish",
    "Vanilluxe",
    "Deerling",
    "Sawsbuck",
    "Emolga",
    "Karrablast",
    "Escavalier",
    "Foongus",
    "Amoonguss",
    "Frillish",
    "Jellicent",
    "Alomomola",
    "Joltik",
    "Galvantula",
    "Ferroseed",
    "Ferrothorn",
    "Klink",
    "Klang",
    "Klinklang",
    "Tynamo",
    "Eelektrik",
    "Eelektross",
    "Elgyem",
    "Beheeyem",
    "Litwick",
    "Lampent",
    "Chandelure",
    "Axew",
    "Fraxure",
    "Haxorus",
    "Cubchoo",
    "Beartic",
    "Cryogonal",
    "Shelmet",
    "Accelgor",
    "Stunfisk",
    "Mienfoo",
    "Mienshao",
    "Druddigon",
    "Golett",
    "Golurk",
    "Pawniard",
    "Bisharp",
    "Bouffalant",
    "Rufflet",
    "Braviary",
    "Vullaby",
    "Mandibuzz",
    "Heatmor",
    "Durant",
    "Deino",
    "Zweilous",
    "Hydreigon",
    "Larvesta",
    "Volcarona",
    "Cobalion",
    "Terrakion",
    "Virizion",
    "Tornadus",
    "Thundurus",
    "Reshiram",
    "Zekrom",
    "Landorus",
    "Kyurem",
    "Keldeo-Ordinary",
    "Meloetta-Aria",
    "Genesect",
    "Chespin",
    "Quilladin",
    "Chesnaught",
    "Fennekin",
    "Braixen",
    "Delphox",
    "Froakie",
    "Frogadier",
    "Greninja",
    "Bunnelby",
    "Diggersby",
    "Fletchling",
    "Fletchinder",
    "Talonflame",
    "Scatterbug",
    "Spewpa",
    "Vivillon",
    "Litleo",
    "Pyroar",
    "Flabebe-Red-Flower",
    "Floette-Red-Flower",
    "Florges-Red-Flower",
    "Skiddo",
    "Gogoat",
    "Pancham",
    "Pangoro",
    "Furfrou-Natural",
    "Espurr",
    "Meowstic",
    "Honedge",
    "Doublade",
    "Aegislash-Shield",
    "Spritzee",
    "Aromatisse",
    "Swirlix",
    "Slurpuff",
    "Inkay",
    "Malamar",
    "Binacle",
    "Barbaracle",
    "Skrelp",
    "Dragalge",
    "Clauncher",
    "Clawitzer",
    "Helioptile",
    "Heliolisk",
    "Tyrunt",
    "Tyrantrum",
    "Amaura",
    "Aurorus",
    "Sylveon",
    "Hawlucha",
    "Dedenne",
    "Carbink",
    "Goomy",
    "Sliggoo",
    "Goodra",
    "Klefki",
    "Phantump",
    "Trevenant",
    "Pumpkaboo-Average",
    "Gourgeist-Average",
    "Bergmite",
    "Avalugg",
    "Noibat",
    "Noivern",
    "Xerneas-Neutral",
    "Yveltal",
    "Zygarde-50-Aura-Break",
    "Diancie",
    "Hoopa-Confined",
    "Volcanion",
    "Rowlet",
    "Dartrix",
    "Decidueye",
    "Litten",
    "Torracat",
    "Incineroar",
    "Popplio",
    "Brionne",
    "Primarina",
    "Pikipek",
    "Trumbeak",
    "Toucannon",
    "Yungoos",
    "Gumshoos",
    "Grubbin",
    "Charjabug",
    "Vikavolt",
    "Crabrawler",
    "Crabominable",
    "Oricorio-Baile",
    "Cutiefly",
    "Ribombee",
    "Rockruff",
    "Lycanroc",
    "Wishiwashi",
    "Mareanie",
    "Toxapex",
    "Mudbray",
    "Mudsdale",
    "Dewpider",
    "Araquanid",
    "Fomantis",
    "Lurantis",
    "Morelull",
    "Shiinotic",
    "Salandit",
    "Salazzle",
    "Stufful",
    "Bewear",
    "Bounsweet",
    "Steenee",
    "Tsareena",
    "Comfey",
    "Oranguru",
    "Passimian",
    "Wimpod",
    "Golisopod",
    "Sandygast",
    "Palossand",
    "Pyukumuku",
    "Type-Null",
    "Silvally-Normal",
    "Minior-Meteor-Red",
    "Komala",
    "Turtonator",
    "Togedemaru",
    "Mimikyu-Disguised",
    "Bruxish",
    "Drampa",
    "Dhelmise",
    "Jangmo-o",
    "Hakamo-o",
    "Kommo-o",
    "Tapu Koko",
    "Tapu Lele",
    "Tapu Bulu",
    "Tapu Fini",
    "Cosmog",
    "Cosmoem",
    "Solgaleo",
    "Lunala",
    "Nihilego",
    "Buzzwole",
    "Pheromosa",
    "Xurkitree",
    "Celesteela",
    "Kartana",
    "Guzzlord",
    "Necrozma",
    "Magearna",
    "Marshadow",
    "Poipole",
    "Naganadel",
    "Stakataka",
    "Blacephalon",
    "Zeraora",
    "Meltan",
    "Melmetal",
    "Grookey",
    "Thwackey",
    "Rillaboom",
    "Scorbunny",
    "Raboot",
    "Cinderace",
    "Sobble",
    "Drizzile",
    "Inteleon",
    "Skwovet",
    "Greedent",
    "Rookidee",
    "Corvisquire",
    "Corviknight",
    "Blipbug",
    "Dottler",
    "Orbeetle",
    "Nickit",
    "Thievul",
    "Gossifleur",
    "Eldegoss",
    "Wooloo",
    "Dubwool",
    "Chewtle",
    "Drednaw",
    "Yamper",
    "Boltund",
    "Rolycoly",
    "Carkol",
    "Coalossal",
    "Applin",
    "Flapple",
    "Appletun",
    "Silicobra",
    "Sandaconda",
    "Cramorant",
    "Arrokuda",
    "Barraskewda",
    "Toxel",
    "Toxtricity",
    "Sizzlipede",
    "Centiskorch",
    "Clobbopus",
    "Grapploct",
    "Sinistea-Phony",
    "Polteageist-Phony",
    "Hatenna",
    "Hattrem",
    "Hatterene",
    "Impidimp",
    "Morgrem",
    "Grimmsnarl",
    "Obstagoon",
    "Perrserker",
    "Cursola",
    "Sirfetch’d",
    "Mr. Rime",
    "Runerigus",
    "Milcery",
    "Alcremie-Strawberry-Vanilla-Cream",
    "Falinks",
    "Pincurchin",
    "Snom",
    "Frosmoth",
    "Stonjourner",
    "Eiscue-Ice-Face",
    "Indeedee-Male",
    "Morpeko-Full-Belly",
    "Cufant",
    "Copperajah",
    "Dracozolt",
    "Arctozolt",
    "Dracovish",
    "Arctovish",
    "Duraludon",
    "Dreepy",
    "Drakloak",
    "Dragapult",
    "Zacian-Hero-Of-Many-Battles",
    "Zamazenta-Hero-Of-Many-Battles",
    "Eternatus",
    "Kubfu",
    "Urshifu-Single-Strike-Style",
    "Zarude",
    "Regieleki",
    "Regidrago",
    "Glastrier",
    "Spectrier",
    "Calyrex",
    "Wyrdeer",
    "Kleavor",
    "Ursaluna",
    "Basculegion",
    "Sneasler",
    "Overqwil",
    "Enamorus",
    "Venusaur-Mega",
    "Charizard-Mega-X",
    "Charizard-Mega-Y",
    "Blastoise-Mega",
    "Beedrill-Mega",
    "Pidgeot-Mega",
    "Alakazam-Mega",
    "Slowbro-Mega",
    "Gengar-Mega",
    "Kangaskhan-Mega",
    "Pinsir-Mega",
    "Gyarados-Mega",
    "Aerodactyl-Mega",
    "Mewtwo-Mega-X",
    "Mewtwo-Mega-Y",
    "Ampharos-Mega",
    "Steelix-Mega",
    "Scizor-Mega",
    "Heracross-Mega",
    "Houndoom-Mega",
    "Tyranitar-Mega",
    "Sceptile-Mega",
    "Blaziken-Mega",
    "Swampert-Mega",
    "Gardevoir-Mega",
    "Sableye-Mega",
    "Mawile-Mega",
    "Aggron-Mega",
    "Medicham-Mega",
    "Manectric-Mega",
    "Sharpedo-Mega",
    "Camerupt-Mega",
    "Altaria-Mega",
    "Banette-Mega",
    "Absol-Mega",
    "Glalie-Mega",
    "Salamence-Mega",
    "Metagross-Mega",
    "Latias-Mega",
    "Latios-Mega",
    "Lopunny-Mega",
    "Garchomp-Mega",
    "Lucario-Mega",
    "Abomasnow-Mega",
    "Gallade-Mega",
    "Audino-Mega",
    "Diancie-Mega",
    "Rayquaza-Mega",
    "Kyogre-Primal",
    "Groudon-Primal",
    "Rattata-Alola",
    "Raticate-Alola",
    "Raichu-Alola",
    "Sandshrew-Alola",
    "Sandslash-Alola",
    "Vulpix-Alola",
    "Ninetales-Alola",
    "Diglett-Alola",
    "Dugtrio-Alola",
    "Meowth-Alola",
    "Persian-Alola",
    "Geodude-Alola",
    "Graveler-Alola",
    "Golem-Alola",
    "Grimer-Alola",
    "Muk-Alola",
    "Exeggutor-Alola",
    "Marowak-Alola",
    "Meowth-Galar",
    "Ponyta-Galar",
    "Rapidash-Galar",
    "Slowpoke-Galar",
    "Slowbro-Galar",
    "Farfetchd-Galar",
    "Weezing-Galar",
    "Mr. Mime-Galar",
    "Articuno-Galar",
    "Zapdos-Galar",
    "Moltres-Galar",
    "Slowking-Galar",
    "Corsola-Galar",
    "Zigzagoon-Galar",
    "Linoone-Galar",
    "Darumaka-Galar",
    "Darmanitan-Galar-Standard-Mode",
    "Yamask-Galar",
    "Stunfisk-Galar",
    "Growlithe-Hisui",
    "Arcanine-Hisui",
    "Voltorb-Hisui",
    "Electrode-Hisui",
    "Typhlosion-Hisui",
    "Qwilfish-Hisui",
    "Sneasel-Hisui",
    "Samurott-Hisui",
    "Lilligant-Hisui",
    "Zorua-Hisui",
    "Zoroark-Hisui",
    "Braviary-Hisui",
    "Sliggoo-Hisui",
    "Goodra-Hisui",
    "Avalugg-Hisui",
    "Decidueye-Hisui",
    "Pikachu-Cosplay",
    "Pikachu-Rock-Star",
    "Pikachu-Belle",
    "Pikachu-Pop-Star",
    "Pikachu-Ph-D",
    "Pikachu-Libre",
    "Pikachu-Original-Cap",
    "Pikachu-Hoenn-Cap",
    "Pikachu-Sinnoh-Cap",
    "Pikachu-Unova-Cap",
    "Pikachu-Kalos-Cap",
    "Pikachu-Alola-Cap",
    "Pikachu-Partner-Cap",
    "Pikachu-World-Cap",
    "Pichu-Spiky-Eared",
    "Unown-B",
    "Unown-C",
    "Unown-D",
    "Unown-E",
    "Unown-F",
    "Unown-G",
    "Unown-H",
    "Unown-I",
    "Unown-J",
    "Unown-K",
    "Unown-L",
    "Unown-M",
    "Unown-N",
    "Unown-O",
    "Unown-P",
    "Unown-Q",
    "Unown-R",
    "Unown-S",
    "Unown-T",
    "Unown-U",
    "Unown-V",
    "Unown-W",
    "Unown-X",
    "Unown-Y",
    "Unown-Z",
    "Unown-Emark",
    "Unown-Qmark",
    "Castform-Sunny",
    "Castform-Rainy",
    "Castform-Snowy",
    "Deoxys-Attack",
    "Deoxys-Defense",
    "Deoxys-Speed",
    "Burmy-Sandy-Cloak",
    "Burmy-Trash-Cloak",
    "Wormadam-Sandy-Cloak",
    "Wormadam-Trash-Cloak",
    "Cherrim-Sunshine",
    "Shellos",
    "Gastrodon",
    "Rotom-Heat",
    "Rotom-Wash",
    "Rotom-Frost",
    "Rotom-Fan",
    "Rotom-Mow",
    "Dialga-Origin",
    "Palkia-Origin",
    "Giratina-Origin",
    "Shaymin-Sky",
    "Arceus-Fighting",
    "Arceus-Flying",
    "Arceus-Poison",
    "Arceus-Ground",
    "Arceus-Rock",
    "Arceus-Bug",
    "Arceus-Ghost",
    "Arceus-Steel",
    "Arceus-Fire",
    "Arceus-Water",
    "Arceus-Grass",
    "Arceus-Electric",
    "Arceus-Psychic",
    "Arceus-Ice",
    "Arceus-Dragon",
    "Arceus-Dark",
    "Arceus-Fairy",
    "Basculin-Blue-Striped",
    "Basculin-White-Striped",
    "Darmanitan-Zen-Mode",
    "Darmanitan-Galar-Zen-Mode",
    "Deerling-Summer",
    "Deerling-Autumn",
    "Deerling-Winter",
    "Sawsbuck-Summer",
    "Sawsbuck-Autumn",
    "Sawsbuck-Winter",
    "Tornadus-Therian",
    "Thundurus-Therian",
    "Landorus-Therian",
    "Enamorus-Therian",
    "Kyurem-White",
    "Kyurem-Black",
    "Keldeo-Resolute",
    "Meloetta-Pirouette",
    "Genesect-Douse-Drive",
    "Genesect-Shock-Drive",
    "Genesect-Burn-Drive",
    "Genesect-Chill-Drive",
    "Greninja-Battle-Bond",
    "Greninja-Ash",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Vivillon",
    "Flabebe-Yellow-Flower",
    "Flabebe-Orange-Flower",
    "Flabebe-Blue-Flower",
    "Flabebe-White-Flower",
    "Floette-Yellow-Flower",
    "Floette-Orange-Flower",
    "Floette-Blue-Flower",
    "Floette-White-Flower",
    "Floette-Eternal-Flower",
    "Florges-Yellow-Flower",
    "Florges-Orange-Flower",
    "Florges-Blue-Flower",
    "Florges-White-Flower",
    "Furfrou-Heart-Trim",
    "Furfrou-Star-Trim",
    "Furfrou-Diamond-Trim",
    "Furfrou-Debutante-Trim",
    "Furfrou-Matron-Trim",
    "Furfrou-Dandy-Trim",
    "Furfrou-La-Reine-Trim",
    "Furfrou-Kabuki-Trim",
    "Furfrou-Pharaoh-Trim",
    "Meowstic-F",
    "Aegislash-Blade",
    "Pumpkaboo-Small",
    "Pumpkaboo-Large",
    "Pumpkaboo-Super",
    "Gourgeist-Small",
    "Gourgeist-Large",
    "Gourgeist-Super",
    "Xerneas-Active",
    "Zygarde-10-Aura-Break",
    "Zygarde-10-Power-Construct",
    "Zygarde-50-Power-Construct",
    "Zygarde-Complete",
    "Hoopa-Unbound",
    "Oricorio-Pom-Pom",
    "Oricorio-Pau",
    "Oricorio-Sensu",
    "Rockruff-Own-Tempo",
    "Lycanroc-Midnight",
    "Lycanroc-Dusk",
    "Wishiwashi-School",
    "Silvally-Fighting",
    "Silvally-Flying",
    "Silvally-Poison",
    "Silvally-Ground",
    "Silvally-Rock",
    "Silvally-Bug",
    "Silvally-Ghost",
    "Silvally-Steel",
    "Silvally-Fire",
    "Silvally-Water",
    "Silvally-Grass",
    "Silvally-Electric",
    "Silvally-Psychic",
    "Silvally-Ice",
    "Silvally-Dragon",
    "Silvally-Dark",
    "Silvally-Fairy",
    "Minior-Meteor-Orange",
    "Minior-Meteor-Yellow",
    "Minior-Meteor-Green",
    "Minior-Meteor-Blue",
    "Minior-Meteor-Indigo",
    "Minior-Meteor-Violet",
    "Minior-Core-Red",
    "Minior-Core-Orange",
    "Minior-Core-Yellow",
    "Minior-Core-Green",
    "Minior-Core-Blue",
    "Minior-Core-Indigo",
    "Minior-Core-Violet",
    "Mimikyu-Busted",
    "Necrozma-Dusk-Mane",
    "Necrozma-Dawn-Wings",
    "Necrozma-Ultra",
    "Magearna-Original-Color",
    "Cramorant-Gulping",
    "Cramorant-Gorging",
    "Toxtricity",
    "Sinistea-Antique",
    "Polteageist-Antique",
    "Alcremie-Strawberry-Ruby-Cream",
    "Alcremie-Strawberry-Matcha-Cream",
    "Alcremie-Strawberry-Mint-Cream",
    "Alcremie-Strawberry-Lemon-Cream",
    "Alcremie-Strawberry-Salted-Cream",
    "Alcremie-Strawberry-Ruby-Swirl",
    "Alcremie-Strawberry-Caramel-Swirl",
    "Alcremie-Strawberry-Rainbow-Swirl",
    "Eiscue-Noice-Face",
    "Indeedee-Female",
    "Morpeko-Hangry",
    "Zacian-Crowned-Sword",
    "Zamazenta-Crowned-Shield",
    "Eternatus-Eternamax",
    "Urshifu-Rapid-Strike-Style",
    "Zarude-Dada",
    "Calyrex-Ice-Rider",
    "Calyrex-Shadow-Rider",
    "Basculegion-F",
    "Alcremie-Berry-Vanilla-Cream",
    "Alcremie-Berry-Ruby-Cream",
    "Alcremie-Berry-Matcha-Cream",
    "Alcremie-Berry-Mint-Cream",
    "Alcremie-Berry-Lemon-Cream",
    "Alcremie-Berry-Salted-Cream",
    "Alcremie-Berry-Ruby-Swirl",
    "Alcremie-Berry-Caramel-Swirl",
    "Alcremie-Berry-Rainbow-Swirl",
    "Alcremie-Love-Vanilla-Cream",
    "Alcremie-Love-Ruby-Cream",
    "Alcremie-Love-Matcha-Cream",
    "Alcremie-Love-Mint-Cream",
    "Alcremie-Love-Lemon-Cream",
    "Alcremie-Love-Salted-Cream",
    "Alcremie-Love-Ruby-Swirl",
    "Alcremie-Love-Caramel-Swirl",
    "Alcremie-Love-Rainbow-Swirl",
    "Alcremie-Star-Vanilla-Cream",
    "Alcremie-Star-Ruby-Cream",
    "Alcremie-Star-Matcha-Cream",
    "Alcremie-Star-Mint-Cream",
    "Alcremie-Star-Lemon-Cream",
    "Alcremie-Star-Salted-Cream",
    "Alcremie-Star-Ruby-Swirl",
    "Alcremie-Star-Caramel-Swirl",
    "Alcremie-Star-Rainbow-Swirl",
    "Alcremie-Clover-Vanilla-Cream",
    "Alcremie-Clover-Ruby-Cream",
    "Alcremie-Clover-Matcha-Cream",
    "Alcremie-Clover-Mint-Cream",
    "Alcremie-Clover-Lemon-Cream",
    "Alcremie-Clover-Salted-Cream",
    "Alcremie-Clover-Ruby-Swirl",
    "Alcremie-Clover-Caramel-Swirl",
    "Alcremie-Clover-Rainbow-Swirl",
    "Alcremie-Flower-Vanilla-Cream",
    "Alcremie-Flower-Ruby-Cream",
    "Alcremie-Flower-Matcha-Cream",
    "Alcremie-Flower-Mint-Cream",
    "Alcremie-Flower-Lemon-Cream",
    "Alcremie-Flower-Salted-Cream",
    "Alcremie-Flower-Ruby-Swirl",
    "Alcremie-Flower-Caramel-Swirl",
    "Alcremie-Flower-Rainbow-Swirl",
    "Alcremie-Ribbon-Vanilla-Cream",
    "Alcremie-Ribbon-Ruby-Cream",
    "Alcremie-Ribbon-Matcha-Cream",
    "Alcremie-Ribbon-Mint-Cream",
    "Alcremie-Ribbon-Lemon-Cream",
    "Alcremie-Ribbon-Salted-Cream",
    "Alcremie-Ribbon-Ruby-Swirl",
    "Alcremie-Ribbon-Caramel-Swirl",
    "Alcremie-Ribbon-Rainbow-Swirl",
    "Sprigatito",
    "Floragato",
    "Meowscarada",
    "Fuecoco",
    "Crocalor",
    "Skeledirge",
    "Quaxly",
    "Quaxwell",
    "Quaquaval",
    "Lechonk",
    "Oinkologne",
    "Oinkologne-F",
    "Tarountula",
    "Spidops",
    "Nymble",
    "Lokix",
    "Pawmi",
    "Pawmo",
    "Pawmot",
    "Tandemaus",
    "Maushold-Family-Of-Three",
    "Maushold-Family-Of-Four",
    "Fidough",
    "Dachsbun",
    "Smoliv",
    "Dolliv",
    "Arboliva",
    "Squawkabilly-Green-Plumage",
    "Squawkabilly-Blue-Plumage",
    "Squawkabilly-Yellow-Plumage",
    "Squawkabilly-White-Plumage",
    "Nacli",
    "Naclstack",
    "Garganacl",
    "Charcadet",
    "Armarouge",
    "Ceruledge",
    "Tadbulb",
    "Bellibolt",
    "Wattrel",
    "Kilowattrel",
    "Maschiff",
    "Mabosstiff",
    "Shroodle",
    "Grafaiai",
    "Bramblin",
    "Brambleghast",
    "Toedscool",
    "Toedscruel",
    "Klawf",
    "Capsakid",
    "Scovillain",
    "Rellor",
    "Rabsca",
    "Flittle",
    "Espathra",
    "Tinkatink",
    "Tinkatuff",
    "Tinkaton",
    "Wiglett",
    "Wugtrio",
    "Bombirdier",
    "Finizen",
    "Palafin-Zero",
    "Palafin-Hero",
    "Varoom",
    "Revavroom",
    "Cyclizar",
    "Orthworm",
    "Glimmet",
    "Glimmora",
    "Greavard",
    "Houndstone",
    "Flamigo",
    "Cetoddle",
    "Cetitan",
    "Veluza",
    "Dondozo",
    "Tatsugiri",
    "Tatsugiri",
    "Tatsugiri",
    "Annihilape",
    "Clodsire",
    "Farigiraf",
    "Dudunsparce",
    "Dudunsparce",
    "Kingambit",
    "Great Tusk",
    "Scream Tail",
    "Brute Bonnet",
    "Flutter Mane",
    "Slither Wing",
    "Sandy Shocks",
    "Iron Treads",
    "Iron Bundle",
    "Iron Hands",
    "Iron Jugulis",
    "Iron Moth",
    "Iron Thorns",
    "Frigibax",
    "Arctibax",
    "Baxcalibur",
    "Gimmighoul-Chest",
    "Gimmighoul-Roaming",
    "Gholdengo",
    "Wo-Chien",
    "Chien-Pao",
    "Ting-Lu",
    "Chi-Yu",
    "Roaring Moon",
    "Iron Valiant",
    "Koraidon",
    "Miraidon",
    "Tauros-Paldea-Combat",
    "Tauros-Paldea-Blaze",
    "Tauros-Paldea-Aqua",
    "Wooper-Paldea",
    "Walking Wake",
    "Iron Leaves",
    "Dipplin",
    "Poltchageist",
    "Poltchageist",
    "Sinistcha",
    "Sinistcha",
    "Okidogi",
    "Munkidori",
    "Fezandipiti",
    "Ogerpon",
    "Ogerpon-Wellspring",
    "Ogerpon-Hearthflame",
    "Ogerpon-Cornerstone",
    "Ogerpon-Teal-Mask-Tera",
    "Ogerpon-Wellspring-Mask-Tera",
    "Ogerpon-Hearthflame-Mask-Tera",
    "Ogerpon-Cornerstone-Mask-Tera",
    "Ursaluna-Bloodmoon",
    "Archaludon",
    "Hydrapple",
    "Gouging Fire",
    "Raging Bolt",
    "Iron Boulder",
    "Iron Crown",
    "Terapagos-Normal",
    "Terapagos-Terastal",
    "Terapagos-Stellar",
    "Pecharunt"
}

dexNumber = {
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
    11,
    12,
    13,
    14,
    15,
    16,
    17,
    18,
    19,
    20,
    21,
    22,
    23,
    24,
    25,
    26,
    27,
    28,
    29,
    30,
    31,
    22,
    33,
    34,
    35,
    36,
    37,
    38,
    39,
    40,
    41,
    42,
    43,
    44,
    45,
    46,
    47,
    48,
    49,
    50,
    51,
    52,
    53,
    54,
    55,
    56,
    57,
    58,
    59,
    60,
    61,
    62,
    63,
    64,
    65,
    66,
    67,
    68,
    69,
    70,
    71,
    72,
    73,
    74,
    75,
    76,
    77,
    78,
    79,
    80,
    81,
    82,
    83,
    84,
    85,
    86,
    87,
    88,
    89,
    90,
    91,
    92,
    93,
    94,
    95,
    96,
    97,
    98,
    99,
    100,
    101,
    102,
    103,
    104,
    105,
    106,
    107,
    108,
    109,
    110,
    111,
    112,
    113,
    114,
    115,
    116,
    117,
    118,
    119,
    120,
    121,
    122,
    123,
    124,
    125,
    126,
    127,
    128,
    129,
    130,
    131,
    132,
    133,
    134,
    135,
    136,
    137,
    138,
    139,
    140,
    141,
    142,
    143,
    144,
    145,
    146,
    147,
    148,
    149,
    150,
    151,
    152,
    153,
    154,
    155,
    156,
    157,
    158,
    159,
    160,
    161,
    162,
    163,
    164,
    165,
    166,
    167,
    168,
    169,
    170,
    171,
    172,
    173,
    174,
    175,
    176,
    177,
    178,
    179,
    180,
    181,
    182,
    183,
    184,
    185,
    186,
    187,
    188,
    189,
    190,
    191,
    192,
    193,
    194,
    195,
    196,
    197,
    198,
    199,
    200,
    201,
    202,
    203,
    204,
    205,
    206,
    207,
    208,
    209,
    210,
    211,
    212,
    213,
    214,
    215,
    216,
    217,
    218,
    219,
    220,
    221,
    222,
    223,
    224,
    225,
    226,
    227,
    228,
    229,
    230,
    231,
    232,
    233,
    234,
    235,
    236,
    237,
    238,
    239,
    240,
    241,
    242,
    243,
    244,
    245,
    246,
    247,
    248,
    249,
    250,
    251,
    252,
    253,
    254,
    255,
    256,
    257,
    258,
    259,
    260,
    261,
    262,
    263,
    264,
    265,
    266,
    267,
    268,
    269,
    270,
    271,
    272,
    273,
    274,
    275,
    276,
    277,
    278,
    279,
    280,
    281,
    282,
    283,
    284,
    285,
    286,
    287,
    288,
    289,
    290,
    291,
    292,
    293,
    294,
    295,
    296,
    297,
    298,
    299,
    300,
    301,
    302,
    303,
    304,
    305,
    306,
    307,
    308,
    309,
    310,
    311,
    312,
    313,
    314,
    315,
    316,
    317,
    318,
    319,
    320,
    321,
    322,
    323,
    324,
    325,
    326,
    327,
    328,
    329,
    330,
    331,
    332,
    333,
    334,
    335,
    336,
    337,
    338,
    339,
    340,
    341,
    342,
    343,
    344,
    345,
    346,
    347,
    348,
    349,
    350,
    351,
    352,
    353,
    354,
    355,
    356,
    357,
    358,
    359,
    360,
    361,
    362,
    363,
    364,
    365,
    366,
    367,
    368,
    369,
    370,
    371,
    372,
    373,
    374,
    375,
    376,
    377,
    378,
    379,
    380,
    381,
    382,
    383,
    384,
    385,
    386,
    387,
    388,
    389,
    390,
    391,
    392,
    393,
    394,
    395,
    396,
    397,
    398,
    399,
    400,
    401,
    402,
    403,
    404,
    405,
    406,
    407,
    408,
    409,
    410,
    411,
    412,
    413,
    414,
    415,
    416,
    417,
    418,
    419,
    420,
    421,
    422,
    423,
    424,
    425,
    426,
    427,
    428,
    429,
    430,
    431,
    432,
    433,
    434,
    435,
    436,
    437,
    438,
    439,
    440,
    441,
    442,
    443,
    444,
    445,
    446,
    447,
    448,
    449,
    450,
    451,
    452,
    453,
    454,
    455,
    456,
    457,
    458,
    459,
    460,
    461,
    462,
    463,
    464,
    465,
    466,
    467,
    468,
    469,
    470,
    471,
    472,
    473,
    137,
    475,
    476,
    477,
    478,
    479,
    480,
    481,
    482,
    483,
    484,
    485,
    486,
    487,
    488,
    489,
    490,
    491,
    492,
    493,
    494,
    495,
    496,
    497,
    498,
    499,
    500,
    501,
    502,
    503,
    504,
    505,
    506,
    507,
    508,
    509,
    510,
    511,
    512,
    513,
    514,
    515,
    516,
    517,
    518,
    519,
    520,
    521,
    522,
    523,
    524,
    525,
    526,
    527,
    528,
    529,
    530,
    531,
    532,
    533,
    534,
    535,
    536,
    537,
    538,
    539,
    540,
    541,
    542,
    543,
    544,
    545,
    546,
    547,
    548,
    549,
    550,
    551,
    552,
    553,
    554,
    555,
    556,
    557,
    558,
    559,
    560,
    561,
    562,
    563,
    564,
    565,
    566,
    567,
    568,
    569,
    570,
    571,
    572,
    573,
    574,
    575,
    576,
    577,
    578,
    579,
    580,
    581,
    582,
    583,
    584,
    585,
    586,
    587,
    588,
    589,
    590,
    591,
    592,
    593,
    594,
    595,
    596,
    597,
    598,
    599,
    600,
    601,
    602,
    603,
    604,
    605,
    606,
    607,
    608,
    609,
    610,
    611,
    612,
    613,
    614,
    615,
    616,
    617,
    618,
    619,
    620,
    621,
    622,
    623,
    624,
    625,
    626,
    627,
    628,
    629,
    630,
    631,
    632,
    633,
    634,
    635,
    636,
    637,
    638,
    639,
    640,
    641,
    642,
    643,
    644,
    645,
    646,
    647,
    648,
    649,
    650,
    651,
    652,
    653,
    654,
    655,
    656,
    657,
    658,
    659,
    660,
    661,
    662,
    663,
    664,
    665,
    666,
    667,
    668,
    669,
    670,
    671,
    672,
    673,
    674,
    675,
    676,
    677,
    678,
    679,
    680,
    681,
    682,
    683,
    684,
    685,
    686,
    687,
    688,
    689,
    690,
    691,
    692,
    693,
    694,
    695,
    696,
    697,
    698,
    699,
    700,
    701,
    702,
    703,
    704,
    705,
    706,
    707,
    708,
    709,
    710,
    711,
    712,
    713,
    714,
    715,
    716,
    717,
    718,
    719,
    720,
    721,
    722,
    723,
    724,
    725,
    726,
    727,
    728,
    729,
    730,
    731,
    732,
    733,
    734,
    735,
    736,
    737,
    738,
    739,
    740,
    741,
    742,
    743,
    744,
    745,
    746,
    747,
    748,
    749,
    750,
    751,
    752,
    753,
    754,
    755,
    756,
    757,
    758,
    759,
    760,
    761,
    762,
    763,
    764,
    765,
    766,
    767,
    768,
    769,
    770,
    771,
    772,
    773,
    774,
    775,
    776,
    777,
    778,
    779,
    780,
    781,
    782,
    783,
    784,
    785,
    786,
    787,
    788,
    789,
    790,
    791,
    792,
    793,
    794,
    795,
    796,
    797,
    798,
    799,
    800,
    801,
    802,
    803,
    804,
    805,
    806,
    807,
    808,
    809,
    810,
    811,
    812,
    813,
    814,
    815,
    816,
    817,
    818,
    819,
    820,
    821,
    822,
    823,
    824,
    825,
    826,
    827,
    828,
    829,
    830,
    831,
    832,
    833,
    834,
    835,
    836,
    837,
    838,
    839,
    840,
    841,
    842,
    843,
    844,
    845,
    846,
    847,
    848,
    849,
    850,
    851,
    852,
    853,
    854,
    855,
    856,
    857,
    858,
    859,
    860,
    861,
    862,
    863,
    864,
    865,
    866,
    867,
    868,
    869,
    870,
    871,
    872,
    873,
    874,
    875,
    876,
    877,
    878,
    879,
    880,
    881,
    882,
    883,
    884,
    885,
    886,
    887,
    888,
    889,
    890,
    891,
    892,
    893,
    894,
    895,
    896,
    897,
    898,
    899,
    900,
    901,
    902,
    903,
    904,
    905,
    3,
    6,
    6,
    9,
    15,
    18,
    65,
    80,
    94,
    115,
    127,
    130,
    142,
    150,
    150,
    181,
    208,
    212,
    214,
    229,
    248,
    254,
    257,
    260,
    282,
    302,
    303,
    306,
    308,
    310,
    319,
    323,
    334,
    354,
    359,
    362,
    373,
    376,
    380,
    381,
    428,
    445,
    448,
    460,
    475,
    531,
    719,
    384,
    382,
    383,
    19,
    20,
    26,
    27,
    28,
    37,
    38,
    50,
    51,
    52,
    53,
    74,
    75,
    76,
    88,
    89,
    103,
    105,
    52,
    77,
    78,
    79,
    80,
    83,
    110,
    122,
    144,
    145,
    146,
    199,
    222,
    263,
    264,
    554,
    555,
    562,
    618,
    58,
    59,
    100,
    101,
    157,
    211,
    215,
    503,
    549,
    570,
    571,
    628,
    705,
    706,
    713,
    724,
    25,
    25,
    25,
    25,
    25,
    25,
    25,
    25,
    25,
    25,
    25,
    25,
    25,
    25,
    172,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    201,
    351,
    351,
    351,
    386,
    386,
    386,
    412,
    412,
    413,
    413,
    421,
    422,
    423,
    479,
    479,
    479,
    479,
    479,
    483,
    484,
    487,
    492,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    493,
    550,
    550,
    555,
    555,
    585,
    585,
    585,
    586,
    586,
    586,
    641,
    642,
    645,
    905,
    646,
    646,
    647,
    648,
    649,
    649,
    649,
    649,
    658,
    658,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    666,
    669,
    669,
    669,
    669,
    670,
    670,
    670,
    670,
    670,
    671,
    671,
    671,
    671,
    676,
    676,
    676,
    676,
    676,
    676,
    676,
    676,
    676,
    678,
    681,
    710,
    710,
    710,
    711,
    711,
    711,
    716,
    718,
    718,
    718,
    718,
    720,
    741,
    741,
    741,
    744,
    745,
    745,
    746,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    773,
    774,
    774,
    774,
    774,
    774,
    774,
    774,
    774,
    774,
    774,
    774,
    774,
    774,
    778,
    800,
    800,
    800,
    801,
    845,
    845,
    849,
    854,
    855,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    875,
    876,
    877,
    888,
    889,
    890,
    892,
    893,
    898,
    898,
    902,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    869,
    906,
    907,
    908,
    909,
    910,
    911,
    912,
    913,
    914,
    915,
    916,
    916,
    917,
    918,
    919,
    920,
    921,
    922,
    923,
    924,
    925,
    925,
    926,
    927,
    928,
    929,
    930,
    931,
    931,
    931,
    931,
    932,
    933,
    934,
    935,
    936,
    937,
    938,
    939,
    940,
    941,
    942,
    943,
    944,
    945,
    946,
    947,
    948,
    949,
    950,
    951,
    952,
    953,
    954,
    955,
    956,
    957,
    958,
    959,
    960,
    961,
    962,
    963,
    964,
    964,
    965,
    966,
    967,
    968,
    969,
    970,
    971,
    972,
    973,
    974,
    975,
    976,
    977,
    978,
    978,
    978,
    979,
    980,
    981,
    982,
    982,
    983,
    984,
    985,
    986,
    987,
    988,
    989,
    990,
    991,
    992,
    993,
    994,
    995,
    996,
    997,
    998,
    999,
    999,
    1000,
    1001,
    1002,
    1003,
    1004,
    1005,
    1006,
    1007,
    1008,
    128,
    128,
    128,
    194,
    1009,
    1010,
    1011,
    1012,
    1012,
    1013,
    1013,
    1014,
    1015,
    1016,
    1017,
    1017,
    1017,
    1017,
    1017,
    1017,
    1017,
    1017,
    901,
    1018,
    1019,
    1020,
    1021,
    1022,
    1023,
    1024,
    1024,
    1024,
    1025
}

--End configOverlayPokemon

--Start configOverlayPokemon

pokeballType = {
    "poke-ball",
    "great-ball",
    "ultra-ball",
    "master-ball",
    "premier-ball",
    "heal-ball",
    "net-ball",
    "nest-ball",
    "dive-ball",
    "dusk-ball",
    "timer-ball",
    "quick-ball",
    "repeat-ball",
    "luxury-ball",
    "level-ball",
    "lure-ball",
    "moon-ball",
    "friend-ball",
    "love-ball",
    "fast-ball",
    "heavy-ball",
    "dream-ball",
    "safari-ball",
    "sport-ball",
    "park-ball",
    "beast-ball",
    "cherish-ball",
}

--End configOverlayPokemon

nature = {"Hardy","Lonely","Brave","Adamant","Naughty",
			"Bold","Docile","Relaxed","Impish","Lax",
			"Timid","Hasty","Serious","Jolly","Naive",
			"Modest","Mild","Quiet","Bashful","Rash",
			"Calm","Gentle","Sassy","Careful","Quirky"}

charmap = { [0]=
	" ", "À", "Á", "Â", "Ç", "È", "É", "Ê", "Ë", "Ì", "こ", "Î", "Ï", "Ò", "Ó", "Ô",
	"Œ", "Ù", "Ú", "Û", "Ñ", "ß", "à", "á", "ね", "ç", "è", "é", "ê", "ë", "ì", "ま",
	"î", "ï", "ò", "ó", "ô", "œ", "ù", "ú", "û", "ñ", "º", "ª", " ", "&", "+", "あ",
	"ぃ", "ぅ", "ぇ", "ぉ", "v", "=", "ょ", "が", "ぎ", "ぐ", "げ", "ご", "ざ", "じ", "ず", "ぜ",
	"ぞ", "だ", "ぢ", "づ", "で", "ど", "ば", "び", "ぶ", "べ", "ぼ", "ぱ", "ぴ", "ぷ", "ぺ", "ぽ",
	"っ", "¿", "¡", "P\u{200d}k", "M\u{200d}n", "P\u{200d}o", "K\u{200d}é", " ", " ", " ", "Í", "%", "(", ")", "セ", "ソ",
	"タ", "チ", "ツ", "テ", "ト", "ナ", "ニ", "ヌ", "â", "ノ", "ハ", "ヒ", "フ", "ヘ", "ホ", "í",
	"ミ", "ム", "メ", "モ", "ヤ", "ユ", "ヨ", "ラ", "リ", "⬆", "⬇", "⬅", "➡", "ヲ", "ン", "ァ",
	"ィ", "ゥ", "ェ", "ォ", "ャ", "ュ", "ョ", "ガ", "ギ", "グ", "ゲ", "ゴ", "ザ", "ジ", "ズ", "ゼ",
	"ゾ", "ダ", "ヂ", "ヅ", "デ", "ド", "バ", "ビ", "ブ", "ベ", "ボ", "パ", "ピ", "プ", "ペ", "ポ",
	"ッ", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "!", "?", ".", "-", "・",
	"…", "“", "”", "‘", "’", "♂", "♀", "$", ",", "×", "/", "A", "B", "C", "D", "E",
	"F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U",
	"V", "W", "X", "Y", "Z", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k",
	"l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "▶",
	":", "Ä", "Ö", "Ü", "ä", "ö", "ü", "⬆", "⬇", "⬅", " ", " ", " ", " ", " ", ""
}

levelCap = 0 -- Sets the level for all mons based on first party slot

function getCurve(n)
	return emu:read8(speciesInfo+(speciesStructSize*n)+21)
end
function slowCurve(n)
    return math.floor((5*(n^3))/4)
end
function fastCurve(n)
    return math.floor((4*(n^3))/5)
end
function medfastCurve(n)
    return n^3
end
function medslowCurve(n)
    return math.floor((6 * (n)^3) / 5) - (15 * (n)^2) + (100 * n) - 140
end
function erraticCurve(n)
    if (n<=50) then
        return math.floor(((100 - n)*n^3)/50)
    end
    if (n<=68) then
        return math.floor(((150 - n)*n^3)/100)
    end
    if (n<=98) then
        return math.floor(math.floor((1911 - 10 * n) / 3) * n^3 / 500)
    end
    return math.floor((160 - n) * n^3 / 100)
end
function flutuatingCurve(n)
	if (n<15) then
	  return math.floor((math.floor((n + 1) / 3) + 24) * n^3 / 50)
	end
	if (n<=36) then
		return math.floor((n + 14) * n^3 / 50)
	end
	return math.floor((math.floor(n / 2) + 32) * n^3 / 50)
end

function calcLevel(exp, species)
	level = 1
	while (exp>=expRequired(species, level+1)) do
		level=level+1
	end
	return level
end

function expRequired(species, level)
	expCurve = getCurve(species)
	if (expCurve == 0) then return medfastCurve(level) end
	if (expCurve == 1) then return erraticCurve(level) end
	if (expCurve == 2) then return flutuatingCurve(level) end
	if (expCurve == 3) then return medslowCurve(level) end
	if (expCurve == 4) then return fastCurve(level) end
	if (expCurve == 5) then return slowCurve(level) end
end

function toString(rawstring)
	local string = ""
	for _, char in ipairs({rawstring:byte(1, #rawstring)}) do
		if char == terminator then
			break
		end
		string = string..charmap[char]
	end
	return string
end

function _read16BE(emu, address)
	return (emu:read8(address) << 8) | emu:read8(address + 1)
end

function setBoxMon(address, newNature, IVs, moveSlot, moveName, level, species, abilityNum, heldItem)
    local mon = readBoxMon(address)

    local key = mon.otId ~ mon.personality
    local substructSelector = {
        [0] = {0, 1, 2, 3},
        [1] = {0, 1, 3, 2},
        [2] = {0, 2, 1, 3},
        [3] = {0, 3, 1, 2},
        [4] = {0, 2, 3, 1},
        [5] = {0, 3, 2, 1},
        [6] = {1, 0, 2, 3},
        [7] = {1, 0, 3, 2},
        [8] = {2, 0, 1, 3},
        [9] = {3, 0, 1, 2},
        [10] = {2, 0, 3, 1},
        [11] = {3, 0, 2, 1},
        [12] = {1, 2, 0, 3},
        [13] = {1, 3, 0, 2},
        [14] = {2, 1, 0, 3},
        [15] = {3, 1, 0, 2},
        [16] = {2, 3, 0, 1},
        [17] = {3, 2, 0, 1},
        [18] = {1, 2, 3, 0},
        [19] = {1, 3, 2, 0},
        [20] = {2, 1, 3, 0},
        [21] = {3, 1, 2, 0},
        [22] = {2, 3, 1, 0},
        [23] = {3, 2, 1, 0}
    }
    local pSel = substructSelector[mon.personality % 24]

    local ss0 = {}
    local ss1 = {}
    local ss2 = {}
    local ss3 = {}
    for i = 0, 2 do
        ss0[i] = emu:read32(address + 32 + pSel[1] * 12 + i * 4) ~ key
        ss1[i] = emu:read32(address + 32 + pSel[2] * 12 + i * 4) ~ key
        ss2[i] = emu:read32(address + 32 + pSel[3] * 12 + i * 4) ~ key
        ss3[i] = emu:read32(address + 32 + pSel[4] * 12 + i * 4) ~ key
    end

    -- set all IVs to 31
    if (IVs ~= nil) then
        ss3[1] = (ss3[1] & 0x00000000) | (IVs[1] << 0) | (IVs[2] << 5) |
                     (IVs[3] << 10) | (IVs[6] << 15) | (IVs[4] << 20) |
                     (IVs[5] << 25)
    end

--GRINT
    if (newNature ~= nil) then
        local natureIx = indexOf(nature, newNature)
        if (natureIx == nil) then
            console:log('Invalid nature')
            return
        end
        local diff = math.abs((mon.hiddenNature - (natureIx - 1)))
        local sign
        if mon.hiddenNature > (natureIx - 1) then
            sign = 1
        else
            sign = -1
        end
        if (diff > 25 / 2) then
            diff = 25 - diff
            sign = -sign
        end
        local newPersonality = (mon.personality - (diff * sign)) & 0xFFFFFFFF
        emu:write32(address, newPersonality)
        mon.personality = newPersonality
        key = mon.otId ~ mon.personality
        pSel = substructSelector[mon.personality % 24]
    end

    if (moveSlot ~= nil) then
        local moveIx = 0
        if (moveName ~= nil) then
            moveIx = indexOf(move, moveName) - 1
        end
        if (moveIx == nil) then
            console:log('Invalid move')
            return
        end
        if (moveSlot < 1 or moveSlot > 4) then
            console:log('Invalid move slot number')
            return
        end
        if moveSlot == 1 then
            ss1[0] = (ss1[0] & 0xFFFF0000) | moveIx
        elseif moveSlot == 2 then
            ss1[0] = (ss1[0] & 0x0000FFFF) | (moveIx << 16)
        elseif moveSlot == 3 then
            ss1[1] = (ss1[1] & 0xFFFF0000) | moveIx
        elseif moveSlot == 4 then
            ss1[1] = (ss1[1] & 0x0000FFFF) | (moveIx << 16)
        end
    end

    if (abilityNum ~= nil) then
        ss3[2] = (abilityNum << 29) | (ss3[2] & 0x03FFFFFF)
    end

    if (level ~= nil) then
        emu:write8(address + 84, level)
        ss0[1] = expRequired(mon.species, level)
    end

    if (species ~= nil) then
        local speciesIx = indexOf(mons, species)
        ss0[0] = (ss0[0] & 0xFFFF0000) | speciesIx
        ss0[1] = expRequired(speciesIx, calcLevel(mon.experience, speciesIx))
    end

    if (heldItem ~= nil) then
        local itemIx = indexOf(item, heldItem)
        ss0[0] = (ss0[0] & 0x0000FFFF) | (itemIx << 16)
    end

    -- fix checksum
    local checksum = 0
    for i = 0, 2 do
        checksum = checksum + (ss0[i] & 0xFFFF) + (ss0[i] >> 16)
        checksum = checksum + (ss1[i] & 0xFFFF) + (ss1[i] >> 16)
        checksum = checksum + (ss2[i] & 0xFFFF) + (ss2[i] >> 16)
        checksum = checksum + (ss3[i] & 0xFFFF) + (ss3[i] >> 16)
    end
    emu:write16(address + 28, checksum)

    for i = 0, 2 do
        emu:write32(address + 32 + pSel[1] * 12 + i * 4, ss0[i] ~ key)
        emu:write32(address + 32 + pSel[2] * 12 + i * 4, ss1[i] ~ key)
        emu:write32(address + 32 + pSel[3] * 12 + i * 4, ss2[i] ~ key)
        emu:write32(address + 32 + pSel[4] * 12 + i * 4, ss3[i] ~ key)
    end
end

function readBoxMon(address)
	local mon = {}
	mon.personality = emu:read32(address + 0)
	mon.otId = emu:read32(address + 4)
	mon.nickname = toString(emu:readRange(address + 8, monNameLength))
	mon.language = emu:read8(address + 15) & 0x07
	mon.hiddenNatureModifier = (emu:read8(address + 15) >> 3) & 0x1F
	mon.hiddenNature = (mon.personality % 25)

	local flags = emu:read8(address + 16)
	mon.isBadEgg = flags & 0x01
	mon.hasSpecies = (flags >> 1) & 0x01 
	mon.isEgg = (flags >> 2) & 0x01
	mon.blockBoxRS = (flags >> 3) & 0x01
	mon.daysSinceFormChange = (flags >> 4) & 0x07 
	mon.unused_13 = (flags >> 7) & 0x01 
	mon.otName = toString(emu:readRange(address + 17, playerNameLength))
	mon.markings = emu:read8(address + 27)
	mon.compressedStatus = (emu:read8(address + 27) >> 4) & 0x0F
	mon.checksum = emu:read16(address + 28)
	mon.hpLost = emu:read16(address + 30) & 0x3FFF
	mon.shinyModifier = (emu:read16(address + 31) >> 6) & 0x01
	mon.unused_1E = (emu:read16(address + 31) >> 7) & 0x01

	local key = mon.otId ~ mon.personality
	local substructSelector = {
		[ 0] = {0, 1, 2, 3},
		[ 1] = {0, 1, 3, 2},
		[ 2] = {0, 2, 1, 3},
		[ 3] = {0, 3, 1, 2},
		[ 4] = {0, 2, 3, 1},
		[ 5] = {0, 3, 2, 1},
		[ 6] = {1, 0, 2, 3},
		[ 7] = {1, 0, 3, 2},
		[ 8] = {2, 0, 1, 3},
		[ 9] = {3, 0, 1, 2},
		[10] = {2, 0, 3, 1},
		[11] = {3, 0, 2, 1},
		[12] = {1, 2, 0, 3},
		[13] = {1, 3, 0, 2},
		[14] = {2, 1, 0, 3},
		[15] = {3, 1, 0, 2},
		[16] = {2, 3, 0, 1},
		[17] = {3, 2, 0, 1},
		[18] = {1, 2, 3, 0},
		[19] = {1, 3, 2, 0},
		[20] = {2, 1, 3, 0},
		[21] = {3, 1, 2, 0},
		[22] = {2, 3, 1, 0},
		[23] = {3, 2, 1, 0},
	}

	local pSel = substructSelector[mon.personality % 24]
	local ss0 = {}
	local ss1 = {}
	local ss2 = {}
	local ss3 = {}

	for i = 0, 2 do
		ss0[i] = emu:read32(address + 32 + pSel[1] * 12 + i * 4) ~ key
		ss1[i] = emu:read32(address + 32 + pSel[2] * 12 + i * 4) ~ key
		ss2[i] = emu:read32(address + 32 + pSel[3] * 12 + i * 4) ~ key
		ss3[i] = emu:read32(address + 32 + pSel[4] * 12 + i * 4) ~ key
	end

	flags = ss0[0]
	mon.species = flags & 0x7FF
	mon.teraType = (flags >> 11) & 0x1F
	mon.heldItem = (flags >> 16) & 0x3FF
	mon.unused_02 = (flags >> 26) & 0x3F
	flags = ss0[1]
	mon.experience = flags & 0x1FFFFF
	mon.nickname11 = (flags >> 21) & 0xFF
	mon.unused_04 = (flags >> 29) & 0x07
	flags = ss0[2]
	mon.ppBonuses = flags & 0xFF
	mon.friendship = (flags >> 8) & 0xFF
	mon.pokeball = (flags >> 16) & 0x3F
	mon.nickname12 = (flags >> 24) & 0xFF
	mon.unused_0A = (flags >> 24) & 0x03

	mon.moves = {
		ss1[0] & 0x7FF,
		(ss1[0] >> 16) & 0x7FF,
		ss1[1] & 0x7FF,
		(ss1[1] >> 16) & 0x7FF
	}

	flags = ss1[0]
	mon.move1 = flags & 0x7FF
	mon.evolutionTracker0 = (flags >> 11) & 0x1F
	mon.move2 = (flags >> 16) & 0x7FF
	mon.evolutionTracker1 = (flags >> 27) & 0x1F
	flags = ss1[1]
	mon.move3 = flags & 0x7FF
	mon.unused_04 = (flags >> 11) & 0x1F
	mon.move4 = (flags >> 16) & 0x7FF
	mon.unused_06 = (flags >> 27) & 0x07
	mon.hyperTrainedHP = (flags >> 30) & 0x01
	mon.hyperTrainedAttack = (flags >> 31) & 0x01
	flags = ss1[2]
	mon.pp1 = flags & 0x7F
	mon.hyperTrainedDefense = (flags >> 7) & 0x01
	mon.pp2 = (flags >> 8) & 0x7F
	mon.hyperTrainedSpeed = (flags >> 15) & 0x01
	mon.pp3 = (flags >> 16) & 0x7F
	mon.hyperTrainedSpAttack = (flags >> 23) & 0x01
	mon.pp4 = (flags >> 24) & 0x7F
	mon.hyperTrainedSpDefense = (flags >> 31) & 0x01

	flags = ss2[0]
	mon.hpEV = flags & 0xFF
	mon.attackEV = (flags >> 8) & 0xFF
	mon.defenseEV = (flags >> 16) & 0xFF
	mon.speedEV = flags >> 24
	flags = ss2[1]
	mon.spAttackEV = flags & 0xFF
	mon.spDefenseEV = (flags >> 8) & 0xFF
	mon.cool = (flags >> 16) & 0xFF
	mon.beauty = flags >> 24
	flags = ss2[2]
	mon.cute = flags & 0xFF
	mon.smart = (flags >> 8) & 0xFF
	mon.tough = (flags >> 16) & 0xFF
	mon.sheen = flags >> 24

	flags = ss3[0]
	mon.pokerus = flags & 0xFF
	mon.metLocation = (flags >> 8) & 0xFF
	mon.metLevel = (flags >> 16) & 0x7F
	mon.metGame = (flags >> 23) & 0x0F
	mon.dynamaxLevel = (flags >> 27) & 0x0F
	mon.otGender = (flags >> 31) & 0x01
	flags = ss3[1]
	mon.hpIV = flags & 0x1F
	mon.attackIV = (flags >> 5) & 0x1F
	mon.defenseIV = (flags >> 10) & 0x1F
	mon.speedIV = (flags >> 15) & 0x1F
	mon.spAttackIV = (flags >> 20) & 0x1F
	mon.spDefenseIV = (flags >> 25) & 0x1F
	mon.isEgg2 = (flags >> 30) & 0x01 -- Bit 30 is another "isEgg" bit
	mon.gigantamaxFactor = (flags >> 31) & 0x01
	flags = ss3[2]
	mon.coolRibbon = flags & 0x07
	mon.beautyRibbon = (flags >> 3) & 0x07
	mon.cuteRibbon = (flags >> 6) & 0x07
	mon.smartRibbon = (flags >> 9) & 0x07
	mon.toughRibbon = (flags >> 12) & 0x07
	mon.championRibbon = (flags >> 15) & 0x01
	mon.winningRibbon = (flags >> 16) & 0x01
	mon.victoryRibbon = (flags >> 17) & 0x01
	mon.artistRibbon = (flags >> 18) & 0x01
	mon.effortRibbon = (flags >> 19) & 0x01
	mon.marineRibbon = (flags >> 20) & 0x01
	mon.landRibbon = (flags >> 21) & 0x01
	mon.skyRibbon = (flags >> 22) & 0x01
	mon.countryRibbon = (flags >> 23) & 0x01
	mon.nationalRibbon = (flags >> 24) & 0x01
	mon.earthRibbon = (flags >> 25) & 0x01
	mon.worldRibbon = (flags >> 26) & 0x01
	mon.isShadow = (flags >> 27) & 0x01
	mon.unused_0B = (flags >> 28) & 0x01
	mon.abilityNum = (flags >> 29) & 0x03
	mon.modernFatefulEncounter = (flags >> 31) & 0x01
	return mon
end

function readPartyMon(address)
	local mon = readBoxMon(address)
	mon.status = emu:read32(address + 80)
	mon.level = emu:read8(address + 84)
	-- if (levelCap == 0) then
	-- levelCap = mon.level
	-- end
	mon.mail = emu:read8(address + 85)
	mon.hp = emu:read16(address + 86)
	mon.maxHP = emu:read16(address + 88)
	mon.attack = emu:read16(address + 90)
	mon.defense = emu:read16(address + 92)
	mon.speed = emu:read16(address + 94)
	mon.spAttack = emu:read16(address + 96)
	mon.spDefense = emu:read16(address + 98)
	return mon
end

function getAbility(mon)
	current = abilities[emu:read16(speciesInfo+(speciesStructSize*mon.species)+24+(mon.abilityNum*2))]
    return current
end

function getItem(mon)
	return item[(mon.heldItem*10)]
end

function getNature(mon)
	if (mon.hiddenNature == 26) then
		return nature[(mon.personality % 25)+1]
	end
	return nature[mon.hiddenNature+1]
end

function getPartyPrint(mon)
	str = ""
	str = str .. mons[mon.species]
    if ((item[mon.heldItem]) and (item[mon.heldItem] ~= nil) and (item[mon.heldItem] ~= "")) then
        str = str .. string.format(" @ %s", item[mon.heldItem]) 
    end
    str = str .. string.format("\n")
	str = str .. "Ability: " .. string.format("%s", getAbility(mon)) .. string.format("\n")
	str = str .. string.format("Level: %d\n", mon.level)
	str = str .. string.format("%s", getNature(mon)) .. " Nature" .. string.format("\n")
	str = str .. string.format("IVs: %d HP / %d Atk / %d Def / %d SpA / %d SpD / %d Spe", mon.hpIV, mon.attackIV, mon.defenseIV, mon.spAttackIV, mon.spDefenseIV, mon.speedIV) .. string.format("\n")
	for i=1,4 do
		local mv = move[mon.moves[i]]
		if(mv == "Hidden Power") then
			str = str .. string.format("- Hidden Power %s\n", getHP(mon))
			else
			if(mv ~= "") and (mv ~= nil) then
				str = str .. string.format("- %s\n", mv)
			end
		end
	end
	str = str .. string.format("\n")
	return str
end

function getPCPrint(mon)
	str = ""
	str = str .. mons[mon.species]
    if ((item[mon.heldItem]) and (item[mon.heldItem] ~= nil) and (item[mon.heldItem] ~= "")) then
        str = str .. string.format(" @ %s", item[mon.heldItem]) 
    end
    str = str .. string.format("\n")
	str = str .. "Ability: " .. string.format("%s", getAbility(mon)) .. string.format("\n")
	-- str = str .. string.format("Level: %d\n", levelCap)
	str = str .. string.format("Level: %d\n", calcLevel(mon.experience, mon.species))
	str = str .. string.format("%s", getNature(mon)) .. " Nature" .. string.format("\n")
	str = str .. string.format("IVs: %d HP / %d Atk / %d Def / %d SpA / %d SpD / %d Spe", mon.hpIV, mon.attackIV, mon.defenseIV, mon.spAttackIV, mon.spDefenseIV, mon.speedIV) .. string.format("\n")
	for i=1,4 do
		local mv = move[mon.moves[i]]
		if(mv == "Hidden Power") then
			str = str .. string.format("- Hidden Power %s\n", getHP(mon))
			else
			if(mv ~= "") and (mv ~= nil) then
				str = str .. string.format("- %s\n", mv)
			end
		end
	end
	str = str .. string.format("\n")
	return str
end

function printPartyStatus(buffer)
    address = storageLoc + 4
    i = 0
	buffer:clear()
	for _, mon in ipairs(getParty()) do
		if (mon.species ~= 0) then
			buffer:print(getPartyPrint(mon))
		end
	end
    while i<120 do
		if (emu:read32(address) ~=0) then
			buffer:print(getPCPrint(readBoxMon(address)))
		end
		i = i+1
		address = address + boxMonSize
	end
end

function getParty()
	local party = {}
	local monStart = partyloc
	for i = 1, emu:read8(partyCount) do
		party[i] = readPartyMon(monStart)
		monStart = monStart + partyMonSize
	end
	return party, monStart
end

function getHP(mon)
    hptype = ((mon.hpIV % 2 + (2 * (mon.attackIV % 2)) +
                 (4 * (mon.defenseIV % 2)) + (8 * (mon.speedIV % 2)) +
                 (16 * (mon.spAttackIV % 2)) + (32 * (mon.spDefenseIV % 2))) * 5) /
                 21
    hptype = math.floor(hptype)
    if (hptype == 0) then return "Fighting" end
    if (hptype == 1) then return "Flying" end
    if (hptype == 2) then return "Poison" end
    if (hptype == 3) then return "Ground" end
    if (hptype == 4) then return "Rock" end
    if (hptype == 5) then return "Bug" end
    if (hptype == 6) then return "Ghost" end
    if (hptype == 7) then return "Steel" end
    if (hptype == 8) then return "Fire" end
    if (hptype == 9) then return "Water" end
    if (hptype == 10) then return "Grass" end
    if (hptype == 11) then return "Electric" end
    if (hptype == 12) then return "Psychic" end
    if (hptype == 13) then return "Ice" end
    if (hptype == 14) then return "Dragon" end
    if (hptype == 15) then return "Dark" end
end

function getHiddens(buffer)
    address = storageLoc + 4
    i = 0
    buffer:clear()
    for _, mon in ipairs(getParty()) do
        if (mon.species ~= 0) then
            buffer:print(string.format("%s - %s\n", mons[mon.species],
                                       getHP(mon)))
        end
    end
    while i < 120 do
        if (emu:read32(address) ~= 0) then
            buffer:print(string.format("%s - %s\n",
                                       mons[readBoxMon(address).species],
                                       getHP(readBoxMon(address))))
        end
        i = i + 1
        address = address + boxMonSize
    end
end

function hiddens()
    if not hiddenBuffer then
        console:log("error")
        return
    end
    getHiddens(hiddenBuffer)
end

function startScript()
	console:log('To update your exports type \'export()\'')
	console:log('To update your hidden powers type \'hiddens()\'')
    --Start configOverlayPokemon

    console:log('To enable your connection for obspokemonoverlay type \'overlayEnable()\', and to disable the connection type \'overlayDisable()\'')
    console:log('If manually updating your obspokemonoverlay-master/team.json file, type \'overlayBuffer()\', which will print to the \'Overlay Export\' window')
    console:log('For more on obspokemonoverlay please review the guidance within this lua script')
    callbacks:add("frame", update)

    --End configOverlayPokemon

    --Start configPokemonEditing

	console:log('To perfect a mon: \'perfect(slotNum, \"Nature\")\'')
	console:log('To set a move: \'setMove(slotNum, moveSlotNum, \"MoveName\")\'')
	console:log('To set a nature: \'setNature(slotNum, \"Nature\")\'')
	console:log('To set nature and IVs: \'setNatureAndIVs(slotNum, \"Nature\", {hp, atk, def, spa, spd, spe})\'')
	console:log('To set the level of a mon: \'setLevel(slotNum, level)\'')
	console:log('To set a species: \'setSpecies(slotNum, \"Species\")\'')
	console:log('To set an ability: \'setAbility(slotNum, abilityNum)\'')
	console:log('To set a held item: \'setItem(slotNum, \"Item\")\'')
	console:log('\nFor the commands that update a mon\'s stats, you have to put the mon in and out of the box or level it up for the stat changes to properly take effect')
    
    --End configPokemonEditing

    --Start configPreDamage

	console:log('To pre-damage: \'predamage(slotNum, desiredHP)\'')

    --End configPreDamage

    --Start configPreStatus

	console:log('To pre-poison: \'prepoison(slotNum)\' [also: presleep/preburn/prefreeze/prepara/pretoxic/prefrostbite]')

    --End configPreStatus

    -- Generate tables
    getMoveTable()
    --getMonsTable()
    getAbilityTable()
    getMetLocationsTable()
    getItemTable()

	if not partyBuffer then
		partyBuffer = console:createBuffer("Showdown Export")
		partyBuffer:setSize(200,1000)
		export()
	end
    if not hiddenBuffer then
        hiddenBuffer = console:createBuffer("Hidden Powers")
        hiddenBuffer:setSize(200, 200)
        hiddens()
    end
    if not helpBuffer then
        helpBuffer = console:createBuffer("Help Text")
        helpBuffer:print('To update your exports type \'export()\'\n')
        helpBuffer:print('To update your hidden powers type \'hiddens()\'\n')

    --Start configOverlayPokemon

        helpBuffer:print('To enable your connection for obspokemonoverlay type \'overlayEnable()\', and to disable the connection type \'overlayDisable()\'\n')
        helpBuffer:print('If manually updating your obspokemonoverlay-master/team.json file, type \'overlayBuffer()\', which will print to the \'Overlay Export\' window\n')
        helpBuffer:print('For more on obspokemonoverlay please review the guidance within this lua script\n')

    --End configOverlayPokemon

    --Start configPokemonEditing

        helpBuffer:print('To perfect a mon: \'perfect(slotNum, \"Nature\")\'\n')
        helpBuffer:print('To set a move: \'setMove(slotNum, moveSlotNum, \"MoveName\")\'\n')
        helpBuffer:print('To set a nature: \'setNature(slotNum, \"Nature\")\'')
        helpBuffer:print('To set nature and IVs: \'setNatureAndIVs(slotNum, \"Nature\", {hp, atk, def, spa, spd, spe})\'\n')
        helpBuffer:print('To set the level of a mon: \'setLevel(slotNum, level)\'\n')
        helpBuffer:print('To set a species: \'setSpecies(slotNum, \"Species\")\'\n')
        helpBuffer:print('To set an ability: \'setAbility(slotNum, abilityNum)\'\n')
        helpBuffer:print('To set a held item: \'setItem(slotNum, \"Item\")\'\n')
        helpBuffer:print('\nFor the commands that update a mon\'s stats, you have to put the mon in and out of the box or level it up for the stat changes to properly take effect\n')
    
    --End configPokemonEditing

    --Start configPreDamage

        helpBuffer:print('To pre-damage: \'predamage(slotNum, desiredHP)\'\n')

    --End configPreDamage

    --Start configPreStatus

        helpBuffer:print('To pre-poison: \'prepoison(slotNum)\' [also: presleep/preburn/prefreeze/prepara/pretoxic/prefrostbite]\n')
    
    --End configPreStatus


    end
end

function update()

--Start configOverlayPokemon

    if overlayConfig.enabled then
        if not overlayConfig.processParty and not overlayConfig.processBoxes then
            console:log("ERROR: overlayConfig.processParty and overlayConfig.processBoxes are both currently false.")
            return
        end

        -- Increment the frame counter for party/box checks
        overlayConfig.frameCounter = (overlayConfig.frameCounter + 1)

        -- Only check every X frames to avoid performance issues
        if overlayConfig.frameCounter >= overlayConfig.checkInterval then
            overlayConfig.frameCounter = 0
            overlay()
        end
    end

--End configOverlayPokemon

--Start configCompanion

    if companionConfig.enabled then
        if not companionConfig.processParty and not companionConfig.processBoxes then
            console:log("ERROR: companionConfig.processParty and companionConfig.processBoxes are both currently false.")
            return
        end

        -- Increment the frame counter for party/box checks
        companionConfig.frameCounter = (companionConfig.frameCounter + 1)

        -- Only check every X frames to avoid performance issues
        if companionConfig.frameCounter >= companionConfig.checkInterval then
            companionConfig.frameCounter = 0
            companion()
        end
    end

--End configCompanion

end

--Start configOverlayPokemon

-- START OF OBSPOKEMONHUD FUNCTIONS
-- obspokemonhud by ThomasHineXYZ
-- Updated for gen9 with static and animated Showdown sprites by grintoul (https://www.twitch.tv/grintoul)
-- Lua functions written by grintoul 

-- The below "overlay" functions are for streamers using "obspokemonhud" to get Pokémon sprites on an OBS overlay
-- For users manually updating their team.json file, use of "overlayBuffer()" will print the json contents
-- to the "Overlay Export" buffer. For users that have copied the obspokemonhud-master to the folder 
-- that their mGBA.exe is located, "overlayEnable()" will enable automated writing to the
-- "obspokemonhud-master/team.json" file directly. "overlayDisable()" will switch this back off.

-- NOTE: this assumes your json is called "team.json" and is in the "obspokemonhud-master" folder, which
-- in located the same folder as mGBA.exe. If your json is located elsewhere then the "io.open" function
-- in "overlay()" will need to be edited.

-- For information on obspokemonhud installation, please visit "https://github.com/ThomasHineXYZ/obspokemonhud"


function overlayEnable()
    if not overlayBufferWindow then
        overlayBufferWindow = console:createBuffer("Overlay Export")
        overlayBufferWindow:setSize(200,1000)
    end
    if not overlayConfig.processParty and not overlayConfig.processBoxes then
        console:log("ERROR: overlayConfig.processParty and overlayConfig.processBoxes are both currently false.")
        return
    end
    if overlayConfig.enabled == false then
        overlayConfig.enabled = true
        console:log("obspokemonhud-master/team.json writing enabled.")
    else
        console:log("ERROR: obspokemonhud-master/team.json already enabled.")
    end
end

function overlayDisable()
    if overlayConfig.enabled == true then
        overlayConfig.enabled = false
        console:log("obspokemonhud-master/team.json writing disabled.")
    else
        console:log("ERROR: obspokemonhud-master/team.json writing not currently enabled.")
    end
end

function overlay()
    if overlayConfig.enabled == false then
		console:log("ERROR: please run overlayEnable() first.")
		return
    end

    str = ""
    if overlayConfig.processParty then
        str = str .. getPartyOverlay()
    end
    if overlayConfig.processBoxes then
        str = str .. overlayBoxes()
    end
    local file = io.open("obspokemonhud-master/team.json", "w")
    io.output(file)
    overlayBufferWindow:clear()
    overlayBufferWindow:print(str)
    io.write(str)
    io.close(file)
end

function overlayParty()
	if overlayConfig.enabled == false then
		console:log("ERROR: please run overlayEnable() first.")
		return
    end
    str = str .. getPartyOverlay()
end

function overlayBuffer()
    if not overlayBufferWindow then
        overlayBufferWindow = console:createBuffer("Overlay Export")
        overlayBufferWindow:setSize(200,1000)
    end
    if not overlayConfig.processParty and not overlayConfig.processBoxes then
        console:log("ERROR: overlayConfig.processParty and overlayConfig.processBoxes are both currently false.")
        return
    end
    str = ""
    str = str .. printPartyOverlay(overlayBufferWindow)
    overlayBufferWindow:clear()
    overlayBufferWindow:print(str)
end

function getPartyOverlay()
	local party = {}
	local monStart = partyloc
    mon = ""
    variant = ""
    str = str .. "{\n"
	for i = 1, emu:read8(partyCount) do
        str = str .. "      \"slot" 
        str = str .. tostring(i) 
        str = str .. "\": {\n"
		party[i] = readBoxMon(monStart)
        str = str .. "          \"dexnumber\": " 
        if string.find(mons[party[i].species],"-") then
            if not string.find(mons[party[i].species],"Nidoran") then
                sep = string.find(mons[party[i].species],"-")
                str = str .. dexNumber[party[i].species]
                str = str .. ",\n"
                str = str .. "          \"form\": \""
                mon = mons[party[i].species]
                variant = string.sub(mon, sep + 1, 100)
                variant = string.gsub(variant, "%-", "")
                str = str .. string.lower(variant)
                str = str .. "\",\n"
            else
                str = str .. party[i].species
            end
        else
            str = str .. party[i].species
            str = str .. ",\n"
            str = str .. "          \"form\": \"standard\""
            str = str .. ",\n"
        end
        str = str .. "          \"pokeball\": \"" --	str = str .. mons[mon.species]
        str = str .. tostring(pokeballType[party[i].pokeball])
        str = str .."\",\n"
        str = str .. "          \"shiny\": false\n"
        if (readPartyMon(monStart + partyMonSize).species ~= 0) or overlayConfig.processBoxes then
            str = str .. "      },\n"
        else
            str = str .. "      }\n"
        end
		monStart = monStart + partyMonSize
	end
    str = str .. "}\n"
	return str
end

-- END OF OBSPOKEMONHUD FUNCTIONS

--End configOverlayPokemon

function companionEnable()
    if not companionBufferWindow then
        companionBufferWindow = console:createBuffer("Companion Export")
        companionBufferWindow:setSize(200,1000)
    end
    if not companionConfig.processParty and not companionConfig.processBoxes then
        console:log("ERROR: companionConfig.processParty and companionConfig.processBoxes are both currently false.")
        return
    end
    if companionConfig.enabled == false then
        companionConfig.enabled = true
        console:log("companion.json writing enabled.")
    else
        console:log("ERROR: companion.json already enabled.")
    end
end

function companionDisable()
    if companionConfig.enabled == true then
        companionConfig.enabled = false
        console:log("companion.json writing disabled.")
    else
        console:log("ERROR: companion.json writing not currently enabled.")
    end
end

function companion()
    if companionConfig.enabled == false then
		console:log("ERROR: please run companionEnable() first.")
		return
    end

    str = "{\n"
    if companionConfig.processParty then
        str = getPartyCompanion()
    end
    if companionConfig.processBoxes then
        str = getBoxCompanion()
    end
    str = str .. "}"
    local file = io.open("companion.json", "w"):close()
    file = io.open("companion.json", "w")
    io.output(file)
    companionBufferWindow:clear()
    companionBufferWindow:print(str)
    io.write(str)
    io.close(file)
end

function getPartyCompanion()
	local party = {}
	local monStart = partyloc
    mon = ""
    variant = ""
    str = str .. "  \"party\": [\n"
	for i = 1, emu:read8(partyCount) do
		party[i] = readBoxMon(monStart)
        str = str .. "      {\n"
        str = str .. "          \"dexnumber\": " 

        -- EE defines different forms as different species which don't always match the dex number. 
        -- This if block cleanses forms back to dex number and adds the form on a separate line.
        if string.find(mons[party[i].species],"Nidoran") then
            -- Dex number
	        str = str .. string.format("%d,\n", dexNumber[party[i].species])
            -- Species name
	        str = str .. string.format("          \"species\": \"%s\",\n", mons[dexNumber[party[i].species]])
            -- Form
            str = str .. "          \"form\": \"standard\",\n"
        elseif string.find(mons[party[i].species],"-") then
            sep = string.find(mons[party[i].species],"-")
            -- Dex number
            str = str .. string.format("%d,\n", dexNumber[party[i].species])
            -- Species name
            str = str .. string.format("          \"species\": \"%s\",\n", mons[dexNumber[party[i].species]])
            -- Form
            str = str .. "          \"form\": \""
            mon = mons[party[i].species]
            variant = string.sub(mon, sep + 1, 100)
            variant = string.gsub(variant, "%-", "")
            str = str .. string.lower(variant)
            str = str .. "\",\n"
        -- Enamorus is the last mon before a big block of different forms
        elseif party[i].species > 905 then
            -- Dex number
	        str = str .. string.format("%d,\n", dexNumber[party[i].species])
            -- Species
	        str = str .. string.format("          \"species\": \"%s\",\n", mons[party[i].species])
            -- Form, for format consistency
            str = str .. "          \"form\": \"standard\",\n"
        else
            -- Dex number
	        str = str .. string.format("%d,\n", party[i].species)
            -- Species
	        str = str .. string.format("          \"species\": \"%s\",\n", mons[dexNumber[party[i].species]])
            -- Form, for format consistency
            str = str .. "          \"form\": \"standard\",\n"
        end

	    str = str .. string.format("          \"nickname\": \"%s\",\n", party[i].nickname)
	    str = str .. string.format("          \"level\": %d,\n", calcLevel(party[i].experience, party[i].species))
	    str = str .. string.format("          \"ivs\": [%d, %d, %d, %d, %d, %d],\n", party[i].hpIV, party[i].attackIV, party[i].defenseIV, party[i].spAttackIV, party[i].spDefenseIV, party[i].speedIV)
	    str = str .. string.format("          \"nature\": \"%s\",\n", getNature(party[i]))
	    str = str .. string.format("          \"ability\": \"%s\",\n", getAbility(party[i]))
	    str = str .. string.format("          \"held_item\": \"%s\",\n", item[party[i].heldItem])
	    str = str .. string.format("          \"met_location\": \"%s\",\n", metLocation[party[i].metLocation])
	    str = str .. string.format("          \"met_level\": \"%d\",\n", party[i].metLevel)
	    str = str .. string.format("          \"pokeball\": \"%s\",\n", tostring(pokeballType[party[i].pokeball]))
	    str = str .. string.format("          \"shiny\": \"%d\",\n", party[i].shinyModifier)
	    str = str .. "          \"gender\": \""

        local genderRatio = emu:read8(speciesInfo + (speciesStructSize * party[i].species) + 0x12)
        if (genderRatio == 0xFF) then
            str = str .. "None\",\n"
        elseif (genderRatio > (party[i].personality & 0xFF)) then
            str = str .. "Female\",\n"
        else
            str = str .. "Male\",\n"
        end

	    str = str .. string.format("          \"moves\": \"[%s, %s, %s, %s]\",\n", move[party[i].moves[1] + 1], move[party[i].moves[2] + 1], move[party[i].moves[3] + 1], move[party[i].moves[4] + 1])
        
        if (readPartyMon(monStart + partyMonSize).species ~= 0) or companionConfig.processBoxes then
            str = str .. "      },\n"
        else
            str = str .. "      }\n"
        end

		monStart = monStart + partyMonSize
	end
    if companionConfig.processBoxes then
        str = str .. "  ],\n"
    else
        str = str .. "  ]\n"
    end
	return str
end

function getBoxCompanion()
    address = storageLoc + 4
    local pokemon = readBoxMon(address)
    mon = ""
    variant = ""
    str = str .. "  \"boxes\": {\n"
    i = 1
    j = 1
    k = 1
    while j < 15 do
        str = str .. "      \"" .. string.format("%d",j) .. "\": [\n"
        while i < 30 do
            if (emu:read32(address) ~=0) then
                pokemon = readBoxMon(address)

                str = str .. "          {\n"
                str = str .. "            \"dexnumber\": " 

                -- EE defines different forms as different species which don't always match the dex number. 
                -- This if block cleanses forms back to dex number and adds the form on a separate line.
                if string.find(mons[pokemon.species],"Nidoran") then
                    -- Dex number
                    str = str .. string.format("%d,\n", dexNumber[pokemon.species])
                    -- Species name
                    str = str .. string.format("            \"species\": \"%s\",\n", mons[dexNumber[pokemon.species]])
                    -- Form
                    str = str .. "            \"form\": \"standard\",\n"
                elseif string.find(mons[pokemon.species],"-") then
                    sep = string.find(mons[pokemon.species],"-")
                    -- Dex number
                    str = str .. string.format("%d,\n", dexNumber[pokemon.species])
                    -- Species name
                    str = str .. string.format("            \"species\": \"%s\",\n", mons[dexNumber[pokemon.species]])
                    -- Form
                    str = str .. "            \"form\": \""
                    mon = mons[pokemon.species]
                    variant = string.sub(mon, sep + 1, 100)
                    variant = string.gsub(variant, "%-", "")
                    str = str .. string.lower(variant)
                    str = str .. "\",\n"
                -- Enamorus is the last mon before a big block of different forms
                elseif pokemon.species > 905 then
                    -- Dex number
                    str = str .. string.format("%d,\n", dexNumber[pokemon.species])
                    -- Species
                    str = str .. string.format("            \"species\": \"%s\",\n", mons[pokemon.species])
                    -- Form, for format consistency
                    str = str .. "            \"form\": \"standard\",\n"
                else
                    -- Dex number
                    str = str .. string.format("%d,\n", pokemon.species)
                    -- Species
                    str = str .. string.format("            \"species\": \"%s\",\n", mons[dexNumber[pokemon.species]])
                    -- Form, for format consistency
                    str = str .. "            \"form\": \"standard\",\n"
                end

                str = str .. string.format("            \"nickname\": \"%s\",\n", pokemon.nickname)
                str = str .. string.format("            \"level\": %d,\n", calcLevel(pokemon.experience, pokemon.species))
                str = str .. string.format("            \"ivs\": [%d, %d, %d, %d, %d, %d],\n", pokemon.hpIV, pokemon.attackIV, pokemon.defenseIV, pokemon.spAttackIV, pokemon.spDefenseIV, pokemon.speedIV)
                str = str .. string.format("            \"nature\": \"%s\",\n", getNature(pokemon))
                str = str .. string.format("            \"ability\": \"%s\",\n", getAbility(pokemon))
                str = str .. string.format("            \"held_item\": \"%s\",\n", item[pokemon.heldItem])
                str = str .. string.format("            \"met_location\": \"%s\",\n", metLocation[pokemon.metLocation])
                str = str .. string.format("            \"met_level\": \"%d\",\n", pokemon.metLevel)
                str = str .. string.format("            \"pokeball\": \"%s\",\n", tostring(pokeballType[pokemon.pokeball]))
                str = str .. string.format("            \"shiny\": \"%d\",\n", pokemon.shinyModifier)
                str = str .. "              \"gender\": \""

                local genderRatio = emu:read8(speciesInfo + (speciesStructSize * pokemon.species) + 0x12)
                if (genderRatio == 0xFF) then
                    str = str .. "None\",\n"
                elseif (genderRatio > (pokemon.personality & 0xFF)) then
                    str = str .. "Female\",\n"
                else
                    str = str .. "Male\",\n"
                end

                str = str .. string.format("            \"moves\": \"[%s, %s, %s, %s]\",\n", move[pokemon.moves[1]], move[pokemon.moves[2]], move[pokemon.moves[3]], move[pokemon.moves[4]])
                
                if i < 29 then
                    str = str .. "          },\n"
                else
                    str = str .. "          }\n"
                end
            end

            address = address + boxMonSize
            i = i + 1
        end
        if j < 14 then
            str = str .. "      ],\n"
        else
            str = str .. "      ]\n"
        end
    j = j + 1
    end
    str = str .. "  }\n"

	return str
end

--End configCompanion

function export() -- P_LUA_SCRIPT_EXPORT
	if not partyBuffer then
		console:log("error")
		return
	end
	printPartyStatus(partyBuffer)
	levelCap = 0
end

function getSlotAddress(slot)
    if (slot < 1 or slot > emu:read8(partyCount)) then
        console:log("Invalid slot number")
        return
    end
    return partyloc + partyMonSize * (slot - 1)
end

--Start configPokemonEditing

function setIVs(slot, IVs) -- P_LUA_SCRIPT_STATS
    local address = getSlotAddress(slot)
    setBoxMon(address, nil, IVs, nil, nil, nil, nil, nil, nil)
end

function perfect(slot, newNature) -- P_LUA_SCRIPT_STATS
    local address = getSlotAddress(slot)
    setBoxMon(address, newNature, {31, 31, 31, 31, 31, 31}, nil, nil, nil, nil,
              nil, nil)
end

function setMove(slot, moveSlot, moveName) -- P_LUA_SCRIPT_MOVES
    local address = getSlotAddress(slot)
    setBoxMon(address, nil, nil, moveSlot, moveName, nil, nil, nil, nil)

end

function setNature(slot, newNature) -- P_LUA_SCRIPT_STATS
    local address = getSlotAddress(slot)
    setBoxMon(address, newNature, nil, nil, nil, nil, nil, nil, nil)
end

function setNatureAndIVs(slot, newNature, IVs) -- P_LUA_SCRIPT_STATS
    local address = getSlotAddress(slot)
    setBoxMon(address, newNature, IVs, nil, nil, nil, nil, nil, nil)
end

function setLevel(slot, newLevel) -- P_LUA_SCRIPT_POKEMON
    local address = getSlotAddress(slot)
    setBoxMon(address, nil, nil, nil, nil, newLevel, nil, nil, nil)
end

function setSpecies(slot, newSpecies) -- P_LUA_SCRIPT_POKEMON
    local address = getSlotAddress(slot)
    setBoxMon(address, nil, nil, nil, nil, nil, newSpecies, nil, nil)
end

function setAbility(slot, newAbilityNum) -- P_LUA_SCRIPT_POKEMON
    local address = getSlotAddress(slot)
    setBoxMon(address, nil, nil, nil, nil, nil, nil, newAbilityNum, nil)
end

function setItem(slot, newHeldItem) -- P_LUA_SCRIPT_ITEMS
    local address = getSlotAddress(slot)
    setBoxMon(address, nil, nil, nil, nil, nil, nil, nil, newHeldItem)
end

function thieve(slot, newSpecies, newLevel, newAbilityNum, newMoves, newHeldItem)
    local address = getSlotAddress(slot)
    setBoxMon(address, nil, nil, 1, newMoves[1], nil, newSpecies, newAbilityNum, newHeldItem)
    setBoxMon(address, nil, nil, 2, newMoves[2], newLevel, nil, nil, nil)
    setBoxMon(address, nil, nil, 3, newMoves[3], nil, nil, nil, nil)
    setBoxMon(address, nil, nil, 4, newMoves[4], nil, nil, nil, nil)
end

--End configPokemonEditing

function indexOf(array, value)
    for i, v in ipairs(array) do
        if v == value then
            return i
        end
    end
    return nil
end

--Start configPreDamage

function predamage(slot, damage)
    local address = getSlotAddress(slot)
    local maxHP = emu:read16(address + 88)
    if (damage <= 0) then
        console:log("You probably don't want to do that")
        return
    end
    if (damage > maxHP) then damage = maxHP end
    emu:write16(address + 86, damage & 0xFFFF)
end

--End configPreDamage

--Start configPreStatus

function presleep(slot)
    local address = getSlotAddress(slot)
    emu:write32(address + 80, 1 << 0 | 1 << 1 | 1 << 2)
end

function prepoison(slot)
    local address = getSlotAddress(slot)
    emu:write32(address + 80, 1 << 3)
end

function preburn(slot)
    local address = getSlotAddress(slot)
    emu:write32(address + 80, 1 << 4)
end

function prefreeze(slot)
    local address = getSlotAddress(slot)
    emu:write32(address + 80, 1 << 5)
end

function prepara(slot)
    local address = getSlotAddress(slot)
    emu:write32(address + 80, 1 << 6)
end

function pretoxic(slot)
    local address = getSlotAddress(slot)
    emu:write32(address + 80, 1 << 7)
end

function prefrostbite(slot)
    local address = getSlotAddress(slot)
    emu:write32(address + 80, 1 << 12)
end

--End configPreStatus

callbacks:add("start", startScript)
if emu then
	startScript()
end

--Start configRandomize

function randomize(slot)
    if (slot < 1 or slot > emu:read8(partyCount)) then
        console:log("Invalid slot number")
        return
    end
    local randomNumber = numberGen()
    local newSpecies = randomPokemon(randomNumber)
    local address = partyloc + partyMonSize * (slot - 1)
    setBoxMon(address, nil, nil, nil, nil, nil, newSpecies, nil)
   
end

function numberGen()
	math.randomseed(os.time())
	local min = 1
	local max = 1025
	local randomNumber = math.random(min, max)
	return randomNumber
end

function randomPokemon(index)
	local pokemonList = {"Bulbasaur","Ivysaur","Venusaur","Charmander","Charmeleon","Charizard","Squirtle","Wartortle","Blastoise","Caterpie","Metapod","Butterfree","Weedle","Kakuna","Beedrill","Pidgey","Pidgeotto","Pidgeot","Rattata","Raticate","Spearow","Fearow","Ekans","Arbok","Pikachu","Raichu","Sandshrew","Sandslash","Nidoran♀","Nidorina","Nidoqueen","Nidoran♂","Nidorino","Nidoking","Clefairy","Clefable","Vulpix","Ninetales","Jigglypuff","Wigglytuff","Zubat","Golbat","Oddish","Gloom","Vileplume","Paras","Parasect","Venonat","Venomoth","Diglett","Dugtrio","Meowth","Persian","Psyduck","Golduck","Mankey","Primeape","Growlithe","Arcanine","Poliwag","Poliwhirl","Poliwrath","Abra","Kadabra","Alakazam","Machop","Machoke","Machamp","Bellsprout","Weepinbell","Victreebel","Tentacool","Tentacruel","Geodude","Graveler","Golem","Ponyta","Rapidash","Slowpoke","Slowbro","Magnemite","Magneton","Farfetch’d","Doduo","Dodrio","Seel","Dewgong","Grimer","Muk","Shellder","Cloyster","Gastly","Haunter","Gengar","Onix","Drowzee","Hypno","Krabby","Kingler","Voltorb","Electrode","Exeggcute","Exeggutor","Cubone","Marowak","Hitmonlee","Hitmonchan","Lickitung","Koffing","Weezing","Rhyhorn","Rhydon","Chansey","Tangela","Kangaskhan","Horsea","Seadra","Goldeen","Seaking","Staryu","Starmie","Mr. Mime","Scyther","Jynx","Electabuzz","Magmar","Pinsir","Tauros","Magikarp","Gyarados","Lapras","Ditto","Eevee","Vaporeon","Jolteon","Flareon","Porygon","Omanyte","Omastar","Kabuto","Kabutops","Aerodactyl","Snorlax","Articuno","Zapdos","Moltres","Dratini","Dragonair","Dragonite","Mewtwo","Mew","Chikorita","Bayleef","Meganium","Cyndaquil","Quilava","Typhlosion","Totodile","Croconaw","Feraligatr","Sentret","Furret","Hoothoot","Noctowl","Ledyba","Ledian","Spinarak","Ariados","Crobat","Chinchou","Lanturn","Pichu","Cleffa","Igglybuff","Togepi","Togetic","Natu","Xatu","Mareep","Flaaffy","Ampharos","Bellossom","Marill","Azumarill","Sudowoodo","Politoed","Hoppip","Skiploom","Jumpluff","Aipom","Sunkern","Sunflora","Yanma","Wooper","Quagsire","Espeon","Umbreon","Murkrow","Slowking","Misdreavus","Unown","Wobbuffet","Girafarig","Pineco","Forretress","Dunsparce","Gligar","Steelix","Snubbull","Granbull","Qwilfish","Scizor","Shuckle","Heracross","Sneasel","Teddiursa","Ursaring","Slugma","Magcargo","Swinub","Piloswine","Corsola","Remoraid","Octillery","Delibird","Mantine","Skarmory","Houndour","Houndoom","Kingdra","Phanpy","Donphan","Porygon2","Stantler","Smeargle","Tyrogue","Hitmontop","Smoochum","Elekid","Magby","Miltank","Blissey","Raikou","Entei","Suicune","Larvitar","Pupitar","Tyranitar","Lugia","Ho-Oh","Celebi","Treecko","Grovyle","Sceptile","Torchic","Combusken","Blaziken","Mudkip","Marshtomp","Swampert","Poochyena","Mightyena","Zigzagoon","Linoone","Wurmple","Silcoon","Beautifly","Cascoon","Dustox","Lotad","Lombre","Ludicolo","Seedot","Nuzleaf","Shiftry","Taillow","Swellow","Wingull","Pelipper","Ralts","Kirlia","Gardevoir","Surskit","Masquerain","Shroomish","Breloom","Slakoth","Vigoroth","Slaking","Nincada","Ninjask","Shedinja","Whismur","Loudred","Exploud","Makuhita","Hariyama","Azurill","Nosepass","Skitty","Delcatty","Sableye","Mawile","Aron","Lairon","Aggron","Meditite","Medicham","Electrike","Manectric","Plusle","Minun","Volbeat","Illumise","Roselia","Gulpin","Swalot","Carvanha","Sharpedo","Wailmer","Wailord","Numel","Camerupt","Torkoal","Spoink","Grumpig","Spinda","Trapinch","Vibrava","Flygon","Cacnea","Cacturne","Swablu","Altaria","Zangoose","Seviper","Lunatone","Solrock","Barboach","Whiscash","Corphish","Crawdaunt","Baltoy","Claydol","Lileep","Cradily","Anorith","Armaldo","Feebas","Milotic","Castform","Kecleon","Shuppet","Banette","Duskull","Dusclops","Tropius","Chimecho","Absol","Wynaut","Snorunt","Glalie","Spheal","Sealeo","Walrein","Clamperl","Huntail","Gorebyss","Relicanth","Luvdisc","Bagon","Shelgon","Salamence","Beldum","Metang","Metagross","Regirock","Regice","Registeel","Latias","Latios","Kyogre","Groudon","Rayquaza","Jirachi","Deoxys","Turtwig","Grotle","Torterra","Chimchar","Monferno","Infernape","Piplup","Prinplup","Empoleon","Starly","Staravia","Staraptor","Bidoof","Bibarel","Kricketot","Kricketune","Shinx","Luxio","Luxray","Budew","Roserade","Cranidos","Rampardos","Shieldon","Bastiodon","Burmy","Wormadam","Mothim","Combee","Vespiquen","Pachirisu","Buizel","Floatzel","Cherubi","Cherrim","Shellos","Gastrodon","Ambipom","Drifloon","Drifblim","Buneary","Lopunny","Mismagius","Honchkrow","Glameow","Purugly","Chingling","Stunky","Skuntank","Bronzor","Bronzong","Bonsly","Mime Jr.","Happiny","Chatot","Spiritomb","Gible","Gabite","Garchomp","Munchlax","Riolu","Lucario","Hippopotas","Hippowdon","Skorupi","Drapion","Croagunk","Toxicroak","Carnivine","Finneon","Lumineon","Mantyke","Snover","Abomasnow","Weavile","Magnezone","Lickilicky","Rhyperior","Tangrowth","Electivire","Magmortar","Togekiss","Yanmega","Leafeon","Glaceon","Gliscor","Mamoswine","Porygon-Z","Gallade","Probopass","Dusknoir","Froslass","Rotom","Uxie","Mesprit","Azelf","Dialga","Palkia","Heatran","Regigigas","Giratina","Cresselia","Phione","Manaphy","Darkrai","Shaymin","Arceus","Victini","Snivy","Servine","Serperior","Tepig","Pignite","Emboar","Oshawott","Dewott","Samurott","Patrat","Watchog","Lillipup","Herdier","Stoutland","Purrloin","Liepard","Pansage","Simisage","Pansear","Simisear","Panpour","Simipour","Munna","Musharna","Pidove","Tranquill","Unfezant","Blitzle","Zebstrika","Roggenrola","Boldore","Gigalith","Woobat","Swoobat","Drilbur","Excadrill","Audino","Timburr","Gurdurr","Conkeldurr","Tympole","Palpitoad","Seismitoad","Throh","Sawk","Sewaddle","Swadloon","Leavanny","Venipede","Whirlipede","Scolipede","Cottonee","Whimsicott","Petilil","Lilligant","Basculin","Sandile","Krokorok","Krookodile","Darumaka","Darmanitan","Maractus","Dwebble","Crustle","Scraggy","Scrafty","Sigilyph","Yamask","Cofagrigus","Tirtouga","Carracosta","Archen","Archeops","Trubbish","Garbodor","Zorua","Zoroark","Minccino","Cinccino","Gothita","Gothorita","Gothitelle","Solosis","Duosion","Reuniclus","Ducklett","Swanna","Vanillite","Vanillish","Vanilluxe","Deerling","Sawsbuck","Emolga","Karrablast","Escavalier","Foongus","Amoonguss","Frillish","Jellicent","Alomomola","Joltik","Galvantula","Ferroseed","Ferrothorn","Klink","Klang","Klinklang","Tynamo","Eelektrik","Eelektross","Elgyem","Beheeyem","Litwick","Lampent","Chandelure","Axew","Fraxure","Haxorus","Cubchoo","Beartic","Cryogonal","Shelmet","Accelgor","Stunfisk","Mienfoo","Mienshao","Druddigon","Golett","Golurk","Pawniard","Bisharp","Bouffalant","Rufflet","Braviary","Vullaby","Mandibuzz","Heatmor","Durant","Deino","Zweilous","Hydreigon","Larvesta","Volcarona","Cobalion","Terrakion","Virizion","Tornadus","Thundurus","Reshiram","Zekrom","Landorus","Kyurem","Keldeo","Meloetta","Genesect","Chespin","Quilladin","Chesnaught","Fennekin","Braixen","Delphox","Froakie","Frogadier","Greninja","Bunnelby","Diggersby","Fletchling","Fletchinder","Talonflame","Scatterbug","Spewpa","Vivillon","Litleo","Pyroar","Flabébé","Floette","Florges","Skiddo","Gogoat","Pancham","Pangoro","Furfrou","Espurr","Meowstic","Honedge","Doublade","Aegislash","Spritzee","Aromatisse","Swirlix","Slurpuff","Inkay","Malamar","Binacle","Barbaracle","Skrelp","Dragalge","Clauncher","Clawitzer","Helioptile","Heliolisk","Tyrunt","Tyrantrum","Amaura","Aurorus","Sylveon","Hawlucha","Dedenne","Carbink","Goomy","Sliggoo","Goodra","Klefki","Phantump","Trevenant","Pumpkaboo","Gourgeist","Bergmite","Avalugg","Noibat","Noivern","Xerneas","Yveltal","Zygarde","Diancie","Hoopa","Volcanion","Rowlet","Dartrix","Decidueye","Litten","Torracat","Incineroar","Popplio","Brionne","Primarina","Pikipek","Trumbeak","Toucannon","Yungoos","Gumshoos","Grubbin","Charjabug","Vikavolt","Crabrawler","Crabominable","Oricorio","Cutiefly","Ribombee","Rockruff","Lycanroc","Wishiwashi","Mareanie","Toxapex","Mudbray","Mudsdale","Dewpider","Araquanid","Fomantis","Lurantis","Morelull","Shiinotic","Salandit","Salazzle","Stufful","Bewear","Bounsweet","Steenee","Tsareena","Comfey","Oranguru","Passimian","Wimpod","Golisopod","Sandygast","Palossand","Pyukumuku","Type: Null","Silvally","Minior","Komala","Turtonator","Togedemaru","Mimikyu","Bruxish","Drampa","Dhelmise","Jangmo-o","Hakamo-o","Kommo-o","Tapu Koko","Tapu Lele","Tapu Bulu","Tapu Fini","Cosmog","Cosmoem","Solgaleo","Lunala","Nihilego","Buzzwole","Pheromosa","Xurkitree","Celesteela","Kartana","Guzzlord","Necrozma","Magearna","Marshadow","Poipole","Naganadel","Stakataka","Blacephalon","Zeraora","Meltan","Melmetal","Grookey","Thwackey","Rillaboom","Scorbunny","Raboot","Cinderace","Sobble","Drizzile","Inteleon","Skwovet","Greedent","Rookidee","Corvisquire","Corviknight","Blipbug","Dottler","Orbeetle","Nickit","Thievul","Gossifleur","Eldegoss","Wooloo","Dubwool","Chewtle","Drednaw","Yamper","Boltund","Rolycoly","Carkol","Coalossal","Applin","Flapple","Appletun","Silicobra","Sandaconda","Cramorant","Arrokuda","Barraskewda","Toxel","Toxtricity","Sizzlipede","Centiskorch","Clobbopus","Grapploct","Sinistea","Polteageist","Hatenna","Hattrem","Hatterene","Impidimp","Morgrem","Grimmsnarl","Obstagoon","Perrserker","Cursola","Sirfetch’d","Mr. Rime","Runerigus","Milcery","Alcremie","Falinks","Pincurchin","Snom","Frosmoth","Stonjourner","Eiscue","Indeedee","Morpeko","Cufant","Copperajah","Dracozolt","Arctozolt","Dracovish","Arctovish","Duraludon","Dreepy","Drakloak","Dragapult","Zacian","Zamazenta","Eternatus","Kubfu","Urshifu","Zarude","Regieleki","Regidrago","Glastrier","Spectrier","Calyrex","Wyrdeer","Kleavor","Ursaluna","Basculegion","Sneasler","Overqwil","Enamorus","Sprigatito","Floragato","Meowscarada","Fuecoco","Crocalor","Skeledirge","Quaxly","Quaxwell","Quaquaval","Lechonk","Oinkologne","Tarountula","Spidops","Nymble","Lokix","Pawmi","Pawmo","Pawmot","Tandemaus","Maushold","Fidough","Dachsbun","Smoliv","Dolliv","Arboliva","Squawkabilly","Nacli","Naclstack","Garganacl","Charcadet","Armarouge","Ceruledge","Tadbulb","Bellibolt","Wattrel","Kilowattrel","Maschiff","Mabosstiff","Shroodle","Grafaiai","Bramblin","Brambleghast","Toedscool","Toedscruel","Klawf","Capsakid","Scovillain","Rellor","Rabsca","Flittle","Espathra","Tinkatink","Tinkatuff","Tinkaton","Wiglett","Wugtrio","Bombirdier","Finizen","Palafin","Varoom","Revavroom","Cyclizar","Orthworm","Glimmet","Glimmora","Greavard","Houndstone","Flamigo","Cetoddle","Cetitan","Veluza","Dondozo","Tatsugiri","Annihilape","Clodsire","Farigiraf","Dudunsparce","Kingambit","Great Tusk","Scream Tail","Brute Bonnet","Flutter Mane","Slither Wing","Sandy Shocks","Iron Treads","Iron Bundle","Iron Hands","Iron Jugulis","Iron Moth","Iron Thorns","Frigibax","Arctibax","Baxcalibur","Gimmighoul","Gholdengo","Wo-Chien","Chien-Pao","Ting-Lu","Chi-Yu","Roaring Moon","Iron Valiant","Koraidon","Miraidon","Walking Wake","Iron Leaves","Dipplin","Poltchageist","Sinistcha","Okidogi","Munkidori","Fezandipiti","Ogerpon","Archaludon","Hydrapple","Gouging Fire","Raging Bolt","Iron Boulder","Iron Crown","Terapagos","Pecharunt"}
	return pokemonList[index]
end

--End configRandomize


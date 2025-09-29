#include "global.h"
#include "move.h"
#include "region_map.h" // For MAPSEC_COUNT and struct RegionMapLocation
#include "pokemon.h" // For struct Pokemon, struct BoxPokemon, struct SpeciesInfo  
#include "pokemon_storage_system.h" // For struct PokemonStorage
#include "constants/abilities.h"
#include "constants/expansion.h"
#include "constants/moves.h"
#include "constants/species.h"
#include "constants/items.h"

extern struct SaveBlock1 gSaveblock1;
extern struct SaveBlock2 gSaveblock2;
extern struct SaveBlock3 gSaveblock3;
extern struct PokemonStorage gPokemonStorage;

// Similar to the GF ROM header, this struct allows external programs to
// detect details about Expansion.
// For this structure to be useful we have to maintain backwards binary
// compatibility. This means that we should only ever append data to the
// end. If there are any structs as members then those structs should
// not be modified after being introduced.
struct RHHRomHeader
{
    /*0x00*/ char rhh_magic[6]; // 'RHHEXP'. Useful to locate the header if it shifts.
    /*0x06*/ u8 expansionVersionMajor;
    /*0x07*/ u8 expansionVersionMinor;
    /*0x08*/ u8 expansionVersionPatch;
    /*0x09*/ u8 expansionVersionFlags;
    /*0x0A*/ u16 movesCount;
    /*0x0C*/ u16 numSpecies;
    /*0x0E*/ u16 abilitiesCount;
    /*0x10*/ const struct Ability *abilities;
    /*0x14*/ u16 itemsCount;
    /*0x16*/ u8 itemNameLength;
    /*0x17*/ u8 moveNameLength;
    /*0x18*/ struct PokemonStorage *pokemonStorage;
    /*0x1C*/ const struct RegionMapLocation *regionMapEntries;
    /*0x20*/ struct Pokemon *playerParty;
    /*0x24*/ u8 *playerPartyCount;
    /*0x28*/ u32 boxPokemonSize;
    /*0x2C*/ u32 partyPokemonSize;
    /*0X30*/ u32 speciesSize;
    /*0X34*/ u32 movesSize;
    /*0x38*/ u32 abilitySize;
    /*0x3C*/ u32 regionMapEntrySize;
    /*0x40*/ u32 speciesNameOffset;
    /*0x44*/ u32 mapNameOffset;
    /*0x48*/ u16 mapSecCount;
    /*0x4A*/ u8 abilityNameLength;
};

__attribute__((section(".text.header_rhh"))) USED static const struct RHHRomHeader sRHHRomHeader =
{
    .rhh_magic = { 'R', 'H', 'H', 'E', 'X', 'P' },
    .expansionVersionMajor = EXPANSION_VERSION_MAJOR,
    .expansionVersionMinor = EXPANSION_VERSION_MINOR,
    .expansionVersionPatch = EXPANSION_VERSION_PATCH,
    .expansionVersionFlags = (EXPANSION_TAGGED_RELEASE << 0),
    .movesCount = MOVES_COUNT,
    .numSpecies = NUM_SPECIES,
    .abilitiesCount = ABILITIES_COUNT,
    .abilities = gAbilitiesInfo,
    .itemsCount = ITEMS_COUNT,
    .itemNameLength = ITEM_NAME_LENGTH,
    .moveNameLength = MOVE_NAME_LENGTH,
    .pokemonStorage = &gPokemonStorage,
    .regionMapEntries = gRegionMapEntries,
    .playerParty = &gPlayerParty[0],
    .playerPartyCount = &gPlayerPartyCount,
    .boxPokemonSize = sizeof(struct BoxPokemon),
    .partyPokemonSize = sizeof(struct Pokemon),
    .speciesSize = sizeof(struct SpeciesInfo),
    .movesSize = sizeof(struct MoveInfo),
    .abilitySize = sizeof(struct Ability),
    .regionMapEntrySize = sizeof(struct RegionMapLocation),
    .speciesNameOffset = offsetof(struct SpeciesInfo, speciesName),
    .mapNameOffset = offsetof(struct RegionMapLocation, name),
    .mapSecCount = MAPSEC_COUNT,
    .abilityNameLength = ABILITY_NAME_LENGTH,
};
    ///*0x18*/ struct SaveBlock1 *saveBlock1;
    ///*0x1C*/ struct SaveBlock2 *saveBlock2;
    ///*0x20*/ struct SaveBlock3 *saveBlock3;
    //.saveBlock1 = &gSaveblock1,
    //.saveBlock2 = &gSaveblock2,
    //.saveBlock3 = &gSaveblock3,

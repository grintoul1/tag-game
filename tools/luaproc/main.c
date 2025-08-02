/* luaproc
 * Produces a lua script for Pokémon pre-damaging, statusing, exporting for Showdown Calculators... */

#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "metaprogram.h"
#include "constants/abilities.h"
#include "constants/global.h"
#include "constants/moves.h"
#include "constants/pokemon.h"
#include "constants/species.h"
#include "gba/isagbprint.h"
#include "gba/types.h"
#include "global.h"
#include "item.h"
#include "load_save.h"
#include "move.h"
#include "pokemon.h"

#define MAX_TRAINER_AI_FLAGS 64
#define MAX_TRAINER_ITEMS 4
#define MAX_MON_MOVES 4
#define MAX_MON_TAGS 32

static void fprint_lua(const char *output_path, FILE *f)
{
    // Intro text
    fprintf(f, "-- you do not need this lua script, though it will allow you to with mgba 0.10 to export your pokemon to the calc\n");
    fprintf(f, "-- to use this file on mgba select tools->scripting then file->open and open this file\n");
    fprintf(f, "\n");

    // Moves
    fprintf(f, "move = {\"\",\n");
    for (u8 i = 1; i < (MOVES_COUNT_ALL - 1); i++)
    {
        fprintf(f, "\"");
        fprintf(f, "%s", GetMoveName(i));
        fprintf(f, "\",\n");
    }
    fprintf(f, "\"");
    fprintf(f, "%s", GetMoveName(MOVES_COUNT_ALL - 1));
    fprintf(f, "\n");
    fprintf(f, "}\n");
    fprintf(f, "\n");

    // Species
    fprintf(f, "mons = {\n");
    for (u8 i = 1; i < (SPECIES_EGG - 1); i++)
    {
        fprintf(f, "\"");
        fprintf(f, "%s", GetSpeciesName(i));
        fprintf(f, "\",\n");
    }
    fprintf(f, "\"");
    fprintf(f, "%s", GetSpeciesName(SPECIES_EGG - 1));
    fprintf(f, "\n");
    fprintf(f, "}\n");
    fprintf(f, "\n");

    // Abilities
    fprintf(f, "abilities = {\n");
    for (u8 i = 1; i < (ABILITIES_COUNT - 1); i++)
    {
        fprintf(f, "\"");
        fprintf(f, "%s", gAbilitiesInfo[i].name);
        fprintf(f, "\",\n");
    }
    fprintf(f, "\"");
    fprintf(f, "%s", gAbilitiesInfo[ABILITIES_COUNT - 1].name);
    fprintf(f, "\n");
    fprintf(f, "}\n");
    fprintf(f, "\n");

    // Items
    fprintf(f, "item = {\n");
    for (u8 i = 1; i < (ITEMS_COUNT - 1); i++)
    {
        fprintf(f, "\"");
        fprintf(f, "%s", GetItemName(i));
        fprintf(f, "\",\n");
    }
    fprintf(f, "\"");
    fprintf(f, "%s", GetItemName(ITEMS_COUNT - 1));
    fprintf(f, "\n");
    fprintf(f, "}\n");
    fprintf(f, "\n");

    // Natures
    fprintf(f, "nature = {\"Hardy\",\"Lonely\",\"Brave\",\"Adamant\",\"Naughty\",\n");
    fprintf(f, "\"Bold\",\"Docile\",\"Relaxed\",\"Impish\",\"Lax\",\n");
    fprintf(f, "\"Timid\",\"Hasty\",\"Serious\",\"Jolly\",\"Naive\",\n");
    fprintf(f, "\"Modest\",\"Mild\",\"Quiet\",\"Bashful\",\"Rash\",\n");
    fprintf(f, "\"Calm\",\"Gentle\",\"Sassy\",\"Careful\",\"Quirky\"}\n");
    fprintf(f, "\n");

    /*
    // Charmap
    fprintf(f, "charmap = { [0]=\n");
    fprintf(f, "    \" \", \"À\", \"Á\", \"Â\", \"Ç\", \"È\", \"É\", \"Ê\", \"Ë\", \"Ì\", \"こ\", \"Î\", \"Ï\", \"Ò\", \"Ó\", \"Ô\",\n");
    fprintf(f, "    \"Œ\", \"Ù\", \"Ú\", \"Û\", \"Ñ\", \"ß\", \"à\", \"á\", \"ね\", \"ç\", \"è\", \"é\", \"ê\", \"ë\", \"ì\", \"\",ま\n");
    fprintf(f, "    \"î\", \"ï\", \"ò\", \"ó\", \"ô\", \"œ\", \"ù\", \"ú\", \"û\", \"ñ\", \"º\", \"ª\", \"�\", \"&\", \"+\", \"あ\",\n");
    fprintf(f, "    \"ぃ\", \"ぅ\", \"ぇ\", \"ぉ\", \"v\", \"=\", \"ょ\", \"が\", \"ぎ\", \"ぐ\", \"げ\", \"ご\", \"ざ\", \"じ\", \"ず\", \"ぜ\",");
    fprintf(f, "    \"ぞ\", \"だ\", \"ぢ\", \"づ\", \"で\", \"ど\", \"ば\", \"び\", \"ぶ\", \"べ\", \"ぼ\", \"ぱ\", \"ぴ\", \"ぷ\", \"ぺ\", \"ぽ\",\n");
    fprintf(f, "    \"っ\", \"¿\", \"¡\", \"P\u{200d}k\", \"M\u{200d}n\", \"P\u{200d}o\", \"K\u{200d}é\", \"�\", \"�\", \"�\", \"Í\", \"%\", \"(\", \")\", \"セ\", \"ソ\",\n");
    fprintf(f, "    \"タ\", \"チ\", \"ツ\", \"テ\", \"ト\", \"ナ\", \"ニ\", \"ヌ\", \"â\", \"ノ\", \"ハ\", \"ヒ\", \"フ\", \"ヘ\", \"ホ\", \"í\",\n");
    fprintf(f, "    \"ミ\", \"ム\", \"メ\", \"モ\", \"ヤ\", \"ユ\", \"ヨ\", \"ラ\", \"リ\", \"⬆\", \"⬇\", \"⬅\", \"➡\", \"ヲ\", \"ン\", \"ァ\",\n");
    fprintf(f, "    \"ィ\", \"ゥ\", \"ェ\", \"ォ\", \"ャ\", \"ュ\", \"ョ\", \"ガ\", \"ギ\", \"グ\", \"ゲ\", \"ゴ\", \"ザ\", \"ジ\", \"ズ\", \"ゼ\",\n");
    fprintf(f, "    \"ゾ\", \"ダ\", \"ヂ\", \"ヅ\", \"デ\", \"ド\", \"バ\", \"ビ\", \"ブ\", \"ベ\", \"ボ\", \"パ\", \"ピ\", \"プ\", \"ペ\", \"ポ\",\n");
    fprintf(f, "    \"ッ\", \"0\", \"1\", \"2\", \"3\", \"4\", \"5\", \"6\", \"7\", \"8\", \"9\", \"!\", \"?\", \".\", \"-\", \"・\",\n");
    fprintf(f, "    \"…\", \"\"\", \"\"\", \"‘\", \"’\", \"♂\", \"♀\", \"$\", \",\", \"×\", \"/\", \"A\", \"B\", \"C\", \"D\", \"E\",\n");
    fprintf(f, "    \"F\", \"G\", \"H\", \"I\", \"J\", \"K\", \"L\", \"M\", \"N\", \"O\", \"P\", \"Q\", \"R\", \"S\", \"T\", \"U\",\n");
    fprintf(f, "    \"V\", \"W\", \"X\", \"Y\", \"Z\", \"a\", \"b\", \"c\", \"d\", \"e\", \"f\", \"g\", \"h\", \"i\", \"j\", \"k\",\n");
    fprintf(f, "    \"l\", \"m\", \"n\", \"o\", \"p\", \"q\", \"r\", \"s\", \"t\", \"u\", \"v\", \"w\", \"x\", \"y\", \"z\", \"▶\",\n");
    fprintf(f, "    \":\", \"Ä\", \"Ö\", \"Ü\", \"ä\", \"ö\", \"ü\", \"⬆\", \"⬇\", \"⬅\", \"�\", \"�\", \"�\", \"�\", \"�\", \"\"\n");
    fprintf(f, "}\n");
    fprintf(f, "\n");
    */

    // Level cap
    fprintf(f, "levelCap = 0 -- Sets the level for all mons based on first party slot\n");

    // Local declarations
    fprintf(f, "local terminator=0xFF\n");
    fprintf(f, "local monNameLength=");
    fprintf(f, "%d", POKEMON_NAME_LENGTH);
    fprintf(f, "\n");
    fprintf(f, "local playerNameLength=");
    fprintf(f, "%d", PLAYER_NAME_LENGTH);
    fprintf(f, "\n");
    fprintf(f, "local boxMonSize=");
    fprintf(f, "%lu", sizeof(struct BoxPokemon));
    fprintf(f, "\n");
    fprintf(f, "local partyMonSize=");
    fprintf(f, "%lu", sizeof(struct Pokemon));
    fprintf(f, "\n");
    fprintf(f, "local speciesStructSize=");
    fprintf(f, "%lu", sizeof(struct SpeciesInfo));
    fprintf(f, "\n");
    fprintf(f, "\n");
    fprintf(f, "local partyCount=");
    fprintf(f, "%p", &gPlayerPartyCount);
    fprintf(f, " -- gPlayerPartyCount\n");
    fprintf(f, "local partyloc=");
    fprintf(f, "%p", &gPlayerParty);
    fprintf(f, " -- gPlayerParty\n");
    fprintf(f, "local storageLoc=");
    fprintf(f, "%p", &gPokemonStorage);
    fprintf(f, " -- gPokemonStorage\n");
    fprintf(f, "local speciesInfo=");
    fprintf(f, "%p", &gSpeciesInfo);
    fprintf(f, " -- gSpeciesInfo\n");
    fprintf(f, "\n");

    // Functions
    fprintf(f, "function getCurve(n)\n");
    fprintf(f, "    return emu:read8(speciesInfo+(speciesStructSize*n)+21)\n");
    fprintf(f, "end\n");
    fprintf(f, "function slowCurve(n)\n");
    fprintf(f, "    return math.floor((5*(n^3))/4)\n");
    fprintf(f, "end\n");
    fprintf(f, "function fastCurve(n)\n");
    fprintf(f, "    return math.floor((4*(n^3))/5)\n");
    fprintf(f, "end\n");
    fprintf(f, "function medfastCurve(n)\n");
    fprintf(f, "    return n^3\n");
    fprintf(f, "end\n");
    fprintf(f, "function medslowCurve(n)\n");
    fprintf(f, "    return math.floor((6 * (n)^3) / 5) - (15 * (n)^2) + (100 * n) - 140\n");
    fprintf(f, "end\n");
    fprintf(f, "function erraticCurve(n)\n");
    fprintf(f, "    if (n<=50) then\n");
    fprintf(f, "        return math.floor(((100 - n)*n^3)/50)\n");
    fprintf(f, "    end\n");
    fprintf(f, "    if (n<=68) then\n");
    fprintf(f, "        return math.floor(((150 - n)*n^3)/100)\n");
    fprintf(f, "    end\n");
    fprintf(f, "    if (n<=98) then\n");
    fprintf(f, "        return math.floor(math.floor((1911 - 10 * n) / 3) * n^3 / 500)\n");
    fprintf(f, "    end\n");
    fprintf(f, "    return math.floor((160 - n) * n^3 / 100)\n");
    fprintf(f, "end\n");
    fprintf(f, "function flutuatingCurve(n)\n");
    fprintf(f, "    if (n<15) then\n");
    fprintf(f, "      return math.floor((math.floor((n + 1) / 3) + 24) * n^3 / 50)\n");
    fprintf(f, "    end\n");
    fprintf(f, "    if (n<=36) then\n");
    fprintf(f, "        return math.floor((n + 14) * n^3 / 50)\n");
    fprintf(f, "    end\n");
    fprintf(f, "    return math.floor((math.floor(n / 2) + 32) * n^3 / 50)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function calcLevel(exp, species)\n");
    fprintf(f, "    level = 1\n");
    fprintf(f, "    while (exp>=expRequired(species, level+1)) do\n");
    fprintf(f, "        level=level+1\n");
    fprintf(f, "    end\n");
    fprintf(f, "    return level\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function expRequired(species, level)\n");
    fprintf(f, "    expCurve = getCurve(species)\n");
    fprintf(f, "    if (expCurve == 0) then return medfastCurve(level) end\n");
    fprintf(f, "    if (expCurve == 1) then return erraticCurve(level) end\n");
    fprintf(f, "    if (expCurve == 2) then return flutuatingCurve(level) end\n");
    fprintf(f, "    if (expCurve == 3) then return medslowCurve(level) end\n");
    fprintf(f, "    if (expCurve == 4) then return fastCurve(level) end\n");
    fprintf(f, "    if (expCurve == 5) then return slowCurve(level) end\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function getParty()\n");
    fprintf(f, "    local party = {}\n");
    fprintf(f, "    local monStart = partyloc\n");
    fprintf(f, "    for i = 1, emu:read8(partyCount) do\n");
    fprintf(f, "        party[i] = readPartyMon(monStart)\n");
    fprintf(f, "        monStart = monStart + partyMonSize\n");
    fprintf(f, "    end\n");
    fprintf(f, "    return party\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function toString(rawstring)\n");
    fprintf(f, "    local string = ""\n");
    fprintf(f, "    for _, char in ipairs({rawstring:byte(1, #rawstring)}) do\n");
    fprintf(f, "        if char == terminator then\n");
    fprintf(f, "            break\n");
    fprintf(f, "        end\n");
    fprintf(f, "        string = string..charmap[char]\n");
    fprintf(f, "    end\n");
    fprintf(f, "    return string\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function _read16BE(emu, address)\n");
    fprintf(f, "    return (emu:read8(address) << 8) | emu:read8(address + 1)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function setBoxMon(address, newNature, IVs, moveSlot, moveName, level, species,\n");
    fprintf(f, "                   abilityNum, heldItem)\n");
    fprintf(f, "    local mon = readBoxMon(address)\n");
    fprintf(f, "\n");
    fprintf(f, "    local key = mon.otId ~ mon.personality\n");
    fprintf(f, "    local substructSelector = {\n");
    fprintf(f, "        [0] = {0, 1, 2, 3},\n");
    fprintf(f, "        [1] = {0, 1, 3, 2},\n");
    fprintf(f, "        [2] = {0, 2, 1, 3},\n");
    fprintf(f, "        [3] = {0, 3, 1, 2},\n");
    fprintf(f, "        [4] = {0, 2, 3, 1},\n");
    fprintf(f, "        [5] = {0, 3, 2, 1},\n");
    fprintf(f, "        [6] = {1, 0, 2, 3},\n");
    fprintf(f, "        [7] = {1, 0, 3, 2},\n");
    fprintf(f, "        [8] = {2, 0, 1, 3},\n");
    fprintf(f, "        [9] = {3, 0, 1, 2},\n");
    fprintf(f, "        [10] = {2, 0, 3, 1},\n");
    fprintf(f, "        [11] = {3, 0, 2, 1},\n");
    fprintf(f, "        [12] = {1, 2, 0, 3},\n");
    fprintf(f, "        [13] = {1, 3, 0, 2},\n");
    fprintf(f, "        [14] = {2, 1, 0, 3},\n");
    fprintf(f, "        [15] = {3, 1, 0, 2},\n");
    fprintf(f, "        [16] = {2, 3, 0, 1},\n");
    fprintf(f, "        [17] = {3, 2, 0, 1},\n");
    fprintf(f, "        [18] = {1, 2, 3, 0},\n");
    fprintf(f, "        [19] = {1, 3, 2, 0},\n");
    fprintf(f, "        [20] = {2, 1, 3, 0},\n");
    fprintf(f, "        [21] = {3, 1, 2, 0},\n");
    fprintf(f, "        [22] = {2, 3, 1, 0},\n");
    fprintf(f, "        [23] = {3, 2, 1, 0}\n");
    fprintf(f, "    }\n");
    fprintf(f, "    local pSel = substructSelector[mon.personality %% 24]\n");
    fprintf(f, "\n");
    fprintf(f, "    local ss0 = {}\n");
    fprintf(f, "    local ss1 = {}\n");
    fprintf(f, "    local ss2 = {}\n");
    fprintf(f, "    local ss3 = {}\n");
    fprintf(f, "    for i = 0, 2 do\n");
    fprintf(f, "        ss0[i] = emu:read32(address + 32 + pSel[1] * 12 + i * 4) ~ key\n");
    fprintf(f, "        ss1[i] = emu:read32(address + 32 + pSel[2] * 12 + i * 4) ~ key\n");
    fprintf(f, "        ss2[i] = emu:read32(address + 32 + pSel[3] * 12 + i * 4) ~ key\n");
    fprintf(f, "        ss3[i] = emu:read32(address + 32 + pSel[4] * 12 + i * 4) ~ key\n");
    fprintf(f, "    end\n");
    fprintf(f, "\n");
    fprintf(f, "    -- set all IVs to 31\n");
    fprintf(f, "    if (IVs ~= nil) then\n");
    fprintf(f, "        ss3[1] = (ss3[1] & 0x80000001) | (IVs[1] << 1) | (IVs[2] << 6) |\n");
    fprintf(f, "                     (IVs[3] << 11) | (IVs[6] << 16) | (IVs[4] << 21) |\n");
    fprintf(f, "                     (IVs[5] << 26)\n");
    fprintf(f, "    end\n");
    fprintf(f, "\n");
    fprintf(f, "    -- set hiddenNature\n");
    fprintf(f, "    if (newNature ~= nil) then\n");
    fprintf(f, "        local natureIx = indexOf(nature, newNature)\n");
    fprintf(f, "        if (natureIx == nil) then\n");
    fprintf(f, "            console:log('Invalid nature')\n");
    fprintf(f, "            return\n");
    fprintf(f, "        end\n");
    fprintf(f, "        ss0[2] = (ss0[2] ~ (mon.hiddenNature << 16)) |\n");
    fprintf(f, "                     (((natureIx - 1) & 0x1F) << 16)\n");
    fprintf(f, "    end\n");
    fprintf(f, "\n");
    fprintf(f, "    if (moveSlot ~= nil) then\n");
    fprintf(f, "        local moveIx = 0\n");
    fprintf(f, "        if (moveName ~= nil) then\n");
    fprintf(f, "            moveIx = indexOf(move, moveName) - 1\n");
    fprintf(f, "        end\n");
    fprintf(f, "        if (moveIx == nil) then\n");
    fprintf(f, "            console:log('Invalid move')\n");
    fprintf(f, "            return\n");
    fprintf(f, "        end\n");
    fprintf(f, "        if (moveSlot < 1 or moveSlot > 4) then\n");
    fprintf(f, "            console:log('Invalid move slot number')\n");
    fprintf(f, "            return\n");
    fprintf(f, "        end\n");
    fprintf(f, "        if moveSlot == 1 then\n");
    fprintf(f, "            ss1[0] = (ss1[0] & 0xFFFF0000) | moveIx\n");
    fprintf(f, "        elseif moveSlot == 2 then\n");
    fprintf(f, "            ss1[0] = (ss1[0] & 0x0000FFFF) | (moveIx << 16)\n");
    fprintf(f, "        elseif moveSlot == 3 then\n");
    fprintf(f, "            ss1[1] = (ss1[1] & 0xFFFF0000) | moveIx\n");
    fprintf(f, "        elseif moveSlot == 4 then\n");
    fprintf(f, "            ss1[1] = (ss1[1] & 0x0000FFFF) | (moveIx << 16)\n");
    fprintf(f, "        end\n");
    fprintf(f, "    end\n");
    fprintf(f, "\n");
    fprintf(f, "    if (abilityNum ~= nil) then\n");
    fprintf(f, "        ss3[2] = (abilityNum << 29) | (ss3[2] & 0x03FFFFFF)\n");
    fprintf(f, "    end\n");
    fprintf(f, "\n");
    fprintf(f, "    if (level ~= nil) then\n");
    fprintf(f, "        emu:write8(address + 84, level)\n");
    fprintf(f, "        ss0[1] = expRequired(mon.species, level)\n");
    fprintf(f, "    end\n");
    fprintf(f, "\n");
    fprintf(f, "    if (species ~= nil) then\n");
    fprintf(f, "        local speciesIx = indexOf(mons, species)\n");
    fprintf(f, "        ss0[0] = (ss0[0] & 0xFFFF0000) | speciesIx\n");
    fprintf(f, "        ss0[1] = expRequired(speciesIx, calcLevel(mon.experience, speciesIx))\n");
    fprintf(f, "    end\n");
    fprintf(f, "\n");
    fprintf(f, "    if (heldItem ~= nil) then\n");
    fprintf(f, "        local itemIx = indexOf(item, heldItem)\n");
    fprintf(f, "        ss0[0] = (ss0[0] & 0x0000FFFF) | (itemIx << 16)\n");
    fprintf(f, "    end\n");
    fprintf(f, "\n");
    fprintf(f, "    -- fix checksum\n");
    fprintf(f, "    local checksum = 0\n");
    fprintf(f, "    for i = 0, 2 do\n");
    fprintf(f, "        checksum = checksum + (ss0[i] & 0xFFFF) + (ss0[i] >> 16)\n");
    fprintf(f, "        checksum = checksum + (ss1[i] & 0xFFFF) + (ss1[i] >> 16)\n");
    fprintf(f, "        checksum = checksum + (ss2[i] & 0xFFFF) + (ss2[i] >> 16)\n");
    fprintf(f, "        checksum = checksum + (ss3[i] & 0xFFFF) + (ss3[i] >> 16)\n");
    fprintf(f, "    end\n");
    fprintf(f, "    emu:write16(address + 28, checksum)\n");
    fprintf(f, "\n");
    fprintf(f, "    for i = 0, 2 do\n");
    fprintf(f, "        emu:write32(address + 32 + pSel[1] * 12 + i * 4, ss0[i] ~ key)\n");
    fprintf(f, "        emu:write32(address + 32 + pSel[2] * 12 + i * 4, ss1[i] ~ key)\n");
    fprintf(f, "        emu:write32(address + 32 + pSel[3] * 12 + i * 4, ss2[i] ~ key)\n");
    fprintf(f, "        emu:write32(address + 32 + pSel[4] * 12 + i * 4, ss3[i] ~ key)\n");
    fprintf(f, "    end\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function readBoxMon(address)\n");
    fprintf(f, "    local mon = {}\n");
    fprintf(f, "    mon.personality = emu:read32(address + 0)\n");
    fprintf(f, "    mon.otId = emu:read32(address + 4)\n");
    fprintf(f, "    mon.nickname = toString(emu:readRange(address + 8, monNameLength))\n");
    fprintf(f, "    mon.language = emu:read8(address + 18)\n");
    fprintf(f, "\n");
    fprintf(f, "    local flags = emu:read8(address + 19)\n");
    fprintf(f, "    mon.isBadEgg = flags & 1\n");
    fprintf(f, "    mon.hasSpecies = (flags >> 1) & 1\n");
    fprintf(f, "    mon.isEgg = (flags >> 2) & 1\n");
    fprintf(f, "    mon.otName = toString(emu:readRange(address + 20, playerNameLength))\n");
    fprintf(f, "    mon.markings = emu:read8(address + 27)\n");
    fprintf(f, "\n");
    fprintf(f, "    local key = mon.otId ~ mon.personality\n");
    fprintf(f, "    local substructSelector = {\n");
    fprintf(f, "        [ 0] = {0, 1, 2, 3},\n");
    fprintf(f, "        [ 1] = {0, 1, 3, 2},\n");
    fprintf(f, "        [ 2] = {0, 2, 1, 3},\n");
    fprintf(f, "        [ 3] = {0, 3, 1, 2},\n");
    fprintf(f, "        [ 4] = {0, 2, 3, 1},\n");
    fprintf(f, "        [ 5] = {0, 3, 2, 1},\n");
    fprintf(f, "        [ 6] = {1, 0, 2, 3},\n");
    fprintf(f, "        [ 7] = {1, 0, 3, 2},\n");
    fprintf(f, "        [ 8] = {2, 0, 1, 3},\n");
    fprintf(f, "        [ 9] = {3, 0, 1, 2},\n");
    fprintf(f, "        [10] = {2, 0, 3, 1},\n");
    fprintf(f, "        [11] = {3, 0, 2, 1},\n");
    fprintf(f, "        [12] = {1, 2, 0, 3},\n");
    fprintf(f, "        [13] = {1, 3, 0, 2},\n");
    fprintf(f, "        [14] = {2, 1, 0, 3},\n");
    fprintf(f, "        [15] = {3, 1, 0, 2},\n");
    fprintf(f, "        [16] = {2, 3, 0, 1},\n");
    fprintf(f, "        [17] = {3, 2, 0, 1},\n");
    fprintf(f, "        [18] = {1, 2, 3, 0},\n");
    fprintf(f, "        [19] = {1, 3, 2, 0},\n");
    fprintf(f, "        [20] = {2, 1, 3, 0},\n");
    fprintf(f, "        [21] = {3, 1, 2, 0},\n");
    fprintf(f, "        [22] = {2, 3, 1, 0},\n");
    fprintf(f, "        [23] = {3, 2, 1, 0},\n");
    fprintf(f, "    }\n");
    fprintf(f, "\n");
    fprintf(f, "    local pSel = substructSelector[mon.personality %% 24]\n");
    fprintf(f, "    local ss0 = {}\n");
    fprintf(f, "    local ss1 = {}\n");
    fprintf(f, "    local ss2 = {}\n");
    fprintf(f, "    local ss3 = {}\n");
    fprintf(f, "\n");
    fprintf(f, "    for i = 0, 2 do\n");
    fprintf(f, "        ss0[i] = emu:read32(address + 32 + pSel[1] * 12 + i * 4) ~ key\n");
    fprintf(f, "        ss1[i] = emu:read32(address + 32 + pSel[2] * 12 + i * 4) ~ key\n");
    fprintf(f, "        ss2[i] = emu:read32(address + 32 + pSel[3] * 12 + i * 4) ~ key\n");
    fprintf(f, "        ss3[i] = emu:read32(address + 32 + pSel[4] * 12 + i * 4) ~ key\n");
    fprintf(f, "    end\n");
    fprintf(f, "\n");
    fprintf(f, "    mon.species = ss0[0] & 0x7FF\n");
    fprintf(f, "    mon.heldItem = ss0[0] >> 16\n");
    fprintf(f, "    mon.experience = ss0[1] & 0x1FFFFF\n");
    fprintf(f, "    mon.ppBonuses = ss0[2] & 0xFF\n");
    fprintf(f, "    mon.friendship = (ss0[2] >> 8) & 0xFF\n");
    fprintf(f, "\n");
    fprintf(f, "    mon.moves = {\n");
    fprintf(f, "        ss1[0] & 0xFFFF,\n");
    fprintf(f, "        ss1[0] >> 16,\n");
    fprintf(f, "        ss1[1] & 0x7FF,\n");
    fprintf(f, "        ss1[1] >> 16\n");
    fprintf(f, "    }\n");
    fprintf(f, "\n");
    fprintf(f, "    mon.hiddenNature = (ss1[1] >> 11) & 0x1F\n");
    fprintf(f, "    -- console:log(string.format(\"%%d\", mon.hiddenNature))\n");
    fprintf(f, "\n");
    fprintf(f, "    mon.pp = {\n");
    fprintf(f, "        ss1[2] & 0xFF,\n");
    fprintf(f, "        (ss1[2] >> 8) & 0xFF,\n");
    fprintf(f, "        (ss1[2] >> 16) & 0xFF,\n");
    fprintf(f, "        ss1[2] >> 24\n");
    fprintf(f, "    }\n");
    fprintf(f, "\n");
    fprintf(f, "    mon.hpEV = ss2[0] & 0xFF\n");
    fprintf(f, "    mon.attackEV = (ss2[0] >> 8) & 0xFF\n");
    fprintf(f, "    mon.defenseEV = (ss2[0] >> 16) & 0xFF\n");
    fprintf(f, "    mon.speedEV = ss2[0] >> 24\n");
    fprintf(f, "    mon.spAttackEV = ss2[1] & 0xFF\n");
    fprintf(f, "    mon.spDefenseEV = (ss2[1] >> 8) & 0xFF\n");
    fprintf(f, "    mon.cool = (ss2[1] >> 16) & 0xFF\n");
    fprintf(f, "    mon.beauty = ss2[1] >> 24\n");
    fprintf(f, "    mon.cute = ss2[2] & 0xFF\n");
    fprintf(f, "    mon.smart = (ss2[2] >> 8) & 0xFF\n");
    fprintf(f, "    mon.tough = (ss2[2] >> 16) & 0xFF\n");
    fprintf(f, "    mon.sheen = ss2[2] >> 24\n");
    fprintf(f, "\n");
    fprintf(f, "    mon.pokerus = ss3[0] & 0xFF\n");
    fprintf(f, "    mon.metLocation = (ss3[0] >> 8) & 0xFF\n");
    fprintf(f, "    flags = ss3[0] >> 16\n");
    fprintf(f, "    mon.metLevel = flags & 0x7F\n");
    fprintf(f, "    mon.metGame = (flags >> 7) & 0xF\n");
    fprintf(f, "    mon.pokeball = (flags >> 11) & 0xF\n");
    fprintf(f, "    mon.otGender = (flags >> 15) & 0x1\n");
    fprintf(f, "    flags = ss3[1]\n");
    fprintf(f, "    mon.hpIV = (flags >> 0) & 0x1F\n");
    fprintf(f, "    mon.attackIV = (flags >> 5) & 0x1F\n");
    fprintf(f, "    mon.defenseIV = (flags >> 10) & 0x1F\n");
    fprintf(f, "    mon.speedIV = (flags >> 15) & 0x1F\n");
    fprintf(f, "    mon.spAttackIV = (flags >> 20) & 0x1F\n");
    fprintf(f, "    mon.spDefenseIV = (flags >> 25) & 0x1F\n");
    fprintf(f, "    -- Bit 30 is another \"isEgg\" bit\n");
    fprintf(f, "    flags = ss3[2]\n");
    fprintf(f, "    mon.coolRibbon = flags & 7\n");
    fprintf(f, "    mon.beautyRibbon = (flags >> 3) & 7\n");
    fprintf(f, "    mon.cuteRibbon = (flags >> 6) & 7\n");
    fprintf(f, "    mon.smartRibbon = (flags >> 9) & 7\n");
    fprintf(f, "    mon.toughRibbon = (flags >> 12) & 7\n");
    fprintf(f, "    mon.championRibbon = (flags >> 15) & 1\n");
    fprintf(f, "    mon.winningRibbon = (flags >> 16) & 1\n");
    fprintf(f, "    mon.victoryRibbon = (flags >> 17) & 1\n");
    fprintf(f, "    mon.artistRibbon = (flags >> 18) & 1\n");
    fprintf(f, "    mon.effortRibbon = (flags >> 19) & 1\n");
    fprintf(f, "    mon.marineRibbon = (flags >> 20) & 1\n");
    fprintf(f, "    mon.landRibbon = (flags >> 21) & 1\n");
    fprintf(f, "    mon.skyRibbon = (flags >> 22) & 1\n");
    fprintf(f, "    mon.countryRibbon = (flags >> 23) & 1\n");
    fprintf(f, "    mon.nationalRibbon = (flags >> 24) & 1\n");
    fprintf(f, "    mon.earthRibbon = (flags >> 25) & 1\n");
    fprintf(f, "    mon.worldRibbon = (flags >> 26) & 1\n");
    fprintf(f, "    mon.abilityNum = (flags >> 29) & 3\n");
    fprintf(f, "    return mon\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function readPartyMon(address)\n");
    fprintf(f, "    local mon = readBoxMon(address)\n");
    fprintf(f, "    mon.status = emu:read32(address + 80)\n");
    fprintf(f, "    mon.level = emu:read8(address + 84)\n");
    fprintf(f, "    -- if (levelCap == 0) then\n");
    fprintf(f, "    --  levelCap = mon.level\n");
    fprintf(f, "    -- end\n");
    fprintf(f, "    mon.mail = emu:read32(address + 85)\n");
    fprintf(f, "    mon.hp = emu:read16(address + 86)\n");
    fprintf(f, "    mon.maxHP = emu:read16(address + 88)\n");
    fprintf(f, "    mon.attack = emu:read16(address + 90)\n");
    fprintf(f, "    mon.defense = emu:read16(address + 92)\n");
    fprintf(f, "    mon.speed = emu:read16(address + 94)\n");
    fprintf(f, "    mon.spAttack = emu:read16(address + 96)\n");
    fprintf(f, "    mon.spDefense = emu:read16(address + 98)\n");
    fprintf(f, "    return mon\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function getAbility(mon)\n");
    fprintf(f, "    current = abilities[emu:read16(speciesInfo+(speciesStructSize*mon.species)+24+(mon.abilityNum*2))]\n");
    fprintf(f, "    return current\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function getItem(mon)\n");
    fprintf(f, "    return item[(mon.heldItem*10)]\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function getNature(mon)\n");
    fprintf(f, "    if (mon.hiddenNature == 0) then\n");
    fprintf(f, "        return nature[(mon.personality %% 25)+1]\n");
    fprintf(f, "    end\n");
    fprintf(f, "    return nature[mon.hiddenNature+1]\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function getPartyPrint(mon)\n");
    fprintf(f, "    str = ""\n");
    fprintf(f, "    str = str .. mons[mon.species]\n");
    fprintf(f, "    if (item[mon.heldItem]) then\n");
    fprintf(f, "        str = str .. string.format(\" @ %%s\", item[mon.heldItem]) \n");
    fprintf(f, "    end\n");
    fprintf(f, "    str = str .. string.format(\"\n\")\n");
    fprintf(f, "    str = str .. \"Ability: \" .. string.format(\"%%s\", getAbility(mon)) .. string.format(\"\n\")\n");
    fprintf(f, "    str = str .. string.format(\"Level: %%d\n\", mon.level)\n");
    fprintf(f, "    str = str .. string.format(\"%%s\", getNature(mon)) .. \" Nature\" .. string.format(\"\n\")\n");
    fprintf(f, "    str = str .. string.format(\"IVs: %%d HP / %%d Atk / %%d Def / %%d SpA / %%d SpD / %%d Spe\", mon.hpIV, mon.attackIV, mon.defenseIV, mon.spAttackIV, mon.spDefenseIV, mon.speedIV) .. string.format(\"\n\")\n");
    fprintf(f, "    for i=1,4 do\n");
    fprintf(f, "        local mv = move[mon.moves[i] + 1]\n");
    fprintf(f, "        if(mv == \"Hidden Power\") then\n");
    fprintf(f, "            str = str .. string.format(\"- Hidden Power %%s\n\", getHP(mon))\n");
    fprintf(f, "            else\n");
    fprintf(f, "            if(mv ~= \"\") then\n");
    fprintf(f, "                str = str .. string.format(\"- %%s\n\", mv)\n");
    fprintf(f, "            end\n");
    fprintf(f, "        end\n");
    fprintf(f, "    end\n");
    fprintf(f, "    str = str .. string.format(\"\n\")\n");
    fprintf(f, "    return str\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function getPCPrint(mon)\n");
    fprintf(f, "    str = \"\"\n");
    fprintf(f, "    str = str .. mons[mon.species]\n");
    fprintf(f, "    if (item[mon.heldItem]) then\n");
    fprintf(f, "        str = str .. string.format(\" @ %%s\", item[mon.heldItem]) \n");
    fprintf(f, "    end\n");
    fprintf(f, "    str = str .. string.format(\"\n\")\n");
    fprintf(f, "    str = str .. \"Ability: \" .. string.format(\"%%s\", getAbility(mon)) .. string.format(\"\n\")\n");
    fprintf(f, "    -- str = str .. string.format(\"Level: %%d\n\", levelCap)\n");
    fprintf(f, "    str = str .. string.format(\"Level: %%d\n\", calcLevel(mon.experience, mon.species))\n");
    fprintf(f, "    str = str .. string.format(\"%%s\", getNature(mon)) .. \" Nature\" .. string.format(\"\n\")\n");
    fprintf(f, "    str = str .. string.format(\"IVs: %%d HP / %%d Atk / %%d Def / %%d SpA / %%d SpD / %%d Spe\", mon.hpIV, mon.attackIV, mon.defenseIV, mon.spAttackIV, mon.spDefenseIV, mon.speedIV) .. string.format(\"\n\")\n");
    fprintf(f, "    for i=1,4 do\n");
    fprintf(f, "        local mv = move[mon.moves[i] + 1]\n");
    fprintf(f, "        if(mv == \"Hidden Power\") then\n");
    fprintf(f, "            str = str .. string.format(\"- Hidden Power %%s\n\", getHP(mon))\n");
    fprintf(f, "            else\n");
    fprintf(f, "            if(mv ~= \"\") then\n");
    fprintf(f, "                str = str .. string.format(\"- %%s\n\", mv)\n");
    fprintf(f, "            end\n");
    fprintf(f, "        end\n");
    fprintf(f, "    end\n");
    fprintf(f, "    str = str .. string.format(\"\n\")\n");
    fprintf(f, "    return str\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function printPartyStatus(buffer)\n");
    fprintf(f, "    address = storageLoc + 4\n");
    fprintf(f, "    i = 0\n");
    fprintf(f, "    buffer:clear()\n");
    fprintf(f, "    for _, mon in ipairs(getParty()) do\n");
    fprintf(f, "        if (mon.species ~= 0) then\n");
    fprintf(f, "            buffer:print(getPartyPrint(mon))\n");
    fprintf(f, "        end\n");
    fprintf(f, "    end\n");
    fprintf(f, "    while i<120 do\n");
    fprintf(f, "        if (emu:read32(address) ~=0) then\n");
    fprintf(f, "            buffer:print(getPCPrint(readBoxMon(address)))\n");
    fprintf(f, "        end\n");
    fprintf(f, "        i = i+1\n");
    fprintf(f, "        address = address + 80\n");
    fprintf(f, "    end\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function getHP(mon)\n");
    fprintf(f, "    hptype = ((mon.hpIV %% 2 + (2 * (mon.attackIV %% 2)) +\n");
    fprintf(f, "                 (4 * (mon.defenseIV %% 2)) + (8 * (mon.speedIV %% 2)) +\n");
    fprintf(f, "                 (16 * (mon.spAttackIV %% 2)) + (32 * (mon.spDefenseIV %% 2))) * 5) /\n");
    fprintf(f, "                 21\n");
    fprintf(f, "    hptype = math.floor(hptype)\n");
    fprintf(f, "    if (hptype == 0) then return \"Fighting\" end\n");
    fprintf(f, "    if (hptype == 1) then return \"Flying\" end\n");
    fprintf(f, "    if (hptype == 2) then return \"Poison\" end\n");
    fprintf(f, "    if (hptype == 3) then return \"Ground\" end\n");
    fprintf(f, "    if (hptype == 4) then return \"Rock\" end\n");
    fprintf(f, "    if (hptype == 5) then return \"Bug\" end\n");
    fprintf(f, "    if (hptype == 6) then return \"Ghost\" end\n");
    fprintf(f, "    if (hptype == 7) then return \"Steel\" end\n");
    fprintf(f, "    if (hptype == 8) then return \"Fire\" end\n");
    fprintf(f, "    if (hptype == 9) then return \"Water\" end\n");
    fprintf(f, "    if (hptype == 10) then return \"Grass\" end\n");
    fprintf(f, "    if (hptype == 11) then return \"Electric\" end\n");
    fprintf(f, "    if (hptype == 12) then return \"Psychic\" end\n");
    fprintf(f, "    if (hptype == 13) then return \"Ice\" end\n");
    fprintf(f, "    if (hptype == 14) then return \"Dragon\" end\n");
    fprintf(f, "    if (hptype == 15) then return \"Dark\" end\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function getHiddens(buffer)\n");
    fprintf(f, "    address = storageLoc + 4\n");
    fprintf(f, "    i = 0\n");
    fprintf(f, "    buffer:clear()\n");
    fprintf(f, "    for _, mon in ipairs(getParty()) do\n");
    fprintf(f, "        if (mon.species ~= 0) then\n");
    fprintf(f, "            buffer:print(string.format(\"%%s - %%s\n\", mons[mon.species],\n");
    fprintf(f, "                                       getHP(mon)))\n");
    fprintf(f, "        end\n");
    fprintf(f, "    end\n");
    fprintf(f, "    while i < 120 do\n");
    fprintf(f, "        if (emu:read32(address) ~= 0) then\n");
    fprintf(f, "            buffer:print(string.format(\"%%s - %%s\n\",\n");
    fprintf(f, "                                       mons[readBoxMon(address).species],\n");
    fprintf(f, "                                       getHP(readBoxMon(address))))\n");
    fprintf(f, "        end\n");
    fprintf(f, "        i = i + 1\n");
    fprintf(f, "        address = address + 80\n");
    fprintf(f, "    end\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function hiddens()\n");
    fprintf(f, "    if not hiddenBuffer then\n");
    fprintf(f, "        console:log(\"error\")\n");
    fprintf(f, "        return\n");
    fprintf(f, "    end\n");
    fprintf(f, "    getHiddens(hiddenBuffer)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function startScript()\n");
    fprintf(f, "    console:log('To update your exports type \'export()\'')\n");
    fprintf(f, "    console:log('To update your hidden powers type \'hiddens()\'')\n");
    fprintf(f, "    console:log('To perfect a mon: \'perfect(slotNum, \"Nature\")\'')\n");
    fprintf(f, "    console:log('To set a move: \'setMove(slotNum, moveSlotNum, \"MoveName\")\'')\n");
    fprintf(f, "    console:log('To set a nature: \'setNature(slotNum, \"Nature\")\'')\n");
    fprintf(f, "    console:log('To set nature and IVs: \'setNatureAndIVs(slotNum, \"Nature\", {hp, atk, def, spa, spd, spe})\'')\n");
    fprintf(f, "    console:log('To set the level of a mon: \'setLevel(slotNum, level)\'')\n");
    fprintf(f, "    console:log('To set a species: \'setSpecies(slotNum, \"Species\")\'')\n");
    fprintf(f, "    console:log('To set an ability: \'setAbility(slotNum, abilityNum)\'')\n");
    fprintf(f, "    console:log('To set a held item: \'setItem(slotNum, \"Item\")\'')\n");
    fprintf(f, "    console:log('To pre-damage: \'predamage(slotNum, desiredHP)\'')\n");
    fprintf(f, "    console:log('To pre-poison: \'prepoison(slotNum)\' [also: presleep/preburn/prefreeze/prepara/pretoxic/prefrostbite]')\n");
    fprintf(f, "    console:log('\nFor the commands that update a mon\'s stats, you may have to put the mon in and out of the box or level it up for the stat changes to properly take effect')\n");
    fprintf(f, "    if not partyBuffer then\n");
    fprintf(f, "        partyBuffer = console:createBuffer(\"Showdown Export\")\n");
    fprintf(f, "        partyBuffer:setSize(200,1000)\n");
    fprintf(f, "        export()\n");
    fprintf(f, "    end\n");
    fprintf(f, "    if not hiddenBuffer then\n");
    fprintf(f, "        hiddenBuffer = console:createBuffer(\"Hidden Powers\")\n");
    fprintf(f, "        hiddenBuffer:setSize(200, 200)\n");
    fprintf(f, "        hiddens()\n");
    fprintf(f, "    end\n");
    fprintf(f, "    if not helpBuffer then\n");
    fprintf(f, "        helpBuffer = console:createBuffer(\"Help Text\")\n");
    fprintf(f, "    console:log('To update your exports type \'export()\'')\n");
    fprintf(f, "    console:log('To update your hidden powers type \'hiddens()\'')\n");
    fprintf(f, "    console:log('To perfect a mon: \'perfect(slotNum, \"Nature\")\'')\n");
    fprintf(f, "    console:log('To set a move: \'setMove(slotNum, moveSlotNum, \"MoveName\")\'')\n");
    fprintf(f, "    console:log('To set a nature: \'setNature(slotNum, \"Nature\")\'')\n");
    fprintf(f, "    console:log('To set nature and IVs: \'setNatureAndIVs(slotNum, \"Nature\", {hp, atk, def, spa, spd, spe})\'')\n");
    fprintf(f, "    console:log('To set the level of a mon: \'setLevel(slotNum, level)\'')\n");
    fprintf(f, "    console:log('To set a species: \'setSpecies(slotNum, \"Species\")\'')\n");
    fprintf(f, "    console:log('To set an ability: \'setAbility(slotNum, abilityNum)\'')\n");
    fprintf(f, "    console:log('To set a held item: \'setItem(slotNum, \"Item\")\'')\n");
    fprintf(f, "    console:log('To pre-damage: \'predamage(slotNum, desiredHP)\'')\n");
    fprintf(f, "    console:log('To pre-poison: \'prepoison(slotNum)\' [also: presleep/preburn/prefreeze/prepara/pretoxic/prefrostbite]')\n");
    fprintf(f, "    console:log('\nFor the commands that update a mon\'s stats, you may have to put the mon in and out of the box or level it up for the stat changes to properly take effect')\n");
    fprintf(f, "    end\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function export()\n");
    fprintf(f, "    if not partyBuffer then\n");
    fprintf(f, "        console:log(\"error\")\n");
    fprintf(f, "        return\n");
    fprintf(f, "    end\n");
    fprintf(f, "    printPartyStatus(partyBuffer)\n");
    fprintf(f, "    levelCap = 0\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function getSlotAddress(slot)\n");
    fprintf(f, "    if (slot < 1 or slot > emu:read8(partyCount)) then\n");
    fprintf(f, "        console:log(\"Invalid slot number\")\n");
    fprintf(f, "        return\n");
    fprintf(f, "    end\n");
    fprintf(f, "    return partyloc + partyMonSize * (slot - 1)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function setIVs(slot, IVs)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    setBoxMon(address, nil, IVs, nil, nil, nil, nil, nil, nil)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function perfect(slot, newNature)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    setBoxMon(address, newNature, {31, 31, 31, 31, 31, 31}, nil, nil, nil, nil,\n");
    fprintf(f, "              nil, nil)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function setMove(slot, moveSlot, moveName)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    setBoxMon(address, nil, nil, moveSlot, moveName, nil, nil, nil, nil)\n");
    fprintf(f, "\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function setNature(slot, newNature)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    setBoxMon(address, newNature, nil, nil, nil, nil, nil, nil, nil)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function setNatureAndIVs(slot, newNature, IVs)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    setBoxMon(address, newNature, IVs, nil, nil, nil, nil, nil, nil)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function setLevel(slot, newLevel)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    setBoxMon(address, nil, nil, nil, nil, newLevel, nil, nil, nil)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function setSpecies(slot, newSpecies)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    setBoxMon(address, nil, nil, nil, nil, nil, newSpecies, nil, nil)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function setAbility(slot, newAbilityNum)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    setBoxMon(address, nil, nil, nil, nil, nil, nil, newAbilityNum, nil)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function setItem(slot, newHeldItem)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    setBoxMon(address, nil, nil, nil, nil, nil, nil, nil, newHeldItem)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function indexOf(array, value)\n");
    fprintf(f, "    for i, v in ipairs(array) do\n");
    fprintf(f, "        if v == value then\n");
    fprintf(f, "            return i\n");
    fprintf(f, "        end\n");
    fprintf(f, "    end\n");
    fprintf(f, "    return nil\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function thieve(slot, newSpecies, newLevel, newAbilityNum, newMoves, newHeldItem)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    setBoxMon(address, nil, nil, 1, newMoves[1], nil, newSpecies, newAbilityNum, newHeldItem)\n");
    fprintf(f, "    setBoxMon(address, nil, nil, 2, newMoves[2], newLevel, nil, nil, nil)\n");
    fprintf(f, "    setBoxMon(address, nil, nil, 3, newMoves[3], nil, nil, nil, nil)\n");
    fprintf(f, "    setBoxMon(address, nil, nil, 4, newMoves[4], nil, nil, nil, nil)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function predamage(slot, damage)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    local maxHP = emu:read16(address + 88)\n");
    fprintf(f, "    if (damage <= 0) then\n");
    fprintf(f, "        console:log(\"You probably don't want to do that\")\n");
    fprintf(f, "        return\n");
    fprintf(f, "    end\n");
    fprintf(f, "    if (damage > maxHP) then damage = maxHP end\n");
    fprintf(f, "    emu:write16(address + 86, damage & 0xFFFF)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function presleep(slot)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    emu:write32(address + 80, 1 << 0 | 1 << 1 | 1 << 2)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function prepoison(slot)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    emu:write32(address + 80, 1 << 3)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function preburn(slot)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    emu:write32(address + 80, 1 << 4)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function prefreeze(slot)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    emu:write32(address + 80, 1 << 5)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function prepara(slot)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    emu:write32(address + 80, 1 << 6)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function pretoxic(slot)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    emu:write32(address + 80, 1 << 7)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function prefrostbite(slot)\n");
    fprintf(f, "    local address = getSlotAddress(slot)\n");
    fprintf(f, "    emu:write32(address + 80, 1 << 12)\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "callbacks:add(\"start\", startScript)\n");
    fprintf(f, "if emu then\n");
    fprintf(f, "    startScript()\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function randomize(slot)\n");
    fprintf(f, "    if (slot < 1 or slot > emu:read8(partyCount)) then\n");
    fprintf(f, "        console:log(\"Invalid slot number\")\n");
    fprintf(f, "        return\n");
    fprintf(f, "    end\n");
    fprintf(f, "    local randomNumber = numberGen()\n");
    fprintf(f, "    local newSpecies = randomPokemon(randomNumber)\n");
    fprintf(f, "    local address = partyloc + partyMonSize * (slot - 1)\n");
    fprintf(f, "    setBoxMon(address, nil, nil, nil, nil, nil, newSpecies, nil)\n");
    fprintf(f, "   \n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function numberGen()\n");
    fprintf(f, "    math.randomseed(os.time())\n");
    fprintf(f, "    local min = 1\n");
    fprintf(f, "    local max = 1025\n");
    fprintf(f, "    local randomNumber = math.random(min, max)\n");
    fprintf(f, "    return randomNumber\n");
    fprintf(f, "end\n");
    fprintf(f, "\n");
    fprintf(f, "function randomPokemon(index)\n");
    fprintf(f, "    local pokemonList = {\"Bulbasaur\",\"Ivysaur\",\"Venusaur\",\"Charmander\",\"Charmeleon\",\"Charizard\",\"Squirtle\",\"Wartortle\",\"Blastoise\",\"Caterpie\",\"Metapod\",\"Butterfree\",\"Weedle\",\"Kakuna\",\"Beedrill\",\"Pidgey\",\"Pidgeotto\",\"Pidgeot\",\"Rattata\",\"Raticate\",\"Spearow\",\"Fearow\",\"Ekans\",\"Arbok\",\"Pikachu\",\"Raichu\",\"Sandshrew\",\"Sandslash\",\"Nidoran♀\",\"Nidorina\",\"Nidoqueen\",\"Nidoran♂\",\"Nidorino\",\"Nidoking\",\"Clefairy\",\"Clefable\",\"Vulpix\",\"Ninetales\",\"Jigglypuff\",\"Wigglytuff\",\"Zubat\",\"Golbat\",\"Oddish\",\"Gloom\",\"Vileplume\",\"Paras\",\"Parasect\",\"Venonat\",\"Venomoth\",\"Diglett\",\"Dugtrio\",\"Meowth\",\"Persian\",\"Psyduck\",\"Golduck\",\"Mankey\",\"Primeape\",\"Growlithe\",\"Arcanine\",\"Poliwag\",\"Poliwhirl\",\"Poliwrath\",\"Abra\",\"Kadabra\",\"Alakazam\",\"Machop\",\"Machoke\",\"Machamp\",\"Bellsprout\",\"Weepinbell\",\"Victreebel\",\"Tentacool\",\"Tentacruel\",\"Geodude\",\"Graveler\",\"Golem\",\"Ponyta\",\"Rapidash\",\"Slowpoke\",\"Slowbro\",\"Magnemite\",\"Magneton\",\"Farfetch’d\",\"Doduo\",\"Dodrio\",\"Seel\",\"Dewgong\",\"Grimer\",\"Muk\",\"Shellder\",\"Cloyster\",\"Gastly\",\"Haunter\",\"Gengar\",\"Onix\",\"Drowzee\",\"Hypno\",\"Krabby\",\"Kingler\",\"Voltorb\",\"Electrode\",\"Exeggcute\",\"Exeggutor\",\"Cubone\",\"Marowak\",\"Hitmonlee\",\"Hitmonchan\",\"Lickitung\",\"Koffing\",\"Weezing\",\"Rhyhorn\",\"Rhydon\",\"Chansey\",\"Tangela\",\"Kangaskhan\",\"Horsea\",\"Seadra\",\"Goldeen\",\"Seaking\",\"Staryu\",\"Starmie\",\"Mr. Mime\",\"Scyther\",\"Jynx\",\"Electabuzz\",\"Magmar\",\"Pinsir\",\"Tauros\",\"Magikarp\",\"Gyarados\",\"Lapras\",\"Ditto\",\"Eevee\",\"Vaporeon\",\"Jolteon\",\"Flareon\",\"Porygon\",\"Omanyte\",\"Omastar\",\"Kabuto\",\"Kabutops\",\"Aerodactyl\",\"Snorlax\",\"Articuno\",\"Zapdos\",\"Moltres\",\"Dratini\",\"Dragonair\",\"Dragonite\",\"Mewtwo\",\"Mew\",\"Chikorita\",\"Bayleef\",\"Meganium\",\"Cyndaquil\",\"Quilava\",\"Typhlosion\",\"Totodile\",\"Croconaw\",\"Feraligatr\",\"Sentret\",\"Furret\",\"Hoothoot\",\"Noctowl\",\"Ledyba\",\"Ledian\",\"Spinarak\",\"Ariados\",\"Crobat\",\"Chinchou\",\"Lanturn\",\"Pichu\",\"Cleffa\",\"Igglybuff\",\"Togepi\",\"Togetic\",\"Natu\",\"Xatu\",\"Mareep\",\"Flaaffy\",\"Ampharos\",\"Bellossom\",\"Marill\",\"Azumarill\",\"Sudowoodo\",\"Politoed\",\"Hoppip\",\"Skiploom\",\"Jumpluff\",\"Aipom\",\"Sunkern\",\"Sunflora\",\"Yanma\",\"Wooper\",\"Quagsire\",\"Espeon\",\"Umbreon\",\"Murkrow\",\"Slowking\",\"Misdreavus\",\"Unown\",\"Wobbuffet\",\"Girafarig\",\"Pineco\",\"Forretress\",\"Dunsparce\",\"Gligar\",\"Steelix\",\"Snubbull\",\"Granbull\",\"Qwilfish\",\"Scizor\",\"Shuckle\",\"Heracross\",\"Sneasel\",\"Teddiursa\",\"Ursaring\",\"Slugma\",\"Magcargo\",\"Swinub\",\"Piloswine\",\"Corsola\",\"Remoraid\",\"Octillery\",\"Delibird\",\"Mantine\",\"Skarmory\",\"Houndour\",\"Houndoom\",\"Kingdra\",\"Phanpy\",\"Donphan\",\"Porygon2\",\"Stantler\",\"Smeargle\",\"Tyrogue\",\"Hitmontop\",\"Smoochum\",\"Elekid\",\"Magby\",\"Miltank\",\"Blissey\",\"Raikou\",\"Entei\",\"Suicune\",\"Larvitar\",\"Pupitar\",\"Tyranitar\",\"Lugia\",\"Ho-Oh\",\"Celebi\",\"Treecko\",\"Grovyle\",\"Sceptile\",\"Torchic\",\"Combusken\",\"Blaziken\",\"Mudkip\",\"Marshtomp\",\"Swampert\",\"Poochyena\",\"Mightyena\",\"Zigzagoon\",\"Linoone\",\"Wurmple\",\"Silcoon\",\"Beautifly\",\"Cascoon\",\"Dustox\",\"Lotad\",\"Lombre\",\"Ludicolo\",\"Seedot\",\"Nuzleaf\",\"Shiftry\",\"Taillow\",\"Swellow\",\"Wingull\",\"Pelipper\",\"Ralts\",\"Kirlia\",\"Gardevoir\",\"Surskit\",\"Masquerain\",\"Shroomish\",\"Breloom\",\"Slakoth\",\"Vigoroth\",\"Slaking\",\"Nincada\",\"Ninjask\",\"Shedinja\",\"Whismur\",\"Loudred\",\"Exploud\",\"Makuhita\",\"Hariyama\",\"Azurill\",\"Nosepass\",\"Skitty\",\"Delcatty\",\"Sableye\",\"Mawile\",\"Aron\",\"Lairon\",\"Aggron\",\"Meditite\",\"Medicham\",\"Electrike\",\"Manectric\",\"Plusle\",\"Minun\",\"Volbeat\",\"Illumise\",\"Roselia\",\"Gulpin\",\"Swalot\",\"Carvanha\",\"Sharpedo\",\"Wailmer\",\"Wailord\",\"Numel\",\"Camerupt\",\"Torkoal\",\"Spoink\",\"Grumpig\",\"Spinda\",\"Trapinch\",\"Vibrava\",\"Flygon\",\"Cacnea\",\"Cacturne\",\"Swablu\",\"Altaria\",\"Zangoose\",\"Seviper\",\"Lunatone\",\"Solrock\",\"Barboach\",\"Whiscash\",\"Corphish\",\"Crawdaunt\",\"Baltoy\",\"Claydol\",\"Lileep\",\"Cradily\",\"Anorith\",\"Armaldo\",\"Feebas\",\"Milotic\",\"Castform\",\"Kecleon\",\"Shuppet\",\"Banette\",\"Duskull\",\"Dusclops\",\"Tropius\",\"Chimecho\",\"Absol\",\"Wynaut\",\"Snorunt\",\"Glalie\",\"Spheal\",\"Sealeo\",\"Walrein\",\"Clamperl\",\"Huntail\",\"Gorebyss\",\"Relicanth\",\"Luvdisc\",\"Bagon\",\"Shelgon\",\"Salamence\",\"Beldum\",\"Metang\",\"Metagross\",\"Regirock\",\"Regice\",\"Registeel\",\"Latias\",\"Latios\",\"Kyogre\",\"Groudon\",\"Rayquaza\",\"Jirachi\",\"Deoxys\",\"Turtwig\",\"Grotle\",\"Torterra\",\"Chimchar\",\"Monferno\",\"Infernape\",\"Piplup\",\"Prinplup\",\"Empoleon\",\"Starly\",\"Staravia\",\"Staraptor\",\"Bidoof\",\"Bibarel\",\"Kricketot\",\"Kricketune\",\"Shinx\",\"Luxio\",\"Luxray\",\"Budew\",\"Roserade\",\"Cranidos\",\"Rampardos\",\"Shieldon\",\"Bastiodon\",\"Burmy\",\"Wormadam\",\"Mothim\",\"Combee\",\"Vespiquen\",\"Pachirisu\",\"Buizel\",\"Floatzel\",\"Cherubi\",\"Cherrim\",\"Shellos\",\"Gastrodon\",\"Ambipom\",\"Drifloon\",\"Drifblim\",\"Buneary\",\"Lopunny\",\"Mismagius\",\"Honchkrow\",\"Glameow\",\"Purugly\",\"Chingling\",\"Stunky\",\"Skuntank\",\"Bronzor\",\"Bronzong\",\"Bonsly\",\"Mime Jr.\",\"Happiny\",\"Chatot\",\"Spiritomb\",\"Gible\",\"Gabite\",\"Garchomp\",\"Munchlax\",\"Riolu\",\"Lucario\",\"Hippopotas\",\"Hippowdon\",\"Skorupi\",\"Drapion\",\"Croagunk\",\"Toxicroak\",\"Carnivine\",\"Finneon\",\"Lumineon\",\"Mantyke\",\"Snover\",\"Abomasnow\",\"Weavile\",\"Magnezone\",\"Lickilicky\",\"Rhyperior\",\"Tangrowth\",\"Electivire\",\"Magmortar\",\"Togekiss\",\"Yanmega\",\"Leafeon\",\"Glaceon\",\"Gliscor\",\"Mamoswine\",\"Porygon-Z\",\"Gallade\",\"Probopass\",\"Dusknoir\",\"Froslass\",\"Rotom\",\"Uxie\",\"Mesprit\",\"Azelf\",\"Dialga\",\"Palkia\",\"Heatran\",\"Regigigas\",\"Giratina\",\"Cresselia\",\"Phione\",\"Manaphy\",\"Darkrai\",\"Shaymin\",\"Arceus\",\"Victini\",\"Snivy\",\"Servine\",\"Serperior\",\"Tepig\",\"Pignite\",\"Emboar\",\"Oshawott\",\"Dewott\",\"Samurott\",\"Patrat\",\"Watchog\",\"Lillipup\",\"Herdier\",\"Stoutland\",\"Purrloin\",\"Liepard\",\"Pansage\",\"Simisage\",\"Pansear\",\"Simisear\",\"Panpour\",\"Simipour\",\"Munna\",\"Musharna\",\"Pidove\",\"Tranquill\",\"Unfezant\",\"Blitzle\",\"Zebstrika\",\"Roggenrola\",\"Boldore\",\"Gigalith\",\"Woobat\",\"Swoobat\",\"Drilbur\",\"Excadrill\",\"Audino\",\"Timburr\",\"Gurdurr\",\"Conkeldurr\",\"Tympole\",\"Palpitoad\",\"Seismitoad\",\"Throh\",\"Sawk\",\"Sewaddle\",\"Swadloon\",\"Leavanny\",\"Venipede\",\"Whirlipede\",\"Scolipede\",\"Cottonee\",\"Whimsicott\",\"Petilil\",\"Lilligant\",\"Basculin\",\"Sandile\",\"Krokorok\",\"Krookodile\",\"Darumaka\",\"Darmanitan\",\"Maractus\",\"Dwebble\",\"Crustle\",\"Scraggy\",\"Scrafty\",\"Sigilyph\",\"Yamask\",\"Cofagrigus\",\"Tirtouga\",\"Carracosta\",\"Archen\",\"Archeops\",\"Trubbish\",\"Garbodor\",\"Zorua\",\"Zoroark\",\"Minccino\",\"Cinccino\",\"Gothita\",\"Gothorita\",\"Gothitelle\",\"Solosis\",\"Duosion\",\"Reuniclus\",\"Ducklett\",\"Swanna\",\"Vanillite\",\"Vanillish\",\"Vanilluxe\",\"Deerling\",\"Sawsbuck\",\"Emolga\",\"Karrablast\",\"Escavalier\",\"Foongus\",\"Amoonguss\",\"Frillish\",\"Jellicent\",\"Alomomola\",\"Joltik\",\"Galvantula\",\"Ferroseed\",\"Ferrothorn\",\"Klink\",\"Klang\",\"Klinklang\",\"Tynamo\",\"Eelektrik\",\"Eelektross\",\"Elgyem\",\"Beheeyem\",\"Litwick\",\"Lampent\",\"Chandelure\",\"Axew\",\"Fraxure\",\"Haxorus\",\"Cubchoo\",\"Beartic\",\"Cryogonal\",\"Shelmet\",\"Accelgor\",\"Stunfisk\",\"Mienfoo\",\"Mienshao\",\"Druddigon\",\"Golett\",\"Golurk\",\"Pawniard\",\"Bisharp\",\"Bouffalant\",\"Rufflet\",\"Braviary\",\"Vullaby\",\"Mandibuzz\",\"Heatmor\",\"Durant\",\"Deino\",\"Zweilous\",\"Hydreigon\",\"Larvesta\",\"Volcarona\",\"Cobalion\",\"Terrakion\",\"Virizion\",\"Tornadus\",\"Thundurus\",\"Reshiram\",\"Zekrom\",\"Landorus\",\"Kyurem\",\"Keldeo\",\"Meloetta\",\"Genesect\",\"Chespin\",\"Quilladin\",\"Chesnaught\",\"Fennekin\",\"Braixen\",\"Delphox\",\"Froakie\",\"Frogadier\",\"Greninja\",\"Bunnelby\",\"Diggersby\",\"Fletchling\",\"Fletchinder\",\"Talonflame\",\"Scatterbug\",\"Spewpa\",\"Vivillon\",\"Litleo\",\"Pyroar\",\"Flabébé\",\"Floette\",\"Florges\",\"Skiddo\",\"Gogoat\",\"Pancham\",\"Pangoro\",\"Furfrou\",\"Espurr\",\"Meowstic\",\"Honedge\",\"Doublade\",\"Aegislash\",\"Spritzee\",\"Aromatisse\",\"Swirlix\",\"Slurpuff\",\"Inkay\",\"Malamar\",\"Binacle\",\"Barbaracle\",\"Skrelp\",\"Dragalge\",\"Clauncher\",\"Clawitzer\",\"Helioptile\",\"Heliolisk\",\"Tyrunt\",\"Tyrantrum\",\"Amaura\",\"Aurorus\",\"Sylveon\",\"Hawlucha\",\"Dedenne\",\"Carbink\",\"Goomy\",\"Sliggoo\",\"Goodra\",\"Klefki\",\"Phantump\",\"Trevenant\",\"Pumpkaboo\",\"Gourgeist\",\"Bergmite\",\"Avalugg\",\"Noibat\",\"Noivern\",\"Xerneas\",\"Yveltal\",\"Zygarde\",\"Diancie\",\"Hoopa\",\"Volcanion\",\"Rowlet\",\"Dartrix\",\"Decidueye\",\"Litten\",\"Torracat\",\"Incineroar\",\"Popplio\",\"Brionne\",\"Primarina\",\"Pikipek\",\"Trumbeak\",\"Toucannon\",\"Yungoos\",\"Gumshoos\",\"Grubbin\",\"Charjabug\",\"Vikavolt\",\"Crabrawler\",\"Crabominable\",\"Oricorio\",\"Cutiefly\",\"Ribombee\",\"Rockruff\",\"Lycanroc\",\"Wishiwashi\",\"Mareanie\",\"Toxapex\",\"Mudbray\",\"Mudsdale\",\"Dewpider\",\"Araquanid\",\"Fomantis\",\"Lurantis\",\"Morelull\",\"Shiinotic\",\"Salandit\",\"Salazzle\",\"Stufful\",\"Bewear\",\"Bounsweet\",\"Steenee\",\"Tsareena\",\"Comfey\",\"Oranguru\",\"Passimian\",\"Wimpod\",\"Golisopod\",\"Sandygast\",\"Palossand\",\"Pyukumuku\",\"Type: Null\",\"Silvally\",\"Minior\",\"Komala\",\"Turtonator\",\"Togedemaru\",\"Mimikyu\",\"Bruxish\",\"Drampa\",\"Dhelmise\",\"Jangmo-o\",\"Hakamo-o\",\"Kommo-o\",\"Tapu Koko\",\"Tapu Lele\",\"Tapu Bulu\",\"Tapu Fini\",\"Cosmog\",\"Cosmoem\",\"Solgaleo\",\"Lunala\",\"Nihilego\",\"Buzzwole\",\"Pheromosa\",\"Xurkitree\",\"Celesteela\",\"Kartana\",\"Guzzlord\",\"Necrozma\",\"Magearna\",\"Marshadow\",\"Poipole\",\"Naganadel\",\"Stakataka\",\"Blacephalon\",\"Zeraora\",\"Meltan\",\"Melmetal\",\"Grookey\",\"Thwackey\",\"Rillaboom\",\"Scorbunny\",\"Raboot\",\"Cinderace\",\"Sobble\",\"Drizzile\",\"Inteleon\",\"Skwovet\",\"Greedent\",\"Rookidee\",\"Corvisquire\",\"Corviknight\",\"Blipbug\",\"Dottler\",\"Orbeetle\",\"Nickit\",\"Thievul\",\"Gossifleur\",\"Eldegoss\",\"Wooloo\",\"Dubwool\",\"Chewtle\",\"Drednaw\",\"Yamper\",\"Boltund\",\"Rolycoly\",\"Carkol\",\"Coalossal\",\"Applin\",\"Flapple\",\"Appletun\",\"Silicobra\",\"Sandaconda\",\"Cramorant\",\"Arrokuda\",\"Barraskewda\",\"Toxel\",\"Toxtricity\",\"Sizzlipede\",\"Centiskorch\",\"Clobbopus\",\"Grapploct\",\"Sinistea\",\"Polteageist\",\"Hatenna\",\"Hattrem\",\"Hatterene\",\"Impidimp\",\"Morgrem\",\"Grimmsnarl\",\"Obstagoon\",\"Perrserker\",\"Cursola\",\"Sirfetch’d\",\"Mr. Rime\",\"Runerigus\",\"Milcery\",\"Alcremie\",\"Falinks\",\"Pincurchin\",\"Snom\",\"Frosmoth\",\"Stonjourner\",\"Eiscue\",\"Indeedee\",\"Morpeko\",\"Cufant\",\"Copperajah\",\"Dracozolt\",\"Arctozolt\",\"Dracovish\",\"Arctovish\",\"Duraludon\",\"Dreepy\",\"Drakloak\",\"Dragapult\",\"Zacian\",\"Zamazenta\",\"Eternatus\",\"Kubfu\",\"Urshifu\",\"Zarude\",\"Regieleki\",\"Regidrago\",\"Glastrier\",\"Spectrier\",\"Calyrex\",\"Wyrdeer\",\"Kleavor\",\"Ursaluna\",\"Basculegion\",\"Sneasler\",\"Overqwil\",\"Enamorus\",\"Sprigatito\",\"Floragato\",\"Meowscarada\",\"Fuecoco\",\"Crocalor\",\"Skeledirge\",\"Quaxly\",\"Quaxwell\",\"Quaquaval\",\"Lechonk\",\"Oinkologne\",\"Tarountula\",\"Spidops\",\"Nymble\",\"Lokix\",\"Pawmi\",\"Pawmo\",\"Pawmot\",\"Tandemaus\",\"Maushold\",\"Fidough\",\"Dachsbun\",\"Smoliv\",\"Dolliv\",\"Arboliva\",\"Squawkabilly\",\"Nacli\",\"Naclstack\",\"Garganacl\",\"Charcadet\",\"Armarouge\",\"Ceruledge\",\"Tadbulb\",\"Bellibolt\",\"Wattrel\",\"Kilowattrel\",\"Maschiff\",\"Mabosstiff\",\"Shroodle\",\"Grafaiai\",\"Bramblin\",\"Brambleghast\",\"Toedscool\",\"Toedscruel\",\"Klawf\",\"Capsakid\",\"Scovillain\",\"Rellor\",\"Rabsca\",\"Flittle\",\"Espathra\",\"Tinkatink\",\"Tinkatuff\",\"Tinkaton\",\"Wiglett\",\"Wugtrio\",\"Bombirdier\",\"Finizen\",\"Palafin\",\"Varoom\",\"Revavroom\",\"Cyclizar\",\"Orthworm\",\"Glimmet\",\"Glimmora\",\"Greavard\",\"Houndstone\",\"Flamigo\",\"Cetoddle\",\"Cetitan\",\"Veluza\",\"Dondozo\",\"Tatsugiri\",\"Annihilape\",\"Clodsire\",\"Farigiraf\",\"Dudunsparce\",\"Kingambit\",\"Great Tusk\",\"Scream Tail\",\"Brute Bonnet\",\"Flutter Mane\",\"Slither Wing\",\"Sandy Shocks\",\"Iron Treads\",\"Iron Bundle\",\"Iron Hands\",\"Iron Jugulis\",\"Iron Moth\",\"Iron Thorns\",\"Frigibax\",\"Arctibax\",\"Baxcalibur\",\"Gimmighoul\",\"Gholdengo\",\"Wo-Chien\",\"Chien-Pao\",\"Ting-Lu\",\"Chi-Yu\",\"Roaring Moon\",\"Iron Valiant\",\"Koraidon\",\"Miraidon\",\"Walking Wake\",\"Iron Leaves\",\"Dipplin\",\"Poltchageist\",\"Sinistcha\",\"Okidogi\",\"Munkidori\",\"Fezandipiti\",\"Ogerpon\",\"Archaludon\",\"Hydrapple\",\"Gouging Fire\",\"Raging Bolt\",\"Iron Boulder\",\"Iron Crown\",\"Terapagos\",\"Pecharunt\"}\n");
    fprintf(f, "    return pokemonList[index]\n");
    fprintf(f, "end\n");

}

struct Source
{
    const char *path;
    const unsigned char *buffer;
    int buffer_n;
};

struct SourceLocation
{
    int line;
    int column;
};

struct Token
{
    const struct Source *source;
    struct SourceLocation location;
    int begin;
    int end;
};

struct Parser
{
    struct Source *source;
    struct SourceLocation location;
    int offset;
    struct SourceLocation error_location;
    const char *error;
    bool fatal_error;
};

static void usage(FILE *file, char *argv0)
{
    fprintf(file, "Usage: %s -o <output> <source>\n", argv0);
}

int main(int argc, char *argv[])
{
    int status = 1;
    FILE *source_file = NULL;
    FILE *output_file = NULL;
    unsigned char *source_buffer = NULL;

    const char *source_path = NULL;
    const char *output_path = NULL;
    const char *real_source_path = NULL;

    int opt;
    while ((opt = getopt(argc, argv, "i:o:")) != -1)
    {
        switch (opt)
        {
        case 'i':
            real_source_path = optarg;
            break;
        case 'o':
            output_path = optarg;
            break;
        default:
            fprintf(stderr, "unknown option '%c'\n", opt);
            usage(stderr, argv[0]);
            goto exit;
        }
    }

    if (!output_path)
    {
        usage(stderr, argv[0]);
        goto exit;
    }

    if (optind != argc - 1)
    {
        usage(stderr, argv[0]);
        goto exit;
    }
    source_path = argv[optind++];

    int source_buffer_n;
    if (strcmp(source_path, "-") == 0)
    {
        source_file = stdin;
        source_path = "<stdin>";

        int source_buffer_c = 4096;
        source_buffer_n = 0;
        for (;;)
        {
            if (!(source_buffer = realloc(source_buffer, source_buffer_c)))
            {
                fprintf(stderr, "could not allocate %d bytes\n", source_buffer_c);
                goto exit;
            }

            source_buffer_n += fread(&source_buffer[source_buffer_n], 1, source_buffer_c - source_buffer_n, source_file);
            if (source_buffer_n < source_buffer_c)
                break;

            source_buffer_c += source_buffer_n / 2; // 1.5x growth rate.
        }
    }
    else
    {
        source_file = fopen(source_path, "r");
        if (source_file == NULL)
        {
            fprintf(stderr, "could not open '%s' for reading\n", source_path);
            goto exit;
        }

        fseek(source_file, 0, SEEK_END);
        long source_buffer_n_ = ftell(source_file);
        if (source_buffer_n_ > INT_MAX)
        {
            fprintf(stderr, "could not read '%s': too big\n", source_path);
            goto exit;
        }

        source_buffer_n = source_buffer_n_;

        if (!(source_buffer = malloc(source_buffer_n)))
        {
            fprintf(stderr, "could not allocate %d bytes\n", source_buffer_n);
            goto exit;
        }
        rewind(source_file);
        if (fread(source_buffer, 1, source_buffer_n, source_file) < source_buffer_n)
        {
            fprintf(stderr, "could not read '%s'\n", source_path);
            goto exit;
        }
    }

    struct Source source = {
        .path = real_source_path ? real_source_path : source_path,
        .buffer = source_buffer,
        .buffer_n = source_buffer_n,
    };
    struct Parser parser = {
        .source = &source,
        .location = { .line = 1, .column = 1 },
        .offset = 0,
    };
    if (parser.fatal_error)
    {
        goto exit;
    }

    if (strcmp(output_path, "-") == 0)
    {
        source_file = stdout;
        output_path = "<stdout>";
    }
    else
    {
        output_file = fopen(output_path, "w");
        if (output_file == NULL)
        {
            fprintf(stderr, "could not open '%s' for writing\n", output_path);
            goto exit;
        }
    }
    fprint_lua(output_path, output_file);

    status = 0;

exit:
    if (output_file) fclose(output_file);
    if (source_buffer) free(source_buffer);
    if (source_file) fclose(source_file);
    return status;
}



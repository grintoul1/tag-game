#!/usr/bin/env python3

"""
Usage: python3 make_lua_script.py 

"""

from itertools import chain
from textwrap import dedent

import ctypes
import glob
import lua
import pathlib
import re
import sys
import typing


CONFIG_ENABLED_PAT = re.compile(r"#define P_LUA_SCRIPT_GENERATION\s+(?P<cfg_val>[^ ]*)")
EXPORT_ENABLED_PAT = re.compile(r"#define P_LUA_SCRIPT_EXPORT\s+(?P<cfg_val>[^ ]*)")
HIDDEN_POWERS_ENABLED_PAT = re.compile(r"#define P_LUA_SCRIPT_HIDDEN_POWERS\s+(?P<cfg_val>[^ ]*)")
STATS_ENABLED_PAT = re.compile(r"#define P_LUA_SCRIPT_STATS\s+(?P<cfg_val>[^ ]*)")
MOVES_ENABLED_PAT = re.compile(r"#define P_LUA_SCRIPT_MOVES\s+(?P<cfg_val>[^ ]*)")
ITEMS_ENABLED_PAT = re.compile(r"#define P_LUA_SCRIPT_ITEMS\s+(?P<cfg_val>[^ ]*)")
POKEMON_ENABLED_PAT = re.compile(r"#define P_LUA_SCRIPT_POKEMON\s+(?P<cfg_val>[^ ]*)")
MOVE_LIST_PAT = re.compile(r".name = COMPOUND_STRING\(\"(.*)\"")
POKEMON_LIST_PAT = re.compile(r"#define SPECIES_(.*)\s")
ABILITY_LIST_PAT = re.compile(r".name = _\(\"(.*)\"")
ITEM_LIST_PAT = re.compile(r".name = _\(\"(.*)\"")

"""
UNIVERSAL_MOVES_PAT = re.compile(r"static const u16 sUniversalMoves\[\]\s*=\s*{((.|\n)*?)\n};")
TEACHABLE_ARRAY_DECL_PAT = re.compile(r"(?P<decl>static const u16 s(?P<name>\w+)TeachableLearnset\[\]) = {[\s\S]*?};")
SNAKIFY_PAT = re.compile(r"(?!^)([A-Z]+)")
"""

"""
grintoul done
"""

def enabled() -> bool:
    """
    Check if the user has explicitly enabled this opt-in helper.
    """
    with open("./include/config/lua_script.h", "r") as cfg_lua_script_fp:
        cfg_lua_script = cfg_lua_script_fp.read()
        cfg_defined = CONFIG_ENABLED_PAT.search(cfg_lua_script)
        return cfg_defined is not None and cfg_defined.group("cfg_val") in ("TRUE", "1")

def enabled_export() -> bool:
    """
    Check if the user has explicitly enabled the export function.
    """
    with open("./include/config/lua_script.h", "r") as cfg_lua_script_fp:
        cfg_lua_script = cfg_lua_script_fp.read()
        cfg_defined = EXPORT_ENABLED_PAT.search(cfg_lua_script)
        return cfg_defined is not None and cfg_defined.group("cfg_val") in ("TRUE", "1")

def enabled_hiddens() -> bool:
    """
    Check if the user has explicitly enabled the hidden powers function.
    """
    with open("./include/config/lua_script.h", "r") as cfg_lua_script_fp:
        cfg_lua_script = cfg_lua_script_fp.read()
        cfg_defined = HIDDEN_POWERS_ENABLED_PAT.search(cfg_lua_script)
        return cfg_defined is not None and cfg_defined.group("cfg_val") in ("TRUE", "1")

def enabled_stats() -> bool:
    """
    Check if the user has explicitly enabled the stats functions.
    """
    with open("./include/config/lua_script.h", "r") as cfg_lua_script_fp:
        cfg_lua_script = cfg_lua_script_fp.read()
        cfg_defined = STATS_ENABLED_PAT.search(cfg_lua_script)
        return cfg_defined is not None and cfg_defined.group("cfg_val") in ("TRUE", "1")

def enabled_moves() -> bool:
    """
    Check if the user has explicitly enabled the moves function.
    """
    with open("./include/config/lua_script.h", "r") as cfg_lua_script_fp:
        cfg_lua_script = cfg_lua_script_fp.read()
        cfg_defined = MOVES_ENABLED_PAT.search(cfg_lua_script)
        return cfg_defined is not None and cfg_defined.group("cfg_val") in ("TRUE", "1")

def enabled_items() -> bool:
    """
    Check if the user has explicitly enabled the items function.
    """
    with open("./include/config/lua_script.h", "r") as cfg_lua_script_fp:
        cfg_lua_script = cfg_lua_script_fp.read()
        cfg_defined = ITEMS_ENABLED_PAT.search(cfg_lua_script)
        return cfg_defined is not None and cfg_defined.group("cfg_val") in ("TRUE", "1")

def enabled_pokemon() -> bool:
    """
    Check if the user has explicitly enabled the Pokemon functions.
    """
    with open("./include/config/lua_script.h", "r") as cfg_lua_script_fp:
        cfg_lua_script = cfg_lua_script_fp.read()
        cfg_defined = POKEMON_ENABLED_PAT.search(cfg_lua_script)
        return cfg_defined is not None and cfg_defined.group("cfg_val") in ("TRUE", "1")

def extract_repo_moves() -> typing.Generator[str, None, None]:
    """
    Yield move name strings for the script.
    """
    with open("./src/data/moves_info.h", "r") as moves_fp:
        moves = moves_fp.read()
        match_it = MOVE_LIST_PAT.finditer(moves)
        if not match_it:
            return
        
        for match in match_it:
            yield f"\"{match.group(1)}\","

def extract_repo_abilities() -> typing.Generator[str, None, None]:
    """
    Yield ability name strings for the script.
    """
    with open("./src/data/abilities.h", "r") as abilities_fp:
        abilities = abilities_fp.read()
        match_it = ABILITY_LIST_PAT.finditer(abilities)
        if not match_it:
            return
        
        for match in match_it:
            yield f"\"{match.group(1)}\","

def extract_repo_items() -> typing.Generator[str, None, None]:
    """
    Yield item name strings for the script.
    """
    with open("./src/data/items.h", "r") as items_fp:
        items = items_fp.read()
        match_it = ITEM_LIST_PAT.finditer(items)
        if not match_it:
            return
        
        for match in match_it:
            yield f"\"{match.group(1)}\","

def extract_repo_pokemon() -> typing.Generator[str, None, None]:
    """
    Yield species name strings for the script.
    """
    with open("./include/constants/species.h", "r") as species_fp:
        species = species_fp.read()
        match_it = POKEMON_LIST_PAT.finditer(species)
        if not match_it:
            return
        
        for match in match_it:
            yield s.replace('_', '-',f"\"{match.group(1)}\",")

def prepare_output(lua_script: dict[str, set[str]], export_functions: set[str], hiddens_functions: set[str], stats_functions: set[str], 
moves_functions: set[str], items_functions: set[str], pokemon_functions: set[str], header: str) -> str:
    """
    Build the file content for lua_script.lua.
    """
    with open("./lua_script.lua", "r") as lua_script_fp:
        old = lua_script_fp.read()

    cursor = 0
    new = header + dedent("""
    move = {"",
    """)

    joinpat = "\n    "
    for moves

        new += .join([f"    {joinpat.join(chain(moves, ('\"\"',)))}\n",
        "}\n",
        "\n",
        ])
        cursor = cursor + 1

    new += cursor:

    new += dedent("""
    mons = {"",
    """)

    joinpat = "\n    "
    for pokemon

        new += .join([f"    {joinpat.join(chain(pokemon, ('\"\"',)))}\n",
        "}\n",
        "\n",
        ])
        cursor = cursor + 1

    new += cursor:

    new += dedent("""
    abilities = {"",
    """)

    joinpat = "\n    "
    for abilities

        new += .join([f"    {joinpat.join(chain(abilities, ('\"\"',)))}\n",
        "}\n",
        "\n",
        ])
        cursor = cursor + 1

    new += cursor:

    new += dedent("""
    item = {"",
    """)

    joinpat = "\n    "
    for items

        new += .join([f"    {joinpat.join(chain(items, ('\"\"',)))}\n",
        "}\n",
        "\n",
        ])
        cursor = cursor + 1

    new += cursor:

    new += dedent("""
    nature = {"Hardy","Lonely","Brave","Adamant","Naughty",
			"Bold","Docile","Relaxed","Impish","Lax",
			"Timid","Hasty","Serious","Jolly","Naive",
			"Modest","Mild","Quiet","Bashful","Rash",
			"Calm","Gentle","Sassy","Careful","Quirky"}
    
    levelCap = 0 -- Sets the level for all mons based on first party slot

    local terminator=0xFF
    local monNameLength=10
    local playerNameLength=10

    """)

    


    return new


def create_tutor_moves_array(tutors: list[str]) -> None:
    """
    Generate gTutorMoves[] if P_TUTOR_MOVES_ARRAY is enabled.
    """
    # Check if the config is enabled
    with open("./include/config/pokemon.h", "r") as cfg_lua_script_fp:
        cfg_pokemon = cfg_lua_script_fp.read()
        cfg_defined = TUTOR_ARRAY_ENABLED_PAT.search(cfg_pokemon)
        if not (cfg_defined and cfg_defined.group("cfg_val") in ("TRUE", "1")):
            return

    # If enabled, generate the tutor moves array
    header = dedent("""\
        // DO NOT MODIFY THIS FILE! It is auto-generated by tools/learnset_helpers/make_teachables.py
        // Set the config P_TUTOR_MOVES_ARRAY in include/config/pokemon.h to TRUE to enable this array!

        const u16 gTutorMoves[] = {
    """)

    lines = [f"    {move}," for move in sorted(tutors)]
    lines.append("    MOVE_UNAVAILABLE\n};\n")

    with open("./src/data/tutor_moves.h", "w") as f:
        f.write(header + "\n".join(lines))


def prepare_header(h_align: int, tmshms: list[str], tutors: list[str], universals: list[str]) -> str:
    universals_title = "Near-universal moves found from sUniversalMoves:"
    tmhm_title = "TM/HM moves found in \"include/constants/tms_hms.h\":"
    tutor_title = "Tutor moves found from map scripts:"
    h_align = max(h_align, len(universals_title), len(tmhm_title), len(tutor_title))

    lines = [
         "-- DO NOT MODIFY THIS FILE! It is auto-generated by tools/luaproc/make_lua_script.py",
         "-- you do not need this lua script, though it will allow you to with mgba 0.10 to export your pokemon to the calc",
         "-- to use download this file on mgba select tools->scripting then file->open and open this file",
         "",
    ]
    return "\n".join(lines)


def main():
    if not enabled():
        quit()

    if len(sys.argv) < 2:
        print("Missing required arguments", file=sys.stderr)
        print(__doc__, file=sys.stderr)
        quit(1)

    SOURCE_LEARNSETS_JSON = pathlib.Path(sys.argv[1])

    assert SOURCE_LEARNSETS_JSON.exists(), f"{SOURCE_LEARNSETS_JSON=} does not exist"
    assert SOURCE_LEARNSETS_JSON.is_file(), f"{SOURCE_LEARNSETS_JSON=} is not a file"

    repo_universals = extract_repo_universals()
    repo_tms = list(extract_repo_tms())
    repo_tutors = list(extract_repo_tutors())
    repo_teachables = set(filter(
        lambda move: move not in set(repo_universals),
        chain(repo_tms, repo_tutors)
    ))

    create_tutor_moves_array(repo_tutors)

    h_align = max(map(lambda move: len(move), chain(repo_universals, repo_teachables))) + 2
    header = prepare_header(h_align, repo_tms, repo_tutors, repo_universals)

    with open(SOURCE_LEARNSETS_JSON, "r") as source_fp:
        all_learnables = lua.load(source_fp)

    content = prepare_output(all_learnables, repo_teachables, header)
    with open("./src/data/pokemon/teachable_learnsets.h", "w") as teachables_fp:
        teachables_fp.write(content)


if __name__ == "__main__":
    main()

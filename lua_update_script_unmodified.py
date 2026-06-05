def get_map_values(map_file):
    values = {}
    with open(map_file, 'r') as content:
        for line in content:
            if "gPartiesCount[B_TRAINER_PLAYER]" in line:
                values['gPartiesCount[B_TRAINER_PLAYER]'] = line.strip().split()[0]
            elif "gParties[B_TRAINER_PLAYER]" in line:
                values['gParties[B_TRAINER_PLAYER]'] = line.strip().split()[0]
            elif "gPokemonStorage" in line and not "gPokemonStoragePtr" in line:
                values['gPokemonStorage'] = line.strip().split()[0]
            elif "gSpeciesInfo" in line:
                values['gSpeciesInfo'] = line.strip().split()[0]

    return values


def replace_values(lua_script, new_values):
    party_count = f"local partyCount={new_values['gPartiesCount[B_TRAINER_PLAYER]']} -- gPartiesCount[B_TRAINER_PLAYER]\n"
    party_loc = f"local partyloc={new_values['gParties[B_TRAINER_PLAYER]']} -- gParties[B_TRAINER_PLAYER]\n"
    storage_loc = f"local storageLoc={new_values['gPokemonStorage']} -- gPokemonStorage\n"
    species_info = f"local speciesInfo={new_values['gSpeciesInfo']} -- gSpeciesInfo\n"

    with open(lua_script, 'r') as content:
        lines = content.readlines()

    for line_no, line in enumerate(lines):
        if 'gPartiesCount[B_TRAINER_PLAYER]' in line:
            lines[line_no] = lines[line_no].replace(line, party_count)
        elif 'gParties[B_TRAINER_PLAYER]' in line:
            lines[line_no] = lines[line_no].replace(line, party_loc)
        elif 'gSpeciesInfo' in line:
            lines[line_no] = lines[line_no].replace(line, storage_loc)
        elif 'gPokemonStorage' in line:
            lines[line_no] = lines[line_no].replace(line, species_info)

    with open(lua_script, 'w') as content:
        content.writelines(lines)


if __name__ == '__main__':
    new_values = get_map_values("pokeemerald.map")
    replace_values("calc_export.lua", new_values)

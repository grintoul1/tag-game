def get_map_values(map_file):
    values = {}
    with open(map_file, 'r') as content:
        for line in content:
            if "gPlayerPartyCount" in line:
                values['gPlayerPartyCount'] = line.strip().split()[0]
            elif "gPlayerParty" in line:
                values['gPlayerParty'] = line.strip().split()[0]
            elif "gPokemonStorage" in line:
                values['gPokemonStorage'] = line.strip().split()[0]
            elif "gSpeciesInfo" in line:
                values['gSpeciesInfo'] = line.strip().split()[0]

    return values

def get_configs(lua_script_master):
    configCount = 0
    status = {}
    configs = {}
    with open(lua_script_master, 'r') as content:
        lines = content.readlines()

    for line in enumerate(lines):
        if 'local config' in line:
            configCount += 1
            configs[configCount] = line.strip().split(" ", -1)[1]
            status[configCount] = line.strip().split(" = ", -1)[1]

    configCount += 1

    return configs, status, configCount

def replace_values(lua_script_master, lua_script_public, new_values):
    party_count = f"local partyCount={new_values['gPlayerPartyCount']} -- gPlayerPartyCount\n"
    party_loc = f"local partyloc={new_values['gPlayerParty']} -- gPlayerParty\n"
    storage_loc = f"local storageLoc={new_values['gPokemonStorage']} -- gPokemonStorage\n"
    species_info = f"local speciesInfo={new_values['gSpeciesInfo']} -- gSpeciesInfo\n"
    
    parsing = True
    configs, status, configCount = get_configs(lua_script_master)

    with open(lua_script_master, 'r') as content:
        lines = content.readlines()

    for line_no, line in enumerate(lines):
        if 'gPlayerPartyCount' in line:
            lines[line_no] = lines[line_no].replace(line, party_count)
        elif 'gPlayerParty' in line:
            lines[line_no] = lines[line_no].replace(line, party_loc)
        elif 'gSpeciesInfo' in line:
            lines[line_no] = lines[line_no].replace(line, storage_loc)
        elif 'gPokemonStorage' in line:
            lines[line_no] = lines[line_no].replace(line, species_info)

    with open(lua_script_master, 'w') as content:
        content.writelines(lines)

    with open(lua_script_master, 'r') as content:
        lines = content.readlines()      

    for line_no, line in enumerate(lines):
        j = 1
        while j < (configCount):
            if status[j] == "true":
                j += 1
                continue
            else:
                if parsing:
                    if f"--Start {configs[j]}" in line:
                        parsing = False
                        lines[line_no] = lines[line_no].replace(line, "")
                        break
                else:
                    if f"--End {configs[j]}" in line:
                        parsing = True
                        j = 1
                        lines[line_no] = lines[line_no].replace(line, "")
                        break
                    else:
                        lines[line_no] = lines[line_no].replace(line, "")
                        break
                break
        
        line_no += 1


    with open(lua_script_public, 'w') as content:
        content.seek(0)
        content.truncate()
        content.writelines(lines)
    
    print(f"partyCount {new_values['gPlayerPartyCount']}")
    print(f"partyloc {new_values['gPlayerParty']}")
    print(f"storageLoc {new_values['gPokemonStorage']}")
    print(f"speciesInfo {new_values['gSpeciesInfo']}")


if __name__ == '__main__':
    new_values = get_map_values("pokeemerald.map")
    replace_values("master_lua_script.lua", "public_lua_script.lua", new_values)
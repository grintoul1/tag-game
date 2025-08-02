#ifndef GUARD_CONFIG_LUA_SCRIPT_H
#define GUARD_CONFIG_LUA_SCRIPT_H

// Settings
#define P_LUA_SCRIPT_GENERATION             TRUE  // If TRUE, a quality of life .lua script will be produced for players to use.
#define P_LUA_SCRIPT_EXPORT                 TRUE  // If TRUE, lua script includes export() function for exporting Pokemon Showdown format Pokemon information.
#define P_LUA_SCRIPT_HIDDEN_POWERS          TRUE  // If TRUE, lua script includes hiddens() function for exporting Pokemon Hidden Power types.
#define P_LUA_SCRIPT_STATS                  TRUE  // If TRUE, lua script includes setIVs(), perfect(), setNature(), and setNatureAndIVs() functions for editing Pokemon stats.
#define P_LUA_SCRIPT_MOVES                  TRUE  // If TRUE, lua script includes setMove() function for editing Pokemon moves.
#define P_LUA_SCRIPT_ITEMS                  TRUE  // If TRUE, lua script includes setMove() function for editing Pokemon items.
#define P_LUA_SCRIPT_POKEMON                TRUE  // If TRUE, lua script includes setLevel(), setAbility(), and setSpecies functions for editing Pokemon.

#endif // GUARD_CONFIG_LUA_SCRIPT_H

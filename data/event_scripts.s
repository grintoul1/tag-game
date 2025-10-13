#include "config/general.h"
#include "config/battle.h"
#include "config/item.h"
#include "constants/global.h"
#include "constants/apprentice.h"
#include "constants/battle.h"
#include "constants/battle_arena.h"
#include "constants/battle_dome.h"
#include "constants/battle_factory.h"
#include "constants/battle_frontier.h"
#include "constants/battle_palace.h"
#include "constants/battle_pike.h"
#include "constants/battle_pyramid.h"
#include "constants/battle_setup.h"
#include "constants/battle_tent.h"
#include "constants/battle_tower.h"
#include "constants/berry.h"
#include "constants/cable_club.h"
#include "constants/coins.h"
#include "constants/contest.h"
#include "constants/daycare.h"
#include "constants/decorations.h"
#include "constants/difficulty.h"
#include "constants/easy_chat.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/field_move.h"
#include "constants/field_poison.h"
#include "constants/field_specials.h"
#include "constants/field_tasks.h"
#include "constants/field_weather.h"
#include "constants/flags.h"
#include "constants/follower_npc.h"
#include "constants/frontier_util.h"
#include "constants/game_stat.h"
#include "constants/item.h"
#include "constants/items.h"
#include "constants/heal_locations.h"
#include "constants/layouts.h"
#include "constants/lilycove_lady.h"
#include "constants/map_scripts.h"
#include "constants/maps.h"
#include "constants/mauville_old_man.h"
#include "constants/metatile_labels.h"
#include "constants/moves.h"
#include "constants/party_menu.h"
#include "constants/pokedex.h"
#include "constants/pokemon.h"
#include "constants/rtc.h"
#include "constants/roulette.h"
#include "constants/script_menu.h"
#include "constants/secret_bases.h"
#include "constants/siirtc.h"
#include "constants/songs.h"
#include "constants/sound.h"
#include "constants/species.h"
#include "constants/trade.h"
#include "constants/trainer_hill.h"
#include "constants/trainers.h"
#include "constants/tv.h"
#include "constants/union_room.h"
#include "constants/vars.h"
#include "constants/weather.h"
#include "constants/speaker_names.h"
	.include "asm/macros.inc"
	.include "asm/macros/event.inc"
	.include "constants/constants.inc"

	.section script_data, "aw", %progbits

	.set ALLOCATE_SCRIPT_CMD_TABLE, 1
	.include "data/script_cmd_table.inc"

gSpecialVars::
	.4byte gSpecialVar_0x8000
	.4byte gSpecialVar_0x8001
	.4byte gSpecialVar_0x8002
	.4byte gSpecialVar_0x8003
	.4byte gSpecialVar_0x8004
	.4byte gSpecialVar_0x8005
	.4byte gSpecialVar_0x8006
	.4byte gSpecialVar_0x8007
	.4byte gSpecialVar_0x8008
	.4byte gSpecialVar_0x8009
	.4byte gSpecialVar_0x800A
	.4byte gSpecialVar_0x800B
	.4byte gSpecialVar_Facing
	.4byte gSpecialVar_Result
	.4byte gSpecialVar_ItemId
	.4byte gSpecialVar_LastTalked
	.4byte gSpecialVar_ContestRank
	.4byte gSpecialVar_ContestCategory
	.4byte gSpecialVar_MonBoxId
	.4byte gSpecialVar_MonBoxPos
	.4byte gSpecialVar_Unused_0x8014
	.4byte gTrainerBattleParameter + 2 // gTrainerBattleParameter.params.opponentA

	.include "data/specials.inc"

gStdScripts::
	.4byte Std_ObtainItem              @ STD_OBTAIN_ITEM
	.4byte Std_FindItem                @ STD_FIND_ITEM
	.4byte Std_MsgboxNPC               @ MSGBOX_NPC
	.4byte Std_MsgboxSign              @ MSGBOX_SIGN
	.4byte Std_MsgboxDefault           @ MSGBOX_DEFAULT
	.4byte Std_MsgboxYesNo             @ MSGBOX_YESNO
	.4byte Std_MsgboxAutoclose         @ MSGBOX_AUTOCLOSE
	.4byte Std_ObtainDecoration        @ STD_OBTAIN_DECORATION
	.4byte Std_RegisteredInMatchCall   @ STD_REGISTER_MATCH_CALL
	.4byte Std_MsgboxGetPoints         @ MSGBOX_GETPOINTS
	.4byte Std_MsgboxPokenav           @ MSGBOX_POKENAV
gStdScripts_End::

	.include "data/maps/PetalburgCity/scripts.inc"
	.include "data/maps/SlateportCity/scripts.inc"
	.include "data/maps/MauvilleCity/scripts.inc"
	.include "data/maps/RustboroCity/scripts.inc"
	.include "data/maps/FortreeCity/scripts.inc"
	.include "data/maps/LilycoveCity/scripts.inc"
	.include "data/maps/MossdeepCity/scripts.inc"
	.include "data/maps/SootopolisCity/scripts.inc"
	.include "data/maps/EverGrandeCity/scripts.inc"
	.include "data/maps/LittlerootTown/scripts.inc"
	.include "data/maps/OldaleTown/scripts.inc"
	.include "data/maps/DewfordTown/scripts.inc"
	.include "data/maps/LavaridgeTown/scripts.inc"
	.include "data/maps/FallarborTown/scripts.inc"
	.include "data/maps/VerdanturfTown/scripts.inc"
	.include "data/maps/PacifidlogTown/scripts.inc"
	.include "data/maps/Route101/scripts.inc"
	.include "data/maps/Route102/scripts.inc"
	.include "data/maps/Route103/scripts.inc"
	.include "data/maps/Route104/scripts.inc"
	.include "data/maps/Route105/scripts.inc"
	.include "data/maps/Route106/scripts.inc"
	.include "data/maps/Route107/scripts.inc"
	.include "data/maps/Route108/scripts.inc"
	.include "data/maps/Route109/scripts.inc"
	.include "data/maps/Route110/scripts.inc"
	.include "data/maps/Route111/scripts.inc"
	.include "data/maps/Route112/scripts.inc"
	.include "data/maps/Route113/scripts.inc"
	.include "data/maps/Route114/scripts.inc"
	.include "data/maps/Route115/scripts.inc"
	.include "data/maps/Route116/scripts.inc"
	.include "data/maps/Route117/scripts.inc"
	.include "data/maps/Route118/scripts.inc"
	.include "data/maps/Route119/scripts.inc"
	.include "data/maps/Route120/scripts.inc"
	.include "data/maps/Route121/scripts.inc"
	.include "data/maps/Route122/scripts.inc"
	.include "data/maps/Route123/scripts.inc"
	.include "data/maps/Route124/scripts.inc"
	.include "data/maps/Route125/scripts.inc"
	.include "data/maps/Route126/scripts.inc"
	.include "data/maps/Route127/scripts.inc"
	.include "data/maps/Route128/scripts.inc"
	.include "data/maps/Route129/scripts.inc"
	.include "data/maps/Route130/scripts.inc"
	.include "data/maps/Route131/scripts.inc"
	.include "data/maps/Route132/scripts.inc"
	.include "data/maps/Route133/scripts.inc"
	.include "data/maps/Route134/scripts.inc"
	.include "data/maps/Underwater_Route124/scripts.inc"
	.include "data/maps/Underwater_Route126/scripts.inc"
	.include "data/maps/Underwater_Route127/scripts.inc"
	.include "data/maps/Underwater_Route128/scripts.inc"
	.include "data/maps/Underwater_Route129/scripts.inc"
	.include "data/maps/Underwater_Route105/scripts.inc"
	.include "data/maps/Underwater_Route125/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.inc"
	.include "data/maps/OldaleTown_House1/scripts.inc"
	.include "data/maps/OldaleTown_House2/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/OldaleTown_Mart/scripts.inc"
	.include "data/maps/DewfordTown_House1/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/DewfordTown_Gym/scripts.inc"
	.include "data/maps/DewfordTown_Hall/scripts.inc"
	.include "data/maps/DewfordTown_House2/scripts.inc"
	.include "data/maps/LavaridgeTown_HerbShop/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_B1F/scripts.inc"
	.include "data/maps/LavaridgeTown_House/scripts.inc"
	.include "data/maps/LavaridgeTown_Mart/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_Mart/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentLobby/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_CozmosHouse/scripts.inc"
	.include "data/maps/FallarborTown_MoveRelearnersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentLobby/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/VerdanturfTown_Mart/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/VerdanturfTown_WandasHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_House/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PacifidlogTown_House1/scripts.inc"
	.include "data/maps/PacifidlogTown_House2/scripts.inc"
	.include "data/maps/PacifidlogTown_House3/scripts.inc"
	.include "data/maps/PacifidlogTown_House4/scripts.inc"
	.include "data/maps/PacifidlogTown_House5/scripts.inc"
	.include "data/maps/PetalburgCity_WallysHouse/scripts.inc"
	.include "data/maps/PetalburgCity_Gym/scripts.inc"
	.include "data/maps/PetalburgCity_House1/scripts.inc"
	.include "data/maps/PetalburgCity_House2/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PetalburgCity_Mart/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_1F/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_2F/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentLobby/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentCorridor/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/SlateportCity_NameRatersHouse/scripts.inc"
	.include "data/maps/SlateportCity_PokemonFanClub/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_1F/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_2F/scripts.inc"
	.include "data/maps/SlateportCity_Harbor/scripts.inc"
	.include "data/maps/SlateportCity_House/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SlateportCity_Mart/scripts.inc"
	.include "data/maps/MauvilleCity_Gym/scripts.inc"
	.include "data/maps/MauvilleCity_BikeShop/scripts.inc"
	.include "data/maps/MauvilleCity_House1/scripts.inc"
	.include "data/maps/MauvilleCity_GameCorner/scripts.inc"
	.include "data/maps/MauvilleCity_House2/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MauvilleCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_1F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_2F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_3F/scripts.inc"
	.include "data/maps/RustboroCity_Gym/scripts.inc"
	.include "data/maps/RustboroCity_PokemonSchool/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/RustboroCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_2F/scripts.inc"
	.include "data/maps/RustboroCity_House1/scripts.inc"
	.include "data/maps/RustboroCity_CuttersHouse/scripts.inc"
	.include "data/maps/RustboroCity_House2/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_2F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_3F/scripts.inc"
	.include "data/maps/RustboroCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House1/scripts.inc"
	.include "data/maps/FortreeCity_Gym/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FortreeCity_Mart/scripts.inc"
	.include "data/maps/FortreeCity_House2/scripts.inc"
	.include "data/maps/FortreeCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House4/scripts.inc"
	.include "data/maps/FortreeCity_House5/scripts.inc"
	.include "data/maps/FortreeCity_DecorationShop/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc"
	.include "data/maps/LilycoveCity_ContestLobby/scripts.inc"
	.include "data/maps/LilycoveCity_ContestHall/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/LilycoveCity_UnusedMart/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc"
	.include "data/maps/LilycoveCity_Harbor/scripts.inc"
	.include "data/maps/LilycoveCity_MoveDeletersHouse/scripts.inc"
	.include "data/maps/LilycoveCity_House1/scripts.inc"
	.include "data/maps/LilycoveCity_House2/scripts.inc"
	.include "data/maps/LilycoveCity_House3/scripts.inc"
	.include "data/maps/LilycoveCity_House4/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.inc"
	.include "data/maps/MossdeepCity_Gym/scripts.inc"
	.include "data/maps/MossdeepCity_House1/scripts.inc"
	.include "data/maps/MossdeepCity_House2/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_Mart/scripts.inc"
	.include "data/maps/MossdeepCity_House3/scripts.inc"
	.include "data/maps/MossdeepCity_StevensHouse/scripts.inc"
	.include "data/maps/MossdeepCity_House4/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_1F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SootopolisCity_Mart/scripts.inc"
	.include "data/maps/SootopolisCity_House1/scripts.inc"
	.include "data/maps/SootopolisCity_House2/scripts.inc"
	.include "data/maps/SootopolisCity_House3/scripts.inc"
	.include "data/maps/SootopolisCity_House4/scripts.inc"
	.include "data/maps/SootopolisCity_House5/scripts.inc"
	.include "data/maps/SootopolisCity_House6/scripts.inc"
	.include "data/maps/SootopolisCity_House7/scripts.inc"
	.include "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.inc"
	.include "data/maps/EverGrandeCity_SidneysRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_PhoebesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_GlaciasRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_DrakesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_ChampionsRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall1/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall2/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall3/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall4/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall5/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_HallOfFame/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_2F/scripts.inc"
	.include "data/maps/Route104_MrBrineysHouse/scripts.inc"
	.include "data/maps/Route104_PrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route111_WinstrateFamilysHouse/scripts.inc"
	.include "data/maps/Route111_OldLadysRestStop/scripts.inc"
	.include "data/maps/Route112_CableCarStation/scripts.inc"
	.include "data/maps/MtChimney_CableCarStation/scripts.inc"
	.include "data/maps/Route114_FossilManiacsHouse/scripts.inc"
	.include "data/maps/Route114_FossilManiacsTunnel/scripts.inc"
	.include "data/maps/Route114_LanettesHouse/scripts.inc"
	.include "data/maps/Route116_TunnelersRestHouse/scripts.inc"
	.include "data/maps/Route117_PokemonDayCare/scripts.inc"
	.include "data/maps/Route121_SafariZoneEntrance/scripts.inc"
	.include "data/maps/MeteorFalls_1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_1F_2R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_2R/scripts.inc"
	.include "data/maps/RusturfTunnel/scripts.inc"
	.include "data/maps/Underwater_SootopolisCity/scripts.inc"
	.include "data/maps/DesertRuins/scripts.inc"
	.include "data/maps/GraniteCave_1F/scripts.inc"
	.include "data/maps/GraniteCave_B1F/scripts.inc"
	.include "data/maps/GraniteCave_B2F/scripts.inc"
	.include "data/maps/GraniteCave_StevensRoom/scripts.inc"
	.include "data/maps/PetalburgWoods/scripts.inc"
	.include "data/maps/MtChimney/scripts.inc"
	.include "data/maps/JaggedPass/scripts.inc"
	.include "data/maps/FieryPath/scripts.inc"
	.include "data/maps/MtPyre_1F/scripts.inc"
	.include "data/maps/MtPyre_2F/scripts.inc"
	.include "data/maps/MtPyre_3F/scripts.inc"
	.include "data/maps/MtPyre_4F/scripts.inc"
	.include "data/maps/MtPyre_5F/scripts.inc"
	.include "data/maps/MtPyre_6F/scripts.inc"
	.include "data/maps/MtPyre_Exterior/scripts.inc"
	.include "data/maps/MtPyre_Summit/scripts.inc"
	.include "data/maps/AquaHideout_1F/scripts.inc"
	.include "data/maps/AquaHideout_B1F/scripts.inc"
	.include "data/maps/AquaHideout_B2F/scripts.inc"
	.include "data/maps/Underwater_SeafloorCavern/scripts.inc"
	.include "data/maps/SeafloorCavern_Entrance/scripts.inc"
	.include "data/maps/SeafloorCavern_Room1/scripts.inc"
	.include "data/maps/SeafloorCavern_Room2/scripts.inc"
	.include "data/maps/SeafloorCavern_Room3/scripts.inc"
	.include "data/maps/SeafloorCavern_Room4/scripts.inc"
	.include "data/maps/SeafloorCavern_Room5/scripts.inc"
	.include "data/maps/SeafloorCavern_Room6/scripts.inc"
	.include "data/maps/SeafloorCavern_Room7/scripts.inc"
	.include "data/maps/SeafloorCavern_Room8/scripts.inc"
	.include "data/maps/SeafloorCavern_Room9/scripts.inc"
	.include "data/maps/CaveOfOrigin_Entrance/scripts.inc"
	.include "data/maps/CaveOfOrigin_1F/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap1/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap2/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.inc"
	.include "data/maps/CaveOfOrigin_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_1F/scripts.inc"
	.include "data/maps/VictoryRoad_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_B2F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideInnerRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideStairsRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideLowerRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideInnerRoom/scripts.inc"
	.include "data/maps/NewMauville_Entrance/scripts.inc"
	.include "data/maps/NewMauville_Inside/scripts.inc"
	.include "data/maps/AbandonedShip_Deck/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater1/scripts.inc"
	.include "data/maps/AbandonedShip_Room_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_1F/scripts.inc"
	.include "data/maps/AbandonedShip_CaptainsOffice/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater2/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorRooms/scripts.inc"
	.include "data/maps/IslandCave/scripts.inc"
	.include "data/maps/AncientTomb/scripts.inc"
	.include "data/maps/Underwater_Route134/scripts.inc"
	.include "data/maps/Underwater_SealedChamber/scripts.inc"
	.include "data/maps/SealedChamber_OuterRoom/scripts.inc"
	.include "data/maps/SealedChamber_InnerRoom/scripts.inc"
	.include "data/maps/ScorchedSlab/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap1/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap2/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap3/scripts.inc"
	.include "data/maps/SkyPillar_Entrance/scripts.inc"
	.include "data/maps/SkyPillar_Outside/scripts.inc"
	.include "data/maps/SkyPillar_1F/scripts.inc"
	.include "data/maps/SkyPillar_2F/scripts.inc"
	.include "data/maps/SkyPillar_3F/scripts.inc"
	.include "data/maps/SkyPillar_4F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideIceRoom/scripts.inc"
	.include "data/maps/SkyPillar_5F/scripts.inc"
	.include "data/maps/SkyPillar_Top/scripts.inc"
	.include "data/maps/MagmaHideout_1F/scripts.inc"
	.include "data/maps/MagmaHideout_2F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_4F/scripts.inc"
	.include "data/maps/MagmaHideout_3F_3R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_3R/scripts.inc"
	.include "data/maps/MirageTower_1F/scripts.inc"
	.include "data/maps/MirageTower_2F/scripts.inc"
	.include "data/maps/MirageTower_3F/scripts.inc"
	.include "data/maps/MirageTower_4F/scripts.inc"
	.include "data/maps/DesertUnderpass/scripts.inc"
	.include "data/maps/ArtisanCave_B1F/scripts.inc"
	.include "data/maps/ArtisanCave_1F/scripts.inc"
	.include "data/maps/Underwater_MarineCave/scripts.inc"
	.include "data/maps/MarineCave_Entrance/scripts.inc"
	.include "data/maps/MarineCave_End/scripts.inc"
	.include "data/maps/TerraCave_Entrance/scripts.inc"
	.include "data/maps/TerraCave_End/scripts.inc"
	.include "data/maps/AlteringCave/scripts.inc"
	.include "data/maps/MeteorFalls_StevensCave/scripts.inc"
	.include "data/scripts/shared_secret_base.inc"
	.include "data/maps/BattleColosseum_2P/scripts.inc"
	.include "data/maps/TradeCenter/scripts.inc"
	.include "data/maps/RecordCorner/scripts.inc"
	.include "data/maps/BattleColosseum_4P/scripts.inc"
	.include "data/maps/ContestHall/scripts.inc"
	.include "data/maps/InsideOfTruck/scripts.inc"
	.include "data/maps/SSTidalCorridor/scripts.inc"
	.include "data/maps/SSTidalLowerDeck/scripts.inc"
	.include "data/maps/SSTidalRooms/scripts.inc"
	.include "data/maps/BattlePyramidSquare01/scripts.inc"
	.include "data/maps/UnionRoom/scripts.inc"
	.include "data/maps/SafariZone_Northwest/scripts.inc"
	.include "data/maps/SafariZone_North/scripts.inc"
	.include "data/maps/SafariZone_Southwest/scripts.inc"
	.include "data/maps/SafariZone_South/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideWest/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerElevator/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc"
	.include "data/maps/SouthernIsland_Exterior/scripts.inc"
	.include "data/maps/SouthernIsland_Interior/scripts.inc"
	.include "data/maps/SafariZone_RestHouse/scripts.inc"
	.include "data/maps/SafariZone_Northeast/scripts.inc"
	.include "data/maps/SafariZone_Southeast/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideEast/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidTop/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRoomWildMons/scripts.inc"
	.include "data/maps/BattleFrontier_RankingHall/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge1/scripts.inc"
	.include "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge2/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge3/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge4/scripts.inc"
	.include "data/maps/BattleFrontier_ScottsHouse/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge5/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge6/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge7/scripts.inc"
	.include "data/maps/BattleFrontier_ReceptionGate/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge8/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge9/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_1F/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_2F/scripts.inc"
	.include "data/maps/BattleFrontier_Mart/scripts.inc"
	.include "data/maps/FarawayIsland_Entrance/scripts.inc"
	.include "data/maps/FarawayIsland_Interior/scripts.inc"
	.include "data/maps/BirthIsland_Exterior/scripts.inc"
	.include "data/maps/BirthIsland_Harbor/scripts.inc"
	.include "data/maps/TrainerHill_Entrance/scripts.inc"
	.include "data/maps/TrainerHill_1F/scripts.inc"
	.include "data/maps/TrainerHill_2F/scripts.inc"
	.include "data/maps/TrainerHill_3F/scripts.inc"
	.include "data/maps/TrainerHill_4F/scripts.inc"
	.include "data/maps/TrainerHill_Roof/scripts.inc"
	.include "data/maps/NavelRock_Exterior/scripts.inc"
	.include "data/maps/NavelRock_Harbor/scripts.inc"
	.include "data/maps/NavelRock_Entrance/scripts.inc"
	.include "data/maps/NavelRock_B1F/scripts.inc"
	.include "data/maps/NavelRock_Fork/scripts.inc"
	.include "data/maps/NavelRock_Up1/scripts.inc"
	.include "data/maps/NavelRock_Up2/scripts.inc"
	.include "data/maps/NavelRock_Up3/scripts.inc"
	.include "data/maps/NavelRock_Up4/scripts.inc"
	.include "data/maps/NavelRock_Top/scripts.inc"
	.include "data/maps/NavelRock_Down01/scripts.inc"
	.include "data/maps/NavelRock_Down02/scripts.inc"
	.include "data/maps/NavelRock_Down03/scripts.inc"
	.include "data/maps/NavelRock_Down04/scripts.inc"
	.include "data/maps/NavelRock_Down05/scripts.inc"
	.include "data/maps/NavelRock_Down06/scripts.inc"
	.include "data/maps/NavelRock_Down07/scripts.inc"
	.include "data/maps/NavelRock_Down08/scripts.inc"
	.include "data/maps/NavelRock_Down09/scripts.inc"
	.include "data/maps/NavelRock_Down10/scripts.inc"
	.include "data/maps/NavelRock_Down11/scripts.inc"
	.include "data/maps/NavelRock_Bottom/scripts.inc"
	.include "data/maps/TrainerHill_Elevator/scripts.inc"
	.include "data/maps/Route104_Prototype/scripts.inc"
	.include "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route109_SeashoreHouse/scripts.inc"
	.include "data/maps/Route110_TrickHouseEntrance/scripts.inc"
	.include "data/maps/Route110_TrickHouseEnd/scripts.inc"
	.include "data/maps/Route110_TrickHouseCorridor/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle1/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle2/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle3/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle4/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle5/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle6/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle7/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle8/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc"
	.include "data/maps/Route113_GlassWorkshop/scripts.inc"
	.include "data/maps/Route123_BerryMastersHouse/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_1F/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_2F/scripts.inc"
	.include "data/maps/Route119_House/scripts.inc"
	.include "data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc"

	.include "data/scripts/std_msgbox.inc"
	.include "data/scripts/trainer_battle.inc"
	.include "data/scripts/new_game.inc"
	.include "data/scripts/hall_of_fame.inc"

	.include "data/scripts/config.inc"
	.include "data/scripts/debug.inc"

EventScript_WhiteOut::
	call EverGrandeCity_HallOfFame_EventScript_ResetEliteFour
	goto EventScript_ResetMrBriney
	end

EventScript_AfterWhiteOutHeal::
	lockall
	msgbox gText_FirstShouldRestoreMonsHealth
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	call_if_unset FLAG_DEFEATED_RUSTBORO_GYM, EventScript_AfterWhiteOutHealMsgPreRoxanne
	call_if_set FLAG_DEFEATED_RUSTBORO_GYM, EventScript_AfterWhiteOutHealMsg
	applymovement VAR_LAST_TALKED, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

EventScript_AfterWhiteOutHealMsgPreRoxanne::
	msgbox gText_MonsHealedShouldBuyPotions
	return

EventScript_AfterWhiteOutHealMsg::
	msgbox gText_MonsHealed
	return

EventScript_AfterWhiteOutMomHeal::
	lockall
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox gText_HadQuiteAnExperienceTakeRest
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox gText_MomExplainHPGetPotions
	fadedefaultbgm
	releaseall
	end

EventScript_ResetMrBriney::
	goto_if_eq VAR_BRINEY_LOCATION, 1, EventScript_MoveMrBrineyToHouse
	goto_if_eq VAR_BRINEY_LOCATION, 2, EventScript_MoveMrBrineyToDewford
	goto_if_eq VAR_BRINEY_LOCATION, 3, EventScript_MoveMrBrineyToRoute109
	end

EventScript_MoveMrBrineyToHouse::
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	end

EventScript_MoveMrBrineyToDewford::
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	end

EventScript_MoveMrBrineyToRoute109::
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	end

EverGrandeCity_HallOfFame_EventScript_ResetEliteFour::
	clearflag FLAG_DEFEATED_ELITE_4_SIDNEY
	clearflag FLAG_DEFEATED_ELITE_4_PHOEBE
	clearflag FLAG_DEFEATED_ELITE_4_GLACIA
	clearflag FLAG_DEFEATED_ELITE_4_DRAKE
	clearflag FLAG_ELITE_FOUR_PARTY_ONLY
	clearflag FLAG_ELITE_FOUR_PARTY_EXCHANGED
	special RestorePlayerBox
	setvar VAR_ELITE_4_STATE, 0
	return

Common_EventScript_MultibattleWipe::
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	end

Common_EventScript_EliteFourAttendant::
	faceplayer
	lockall
	setvar VAR_0x8000, 0
	goto_if_set FLAG_ELITE_FOUR_PARTY_ONLY, Common_EventScript_EliteFourAttendantBestOfLuck
	goto_if_set FLAG_ELITE_FOUR_PARTY_EXCHANGED, Common_EventScript_EliteFourAttendantBestOfLuck
	message Common_Text_EliteFourAttendantSwitchPartyWithPool
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 0, TRUE
	switch VAR_RESULT
	case 1, Common_EventScript_EliteFourNoExchange
	case 0, Common_EventScript_EliteFourExchangePokemon
	end

Common_EventScript_EliteFourExchangePokemon::
	special SaveEliteFourPool
	special ChooseHalfPartyForEliteFour
	waitstate
	switch VAR_RESULT
	goto_if_ne VAR_RESULT, 0, Common_EventScript_EliteFourExchangePokemonPool
	special LoadEliteFourPool
	goto Common_EventScript_EliteFourAttendantBestOfLuck
	end

Common_EventScript_EliteFourExchangePokemonPool::
	factory_rentmons
	waitstate
	goto Common_EventScript_EliteFourExchangePokemonEnd
	end

Common_EventScript_EliteFourExchangePokemonEnd::
	setflag FLAG_ELITE_FOUR_PARTY_EXCHANGED
	goto Common_EventScript_EliteFourAttendantBestOfLuck
	end

Common_EventScript_EliteFourNoExchange::
	goto Common_EventScript_EliteFourAttendantBestOfLuck
	end

Common_EventScript_EliteFourAttendantBestOfLuck::
	msgbox Common_Text_EliteFourAttendantBestOfLuck, MSGBOX_DEFAULT
	closemessage
	release
	end

Common_Text_EliteFourAttendantSwitchPartyWithPool:
	.string "You may now exchange up to three \n"
	.string "Pokémon in your party with Pokémon\l"
	.string "in your pool.\p"
	.string "Would you like to make an exchange?$"

Common_Text_EliteFourAttendantBestOfLuck:
	.string "I wish you the very best of luck for\n"
	.string "your challenge.$"

Common_EventScript_UpdateBrineyLocation::
	goto_if_unset FLAG_RECEIVED_POKENAV, Common_EventScript_NopReturn
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Common_EventScript_NopReturn
	goto_if_unset FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT, EventScript_SetBrineyLocation_House
	goto_if_unset FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN, EventScript_SetBrineyLocation_Dewford
	goto_if_unset FLAG_HIDE_ROUTE_109_MR_BRINEY, EventScript_SetBrineyLocation_Route109
	return

Common_EventScript_Tabitha::
	goto Common_EventScript_Emmie
	faceplayer
	end

Common_EventScript_Shelly::
	goto Common_EventScript_Emmie
	faceplayer
	end

Common_EventScript_NotEligibleToParticipate::
	lockall
	faceplayer
	msgbox Common_Text_NotEligibleToParticipate, MSGBOX_AUTOCLOSE
	releaseall
	end

Common_Text_NotEligibleToParticipate:
	.string "My apologies, however you are not\n"
	.string "eligible to participate.\p"
	.string "Your arrangements involve battling\n"
	.string "the Frontier Brains directly.$"

Common_Text_StevenSpeech:
	.string "Steven: Hello, {PLAYER}, Emmie.\p"
	.string "I suppose I never told you that I\n"
	.string "was once the champion of Hoenn.\p"
	.string "After you helped me at the Mossdeep\n"
	.string "Space Center, I knew it wouldn't be\l"
	.string "long before you made it here.\p"
	.string "The talent you have displayed is\n"
	.string "truly remarkable.\p"
	.string "Could this be the day that we see\n"
	.string "a new pair of champions crowned?\p"
	.string "Or perhaps, will the old guard be the\n"
	.string "ones standing victorious in the end?\p"
	.string "The only way to find out is for you\n"
	.string "to demonstrate your abilities to us\l"
	.string "one final time.\p"
	.string "Show us right here and now!$"

Common_EventScript_ResetEmmie::
	destroyfollowernpc
	setfollowernpc 7, FNPC_ALL_NO_WHITEOUT, Common_EventScript_Emmie
	delay 16
	clearflag FLAG_HIDE_EMMIE_RESET
	end

Common_EventScript_Emmie::
	faceplayer
	call_if_eq VAR_PARTNER_EMMIE_STATE, 0, Common_EventScript_EmmieHeadToPetalburg
	call_if_eq VAR_PARTNER_EMMIE_STATE, 1, Common_EventScript_EmmieHeadToMauville
	call_if_eq VAR_PARTNER_EMMIE_STATE, 2, Common_EventScript_EmmieGetFirstBadge
	call_if_eq VAR_PARTNER_EMMIE_STATE, 3, Common_EventScript_EmmieMauvilleGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 4, Common_EventScript_EmmieHeadToRustboro
	call_if_eq VAR_PARTNER_EMMIE_STATE, 5, Common_EventScript_EmmieGetSecondBadge
	call_if_eq VAR_PARTNER_EMMIE_STATE, 6, Common_EventScript_EmmieRustboroGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 7, Common_EventScript_EmmieHeadToPetalburg2
	call_if_eq VAR_PARTNER_EMMIE_STATE, 8, Common_EventScript_EmmieUseCyclingRoad
	call_if_eq VAR_PARTNER_EMMIE_STATE, 9, Common_EventScript_EmmieNearlyThere
	call_if_eq VAR_PARTNER_EMMIE_STATE, 10, Common_EventScript_EmmieNormanWaiting
	call_if_eq VAR_PARTNER_EMMIE_STATE, 11, Common_EventScript_EmmieGoAskBriney
	call_if_eq VAR_PARTNER_EMMIE_STATE, 12, Common_EventScript_EmmieSpeakToBriney
	call_if_eq VAR_PARTNER_EMMIE_STATE, 13, Common_EventScript_EmmieLetterAndGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 14, Common_EventScript_EmmieDewfordGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 15, Common_EventScript_EmmieLeaveDewford
	call_if_eq VAR_PARTNER_EMMIE_STATE, 16, Common_EventScript_EmmieGoToDockyard
	call_if_eq VAR_PARTNER_EMMIE_STATE, 17, Common_EventScript_EmmieHeadToMuseum
	call_if_eq VAR_PARTNER_EMMIE_STATE, 18, Common_EventScript_EmmieWhoAreThesePeople
	call_if_eq VAR_PARTNER_EMMIE_STATE, 19, Common_EventScript_EmmieHeadToHarbor
	call_if_eq VAR_PARTNER_EMMIE_STATE, 20, Common_EventScript_EmmieLetsHeadNorth
	call_if_eq VAR_PARTNER_EMMIE_STATE, 21, Common_EventScript_EmmieGetGoGoggles
	call_if_eq VAR_PARTNER_EMMIE_STATE, 22, Common_EventScript_EmmieGoToFallarbor
	call_if_eq VAR_PARTNER_EMMIE_STATE, 23, Common_EventScript_EmmieSeeMeteorFalls
	call_if_eq VAR_PARTNER_EMMIE_STATE, 24, Common_EventScript_EmmiePeopleInRed
	call_if_eq VAR_PARTNER_EMMIE_STATE, 25, Common_EventScript_EmmieHeadToChimney
	call_if_eq VAR_PARTNER_EMMIE_STATE, 26, Common_EventScript_EmmieItsTeamMagma
	call_if_eq VAR_PARTNER_EMMIE_STATE, 27, Common_EventScript_EmmieHeadBackToChimney
	call_if_eq VAR_PARTNER_EMMIE_STATE, 28, Common_EventScript_EmmieHeadToLavaridge
	call_if_eq VAR_PARTNER_EMMIE_STATE, 29, Common_EventScript_EmmieGoLavaridgeGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 30, Common_EventScript_EmmieInLavaridgeGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 31, Common_EventScript_EmmieHeadToFortree
	call_if_eq VAR_PARTNER_EMMIE_STATE, 32, Common_EventScript_EmmieGoToMtPyre
	call_if_eq VAR_PARTNER_EMMIE_STATE, 33, Common_EventScript_EmmieBothTeamsPyre
	call_if_eq VAR_PARTNER_EMMIE_STATE, 34, Common_EventScript_EmmieBackToPyre
	call_if_eq VAR_PARTNER_EMMIE_STATE, 35, Common_EventScript_EmmiePyreSummit
	call_if_eq VAR_PARTNER_EMMIE_STATE, 36, Common_EventScript_EmmieHeadToFortree2
	call_if_eq VAR_PARTNER_EMMIE_STATE, 37, Common_EventScript_EmmieThisIsFortree
	call_if_eq VAR_PARTNER_EMMIE_STATE, 38, Common_EventScript_EmmieFortreeGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 39, Common_EventScript_EmmieMossdeepNext
	call_if_eq VAR_PARTNER_EMMIE_STATE, 40, Common_EventScript_EmmieGoMeetShelly
	call_if_eq VAR_PARTNER_EMMIE_STATE, 41, Common_EventScript_EmmieReturnToJaggedPass
	call_if_eq VAR_PARTNER_EMMIE_STATE, 42, Common_EventScript_EmmieEnterMagmaHideout
	call_if_eq VAR_PARTNER_EMMIE_STATE, 43, Common_EventScript_ShellyWhatsUpAhead
	call_if_eq VAR_PARTNER_EMMIE_STATE, 44, Common_EventScript_ShellyNearlyThere
	call_if_eq VAR_PARTNER_EMMIE_STATE, 45, Common_EventScript_EmmieLetsFightMHOMaxie
	call_if_eq VAR_PARTNER_EMMIE_STATE, 46, Common_EventScript_EmmieWowItsHot
	call_if_eq VAR_PARTNER_EMMIE_STATE, 47, Common_EventScript_EmmieThisIsLilycove
	call_if_eq VAR_PARTNER_EMMIE_STATE, 48, Common_EventScript_EmmieEnterAquaHideout
	call_if_eq VAR_PARTNER_EMMIE_STATE, 49, Common_EventScript_TabithaGetAMoveOn
	call_if_eq VAR_PARTNER_EMMIE_STATE, 50, Common_EventScript_EmmieHeadToMossdeep
	call_if_eq VAR_PARTNER_EMMIE_STATE, 51, Common_EventScript_EmmieGoToMossdeepGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 52, Common_EventScript_EmmieInMossdeepGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 53, Common_EventScript_EmmieSeeSpaceCenter
	call_if_eq VAR_PARTNER_EMMIE_STATE, 54, Common_EventScript_EmmieMagmaUpToNoGood
	call_if_eq VAR_PARTNER_EMMIE_STATE, 55, Common_EventScript_EmmieMustFindMaxie
	call_if_eq VAR_PARTNER_EMMIE_STATE, 56, Common_EventScript_EmmieMaxieUpAhead
	call_if_eq VAR_PARTNER_EMMIE_STATE, 57, Common_EventScript_EmmieTeamsOutOfControl
	call_if_eq VAR_PARTNER_EMMIE_STATE, 58, Common_EventScript_EmmieWhatIsThisCavern
	call_if_eq VAR_PARTNER_EMMIE_STATE, 59, Common_EventScript_EmmieReturnToSFC
	call_if_eq VAR_PARTNER_EMMIE_STATE, 60, Common_EventScript_EmmieLetsFightSFCArchie
	call_if_eq VAR_PARTNER_EMMIE_STATE, 61, Common_EventScript_EmmieMeetStevenSootopolis
	call_if_eq VAR_PARTNER_EMMIE_STATE, 62, Common_EventScript_EmmieWhoAreWeMeeting
	call_if_eq VAR_PARTNER_EMMIE_STATE, 63, Common_EventScript_EmmieMeetWallaceSkyPillar
	call_if_eq VAR_PARTNER_EMMIE_STATE, 64, Common_EventScript_EmmieEnterSkyPillar
	call_if_eq VAR_PARTNER_EMMIE_STATE, 65, Common_EventScript_EmmieSkyPillarMess
	call_if_eq VAR_PARTNER_EMMIE_STATE, 66, Common_EventScript_EmmieSkyPillarTop
	call_if_eq VAR_PARTNER_EMMIE_STATE, 67, Common_EventScript_EmmieReturnToSkyPillar
	call_if_eq VAR_PARTNER_EMMIE_STATE, 68, Common_EventScript_EmmieReturnToSootopolis
	call_if_eq VAR_PARTNER_EMMIE_STATE, 69, Common_EventScript_EmmieGoToSootopolisGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 70, Common_EventScript_EmmieInSootopolisGym
	call_if_eq VAR_PARTNER_EMMIE_STATE, 71, Common_EventScript_EmmieFrontierOrEverGrande
	call_if_eq VAR_PARTNER_EMMIE_STATE, 72, Common_EventScript_EmmieFinalPreparations
	call_if_eq VAR_PARTNER_EMMIE_STATE, 73, Common_EventScript_EmmieBeforeSidney
	call_if_eq VAR_PARTNER_EMMIE_STATE, 74, Common_EventScript_EmmieBeforePhoebe
	call_if_eq VAR_PARTNER_EMMIE_STATE, 75, Common_EventScript_EmmieBeforeGlacia
	call_if_eq VAR_PARTNER_EMMIE_STATE, 76, Common_EventScript_EmmieBeforeDrake
	call_if_eq VAR_PARTNER_EMMIE_STATE, 77, Common_EventScript_EmmieBeforeChampion
	call_if_eq VAR_PARTNER_EMMIE_STATE, 78, Common_EventScript_EmmiePostGame
	end

Common_EventScript_EmmiePostGame::
	msgbox Common_Text_EmmiePostGame, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmiePostGame:
	.string "Emmie: Hey, {PLAYER}, now that we\n"
	.string "are champions, we can go anywhere\l"
	.string "and do anything that we want!$"

Common_EventScript_EmmieBeforeChampion::
	msgbox Common_Text_EmmieBeforeChampion, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieBeforeChampion:
	.string "Emmie: This is it, {PLAYER}.\p"
	.string "Everything we've faced together comes\n"
	.string "down to this final battle.\p"
	.string "The Champion is waiting for us.$"

Common_EventScript_EmmieBeforeDrake::
	msgbox Common_Text_EmmieBeforeDrake, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieBeforeDrake:
	.string "Emmie: We're over halfway there now,\n"
	.string "{PLAYER}.\p"
	.string "Remember to keep calm and stay\n"
	.string "focused!$"

Common_EventScript_EmmieBeforeGlacia::
	msgbox Common_Text_EmmieBeforeGlacia, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieBeforeGlacia:
	.string "Emmie: Two Elite Four members down,\n"
	.string "we're on a roll!$"

Common_EventScript_EmmieBeforePhoebe::
	msgbox Common_Text_EmmieBeforePhoebe, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieBeforePhoebe:
	.string "Emmie: That's one down, let's keep\n"
	.string "up this momentum!$"

Common_EventScript_EmmieBeforeSidney::
	msgbox Common_Text_EmmieBeforeSidney, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieBeforeSidney:
	.string "Emmie: I can't believe that we are\n"
	.string "finally here…\p"
	.string "I've got your back, let's give this\n"
	.string "our all!$"

Common_EventScript_EmmieFinalPreparations::
	msgbox Common_Text_EmmieFinalPreparations, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieFinalPreparations:
	.string "Emmie: I suppose our journey is almost\n"
	.string "over now, {PLAYER}…\p"
	.string "Let's make sure we're fully prepared\n"
	.string "before we challenge the Elite Four!$"

Common_EventScript_EmmieFrontierOrEverGrande::
	msgbox Common_Text_EmmieFrontierOrEverGrande, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieFrontierOrEverGrande:
	.string "Emmie: We have all eight gym badges\n"
	.string "now, {PLAYER}!\p"
	.string "We can either head straight to Ever\n"
	.string "Grande City, or we could go to the\l"
	.string "Battle Frontier first instead.$"

Common_EventScript_EmmieInSootopolisGym::
	msgbox Common_Text_EmmieInSootopolisGym, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieInSootopolisGym:
	.string "Emmie: This is it, {PLAYER}, the\n"
	.string "final gym.\p"
	.string "Let's give this our all!$"

Common_EventScript_EmmieGoToSootopolisGym::
	msgbox Common_Text_EmmieGoToSootopolisGym, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGoToSootopolisGym:
	.string "Emmie: It's so peaceful now that all\n"
	.string "that is over…\p"
	.string "Why don't we go and challenge\n"
	.string "Sootopolis gym?$"

Common_EventScript_EmmieReturnToSootopolis::
	msgbox Common_Text_EmmieReturnToSootopolis, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieReturnToSootopolis:
	.string "Emmie: C'mon, {PLAYER}, we should\n"
	.string "head to Sootopolis as well.$"

Common_EventScript_EmmieReturnToSkyPillar::
	msgbox Common_Text_EmmieReturnToSkyPillar, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieReturnToSkyPillar:
	.string "Emmie: {PLAYER}, we should get back\n"
	.string "to Sky Pillar as soon as possible!$"

Common_EventScript_EmmieSkyPillarTop::
	msgbox Common_Text_EmmieSkyPillarTop, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieSkyPillarTop:
	.string "Emmie: I can see Archie and Maxie up\n"
	.string "ahead.\p"
	.string "Let's keep going, we're almost there!$"

Common_EventScript_EmmieSkyPillarMess::
	msgbox Common_Text_EmmieSkyPillarMess, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieSkyPillarMess:
	.string "Emmie: Team Magma and Team Aqua are\n"
	.string "fighting each other here…\p"
	.string "This whole situation is a complete\n"
	.string "mess…\p"
	.string "We have to make it to the top as\n"
	.string "quickly as we can!$"

Common_EventScript_EmmieEnterSkyPillar::
	msgbox Common_Text_EmmieEnterSkyPillar, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieEnterSkyPillar:
	.string "Emmie: Let's head into Sky Pillar.$"

Common_EventScript_EmmieMeetWallaceSkyPillar::
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, Common_EventScript_EmmieMeetWallaceSkyPillarStopMaxie
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, Common_EventScript_EmmieMeetWallaceSkyPillarStopArchie
	return

Common_EventScript_EmmieMeetWallaceSkyPillarStopArchie::
	msgbox Common_Text_EmmieMeetWallaceSkyPillarStopArchie, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieMeetWallaceSkyPillarStopArchie:
	.string "Emmie: C'mon, {PLAYER}, we're a part\n"
	.string "of this now.\p"
	.string "We have to help stop Archie. Let's\n"
	.string "hurry to Sky Pillar and meet Wallace!$"

Common_EventScript_EmmieMeetWallaceSkyPillarStopMaxie::
	msgbox Common_Text_EmmieMeetWallaceSkyPillarStopMaxie, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieMeetWallaceSkyPillarStopMaxie:
	.string "Emmie: C'mon, {PLAYER}, we're a part\n"
	.string "of this now.\p"
	.string "We have to help stop Maxie. Let's\n"
	.string "hurry to Sky Pillar and meet Wallace!$"

Common_EventScript_EmmieWhoAreWeMeeting::
	msgbox Common_Text_EmmieWhoAreWeMeeting, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieWhoAreWeMeeting:
	.string "Emmie: I wonder who we are supposed\n"
	.string "to be meeting in here…$"

Common_EventScript_EmmieMeetStevenSootopolis::
	msgbox Common_Text_EmmieMeetStevenSootopolis, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieMeetStevenSootopolis:
	.string "Emmie: This is madness…\p"
	.string "We should find Steven somewhere in\n"
	.string "Sootopolis City.$"

Common_EventScript_EmmieLetsFightSFCArchie::
	msgbox Common_Text_EmmieLetsFightSFCArchie, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieLetsFightSFCArchie:
	.string "Emmie: {PLAYER}, this isn't the first\n"
	.string "time we've been in this position.\p"
	.string "I know that we can defeat Archie and\n"
	.string "Kyogre if we work together!$"

Common_EventScript_EmmieReturnToSFC::
	msgbox Common_Text_EmmieReturnToSFC, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieReturnToSFC:
	.string "Emmie: We have to find out what Team\n"
	.string "Aqua are doing in that cavern.$"

Common_EventScript_EmmieWhatIsThisCavern::
	msgbox Common_Text_EmmieWhatIsThisCavern, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieWhatIsThisCavern:
	.string "Emmie: A cavern hidden at the bottom\n"
	.string "of the ocean?\p"
	.string "What could Team Aqua possibly be\n"
	.string "after somewhere like this?$"

Common_EventScript_EmmieTeamsOutOfControl::
	msgbox Common_Text_EmmieTeamsOutOfControl, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieTeamsOutOfControl:
	.string "Emmie: Team Aqua and Team Magma are\n"
	.string "both completely out of control.\p"
	.string "Matt told you to search the seas\n"
	.string "beyond Lilycove, right?\p"
	.string "There didn't seem to be anything\n"
	.string "of interest between Lilycove and\l"
	.string "Mossdeep…\p"
	.string "Let's investigate the areas around\n"
	.string "Sootopolis City next.$"

Common_EventScript_EmmieMaxieUpAhead::
	msgbox Common_Text_EmmieMaxieUpAhead, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieMaxieUpAhead:
	.string "Emmie: I see Maxie up ahead…$"

Common_EventScript_EmmieMustFindMaxie::
	msgbox Common_Text_EmmieMustFindMaxie, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieMustFindMaxie:
	.string "Emmie: Team Magma are everywhere…\p"
	.string "Maxie must be somewhere, let's try\n"
	.string "and find out what he's after.$"

Common_EventScript_EmmieMagmaUpToNoGood::
	msgbox Common_Text_EmmieMagmaUpToNoGood, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieMagmaUpToNoGood:
	.string "Emmie: Whatever Team Magma are doing\n"
	.string "at the Space Center can't be good.$"

Common_EventScript_EmmieSeeSpaceCenter::
	msgbox Common_Text_EmmieSeeSpaceCenter, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieSeeSpaceCenter:
	.string "Emmie: You know, I'd love to check\n"
	.string "out Mossdeep Space Center before we\l"
	.string "head anywhere new!$"

Common_EventScript_EmmieInMossdeepGym::
	msgbox Common_Text_EmmieInMossdeepGym, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieInMossdeepGym:
	.string "Emmie: C'mon, {PLAYER}, let's keep\n"
	.string "up our momentum and get our seventh\l"
	.string "gym badge!$"

Common_EventScript_EmmieGoToMossdeepGym::
	msgbox Common_Text_EmmieGoToMossdeepGym, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGoToMossdeepGym:
	.string "Emmie: Now that we've made it to\n"
	.string "Mossdeep, we might as well challenge\l"
	.string "the gym!$"

Common_EventScript_EmmieHeadToMossdeep::
	msgbox Common_Text_EmmieHeadToMossdeep, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToMossdeep:
	.string "Emmie: So, Archie took off in the\n"
	.string "submarine from Slateport City?\p"
	.string "Whatever he has planned can't be\n"
	.string "good…\p"
	.string "Well, Mossdeep City isn't far from\n"
	.string "Lilycove, why don't we head there\l"
	.string "next?$"
	
Common_EventScript_TabithaGetAMoveOn::
	msgbox Common_Text_TabithaGetAMoveOn, MSGBOX_AUTOCLOSE
	return

Common_Text_TabithaGetAMoveOn:
	.string "Tabitha: C'mon kid, hurry up, let's\n"
	.string "get a move on!$"

Common_EventScript_EmmieEnterAquaHideout::
	msgbox Common_Text_EmmieEnterAquaHideout, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieEnterAquaHideout:
	.string "Emmie: I've got a bad feeling about\n"
	.string "this, but I think we should head\l"
	.string "into Team Aqua's hideout.$"

Common_EventScript_EmmieThisIsLilycove::
	msgbox Common_Text_EmmieThisIsLilycove, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieThisIsLilycove:
	.string "Emmie: Maxie told Tabitha to head to\n"
	.string "Lilycove.\p"
	.string "That must mean Team Aqua's hideout is\n"
	.string "somewhere around here…$"

Common_EventScript_EmmieWowItsHot::
	msgbox Common_Text_EmmieWowItsHot, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieWowItsHot:
	.string "Emmie: Wow, it's hot out here…\n"
	.string "What on earth has Maxie done…\p"
	.string "You said Shelly told you that Team\n"
	.string "Aqua would retaliate?\p"
	.string "I think we should also head to\n"
	.string "Lilycove and try to find out what\l"
	.string "Team Aqua has planned…$"

Common_EventScript_EmmieLetsFightMHOMaxie::
	msgbox Common_Text_EmmieLetsFightMHOMaxie, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieLetsFightMHOMaxie:
	.string "Emmie: {PLAYER}, I know that we can\n"
	.string "take on Maxie if we work together!$"

Common_EventScript_ShellyNearlyThere::
	msgbox Common_Text_ShellyNearlyThere, MSGBOX_AUTOCLOSE
	return

Common_Text_ShellyNearlyThere:
	.string "Shelly: We're almost at the heart\n"
	.string "of the hideout.\p"
	.string "Let's keep pushing on.$"

Common_EventScript_ShellyWhatsUpAhead::
	msgbox Common_Text_ShellyWhatsUpAhead, MSGBOX_AUTOCLOSE
	return

Common_Text_ShellyWhatsUpAhead:
	.string "Shelly: Let's be careful.\p"
	.string "I'm not sure what we may face up\n"
	.string "ahead.$"

Common_EventScript_EmmieEnterMagmaHideout::
	msgbox Common_Text_EmmieEnterMagmaHideout, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieEnterMagmaHideout:
	.string "Emmie: I'm not overly happy about\n"
	.string "this, but let's get ourselves into\l"
	.string "Team Magma's hideout.$"

Common_EventScript_EmmieReturnToJaggedPass::
	msgbox Common_Text_EmmieReturnToJaggedPass, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieReturnToJaggedPass:
	.string "Emmie: When you're ready for our\n"
	.string "battle, return to the entrance of\l"
	.string "Team Magma's hideout.$"

Common_EventScript_EmmieGoMeetShelly::
	msgbox Common_Text_EmmieGoMeetShelly, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGoMeetShelly:
	.string "Emmie: I really don't trust that\n"
	.string "Shelly…\p"
	.string "But we can't just ignore what she\n"
	.string "said about Team Magma…\p"
	.string "I think we should go an meet her\n"
	.string "near Lavaridge Town.$"

Common_EventScript_EmmieMossdeepNext::
	msgbox Common_Text_EmmieMossdeepNext, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieMossdeepNext:
	.string "Emmie: With six badges in hand, I\n"
	.string "guess we're off to Mossdeep next.$"

Common_EventScript_EmmieFortreeGym::
	msgbox Common_Text_EmmieFortreeGym, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieFortreeGym:
	.string "Emmie: So, this is Fortree Gym?\p"
	.string "These barriers look surprisingly\n"
	.string "easy to get through!$"

Common_EventScript_EmmieThisIsFortree::
	msgbox Common_Text_EmmieThisIsFortree, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieThisIsFortree:
	.string "Emmie: Fortree City is so beautiful,\n"
	.string "don't you think?\p"
	.string "Let's make our way to the gym!$"

Common_EventScript_EmmieHeadToFortree2::
	msgbox Common_Text_EmmieHeadToFortree2, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToFortree2:
	.string "Emmie: I'm proud of you for what you\n"
	.string "did on Mt Pyre.\p"
	.string "Maxie and Archie…\p"
	.string "Could they really be trying to awaken\n"
	.string "the ancient legendary Pokémon?\p"
	.string "Let's continue to Fortree City for\n"
	.string "now…$"

Common_EventScript_EmmiePyreSummit::
	msgbox Common_Text_EmmiePyreSummit, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmiePyreSummit:
	.string "Emmie: I can see both Maxie and\n"
	.string "Archie just up ahead…\p"
	.string "I've got a very bad feeling about\n"
	.string "this…$"

Common_EventScript_EmmieBackToPyre::
	msgbox Common_Text_EmmieBackToPyre, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieBackToPyre:
	.string "Emmie: With Team Magma and Team Aqua\n"
	.string "blocking the way, we can't continue\l"
	.string "to Fortree City…\p"
	.string "Let's head back to Mt Pyre.$"

Common_EventScript_EmmieBothTeamsPyre::
	msgbox Common_Text_EmmieBothTeamsPyre, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieBothTeamsPyre:
	.string "Emmie: Team Aqua and Team Magma are\n"
	.string "fighting each other here?\p"
	.string "This can't be good… Let's see if we\n"
	.string "can make it to the summit.$"

Common_EventScript_EmmieGoToMtPyre::
	msgbox Common_Text_EmmieGoToMtPyre, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGoToMtPyre:
	.string "Emmie: With Team Magma and Team Aqua\n"
	.string "blocking the way, we can't continue\l"
	.string "to Fortree City…\p"
	.string "We may as well check out Mt Pyre.$"

Common_EventScript_EmmieHeadToFortree::
	msgbox Common_Text_EmmieHeadToFortree, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToFortree:
	.string "Emmie: Five badges… We're on a\n"
	.string "roll!\p"
	.string "I think we should aim for Fortree\n"
	.string "City next!$"

Common_EventScript_EmmieInLavaridgeGym::
	msgbox Common_Text_EmmieInLavaridgeGym, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieInLavaridgeGym:
	.string "Emmie: Wow, it's hot in here.\p"
	.string "How does Flannery expect people\n"
	.string "to work in these conditions?$"

Common_EventScript_EmmieGoLavaridgeGym::
	msgbox Common_Text_EmmieGoLavaridgeGym, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGoLavaridgeGym:
	.string "Emmie: Let's head to Lavaridge\n"
	.string "Gym!$"

Common_EventScript_EmmieHeadToLavaridge::
	msgbox Common_Text_EmmieHeadToLavaridge, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToLavaridge:
	.string "Emmie: Team Aqua and Team Magma…\p"
	.string "They're complete opposites, yet\n"
	.string "both as bad as each other!\p"
	.string "Anyway, let's continue on to\n"
	.string "Lavaridge Town.$"

Common_EventScript_EmmieHeadBackToChimney::
	msgbox Common_Text_EmmieHeadBackToChimney, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadBackToChimney:
	.string "Emmie: I think we should get back\n"
	.string "to Mt Chimney and find out what\l"
	.string "Team Magma is doing!$"

Common_EventScript_EmmieItsTeamMagma::
	msgbox Common_Text_EmmieItsTeamMagma, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieItsTeamMagma:
	.string "Emmie: Oh no, it's those Team Magma\n"
	.string "people again!\p"
	.string "That Tabitha guy seems seriously\n"
	.string "unhinged.\p"
	.string "Whatever they're doing here, it can't\n"
	.string "be anything good!$"

Common_EventScript_EmmieHeadToChimney::
	msgbox Common_Text_EmmieHeadToChimney, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToChimney:
	.string "Emmie: Those Team Magma people seem\n"
	.string "like bad news too…\p"
	.string "Let's see if we can make our way to\n"
	.string "Lavaridge Town next.$"

Common_EventScript_EmmiePeopleInRed::
	msgbox Common_Text_EmmiePeopleInRed, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmiePeopleInRed:
	.string "Emmie: Who are those people dressed\n"
	.string "in red…\p"
	.string "What could they possibly want in\n"
	.string "Meteor Falls?$"

Common_EventScript_EmmieSeeMeteorFalls::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Common_EventScript_EmmieSeeMeteorFallsMale
	call_if_eq VAR_RESULT, FEMALE, Common_EventScript_EmmieSeeMeteorFallsFemale
	return

Common_EventScript_EmmieSeeMeteorFallsMale::
	msgbox Common_Text_EmmieSeeMeteorFallsMale, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieSeeMeteorFallsMale:
	.string "Emmie: I didn't expect to see Wally\n"
	.string "and May all the way out in\l"
	.string "Fallarbor Town.\p"
	.string "That was a nice surprise!\p"
	.string "Could we go and check out Meteor\n"
	.string "Falls next, please?$"

Common_EventScript_EmmieSeeMeteorFallsFemale::
	msgbox Common_Text_EmmieSeeMeteorFallsFemale, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieSeeMeteorFallsFemale:
	.string "Emmie: I didn't expect to see Wally\n"
	.string "and Brendan all the way out in\l"
	.string "Fallarbor Town.\p"
	.string "That was a nice surprise!\p"
	.string "Could we go and check out Meteor\n"
	.string "Falls next, please?$"

Common_EventScript_EmmieGoToFallarbor::
	msgbox Common_Text_EmmieGoToFallarbor, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGoToFallarbor:
	.string "Emmie: Why don't we make our way to\n"
	.string "Fallarbor Town in the north?$"

Common_EventScript_EmmieGetGoGoggles::
	msgbox Common_Text_EmmieGetGoGoggles, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGetGoGoggles:
	.string "Emmie: Let's see if the Winstrates\n"
	.string "have any advice on getting through\l"
	.string "the desert to the north.$"

Common_EventScript_EmmieLetsHeadNorth::
	msgbox Common_Text_EmmieLetsHeadNorth, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieLetsHeadNorth:
	.string "Emmie: Those Team Aqua goons seem\n"
	.string "like bad news.\p"
	.string "I wonder what they have planned…\p"
	.string "Anyway, why don't we continue north\n"
	.string "for now?$"

Common_EventScript_EmmieHeadToHarbor::
	msgbox Common_Text_EmmieHeadToHarbor, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToHarbor:
	.string "Emmie: Stern is heading to the\n"
	.string "Harbor.\p"
	.string "I think we should follow him!$"

Common_EventScript_EmmieWhoAreThesePeople::
	msgbox Common_Text_EmmieWhoAreThesePeople, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieWhoAreThesePeople:
	.string "Emmie: Those people are dressed\n"
	.string "in the same awful outfits as those\l"
	.string "people we fought in Petalburg Woods…\p"
	.string "Just who are they?$"

Common_EventScript_EmmieHeadToMuseum::
	msgbox Common_Text_EmmieHeadToMuseum, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToMuseum:
	.string "Emmie: Dock said we would find\n"
	.string "Captain Stern at the Slateport\l"
	.string "Oceanic Museum, right?$"

Common_EventScript_EmmieGoToDockyard::
	msgbox Common_Text_EmmieGoToDockyard, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGoToDockyard:
	.string "Emmie: Let's make our way to\n"
	.string "Slateport Shipyard and deliver\l"
	.string "these goods to Captain Stern.$"
	
Common_EventScript_EmmieLeaveDewford::
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Common_EventScript_EmmieLetterAndGym
	msgbox Common_Text_EmmieLeaveDewford, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieLeaveDewford:
	.string "Emmie: I guess it's time for us\n"
	.string "to leave Dewford Town.\p"
	.string "Let's speak to Mr Briney and\n"
	.string "make our way to Slateport City.$"

Common_EventScript_EmmieDewfordGym::
	msgbox Common_Text_EmmieDewfordGym, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieDewfordGym:
	.string "Emmie: Dewford Gym…\p"
	.string "Apparently Brawly used to strike\n"
	.string "fear into the hearts of trainers\l"
	.string "around the world in the old days.$"

Common_EventScript_EmmieLetterAndGym::
	msgbox Common_Text_EmmieLetterAndGym, MSGBOX_AUTOCLOSE
	end

Common_Text_EmmieLetterAndGym:
	.string "Emmie: Dewford Town is quite\n"
	.string "nice, isn't it?\p"
	.string "Remember, we need to deliver the\n"
	.string "letter for Mr Briney and challenge\l"
	.string "the gym before we leave.$"

Common_EventScript_EmmieSpeakToBriney::
	msgbox Common_Text_EmmieSpeakToBriney, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieSpeakToBriney:
	.string "Emmie: Let's make sure that we\n"
	.string "have everything we need, then\l"
	.string "let's speak to Mr Briney!$"

Common_EventScript_EmmieGoAskBriney::
	msgbox Common_Text_EmmieGoAskBriney, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGoAskBriney:
	.string "Emmie: I can't believe that we\n"
	.string "actually defeated dad!\p"
	.string "I guess our next stop should be\n"
	.string "Dewford Town.\p"
	.string "Let's ask Mr Briney if he will\n"
	.string "take us there.\p"
	.string "I think he lives somewhere on\n"
	.string "Route 104.$"

Common_EventScript_EmmieNormanWaiting::
	msgbox Common_Text_EmmieNormanWaiting, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieNormanWaiting:
	.string "Emmie: I guess dad must be\n"
	.string "waiting at the back of the gym.\p"
	.string "I must admit, I'm a little\n"
	.string "nervous…$"

Common_EventScript_EmmieNearlyThere::
	msgbox Common_Text_EmmieNearlyThere, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieNearlyThere:
	.string "Emmie: C'mon, I'm excited to\n"
	.string "battle dad!$"

Common_EventScript_EmmieUseCyclingRoad::
	msgbox Common_Text_EmmieUseCyclingRoad, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieUseCyclingRoad:
	.string "Emmie: Let's take the Cycling\n"
	.string "Road back to Petalburg!$"

Common_EventScript_EmmieHeadToPetalburg2::
	msgbox Common_Text_EmmieHeadToPetalburg2, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToPetalburg2:
	.string "Emmie: Dad said he would battle us\n"
	.string "when we have two badges, right?\p"
	.string "Let's head back to Petalburg and\n"
	.string "challenge him!$"

Common_EventScript_EmmieRustboroGym::
	msgbox Common_Text_EmmieRustboroGym, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieRustboroGym:
	.string "Emmie: Wow, this gym only has two\n"
	.string "gym trainers?\p"
	.string "Roxanne must be a pain to work with.$"

Common_EventScript_EmmieGetSecondBadge::
	msgbox Common_Text_EmmieGetSecondBadge, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGetSecondBadge:
	.string "Emmie: So this is Rustboro City…\p"
	.string "Let's head to the Gym and try to\n"
	.string "get our second badge.$"

Common_EventScript_EmmieHeadToRustboro::
	msgbox Common_Text_EmmieHeadToRustboro, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToRustboro:
	.string "Emmie: We have our first badge!\p"
	.string "Why don't we head to Rustboro City\n"
	.string "and take on the gym there next?$"

Common_EventScript_EmmieMauvilleGym::
	msgbox Common_Text_EmmieMauvilleGym, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieMauvilleGym:
	.string "Emmie: So this is Mauville Gym…\p"
	.string "I bet the Leader, Wattson, is no\n"
	.string "pushover!$"

Common_EventScript_EmmieGetFirstBadge::
	msgbox Common_Text_EmmieGetFirstBadge, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieGetFirstBadge:
	.string "Emmie: Now that we've made it to\n"
	.string "Mauville, why don't we go to the\l"
	.string "gym and try to get our first badge?$"

Common_EventScript_EmmieHeadToMauville::
	msgbox Common_Text_EmmieHeadToMauville, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToMauville:
	.string "Emmie: Wow, I can't believe dad gave\n"
	.string "us new bikes!\p"
	.string "Still, it would be nice if he\n"
	.string "actually spent time at home.\p"
	.string "Anyway, let's make our way to\n"
	.string "Mauville City.$"

Common_EventScript_EmmieHeadToPetalburg::
	msgbox Common_Text_EmmieHeadToPetalburg, MSGBOX_AUTOCLOSE
	return

Common_Text_EmmieHeadToPetalburg:
	.string "Emmie: Aww, {PLAYER}, I'm so happy\n"
	.string "that we're going to travel together.\p"
	.string "Let's first head to Petalburg City\n"
	.string "and visit dad!$"

Common_EventScript_EmmieBattle::
	lockall
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FacePlayer
	waitmovement 0
	call_if_set FLAG_EMMIE_BATTLE_1, Common_EventScript_PlayerFaceEmmie1
	call_if_set FLAG_EMMIE_BATTLE_2, Common_EventScript_PlayerFaceEmmie2
	call_if_set FLAG_EMMIE_BATTLE_3, Common_EventScript_PlayerFaceEmmie3
	waitmovement 0
	call_if_unset FLAG_EMMIE_BATTLE_INTRO_GIVEN, Common_EventScript_EmmieBattleIntroduction
	setflag FLAG_EMMIE_BATTLE_INTRO_GIVEN
	message Common_Text_EmmieBattleAreYouReady 
	multichoice 25, 6, MULTI_EMMIE_ARE_YOU_READY, 1
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_EmmieDoBattle
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_EmmieInformation
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_EmmieEnd
	goto Common_EventScript_EmmieEnd
	releaseall
	end

Common_EventScript_PlayerFaceEmmie1:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

Common_EventScript_PlayerFaceEmmie2:
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3,VAR_TEMP_4
	call_if_eq VAR_TEMP_3, 15, Common_EventScript_PlayerFaceEmmie2West
	call_if_eq VAR_TEMP_3, 16, Common_EventScript_PlayerFaceEmmie2South
	return

Common_EventScript_PlayerFaceEmmie2West:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

Common_EventScript_PlayerFaceEmmie2South:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	return

Common_EventScript_PlayerFaceEmmie3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

Common_EventScript_EmmieBattleIntroduction::
	call_if_set FLAG_EMMIE_BATTLE_1, Common_EventScript_EmmieBattleIntroduction1
	goto_if_set FLAG_EMMIE_BATTLE_2, Common_EventScript_EmmieBattleIntroduction2
	call_if_set FLAG_EMMIE_BATTLE_3, Common_EventScript_EmmieBattleIntroduction3
	return

Common_EventScript_EmmieBattleIntroduction1::
	msgbox Common_Text_EmmieBattleIntro1, MSGBOX_DEFAULT
	return

Common_EventScript_EmmieBattleIntroduction2::
	msgbox Common_Text_EmmieBattleIntro2, MSGBOX_DEFAULT
	closemessage
	getobjectcurrentxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	call_if_eq VAR_TEMP_3, 16, Common_EventScript_EmmieIntroductionMoveAwayFromHideout
	setflag FLAG_EMMIE_BATTLE_INTRO_GIVEN
	releaseall
	end

Common_EventScript_EmmieIntroductionMoveAwayFromHideout::
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
	call_if_eq VAR_TEMP_3, 15, Common_EventScript_EmmieIntroductionMoveAwayFromHideout1
	call_if_eq VAR_TEMP_3, 16, Common_EventScript_EmmieIntroductionMoveAwayFromHideout2
	waitmovement 0
	return

Common_EventScript_EmmieIntroductionMoveAwayFromHideout1:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
	return

Common_EventScript_EmmieIntroductionMoveAwayFromHideout2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp
	return

Common_EventScript_EmmieBattleIntroduction3::
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox Common_Text_EmmieBattleIntro3, MSGBOX_DEFAULT
	return

Common_EventScript_PlayerFaceEmmieNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

Common_EventScript_PlayerFaceEmmieEast::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

Common_EventScript_PlayerFaceEmmieSouth::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

Common_EventScript_PlayerFaceEmmieWest::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

Common_EventScript_EmmieDoBattle::
	goto_if_set FLAG_EMMIE_BATTLE_1, Common_EventScript_EmmieBattleTeamCheck1
	goto_if_set FLAG_EMMIE_BATTLE_2, Common_EventScript_EmmieBattleTeamCheck2
	goto_if_set FLAG_EMMIE_BATTLE_3, Common_EventScript_EmmieBattleTeamCheck3
	end

Common_EventScript_EmmieBattleTeamCheck1::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	vgoto_if_ne VAR_RESULT, 6, Common_EventScript_EmmieNotEnoughMons
	goto Common_EventScript_EmmieBattle1
	releaseall
	end

Common_EventScript_EmmieBattleTeamCheck2::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	vgoto_if_ge VAR_RESULT, 4, Common_EventScript_EmmieBattle2
	goto Common_EventScript_EmmieNotEnoughMons
	releaseall
	end

Common_EventScript_EmmieBattleTeamCheck3::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	vgoto_if_ne VAR_RESULT, 6, Common_EventScript_EmmieNotEnoughMons
	goto Common_EventScript_EmmieBattle3
	releaseall
	end

Common_EventScript_EmmieNotEnoughMons::
	msgbox Common_Text_EmmieNotEnoughMons, MSGBOX_DEFAULT
	closemessage
	goto_if_set FLAG_EMMIE_BATTLE_1, Common_EventScript_EmmieBattleNotReady1
	goto_if_set FLAG_EMMIE_BATTLE_2, Common_EventScript_EmmieBattleNotReady2
	goto_if_set FLAG_EMMIE_BATTLE_3, Common_EventScript_EmmieBattleNotReady3
	releaseall
	end

Common_EventScript_EmmieInformation::
	message Common_Text_EmmieWhatDoYouNeedToKnow
	multichoice 25, 2, MULTI_EMMIE_INFORMATION, 1
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_EmmieTeam
	compare VAR_RESULT, 1
	goto_if_eq Common_EventScript_EmmieRules
	compare VAR_RESULT, 2
	goto_if_eq Common_EventScript_EmmieItems
	compare VAR_RESULT, 3
	goto_if_eq Common_EventScript_EmmieNatures
	compare VAR_RESULT, 4
	goto_if_eq Common_EventScript_EmmieBattle
	releaseall
	end
	
Common_EventScript_EmmieTeam::
	call_if_set FLAG_EMMIE_BATTLE_1, Common_EventScript_EmmieTeam1
	call_if_set FLAG_EMMIE_BATTLE_2, Common_EventScript_EmmieTeam2
	call_if_set FLAG_EMMIE_BATTLE_3, Common_EventScript_EmmieTeam1
	return

Common_EventScript_EmmieTeam1::
	msgbox Common_Text_EmmieTeam1, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	return

Common_EventScript_EmmieTeam2::
	msgbox Common_Text_EmmieTeam2, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	return

Common_Text_EmmieTeam1:
	.string "For this battle, my team of 6 will\n"
	.string "be the same as yours.$"

Common_Text_EmmieTeam2:
	.string "For this battle, my party begin with a\n"
	.string "MON1, MON2, and MON3.\p"
	.string "My final 3 Pokémon will be the same as\n"
	.string "the 3 you take into battle, in the same\l"
	.string "order.$"

Common_EventScript_EmmieEnd::
	msgbox Common_Text_EmmieComeBackWhenReady, MSGBOX_DEFAULT
	goto_if_set FLAG_EMMIE_BATTLE_1, Common_EventScript_EmmieBattleNotReady1
	goto_if_set FLAG_EMMIE_BATTLE_2, Common_EventScript_EmmieBattleNotReady2
	goto_if_set FLAG_EMMIE_BATTLE_3, Common_EventScript_EmmieBattleNotReady3
	releaseall
	end

Common_EventScript_EmmieBattleNotReady1:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

Common_EventScript_EmmieBattleNotReady2:
	goto Common_EventScript_EmmieIntroductionMoveAwayFromHideout
	end

Common_EventScript_EmmieBattleNotReady3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkLeft
	waitmovement 0
	releaseall
	end

Common_EventScript_PlayerNotReadyNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkUp
	waitmovement 0
	return

Common_EventScript_PlayerNotReadyEast::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkRight
	waitmovement 0
	return

Common_EventScript_PlayerNotReadySouth::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkDown
	waitmovement 0
	return

Common_EventScript_PlayerNotReadyWest::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkLeft
	waitmovement 0
	return


Common_Text_EmmieComeBackWhenReady:
	.string "Emmie: Okay, come back here when you\n"
	.string "are ready!$"

Common_EventScript_EmmieRules::
	goto_if_set FLAG_EMMIE_BATTLE_1, Common_EventScript_EmmieRules1
	goto_if_set FLAG_EMMIE_BATTLE_2, Common_EventScript_EmmieRules2
	goto_if_set FLAG_EMMIE_BATTLE_3, Common_EventScript_EmmieRules3
	releaseall
	end

Common_EventScript_EmmieRules1::
	msgbox Common_Text_EmmieBattleRules1, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	end

Common_EventScript_EmmieRules2::
	msgbox Common_Text_EmmieBattleRules2, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	end

Common_EventScript_EmmieRules3::
	msgbox Common_Text_EmmieBattleRules3, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	end

Common_Text_EmmieNotEnoughMons:
	.string "Sorry, {PLAYER}, the deal is we do this with\n"
	.string "six Pokémon each.\p"
	.string "Let's go fill our party, then we can\n"
	.string "come back and have our battle!$"

Common_Text_EmmieBattleRules1:
	.string "We will both take the same six Pokémon\n"
	.string "into battle, including movesets.\p"
	.string "My team will be fully levelled and healed,\n"
	.string "but I will use my own choice of items\l"
	.string "and natures.$"

Common_Text_EmmieBattleRules2:
	.string "I will take in three Pokémon of my own,\n"
	.string "then the same three that you choose.\p"
	.string "My team will be fully levelled and healed,\n"
	.string "but I will use my own choice of items\l"
	.string "and natures.$"

Common_Text_EmmieBattleRules3:
	.string "We will both take the same six Pokémon\n"
	.string "into battle, including movesets.\p"
	.string "My team will be fully levelled and healed,\n"
	.string "but I will use my own choice of items\l"
	.string "and natures.$"

Common_Text_EmmieBattleIntro1:
	.string "Emmie: Hey, {PLAYER}, hold up a minute!\p"
	.string "You've really grown a lot since we left\n"
	.string "home, but I made mom a promise.\p"
	.string "Before we ask Mr. Briney to take us to\n"
	.string "sea, I need to know that you can hold\l"
	.string "your own so far away from home.\p"
	.string "So, it's time to see if you can stand\n"
	.string "up to your big sis!\p"
	.string "Let me explain how this battle will work.\p"
	.string "Whichever six Pokémon you bring to the\n"
	.string "battle, I will use the same six Pokémon.\p"
	.string "Huh, what's that? How will I get the\n"
	.string "same Pokemon?\p"
	.string "{PLAYER}, you should know by now that as\n"
	.string "your big sister, I'm capable of things\l"
	.string "beyond your comprehension, okay?\p"
	.string "Let me know when you are ready, and\n"
	.string "until then just ask for any extra\l"
	.string "information that you want to know!$"

Common_Text_EmmieBattleIntro2:
	.string "This time my party will contain 3\n"
	.string "Pokémon of my choosing.\p"
	.string "The other 3 will match those you choose\n"
	.string "to take in alongside Shelly.\p"
	.string "Prepare your party and return here\n"
	.string "when you are ready or if you want\l"
	.string "more information on the battle.$"

Common_Text_EmmieBattleIntro3:
	.string "Emmie: Hey, {PLAYER}, hang on a minute!\p"
	.string "That's the end of Victory Road up\n"
	.string "ahead…\p"
	.string "You what this means, right? We are only\n"
	.string "a few steps away from the Elite Four!\p"
	.string "You've grown so much since we left\n"
	.string "home.\p"
	.string "I've watched you stand up to Team Aqua\n"
	.string "and Team Magma all by yourself.\p"
	.string "Perhaps I didn't keep my promise to\n"
	.string "mom very well, but you've overcome\l"
	.string "every obstacle in your way!\p"
	.string "That said, the Elite Four are going\n"
	.string "to be the biggest challenge yet…\p"
	.string "So, you have one more challenge to\n"
	.string "face before we get there.\p"
	.string "You know what that is, right?\n"
	.string "Well, me, of course!\p"
	.string "We're going to have one last battle\n"
	.string "against each other right here!\p"
	.string "Let me explain how this battle will work.\p"
	.string "Whichever six Pokémon you bring to the\n"
	.string "battle, I will use the same six Pokémon.\p"
	.string "Let me know when you are ready, and\n"
	.string "until then just ask for any extra\l"
	.string "information that you want to know!$"

Common_EventScript_EmmieItems::
	goto_if_set FLAG_EMMIE_BATTLE_1, Common_EventScript_EmmieItems1
	goto_if_set FLAG_EMMIE_BATTLE_2, Common_EventScript_EmmieItems2
	goto_if_set FLAG_EMMIE_BATTLE_3, Common_EventScript_EmmieItems3
	releaseall
	end

Common_EventScript_EmmieItems1::
	msgbox Common_Text_EmmieBattleItems1, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	end

Common_EventScript_EmmieItems2::
	msgbox Common_Text_EmmieBattleItems2, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	end

Common_EventScript_EmmieItems3::
	msgbox Common_Text_EmmieBattleItems3, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	end

Common_Text_EmmieBattleItems1:
	.string "For this battle, my team will hold the\n"
	.string "following items in this order:\p"
	.string "Focus Sash; Iron Ball; Eject Button;\n"
	.string "Lagging Tail; Sitrus Berry; Sticky Barb.$"

Common_Text_EmmieBattleItems2:
	.string "For this battle, my team will hold the\n"
	.string "following items in this order:\p"
	.string "ITEM 1; ITEM 2; ITEM 3;\n"
	.string "ITEM 4; ITEM 5; ITEM 6.$"

Common_Text_EmmieBattleItems3:
	.string "For this battle, my team will hold the\n"
	.string "following items in this order:\p"
	.string "Focus Sash; Gem; Eject Pack;\n"
	.string "Weakness Policy; Choice Scarf; Gem.$"

Common_EventScript_EmmieNatures::
	goto_if_set FLAG_EMMIE_BATTLE_1, Common_EventScript_EmmieNatures1
	goto_if_set FLAG_EMMIE_BATTLE_2, Common_EventScript_EmmieNatures2
	goto_if_set FLAG_EMMIE_BATTLE_3, Common_EventScript_EmmieNatures3
	releaseall
	end

Common_EventScript_EmmieNatures1::
	msgbox Common_Text_EmmieBattleNatures1, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	end

Common_EventScript_EmmieNatures2::
	msgbox Common_Text_EmmieBattleNatures2, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	end

Common_EventScript_EmmieNatures3::
	msgbox Common_Text_EmmieBattleNatures3, MSGBOX_DEFAULT
	goto Common_EventScript_EmmieInformation
	end

Common_Text_EmmieBattleNatures1:
	.string "My Pokémon's will have the following\n"
	.string "natures in this order:\p"
	.string "Relaxed; Serious; Brave; Sassy; Bashful;\n"
	.string "Quiet.$"

Common_Text_EmmieBattleNatures2:
	.string "My Pokémon's will have the following\n"
	.string "natures in this order:\p"
	.string "NATURE; NATURE; NATURE; NATURE; NATURE;\n"
	.string "NATURE.$"

Common_Text_EmmieBattleNatures3:
	.string "My Pokémon's will have the following\n"
	.string "natures in this order:\p"
	.string "Timid; Lonely; Naive; Rash; Bashful;\n"
	.string "Jolly.$"

Common_EventScript_EmmieBattle1::
	changefollowerbattler PARTNER_NONE
	setvar VAR_0x8004, SPECIAL_BATTLE_EMMIE
	setvar VAR_0x8005, TRAINER_EMMIE_1
	trainerbattle_no_intro TRAINER_EMMIE_1, Common_Text_EmmieBattleDefeat1
	changefollowerbattler PARTNER_EMMIE
	goto Common_EventScript_EmmieBattleWon1

Common_EventScript_EmmieBattleWon1::
	clearflag FLAG_EMMIE_BATTLE_1
	clearflag FLAG_EMMIE_BATTLE_INTRO_GIVEN
	setvar VAR_EMMIE_BATTLE_STATE, 2
	changefollowerbattler PARTNER_EMMIE
	msgbox Common_Text_EmmieBattleVictory1, MSGBOX_DEFAULT
	setvar VAR_PARTNER_EMMIE_STATE, 12
	closemessage
	end

Common_EventScript_EmmieBattle2::
	goto Common_EventScript_EmmieBattle2ChoosePartyForMultiBattle
	end


Common_EventScript_EmmieBattle2ChoosePartyForMultiBattle::
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, Common_EventScript_EmmieBattle2DoMultiBattle
	special LoadPlayerParty
	goto Common_EventScript_EmmieBattle2ChoosePartyForMultiBattle
	end

Common_EventScript_EmmieBattle2DoMultiBattle::
	playbgm MUS_PETALBURG_WOODS, TRUE
	multi_2_vs_1 TRAINER_EMMIE_2, Common_Text_EmmieBattleDefeat2, PARTNER_SHELLY
	switch VAR_RESULT
	case 1, Common_EventScript_EmmieBattleVictory2
	changefollowerbattler PARTNER_EMMIE
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

Common_Text_EmmieBattleDefeat1:
	.string "I hope you know that I was taking\n"
	.string "it easy on you!$"

Common_Text_EmmieBattleDefeat2:
	.string "Impressive. I can't deny how strong\n"
	.string "you have become.$"

Common_Text_EmmieBattleDefeat3:
	.string "Even alone you've learnt to stand\n"
	.string "up on your own two feet!$"

Common_EventScript_EmmieBattleVictory2::
	clearflag FLAG_EMMIE_BATTLE_2
	clearflag FLAG_EMMIE_BATTLE_INTRO_GIVEN
	setflag FLAG_EMMIE_BATTLE_2_DEFEATED
	setvar VAR_EMMIE_BATTLE_STATE, 4
	setvar VAR_PARTNER_EMMIE_STATE, 42
	changefollowerbattler PARTNER_EMMIE
	msgbox Common_Text_EmmieBattleVictory2, MSGBOX_DEFAULT
	closemessage
	end

Common_EventScript_EmmieBattle3::
	checkplayergender
	playbgm MUS_ENCOUNTER_CHAMPION, TRUE
	call_if_eq VAR_RESULT, MALE, Common_EventScript_EmmieBattle3ReadyMale
	call_if_eq VAR_RESULT, FEMALE, Common_Text_EmmieBattle3ReadyFemale
	changefollowerbattler PARTNER_NONE
	setvar VAR_0x8004, SPECIAL_BATTLE_EMMIE
	setvar VAR_0x8005, TRAINER_EMMIE_3
	playbgm MUS_VICTORY_ROAD, TRUE
	trainerbattle_no_intro TRAINER_EMMIE_3, Common_Text_EmmieBattleDefeat3
	changefollowerbattler PARTNER_EMMIE
	goto Common_EventScript_EmmieBattleWon3

Common_EventScript_EmmieBattleWon3::
	clearflag FLAG_EMMIE_BATTLE_3
	clearflag FLAG_EMMIE_BATTLE_INTRO_GIVEN
	setvar VAR_EMMIE_BATTLE_STATE, 2
	setvar VAR_LEVEL_CAP, 99
	changefollowerbattler PARTNER_EMMIE
	msgbox Common_Text_EmmieBattleVictory3, MSGBOX_DEFAULT
	closemessage
	end

Common_EventScript_EmmieBattle3ReadyMale::
	msgbox Common_Text_EmmieBattle3ReadyMale, MSGBOX_DEFAULT
	closemessage
	return

Common_EventScript_EmmieBattle3ReadyFemale::
	msgbox Common_Text_EmmieBattle3ReadyFemale, MSGBOX_DEFAULT
	closemessage
	return

Common_Text_EmmieBattle3ReadyMale:
	.string "Emmie: Hahahaha!\p"
	.string "Ready, lil bro?$"

Common_Text_EmmieBattle3ReadyFemale:
	.string "Emmie: Hahahaha!\p"
	.string "Ready, lil sis?$"

Common_Text_EmmieBattleVictory1:
	.string "Emmie: Wow, good stuff {PLAYER}!\p"
	.string "You're more than ready. Let's continue\n"
	.string "and speak to Mr. Briney!$"

Common_Text_EmmieBattleVictory2:
	.string "Emmie: Okay, I can't deny that you're\n"
	.string "capable of taking care of yourself.\p"
	.string "I'm going to come inside and will wait\n"
	.string "by the entrance.\p"
	.string "The moment I start to worry, I'm going\n"
	.string "to come in and get you out.\p"
	.string "Shelly, we will see you inside.$"

Common_Text_EmmieBattleVictory3:
	.string "Emmie: Impressive, {PLAYER}!\p"
	.string "I'm so proud of the trainer that\n"
	.string "you've become.\p"
	.string "Now, let's head on to the Elite Four!$"

Common_Text_EmmieBattleAreYouReady:
	.string "Emmie: Hey, are you ready, or do you\n"
	.string "need some information about our battle?$"

Common_Text_EmmieWhatDoYouNeedToKnow:
	.string "What do you want to know?$"

EventScript_SetBrineyLocation_House::
	setvar VAR_BRINEY_LOCATION, 1
	return

EventScript_SetBrineyLocation_Dewford::
	setvar VAR_BRINEY_LOCATION, 2
	return

EventScript_SetBrineyLocation_Route109::
	setvar VAR_BRINEY_LOCATION, 3
	return

	.include "data/scripts/pkmn_center_nurse.inc"
	.include "data/scripts/obtain_item.inc"
	.include "data/scripts/record_mix.inc"
	.include "data/scripts/pc.inc"

@ scripts/notices.inc? signs.inc? See comment about text/notices.inc
Common_EventScript_ShowPokemartSign::
	msgbox gText_PokemartSign, MSGBOX_SIGN
	end

Common_EventScript_ShowPokemonCenterSign::
	msgbox gText_PokemonCenterSign, MSGBOX_SIGN
	end

Common_ShowEasyChatScreen::
	fadescreen FADE_TO_BLACK
	special ShowEasyChatScreen
	fadescreen FADE_FROM_BLACK
	return

Common_EventScript_ReadyPetalburgGymForBattle::
	clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
	setflag FLAG_PETALBURG_MART_EXPANDED_ITEMS
	return

Common_EventScript_BufferTrendyPhrase::
	dotimebasedevents
	setvar VAR_0x8004, 0
	special BufferTrendyPhraseString
	return

EventScript_BackupMrBrineyLocation::
	copyvar VAR_0x8008, VAR_BRINEY_LOCATION
	setvar VAR_BRINEY_LOCATION, 0
	return

	.include "data/scripts/surf.inc"
	.include "data/scripts/rival_graphics.inc"
	.include "data/scripts/set_gym_trainers.inc"

EventScript_CancelMessageBox::
	special UseBlankMessageToCancelPokemonPic
	release
	end

Common_EventScript_ShowBagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
	end

Common_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	return

Common_EventScript_ShowNoRoomForDecor::
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	release
	end

Common_EventScript_NoRoomForDecor::
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	return

Common_EventScript_SetAbnormalWeather::
	setweather WEATHER_ABNORMAL
	return

Common_EventScript_SetWeatherIntenseSun::
	setweather WEATHER_DROUGHT
	doweather
	return

Common_EventScript_SetWeatherIntenseRain::
	setweather WEATHER_DOWNPOUR
	doweather
	return

Common_EventScript_PlayGymBadgeFanfare::
	playfanfare MUS_OBTAIN_BADGE
	waitfanfare
	return

Common_EventScript_OutOfCenterPartyHeal::
	fadescreenswapbuffers FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	fadescreenswapbuffers FADE_FROM_BLACK
	return

EventScript_RegionMap::
	lockall
	msgbox Common_Text_LookCloserAtMap, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special FieldShowRegionMap
	waitstate
	releaseall
	end

Common_EventScript_PlayBrineysBoatMusic::
	setflag FLAG_DONT_TRANSITION_MUSIC
	playbgm MUS_SAILING, FALSE
	return

Common_EventScript_StopBrineysBoatMusic::
	clearflag FLAG_DONT_TRANSITION_MUSIC
	fadedefaultbgm
	return

	.include "data/scripts/prof_birch.inc"

@ Below could be split as ferry.inc aside from the Rusturf tunnel script
Common_EventScript_FerryDepart::
	delay 60
	applymovement VAR_0x8004, Movement_FerryDepart
	waitmovement 0
	return

Movement_FerryDepart:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

EventScript_HideMrBriney::
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_BRINEY_LOCATION, 0
	return

RusturfTunnel_EventScript_SetRusturfTunnelOpen::
	removeobject LOCALID_RUSTURF_TUNNEL_WANDAS_BF
	removeobject LOCALID_RUSTURF_TUNNEL_WANDA
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA
	setvar VAR_RUSTURF_TUNNEL_STATE, 6
	setflag FLAG_RUSTURF_TUNNEL_OPENED
	return

EventScript_UnusedBoardFerry::
	delay 30
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	showobjectat LOCALID_PLAYER, 0
	delay 30
	applymovement LOCALID_PLAYER, Movement_UnusedBoardFerry
	waitmovement 0
	delay 30
	return

Movement_UnusedBoardFerry:
	walk_up
	step_end

Common_EventScript_FerryDepartIsland::
	call_if_eq VAR_FACING, DIR_SOUTH, Ferry_EventScript_DepartIslandSouth
	call_if_eq VAR_FACING, DIR_WEST, Ferry_EventScript_DepartIslandWest
	delay 30
	hideobjectat LOCALID_PLAYER, 0
	call Common_EventScript_FerryDepart
	return

	.include "data/scripts/cave_of_origin.inc"
	.include "data/scripts/kecleon.inc"

Common_EventScript_NameReceivedPartyMon::
	fadescreen FADE_TO_BLACK
	special ChangePokemonNickname
	waitstate
	return

Common_EventScript_PlayerHandedOverTheItem::
	bufferitemname STR_VAR_1, VAR_0x8004
	playfanfare MUS_OBTAIN_TMHM
	message gText_PlayerHandedOverTheItem
	waitmessage
	waitfanfare
	removeitem VAR_0x8004
	return

	.include "data/scripts/elite_four.inc"
	.include "data/scripts/movement.inc"
	.include "data/scripts/check_furniture.inc"
	.include "data/text/record_mix.inc"
	.include "data/text/pc.inc"
	.include "data/text/pkmn_center_nurse.inc"
	.include "data/text/mart_clerk.inc"
	.include "data/text/obtain_item.inc"

@ The below and surf.inc could be split into some text/notices.inc
gText_PokemartSign::
	.string "“Selected items for your convenience!”\n"
	.string "POKéMON MART$"

gText_PokemonCenterSign::
	.string "“Rejuvenate your tired partners!”\n"
	.string "POKéMON CENTER$"

gText_MomOrDadMightLikeThisProgram::
	.string "{STR_VAR_1} might like this program.\n"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "Better get going!$"

gText_WhichFloorWouldYouLike::
	.string "Welcome to LILYCOVE DEPARTMENT STORE.\p"
	.string "Which floor would you like?$"

gText_SandstormIsVicious::
	.string "The sandstorm is vicious.\n"
	.string "It's impossible to keep going.$"

gText_SelectWithoutRegisteredItem::
	.string "An item in the BAG can be\n"
	.string "registered to SELECT for easy use.$"

gText_PokemonTrainerSchoolEmail::
	.string "There's an e-mail from POKéMON TRAINER\n"
	.string "SCHOOL.\p"
	.string "… … … … … …\p"
	.string "A POKéMON may learn up to four moves.\p"
	.string "A TRAINER's expertise is tested on the\n"
	.string "move sets chosen for POKéMON.\p"
	.string "… … … … … …$"

gText_PlayerHouseBootPC::
	.string "{PLAYER} booted up the PC.$"

gText_PokeblockLinkCanceled::
	.string "The link was canceled.$"

gText_UnusedNicknameReceivedPokemon::
	.string "Want to give a nickname to\n"
	.string "the {STR_VAR_2} you received?$"

gText_PlayerWhitedOut::
	.string "{PLAYER} is out of usable\n"
	.string "POKéMON!\p{PLAYER} whited out!$"

gText_FirstShouldRestoreMonsHealth::
	.string "First, you should restore your\n"
	.string "POKéMON to full health.$"

gText_MonsHealedShouldBuyPotions::
	.string "Your POKéMON have been healed\n"
	.string "to perfect health.\p"
	.string "If your POKéMON's energy, HP,\n"
	.string "is down, please come see us.\p"
	.string "If you're planning to go far in the\n"
	.string "field, you should buy some POTIONS\l"
	.string "at the POKéMON MART.\p"
	.string "We hope you excel!$"

gText_MonsHealed::
	.string "Your POKéMON have been healed\n"
	.string "to perfect health.\p"
	.string "We hope you excel!$"

gText_HadQuiteAnExperienceTakeRest::
	.string "MOM: {PLAYER}!\n"
	.string "Welcome home.\p"
	.string "It sounds like you had quite\n"
	.string "an experience.\p"
	.string "Maybe you should take a quick\n"
	.string "rest.$"

gText_MomExplainHPGetPotions::
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\p"
	.string "I just heard from PROF. BIRCH.\p"
	.string "He said that POKéMON's energy is\n"
	.string "measured in HP.\p"
	.string "If your POKéMON lose their HP,\n"
	.string "you can restore them at any\l"
	.string "POKéMON CENTER.\p"
	.string "If you're going to travel far away,\n"
	.string "the smart TRAINER stocks up on\l"
	.string "POTIONS at the POKéMON MART.\p"
	.string "Make me proud, honey!\p"
	.string "Take care!$"

gText_RegisteredTrainerinPokeNav::
	.string "Registered {STR_VAR_1} {STR_VAR_2}\n"
	.string "in the POKéNAV.$"

gText_ComeBackWithSecretPower::
	.string "Do you know the TM SECRET POWER?\p"
	.string "Our group, we love the TM SECRET\n"
	.string "POWER.\p"
	.string "One of our members will give it to you.\n"
	.string "Come back and show me if you get it.\p"
	.string "We'll accept you as a member and sell\n"
	.string "you good stuff in secrecy.$"

gText_PokerusExplanation::
	.string "Your POKéMON may be infected with\n"
	.string "POKéRUS.\p"
	.string "Little is known about the POKéRUS\n"
	.string "except that they are microscopic life-\l"
	.string "forms that attach to POKéMON.\p"
	.string "While infected, POKéMON are said to\n"
	.string "grow exceptionally well.$"

	.include "data/text/surf.inc"

gText_DoorOpenedFarAway::
	.string "It sounded as if a door opened\n"
	.string "somewhere far away.$"

gText_BigHoleInTheWall::
	.string "There is a big hole in the wall.$"

gText_SorryWirelessClubAdjustments::
	.string "I'm terribly sorry.\n"
	.string "The POKéMON WIRELESS CLUB is\l"
	.string "undergoing adjustments now.$"

gText_UndergoingAdjustments::
	.string "It appears to be undergoing\n"
	.string "adjustments…$"

@ Unused
gText_SorryTradeCenterInspections::
	.string "I'm terribly sorry. The TRADE CENTER\n"
	.string "is undergoing inspections.$"

@ Unused
gText_SorryRecordCornerPreparation::
	.string "I'm terribly sorry. The RECORD CORNER\n"
	.string "is under preparation.$"

gText_PlayerHandedOverTheItem::
	.string "{PLAYER} handed over the\n"
	.string "{STR_VAR_1}.$"

gText_ThankYouForAccessingMysteryGift::
	.string "Thank you for accessing the\n"
	.string "MYSTERY GIFT System.$"

gText_PlayerFoundOneTMHM::
	.string "{PLAYER} found one {STR_VAR_1}\n"
	.string "{STR_VAR_2}!$"

gText_PlayerFoundTMHMs::
	.string "{PLAYER} found {STR_VAR_3} {STR_VAR_1}\n"
	.string "{STR_VAR_2}!$"

gText_Sudowoodo_Attacked::
	.string "The weird tree doesn't like the\n"
	.string "WAILMER PAIL!\p"
	.string "The weird tree attacked!$"

gText_LegendaryFlewAway::
	.string "The {STR_VAR_1} flew away!$"

	.include "data/text/pc_transfer.inc"
	.include "data/text/questionnaire.inc"
	.include "data/text/abnormal_weather.inc"

EventScript_SelectWithoutRegisteredItem::
	msgbox gText_SelectWithoutRegisteredItem, MSGBOX_SIGN
	end

	.include "data/scripts/field_poison.inc"

Common_EventScript_NopReturn::
	return

@ Unused
EventScript_CableClub_SetVarResult1::
	setvar VAR_RESULT, 1
	return

EventScript_CableClub_SetVarResult0::
	setvar VAR_RESULT, 0
	return

Common_EventScript_UnionRoomAttendant::
	call CableClub_EventScript_UnionRoomAttendant
	end

Common_EventScript_WirelessClubAttendant::
	call CableClub_EventScript_WirelessClubAttendant
	end

Common_EventScript_DirectCornerAttendant::
	call CableClub_EventScript_DirectCornerAttendant
	end

Common_EventScript_RemoveStaticPokemon::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Common_EventScript_LegendaryFlewAway::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	release
	end

EventScript_VsSeekerChargingDone::
	special VsSeekerFreezeObjectsAfterChargeComplete
	waitstate
	special VsSeekerResetObjectMovementAfterChargeComplete
	releaseall
	end

	.include "data/scripts/pc_transfer.inc"
	.include "data/scripts/questionnaire.inc"
	.include "data/scripts/abnormal_weather.inc"
	.include "data/scripts/trainer_script.inc"
	.include "data/scripts/berry_tree.inc"
	.include "data/scripts/secret_base.inc"
	.include "data/scripts/cable_club.inc"
	.include "data/text/cable_club.inc"
	.include "data/scripts/contest_hall.inc"
	.include "data/text/contest_strings.inc"
	.include "data/text/contest_link.inc"
	.include "data/text/contest_painting.inc"
	.include "data/scripts/tv.inc"
	.include "data/text/tv.inc"
	.include "data/scripts/interview.inc"
	.include "data/scripts/gabby_and_ty.inc"
	.include "data/text/pokemon_news.inc"
	.include "data/scripts/mauville_man.inc"
	.include "data/scripts/field_move_scripts.inc"
	.include "data/scripts/item_ball_scripts.inc"
	.include "data/scripts/profile_man.inc"
	.include "data/scripts/day_care.inc"
	.include "data/scripts/flash.inc"
	.include "data/scripts/players_house.inc"
	.include "data/scripts/berry_blender.inc"
	.include "data/text/mauville_man.inc"
	.include "data/text/trainers.inc"
	.include "data/scripts/repel.inc"
	.include "data/scripts/safari_zone.inc"
	.include "data/scripts/roulette.inc"
	.include "data/text/pokedex_rating.inc"
	.include "data/text/lottery_corner.inc"
	.include "data/text/event_ticket_1.inc"
	.include "data/text/braille.inc"
	.include "data/text/berries.inc"
	.include "data/text/shoal_cave.inc"
	.include "data/text/check_furniture.inc"
	.include "data/scripts/cave_hole.inc"
	.include "data/scripts/lilycove_lady.inc"
	.include "data/text/match_call.inc"
	.include "data/scripts/apprentice.inc"
	.include "data/text/apprentice.inc"
	.include "data/text/battle_dome.inc"
	.include "data/scripts/battle_pike.inc"
	.include "data/text/blend_master.inc"
	.include "data/text/battle_tent.inc"
	.include "data/text/event_ticket_2.inc"
	.include "data/text/move_tutors.inc"
	.include "data/scripts/move_tutors.inc"
	.include "data/scripts/trainer_hill.inc"
	.include "data/scripts/test_signpost.inc"
	.include "data/scripts/follower.inc"
	.include "data/text/save.inc"
	.include "data/text/birch_speech.inc"
	.include "data/scripts/dexnav.inc"
	.include "data/maps/Route100/scripts.inc"

	.include "data/maps/LittlerootCave/scripts.inc"

	.include "data/maps/LittlerootCave_Underwater/scripts.inc"

	.include "data/maps/Littleroot_Cave_WaterfallRoom/scripts.inc"

	.include "data/maps/LittlerootCave_WaterfallRoom_Underwater/scripts.inc"

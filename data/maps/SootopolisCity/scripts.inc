# 1 "data/maps/SootopolisCity/scripts.pory"

# 2 "data/maps/SootopolisCity/scripts.pory"

# 3 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_MapScripts::
# 4 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
# 5 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
# 6 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
# 7 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_OnFrame
# 8 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
# 9 "data/maps/SootopolisCity/scripts.pory"
	.byte 0
# 10 "data/maps/SootopolisCity/scripts.pory"

# 11 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad:
# 12 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 13 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 14 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockGymDoor
# 15 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_EventScript_LegendariesNotArrived
# 16 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockHouseDoors
# 17 "data/maps/SootopolisCity/scripts.pory"
	end
# 18 "data/maps/SootopolisCity/scripts.pory"

# 19 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesNotArrived::
# 20 "data/maps/SootopolisCity/scripts.pory"
	end
# 21 "data/maps/SootopolisCity/scripts.pory"

# 22 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 23 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 24 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 25 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 26 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 27 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 28 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 29 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 30 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 31 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 32 "data/maps/SootopolisCity/scripts.pory"
	return
# 33 "data/maps/SootopolisCity/scripts.pory"

# 34 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockGymDoor::
# 35 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
# 36 "data/maps/SootopolisCity/scripts.pory"
	return
# 37 "data/maps/SootopolisCity/scripts.pory"

# 38 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition:
# 39 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 40 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 41 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 42 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 43 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 44 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 45 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 46 "data/maps/SootopolisCity/scripts.pory"
	call_if_lt VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetArchieMaxiePos
# 47 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetStevenPos
# 48 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetStevenPos
# 49 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
# 50 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
# 51 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
# 52 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
# 53 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
# 54 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 55 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 56 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 57 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetOutsideGymObjPos
# 58 "data/maps/SootopolisCity/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 59 "data/maps/SootopolisCity/scripts.pory"
	end
# 60 "data/maps/SootopolisCity/scripts.pory"

# 61 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceGoFrontier::
# 62 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 63 "data/maps/SootopolisCity/scripts.pory"
	playse SE_PIN
# 64 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, Common_Movement_FaceRight
# 65 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 66 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, Common_Movement_ExclamationMark
# 67 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 68 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_FaceLeft
# 69 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 70 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 71 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_SCOTT
# 72 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WallaceComeHere, MSGBOX_DEFAULT
# 74 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 75 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, Common_Movement_WalkSlowRight
# 76 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachWallace
# 77 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieApproachWallace
# 78 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 80 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 81 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WallaceMadeAnArrangement, MSGBOX_DEFAULT
# 82 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 83 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, Common_Movement_FaceDown
# 84 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_SCOTT, Common_Movement_WalkSlowRight
# 85 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ScottExplanation, MSGBOX_DEFAULT
# 87 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 88 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, Common_Movement_WalkInPlaceFasterRight
# 89 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WallaceYouWillNeedThis, MSGBOX_DEFAULT
# 91 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 92 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 93 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_SCOTT
# 94 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_WALLACE
# 95 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 96 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 97 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 98 "data/maps/SootopolisCity/scripts.pory"
	delay 30
# 99 "data/maps/SootopolisCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 100 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 101 "data/maps/SootopolisCity/scripts.pory"
	end
# 102 "data/maps/SootopolisCity/scripts.pory"

# 103 "data/maps/SootopolisCity/scripts.pory"

# 104 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WallaceYouWillNeedThis:
# 105 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace: So, there you have it.\p"
# 106 "data/maps/SootopolisCity/scripts.pory"
	.string "I have marked the location of the\n"
# 107 "data/maps/SootopolisCity/scripts.pory"
	.string "Battle Frontier in your Pokénav.\p"
# 108 "data/maps/SootopolisCity/scripts.pory"
	.string "This means you will be able to fly there\n"
# 109 "data/maps/SootopolisCity/scripts.pory"
	.string "directly.\p"
# 110 "data/maps/SootopolisCity/scripts.pory"
	.string "I strongly recommend you get some final\n"
# 111 "data/maps/SootopolisCity/scripts.pory"
	.string "training in before your challenge.\p"
# 112 "data/maps/SootopolisCity/scripts.pory"
	.string "I wish you the best of luck, and I\n"
# 113 "data/maps/SootopolisCity/scripts.pory"
	.string "expect to see you in the Champion's\l"
# 114 "data/maps/SootopolisCity/scripts.pory"
	.string "Room very soon.\p"
# 115 "data/maps/SootopolisCity/scripts.pory"
	.string "Farewell!$"
# 116 "data/maps/SootopolisCity/scripts.pory"

# 117 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ScottExplanation:
# 118 "data/maps/SootopolisCity/scripts.pory"
	.string "Scott: Hello again, remember me?\p"
# 119 "data/maps/SootopolisCity/scripts.pory"
	.string "I run an invite-only facility called\n"
# 120 "data/maps/SootopolisCity/scripts.pory"
	.string "the Battle Frontier on the outskirts\l"
# 121 "data/maps/SootopolisCity/scripts.pory"
	.string "of Hoenn.\p"
# 122 "data/maps/SootopolisCity/scripts.pory"
	.string "Trainers of elite callibre are invited\n"
# 123 "data/maps/SootopolisCity/scripts.pory"
	.string "to tackle the seven facilities, each of\l"
# 124 "data/maps/SootopolisCity/scripts.pory"
	.string "which comes with its own gimmick.\p"
# 125 "data/maps/SootopolisCity/scripts.pory"
	.string "Usually competitors must battle their\n"
# 126 "data/maps/SootopolisCity/scripts.pory"
	.string "way through each facility.\p"
# 127 "data/maps/SootopolisCity/scripts.pory"
	.string "However, as a favour to Wallace, I have\n"
# 128 "data/maps/SootopolisCity/scripts.pory"
	.string "arranged for the senior trainer of each\l"
# 129 "data/maps/SootopolisCity/scripts.pory"
	.string "facility to battle you immediately.\p"
# 130 "data/maps/SootopolisCity/scripts.pory"
	.string "These trainers are known as the seven\n"
# 131 "data/maps/SootopolisCity/scripts.pory"
	.string "Frontier Brains.\p"
# 132 "data/maps/SootopolisCity/scripts.pory"
	.string "They're no pushover. After all, I hand\n"
# 133 "data/maps/SootopolisCity/scripts.pory"
	.string "picked them!\p"
# 134 "data/maps/SootopolisCity/scripts.pory"
	.string "You can challenge them in any order you\n"
# 135 "data/maps/SootopolisCity/scripts.pory"
	.string "like, and you will be able to leave and\l"
# 136 "data/maps/SootopolisCity/scripts.pory"
	.string "return as you see fit.\p"
# 137 "data/maps/SootopolisCity/scripts.pory"
	.string "Upon defeat, each will gift you an item\n"
# 138 "data/maps/SootopolisCity/scripts.pory"
	.string "in recognition of your achievement.\p"
# 139 "data/maps/SootopolisCity/scripts.pory"
	.string "They await your arrival in their\n"
# 140 "data/maps/SootopolisCity/scripts.pory"
	.string "facilities, and let me warn you\l"
# 141 "data/maps/SootopolisCity/scripts.pory"
	.string "they're ready for you!\p"
# 142 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha… I wish you the very best\n"
# 143 "data/maps/SootopolisCity/scripts.pory"
	.string "of luck.$"
# 144 "data/maps/SootopolisCity/scripts.pory"

# 145 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WallaceMadeAnArrangement:
# 146 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace: Firstly, allow me to\n"
# 147 "data/maps/SootopolisCity/scripts.pory"
	.string "congratulate you on defeating Juan.\p"
# 148 "data/maps/SootopolisCity/scripts.pory"
	.string "My former mentor is certainly no\n"
# 149 "data/maps/SootopolisCity/scripts.pory"
	.string "pushover.\p"
# 150 "data/maps/SootopolisCity/scripts.pory"
	.string "Together you have collected the\n"
# 151 "data/maps/SootopolisCity/scripts.pory"
	.string "eight Pokémon League gym badges.\p"
# 152 "data/maps/SootopolisCity/scripts.pory"
	.string "This means you are now eligible to\n"
# 153 "data/maps/SootopolisCity/scripts.pory"
	.string "challenge the Elite Four.\p"
# 154 "data/maps/SootopolisCity/scripts.pory"
	.string "Before rushing into things however,\n"
# 155 "data/maps/SootopolisCity/scripts.pory"
	.string "you may wish to make appropriate\l"
# 156 "data/maps/SootopolisCity/scripts.pory"
	.string "preparations.\p"
# 157 "data/maps/SootopolisCity/scripts.pory"
	.string "As thanks for your efforts in resolving\n"
# 158 "data/maps/SootopolisCity/scripts.pory"
	.string "the events here in Sootopolis, I have\l"
# 159 "data/maps/SootopolisCity/scripts.pory"
	.string "made a special arrangement for you.\p"
# 160 "data/maps/SootopolisCity/scripts.pory"
	.string "There are another group of trainers, who\n"
# 161 "data/maps/SootopolisCity/scripts.pory"
	.string "are a cut above Hoenn's Gym Leaders.\p"
# 162 "data/maps/SootopolisCity/scripts.pory"
	.string "You may wish to train with them prior to\n"
# 163 "data/maps/SootopolisCity/scripts.pory"
	.string "your challenge, and who knows, perhaps\l"
# 164 "data/maps/SootopolisCity/scripts.pory"
	.string "you will gain something by doing so.\p"
# 165 "data/maps/SootopolisCity/scripts.pory"
	.string "I will allow Scott here to explain\n"
# 166 "data/maps/SootopolisCity/scripts.pory"
	.string "further.$"
# 167 "data/maps/SootopolisCity/scripts.pory"

# 168 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieApproachWallace:
# 169 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 170 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 171 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 172 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 173 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 174 "data/maps/SootopolisCity/scripts.pory"

# 175 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachWallace:
# 176 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 177 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 178 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 179 "data/maps/SootopolisCity/scripts.pory"

# 180 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WallaceComeHere:
# 181 "data/maps/SootopolisCity/scripts.pory"
	.string "Wallace: {PLAYER}, Emmie, join me\n"
# 182 "data/maps/SootopolisCity/scripts.pory"
	.string "for a moment, please.$"
# 183 "data/maps/SootopolisCity/scripts.pory"

# 184 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallacePosition::
# 185 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 27, 33
# 186 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_WALLACE
# 187 "data/maps/SootopolisCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_NPC_FOLLOWER 32, 33
# 188 "data/maps/SootopolisCity/scripts.pory"
	showobjectat OBJ_EVENT_ID_NPC_FOLLOWER, MAP_SOOTOPOLIS_CITY
# 189 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_RIGHT
# 190 "data/maps/SootopolisCity/scripts.pory"
	return
# 191 "data/maps/SootopolisCity/scripts.pory"

# 192 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetArchieMaxiePos::
# 193 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_MT_PYRE_ARCHIE_DEFEATED, SootopolisCity_EventScript_ArchieDefeatedPos
# 194 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_MT_PYRE_MAXIE_DEFEATED, SootopolisCity_EventScript_MaxieDefeatedPos
# 195 "data/maps/SootopolisCity/scripts.pory"
	return
# 196 "data/maps/SootopolisCity/scripts.pory"

# 197 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetStevenPos::
# 198 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 31, 33
# 199 "data/maps/SootopolisCity/scripts.pory"
	return
# 200 "data/maps/SootopolisCity/scripts.pory"

# 201 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieDefeatedPos::
# 202 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 203 "data/maps/SootopolisCity/scripts.pory"
	return
# 204 "data/maps/SootopolisCity/scripts.pory"

# 205 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieDefeatedPos::
# 206 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 207 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_MAXIE, 31, 33
# 208 "data/maps/SootopolisCity/scripts.pory"
	return
# 209 "data/maps/SootopolisCity/scripts.pory"

# 210 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 211 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 212 "data/maps/SootopolisCity/scripts.pory"
	return
# 213 "data/maps/SootopolisCity/scripts.pory"

# 214 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 215 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 216 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_BOY_1, 46, 32
# 217 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_BOY_2, 19, 36
# 218 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 20, 35
# 219 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_NINJA_BOY, 48, 41
# 220 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WOMAN_1, 45, 43
# 221 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 222 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 223 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 224 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 225 "data/maps/SootopolisCity/scripts.pory"
	return
# 226 "data/maps/SootopolisCity/scripts.pory"

# 227 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 228 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
# 229 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalLayout
# 230 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 231 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
# 232 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
# 233 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
# 234 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 7, SootopolisCity_EventScript_SetLegendariesLayout
# 235 "data/maps/SootopolisCity/scripts.pory"
	return
# 236 "data/maps/SootopolisCity/scripts.pory"

# 237 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 238 "data/maps/SootopolisCity/scripts.pory"
	return
# 239 "data/maps/SootopolisCity/scripts.pory"

# 240 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 241 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 242 "data/maps/SootopolisCity/scripts.pory"
	return
# 243 "data/maps/SootopolisCity/scripts.pory"

# 244 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 245 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
# 246 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetNormalWeather
# 247 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 248 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 249 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
# 250 "data/maps/SootopolisCity/scripts.pory"
	return
# 251 "data/maps/SootopolisCity/scripts.pory"

# 252 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 253 "data/maps/SootopolisCity/scripts.pory"
	return
# 254 "data/maps/SootopolisCity/scripts.pory"

# 255 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 256 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 257 "data/maps/SootopolisCity/scripts.pory"
	return
# 258 "data/maps/SootopolisCity/scripts.pory"

# 259 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 260 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 261 "data/maps/SootopolisCity/scripts.pory"
	return
# 262 "data/maps/SootopolisCity/scripts.pory"

# 263 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 264 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 265 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
# 266 "data/maps/SootopolisCity/scripts.pory"
	return
# 267 "data/maps/SootopolisCity/scripts.pory"

# 268 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 269 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 270 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 18
# 271 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
# 272 "data/maps/SootopolisCity/scripts.pory"
	end
# 273 "data/maps/SootopolisCity/scripts.pory"

# 274 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 275 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 276 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 29, 33
# 277 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_MAXIE, 33, 35
# 278 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_ARCHIE, 34, 35
# 279 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 0, SootopolisCity_EventScript_SetWallaceMiddle
# 280 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 1, SootopolisCity_EventScript_SetWallaceRight
# 281 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_WALLACE_STATE, 2, SootopolisCity_EventScript_SetWallaceLeft
# 282 "data/maps/SootopolisCity/scripts.pory"
	return
# 283 "data/maps/SootopolisCity/scripts.pory"

# 284 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceMiddle::
# 285 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 33
# 286 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 287 "data/maps/SootopolisCity/scripts.pory"
	return
# 288 "data/maps/SootopolisCity/scripts.pory"

# 289 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceRight::
# 290 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 32, 33
# 291 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 292 "data/maps/SootopolisCity/scripts.pory"
	return
# 293 "data/maps/SootopolisCity/scripts.pory"

# 294 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWallaceLeft::
# 295 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 30, 33
# 296 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 297 "data/maps/SootopolisCity/scripts.pory"
	return
# 298 "data/maps/SootopolisCity/scripts.pory"

# 299 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 300 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 301 "data/maps/SootopolisCity/scripts.pory"
	return
# 302 "data/maps/SootopolisCity/scripts.pory"

# 303 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 304 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NoMusic
# 305 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_SetWallacePosition
# 306 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 307 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 308 "data/maps/SootopolisCity/scripts.pory"

# 309 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NoMusic::
# 310 "data/maps/SootopolisCity/scripts.pory"
	playbgm MUS_NONE, FALSE
# 311 "data/maps/SootopolisCity/scripts.pory"
	end
# 312 "data/maps/SootopolisCity/scripts.pory"

# 313 "data/maps/SootopolisCity/scripts.pory"

# 314 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 315 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 316 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 7, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 317 "data/maps/SootopolisCity/scripts.pory"
	end
# 318 "data/maps/SootopolisCity/scripts.pory"

# 319 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 320 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 321 "data/maps/SootopolisCity/scripts.pory"
	return
# 322 "data/maps/SootopolisCity/scripts.pory"

# 323 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 324 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 325 "data/maps/SootopolisCity/scripts.pory"
	return
# 326 "data/maps/SootopolisCity/scripts.pory"

# 327 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 328 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_ABNORMAL_WEATHER_SUN, Common_EventScript_SetWeatherIntenseSun
# 329 "data/maps/SootopolisCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather	
# 330 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 331 "data/maps/SootopolisCity/scripts.pory"
	end
# 332 "data/maps/SootopolisCity/scripts.pory"

# 333 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 334 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 335 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_WallaceGoFrontier
# 336 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 7, SootopolisCity_EventScript_StartRayquazaScene
# 337 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 70, SootopolisCity_EventScript_ProgressEmmieState
# 338 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 64, SootopolisCity_EventScript_ProgressEmmieStateReturnToSkyPillar
# 339 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 65, SootopolisCity_EventScript_ProgressEmmieStateReturnToSkyPillar
# 340 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_PARTNER_EMMIE_STATE, 66, SootopolisCity_EventScript_ProgressEmmieStateReturnToSkyPillar
# 341 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 342 "data/maps/SootopolisCity/scripts.pory"

# 343 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ProgressEmmieStateReturnToSkyPillar::
# 344 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 67
# 345 "data/maps/SootopolisCity/scripts.pory"
	return
# 346 "data/maps/SootopolisCity/scripts.pory"

# 347 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ProgressEmmieState::
# 348 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 69
# 349 "data/maps/SootopolisCity/scripts.pory"
	return
# 350 "data/maps/SootopolisCity/scripts.pory"

# 351 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 352 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 353 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 354 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 355 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 356 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 357 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 358 "data/maps/SootopolisCity/scripts.pory"
	end
# 359 "data/maps/SootopolisCity/scripts.pory"

# 360 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 361 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 362 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 363 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 364 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 366 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 367 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 368 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 369 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 370 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 371 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 372 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 373 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 374 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 375 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 376 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 377 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 378 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 379 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 380 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 381 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 382 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 383 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 384 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 385 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 386 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 387 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 388 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 389 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 390 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 391 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 392 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 393 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 394 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
# 395 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 396 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 397 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 398 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 399 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 400 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 401 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 402 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 403 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 404 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 405 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 406 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 407 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 408 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 409 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 410 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 411 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 412 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 413 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 414 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 415 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 416 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 417 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 418 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 419 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 420 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 421 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 422 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 423 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 424 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 425 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 426 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 427 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 428 "data/maps/SootopolisCity/scripts.pory"
	end
# 429 "data/maps/SootopolisCity/scripts.pory"

# 430 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
# 431 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 432 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 433 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 434 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 435 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 436 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 437 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 438 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 439 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 440 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 441 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 442 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 443 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 444 "data/maps/SootopolisCity/scripts.pory"

# 445 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
# 446 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 447 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 448 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 449 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 450 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 451 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 452 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 453 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 454 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 455 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 456 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 457 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 458 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 459 "data/maps/SootopolisCity/scripts.pory"

# 460 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 461 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 462 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 463 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 464 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 465 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 466 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 467 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 468 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 469 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 470 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 471 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 472 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 473 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 474 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 475 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 476 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 477 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 478 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 479 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 480 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 481 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 483 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 484 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 485 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 486 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 487 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 488 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 489 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 490 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 491 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 492 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 493 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 494 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonAttack
# 495 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 496 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 497 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 498 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 499 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 500 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 501 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 502 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 503 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 504 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 505 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 506 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 507 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 508 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonDefend
# 509 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 511 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 512 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 513 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 514 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 515 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 516 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 517 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 518 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 520 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 521 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_Movement_GroudonIdle
# 522 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 523 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 525 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 526 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 527 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 528 "data/maps/SootopolisCity/scripts.pory"
	end
# 529 "data/maps/SootopolisCity/scripts.pory"

# 530 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 531 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 532 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 533 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 536 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 537 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 538 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 540 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 541 "data/maps/SootopolisCity/scripts.pory"

# 542 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 544 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 545 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 546 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 549 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 550 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 551 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 552 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 553 "data/maps/SootopolisCity/scripts.pory"

# 554 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 555 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 556 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 557 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 558 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 559 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 560 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 561 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 562 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 563 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 564 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 565 "data/maps/SootopolisCity/scripts.pory"

# 566 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 567 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 568 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 569 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 570 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 571 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 572 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 573 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 574 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 575 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 576 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 577 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 578 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 579 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 580 "data/maps/SootopolisCity/scripts.pory"

# 581 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 582 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 583 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 584 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 585 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 586 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 587 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 588 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 589 "data/maps/SootopolisCity/scripts.pory"

# 590 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 591 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 592 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 593 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 595 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 596 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 597 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 598 "data/maps/SootopolisCity/scripts.pory"

# 599 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 600 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 601 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 602 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 603 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 604 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 605 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 606 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 607 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 608 "data/maps/SootopolisCity/scripts.pory"

# 609 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 610 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 611 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 612 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 613 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 614 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 615 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 616 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 617 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 618 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 619 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 620 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 621 "data/maps/SootopolisCity/scripts.pory"

# 622 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 623 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 624 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 625 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 626 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 627 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 628 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 629 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 630 "data/maps/SootopolisCity/scripts.pory"

# 631 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 632 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 633 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 634 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 635 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 636 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 637 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 638 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 639 "data/maps/SootopolisCity/scripts.pory"

# 640 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 641 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 642 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 643 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 644 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 69
# 645 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 646 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 647 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 648 "data/maps/SootopolisCity/scripts.pory"
	end
# 649 "data/maps/SootopolisCity/scripts.pory"

# 650 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 651 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 652 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 653 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 654 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 656 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 657 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 658 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 659 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 660 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 661 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 662 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_SOOTOPOLIS_RAYQUAZA, MAP_SOOTOPOLIS_CITY
# 663 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 664 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 665 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 666 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 667 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 668 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 669 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 670 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 671 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 672 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 673 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 674 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 675 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 676 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 677 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 678 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 679 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 680 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 681 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 682 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 683 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 684 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 685 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 686 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 687 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 688 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 689 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 690 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 691 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 692 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 693 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 694 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 695 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_ABNORMAL_WEATHER_RAIN
# 696 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 697 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 698 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 699 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 700 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 701 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
# 702 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 703 "data/maps/SootopolisCity/scripts.pory"
	end
# 704 "data/maps/SootopolisCity/scripts.pory"

# 705 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 706 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 707 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 708 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 709 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 710 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 711 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 712 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 713 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 714 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 715 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 716 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 717 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 718 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 719 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 720 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 721 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 722 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 723 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 724 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 725 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 726 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 727 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 728 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 729 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 730 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 731 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 732 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 733 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 734 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 735 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 736 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 737 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 738 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 739 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 740 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 741 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 742 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 743 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 744 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 746 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 747 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 748 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 749 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_ABNORMAL_WEATHER_RAIN
# 750 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_SKY_PILLAR_STATE, 1
# 751 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 752 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 753 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 754 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 755 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
# 756 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 757 "data/maps/SootopolisCity/scripts.pory"
	end
# 758 "data/maps/SootopolisCity/scripts.pory"

# 759 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 760 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 761 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 762 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 763 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 764 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 765 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 766 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 767 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 768 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 769 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 770 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 771 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 772 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 773 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 774 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 775 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 776 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 777 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 778 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 779 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 780 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 781 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 782 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 783 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 784 "data/maps/SootopolisCity/scripts.pory"
	return
# 785 "data/maps/SootopolisCity/scripts.pory"

# 786 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 787 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 788 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 789 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 790 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 791 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 792 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 793 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 794 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 795 "data/maps/SootopolisCity/scripts.pory"

# 796 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 797 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 798 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 799 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 800 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 801 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 802 "data/maps/SootopolisCity/scripts.pory"

# 803 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 804 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 805 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 806 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 807 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 808 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 809 "data/maps/SootopolisCity/scripts.pory"

# 810 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 811 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 812 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 813 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 814 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 815 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 816 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 817 "data/maps/SootopolisCity/scripts.pory"

# 818 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 819 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 820 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 821 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 822 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 823 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 824 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 825 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 826 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 827 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 828 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 829 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 830 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 831 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 832 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 833 "data/maps/SootopolisCity/scripts.pory"

# 834 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 835 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 836 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 837 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 838 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 839 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 840 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 841 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 842 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 843 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 844 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 845 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 846 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 847 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 848 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 849 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 850 "data/maps/SootopolisCity/scripts.pory"

# 851 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 852 "data/maps/SootopolisCity/scripts.pory"
	lock
# 853 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 854 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ExpertPostLegendaries
# 855 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 856 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 857 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 858 "data/maps/SootopolisCity/scripts.pory"
	release
# 859 "data/maps/SootopolisCity/scripts.pory"
	end
# 860 "data/maps/SootopolisCity/scripts.pory"

# 861 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 862 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 863 "data/maps/SootopolisCity/scripts.pory"
	release
# 864 "data/maps/SootopolisCity/scripts.pory"
	end
# 865 "data/maps/SootopolisCity/scripts.pory"

# 866 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 867 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 868 "data/maps/SootopolisCity/scripts.pory"
	release
# 869 "data/maps/SootopolisCity/scripts.pory"
	end
# 870 "data/maps/SootopolisCity/scripts.pory"

# 871 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 872 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 873 "data/maps/SootopolisCity/scripts.pory"
	release
# 874 "data/maps/SootopolisCity/scripts.pory"
	end
# 875 "data/maps/SootopolisCity/scripts.pory"

# 876 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 877 "data/maps/SootopolisCity/scripts.pory"
	lock
# 878 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 879 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 880 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_KiriGiveBerry
# 881 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 882 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 883 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 884 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 885 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 886 "data/maps/SootopolisCity/scripts.pory"
	release
# 887 "data/maps/SootopolisCity/scripts.pory"
	end
# 888 "data/maps/SootopolisCity/scripts.pory"

# 889 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 890 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 891 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 892 "data/maps/SootopolisCity/scripts.pory"
	release
# 893 "data/maps/SootopolisCity/scripts.pory"
	end
# 894 "data/maps/SootopolisCity/scripts.pory"

# 895 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 896 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 897 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 898 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 899 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 900 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 901 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 902 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 903 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 904 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 905 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 906 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 907 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 908 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 909 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 910 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 911 "data/maps/SootopolisCity/scripts.pory"
	end
# 912 "data/maps/SootopolisCity/scripts.pory"

# 913 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 914 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 915 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 916 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 917 "data/maps/SootopolisCity/scripts.pory"
	release
# 918 "data/maps/SootopolisCity/scripts.pory"
	end
# 919 "data/maps/SootopolisCity/scripts.pory"

# 920 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 921 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 922 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 923 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 924 "data/maps/SootopolisCity/scripts.pory"
	release
# 925 "data/maps/SootopolisCity/scripts.pory"
	end
# 926 "data/maps/SootopolisCity/scripts.pory"

# 927 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 928 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 929 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 930 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 931 "data/maps/SootopolisCity/scripts.pory"
	release
# 932 "data/maps/SootopolisCity/scripts.pory"
	end
# 933 "data/maps/SootopolisCity/scripts.pory"

# 934 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 935 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 936 "data/maps/SootopolisCity/scripts.pory"
	release
# 937 "data/maps/SootopolisCity/scripts.pory"
	end
# 938 "data/maps/SootopolisCity/scripts.pory"

# 939 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 940 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 941 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FacePlayer
# 942 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 943 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 944 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 945 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 946 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FaceOriginalDirection
# 947 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 948 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 949 "data/maps/SootopolisCity/scripts.pory"
	end
# 950 "data/maps/SootopolisCity/scripts.pory"

# 951 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 952 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 953 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 954 "data/maps/SootopolisCity/scripts.pory"
	end
# 955 "data/maps/SootopolisCity/scripts.pory"

# 956 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 957 "data/maps/SootopolisCity/scripts.pory"
	lock
# 958 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 959 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_ManPostLegendaries
# 960 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 961 "data/maps/SootopolisCity/scripts.pory"
	release
# 962 "data/maps/SootopolisCity/scripts.pory"
	end
# 963 "data/maps/SootopolisCity/scripts.pory"

# 964 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 965 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 966 "data/maps/SootopolisCity/scripts.pory"
	release
# 967 "data/maps/SootopolisCity/scripts.pory"
	end
# 968 "data/maps/SootopolisCity/scripts.pory"

# 969 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 970 "data/maps/SootopolisCity/scripts.pory"
	lock
# 971 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 972 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Woman1PostLegendaries
# 973 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 974 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 975 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 976 "data/maps/SootopolisCity/scripts.pory"
	release
# 977 "data/maps/SootopolisCity/scripts.pory"
	end
# 978 "data/maps/SootopolisCity/scripts.pory"

# 979 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 980 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 981 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 982 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_1, Common_Movement_FaceOriginalDirection
# 983 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 984 "data/maps/SootopolisCity/scripts.pory"
	release
# 985 "data/maps/SootopolisCity/scripts.pory"
	end
# 986 "data/maps/SootopolisCity/scripts.pory"

# 987 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 988 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 989 "data/maps/SootopolisCity/scripts.pory"
	release
# 990 "data/maps/SootopolisCity/scripts.pory"
	end
# 991 "data/maps/SootopolisCity/scripts.pory"

# 992 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 993 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 994 "data/maps/SootopolisCity/scripts.pory"
	release
# 995 "data/maps/SootopolisCity/scripts.pory"
	end
# 996 "data/maps/SootopolisCity/scripts.pory"

# 997 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 998 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 999 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FacePlayer
# 1000 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1001 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 1002 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_NinjaBoyNormal
# 1003 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 1004 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 1005 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1006 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 1007 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1008 "data/maps/SootopolisCity/scripts.pory"
	release
# 1009 "data/maps/SootopolisCity/scripts.pory"
	end
# 1010 "data/maps/SootopolisCity/scripts.pory"

# 1011 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 1012 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 1013 "data/maps/SootopolisCity/scripts.pory"
	release
# 1014 "data/maps/SootopolisCity/scripts.pory"
	end
# 1015 "data/maps/SootopolisCity/scripts.pory"

# 1016 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 1017 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 1018 "data/maps/SootopolisCity/scripts.pory"
	release
# 1019 "data/maps/SootopolisCity/scripts.pory"
	end
# 1020 "data/maps/SootopolisCity/scripts.pory"

# 1021 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 1022 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1023 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FacePlayer
# 1024 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1025 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 1026 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 1027 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_Boy1Normal
# 1028 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 1029 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 1030 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1031 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FaceOriginalDirection
# 1032 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1033 "data/maps/SootopolisCity/scripts.pory"
	release
# 1034 "data/maps/SootopolisCity/scripts.pory"
	end
# 1035 "data/maps/SootopolisCity/scripts.pory"

# 1036 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 1037 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 1038 "data/maps/SootopolisCity/scripts.pory"
	release
# 1039 "data/maps/SootopolisCity/scripts.pory"
	end
# 1040 "data/maps/SootopolisCity/scripts.pory"

# 1041 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 1042 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 1043 "data/maps/SootopolisCity/scripts.pory"
	release
# 1044 "data/maps/SootopolisCity/scripts.pory"
	end
# 1045 "data/maps/SootopolisCity/scripts.pory"

# 1046 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 1047 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 1048 "data/maps/SootopolisCity/scripts.pory"
	release
# 1049 "data/maps/SootopolisCity/scripts.pory"
	end
# 1050 "data/maps/SootopolisCity/scripts.pory"

# 1051 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 1052 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 1053 "data/maps/SootopolisCity/scripts.pory"
	end
# 1054 "data/maps/SootopolisCity/scripts.pory"

# 1055 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 1056 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 1057 "data/maps/SootopolisCity/scripts.pory"
	end
# 1058 "data/maps/SootopolisCity/scripts.pory"

# 1059 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 1060 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 1061 "data/maps/SootopolisCity/scripts.pory"
	end
# 1062 "data/maps/SootopolisCity/scripts.pory"

# 1063 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 1064 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1065 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, Common_Movement_FacePlayer
# 1066 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1067 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 1068 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
# 1069 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
# 1070 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
# 1071 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 1072 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 1073 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1074 "data/maps/SootopolisCity/scripts.pory"
	end
# 1075 "data/maps/SootopolisCity/scripts.pory"

# 1076 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 1077 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 1078 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1079 "data/maps/SootopolisCity/scripts.pory"
	end
# 1080 "data/maps/SootopolisCity/scripts.pory"

# 1081 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 1082 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 1083 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1084 "data/maps/SootopolisCity/scripts.pory"
	end
# 1085 "data/maps/SootopolisCity/scripts.pory"

# 1086 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 1087 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 1088 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1089 "data/maps/SootopolisCity/scripts.pory"
	end
# 1090 "data/maps/SootopolisCity/scripts.pory"

# 1091 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 1092 "data/maps/SootopolisCity/scripts.pory"
	getobjectcurrentxy OBJ_EVENT_ID_NPC_FOLLOWER, CURRENT_POSITION, VAR_TEMP_3, VAR_TEMP_4
# 1093 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_TEMP_3, 21, SootopolisCity_EventScript_EmmieApproachSteven
# 1094 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 1095 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1096 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 1097 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 1098 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 1099 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1100 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 1101 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 1102 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieWalkToCaveOfOrigin
# 1103 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1104 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 1105 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 1106 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1107 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 1108 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 1109 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieArriveCaveEntrance
# 1110 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1111 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 1112 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1113 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 1114 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 1115 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 1116 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1117 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_LEADERS
# 1118 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_PARTNER_EMMIE_STATE, 62
# 1119 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 1120 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1121 "data/maps/SootopolisCity/scripts.pory"
	end
# 1122 "data/maps/SootopolisCity/scripts.pory"

# 1123 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 1124 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 1125 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 1126 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1127 "data/maps/SootopolisCity/scripts.pory"
	return
# 1128 "data/maps/SootopolisCity/scripts.pory"

# 1129 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 1130 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 1131 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 1132 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieStartWalkToCaveOfOriginNorth
# 1133 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1134 "data/maps/SootopolisCity/scripts.pory"
	return
# 1135 "data/maps/SootopolisCity/scripts.pory"

# 1136 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_EmmieApproachSteven::
# 1137 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SootopolisCity_Movement_EmmieApproachSteven
# 1138 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1139 "data/maps/SootopolisCity/scripts.pory"
	return
# 1140 "data/maps/SootopolisCity/scripts.pory"

# 1141 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieApproachSteven:
# 1142 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1143 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1144 "data/maps/SootopolisCity/scripts.pory"
	face_up
# 1145 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1146 "data/maps/SootopolisCity/scripts.pory"

# 1147 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 1148 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1149 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1150 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1151 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1153 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1154 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1156 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1157 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1158 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1159 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1160 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1161 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1162 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1163 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1183 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1184 "data/maps/SootopolisCity/scripts.pory"

# 1185 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1187 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1189 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1190 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1193 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1194 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1195 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1196 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1197 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1198 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1199 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1200 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1201 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1202 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1203 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1208 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1210 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1211 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1212 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1213 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1214 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1215 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1216 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1217 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1218 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1219 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1220 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1221 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1222 "data/maps/SootopolisCity/scripts.pory"

# 1223 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1224 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1225 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1229 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1230 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1231 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1232 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1233 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1234 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1235 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1236 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1237 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1238 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1239 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1240 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1241 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1242 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1243 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1244 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1245 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1246 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1247 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1248 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1249 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1250 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1251 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1252 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1253 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1254 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1255 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1256 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1257 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1258 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1259 "data/maps/SootopolisCity/scripts.pory"

# 1260 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieStartWalkToCaveOfOriginNorth:
# 1261 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1262 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1263 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1264 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1265 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1266 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1267 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1268 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1269 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1270 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1271 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1272 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1273 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1274 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1275 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1276 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1277 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1278 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1279 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1280 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1281 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1282 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1283 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1284 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1285 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1286 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1287 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1288 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1289 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1290 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1291 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1292 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1293 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1294 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1295 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1296 "data/maps/SootopolisCity/scripts.pory"

# 1297 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1298 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1299 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1300 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1301 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1302 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1303 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1304 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1305 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1306 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1307 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1308 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1309 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1310 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1311 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1312 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1313 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1314 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1315 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1316 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1317 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1318 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1319 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1320 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1321 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1322 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1323 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1324 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1325 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1326 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1327 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1328 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1329 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1330 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1331 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1332 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1333 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1334 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1335 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1336 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1337 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1338 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1339 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1340 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1341 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1342 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1343 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1344 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1345 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1346 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1347 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1348 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1349 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1350 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1351 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1352 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1353 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1354 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1355 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1356 "data/maps/SootopolisCity/scripts.pory"

# 1357 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1358 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1359 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1360 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1361 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1362 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1363 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1364 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1365 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1366 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1367 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1368 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1369 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1370 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1371 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1372 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1373 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1374 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1375 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1376 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1377 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1378 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1379 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1380 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1381 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1382 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1383 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1384 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1385 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1386 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1387 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1388 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1389 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1390 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1391 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1392 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1393 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1394 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1395 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1396 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1397 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1398 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1399 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1400 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1401 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1402 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1403 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1404 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1405 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1406 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1407 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1408 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1409 "data/maps/SootopolisCity/scripts.pory"

# 1410 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieWalkToCaveOfOrigin:
# 1411 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1412 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1413 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1414 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1415 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1416 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1417 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1418 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1419 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1420 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1421 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1422 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1423 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1424 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1425 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1426 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1427 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1428 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1429 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1430 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1431 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1432 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1433 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1434 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1435 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1436 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1437 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1438 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1439 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1440 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1441 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1442 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1443 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1444 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1445 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1446 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1447 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1448 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1449 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1450 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1451 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1452 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1453 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1454 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1455 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1456 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1457 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1458 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1459 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1460 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1461 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1462 "data/maps/SootopolisCity/scripts.pory"

# 1463 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1464 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1465 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1466 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1467 "data/maps/SootopolisCity/scripts.pory"

# 1468 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1469 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1470 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1471 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1472 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1473 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1474 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1475 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1476 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1477 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1478 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_left
# 1479 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1480 "data/maps/SootopolisCity/scripts.pory"

# 1481 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1482 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1483 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1484 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1485 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1486 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1487 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1488 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1489 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1490 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1491 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1492 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1493 "data/maps/SootopolisCity/scripts.pory"

# 1494 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_EmmieArriveCaveEntrance:
# 1495 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1496 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1497 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1498 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1499 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1500 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1501 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1502 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1503 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1504 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_right
# 1505 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1506 "data/maps/SootopolisCity/scripts.pory"

# 1507 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1508 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1509 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1510 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1511 "data/maps/SootopolisCity/scripts.pory"

# 1512 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1513 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1514 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FacePlayer
# 1515 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1516 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1517 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1518 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1519 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FaceOriginalDirection
# 1520 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1521 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1522 "data/maps/SootopolisCity/scripts.pory"
	end
# 1523 "data/maps/SootopolisCity/scripts.pory"

# 1524 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1525 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1526 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1527 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1528 "data/maps/SootopolisCity/scripts.pory"
	end
# 1529 "data/maps/SootopolisCity/scripts.pory"

# 1530 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1531 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1532 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1533 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1534 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1535 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 1536 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1537 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1538 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1539 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1540 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1541 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1542 "data/maps/SootopolisCity/scripts.pory"
	end
# 1543 "data/maps/SootopolisCity/scripts.pory"

# 1544 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1545 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 1546 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1547 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1548 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1549 "data/maps/SootopolisCity/scripts.pory"
	end
# 1550 "data/maps/SootopolisCity/scripts.pory"

# 1551 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1552 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1553 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FacePlayer
# 1554 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1555 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1556 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1557 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1558 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FaceOriginalDirection
# 1559 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1560 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1561 "data/maps/SootopolisCity/scripts.pory"
	end
# 1562 "data/maps/SootopolisCity/scripts.pory"

# 1563 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1564 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1565 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1566 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1567 "data/maps/SootopolisCity/scripts.pory"
	end
# 1568 "data/maps/SootopolisCity/scripts.pory"

# 1569 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1570 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1571 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FacePlayer
# 1572 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1573 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1574 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1575 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1576 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FaceOriginalDirection
# 1577 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1578 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1579 "data/maps/SootopolisCity/scripts.pory"
	end
# 1580 "data/maps/SootopolisCity/scripts.pory"

# 1581 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1582 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1583 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1584 "data/maps/SootopolisCity/scripts.pory"
	end
# 1585 "data/maps/SootopolisCity/scripts.pory"

# 1586 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1587 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1588 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1589 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_GoToSkyPillar
# 1590 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_GoToGym
# 1591 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_GiveWaterfall
# 1592 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
# 1593 "data/maps/SootopolisCity/scripts.pory"
	release
# 1594 "data/maps/SootopolisCity/scripts.pory"
	end
# 1595 "data/maps/SootopolisCity/scripts.pory"

# 1596 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall::
# 1597 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 1598 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 1599 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 1600 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 1601 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1602 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_WallaceMoveFromGym
# 1603 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_EventScript_WallaceMoveFromGym
# 1604 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_WallaceMoveFromGymWest
# 1605 "data/maps/SootopolisCity/scripts.pory"
	release
# 1606 "data/maps/SootopolisCity/scripts.pory"
	end
# 1607 "data/maps/SootopolisCity/scripts.pory"

# 1608 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGym::
# 1609 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGym
# 1610 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1611 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 1612 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 1613 "data/maps/SootopolisCity/scripts.pory"
	return
# 1614 "data/maps/SootopolisCity/scripts.pory"

# 1615 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_WallaceMoveFromGymWest::
# 1616 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_Movement_WallaceMoveFromGymWest
# 1617 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1618 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 1619 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
# 1620 "data/maps/SootopolisCity/scripts.pory"
	return
# 1621 "data/maps/SootopolisCity/scripts.pory"

# 1622 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToSkyPillar::
# 1623 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1624 "data/maps/SootopolisCity/scripts.pory"
	release
# 1625 "data/maps/SootopolisCity/scripts.pory"
	end
# 1626 "data/maps/SootopolisCity/scripts.pory"

# 1627 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GoToGym::
# 1628 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
# 1629 "data/maps/SootopolisCity/scripts.pory"
	release
# 1630 "data/maps/SootopolisCity/scripts.pory"
	end
# 1631 "data/maps/SootopolisCity/scripts.pory"

# 1632 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGym:
# 1633 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1634 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1635 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1636 "data/maps/SootopolisCity/scripts.pory"

# 1637 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_WallaceMoveFromGymWest:
# 1638 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1639 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_faster_down
# 1640 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1641 "data/maps/SootopolisCity/scripts.pory"

# 1642 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1643 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1644 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_MaxieRayquaza
# 1645 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 1646 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1647 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1648 "data/maps/SootopolisCity/scripts.pory"
	end
# 1649 "data/maps/SootopolisCity/scripts.pory"

# 1650 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieRayquaza::
# 1651 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 1652 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1653 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1654 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1655 "data/maps/SootopolisCity/scripts.pory"
	end
# 1656 "data/maps/SootopolisCity/scripts.pory"

# 1657 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1658 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1659 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ArchieRayquaza
# 1660 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 1661 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1662 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1663 "data/maps/SootopolisCity/scripts.pory"
	end
# 1664 "data/maps/SootopolisCity/scripts.pory"

# 1665 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ArchieRayquaza::
# 1666 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 1667 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1668 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_MaxieArchieLeave
# 1669 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1670 "data/maps/SootopolisCity/scripts.pory"
	end
# 1671 "data/maps/SootopolisCity/scripts.pory"

# 1672 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_MaxieArchieLeave::
# 1673 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 1674 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 1675 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1676 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1677 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1678 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 1679 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 1680 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1681 "data/maps/SootopolisCity/scripts.pory"
	end
# 1682 "data/maps/SootopolisCity/scripts.pory"

# 1683 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1684 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1685 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1686 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1687 "data/maps/SootopolisCity/scripts.pory"

# 1688 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1689 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1690 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1691 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1692 "data/maps/SootopolisCity/scripts.pory"

# 1693 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1694 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
# 1695 "data/maps/SootopolisCity/scripts.pory"
	.string "Leader: JUAN\p"
# 1696 "data/maps/SootopolisCity/scripts.pory"
	.string "“The GYM LEADER with the beauty\n"
# 1697 "data/maps/SootopolisCity/scripts.pory"
	.string "of pure water!”$"
# 1698 "data/maps/SootopolisCity/scripts.pory"

# 1699 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1700 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
# 1701 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1702 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1703 "data/maps/SootopolisCity/scripts.pory"

# 1704 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1705 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1706 "data/maps/SootopolisCity/scripts.pory"

# 1707 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1708 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1709 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1710 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1711 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1712 "data/maps/SootopolisCity/scripts.pory"

# 1713 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1714 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant POKéMON suddenly appeared\n"
# 1715 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1716 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1717 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1718 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1719 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1720 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1721 "data/maps/SootopolisCity/scripts.pory"

# 1722 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1723 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1724 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green POKéMON?!$"
# 1725 "data/maps/SootopolisCity/scripts.pory"

# 1726 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1727 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON and KYOGRE…\n"
# 1728 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1729 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1730 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1731 "data/maps/SootopolisCity/scripts.pory"

# 1732 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1733 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1734 "data/maps/SootopolisCity/scripts.pory"
	.string "the two POKéMON aren't angry.\p"
# 1735 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1736 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1737 "data/maps/SootopolisCity/scripts.pory"

# 1738 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1739 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying POKéMON came down from\n"
# 1740 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1741 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON…$"
# 1742 "data/maps/SootopolisCity/scripts.pory"

# 1743 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1744 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1745 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1746 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of this round sky?$"
# 1747 "data/maps/SootopolisCity/scripts.pory"

# 1748 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1749 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1750 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1751 "data/maps/SootopolisCity/scripts.pory"

# 1752 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1753 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1754 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1755 "data/maps/SootopolisCity/scripts.pory"

# 1756 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1757 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red POKéMON!\n"
# 1758 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue POKéMON!$"
# 1759 "data/maps/SootopolisCity/scripts.pory"

# 1760 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1761 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1762 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1763 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON fighting over there?$"
# 1764 "data/maps/SootopolisCity/scripts.pory"

# 1765 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1766 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1767 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1768 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1769 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1770 "data/maps/SootopolisCity/scripts.pory"

# 1771 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1772 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1773 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1774 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1775 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1776 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1777 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1778 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1779 "data/maps/SootopolisCity/scripts.pory"

# 1780 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1781 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1782 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1783 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between POKéMON.\p"
# 1784 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1785 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1786 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1787 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1788 "data/maps/SootopolisCity/scripts.pory"

# 1789 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1790 "data/maps/SootopolisCity/scripts.pory"
	.string "A big POKéMON is fighting with\n"
# 1791 "data/maps/SootopolisCity/scripts.pory"
	.string "another big POKéMON!\p"
# 1792 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1793 "data/maps/SootopolisCity/scripts.pory"

# 1794 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1795 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty POKéMON came down from\n"
# 1796 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1797 "data/maps/SootopolisCity/scripts.pory"

# 1798 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1799 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1800 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY will get wrecked!$"
# 1801 "data/maps/SootopolisCity/scripts.pory"

# 1802 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1803 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY didn't get wrecked!$"
# 1804 "data/maps/SootopolisCity/scripts.pory"

# 1805 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1806 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1807 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to SOOTOPOLIS?\l"
# 1808 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1809 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1810 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1811 "data/maps/SootopolisCity/scripts.pory"

# 1812 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1813 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1814 "data/maps/SootopolisCity/scripts.pory"

# 1815 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1816 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
# 1817 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN.\p"
# 1818 "data/maps/SootopolisCity/scripts.pory"
	.string "The spirits of POKéMON, becalmed at\n"
# 1819 "data/maps/SootopolisCity/scripts.pory"
	.string "MT. PYRE, are said to be revived here.\p"
# 1820 "data/maps/SootopolisCity/scripts.pory"
	.string "Please leave.$"
# 1821 "data/maps/SootopolisCity/scripts.pory"

# 1822 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1823 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
# 1824 "data/maps/SootopolisCity/scripts.pory"
	.string "superior talent…\p"
# 1825 "data/maps/SootopolisCity/scripts.pory"
	.string "A TRAINER who has knowledge and\n"
# 1826 "data/maps/SootopolisCity/scripts.pory"
	.string "experience of many kinds of POKéMON…\p"
# 1827 "data/maps/SootopolisCity/scripts.pory"
	.string "If such a person were to appear, I was\n"
# 1828 "data/maps/SootopolisCity/scripts.pory"
	.string "instructed by WALLACE to lead that\l"
# 1829 "data/maps/SootopolisCity/scripts.pory"
	.string "TRAINER to this CAVE.$"
# 1830 "data/maps/SootopolisCity/scripts.pory"

# 1831 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1832 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
# 1833 "data/maps/SootopolisCity/scripts.pory"
	.string "The clash between the two awakened\n"
# 1834 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON was quelled by the awakening\l"
# 1835 "data/maps/SootopolisCity/scripts.pory"
	.string "of a third POKéMON…$"
# 1836 "data/maps/SootopolisCity/scripts.pory"

# 1837 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1838 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN…\p"
# 1839 "data/maps/SootopolisCity/scripts.pory"
	.string "With the passing of the crisis,\n"
# 1840 "data/maps/SootopolisCity/scripts.pory"
	.string "the cave, too, shall sleep…$"
# 1841 "data/maps/SootopolisCity/scripts.pory"

# 1842 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1843 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in\n"
# 1844 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1845 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1846 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1847 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1848 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1849 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS the most beautiful.$"
# 1850 "data/maps/SootopolisCity/scripts.pory"

# 1851 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1852 "data/maps/SootopolisCity/scripts.pory"
	.string "When two POKéMON that gigantic\n"
# 1853 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1854 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1855 "data/maps/SootopolisCity/scripts.pory"

# 1856 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1857 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third POKéMON flew down,\n"
# 1858 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1859 "data/maps/SootopolisCity/scripts.pory"

# 1860 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1861 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1862 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1863 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1864 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1865 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1866 "data/maps/SootopolisCity/scripts.pory"

# 1867 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1868 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1869 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1870 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1871 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1872 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1873 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1874 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1875 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1876 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON?$"
# 1877 "data/maps/SootopolisCity/scripts.pory"

# 1878 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1879 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1880 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1881 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON here?\p"
# 1882 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1883 "data/maps/SootopolisCity/scripts.pory"

# 1884 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GroudonPleaseStop:
# 1885 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: G… GROUDON…\n"
# 1886 "data/maps/SootopolisCity/scripts.pory"
	.string "Please! Stop what you're doing!\p"
# 1887 "data/maps/SootopolisCity/scripts.pory"
	.string "I know the extent of your power now!\p"
# 1888 "data/maps/SootopolisCity/scripts.pory"
	.string "If you keep going, all HOENN, not just\n"
# 1889 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS, will be utterly ruined!$"
# 1890 "data/maps/SootopolisCity/scripts.pory"

# 1891 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1892 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: So the super-ancient POKéMON\n"
# 1893 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only GROUDON and KYOGRE…\p"
# 1894 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1895 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one POKéMON's\l"
# 1896 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1897 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1898 "data/maps/SootopolisCity/scripts.pory"
	.string "Fu…\n"
# 1899 "data/maps/SootopolisCity/scripts.pory"
	.string "Fuhahaha…$"
# 1900 "data/maps/SootopolisCity/scripts.pory"

# 1901 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KyogreCalmDown:
# 1902 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE! What's wrong?!\n"
# 1903 "data/maps/SootopolisCity/scripts.pory"
	.string "Look over here! It's the RED ORB!\l"
# 1904 "data/maps/SootopolisCity/scripts.pory"
	.string "Calm down! KYOGRE!\p"
# 1905 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\n"
# 1906 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1907 "data/maps/SootopolisCity/scripts.pory"
	.string "It's no good!\n"
# 1908 "data/maps/SootopolisCity/scripts.pory"
	.string "It's not responding at all!$"
# 1909 "data/maps/SootopolisCity/scripts.pory"

# 1910 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1911 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE and GROUDON both\n"
# 1912 "data/maps/SootopolisCity/scripts.pory"
	.string "went off to who knows where.\p"
# 1913 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in HOENN has returned\n"
# 1914 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1915 "data/maps/SootopolisCity/scripts.pory"
	.string "Haha…\n"
# 1916 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha…\p"
# 1917 "data/maps/SootopolisCity/scripts.pory"
	.string "Maybe what we were trying to do was\n"
# 1918 "data/maps/SootopolisCity/scripts.pory"
	.string "something small, even meaningless,\l"
# 1919 "data/maps/SootopolisCity/scripts.pory"
	.string "to POKéMON…$"
# 1920 "data/maps/SootopolisCity/scripts.pory"

# 1921 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisisComeWithMe:
# 1922 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Those POKéMON fighting…\n"
# 1923 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON… And KYOGRE…\p"
# 1924 "data/maps/SootopolisCity/scripts.pory"
	.string "The two super-ancient POKéMON\n"
# 1925 "data/maps/SootopolisCity/scripts.pory"
	.string "were awakened from a long sleep…\p"
# 1926 "data/maps/SootopolisCity/scripts.pory"
	.string "And now they are smashing each other\n"
# 1927 "data/maps/SootopolisCity/scripts.pory"
	.string "with their uncontrollable energy…\p"
# 1928 "data/maps/SootopolisCity/scripts.pory"
	.string "…{PLAYER}{KUN}.\p"
# 1929 "data/maps/SootopolisCity/scripts.pory"
	.string "You being here now I'll take to mean\n"
# 1930 "data/maps/SootopolisCity/scripts.pory"
	.string "that you're prepared to become\l"
# 1931 "data/maps/SootopolisCity/scripts.pory"
	.string "involved in this crisis.\p"
# 1932 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, then, there's someone that\n"
# 1933 "data/maps/SootopolisCity/scripts.pory"
	.string "I'd like you to meet.\p"
# 1934 "data/maps/SootopolisCity/scripts.pory"
	.string "Come with me, please.$"
# 1935 "data/maps/SootopolisCity/scripts.pory"

# 1936 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon:
# 1937 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Listen, {PLAYER}{KUN}.\p"
# 1938 "data/maps/SootopolisCity/scripts.pory"
	.string "Does seeing GROUDON and KYOGRE make\n"
# 1939 "data/maps/SootopolisCity/scripts.pory"
	.string "you think POKéMON are to be feared?\p"
# 1940 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's not true.\n"
# 1941 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON are really more…\p"
# 1942 "data/maps/SootopolisCity/scripts.pory"
	.string "…Why am I asking you this?\n"
# 1943 "data/maps/SootopolisCity/scripts.pory"
	.string "You already know.$"
# 1944 "data/maps/SootopolisCity/scripts.pory"

# 1945 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HereWereAreHelpWallace:
# 1946 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Okay, here we are!\p"
# 1947 "data/maps/SootopolisCity/scripts.pory"
	.string "Inside here you'll find someone named\n"
# 1948 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE.\p"
# 1949 "data/maps/SootopolisCity/scripts.pory"
	.string "I think you have what's needed to\n"
# 1950 "data/maps/SootopolisCity/scripts.pory"
	.string "help him…$"
# 1951 "data/maps/SootopolisCity/scripts.pory"

# 1952 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim:
# 1953 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: I think you have what's\n"
# 1954 "data/maps/SootopolisCity/scripts.pory"
	.string "needed to help him…$"
# 1955 "data/maps/SootopolisCity/scripts.pory"

# 1956 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar:
# 1957 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: The SKY PILLAR…\p"
# 1958 "data/maps/SootopolisCity/scripts.pory"
	.string "I've never been there.\n"
# 1959 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder where it could be?$"
# 1960 "data/maps/SootopolisCity/scripts.pory"

# 1961 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza:
# 1962 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: So that's RAYQUAZA…\p"
# 1963 "data/maps/SootopolisCity/scripts.pory"
	.string "It's incredible how the two rampaging\n"
# 1964 "data/maps/SootopolisCity/scripts.pory"
	.string "POKéMON would flee from it in fear…$"
# 1965 "data/maps/SootopolisCity/scripts.pory"

# 1966 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft:
# 1967 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: It looks like both MAXIE and\n"
# 1968 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE have gone away somewhere.\p"
# 1969 "data/maps/SootopolisCity/scripts.pory"
	.string "Perhaps they've gone to MT. PYRE to\n"
# 1970 "data/maps/SootopolisCity/scripts.pory"
	.string "return those ORBS…$"
# 1971 "data/maps/SootopolisCity/scripts.pory"

# 1972 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1973 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: Oh?\n"
# 1974 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}{KUN}?\p"
# 1975 "data/maps/SootopolisCity/scripts.pory"
	.string "Haven't you scaled the SKY PILLAR\n"
# 1976 "data/maps/SootopolisCity/scripts.pory"
	.string "yet?\p"
# 1977 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm sure that you can make it to\n"
# 1978 "data/maps/SootopolisCity/scripts.pory"
	.string "the top of the SKY PILLAR…$"
# 1979 "data/maps/SootopolisCity/scripts.pory"

# 1980 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AquaMagmaDidntMeanHarm:
# 1981 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
# 1982 "data/maps/SootopolisCity/scripts.pory"
	.string "The leaders of TEAM MAGMA and AQUA,\n"
# 1983 "data/maps/SootopolisCity/scripts.pory"
	.string "I don't think they meant harm.\p"
# 1984 "data/maps/SootopolisCity/scripts.pory"
	.string "It wouldn't hurt to hear what they\n"
# 1985 "data/maps/SootopolisCity/scripts.pory"
	.string "have to say for themselves.$"
# 1986 "data/maps/SootopolisCity/scripts.pory"

# 1987 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThankYouForHelpAcceptThis:
# 1988 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\n"
# 1989 "data/maps/SootopolisCity/scripts.pory"
	.string "My eyes didn't deceive me.\p"
# 1990 "data/maps/SootopolisCity/scripts.pory"
	.string "Thanks to your help, SOOTOPOLIS…\n"
# 1991 "data/maps/SootopolisCity/scripts.pory"
	.string "No, all of HOENN was saved.\p"
# 1992 "data/maps/SootopolisCity/scripts.pory"
	.string "On behalf of the people, I thank you.\p"
# 1993 "data/maps/SootopolisCity/scripts.pory"
	.string "This is a gift from me.\n"
# 1994 "data/maps/SootopolisCity/scripts.pory"
	.string "Please accept it.$"
# 1995 "data/maps/SootopolisCity/scripts.pory"

# 1996 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ExplainWaterfallGoToGym:
# 1997 "data/maps/SootopolisCity/scripts.pory"
	.string "That HIDDEN MACHINE contains\n"
# 1998 "data/maps/SootopolisCity/scripts.pory"
	.string "WATERFALL.\p"
# 1999 "data/maps/SootopolisCity/scripts.pory"
	.string "If you have the RAIN BADGE, a POKéMON\n"
# 2000 "data/maps/SootopolisCity/scripts.pory"
	.string "that has learned that HM move can\l"
# 2001 "data/maps/SootopolisCity/scripts.pory"
	.string "force its way up waterfalls.\p"
# 2002 "data/maps/SootopolisCity/scripts.pory"
	.string "And where does one get the RAIN BADGE?\n"
# 2003 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, don't you?\p"
# 2004 "data/maps/SootopolisCity/scripts.pory"
	.string "That's right! You have to beat\n"
# 2005 "data/maps/SootopolisCity/scripts.pory"
	.string "the SOOTOPOLIS GYM LEADER.\p"
# 2006 "data/maps/SootopolisCity/scripts.pory"
	.string "When you're all set to go, step through\n"
# 2007 "data/maps/SootopolisCity/scripts.pory"
	.string "that door.$"
# 2008 "data/maps/SootopolisCity/scripts.pory"

# 2009 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DazzledByMentor:
# 2010 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: I'm sure that you will be\n"
# 2011 "data/maps/SootopolisCity/scripts.pory"
	.string "dazzled by my mentor's breathtakingly\l"
# 2012 "data/maps/SootopolisCity/scripts.pory"
	.string "elegant battle style.$"

# 1 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 2 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
.set LOCALID_DOCK, 1
# 3 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 4 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_MapScripts::
# 5 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.byte 0
# 6 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 7 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock::
# 8 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	lockall
# 9 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_FerryReady
# 10 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined
# 11 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran
# 12 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_GoFindStern
# 13 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails, MSGBOX_DEFAULT
# 14 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 15 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern, MSGBOX_DEFAULT
# 17 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 18 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 19 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
# 21 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 22 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
<<<<<<< HEAD
# 23 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
=======
	setvar VAR_PARTNER_EMMIE_STATE, 17
>>>>>>> 4e01050c72 (20250609 01)
	releaseall
# 24 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 25 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 26 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_FerryReady::
# 27 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 28 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_FerryIsReady, MSGBOX_DEFAULT
# 30 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 31 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 32 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 33 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined::
# 34 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 35 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs, MSGBOX_DEFAULT
# 37 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 38 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 39 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 40 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_GoFindStern::
# 41 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 42 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern, MSGBOX_DEFAULT
# 44 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 45 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 46 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 48 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 49 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 50 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran::
# 51 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 52 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran, MSGBOX_DEFAULT
# 54 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 55 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 56 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 57 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist1::
# 58 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing, MSGBOX_NPC
# 59 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 60 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 61 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist2::
# 62 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily, MSGBOX_NPC
# 63 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 64 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 65 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Briney::
# 66 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock, MSGBOX_NPC
# 67 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 68 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 69 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails:
# 70 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Umm… If this goes here, and that\n"
# 71 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "goes over there…\p"
# 72 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Then where does this thing go?\n"
# 73 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "And what about that doohickey?\p"
# 74 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aaargh! I can't make heads or tails\n"
# 75 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "of this!$"
# 76 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 77 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern:
# 78 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Hm?\n"
# 79 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Hi, I'm DOCK.\p"
# 80 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "CAPT. STERN commissioned me to\n"
# 81 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "design a ferry.\p"
# 82 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Oh! That there…\n"
# 83 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Are they DEVON GOODS?\p"
# 84 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "But, hmm…\n"
# 85 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "This won't do…\p"
# 86 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "CAPT. STERN went off somewhere.\n"
# 87 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "He said he had some work to do.\p"
# 88 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Could I get you to go find CAPT.\n"
# 89 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "STERN and deliver that to him?$"
# 90 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 91 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern:
# 92 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: Where could CAPT. STERN have\n"
# 93 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "gone off to?\p"
# 94 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Could you go find CAPT. STERN and\n"
# 95 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "deliver that parcel to him?$"
# 96 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 97 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran:
# 98 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: Shipbuilding is an art.\p"
# 99 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "A lot of things can't be figured out\n"
# 100 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "just by calculating.\p"
# 101 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "I really could use advice from a veteran\n"
# 102 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "who knows the seas…$"
# 103 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 104 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs:
# 105 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: Hi! MR. BRINEY's joined us to\n"
# 106 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "lend us his help.\p"
# 107 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Thanks to the veteran sailor, the\n"
# 108 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "ferry is steadily coming together.$"
# 109 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 110 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_FerryIsReady:
# 111 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "DOCK: The ferry is finally ready!\p"
# 112 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The new S.S. TIDAL is truly a marvel\n"
# 113 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "of technology!\p"
# 114 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "But, I get the feeling that we can\n"
# 115 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "make something even better.\p"
# 116 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "You know, there's never an end to\n"
# 117 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "technology's march.$"
# 118 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 119 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock:
# 120 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "MR. BRINEY: Ah, {PLAYER}{KUN}!\n"
# 121 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "It's been too long!\p"
# 122 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aye, since I met you, this old sea dog's\n"
# 123 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "been feeling frisky!\p"
# 124 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "So I've decided to help DOCK make\n"
# 125 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "a ferry.\p"
# 126 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aye, after all, a ferry would be able\n"
# 127 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "to carry a lot of people.\p"
# 128 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "But, you know, that DOCK is really\n"
# 129 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "something special.\p"
# 130 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "With his knack for technology and\n"
# 131 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "my experience, I'm sure that we can\l"
# 132 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "build one great ship, aye!$"
# 133 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 134 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing:
# 135 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The seasons, the weather, where\n"
# 136 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "the moon sits in the sky…\p"
# 137 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "These and other conditions make\n"
# 138 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "the sea change its expression.\p"
# 139 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "That's right!\n"
# 140 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The sea is like a living thing!$"
# 141 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 142 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily:
# 143 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "I get seasick real easily.\n"
# 144 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "So I get to help out here instead.$"

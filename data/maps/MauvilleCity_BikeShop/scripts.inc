# 1 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel::
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_AskSwitchBikes
# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_SkipGreeting
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_DEFAULT
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_BikeShop_EventScript_YesFar
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, MauvilleCity_BikeShop_EventScript_NotFar
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting::
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_DEFAULT
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_BikeShop_EventScript_YesFar
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, MauvilleCity_BikeShop_EventScript_NotFar
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike::
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_GetMachBike
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_NotFar::
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar::
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_GetMachBike
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike::
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike::
# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes::
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
@ If the player does not have a bike on them Rydel assumes its stored in the PC
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes::
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepBike::
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchAcroForMach::
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchMachForAcro::
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting:
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\n"
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A most energetic customer!\p"
# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Me? You may call me RYDEL.\n"
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm the owner of this cycle shop.$"
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Your RUNNING SHOES…\n"
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They're awfully filthy.\p"
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "How many badges do you have?$"
# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike:
# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: What's this?\p"
# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Come back when you have two badges\n"
# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and I'll gift you one of my bikes.$"
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne:
# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Hm, hm… … … … …\p"
# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You're saying that you came all this\n"
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "way from Littleroot?\p"
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "My goodness!\n"
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "That's ridiculously far!\p"
# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you had one of my bikes, you could\n"
# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "go anywhere easily while feeling the\l"
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gentle caress of the wind!\p"
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll tell you what!\n"
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll give you a Mach Bike!\p"
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, wait a second!\p"
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The Mach Bike is for cyclists who want\n"
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to feel the wind with their bodies!\p"
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "And an Acro Bike is for those who\n"
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "prefer technical rides!\p"
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike:
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike:
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"
# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes:
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: If you get the urge to switch\n"
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKES, just come see me!$"
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_WantToSwitchBikes:
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: I hope you are enjoying your\n"
# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Mach Bike!$"
# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes:
# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Okay, no problem!\n"
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll switch BIKES for you!$"
# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the MACH BIKE exchanged\n"
# 227 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for an ACRO BIKE.$"
# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the ACRO BIKE exchanged\n"
# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for a MACH BIKE.$"
# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt:
# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "RYDEL: Good, good!\n"
# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm happy that you like it!$"
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? What happened to that BIKE\n"
# 239 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I gave you?\p"
# 240 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, I get it, you stored it using your PC.\p"
# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, take it out of PC storage,\n"
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and I'll be happy to exchange it!\p"
# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "May the wind always be at your back\n"
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "on your adventure!$"
# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about BIKES while\n"
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I work here.\p"
# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you need advice on how to ride your\n"
# 250 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "BIKE, there're a couple handbooks in\l"
# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the back.$"
# 252 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the MACH BIKE.\p"
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 256 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 257 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A BIKE moves in the direction that\n"
# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the + Control Pad is pressed.\p"
# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It will speed up once it gets rolling.\p"
# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "To stop, release the + Control Pad.\n"
# 262 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The BIKE will slow to a stop.\p"
# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 266 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A MACH BIKE is speedy, but it can't\n"
# 267 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "stop very quickly.\p"
# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It gets a little tricky to get around\n"
# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a corner.\p"
# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Release the + Control Pad a little\n"
# 271 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "before the corner and slow down.\p"
# 272 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 275 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "throughout the HOENN region.\p"
# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The loose, crumbly sand makes it\n"
# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "impossible to climb normally.\p"
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "But if you have a MACH BIKE, you can\n"
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zip up a sandy slope.\p"
# 281 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 282 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the ACRO BIKE.\p"
# 285 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 286 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 287 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 288 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and the front wheel lifts up.\p"
# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can zip around with the front\n"
# 291 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "wheel up using the + Control Pad.\p"
# 292 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a wheelie.\p"
# 293 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 296 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
# 297 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "your BIKE can hop on the spot.\p"
# 298 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a bunny hop.\p"
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can ride while hopping, too.\p"
# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 302 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 303 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pad at the same time to jump.\p"
# 305 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the + Control Pad to the side\n"
# 306 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to jump sideways.\p"
# 307 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press it backwards to make the BIKE\n"
# 308 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "change directions while jumping.\p"
# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
